/*
** Automatically generated from `rbmm.points_to_info.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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




#line 145 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 151 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 157 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 160 "transform_hlds.rbmm.points_to_info.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2];

#line 163 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0;

#line 166 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1];

#line 169 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1];

#line 172 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[1];

#line 175 "transform_hlds.rbmm.points_to_info.c"
static const MR_Integer transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[1];

#line 178 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 181 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
#line 184 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 186 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 189 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
#line 192 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 194 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 196 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 199 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
#line 202 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 204 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 207 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
#line 210 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 212 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 214 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 217 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
#line 220 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 222 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 225 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
#line 228 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 230 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 232 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 235 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
#line 238 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 240 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 243 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
#line 246 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 248 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 250 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 153 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
#line 153 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 153 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2,
#line 153 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3);

#line 130 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
#line 130 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 130 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingA_2,
#line 130 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingB_3);

#line 97 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
#line 97 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__VarTypes_7,
#line 97 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__Var_8,
#line 97 "rbmm.points_to_info.m"
  MR_Integer transform_hlds__rbmm__points_to_info__Reg0_9,
#line 97 "rbmm.points_to_info.m"
  MR_Integer * transform_hlds__rbmm__points_to_info__Reg_10,
#line 97 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18,
#line 97 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19);

#line 92 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__closure_arg,
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 92 "rbmm.points_to_info.m"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_3,
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_4,
#line 92 "rbmm.points_to_info.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 376 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 384 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 393 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 401 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 410 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 419 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpt_alpha_mapping",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 440 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpt_call_alpha_mapping",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 461 "transform_hlds.rbmm.points_to_info.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

#line 467 "transform_hlds.rbmm.points_to_info.c"
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
  NULL
};

#line 482 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

#line 487 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0
  }
};

#line 496 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

#line 501 "transform_hlds.rbmm.points_to_info.c"
static const MR_Integer transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[1] = {
  (MR_Integer) 0
};

#line 506 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpta_info",
  {
    transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0
  },
  {
    transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0
};

#line 527 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 536 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_info",
  (MR_String) "rpta_info_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 557 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
#line 560 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 562 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 564 "transform_hlds.rbmm.points_to_info.c"
{
#line 566 "transform_hlds.rbmm.points_to_info.c"
  {
#line 568 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 571 "transform_hlds.rbmm.points_to_info.c"
    {
#line 573 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 576 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 578 "transform_hlds.rbmm.points_to_info.c"
  }
#line 580 "transform_hlds.rbmm.points_to_info.c"
}

#line 583 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
#line 586 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 588 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 590 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 592 "transform_hlds.rbmm.points_to_info.c"
{
#line 594 "transform_hlds.rbmm.points_to_info.c"
  {
#line 596 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 599 "transform_hlds.rbmm.points_to_info.c"
    {
#line 601 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 604 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 606 "transform_hlds.rbmm.points_to_info.c"
  }
#line 608 "transform_hlds.rbmm.points_to_info.c"
}

#line 611 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
#line 614 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 616 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 618 "transform_hlds.rbmm.points_to_info.c"
{
#line 620 "transform_hlds.rbmm.points_to_info.c"
  {
#line 622 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 625 "transform_hlds.rbmm.points_to_info.c"
    {
#line 627 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 630 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 632 "transform_hlds.rbmm.points_to_info.c"
  }
#line 634 "transform_hlds.rbmm.points_to_info.c"
}

#line 637 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
#line 640 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 642 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 644 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 646 "transform_hlds.rbmm.points_to_info.c"
{
#line 648 "transform_hlds.rbmm.points_to_info.c"
  {
#line 650 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 653 "transform_hlds.rbmm.points_to_info.c"
    {
#line 655 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 658 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 660 "transform_hlds.rbmm.points_to_info.c"
  }
#line 662 "transform_hlds.rbmm.points_to_info.c"
}

#line 665 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
#line 668 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 670 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 672 "transform_hlds.rbmm.points_to_info.c"
{
#line 674 "transform_hlds.rbmm.points_to_info.c"
  {
#line 676 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 679 "transform_hlds.rbmm.points_to_info.c"
    {
#line 681 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 684 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 686 "transform_hlds.rbmm.points_to_info.c"
  }
#line 688 "transform_hlds.rbmm.points_to_info.c"
}

#line 691 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
#line 694 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 696 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 698 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 700 "transform_hlds.rbmm.points_to_info.c"
{
#line 702 "transform_hlds.rbmm.points_to_info.c"
  {
#line 704 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 707 "transform_hlds.rbmm.points_to_info.c"
    {
#line 709 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 712 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 714 "transform_hlds.rbmm.points_to_info.c"
  }
#line 716 "transform_hlds.rbmm.points_to_info.c"
}

#line 719 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
#line 722 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 724 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 726 "transform_hlds.rbmm.points_to_info.c"
{
#line 728 "transform_hlds.rbmm.points_to_info.c"
  {
#line 730 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 733 "transform_hlds.rbmm.points_to_info.c"
    {
#line 735 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 738 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 740 "transform_hlds.rbmm.points_to_info.c"
  }
#line 742 "transform_hlds.rbmm.points_to_info.c"
}

#line 745 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
#line 748 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 750 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 752 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 754 "transform_hlds.rbmm.points_to_info.c"
{
#line 756 "transform_hlds.rbmm.points_to_info.c"
  {
#line 758 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 761 "transform_hlds.rbmm.points_to_info.c"
    {
#line 763 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 766 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 768 "transform_hlds.rbmm.points_to_info.c"
  }
#line 770 "transform_hlds.rbmm.points_to_info.c"
}

#line 30 "rbmm.points_to_info.m"
void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(
#line 30 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 30 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
#line 30 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
#line 30 "rbmm.points_to_info.m"
{
#line 30 "rbmm.points_to_info.m"
  {
#line 30 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 30 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;
#line 30 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_info__HeadVar__3_3;

#line 30 "rbmm.points_to_info.m"
    {
#line 30 "rbmm.points_to_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[2], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5)));
#line 30 "rbmm.points_to_info.m"
      return;
    }
#line 30 "rbmm.points_to_info.m"
  }
#line 30 "rbmm.points_to_info.m"
}

#line 30 "rbmm.points_to_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(
#line 30 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 30 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
#line 30 "rbmm.points_to_info.m"
{
#line 30 "rbmm.points_to_info.m"
  {
#line 30 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 30 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_info__HeadVar__1_1;
#line 30 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;

#line 30 "rbmm.points_to_info.m"
    {
#line 30 "rbmm.points_to_info.m"
      return transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4)));
    }
#line 30 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 30 "rbmm.points_to_info.m"
  }
#line 30 "rbmm.points_to_info.m"
}

#line 40 "rbmm.points_to_info.m"
void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(
#line 40 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 40 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
#line 40 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
#line 40 "rbmm.points_to_info.m"
{
#line 40 "rbmm.points_to_info.m"
  {
#line 40 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 40 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CastX_9 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__2_2;
#line 40 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CastY_10 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__3_3;

#line 40 "rbmm.points_to_info.m"
    transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CastX_9 == transform_hlds__rbmm__points_to_info__CastY_10);
#line 40 "rbmm.points_to_info.m"
    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 859 "transform_hlds.rbmm.points_to_info.c"
      *transform_hlds__rbmm__points_to_info__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "rbmm.points_to_info.m"
    else
#line 40 "rbmm.points_to_info.m"
      {
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_8_8;

#line 40 "rbmm.points_to_info.m"
        {
#line 40 "rbmm.points_to_info.m"
          transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&transform_hlds__rbmm__points_to_info__V_8_8, transform_hlds__rbmm__points_to_info__V_4_4, transform_hlds__rbmm__points_to_info__V_6_6);
        }
#line 881 "transform_hlds.rbmm.points_to_info.c"
        transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__V_8_8 == (MR_Integer) 0);
#line 40 "rbmm.points_to_info.m"
        transform_hlds__rbmm__points_to_info__succeeded = !(transform_hlds__rbmm__points_to_info__succeeded);
#line 40 "rbmm.points_to_info.m"
        if (transform_hlds__rbmm__points_to_info__succeeded)
#line 40 "rbmm.points_to_info.m"
          *transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__V_8_8;
#line 40 "rbmm.points_to_info.m"
        else
#line 40 "rbmm.points_to_info.m"
          {
#line 40 "rbmm.points_to_info.m"
            {
#line 40 "rbmm.points_to_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__V_5_5)), ((MR_Box) (transform_hlds__rbmm__points_to_info__V_7_7)));
#line 40 "rbmm.points_to_info.m"
              return;
            }
#line 40 "rbmm.points_to_info.m"
          }
#line 40 "rbmm.points_to_info.m"
      }
#line 40 "rbmm.points_to_info.m"
  }
#line 40 "rbmm.points_to_info.m"
}

#line 40 "rbmm.points_to_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(
#line 40 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 40 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
#line 40 "rbmm.points_to_info.m"
{
#line 40 "rbmm.points_to_info.m"
  {
#line 40 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 40 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CastX_7 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__1_1;
#line 40 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CastY_8 = (MR_Integer) transform_hlds__rbmm__points_to_info__HeadVar__2_2;

#line 40 "rbmm.points_to_info.m"
    transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CastX_7 == transform_hlds__rbmm__points_to_info__CastY_8);
#line 40 "rbmm.points_to_info.m"
    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 40 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 40 "rbmm.points_to_info.m"
    else
#line 40 "rbmm.points_to_info.m"
      {
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_10_10;
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "rbmm.points_to_info.m"
        MR_Word transform_hlds__rbmm__points_to_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__HeadVar__2_2, (MR_Integer) 1)));

#line 948 "transform_hlds.rbmm.points_to_info.c"
        {
#line 950 "transform_hlds.rbmm.points_to_info.c"
          transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(transform_hlds__rbmm__points_to_info__V_3_3, transform_hlds__rbmm__points_to_info__V_5_5);
        }
#line 40 "rbmm.points_to_info.m"
        if (transform_hlds__rbmm__points_to_info__succeeded)
#line 40 "rbmm.points_to_info.m"
          {
#line 957 "transform_hlds.rbmm.points_to_info.c"
            transform_hlds__rbmm__points_to_info__TypeInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1];
#line 959 "transform_hlds.rbmm.points_to_info.c"
            {
#line 961 "transform_hlds.rbmm.points_to_info.c"
              return transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_10_10, ((MR_Box) (transform_hlds__rbmm__points_to_info__V_4_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__V_6_6)));
            }
#line 40 "rbmm.points_to_info.m"
          }
#line 40 "rbmm.points_to_info.m"
      }
#line 40 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 40 "rbmm.points_to_info.m"
  }
#line 40 "rbmm.points_to_info.m"
}

#line 62 "rbmm.points_to_info.m"
void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(
#line 62 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 62 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
#line 62 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
#line 62 "rbmm.points_to_info.m"
{
#line 62 "rbmm.points_to_info.m"
  {
#line 62 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 62 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;
#line 62 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_info__HeadVar__3_3;

#line 62 "rbmm.points_to_info.m"
    {
#line 62 "rbmm.points_to_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5)));
#line 62 "rbmm.points_to_info.m"
      return;
    }
#line 62 "rbmm.points_to_info.m"
  }
#line 62 "rbmm.points_to_info.m"
}

#line 62 "rbmm.points_to_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(
#line 62 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 62 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
#line 62 "rbmm.points_to_info.m"
{
#line 62 "rbmm.points_to_info.m"
  {
#line 62 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 62 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_info__HeadVar__1_1;
#line 62 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;

#line 62 "rbmm.points_to_info.m"
    {
#line 62 "rbmm.points_to_info.m"
      return transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4)));
    }
#line 62 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 62 "rbmm.points_to_info.m"
  }
#line 62 "rbmm.points_to_info.m"
}

#line 58 "rbmm.points_to_info.m"
void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(
#line 58 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 58 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2,
#line 58 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__3_3)
#line 58 "rbmm.points_to_info.m"
{
#line 58 "rbmm.points_to_info.m"
  {
#line 58 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 58 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;
#line 58 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_info__HeadVar__3_3;

#line 58 "rbmm.points_to_info.m"
    {
#line 58 "rbmm.points_to_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1], transform_hlds__rbmm__points_to_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_5)));
#line 58 "rbmm.points_to_info.m"
      return;
    }
#line 58 "rbmm.points_to_info.m"
  }
#line 58 "rbmm.points_to_info.m"
}

#line 58 "rbmm.points_to_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(
#line 58 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 58 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__2_2)
#line 58 "rbmm.points_to_info.m"
{
#line 58 "rbmm.points_to_info.m"
  {
#line 58 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 58 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_info__HeadVar__1_1;
#line 58 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_info__HeadVar__2_2;

#line 58 "rbmm.points_to_info.m"
    {
#line 58 "rbmm.points_to_info.m"
      return transform_hlds__rbmm__points_to_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_info__Cast_HeadVar2_4)));
    }
#line 58 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 58 "rbmm.points_to_info.m"
  }
#line 58 "rbmm.points_to_info.m"
}

#line 153 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
#line 153 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 153 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2,
#line 153 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3)
#line 153 "rbmm.points_to_info.m"
{
#line 156 "rbmm.points_to_info.m"
  while (MR_TRUE)
#line 156 "rbmm.points_to_info.m"
    {
#line 156 "rbmm.points_to_info.m"
      /* tailcall optimized into a loop */
