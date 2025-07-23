/*
** Automatically generated from `analysis.framework.m'
** by the Mercury compiler,
** version rotd-2025-07-23
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


// :- module analysis.framework.
// :- implementation.

/*
INIT mercury__analysis__framework__init
ENDINIT
*/

#include "analysis.framework.mih"


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
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct analysis__framework__analyses_3_p_1_env_0_s {
  MR_String * analysis__framework__analyses_3_p_1_env_0__HeadVar__2_2;
  MR_Word * analysis__framework__analyses_3_p_1_env_0__HeadVar__3_3;
  MR_Cont analysis__framework__analyses_3_p_1_env_0__cont;
  void * analysis__framework__analyses_3_p_1_env_0__cont_env_ptr;
  MR_Box analysis__framework__analyses_3_p_1_env_0__conv2_HeadVar__2_2;
  MR_Box analysis__framework__analyses_3_p_1_env_0__conv1_HeadVar__3_3;
};


static const MR_FA_PseudoTypeInfo_Struct1 analysis__framework__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__framework__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__framework__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__framework__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_analysis_result_2_0[3];

static const MR_ConstString analysis__framework__analysis__framework__field_names_analysis_result_2_0[3];

static const MR_DuArgLocn analysis__framework__analysis__framework__field_locns_analysis_result_2_0[3];

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_analysis_result_2_0;

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_analysis_result_2_0[1];

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_analysis_result_2[1];

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_analysis_result_2[1];

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_analysis_result_2[1];

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_0;

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_1;

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_2;

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_ordinal_ordered_analysis_status_0[3];

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_name_ordered_analysis_status_0[3];

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_analysis_status_0[3];

static const MR_FA_PseudoTypeInfo_Struct1 analysis__framework__unit__pti_unit_1__pseudo_514;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__framework__unit__pti_unit_1__pseudo_515;

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_analysis_type_0_0[2];

static const MR_TypeClassConstraint_3Struct analysis__framework__analysis__framework__exist_tc_constr_analysis_type_0_0_1;

static const MR_TypeClassConstraint analysis__framework__analysis__framework__exist_tc_constrs_analysis_type_0_0[1];

static const MR_DuExistLocn analysis__framework__analysis__framework__exist_locns_analysis_type_0_0[3];

static const MR_DuExistInfo analysis__framework__analysis__framework__exist_info_analysis_type_0_0;

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_analysis_type_0_0;

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_analysis_type_0_0[1];

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_analysis_type_0[1];

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_analysis_type_0[1];

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_analysis_type_0[1];

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_0;

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_1;

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_ordinal_ordered_fixpoint_type_0[2];

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_name_ordered_fixpoint_type_0[2];

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_fixpoint_type_0[2];

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_func_id_0_0[4];

static const MR_ConstString analysis__framework__analysis__framework__field_names_func_id_0_0[4];

static const MR_DuArgLocn analysis__framework__analysis__framework__field_locns_func_id_0_0[4];

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_func_id_0_0;

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_func_id_0_0[1];

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_func_id_0[1];

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_func_id_0[1];

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_func_id_0[1];

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_some_analysis_result_0_0[3];

static const MR_ConstString analysis__framework__analysis__framework__field_names_some_analysis_result_0_0[3];

static const MR_DuArgLocn analysis__framework__analysis__framework__field_locns_some_analysis_result_0_0[3];

static const MR_TypeClassConstraint_3Struct analysis__framework__analysis__framework__exist_tc_constr_some_analysis_result_0_0_1;

static const MR_TypeClassConstraint analysis__framework__analysis__framework__exist_tc_constrs_some_analysis_result_0_0[1];

static const MR_DuExistLocn analysis__framework__analysis__framework__exist_locns_some_analysis_result_0_0[3];

