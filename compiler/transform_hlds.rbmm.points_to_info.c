/*
** Automatically generated from `rbmm.points_to_info.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 154 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 160 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 166 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 169 "transform_hlds.rbmm.points_to_info.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2];

#line 172 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0;

#line 175 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1];

#line 178 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1];

#line 181 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[1];

#line 184 "transform_hlds.rbmm.points_to_info.c"
static const MR_Integer transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[1];

#line 187 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 190 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
#line 193 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 195 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 198 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
#line 201 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 203 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 205 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 208 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
#line 211 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 213 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 216 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
#line 219 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 221 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 223 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 226 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
#line 229 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 231 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 234 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
#line 237 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 239 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 241 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 244 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
#line 247 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 249 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2);

#line 252 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
#line 255 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 257 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 259 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3);

#line 154 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
#line 154 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 154 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2,
#line 154 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3);

#line 131 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
#line 131 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 131 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingA_2,
#line 131 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingB_3);

#line 98 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
#line 98 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__VarTypes_7,
#line 98 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__Var_8,
#line 98 "rbmm.points_to_info.m"
  MR_Integer transform_hlds__rbmm__points_to_info__Reg0_9,
#line 98 "rbmm.points_to_info.m"
  MR_Integer * transform_hlds__rbmm__points_to_info__Reg_10,
#line 98 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18,
#line 98 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19);

#line 93 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__closure_arg,
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 93 "rbmm.points_to_info.m"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_3,
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_4,
#line 93 "rbmm.points_to_info.m"
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



#line 377 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 385 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 394 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 402 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 411 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 420 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 437 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 454 "transform_hlds.rbmm.points_to_info.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

#line 460 "transform_hlds.rbmm.points_to_info.c"
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

#line 475 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

#line 480 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0
  }
};

#line 489 "transform_hlds.rbmm.points_to_info.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[1] = {
  &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

#line 494 "transform_hlds.rbmm.points_to_info.c"
static const MR_Integer transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[1] = {
  (MR_Integer) 0
};

#line 499 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 516 "transform_hlds.rbmm.points_to_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 525 "transform_hlds.rbmm.points_to_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 542 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0_10001(
#line 545 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 547 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 549 "transform_hlds.rbmm.points_to_info.c"
{
#line 551 "transform_hlds.rbmm.points_to_info.c"
  {
#line 553 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 556 "transform_hlds.rbmm.points_to_info.c"
    {
#line 558 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_alpha_mapping_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 561 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 563 "transform_hlds.rbmm.points_to_info.c"
  }
#line 565 "transform_hlds.rbmm.points_to_info.c"
}

#line 568 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0_10001(
#line 571 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 573 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 575 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 577 "transform_hlds.rbmm.points_to_info.c"
{
#line 579 "transform_hlds.rbmm.points_to_info.c"
  {
#line 581 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 584 "transform_hlds.rbmm.points_to_info.c"
    {
#line 586 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpt_alpha_mapping_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 589 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 591 "transform_hlds.rbmm.points_to_info.c"
  }
#line 593 "transform_hlds.rbmm.points_to_info.c"
}

#line 596 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0_10001(
#line 599 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 601 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 603 "transform_hlds.rbmm.points_to_info.c"
{
#line 605 "transform_hlds.rbmm.points_to_info.c"
  {
#line 607 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 610 "transform_hlds.rbmm.points_to_info.c"
    {
#line 612 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpt_call_alpha_mapping_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 615 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 617 "transform_hlds.rbmm.points_to_info.c"
  }
#line 619 "transform_hlds.rbmm.points_to_info.c"
}

#line 622 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0_10001(
#line 625 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 627 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 629 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 631 "transform_hlds.rbmm.points_to_info.c"
{
#line 633 "transform_hlds.rbmm.points_to_info.c"
  {
#line 635 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 638 "transform_hlds.rbmm.points_to_info.c"
    {
#line 640 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpt_call_alpha_mapping_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 643 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 645 "transform_hlds.rbmm.points_to_info.c"
  }
#line 647 "transform_hlds.rbmm.points_to_info.c"
}

#line 650 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0_10001(
#line 653 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 655 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 657 "transform_hlds.rbmm.points_to_info.c"
{
#line 659 "transform_hlds.rbmm.points_to_info.c"
  {
#line 661 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 664 "transform_hlds.rbmm.points_to_info.c"
    {
#line 666 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 669 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 671 "transform_hlds.rbmm.points_to_info.c"
  }
#line 673 "transform_hlds.rbmm.points_to_info.c"
}

#line 676 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0_10001(
#line 679 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 681 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 683 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 685 "transform_hlds.rbmm.points_to_info.c"
{
#line 687 "transform_hlds.rbmm.points_to_info.c"
  {
#line 689 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 692 "transform_hlds.rbmm.points_to_info.c"
    {
#line 694 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpta_info_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 697 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 699 "transform_hlds.rbmm.points_to_info.c"
  }
#line 701 "transform_hlds.rbmm.points_to_info.c"
}

#line 704 "transform_hlds.rbmm.points_to_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0_10001(
#line 707 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 709 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2)
#line 711 "transform_hlds.rbmm.points_to_info.c"
{
#line 713 "transform_hlds.rbmm.points_to_info.c"
  {
#line 715 "transform_hlds.rbmm.points_to_info.c"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 718 "transform_hlds.rbmm.points_to_info.c"
    {
#line 720 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info____Unify____rpta_info_table_0_0(((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2));
    }
#line 723 "transform_hlds.rbmm.points_to_info.c"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 725 "transform_hlds.rbmm.points_to_info.c"
  }
#line 727 "transform_hlds.rbmm.points_to_info.c"
}

#line 730 "transform_hlds.rbmm.points_to_info.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0_10001(
#line 733 "transform_hlds.rbmm.points_to_info.c"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 735 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 737 "transform_hlds.rbmm.points_to_info.c"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_3)
#line 739 "transform_hlds.rbmm.points_to_info.c"
{
#line 741 "transform_hlds.rbmm.points_to_info.c"
  {
#line 743 "transform_hlds.rbmm.points_to_info.c"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1;

#line 746 "transform_hlds.rbmm.points_to_info.c"
    {
#line 748 "transform_hlds.rbmm.points_to_info.c"
      transform_hlds__rbmm__points_to_info____Compare____rpta_info_table_0_0(&transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_3));
    }
#line 751 "transform_hlds.rbmm.points_to_info.c"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_HeadVar__1_1));
#line 753 "transform_hlds.rbmm.points_to_info.c"
  }
#line 755 "transform_hlds.rbmm.points_to_info.c"
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
#line 844 "transform_hlds.rbmm.points_to_info.c"
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
#line 866 "transform_hlds.rbmm.points_to_info.c"
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

#line 933 "transform_hlds.rbmm.points_to_info.c"
        {
#line 935 "transform_hlds.rbmm.points_to_info.c"
          transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(transform_hlds__rbmm__points_to_info__V_3_3, transform_hlds__rbmm__points_to_info__V_5_5);
        }
#line 40 "rbmm.points_to_info.m"
        if (transform_hlds__rbmm__points_to_info__succeeded)
#line 40 "rbmm.points_to_info.m"
          {
#line 942 "transform_hlds.rbmm.points_to_info.c"
            transform_hlds__rbmm__points_to_info__TypeInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[1];
#line 944 "transform_hlds.rbmm.points_to_info.c"
            {
#line 946 "transform_hlds.rbmm.points_to_info.c"
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

#line 154 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(
#line 154 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 154 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2,
#line 154 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3)
#line 154 "rbmm.points_to_info.m"
{
#line 157 "rbmm.points_to_info.m"
  while (MR_TRUE)
#line 157 "rbmm.points_to_info.m"
    {
#line 157 "rbmm.points_to_info.m"
      /* tailcall optimized into a loop */