#line 156 "rbmm.points_to_info.m"
      {
#line 156 "rbmm.points_to_info.m"
        MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 156 "rbmm.points_to_info.m"
        if ((transform_hlds__rbmm__points_to_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "rbmm.points_to_info.m"
          transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 156 "rbmm.points_to_info.m"
        else
#line 158 "rbmm.points_to_info.m"
          {
#line 158 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 158 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
#line 158 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__Ns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__NPrimeB_10;
#line 158 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__NPrimeA_11;
#line 158 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__V_14_14;
#line 158 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__V_15_15;
#line 159 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10;
#line 160 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11;

#line 159 "rbmm.points_to_info.m"
            {
#line 159 "rbmm.points_to_info.m"
              transform_hlds__rbmm__points_to_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3, ((MR_Box) (transform_hlds__rbmm__points_to_info__N_6)), &transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10);
            }
#line 159 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 159 "rbmm.points_to_info.m"
              {
#line 159 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__NPrimeB_10 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10);
#line 159 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 159 "rbmm.points_to_info.m"
              }
#line 158 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 158 "rbmm.points_to_info.m"
              {
#line 160 "rbmm.points_to_info.m"
                {
#line 160 "rbmm.points_to_info.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2, ((MR_Box) (transform_hlds__rbmm__points_to_info__N_6)), &transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11);
                }
#line 160 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__NPrimeA_11 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11);
#line 161 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__V_14_14 = (MR_Integer) transform_hlds__rbmm__points_to_info__NPrimeA_11;
#line 161 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__V_15_15 = (MR_Integer) transform_hlds__rbmm__points_to_info__NPrimeB_10;
#line 161 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__V_14_14 == transform_hlds__rbmm__points_to_info__V_15_15);
#line 158 "rbmm.points_to_info.m"
                if (transform_hlds__rbmm__points_to_info__succeeded)
#line 162 "rbmm.points_to_info.m"
                  {
#line 162 "rbmm.points_to_info.m"
                    /* direct tailcall eliminated */
#line 162 "rbmm.points_to_info.m"
                    {
#line 162 "rbmm.points_to_info.m"
                      MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_info__Ns_7;

#line 162 "rbmm.points_to_info.m"
                      transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1;
#line 162 "rbmm.points_to_info.m"
                    }
#line 162 "rbmm.points_to_info.m"
                    continue;
#line 162 "rbmm.points_to_info.m"
                  }
#line 158 "rbmm.points_to_info.m"
              }
#line 158 "rbmm.points_to_info.m"
          }
#line 156 "rbmm.points_to_info.m"
        return transform_hlds__rbmm__points_to_info__succeeded;
#line 156 "rbmm.points_to_info.m"
      }
#line 156 "rbmm.points_to_info.m"
      break;
#line 156 "rbmm.points_to_info.m"
    }