static const MR_DuExistInfo analysis__framework__analysis__framework__exist_info_some_analysis_result_0_0;

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_some_analysis_result_0_0;

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_some_analysis_result_0_0[1];

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_some_analysis_result_0[1];

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_some_analysis_result_0[1];

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_some_analysis_result_0[1];

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_to_term_1[1];

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_to_term_1[2];

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_to_term_1;

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_partial_order_2[2];

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_partial_order_2[2];

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_partial_order_2;

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_compiler_1[1];

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_compiler_1[5];

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_compiler_1;

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_call_pattern_2[2];

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_call_pattern_2;

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_call_pattern_2_1;

static const MR_TypeClassConstraint_1Struct analysis__framework__analysis__framework__type_class_decl_super_call_pattern_2_2;

static const MR_TypeClassConstraint analysis__framework__analysis__framework__type_class_decl_supers_call_pattern_2[2];

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_answer_pattern_2[2];

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_answer_pattern_2;

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_answer_pattern_2_1;

static const MR_TypeClassConstraint_1Struct analysis__framework__analysis__framework__type_class_decl_super_answer_pattern_2_2;

static const MR_TypeClassConstraint analysis__framework__analysis__framework__type_class_decl_supers_answer_pattern_2[2];

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_analysis_3[3];

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_analysis_3[6];

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_analysis_3;

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_analysis_3_1;

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_analysis_3_2;

static const MR_TypeClassConstraint analysis__framework__analysis__framework__type_class_decl_supers_analysis_3[2];

static void MR_CALL 
analysis__framework__analyses_3_p_1_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__framework____Compare____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__framework____Compare____analysis_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
analysis__framework____Compare____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__framework____Compare____analysis_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__framework____Compare____analysis_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__framework____Unify____fixpoint_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__framework____Compare____fixpoint_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__framework____Unify____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__framework____Compare____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis__framework____Unify____func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__framework____Compare____func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__framework____Unify____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__framework____Compare____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis__framework____Unify____some_analysis_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__framework____Compare____some_analysis_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 analysis__framework__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__framework__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__framework__list__pti_list_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__framework__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__framework__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__framework__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&analysis__framework__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_analysis_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__framework____Unify____analysis_map_1_0_10001)),
  ((MR_Box) (analysis__framework____Compare____analysis_map_1_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "analysis_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__framework__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_analysis_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis__framework____Unify____analysis_name_0_0_10001)),
  ((MR_Box) (analysis__framework____Compare____analysis_name_0_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "analysis_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)
};

static const MR_ConstString analysis__framework__analysis__framework__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

static const MR_DuArgLocn analysis__framework__analysis__framework__field_locns_analysis_result_2_0[3] = {
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

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_analysis_result_2_0 = {
  (MR_String) "analysis_result",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__framework__analysis__framework__field_types_analysis_result_2_0,
  analysis__framework__analysis__framework__field_names_analysis_result_2_0,
  analysis__framework__analysis__framework__field_locns_analysis_result_2_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_analysis_result_2_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_analysis_result_2_0 };

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_analysis_result_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__framework__analysis__framework__du_stag_ordered_analysis_result_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_analysis_result_2[1] = { &analysis__framework__analysis__framework__du_functor_desc_analysis_result_2_0 };

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_analysis_result_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_analysis_result_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__framework____Unify____analysis_result_2_0_10001)),
  ((MR_Box) (analysis__framework____Compare____analysis_result_2_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "analysis_result",
  { analysis__framework__analysis__framework__du_name_ordered_analysis_result_2 },
  { analysis__framework__analysis__framework__du_ptag_ordered_analysis_result_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__framework__analysis__framework__functor_number_map_analysis_result_2,

};

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  INT32_C(1)
};

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_ordinal_ordered_analysis_status_0[3] = {
  &analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_0,
  &analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_1,
  &analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_2
};

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_name_ordered_analysis_status_0[3] = {
  &analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_0,
  &analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_2,
  &analysis__framework__analysis__framework__enum_functor_desc_analysis_status_0_1
};

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_analysis_status_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_analysis_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis__framework____Unify____analysis_status_0_0_10001)),
  ((MR_Box) (analysis__framework____Compare____analysis_status_0_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "analysis_status",
  { analysis__framework__analysis__framework__enum_name_ordered_analysis_status_0 },
  { analysis__framework__analysis__framework__enum_ordinal_ordered_analysis_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  analysis__framework__analysis__framework__functor_number_map_analysis_status_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__framework__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 514) }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__framework__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 515) }
};

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&analysis__framework__unit__pti_unit_1__pseudo_514),
  (MR_PseudoTypeInfo) (&analysis__framework__unit__pti_unit_1__pseudo_515)
};