#line 157 "rbmm.points_to_info.m"
      {
#line 157 "rbmm.points_to_info.m"
        MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 157 "rbmm.points_to_info.m"
        if ((transform_hlds__rbmm__points_to_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "rbmm.points_to_info.m"
          transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 157 "rbmm.points_to_info.m"
        else
#line 159 "rbmm.points_to_info.m"
          {
#line 159 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 159 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__Ns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__NPrimeB_10;
#line 159 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__NPrimeA_11;
#line 159 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__V_14_14;
#line 159 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__V_15_15;
#line 160 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10;
#line 161 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11;

#line 160 "rbmm.points_to_info.m"
            {
#line 160 "rbmm.points_to_info.m"
              transform_hlds__rbmm__points_to_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__AMAtCallSiteB_3, ((MR_Box) (transform_hlds__rbmm__points_to_info__N_6)), &transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10);
            }
#line 160 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 160 "rbmm.points_to_info.m"
              {
#line 160 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__NPrimeB_10 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_NPrimeB_10);
#line 160 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 160 "rbmm.points_to_info.m"
              }
#line 159 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 159 "rbmm.points_to_info.m"
              {
#line 161 "rbmm.points_to_info.m"
                {
#line 161 "rbmm.points_to_info.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__AMAtCallSiteA_2, ((MR_Box) (transform_hlds__rbmm__points_to_info__N_6)), &transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11);
                }
#line 161 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__NPrimeA_11 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv1_NPrimeA_11);
#line 162 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__V_14_14 = (MR_Integer) transform_hlds__rbmm__points_to_info__NPrimeA_11;
#line 162 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__V_15_15 = (MR_Integer) transform_hlds__rbmm__points_to_info__NPrimeB_10;
#line 162 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__V_14_14 == transform_hlds__rbmm__points_to_info__V_15_15);
#line 159 "rbmm.points_to_info.m"
                if (transform_hlds__rbmm__points_to_info__succeeded)
#line 163 "rbmm.points_to_info.m"
                  {
#line 163 "rbmm.points_to_info.m"
                    /* direct tailcall eliminated */
#line 163 "rbmm.points_to_info.m"
                    {
#line 163 "rbmm.points_to_info.m"
                      MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_info__Ns_7;

#line 163 "rbmm.points_to_info.m"
                      transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1;
#line 163 "rbmm.points_to_info.m"
                    }
#line 163 "rbmm.points_to_info.m"
                    continue;
#line 163 "rbmm.points_to_info.m"
                  }
#line 159 "rbmm.points_to_info.m"
              }
#line 159 "rbmm.points_to_info.m"
          }
#line 157 "rbmm.points_to_info.m"
        return transform_hlds__rbmm__points_to_info__succeeded;
#line 157 "rbmm.points_to_info.m"
      }
#line 157 "rbmm.points_to_info.m"
      break;
#line 157 "rbmm.points_to_info.m"
    }