#line 153 "rbmm.points_to_info.m"
}

#line 130 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
#line 130 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 130 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingA_2,
#line 130 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingB_3)
#line 130 "rbmm.points_to_info.m"
{
#line 133 "rbmm.points_to_info.m"
  while (MR_TRUE)
#line 133 "rbmm.points_to_info.m"
    {
#line 133 "rbmm.points_to_info.m"
      /* tailcall optimized into a loop */
#line 133 "rbmm.points_to_info.m"
      {
#line 133 "rbmm.points_to_info.m"
        MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 133 "rbmm.points_to_info.m"
        if ((transform_hlds__rbmm__points_to_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 133 "rbmm.points_to_info.m"
          transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 133 "rbmm.points_to_info.m"
        else
#line 135 "rbmm.points_to_info.m"
          {
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0];
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19;
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__CallSiteA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__CallSiteAs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10;
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11;
#line 135 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__CA_16;
#line 135 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__CB_17;
#line 135 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__NodesA_18;
#line 136 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10;
#line 137 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11;

#line 136 "rbmm.points_to_info.m"
            {
#line 136 "rbmm.points_to_info.m"
              transform_hlds__rbmm__points_to_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeInfo_13_13, transform_hlds__rbmm__points_to_info__AlphaMappingB_3, ((MR_Box) (transform_hlds__rbmm__points_to_info__CallSiteA_6)), &transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10);
            }
#line 136 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 136 "rbmm.points_to_info.m"
              {
#line 136 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10);
#line 136 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 136 "rbmm.points_to_info.m"
              }
#line 135 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 135 "rbmm.points_to_info.m"
              {
#line 137 "rbmm.points_to_info.m"
                {
#line 137 "rbmm.points_to_info.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeInfo_13_13, transform_hlds__rbmm__points_to_info__AlphaMappingA_2, ((MR_Box) (transform_hlds__rbmm__points_to_info__CallSiteA_6)), &transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11);
                }
#line 137 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11);
#line 1295 "transform_hlds.rbmm.points_to_info.c"
                transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 146 "rbmm.points_to_info.m"
                {
#line 146 "rbmm.points_to_info.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, &transform_hlds__rbmm__points_to_info__CA_16);
                }
#line 147 "rbmm.points_to_info.m"
                {
#line 147 "rbmm.points_to_info.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10, &transform_hlds__rbmm__points_to_info__CB_17);
                }
#line 148 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CA_16 == transform_hlds__rbmm__points_to_info__CB_17);
#line 135 "rbmm.points_to_info.m"
                if (transform_hlds__rbmm__points_to_info__succeeded)
#line 135 "rbmm.points_to_info.m"
                  {
#line 149 "rbmm.points_to_info.m"
                    {
#line 149 "rbmm.points_to_info.m"
                      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, &transform_hlds__rbmm__points_to_info__NodesA_18);
                    }
#line 150 "rbmm.points_to_info.m"
                    {
#line 150 "rbmm.points_to_info.m"
                      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(transform_hlds__rbmm__points_to_info__NodesA_18, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10);
                    }
#line 135 "rbmm.points_to_info.m"
                    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 140 "rbmm.points_to_info.m"
                      {
#line 140 "rbmm.points_to_info.m"
                        /* direct tailcall eliminated */
#line 140 "rbmm.points_to_info.m"
                        {
#line 140 "rbmm.points_to_info.m"
                          MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_info__CallSiteAs_7;

#line 140 "rbmm.points_to_info.m"
                          transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1;
#line 140 "rbmm.points_to_info.m"
                        }
#line 140 "rbmm.points_to_info.m"
                        continue;
#line 140 "rbmm.points_to_info.m"
                      }
#line 135 "rbmm.points_to_info.m"
                  }
#line 135 "rbmm.points_to_info.m"
              }
#line 135 "rbmm.points_to_info.m"
          }
#line 133 "rbmm.points_to_info.m"
        return transform_hlds__rbmm__points_to_info__succeeded;
#line 133 "rbmm.points_to_info.m"
      }
#line 133 "rbmm.points_to_info.m"
      break;
#line 133 "rbmm.points_to_info.m"
    }
