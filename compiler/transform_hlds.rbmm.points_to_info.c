/*
** Automatically generated from `rbmm.points_to_info.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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


/* :- module transform_hlds.rbmm.points_to_info. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__points_to_info__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_info.mih"


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
#include "check_hlds.unify_proc.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2,
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingA_2,
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingB_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__VarTypes_7,
  MR_Word transform_hlds__rbmm__points_to_info__Var_8,
  MR_Integer transform_hlds__rbmm__points_to_info__Reg0_9,
  MR_Integer * transform_hlds__rbmm__points_to_info__Reg_10,
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18,
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19);

static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
  MR_Box transform_hlds__rbmm__points_to_info__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_3[1][9];




static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_info_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpt_alpha_mapping",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpt_call_alpha_mapping",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0 = {
  (MR_String) "rpta_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpta_info",
  {     transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0 },
  {     transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpta_info_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

    {
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

    {
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

    {
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

    {
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[2], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_info__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_info__CastX_9 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_info__CastY_10 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__3_3;

    transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CastX_9 == transform_hlds__rbmm__points_to_info__CastY_10);
    if (transform_hlds__rbmm__points_to_info__succeeded)
      *transform_hlds__rbmm__points_to_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_info__Var_8;

        {
          transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&transform_hlds__rbmm__points_to_info__Var_8, transform_hlds__rbmm__points_to_info__ArgX1_4, transform_hlds__rbmm__points_to_info__ArgY1_5);
        }
        transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__Var_8 == (MR_Integer) 0);
        transform_hlds__rbmm__points_to_info__succeeded = !(transform_hlds__rbmm__points_to_info__succeeded);
        if (transform_hlds__rbmm__points_to_info__succeeded)
          *transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__ArgX2_6)), ((MR_Box) (transform_hlds__rbmm__points_to_info__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_info__CastX_7 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_info__CastY_8 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__2_2;

    transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CastX_7 == transform_hlds__rbmm__points_to_info__CastY_8);
    if (transform_hlds__rbmm__points_to_info__succeeded)
      transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_10_10;
        MR_Word transform_hlds__rbmm__points_to_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(transform_hlds__rbmm__points_to_info__ArgX1_3, transform_hlds__rbmm__points_to_info__ArgY1_4);
        }
        if (transform_hlds__rbmm__points_to_info__succeeded)
          {
            transform_hlds__rbmm__points_to_info__TypeInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1];
            {
              transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_10_10, ((MR_Box) (transform_hlds__rbmm__points_to_info__ArgX2_5)), ((MR_Box) (transform_hlds__rbmm__points_to_info__ArgY2_6)));
            }
          }
      }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_info__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_info__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2,
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_info__succeeded;

        if ((transform_hlds__rbmm__points_to_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            MR_Word transform_hlds__rbmm__points_to_info__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_info__Ns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_info__NPrimeB_10;
            MR_Word transform_hlds__rbmm__points_to_info__NPrimeA_11;
            MR_Integer transform_hlds__rbmm__points_to_info__Var_14;
            MR_Integer transform_hlds__rbmm__points_to_info__Var_15;
            MR_Box transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10;
            MR_Box transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11;

            {
              transform_hlds__rbmm__points_to_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3, ((MR_Box) (transform_hlds__rbmm__points_to_info__N_6)), &transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10);
            }
            if (transform_hlds__rbmm__points_to_info__succeeded)
              {
                transform_hlds__rbmm__points_to_info__NPrimeB_10 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10);
                transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
              }
            if (transform_hlds__rbmm__points_to_info__succeeded)
              {
                {
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2, ((MR_Box) (transform_hlds__rbmm__points_to_info__N_6)), &transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11);
                }
                transform_hlds__rbmm__points_to_info__NPrimeA_11 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11);
                transform_hlds__rbmm__points_to_info__Var_14 = (MR_Integer) transform_hlds__rbmm__points_to_info__NPrimeA_11;
                transform_hlds__rbmm__points_to_info__Var_15 = (MR_Integer) transform_hlds__rbmm__points_to_info__NPrimeB_10;
                transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__Var_14 == transform_hlds__rbmm__points_to_info__Var_15);
                if (transform_hlds__rbmm__points_to_info__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__rbmm__points_to_info__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_info__Ns_7;

                      transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return transform_hlds__rbmm__points_to_info__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingA_2,
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingB_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_info__succeeded;

        if ((transform_hlds__rbmm__points_to_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
            MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0];
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19;
            MR_Word transform_hlds__rbmm__points_to_info__CallSiteA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_info__CallSiteAs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10;
            MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11;
            MR_Integer transform_hlds__rbmm__points_to_info__CA_16;
            MR_Integer transform_hlds__rbmm__points_to_info__CB_17;
            MR_Word transform_hlds__rbmm__points_to_info__NodesA_18;
            MR_Box transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10;
            MR_Box transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11;

            {
              transform_hlds__rbmm__points_to_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeInfo_13_13, transform_hlds__rbmm__points_to_info__AlphaMappingB_3, ((MR_Box) (transform_hlds__rbmm__points_to_info__CallSiteA_6)), &transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10);
            }
            if (transform_hlds__rbmm__points_to_info__succeeded)
              {
                transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10);
                transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
              }
            if (transform_hlds__rbmm__points_to_info__succeeded)
              {
                {
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeInfo_13_13, transform_hlds__rbmm__points_to_info__AlphaMappingA_2, ((MR_Box) (transform_hlds__rbmm__points_to_info__CallSiteA_6)), &transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11);
                }
                transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11);
                transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                {
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, &transform_hlds__rbmm__points_to_info__CA_16);
                }
                {
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10, &transform_hlds__rbmm__points_to_info__CB_17);
                }
                transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CA_16 == transform_hlds__rbmm__points_to_info__CB_17);
                if (transform_hlds__rbmm__points_to_info__succeeded)
                  {
                    {
                      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, &transform_hlds__rbmm__points_to_info__NodesA_18);
                    }
                    {
                      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(transform_hlds__rbmm__points_to_info__NodesA_18, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10);
                    }
                    if (transform_hlds__rbmm__points_to_info__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word transform_hlds__rbmm__points_to_info__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_info__CallSiteAs_7;

                          transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return transform_hlds__rbmm__points_to_info__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__VarTypes_7,
  MR_Word transform_hlds__rbmm__points_to_info__Var_8,
  MR_Integer transform_hlds__rbmm__points_to_info__Reg0_9,
  MR_Integer * transform_hlds__rbmm__points_to_info__Reg_10,
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18,
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_26_26;
    MR_Word transform_hlds__rbmm__points_to_info__NodeType_12;
    MR_Word transform_hlds__rbmm__points_to_info__Varset0_13;
    MR_Word transform_hlds__rbmm__points_to_info__Varset_14;
    MR_String transform_hlds__rbmm__points_to_info__RegName_15;
    MR_Word transform_hlds__rbmm__points_to_info__NodeInfo_16;
    MR_String transform_hlds__rbmm__points_to_info__Var_22;
    MR_Word transform_hlds__rbmm__points_to_info__Var_23;
    MR_Word transform_hlds__rbmm__points_to_info___Node_17;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__rbmm__points_to_info__VarTypes_7, transform_hlds__rbmm__points_to_info__Var_8, &transform_hlds__rbmm__points_to_info__NodeType_12);
    }
    transform_hlds__rbmm__points_to_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_1[0];
    {
      mercury__set__init_1_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_26_26, &transform_hlds__rbmm__points_to_info__Varset0_13);
    }
    {
      mercury__set__insert_3_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__rbmm__points_to_info__Var_8)), transform_hlds__rbmm__points_to_info__Varset0_13, &transform_hlds__rbmm__points_to_info__Varset_14);
    }
    *transform_hlds__rbmm__points_to_info__Reg_10 = (transform_hlds__rbmm__points_to_info__Reg0_9 + (MR_Integer) 1);
    {
      transform_hlds__rbmm__points_to_info__Var_22 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__points_to_info__Reg0_9);
    }
    {
      mercury__string__append_3_p_2((MR_String) "R", transform_hlds__rbmm__points_to_info__Var_22, &transform_hlds__rbmm__points_to_info__RegName_15);
    }
    {
      transform_hlds__rbmm__points_to_info__Var_23 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
    }
    {
      transform_hlds__rbmm__points_to_info__NodeInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Varset_14));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__RegName_15));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Var_23));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_info__NodeType_12));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(transform_hlds__rbmm__points_to_info__NodeInfo_16, &transform_hlds__rbmm__points_to_info___Node_17, transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18, transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_equal_2_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__RptaInfoA_3,
  MR_Word transform_hlds__rbmm__points_to_info__RptaInfoB_4)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14;
    MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_9_15;
    MR_Word transform_hlds__rbmm__points_to_info__GraphA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoA_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_info__AlphaA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoA_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_info__GraphB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoB_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_info__AlphaB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoB_4, (MR_Integer) 1)));
    MR_Integer transform_hlds__rbmm__points_to_info__CA_11;
    MR_Integer transform_hlds__rbmm__points_to_info__CB_12;
    MR_Word transform_hlds__rbmm__points_to_info__CallSitesA_13;

    {
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(transform_hlds__rbmm__points_to_info__GraphA_5, transform_hlds__rbmm__points_to_info__GraphB_7);
    }
    if (transform_hlds__rbmm__points_to_info__succeeded)
      {
        transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
        transform_hlds__rbmm__points_to_info__TypeInfo_9_15 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0];
        {
          mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaA_6, &transform_hlds__rbmm__points_to_info__CA_11);
        }
        {
          mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaB_8, &transform_hlds__rbmm__points_to_info__CB_12);
        }
        transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CA_11 == transform_hlds__rbmm__points_to_info__CB_12);
        if (transform_hlds__rbmm__points_to_info__succeeded)
          {
            {
              mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaA_6, &transform_hlds__rbmm__points_to_info__CallSitesA_13);
            }
            {
              transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(transform_hlds__rbmm__points_to_info__CallSitesA_13, transform_hlds__rbmm__points_to_info__AlphaA_6, transform_hlds__rbmm__points_to_info__AlphaB_8);
            }
          }
      }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
  MR_Box transform_hlds__rbmm__points_to_info__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__points_to_info__closure = transform_hlds__rbmm__points_to_info__closure_arg;
    MR_Integer transform_hlds__rbmm__points_to_info__conv1_Reg_10;
    MR_Word transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19;

    {
      transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_info__wrapper_arg_2), &transform_hlds__rbmm__points_to_info__conv1_Reg_10, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_4), &transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19);
    }
    *transform_hlds__rbmm__points_to_info__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv1_Reg_10));
    *transform_hlds__rbmm__points_to_info__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19));
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_info__ProcInfo_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__RptaInfo_4;
    MR_Word transform_hlds__rbmm__points_to_info__VarTypes_5;
    MR_Word transform_hlds__rbmm__points_to_info__Vars_6;
    MR_Word transform_hlds__rbmm__points_to_info__Graph_8;
    MR_Word transform_hlds__rbmm__points_to_info__AlphaMapping_9;
    MR_Word transform_hlds__rbmm__points_to_info__Var_10;
    MR_Word transform_hlds__rbmm__points_to_info__Var_12;
    MR_Integer transform_hlds__rbmm__points_to_info___Reg_7;
    MR_Box transform_hlds__rbmm__points_to_info__conv3__Reg_7;
    MR_Box transform_hlds__rbmm__points_to_info__conv2_Graph_8;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__points_to_info__ProcInfo_3, &transform_hlds__rbmm__points_to_info__VarTypes_5);
    }
    {
      hlds__vartypes__vartypes_vars_2_p_0(transform_hlds__rbmm__points_to_info__VarTypes_5, &transform_hlds__rbmm__points_to_info__Vars_6);
    }
    {
      transform_hlds__rbmm__points_to_info__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_info_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__Var_10, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_info__VarTypes_5));
    }
    {
      transform_hlds__rbmm__points_to_info__Var_12 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_info__Var_10, transform_hlds__rbmm__points_to_info__Vars_6, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_info__conv3__Reg_7, ((MR_Box) (transform_hlds__rbmm__points_to_info__Var_12)), &transform_hlds__rbmm__points_to_info__conv2_Graph_8);
    }
    transform_hlds__rbmm__points_to_info___Reg_7 = ((MR_Integer) transform_hlds__rbmm__points_to_info__conv3__Reg_7);
    transform_hlds__rbmm__points_to_info__Graph_8 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv2_Graph_8);
    {
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], &transform_hlds__rbmm__points_to_info__AlphaMapping_9);
    }
    {
      transform_hlds__rbmm__points_to_info__RptaInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfo_4, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Graph_8));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfo_4, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__AlphaMapping_9));
    }
    return transform_hlds__rbmm__points_to_info__RptaInfo_4;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_info__PredProcId_5,
  MR_Word transform_hlds__rbmm__points_to_info__RptaInfo_6,
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_0_8,
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_9)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

    {
      *transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_9 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_info__PredProcId_5)), transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_0_8, ((MR_Box) (transform_hlds__rbmm__points_to_info__RptaInfo_6)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_info__PredProcId_4,
  MR_Word transform_hlds__rbmm__points_to_info__Table_5,
  MR_Word * transform_hlds__rbmm__points_to_info__RptaInfo_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Box transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6;

    {
      transform_hlds__rbmm__points_to_info__succeeded = mercury__map__elem_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_info__PredProcId_4)), transform_hlds__rbmm__points_to_info__Table_5, &transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6);
    }
    if (transform_hlds__rbmm__points_to_info__succeeded)
      {
        *transform_hlds__rbmm__points_to_info__RptaInfo_6 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6);
        transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
      }
    return transform_hlds__rbmm__points_to_info__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0(void)
{
  {
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
    MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_info__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0);
    }
    return transform_hlds__rbmm__points_to_info__HeadVar__1_1;
  }
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

/* :- end_module transform_hlds.rbmm.points_to_info. */