#line 154 "rbmm.points_to_info.m"
}

#line 131 "rbmm.points_to_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(
#line 131 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1,
#line 131 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingA_2,
#line 131 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingB_3)
#line 131 "rbmm.points_to_info.m"
{
#line 134 "rbmm.points_to_info.m"
  while (MR_TRUE)
#line 134 "rbmm.points_to_info.m"
    {
#line 134 "rbmm.points_to_info.m"
      /* tailcall optimized into a loop */
#line 134 "rbmm.points_to_info.m"
      {
#line 134 "rbmm.points_to_info.m"
        MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 134 "rbmm.points_to_info.m"
        if ((transform_hlds__rbmm__points_to_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 134 "rbmm.points_to_info.m"
          transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 134 "rbmm.points_to_info.m"
        else
#line 136 "rbmm.points_to_info.m"
          {
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0];
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19;
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__CallSiteA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__CallSiteAs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_info__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10;
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11;
#line 136 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__CA_16;
#line 136 "rbmm.points_to_info.m"
            MR_Integer transform_hlds__rbmm__points_to_info__CB_17;
#line 136 "rbmm.points_to_info.m"
            MR_Word transform_hlds__rbmm__points_to_info__NodesA_18;
#line 137 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10;
#line 138 "rbmm.points_to_info.m"
            MR_Box transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11;

#line 137 "rbmm.points_to_info.m"
            {
#line 137 "rbmm.points_to_info.m"
              transform_hlds__rbmm__points_to_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeInfo_13_13, transform_hlds__rbmm__points_to_info__AlphaMappingB_3, ((MR_Box) (transform_hlds__rbmm__points_to_info__CallSiteA_6)), &transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10);
            }
#line 137 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 137 "rbmm.points_to_info.m"
              {
#line 137 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_AlphaMappingAtCallSiteB_10);
#line 137 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 137 "rbmm.points_to_info.m"
              }
#line 136 "rbmm.points_to_info.m"
            if (transform_hlds__rbmm__points_to_info__succeeded)
#line 136 "rbmm.points_to_info.m"
              {
#line 138 "rbmm.points_to_info.m"
                {
#line 138 "rbmm.points_to_info.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_12_12, transform_hlds__rbmm__points_to_info__TypeInfo_13_13, transform_hlds__rbmm__points_to_info__AlphaMappingA_2, ((MR_Box) (transform_hlds__rbmm__points_to_info__CallSiteA_6)), &transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11);
                }
#line 138 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv1_AlphaMappingAtCallSiteA_11);
#line 1280 "transform_hlds.rbmm.points_to_info.c"
                transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 147 "rbmm.points_to_info.m"
                {
#line 147 "rbmm.points_to_info.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, &transform_hlds__rbmm__points_to_info__CA_16);
                }
#line 148 "rbmm.points_to_info.m"
                {
#line 148 "rbmm.points_to_info.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10, &transform_hlds__rbmm__points_to_info__CB_17);
                }
#line 149 "rbmm.points_to_info.m"
                transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CA_16 == transform_hlds__rbmm__points_to_info__CB_17);
#line 136 "rbmm.points_to_info.m"
                if (transform_hlds__rbmm__points_to_info__succeeded)
#line 136 "rbmm.points_to_info.m"
                  {
#line 150 "rbmm.points_to_info.m"
                    {
#line 150 "rbmm.points_to_info.m"
                      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_19, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, &transform_hlds__rbmm__points_to_info__NodesA_18);
                    }
#line 151 "rbmm.points_to_info.m"
                    {
#line 151 "rbmm.points_to_info.m"
                      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_p_0(transform_hlds__rbmm__points_to_info__NodesA_18, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteA_11, transform_hlds__rbmm__points_to_info__AlphaMappingAtCallSiteB_10);
                    }
#line 136 "rbmm.points_to_info.m"
                    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 141 "rbmm.points_to_info.m"
                      {
#line 141 "rbmm.points_to_info.m"
                        /* direct tailcall eliminated */
#line 141 "rbmm.points_to_info.m"
                        {
#line 141 "rbmm.points_to_info.m"
                          MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_info__CallSiteAs_7;

#line 141 "rbmm.points_to_info.m"
                          transform_hlds__rbmm__points_to_info__HeadVar__1_1 = transform_hlds__rbmm__points_to_info__HeadVar__1__tmp_copy_1;
#line 141 "rbmm.points_to_info.m"
                        }
#line 141 "rbmm.points_to_info.m"
                        continue;
#line 141 "rbmm.points_to_info.m"
                      }
#line 136 "rbmm.points_to_info.m"
                  }
#line 136 "rbmm.points_to_info.m"
              }
#line 136 "rbmm.points_to_info.m"
          }
#line 134 "rbmm.points_to_info.m"
        return transform_hlds__rbmm__points_to_info__succeeded;
#line 134 "rbmm.points_to_info.m"
      }