#line 130 "rbmm.points_to_info.m"
}

#line 97 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
#line 97 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__VarTypes_7,
#line 97 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__Var_8,
#line 97 "rbmm.points_to_info.m"
  MR_Integer transform_hlds__rbmm__points_to_info__Reg0_9,
#line 97 "rbmm.points_to_info.m"
  MR_Integer * transform_hlds__rbmm__points_to_info__Reg_10,
#line 97 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18,
#line 97 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19)
#line 97 "rbmm.points_to_info.m"
{
#line 100 "rbmm.points_to_info.m"
  {
#line 100 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 100 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_26_26;
#line 100 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__NodeType_12;
#line 100 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Varset0_13;
#line 100 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Varset_14;
#line 100 "rbmm.points_to_info.m"
    MR_String transform_hlds__rbmm__points_to_info__RegName_15;
#line 100 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__NodeInfo_16;
#line 100 "rbmm.points_to_info.m"
    MR_String transform_hlds__rbmm__points_to_info__V_22_22;
#line 100 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__V_23_23;
#line 107 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info___Node_17;

#line 101 "rbmm.points_to_info.m"
    {
#line 101 "rbmm.points_to_info.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__rbmm__points_to_info__VarTypes_7, transform_hlds__rbmm__points_to_info__Var_8, &transform_hlds__rbmm__points_to_info__NodeType_12);
    }
#line 1404 "transform_hlds.rbmm.points_to_info.c"
    transform_hlds__rbmm__points_to_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_1[0];
#line 102 "rbmm.points_to_info.m"
    {
#line 102 "rbmm.points_to_info.m"
      mercury__set__init_1_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_26_26, &transform_hlds__rbmm__points_to_info__Varset0_13);
    }
#line 103 "rbmm.points_to_info.m"
    {
#line 103 "rbmm.points_to_info.m"
      mercury__set__insert_3_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__rbmm__points_to_info__Var_8)), transform_hlds__rbmm__points_to_info__Varset0_13, &transform_hlds__rbmm__points_to_info__Varset_14);
    }