static const MR_TypeClassConstraint_3Struct analysis__framework__analysis__framework__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__framework__analysis__framework__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint analysis__framework__analysis__framework__exist_tc_constrs_analysis_type_0_0[1] = { (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__exist_tc_constr_analysis_type_0_0_1) };

static const MR_DuExistLocn analysis__framework__analysis__framework__exist_locns_analysis_type_0_0[3] = {
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

static const MR_DuExistInfo analysis__framework__analysis__framework__exist_info_analysis_type_0_0 = {
  INT16_C(0),
  INT16_C(3),
  INT16_C(1),
  analysis__framework__analysis__framework__exist_locns_analysis_type_0_0,
  analysis__framework__analysis__framework__exist_tc_constrs_analysis_type_0_0
};

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_analysis_type_0_0 = {
  (MR_String) "analysis_type",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__framework__analysis__framework__field_types_analysis_type_0_0,
  NULL,
  NULL,
  &analysis__framework__analysis__framework__exist_info_analysis_type_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_analysis_type_0_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_analysis_type_0_0 };

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_analysis_type_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__framework__analysis__framework__du_stag_ordered_analysis_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_analysis_type_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_analysis_type_0_0 };

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_analysis_type_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_analysis_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__framework____Unify____analysis_type_0_0_10001)),
  ((MR_Box) (analysis__framework____Compare____analysis_type_0_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "analysis_type",
  { analysis__framework__analysis__framework__du_name_ordered_analysis_type_0 },
  { analysis__framework__analysis__framework__du_ptag_ordered_analysis_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__framework__analysis__framework__functor_number_map_analysis_type_0,

};

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_ordinal_ordered_fixpoint_type_0[2] = {
  &analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_0,
  &analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_1
};

static const MR_EnumFunctorDescPtr analysis__framework__analysis__framework__enum_name_ordered_fixpoint_type_0[2] = {
  &analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_1,
  &analysis__framework__analysis__framework__enum_functor_desc_fixpoint_type_0_0
};

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_fixpoint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_fixpoint_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis__framework____Unify____fixpoint_type_0_0_10001)),
  ((MR_Box) (analysis__framework____Compare____fixpoint_type_0_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "fixpoint_type",
  { analysis__framework__analysis__framework__enum_name_ordered_fixpoint_type_0 },
  { analysis__framework__analysis__framework__enum_ordinal_ordered_fixpoint_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  analysis__framework__analysis__framework__functor_number_map_fixpoint_type_0,

};

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_func_analysis_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__framework____Unify____func_analysis_map_1_0_10001)),
  ((MR_Box) (analysis__framework____Compare____func_analysis_map_1_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "func_analysis_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__framework__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString analysis__framework__analysis__framework__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

static const MR_DuArgLocn analysis__framework__analysis__framework__field_locns_func_id_0_0[4] = {
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

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_func_id_0_0 = {
  (MR_String) "func_id",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__framework__analysis__framework__field_types_func_id_0_0,
  analysis__framework__analysis__framework__field_names_func_id_0_0,
  analysis__framework__analysis__framework__field_locns_func_id_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_func_id_0_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_func_id_0_0 };

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_func_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__framework__analysis__framework__du_stag_ordered_func_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_func_id_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_func_id_0_0 };

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_func_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_func_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__framework____Unify____func_id_0_0_10001)),
  ((MR_Box) (analysis__framework____Compare____func_id_0_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "func_id",
  { analysis__framework__analysis__framework__du_name_ordered_func_id_0 },
  { analysis__framework__analysis__framework__du_ptag_ordered_func_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__framework__analysis__framework__functor_number_map_func_id_0,

};

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_module_analysis_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__framework____Unify____module_analysis_map_1_0_10001)),
  ((MR_Box) (analysis__framework____Compare____module_analysis_map_1_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "module_analysis_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__framework__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo analysis__framework__analysis__framework__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 514),
  (MR_PseudoTypeInfo) ((MR_Integer) 515),
  (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)
};

static const MR_ConstString analysis__framework__analysis__framework__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

static const MR_DuArgLocn analysis__framework__analysis__framework__field_locns_some_analysis_result_0_0[3] = {
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

static const MR_TypeClassConstraint_3Struct analysis__framework__analysis__framework__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__framework__analysis__framework__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint analysis__framework__analysis__framework__exist_tc_constrs_some_analysis_result_0_0[1] = { (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__exist_tc_constr_some_analysis_result_0_0_1) };

static const MR_DuExistLocn analysis__framework__analysis__framework__exist_locns_some_analysis_result_0_0[3] = {
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

static const MR_DuExistInfo analysis__framework__analysis__framework__exist_info_some_analysis_result_0_0 = {
  INT16_C(0),
  INT16_C(3),
  INT16_C(1),
  analysis__framework__analysis__framework__exist_locns_some_analysis_result_0_0,
  analysis__framework__analysis__framework__exist_tc_constrs_some_analysis_result_0_0
};

static const MR_DuFunctorDesc analysis__framework__analysis__framework__du_functor_desc_some_analysis_result_0_0 = {
  (MR_String) "some_analysis_result",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__framework__analysis__framework__field_types_some_analysis_result_0_0,
  analysis__framework__analysis__framework__field_names_some_analysis_result_0_0,
  analysis__framework__analysis__framework__field_locns_some_analysis_result_0_0,
  &analysis__framework__analysis__framework__exist_info_some_analysis_result_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_stag_ordered_some_analysis_result_0_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_some_analysis_result_0_0 };

static const MR_DuPtagLayout analysis__framework__analysis__framework__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__framework__analysis__framework__du_stag_ordered_some_analysis_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__framework__analysis__framework__du_name_ordered_some_analysis_result_0[1] = { &analysis__framework__analysis__framework__du_functor_desc_some_analysis_result_0_0 };

static const MR_Integer analysis__framework__analysis__framework__functor_number_map_some_analysis_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__framework____Unify____some_analysis_result_0_0_10001)),
  ((MR_Box) (analysis__framework____Compare____some_analysis_result_0_0_10001)),
  (MR_String) "analysis.framework",
  (MR_String) "some_analysis_result",
  { analysis__framework__analysis__framework__du_name_ordered_some_analysis_result_0 },
  { analysis__framework__analysis__framework__du_ptag_ordered_some_analysis_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__framework__analysis__framework__functor_number_map_some_analysis_result_0,

};

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_to_term_1[1] = { (MR_String) "S" };

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_to_term_1[2] = {
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

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_to_term_1 = {
  (MR_String) "analysis.framework",
  (MR_String) "to_term",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  analysis__framework__analysis__framework__type_class_id_var_names_to_term_1,
  analysis__framework__analysis__framework__type_class_id_method_ids_to_term_1
};

const MR_TypeClassDeclStruct analysis__framework__analysis__framework__type_class_decl_to_term_1 = {
  &analysis__framework__analysis__framework__type_class_id_to_term_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_partial_order_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "T"
};

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_partial_order_2[2] = {
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

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_partial_order_2 = {
  (MR_String) "analysis.framework",
  (MR_String) "partial_order",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  analysis__framework__analysis__framework__type_class_id_var_names_partial_order_2,
  analysis__framework__analysis__framework__type_class_id_method_ids_partial_order_2
};

const MR_TypeClassDeclStruct analysis__framework__analysis__framework__type_class_decl_partial_order_2 = {
  &analysis__framework__analysis__framework__type_class_id_partial_order_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_compiler_1[1] = { (MR_String) "Compiler" };

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_compiler_1[5] = {
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

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_compiler_1 = {
  (MR_String) "analysis.framework",
  (MR_String) "compiler",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 5,
  analysis__framework__analysis__framework__type_class_id_var_names_compiler_1,
  analysis__framework__analysis__framework__type_class_id_method_ids_compiler_1
};

const MR_TypeClassDeclStruct analysis__framework__analysis__framework__type_class_decl_compiler_1 = {
  &analysis__framework__analysis__framework__type_class_id_compiler_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_call_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call"
};

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_call_pattern_2 = {
  (MR_String) "analysis.framework",
  (MR_String) "call_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__framework__analysis__framework__type_class_id_var_names_call_pattern_2,
  NULL
};

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_call_pattern_2_1 = {
  &analysis__framework__analysis__framework__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_1Struct analysis__framework__analysis__framework__type_class_decl_super_call_pattern_2_2 = {
  &analysis__framework__analysis__framework__type_class_decl_to_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_TypeClassConstraint analysis__framework__analysis__framework__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__type_class_decl_super_call_pattern_2_1),
  (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__type_class_decl_super_call_pattern_2_2)
};

const MR_TypeClassDeclStruct analysis__framework__analysis__framework__type_class_decl_call_pattern_2 = {
  &analysis__framework__analysis__framework__type_class_id_call_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_answer_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Answer"
};

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_answer_pattern_2 = {
  (MR_String) "analysis.framework",
  (MR_String) "answer_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__framework__analysis__framework__type_class_id_var_names_answer_pattern_2,
  NULL
};

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_answer_pattern_2_1 = {
  &analysis__framework__analysis__framework__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_1Struct analysis__framework__analysis__framework__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__framework__analysis__framework__type_class_decl_to_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_TypeClassConstraint analysis__framework__analysis__framework__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__type_class_decl_super_answer_pattern_2_1),
  (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__type_class_decl_super_answer_pattern_2_2)
};

const MR_TypeClassDeclStruct analysis__framework__analysis__framework__type_class_decl_answer_pattern_2 = {
  &analysis__framework__analysis__framework__type_class_id_answer_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static const MR_ConstString analysis__framework__analysis__framework__type_class_id_var_names_analysis_3[3] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call",
  (MR_String) "Answer"
};

static const MR_TypeClassMethod analysis__framework__analysis__framework__type_class_id_method_ids_analysis_3[6] = {
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

static const MR_TypeClassId analysis__framework__analysis__framework__type_class_id_analysis_3 = {
  (MR_String) "analysis.framework",
  (MR_String) "analysis",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  analysis__framework__analysis__framework__type_class_id_var_names_analysis_3,
  analysis__framework__analysis__framework__type_class_id_method_ids_analysis_3
};

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_analysis_3_1 = {
  &analysis__framework__analysis__framework__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_2Struct analysis__framework__analysis__framework__type_class_decl_super_analysis_3_2 = {
  &analysis__framework__analysis__framework__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint analysis__framework__analysis__framework__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__type_class_decl_super_analysis_3_1),
  (MR_TypeClassConstraint) (&analysis__framework__analysis__framework__type_class_decl_super_analysis_3_2)
};

const MR_TypeClassDeclStruct analysis__framework__analysis__framework__type_class_decl_analysis_3 = {
  &analysis__framework__analysis__framework__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

void MR_CALL 
analysis__framework____Compare____some_analysis_result_0_0(
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
    MR_Word TypeClassInfo_for_analysis_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeClassInfo_for_analysis_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 2));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 2));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 3);
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
analysis__framework____Unify____some_analysis_result_0_0(
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
    MR_Word TypeClassInfo_for_analysis_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word TypeClassInfo_for_analysis_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 2));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 2));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 3);
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
analysis__framework____Compare____module_analysis_map_1_0(
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
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0));
    MR_hl_field(0, TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_12_12, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis__framework____Unify____module_analysis_map_1_0(
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
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0));
    MR_hl_field(0, TypeInfo_11_11, 2) = ((MR_Box) (TypeInfo_9_9));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_11_11, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