#line 134 "rbmm.points_to_info.m"
      break;
#line 134 "rbmm.points_to_info.m"
    }
#line 131 "rbmm.points_to_info.m"
}

#line 98 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(
#line 98 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__VarTypes_7,
#line 98 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__Var_8,
#line 98 "rbmm.points_to_info.m"
  MR_Integer transform_hlds__rbmm__points_to_info__Reg0_9,
#line 98 "rbmm.points_to_info.m"
  MR_Integer * transform_hlds__rbmm__points_to_info__Reg_10,
#line 98 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18,
#line 98 "rbmm.points_to_info.m"
  MR_Word * transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19)
#line 98 "rbmm.points_to_info.m"
{
#line 101 "rbmm.points_to_info.m"
  {
#line 101 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 101 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_26_26;
#line 101 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__NodeType_12;
#line 101 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Varset0_13;
#line 101 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Varset_14;
#line 101 "rbmm.points_to_info.m"
    MR_String transform_hlds__rbmm__points_to_info__RegName_15;
#line 101 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__NodeInfo_16;
#line 101 "rbmm.points_to_info.m"
    MR_String transform_hlds__rbmm__points_to_info__V_22_22;
#line 101 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__V_23_23;
#line 108 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info___Node_17;

#line 102 "rbmm.points_to_info.m"
    {
#line 102 "rbmm.points_to_info.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__rbmm__points_to_info__VarTypes_7, transform_hlds__rbmm__points_to_info__Var_8, &transform_hlds__rbmm__points_to_info__NodeType_12);
    }
#line 1389 "transform_hlds.rbmm.points_to_info.c"
    transform_hlds__rbmm__points_to_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_1[0];
#line 103 "rbmm.points_to_info.m"
    {
#line 103 "rbmm.points_to_info.m"
      mercury__set__init_1_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_26_26, &transform_hlds__rbmm__points_to_info__Varset0_13);
    }
#line 104 "rbmm.points_to_info.m"
    {
#line 104 "rbmm.points_to_info.m"
      mercury__set__insert_3_p_0(transform_hlds__rbmm__points_to_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__rbmm__points_to_info__Var_8)), transform_hlds__rbmm__points_to_info__Varset0_13, &transform_hlds__rbmm__points_to_info__Varset_14);
    }