#line 104 "rbmm.points_to_info.m"
    *transform_hlds__rbmm__points_to_info__Reg_10 = (transform_hlds__rbmm__points_to_info__Reg0_9 + (MR_Integer) 1);
#line 105 "rbmm.points_to_info.m"
    {
#line 105 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_22_22 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__points_to_info__Reg0_9);
    }
#line 105 "rbmm.points_to_info.m"
    {
#line 105 "rbmm.points_to_info.m"
      mercury__string__append_3_p_2((MR_String) "R", transform_hlds__rbmm__points_to_info__V_22_22, &transform_hlds__rbmm__points_to_info__RegName_15);
    }
#line 106 "rbmm.points_to_info.m"
    {
#line 106 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_23_23 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
    }
#line 106 "rbmm.points_to_info.m"
    {
#line 106 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__NodeInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 106 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Varset_14));
#line 106 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__RegName_15));
#line 106 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_info__V_23_23));
#line 106 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_info__NodeType_12));
#line 106 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 4) = ((MR_Box) ((MR_Integer) 0));
#line 106 "rbmm.points_to_info.m"
    }
#line 107 "rbmm.points_to_info.m"
    {
#line 107 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(transform_hlds__rbmm__points_to_info__NodeInfo_16, &transform_hlds__rbmm__points_to_info___Node_17, transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18, transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19);
    }