analysis__framework____Compare____func_id_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
analysis__framework____Unify____func_id_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
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
analysis__framework____Compare____func_analysis_map_1_0(
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
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis__framework____Unify____func_analysis_map_1_0(
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
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
analysis__framework____Compare____fixpoint_type_0_0(
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
analysis__framework____Unify____fixpoint_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
analysis__framework____Compare____analysis_type_0_0(
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
analysis__framework____Unify____analysis_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  succeeded = MR_TRUE;
  return succeeded;
}

void MR_CALL 
analysis__framework____Compare____analysis_status_0_0(
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
analysis__framework____Unify____analysis_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
analysis__framework____Compare____analysis_result_2_0(
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
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 3);
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
analysis__framework____Unify____analysis_result_2_0(
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
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);

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
analysis__framework____Compare____analysis_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis__framework____Unify____analysis_name_0_0(
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
analysis__framework____Compare____analysis_map_1_0(
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
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0));
    MR_hl_field(0, TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_11_11));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_14_14, 2) = ((MR_Box) (TypeInfo_13_13));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_14_14, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis__framework____Unify____analysis_map_1_0(
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
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0));
    MR_hl_field(0, TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(0, TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_12_12));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_13_13, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
analysis__framework__from_term_2_p_0(
  MR_Word TypeClassInfo_for_to_term_3,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_3, 0)), 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_to_term_3)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
  return succeeded;
}