#line 105 "rbmm.points_to_info.m"
    *transform_hlds__rbmm__points_to_info__Reg_10 = (transform_hlds__rbmm__points_to_info__Reg0_9 + (MR_Integer) 1);
#line 106 "rbmm.points_to_info.m"
    {
#line 106 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_22_22 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__points_to_info__Reg0_9);
    }
#line 106 "rbmm.points_to_info.m"
    {
#line 106 "rbmm.points_to_info.m"
      mercury__string__append_3_p_2((MR_String) "R", transform_hlds__rbmm__points_to_info__V_22_22, &transform_hlds__rbmm__points_to_info__RegName_15);
    }
#line 107 "rbmm.points_to_info.m"
    {
#line 107 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_23_23 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
    }
#line 107 "rbmm.points_to_info.m"
    {
#line 107 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__NodeInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 107 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Varset_14));
#line 107 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__RegName_15));
#line 107 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_info__V_23_23));
#line 107 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_info__NodeType_12));
#line 107 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__NodeInfo_16, 4) = ((MR_Box) ((MR_Integer) 0));
#line 107 "rbmm.points_to_info.m"
    }
#line 108 "rbmm.points_to_info.m"
    {
#line 108 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(transform_hlds__rbmm__points_to_info__NodeInfo_16, &transform_hlds__rbmm__points_to_info___Node_17, transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_0_18, transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Graph_19);
    }
#line 101 "rbmm.points_to_info.m"
  }
#line 98 "rbmm.points_to_info.m"
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
#line 110 "rbmm.points_to_info.m"
  {
#line 110 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14;
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__TypeInfo_9_15;
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__GraphA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoA_3, (MR_Integer) 0)));
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__AlphaA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoA_3, (MR_Integer) 1)));
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__GraphB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoB_4, (MR_Integer) 0)));
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__AlphaB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfoB_4, (MR_Integer) 1)));
#line 110 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CA_11;
#line 110 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__CB_12;
#line 110 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__CallSitesA_13;

#line 113 "rbmm.points_to_info.m"
    {
#line 113 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(transform_hlds__rbmm__points_to_info__GraphA_5, transform_hlds__rbmm__points_to_info__GraphB_7);
    }
#line 110 "rbmm.points_to_info.m"
    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 110 "rbmm.points_to_info.m"
      {
#line 1485 "transform_hlds.rbmm.points_to_info.c"
        transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 1487 "transform_hlds.rbmm.points_to_info.c"
        transform_hlds__rbmm__points_to_info__TypeInfo_9_15 = (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0];
#line 125 "rbmm.points_to_info.m"
        {
#line 125 "rbmm.points_to_info.m"
          mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaA_6, &transform_hlds__rbmm__points_to_info__CA_11);
        }