#line 100 "rbmm.points_to_info.m"
  }
#line 97 "rbmm.points_to_info.m"
}

#line 49 "rbmm.points_to_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_equal_2_p_0(
#line 49 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__RptaInfoA_3,
#line 49 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__RptaInfoB_4)
#line 49 "rbmm.points_to_info.m"
{
#line 109 "rbmm.points_to_info.m"
  {
#line 109 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14;
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_9_15;
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__GraphA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoA_3, (MR_Integer) 0)));
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__AlphaA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoA_3, (MR_Integer) 1)));
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__GraphB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoB_4, (MR_Integer) 0)));
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__AlphaB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoB_4, (MR_Integer) 1)));
#line 109 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CA_11;
#line 109 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CB_12;
#line 109 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__CallSitesA_13;

#line 112 "rbmm.points_to_info.m"
    {
#line 112 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(transform_hlds__rbmm__points_to_info__GraphA_5, transform_hlds__rbmm__points_to_info__GraphB_7);
    }
#line 109 "rbmm.points_to_info.m"
    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 109 "rbmm.points_to_info.m"
      {
#line 1500 "transform_hlds.rbmm.points_to_info.c"
        transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 1502 "transform_hlds.rbmm.points_to_info.c"
        transform_hlds__rbmm__points_to_info__TypeInfo_9_15 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0];