MR_Word MR_CALL 
analysis__framework__to_term_1_f_0(
  MR_Word TypeClassInfo_for_to_term_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_3, 0)), 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_to_term_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_bool MR_CALL 
analysis__framework__equivalent_3_p_0(
  MR_Word TypeClassInfo_for_partial_order_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_4, 0)), 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
analysis__framework__more_precise_than_3_p_0(
  MR_Word TypeClassInfo_for_partial_order_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_4, 0)), 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

void MR_CALL 
analysis__framework__get_func_info_6_p_0(
  MR_Word TypeClassInfo_for_analysis_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_7, 0)), 10))));

  func_0(((MR_Box) (TypeClassInfo_for_analysis_7)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__6_6);
}

MR_Box MR_CALL 
analysis__framework__top_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_4, 0)), 9))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)), HeadVar__1_1);
  return HeadVar__3_3;
}

MR_Box MR_CALL 
analysis__framework__bottom_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_4, 0)), 8))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)), HeadVar__1_1);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
analysis__framework__preferred_fixpoint_type_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4)
{
  MR_Word HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_4, 0)), 7))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)));
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_Integer MR_CALL 
analysis__framework__analysis_version_number_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4)
{
  MR_Integer HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_4, 0)), 6))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)));
  HeadVar__3_3 = ((MR_Integer) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_String MR_CALL 
analysis__framework__analysis_name_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4)
{
  MR_String HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_4, 0)), 5))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)));
  HeadVar__3_3 = ((MR_String) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

void MR_CALL 
analysis__framework__module_name_to_write_file_name_7_p_0(
  MR_Word TypeClassInfo_for_compiler_8,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_8, 0)), 9))));
  MR_Box conv2_HeadVar__5_5;
  MR_Box conv1_HeadVar__7_7;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_8)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), &conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__7_7);
  *HeadVar__5_5 = ((MR_String) (conv2_HeadVar__5_5));
}

