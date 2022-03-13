/*
** Automatically generated from `rbmm.points_to_info.m'
** by the Mercury compiler,
** version rotd-2022-03-13
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


// :- module transform_hlds.rbmm.points_to_info.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__points_to_info__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_info.mih"


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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
  MR_Word VarTypes_7,
  MR_Word Var_8,
  MR_Integer Reg0_9,
  MR_Integer * Reg_10,
  MR_Word STATE_VARIABLE_Graph_0_18,
  MR_Word * STATE_VARIABLE_Graph_19);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AlphaMappingA_2,
  MR_Word AlphaMappingB_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AMAtCallSiteA_2,
  MR_Word AMAtCallSiteB_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_3[1][9];




static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpt_alpha_mapping",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpt_call_alpha_mapping",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0 = {
  (MR_String) "rpta_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

static const MR_Integer transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpta_info",
  { transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0 },
  { transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpta_info_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
  MR_Word VarTypes_7,
  MR_Word Var_8,
  MR_Integer Reg0_9,
  MR_Integer * Reg_10,
  MR_Word STATE_VARIABLE_Graph_0_18,
  MR_Word * STATE_VARIABLE_Graph_19)
{
  MR_Word NodeType_12;
  MR_Word Varset0_13;
  MR_Word Varset_14;
  MR_String RegName_15;
  MR_Word NodeInfo_16;
  MR_String Var_22;
  MR_Word Var_23;
  MR_Word _Node_17;

  hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_8, &NodeType_12);
  mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_1[0]), &Varset0_13);
  mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_1[0]), ((MR_Box) (Var_8)), Varset0_13, &Varset_14);
  *Reg_10 = (MR_Integer) ((MR_Unsigned) Reg0_9 + (MR_Unsigned) 1);
  Var_22 = mercury__string__int_to_string_1_f_0(Reg0_9);
  mercury__string__append_3_p_2((MR_String) "R", Var_22, &RegName_15);
  Var_23 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  {
    NodeInfo_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NodeInfo_16, 0) = ((MR_Box) (Varset_14));
    MR_hl_field(MR_mktag(0), NodeInfo_16, 1) = ((MR_Box) (RegName_15));
    MR_hl_field(MR_mktag(0), NodeInfo_16, 2) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), NodeInfo_16, 3) = ((MR_Box) (NodeType_12));
    MR_hl_field(MR_mktag(0), NodeInfo_16, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(NodeInfo_16, &_Node_17, STATE_VARIABLE_Graph_0_18, STATE_VARIABLE_Graph_19);
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_equal_2_p_0(
  MR_Word RptaInfoA_3,
  MR_Word RptaInfoB_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_8_14;
  MR_Word TypeInfo_9_15;
  MR_Word GraphA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfoA_3, (MR_Integer) 0))));
  MR_Word AlphaA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfoA_3, (MR_Integer) 1))));
  MR_Word GraphB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfoB_4, (MR_Integer) 0))));
  MR_Word AlphaB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfoB_4, (MR_Integer) 1))));
  MR_Integer CA_11;
  MR_Integer CB_12;
  MR_Word CallSitesA_13;

  succeeded = transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(GraphA_5, GraphB_7);
  if (succeeded)
  {
    TypeCtorInfo_8_14 = (MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0);
    TypeInfo_9_15 = (MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]);
    mercury__map__count_2_p_0(TypeCtorInfo_8_14, TypeInfo_9_15, AlphaA_6, &CA_11);
    mercury__map__count_2_p_0(TypeCtorInfo_8_14, TypeInfo_9_15, AlphaB_8, &CB_12);
    succeeded = (CA_11 == CB_12);
    if (succeeded)
    {
      mercury__map__keys_2_p_0(TypeCtorInfo_8_14, TypeInfo_9_15, AlphaA_6, &CallSitesA_13);
      succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(CallSitesA_13, AlphaA_6, AlphaB_8);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AlphaMappingA_2,
  MR_Word AlphaMappingB_3)
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
      MR_Word TypeCtorInfo_8_19;
      MR_Word CallSiteA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CallSiteAs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word AlphaMappingAtCallSiteB_10;
      MR_Word AlphaMappingAtCallSiteA_11;
      MR_Integer CA_16;
      MR_Integer CB_17;
      MR_Word NodesA_18;
      MR_Box conv0_AlphaMappingAtCallSiteB_10;
      MR_Box conv1_AlphaMappingAtCallSiteA_11;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]), AlphaMappingB_3, ((MR_Box) (CallSiteA_6)), &conv0_AlphaMappingAtCallSiteB_10);
      if (succeeded)
      {
        AlphaMappingAtCallSiteB_10 = ((MR_Word) (conv0_AlphaMappingAtCallSiteB_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]), AlphaMappingA_2, ((MR_Box) (CallSiteA_6)), &conv1_AlphaMappingAtCallSiteA_11);
        AlphaMappingAtCallSiteA_11 = ((MR_Word) (conv1_AlphaMappingAtCallSiteA_11));
        TypeCtorInfo_8_19 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
        mercury__map__count_2_p_0(TypeCtorInfo_8_19, TypeCtorInfo_8_19, AlphaMappingAtCallSiteA_11, &CA_16);
        mercury__map__count_2_p_0(TypeCtorInfo_8_19, TypeCtorInfo_8_19, AlphaMappingAtCallSiteB_10, &CB_17);
        succeeded = (CA_16 == CB_17);
        if (succeeded)
        {
          mercury__map__keys_2_p_0(TypeCtorInfo_8_19, TypeCtorInfo_8_19, AlphaMappingAtCallSiteA_11, &NodesA_18);
          succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(NodesA_18, AlphaMappingAtCallSiteA_11, AlphaMappingAtCallSiteB_10);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = CallSiteAs_7;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AMAtCallSiteA_2,
  MR_Word AMAtCallSiteB_3)
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
      MR_Word N_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NPrimeB_10;
      MR_Word NPrimeA_11;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Box conv0_NPrimeB_10;
      MR_Box conv1_NPrimeA_11;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AMAtCallSiteB_3, ((MR_Box) (N_6)), &conv0_NPrimeB_10);
      if (succeeded)
      {
        NPrimeB_10 = ((MR_Word) (conv0_NPrimeB_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AMAtCallSiteA_2, ((MR_Box) (N_6)), &conv1_NPrimeA_11);
        NPrimeA_11 = ((MR_Word) (conv1_NPrimeA_11));
        Var_14 = (MR_Integer) (NPrimeA_11);
        Var_15 = (MR_Integer) (NPrimeB_10);
        succeeded = (Var_14 == Var_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Ns_7;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_Reg_10;
  MR_Word conv0_STATE_VARIABLE_Graph_19;

  transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_Reg_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Graph_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_Reg_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_19));
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(
  MR_Word ProcInfo_3)
{
  MR_Word RptaInfo_4;
  MR_Word VarTypes_5;
  MR_Word Vars_6;
  MR_Word Graph_8;
  MR_Word AlphaMapping_9;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Box conv3__Reg_7;
  MR_Box conv2_Graph_8;

  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_3, &VarTypes_5);
  hlds__vartypes__vartypes_vars_2_p_0(VarTypes_5, &Vars_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_info_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (VarTypes_5));
  }
  Var_12 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0), Var_10, Vars_6, ((MR_Box) ((MR_Integer) 1)), &conv3__Reg_7, ((MR_Box) (Var_12)), &conv2_Graph_8);
  Graph_8 = ((MR_Word) (conv2_Graph_8));
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]), &AlphaMapping_9);
  {
    RptaInfo_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), RptaInfo_4, 0) = ((MR_Box) (Graph_8));
    MR_hl_field(MR_mktag(0), RptaInfo_4, 1) = ((MR_Box) (AlphaMapping_9));
  }
  return RptaInfo_4;
}

void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(
  MR_Word PredProcId_5,
  MR_Word RptaInfo_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  *STATE_VARIABLE_Table_9 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), ((MR_Box) (PredProcId_5)), STATE_VARIABLE_Table_0_8, ((MR_Box) (RptaInfo_6)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(
  MR_Word PredProcId_4,
  MR_Word Table_5,
  MR_Word * RptaInfo_6)
{
  MR_bool succeeded;
  MR_Box conv0_RptaInfo_6;

  succeeded = mercury__map__elem_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), ((MR_Box) (PredProcId_4)), Table_5, &conv0_RptaInfo_6);
  if (succeeded)
  {
    *RptaInfo_6 = ((MR_Word) (conv0_RptaInfo_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0));
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__rbmm__points_to_info__init(void)
{
}

void mercury__transform_hlds__rbmm__points_to_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0);
}

void mercury__transform_hlds__rbmm__points_to_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__points_to_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.points_to_info.