#line 124 "rbmm.points_to_info.m"
        {
#line 124 "rbmm.points_to_info.m"
          mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaA_6, &transform_hlds__rbmm__points_to_info__CA_11);
        }
#line 125 "rbmm.points_to_info.m"
        {
#line 125 "rbmm.points_to_info.m"
          mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaB_8, &transform_hlds__rbmm__points_to_info__CB_12);
        }
#line 126 "rbmm.points_to_info.m"
        transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CA_11 == transform_hlds__rbmm__points_to_info__CB_12);
#line 109 "rbmm.points_to_info.m"
        if (transform_hlds__rbmm__points_to_info__succeeded)
#line 109 "rbmm.points_to_info.m"
          {
#line 127 "rbmm.points_to_info.m"
            {
#line 127 "rbmm.points_to_info.m"
              mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaA_6, &transform_hlds__rbmm__points_to_info__CallSitesA_13);
            }
#line 128 "rbmm.points_to_info.m"
            {
#line 128 "rbmm.points_to_info.m"
              return transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(transform_hlds__rbmm__points_to_info__CallSitesA_13, transform_hlds__rbmm__points_to_info__AlphaA_6, transform_hlds__rbmm__points_to_info__AlphaB_8);
            }
#line 109 "rbmm.points_to_info.m"
          }
#line 109 "rbmm.points_to_info.m"
      }
#line 109 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 109 "rbmm.points_to_info.m"
  }
#line 49 "rbmm.points_to_info.m"
}

#line 92 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__closure_arg,
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 92 "rbmm.points_to_info.m"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_3,
#line 92 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_4,
#line 92 "rbmm.points_to_info.m"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_5)
#line 92 "rbmm.points_to_info.m"
{
#line 92 "rbmm.points_to_info.m"
  {
#line 92 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__closure = transform_hlds__rbmm__points_to_info__closure_arg;
#line 92 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__conv1_Reg_10;
#line 92 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19;

#line 92 "rbmm.points_to_info.m"
    {
#line 92 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_info__wrapper_arg_2), &transform_hlds__rbmm__points_to_info__conv1_Reg_10, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_4), &transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19);
    }
#line 92 "rbmm.points_to_info.m"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv1_Reg_10));
#line 92 "rbmm.points_to_info.m"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19));
#line 92 "rbmm.points_to_info.m"
  }
#line 92 "rbmm.points_to_info.m"
}