void MR_CALL 
analysis__framework__module_name_to_read_file_name_7_p_0(
  MR_Word TypeClassInfo_for_compiler_8,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_8, 0)), 8))));
  MR_Box conv2_HeadVar__5_5;
  MR_Box conv1_HeadVar__7_7;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_8)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), &conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__7_7);
  *HeadVar__5_5 = ((MR_Word) (conv2_HeadVar__5_5));
}

static void MR_CALL 
analysis__framework__analyses_3_p_1_1(
  void * env_ptr_arg)
{
  struct analysis__framework__analyses_3_p_1_env_0_s * env_ptr = (struct analysis__framework__analyses_3_p_1_env_0_s *) (env_ptr_arg);

  *((env_ptr)->analysis__framework__analyses_3_p_1_env_0__HeadVar__2_2) = ((MR_String) ((env_ptr)->analysis__framework__analyses_3_p_1_env_0__conv2_HeadVar__2_2));
  *((env_ptr)->analysis__framework__analyses_3_p_1_env_0__HeadVar__3_3) = ((MR_Word) ((env_ptr)->analysis__framework__analyses_3_p_1_env_0__conv1_HeadVar__3_3));
  ((env_ptr)->analysis__framework__analyses_3_p_1_env_0__cont)((env_ptr)->analysis__framework__analyses_3_p_1_env_0__cont_env_ptr);
}