#line 126 "rbmm.points_to_info.m"
        {
#line 126 "rbmm.points_to_info.m"
          mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaB_8, &transform_hlds__rbmm__points_to_info__CB_12);
        }
#line 127 "rbmm.points_to_info.m"
        transform_hlds__rbmm__points_to_info__succeeded = (transform_hlds__rbmm__points_to_info__CA_11 == transform_hlds__rbmm__points_to_info__CB_12);
#line 110 "rbmm.points_to_info.m"
        if (transform_hlds__rbmm__points_to_info__succeeded)
#line 110 "rbmm.points_to_info.m"
          {
#line 128 "rbmm.points_to_info.m"
            {
#line 128 "rbmm.points_to_info.m"
              mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_info__TypeCtorInfo_8_14, transform_hlds__rbmm__points_to_info__TypeInfo_9_15, transform_hlds__rbmm__points_to_info__AlphaA_6, &transform_hlds__rbmm__points_to_info__CallSitesA_13);
            }
#line 129 "rbmm.points_to_info.m"
            {
#line 129 "rbmm.points_to_info.m"
              return transform_hlds__rbmm__points_to_info__succeeded = transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_p_0(transform_hlds__rbmm__points_to_info__CallSitesA_13, transform_hlds__rbmm__points_to_info__AlphaA_6, transform_hlds__rbmm__points_to_info__AlphaB_8);
            }
#line 110 "rbmm.points_to_info.m"
          }
#line 110 "rbmm.points_to_info.m"
      }
#line 110 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 110 "rbmm.points_to_info.m"
  }
#line 49 "rbmm.points_to_info.m"
}

#line 93 "rbmm.points_to_info.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1(
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__closure_arg,
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_1,
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_2,
#line 93 "rbmm.points_to_info.m"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_3,
#line 93 "rbmm.points_to_info.m"
  MR_Box transform_hlds__rbmm__points_to_info__wrapper_arg_4,
#line 93 "rbmm.points_to_info.m"
  MR_Box * transform_hlds__rbmm__points_to_info__wrapper_arg_5)
#line 93 "rbmm.points_to_info.m"
{
#line 93 "rbmm.points_to_info.m"
  {
#line 93 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__closure = transform_hlds__rbmm__points_to_info__closure_arg;
#line 93 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info__conv1_Reg_10;
#line 93 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19;

#line 93 "rbmm.points_to_info.m"
    {
#line 93 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__add_node_from_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_info__wrapper_arg_2), &transform_hlds__rbmm__points_to_info__conv1_Reg_10, ((MR_Word) transform_hlds__rbmm__points_to_info__wrapper_arg_4), &transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19);
    }
#line 93 "rbmm.points_to_info.m"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv1_Reg_10));
#line 93 "rbmm.points_to_info.m"
    *transform_hlds__rbmm__points_to_info__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_info__conv0_STATE_VARIABLE_Graph_19));
#line 93 "rbmm.points_to_info.m"
  }
#line 93 "rbmm.points_to_info.m"
}

#line 47 "rbmm.points_to_info.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(
#line 47 "rbmm.points_to_info.m"
  MR_Word transform_hlds__rbmm__points_to_info__ProcInfo_3)