#line 47 "rbmm.points_to_info.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(
#line 47 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__ProcInfo_3)
#line 47 "rbmm.points_to_info.m"
{
#line 89 "rbmm.points_to_info.m"
  {
#line 89 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__RptaInfo_4;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__VarTypes_5;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Vars_6;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Graph_8;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__AlphaMapping_9;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__V_10_10;
#line 89 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__V_12_12;
#line 92 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info___Reg_7;
#line 92 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__conv3__Reg_7;
#line 92 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__conv2_Graph_8;

#line 90 "rbmm.points_to_info.m"
    {
#line 90 "rbmm.points_to_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__points_to_info__ProcInfo_3, &transform_hlds__rbmm__points_to_info__VarTypes_5);
    }
#line 91 "rbmm.points_to_info.m"
    {
#line 91 "rbmm.points_to_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(transform_hlds__rbmm__points_to_info__VarTypes_5, &transform_hlds__rbmm__points_to_info__Vars_6);
    }
#line 92 "rbmm.points_to_info.m"
    {
#line 92 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 92 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_info_scalar_common_3[0]));
#line 92 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1));
#line 92 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 92 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_info__VarTypes_5));
#line 92 "rbmm.points_to_info.m"
    }
#line 92 "rbmm.points_to_info.m"
    {
#line 92 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_12_12 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
    }
#line 92 "rbmm.points_to_info.m"
    {
#line 92 "rbmm.points_to_info.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_info__V_10_10, transform_hlds__rbmm__points_to_info__Vars_6, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_info__conv3__Reg_7, ((MR_Box) (transform_hlds__rbmm__points_to_info__V_12_12)), &transform_hlds__rbmm__points_to_info__conv2_Graph_8);
    }
#line 92 "rbmm.points_to_info.m"
    transform_hlds__rbmm__points_to_info___Reg_7 = ((MR_Integer) transform_hlds__rbmm__points_to_info__conv3__Reg_7);
#line 92 "rbmm.points_to_info.m"
    transform_hlds__rbmm__points_to_info__Graph_8 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv2_Graph_8);
#line 94 "rbmm.points_to_info.m"
    {
#line 94 "rbmm.points_to_info.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], &transform_hlds__rbmm__points_to_info__AlphaMapping_9);
    }
#line 95 "rbmm.points_to_info.m"
    {
#line 95 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__RptaInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 95 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfo_4, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Graph_8));
#line 95 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfo_4, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__AlphaMapping_9));
#line 95 "rbmm.points_to_info.m"
    }
#line 89 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__RptaInfo_4;
#line 89 "rbmm.points_to_info.m"
  }
#line 47 "rbmm.points_to_info.m"
}

#line 37 "rbmm.points_to_info.m"
void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(
#line 37 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__PredProcId_5,
#line 37 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__RptaInfo_6,
#line 37 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_0_8,
#line 37 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_9)
#line 37 "rbmm.points_to_info.m"
{
#line 87 "rbmm.points_to_info.m"
  {
#line 87 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 87 "rbmm.points_to_info.m"
    {
#line 87 "rbmm.points_to_info.m"
      *transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_9 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_info__PredProcId_5)), transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_0_8, ((MR_Box) (transform_hlds__rbmm__points_to_info__RptaInfo_6)));
    }
#line 87 "rbmm.points_to_info.m"
  }
#line 37 "rbmm.points_to_info.m"
}

#line 34 "rbmm.points_to_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(
#line 34 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__PredProcId_4,
#line 34 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__Table_5,
#line 34 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__RptaInfo_6)
#line 34 "rbmm.points_to_info.m"
{
#line 84 "rbmm.points_to_info.m"
  {
#line 84 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 84 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6;

#line 84 "rbmm.points_to_info.m"
    {
#line 84 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__succeeded = mercury__map__elem_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_info__PredProcId_4)), transform_hlds__rbmm__points_to_info__Table_5, &transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6);
    }
#line 84 "rbmm.points_to_info.m"
    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 84 "rbmm.points_to_info.m"
      {
#line 84 "rbmm.points_to_info.m"
        *transform_hlds__rbmm__points_to_info__RptaInfo_6 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6);
#line 84 "rbmm.points_to_info.m"
        transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 84 "rbmm.points_to_info.m"
      }
#line 84 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 84 "rbmm.points_to_info.m"
  }
#line 34 "rbmm.points_to_info.m"
}

#line 32 "rbmm.points_to_info.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0(void)
#line 32 "rbmm.points_to_info.m"
{
#line 81 "rbmm.points_to_info.m"
  {
#line 81 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 81 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1;

#line 81 "rbmm.points_to_info.m"
    {
#line 81 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0);
    }
#line 81 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__HeadVar__1_1;
#line 81 "rbmm.points_to_info.m"
  }
#line 32 "rbmm.points_to_info.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.points_to_info. */