void MR_CALL 
analysis__framework__analyses_3_p_1(
  MR_Word TypeClassInfo_for_compiler_4,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct analysis__framework__analyses_3_p_1_env_0_s env;

  (env).analysis__framework__analyses_3_p_1_env_0__HeadVar__2_2 = HeadVar__2_2;
  (env).analysis__framework__analyses_3_p_1_env_0__HeadVar__3_3 = HeadVar__3_3;
  (env).analysis__framework__analyses_3_p_1_env_0__cont = cont;
  (env).analysis__framework__analyses_3_p_1_env_0__cont_env_ptr = cont_env_ptr;
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_4, 0)), 7))));

    func_0(((MR_Box) (TypeClassInfo_for_compiler_4)), HeadVar__1_1, &(env).analysis__framework__analyses_3_p_1_env_0__conv2_HeadVar__2_2, &(env).analysis__framework__analyses_3_p_1_env_0__conv1_HeadVar__3_3, analysis__framework__analyses_3_p_1_1, &env);
  }
}

MR_bool MR_CALL 
analysis__framework__analyses_3_p_0(
  MR_Word TypeClassInfo_for_compiler_4,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_4, 0)), 6))));
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
analysis__framework__compiler_name_1_f_0(
  MR_Word TypeClassInfo_for_compiler_3,
  MR_Box HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_3, 0)), 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_compiler_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_String) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
analysis__framework__lub_2_f_0(
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

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____analysis_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____analysis_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____analysis_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____analysis_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____analysis_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____analysis_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____analysis_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____analysis_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____analysis_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____analysis_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____analysis_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____analysis_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____analysis_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____analysis_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____fixpoint_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____fixpoint_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____fixpoint_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____fixpoint_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____func_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____func_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____func_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____func_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____module_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____module_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__framework____Unify____some_analysis_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__framework____Unify____some_analysis_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__framework____Compare____some_analysis_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__framework____Compare____some_analysis_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__analysis__framework__init(void)
{
}

void mercury__analysis__framework__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_analysis_map_1);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_analysis_name_0);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_analysis_type_0);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_fixpoint_type_0);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_func_analysis_map_1);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_func_id_0);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_module_analysis_map_1);
  MR_register_type_ctor_info(&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0);
}

void mercury__analysis__framework__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis__framework__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module analysis.framework.