#line 47 "rbmm.points_to_info.m"
{
#line 90 "rbmm.points_to_info.m"
  {
#line 90 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__RptaInfo_4;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__VarTypes_5;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Vars_6;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__Graph_8;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__AlphaMapping_9;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__V_10_10;
#line 90 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__V_12_12;
#line 93 "rbmm.points_to_info.m"
    MR_Integer transform_hlds__rbmm__points_to_info___Reg_7;
#line 93 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__conv3__Reg_7;
#line 93 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__conv2_Graph_8;

#line 91 "rbmm.points_to_info.m"
    {
#line 91 "rbmm.points_to_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__points_to_info__ProcInfo_3, &transform_hlds__rbmm__points_to_info__VarTypes_5);
    }
#line 92 "rbmm.points_to_info.m"
    {
#line 92 "rbmm.points_to_info.m"
      hlds__vartypes__vartypes_vars_2_p_0(transform_hlds__rbmm__points_to_info__VarTypes_5, &transform_hlds__rbmm__points_to_info__Vars_6);
    }
#line 93 "rbmm.points_to_info.m"
    {
#line 93 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 93 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_info_scalar_common_3[0]));
#line 93 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0_1));
#line 93 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 93 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_info__VarTypes_5));
#line 93 "rbmm.points_to_info.m"
    }
#line 94 "rbmm.points_to_info.m"
    {
#line 94 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__V_12_12 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
    }
#line 93 "rbmm.points_to_info.m"
    {
#line 93 "rbmm.points_to_info.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_info__V_10_10, transform_hlds__rbmm__points_to_info__Vars_6, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_info__conv3__Reg_7, ((MR_Box) (transform_hlds__rbmm__points_to_info__V_12_12)), &transform_hlds__rbmm__points_to_info__conv2_Graph_8);
    }
#line 93 "rbmm.points_to_info.m"
    transform_hlds__rbmm__points_to_info___Reg_7 = ((MR_Integer) transform_hlds__rbmm__points_to_info__conv3__Reg_7);
#line 93 "rbmm.points_to_info.m"
    transform_hlds__rbmm__points_to_info__Graph_8 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv2_Graph_8);
#line 95 "rbmm.points_to_info.m"
    {
#line 95 "rbmm.points_to_info.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_info_scalar_common_2[0], &transform_hlds__rbmm__points_to_info__AlphaMapping_9);
    }
#line 96 "rbmm.points_to_info.m"
    {
#line 96 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__RptaInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 96 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfo_4, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_info__Graph_8));
#line 96 "rbmm.points_to_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_info__RptaInfo_4, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_info__AlphaMapping_9));
#line 96 "rbmm.points_to_info.m"
    }
#line 90 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__RptaInfo_4;
#line 90 "rbmm.points_to_info.m"
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
#line 88 "rbmm.points_to_info.m"
  {
#line 88 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;

#line 88 "rbmm.points_to_info.m"
    {
#line 88 "rbmm.points_to_info.m"
      *transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_9 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_info__PredProcId_5)), transform_hlds__rbmm__points_to_info__STATE_VARIABLE_Table_0_8, ((MR_Box) (transform_hlds__rbmm__points_to_info__RptaInfo_6)));
    }
#line 88 "rbmm.points_to_info.m"
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
#line 85 "rbmm.points_to_info.m"
  {
#line 85 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 85 "rbmm.points_to_info.m"
    MR_Box transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6;

#line 85 "rbmm.points_to_info.m"
    {
#line 85 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__succeeded = mercury__map__elem_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_info__PredProcId_4)), transform_hlds__rbmm__points_to_info__Table_5, &transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6);
    }
#line 85 "rbmm.points_to_info.m"
    if (transform_hlds__rbmm__points_to_info__succeeded)
#line 85 "rbmm.points_to_info.m"
      {
#line 85 "rbmm.points_to_info.m"
        *transform_hlds__rbmm__points_to_info__RptaInfo_6 = ((MR_Word) transform_hlds__rbmm__points_to_info__conv0_RptaInfo_6);
#line 85 "rbmm.points_to_info.m"
        transform_hlds__rbmm__points_to_info__succeeded = MR_TRUE;
#line 85 "rbmm.points_to_info.m"
      }
#line 85 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__succeeded;
#line 85 "rbmm.points_to_info.m"
  }
#line 34 "rbmm.points_to_info.m"
}

#line 32 "rbmm.points_to_info.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0(void)
#line 32 "rbmm.points_to_info.m"
{
#line 82 "rbmm.points_to_info.m"
  {
#line 82 "rbmm.points_to_info.m"
    MR_bool transform_hlds__rbmm__points_to_info__succeeded;
#line 82 "rbmm.points_to_info.m"
    MR_Word transform_hlds__rbmm__points_to_info__HeadVar__1_1;

#line 82 "rbmm.points_to_info.m"
    {
#line 82 "rbmm.points_to_info.m"
      transform_hlds__rbmm__points_to_info__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0);
    }
#line 82 "rbmm.points_to_info.m"
    return transform_hlds__rbmm__points_to_info__HeadVar__1_1;
#line 82 "rbmm.points_to_info.m"
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
