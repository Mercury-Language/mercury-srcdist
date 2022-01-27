/*
** Automatically generated from `term_norm.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module transform_hlds.term_norm. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_norm__init
ENDINIT
*/

#include "transform_hlds.term_norm.mih"


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
#include "check_hlds.type_util.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s {
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3;
  MR_bool transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8;
  jmp_buf transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_17_32;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__V_30_30;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0;

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0;

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2[1];

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2;

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3[1];

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3;

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[1];

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0[3];

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0[4];

static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0[4];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0[1];

static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0[1];

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box transform_hlds__term_norm__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box transform_hlds__term_norm__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box transform_hlds__term_norm__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_6);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
  MR_Word transform_hlds__term_norm__WeightMap_7,
  MR_Integer transform_hlds__term_norm__ConstNum_8,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_5);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
  MR_Word transform_hlds__term_norm__WeightMap_7,
  MR_Integer transform_hlds__term_norm__ConstNum_8,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(
  MR_Word transform_hlds__term_norm__ConstStructDb_5,
  MR_Integer transform_hlds__term_norm__ConstNum_6,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_13,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_14);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4);

static MR_bool MR_CALL 
transform_hlds__term_norm__functor_norm_filter_args_5_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word * transform_hlds__term_norm__HeadVar__3_3,
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
  MR_Word * transform_hlds__term_norm__HeadVar__5_5);

static MR_bool MR_CALL 
transform_hlds__term_norm__search_weight_table_4_p_0(
  MR_Word transform_hlds__term_norm__WeightMap_5,
  MR_Word transform_hlds__term_norm__TypeCtor_6,
  MR_Word transform_hlds__term_norm__ConsId_7,
  MR_Word * transform_hlds__term_norm__WeightInfo_8);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
  void * transform_hlds__term_norm__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
  void * transform_hlds__term_norm__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
  void * transform_hlds__term_norm__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__Id_2,
  MR_Word transform_hlds__term_norm__Params_3,
  MR_Integer * transform_hlds__term_norm__HeadVar__4_4,
  MR_Word * transform_hlds__term_norm__HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
  MR_Word transform_hlds__term_norm__TypeCtor_6,
  MR_Word transform_hlds__term_norm__Params_7,
  MR_Word transform_hlds__term_norm__Ctor_8,
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_22,
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_23);

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0_1(
  MR_Box transform_hlds__term_norm__closure_arg,
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box * transform_hlds__term_norm__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23,
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_24);

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
  MR_Box transform_hlds__term_norm__closure_arg,
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box * transform_hlds__term_norm__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
  MR_Box transform_hlds__term_norm__closure_arg,
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box * transform_hlds__term_norm__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_2[4][2];

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_4[1][8];




static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_norm__set_functor_info_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_norm__set_functor_info_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_2[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0 = {
  (MR_String) "simple",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1 = {
  (MR_String) "total",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2 = {
  (MR_String) "use_map",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3 = {
  (MR_String) "use_map_and_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0[2] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3
};

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0[3] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0[4] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3
};

static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____functor_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____functor_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "functor_info",
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0 },
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0 = {
  (MR_String) "weight",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0
};

static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_info",
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0 },
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_table_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_table_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;

    {
      transform_hlds__term_norm__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2));
    }
    return transform_hlds__term_norm__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box transform_hlds__term_norm__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_norm__conv0_HeadVar__1_1;

    {
      transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_norm__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), ((MR_Word) transform_hlds__term_norm__wrapper_arg_3));
    }
    *transform_hlds__term_norm__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_norm__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;

    {
      transform_hlds__term_norm__succeeded = transform_hlds__term_norm____Unify____weight_info_0_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2));
    }
    return transform_hlds__term_norm__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box transform_hlds__term_norm__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_norm__conv0_HeadVar__1_1;

    {
      transform_hlds__term_norm____Compare____weight_info_0_0(&transform_hlds__term_norm__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), ((MR_Word) transform_hlds__term_norm__wrapper_arg_3));
    }
    *transform_hlds__term_norm__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_norm__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;

    {
      transform_hlds__term_norm__succeeded = transform_hlds__term_norm____Unify____weight_table_0_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2));
    }
    return transform_hlds__term_norm__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box transform_hlds__term_norm__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_norm__conv0_HeadVar__1_1;

    {
      transform_hlds__term_norm____Compare____weight_table_0_0(&transform_hlds__term_norm__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), ((MR_Word) transform_hlds__term_norm__wrapper_arg_3));
    }
    *transform_hlds__term_norm__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_norm__conv0_HeadVar__1_1));
  }
}

MR_Integer MR_CALL 
transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(
  MR_Word transform_hlds__term_norm__FunctorInfo_7,
  MR_Word transform_hlds__term_norm__TypeCtor_8,
  MR_Word transform_hlds__term_norm__ConsId_9)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Integer transform_hlds__term_norm__Weight_10;

    switch (MR_tag((MR_Word) transform_hlds__term_norm__FunctorInfo_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_norm__FunctorInfo_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer transform_hlds__term_norm__Arity_12;
              MR_Word transform_hlds__term_norm__V_11_11;
              MR_Word transform_hlds__term_norm__V_13_13;

              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 1)));
                  transform_hlds__term_norm__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 2)));
                  transform_hlds__term_norm__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 3)));
                  transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__Arity_12 == (MR_Integer) 0);
                  transform_hlds__term_norm__succeeded = !(transform_hlds__term_norm__succeeded);
                }
              if (transform_hlds__term_norm__succeeded)
                transform_hlds__term_norm__Weight_10 = (MR_Integer) 1;
              else
                transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer transform_hlds__term_norm__Arity_20;
              MR_Word transform_hlds__term_norm__V_14_14;
              MR_Word transform_hlds__term_norm__V_15_15;

              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 1)));
                  transform_hlds__term_norm__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 2)));
                  transform_hlds__term_norm__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 3)));
                  transform_hlds__term_norm__Weight_10 = transform_hlds__term_norm__Arity_20;
                }
              else
                transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_norm__WeightMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__FunctorInfo_7, (MR_Integer) 0)));
          MR_Word transform_hlds__term_norm__WeightInfo_17;
          MR_Word transform_hlds__term_norm__WeightInfo0_29;
          MR_Word transform_hlds__term_norm__V_32_32;
          MR_Box transform_hlds__term_norm__conv0_WeightInfo0_29;

          {
            transform_hlds__term_norm__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_32_32, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_8));
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_32_32, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_9));
          }
          {
            transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_16, ((MR_Box) (transform_hlds__term_norm__V_32_32)), &transform_hlds__term_norm__conv0_WeightInfo0_29);
          }
          if (transform_hlds__term_norm__succeeded)
            {
              transform_hlds__term_norm__WeightInfo0_29 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_29);
              transform_hlds__term_norm__succeeded = MR_TRUE;
            }
          if (transform_hlds__term_norm__succeeded)
            {
              transform_hlds__term_norm__WeightInfo_17 = transform_hlds__term_norm__WeightInfo0_29;
              transform_hlds__term_norm__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word transform_hlds__term_norm__TypeCtorInfo_7_39;
              MR_Integer transform_hlds__term_norm__Arity_31;
              MR_Word transform_hlds__term_norm__ArgInfos_37;
              MR_Word transform_hlds__term_norm__V_38_38;
              MR_Word transform_hlds__term_norm__V_30_30;

              {
                transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_8);
              }
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 0)));
                  transform_hlds__term_norm__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 1)));
                  transform_hlds__term_norm__V_38_38 = (MR_Integer) 1;
                  transform_hlds__term_norm__TypeCtorInfo_7_39 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                  {
                    mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_39, transform_hlds__term_norm__Arity_31, ((MR_Box) (transform_hlds__term_norm__V_38_38)), &transform_hlds__term_norm__ArgInfos_37);
                  }
                  {
                    transform_hlds__term_norm__WeightInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_31));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_37));
                  }
                  transform_hlds__term_norm__succeeded = MR_TRUE;
                }
            }
          if (transform_hlds__term_norm__succeeded)
            {
              MR_Word transform_hlds__term_norm__V_18_18;

              transform_hlds__term_norm__Weight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, (MR_Integer) 0)));
              transform_hlds__term_norm__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, (MR_Integer) 1)));
            }
          else
            transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_norm__WeightMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__FunctorInfo_7, (MR_Integer) 0)));
          MR_Word transform_hlds__term_norm__WeightInfo_22;
          MR_Word transform_hlds__term_norm__WeightInfo0_44;
          MR_Word transform_hlds__term_norm__V_47_47;
          MR_Box transform_hlds__term_norm__conv1_WeightInfo0_44;

          {
            transform_hlds__term_norm__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_47_47, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_8));
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_47_47, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_9));
          }
          {
            transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_23, ((MR_Box) (transform_hlds__term_norm__V_47_47)), &transform_hlds__term_norm__conv1_WeightInfo0_44);
          }
          if (transform_hlds__term_norm__succeeded)
            {
              transform_hlds__term_norm__WeightInfo0_44 = ((MR_Word) transform_hlds__term_norm__conv1_WeightInfo0_44);
              transform_hlds__term_norm__succeeded = MR_TRUE;
            }
          if (transform_hlds__term_norm__succeeded)
            {
              transform_hlds__term_norm__WeightInfo_22 = transform_hlds__term_norm__WeightInfo0_44;
              transform_hlds__term_norm__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word transform_hlds__term_norm__TypeCtorInfo_7_54;
              MR_Integer transform_hlds__term_norm__Arity_46;
              MR_Word transform_hlds__term_norm__ArgInfos_52;
              MR_Word transform_hlds__term_norm__V_53_53;
              MR_Word transform_hlds__term_norm__V_45_45;

              {
                transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_8);
              }
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 0)));
                  transform_hlds__term_norm__Arity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 1)));
                  transform_hlds__term_norm__V_53_53 = (MR_Integer) 1;
                  transform_hlds__term_norm__TypeCtorInfo_7_54 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                  {
                    mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_54, transform_hlds__term_norm__Arity_46, ((MR_Box) (transform_hlds__term_norm__V_53_53)), &transform_hlds__term_norm__ArgInfos_52);
                  }
                  {
                    transform_hlds__term_norm__WeightInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_46));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_52));
                  }
                  transform_hlds__term_norm__succeeded = MR_TRUE;
                }
            }
          if (transform_hlds__term_norm__succeeded)
            {
              MR_Word transform_hlds__term_norm__V_19_19;

              transform_hlds__term_norm__Weight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, (MR_Integer) 0)));
              transform_hlds__term_norm__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, (MR_Integer) 1)));
            }
          else
            transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
        }
        break;
    }
    return transform_hlds__term_norm__Weight_10;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__Cast_HeadVar1_4 = transform_hlds__term_norm__HeadVar__2_2;
    MR_Word transform_hlds__term_norm__Cast_HeadVar2_5 = transform_hlds__term_norm__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__Cast_HeadVar1_3 = transform_hlds__term_norm__HeadVar__1_1;
    MR_Word transform_hlds__term_norm__Cast_HeadVar2_4 = transform_hlds__term_norm__HeadVar__2_2;

    {
      transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_norm__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Integer transform_hlds__term_norm__CastX_9 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;
    MR_Integer transform_hlds__term_norm__CastY_10 = (MR_Integer) transform_hlds__term_norm__HeadVar__3_3;

    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_9 == transform_hlds__term_norm__CastY_10);
    if (transform_hlds__term_norm__succeeded)
      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer transform_hlds__term_norm__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_norm__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_norm__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_norm__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_norm__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_norm__V_8_8, transform_hlds__term_norm__V_4_4, transform_hlds__term_norm__V_6_6);
        }
        transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__V_8_8 == (MR_Integer) 0);
        transform_hlds__term_norm__succeeded = !(transform_hlds__term_norm__succeeded);
        if (transform_hlds__term_norm__succeeded)
          *transform_hlds__term_norm__HeadVar__1_1 = transform_hlds__term_norm__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_2[1], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__V_5_5)), ((MR_Box) (transform_hlds__term_norm__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Integer transform_hlds__term_norm__CastX_7 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
    MR_Integer transform_hlds__term_norm__CastY_8 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_7 == transform_hlds__term_norm__CastY_8);
    if (transform_hlds__term_norm__succeeded)
      transform_hlds__term_norm__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_norm__TypeInfo_9_9;
        MR_Integer transform_hlds__term_norm__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_norm__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_norm__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_norm__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));

        transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__V_3_3 == transform_hlds__term_norm__V_5_5);
        if (transform_hlds__term_norm__succeeded)
          {
            transform_hlds__term_norm__TypeInfo_9_9 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[1];
            {
              transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_norm__TypeInfo_9_9, ((MR_Box) (transform_hlds__term_norm__V_4_4)), ((MR_Box) (transform_hlds__term_norm__V_6_6)));
            }
          }
      }
    return transform_hlds__term_norm__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0(
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Integer transform_hlds__term_norm__CastX_20 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;
    MR_Integer transform_hlds__term_norm__CastY_21 = (MR_Integer) transform_hlds__term_norm__HeadVar__3_3;

    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_20 == transform_hlds__term_norm__CastY_21);
    if (transform_hlds__term_norm__succeeded)
      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(transform_hlds__term_norm__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__term_norm__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__term_norm__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_norm__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(transform_hlds__term_norm__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__V_24_24)), ((MR_Box) (transform_hlds__term_norm__V_11_11)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_norm__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(transform_hlds__term_norm__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__term_norm__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__V_25_25)), ((MR_Box) (transform_hlds__term_norm__V_19_19)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Integer transform_hlds__term_norm__CastX_11 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
    MR_Integer transform_hlds__term_norm__CastY_12 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_11 == transform_hlds__term_norm__CastY_12);
    if (transform_hlds__term_norm__succeeded)
      transform_hlds__term_norm__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(transform_hlds__term_norm__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer transform_hlds__term_norm__CastX_3 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
                MR_Integer transform_hlds__term_norm__CastY_4 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

                transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastY_4 == transform_hlds__term_norm__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer transform_hlds__term_norm__CastX_5 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
                MR_Integer transform_hlds__term_norm__CastY_6 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

                transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastY_6 == transform_hlds__term_norm__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_norm__TypeInfo_13_13;
            MR_Word transform_hlds__term_norm__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_norm__V_8_8;

            transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__term_norm__succeeded)
              {
                transform_hlds__term_norm__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_norm__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_norm_scalar_common_1[2];
                {
                  transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_norm__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_norm__V_7_7)), ((MR_Box) (transform_hlds__term_norm__V_8_8)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_norm__TypeInfo_14_14;
            MR_Word transform_hlds__term_norm__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_norm__V_10_10;

            transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__term_norm__succeeded)
              {
                transform_hlds__term_norm__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_norm__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_norm_scalar_common_1[2];
                {
                  transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_norm__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_norm__V_9_9)), ((MR_Box) (transform_hlds__term_norm__V_10_10)));
                }
              }
          }
          break;
      }
    return transform_hlds__term_norm__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_norm__succeeded;

        if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__term_norm__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *transform_hlds__term_norm__STATE_VARIABLE_Gamma_6 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_norm", (MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
                return;
              }
            }
        else
          {
            MR_Word transform_hlds__term_norm__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_norm__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));

            if ((transform_hlds__term_norm__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_norm", (MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__term_norm__UseArg_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 0)));
                MR_Word transform_hlds__term_norm__UseArgs_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 1)));
                MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49;

                switch (transform_hlds__term_norm__UseArg_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
                    break;
                  case (MR_Integer) 1:
                    if (((MR_tag((MR_Word) transform_hlds__term_norm__V_52_52)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_Integer transform_hlds__term_norm__ArgConstNum_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_52_52, (MR_Integer) 0)));
                        MR_Word transform_hlds__term_norm__ConstStruct_59;
                        MR_Word transform_hlds__term_norm__ConsId_60;
                        MR_Word transform_hlds__term_norm__Args_61;
                        MR_Word transform_hlds__term_norm__Type_62;
                        MR_Word transform_hlds__term_norm__TypeCtor_64;
                        MR_Word transform_hlds__term_norm__V_63_63;
                        MR_Word transform_hlds__term_norm__WeightInfo_65;
                        MR_Word transform_hlds__term_norm__WeightInfo0_74;
                        MR_Word transform_hlds__term_norm__V_77_77;
                        MR_Box transform_hlds__term_norm__conv0_WeightInfo0_74;

                        {
                          hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_45, &transform_hlds__term_norm__ConstStruct_59);
                        }
                        transform_hlds__term_norm__ConsId_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 0)));
                        transform_hlds__term_norm__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 1)));
                        transform_hlds__term_norm__Type_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 2)));
                        transform_hlds__term_norm__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 3)));
                        {
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_62, &transform_hlds__term_norm__TypeCtor_64);
                        }
                        {
                          transform_hlds__term_norm__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_77_77, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_64));
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_77_77, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_60));
                        }
                        {
                          transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__HeadVar__2_2, ((MR_Box) (transform_hlds__term_norm__V_77_77)), &transform_hlds__term_norm__conv0_WeightInfo0_74);
                        }
                        if (transform_hlds__term_norm__succeeded)
                          {
                            transform_hlds__term_norm__WeightInfo0_74 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_74);
                            transform_hlds__term_norm__succeeded = MR_TRUE;
                          }
                        if (transform_hlds__term_norm__succeeded)
                          {
                            transform_hlds__term_norm__WeightInfo_65 = transform_hlds__term_norm__WeightInfo0_74;
                            transform_hlds__term_norm__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_Word transform_hlds__term_norm__TypeCtorInfo_7_84;
                            MR_Integer transform_hlds__term_norm__Arity_76;
                            MR_Word transform_hlds__term_norm__ArgInfos_82;
                            MR_Word transform_hlds__term_norm__V_83_83;
                            MR_Word transform_hlds__term_norm__V_75_75;

                            {
                              transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_64);
                            }
                            if (transform_hlds__term_norm__succeeded)
                              {
                                transform_hlds__term_norm__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_64, (MR_Integer) 0)));
                                transform_hlds__term_norm__Arity_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_64, (MR_Integer) 1)));
                                transform_hlds__term_norm__V_83_83 = (MR_Integer) 1;
                                transform_hlds__term_norm__TypeCtorInfo_7_84 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                                {
                                  mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_84, transform_hlds__term_norm__Arity_76, ((MR_Box) (transform_hlds__term_norm__V_83_83)), &transform_hlds__term_norm__ArgInfos_82);
                                }
                                {
                                  transform_hlds__term_norm__WeightInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_76));
                                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_82));
                                }
                                transform_hlds__term_norm__succeeded = MR_TRUE;
                              }
                          }
                        if (transform_hlds__term_norm__succeeded)
                          {
                            MR_Integer transform_hlds__term_norm__ConsIdGamma_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, (MR_Integer) 0)));
                            MR_Word transform_hlds__term_norm__UseArgs_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, (MR_Integer) 1)));
                            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_68 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5 + transform_hlds__term_norm__ConsIdGamma_66);

                            {
                              transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__HeadVar__2_2, transform_hlds__term_norm__Args_61, transform_hlds__term_norm__UseArgs_67, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_68, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49);
                            }
                          }
                        else
                          transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
                      }
                    else
                      {
                        MR_Word transform_hlds__term_norm__ConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__V_52_52, (MR_Integer) 0)));
                        MR_Word transform_hlds__term_norm__Type_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__V_52_52, (MR_Integer) 1)));
                        MR_Word transform_hlds__term_norm__TypeCtor_41;
                        MR_Word transform_hlds__term_norm__WeightInfo_42;

                        {
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_40, &transform_hlds__term_norm__TypeCtor_41);
                        }
                        {
                          transform_hlds__term_norm__succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(transform_hlds__term_norm__HeadVar__2_2, transform_hlds__term_norm__TypeCtor_41, transform_hlds__term_norm__ConsId_39, &transform_hlds__term_norm__WeightInfo_42);
                        }
                        if (transform_hlds__term_norm__succeeded)
                          {
                            MR_Integer transform_hlds__term_norm__ConsIdGamma_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_42, (MR_Integer) 0)));
                            MR_Word transform_hlds__term_norm__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_42, (MR_Integer) 1)));

                            transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5 + transform_hlds__term_norm__ConsIdGamma_43);
                          }
                        else
                          transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
                      }
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_norm__HeadVar__3__tmp_copy_3 = transform_hlds__term_norm__V_51_51;
                  MR_Word transform_hlds__term_norm__HeadVar__4__tmp_copy_4 = transform_hlds__term_norm__UseArgs_37;
                  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_5 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49;

                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_5;
                  transform_hlds__term_norm__HeadVar__4_4 = transform_hlds__term_norm__HeadVar__4__tmp_copy_4;
                  transform_hlds__term_norm__HeadVar__3_3 = transform_hlds__term_norm__HeadVar__3__tmp_copy_3;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
  MR_Word transform_hlds__term_norm__WeightMap_7,
  MR_Integer transform_hlds__term_norm__ConstNum_8,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__ConstStruct_10;
    MR_Word transform_hlds__term_norm__ConsId_11;
    MR_Word transform_hlds__term_norm__Args_12;
    MR_Word transform_hlds__term_norm__Type_13;
    MR_Word transform_hlds__term_norm__TypeCtor_15;
    MR_Word transform_hlds__term_norm__V_14_14;
    MR_Word transform_hlds__term_norm__WeightInfo_16;
    MR_Word transform_hlds__term_norm__WeightInfo0_27;
    MR_Word transform_hlds__term_norm__V_30_30;
    MR_Box transform_hlds__term_norm__conv0_WeightInfo0_27;

    {
      hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__ConstNum_8, &transform_hlds__term_norm__ConstStruct_10);
    }
    transform_hlds__term_norm__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 0)));
    transform_hlds__term_norm__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 1)));
    transform_hlds__term_norm__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 2)));
    transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 3)));
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_13, &transform_hlds__term_norm__TypeCtor_15);
    }
    {
      transform_hlds__term_norm__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_15));
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_11));
    }
    {
      transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_7, ((MR_Box) (transform_hlds__term_norm__V_30_30)), &transform_hlds__term_norm__conv0_WeightInfo0_27);
    }
    if (transform_hlds__term_norm__succeeded)
      {
        transform_hlds__term_norm__WeightInfo0_27 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_27);
        transform_hlds__term_norm__succeeded = MR_TRUE;
      }
    if (transform_hlds__term_norm__succeeded)
      {
        transform_hlds__term_norm__WeightInfo_16 = transform_hlds__term_norm__WeightInfo0_27;
        transform_hlds__term_norm__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__term_norm__TypeCtorInfo_7_37;
        MR_Integer transform_hlds__term_norm__Arity_29;
        MR_Word transform_hlds__term_norm__ArgInfos_35;
        MR_Word transform_hlds__term_norm__V_36_36;
        MR_Word transform_hlds__term_norm__V_28_28;

        {
          transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_15);
        }
        if (transform_hlds__term_norm__succeeded)
          {
            transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 0)));
            transform_hlds__term_norm__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 1)));
            transform_hlds__term_norm__V_36_36 = (MR_Integer) 1;
            transform_hlds__term_norm__TypeCtorInfo_7_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
            {
              mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_37, transform_hlds__term_norm__Arity_29, ((MR_Box) (transform_hlds__term_norm__V_36_36)), &transform_hlds__term_norm__ArgInfos_35);
            }
            {
              transform_hlds__term_norm__WeightInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_29));
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_35));
            }
            transform_hlds__term_norm__succeeded = MR_TRUE;
          }
      }
    if (transform_hlds__term_norm__succeeded)
      {
        MR_Integer transform_hlds__term_norm__ConsIdGamma_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 0)));
        MR_Word transform_hlds__term_norm__UseArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19 + transform_hlds__term_norm__ConsIdGamma_17);

        {
          transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__WeightMap_7, transform_hlds__term_norm__Args_12, transform_hlds__term_norm__UseArgs_18, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21, transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);
        }
      }
    else
      *transform_hlds__term_norm__STATE_VARIABLE_Gamma_20 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_norm__succeeded;

        if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_norm__STATE_VARIABLE_Gamma_5 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4;
        else
          {
            MR_Word transform_hlds__term_norm__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_norm__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26;

            if (((MR_tag((MR_Word) transform_hlds__term_norm__Arg_13)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer transform_hlds__term_norm__ArgConstNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Arg_13, (MR_Integer) 0)));
                MR_Word transform_hlds__term_norm__ConstStruct_34;
                MR_Word transform_hlds__term_norm__ConsId_35;
                MR_Word transform_hlds__term_norm__Args_36;
                MR_Word transform_hlds__term_norm__Type_37;
                MR_Word transform_hlds__term_norm__TypeCtor_39;
                MR_Word transform_hlds__term_norm__V_38_38;
                MR_Word transform_hlds__term_norm__WeightInfo_40;
                MR_Word transform_hlds__term_norm__WeightInfo0_49;
                MR_Word transform_hlds__term_norm__V_52_52;
                MR_Box transform_hlds__term_norm__conv0_WeightInfo0_49;

                {
                  hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_22, &transform_hlds__term_norm__ConstStruct_34);
                }
                transform_hlds__term_norm__ConsId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 0)));
                transform_hlds__term_norm__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 1)));
                transform_hlds__term_norm__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 2)));
                transform_hlds__term_norm__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 3)));
                {
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_37, &transform_hlds__term_norm__TypeCtor_39);
                }
                {
                  transform_hlds__term_norm__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_52_52, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_39));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_52_52, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_35));
                }
                {
                  transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__HeadVar__2_2, ((MR_Box) (transform_hlds__term_norm__V_52_52)), &transform_hlds__term_norm__conv0_WeightInfo0_49);
                }
                if (transform_hlds__term_norm__succeeded)
                  {
                    transform_hlds__term_norm__WeightInfo0_49 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_49);
                    transform_hlds__term_norm__succeeded = MR_TRUE;
                  }
                if (transform_hlds__term_norm__succeeded)
                  {
                    transform_hlds__term_norm__WeightInfo_40 = transform_hlds__term_norm__WeightInfo0_49;
                    transform_hlds__term_norm__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word transform_hlds__term_norm__TypeCtorInfo_7_59;
                    MR_Integer transform_hlds__term_norm__Arity_51;
                    MR_Word transform_hlds__term_norm__ArgInfos_57;
                    MR_Word transform_hlds__term_norm__V_58_58;
                    MR_Word transform_hlds__term_norm__V_50_50;

                    {
                      transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_39);
                    }
                    if (transform_hlds__term_norm__succeeded)
                      {
                        transform_hlds__term_norm__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_39, (MR_Integer) 0)));
                        transform_hlds__term_norm__Arity_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_39, (MR_Integer) 1)));
                        transform_hlds__term_norm__V_58_58 = (MR_Integer) 1;
                        transform_hlds__term_norm__TypeCtorInfo_7_59 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                        {
                          mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_59, transform_hlds__term_norm__Arity_51, ((MR_Box) (transform_hlds__term_norm__V_58_58)), &transform_hlds__term_norm__ArgInfos_57);
                        }
                        {
                          transform_hlds__term_norm__WeightInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_51));
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_57));
                        }
                        transform_hlds__term_norm__succeeded = MR_TRUE;
                      }
                  }
                if (transform_hlds__term_norm__succeeded)
                  {
                    MR_Integer transform_hlds__term_norm__ConsIdGamma_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, (MR_Integer) 0)));
                    MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_43 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4 + transform_hlds__term_norm__ConsIdGamma_41);
                    MR_Word transform_hlds__term_norm__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, (MR_Integer) 1)));

                    {
                      transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__HeadVar__2_2, transform_hlds__term_norm__Args_36, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_43, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26);
                    }
                  }
                else
                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4;
              }
            else
              {
                MR_Word transform_hlds__term_norm__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__Arg_13, (MR_Integer) 0)));
                MR_Word transform_hlds__term_norm__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__Arg_13, (MR_Integer) 1)));
                MR_Word transform_hlds__term_norm__TypeCtor_18;
                MR_Word transform_hlds__term_norm__WeightInfo_19;
                MR_Word transform_hlds__term_norm__WeightInfo0_64;
                MR_Word transform_hlds__term_norm__V_67_67;
                MR_Box transform_hlds__term_norm__conv1_WeightInfo0_64;

                {
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_17, &transform_hlds__term_norm__TypeCtor_18);
                }
                {
                  transform_hlds__term_norm__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_67_67, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_18));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_67_67, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_16));
                }
                {
                  transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__HeadVar__2_2, ((MR_Box) (transform_hlds__term_norm__V_67_67)), &transform_hlds__term_norm__conv1_WeightInfo0_64);
                }
                if (transform_hlds__term_norm__succeeded)
                  {
                    transform_hlds__term_norm__WeightInfo0_64 = ((MR_Word) transform_hlds__term_norm__conv1_WeightInfo0_64);
                    transform_hlds__term_norm__succeeded = MR_TRUE;
                  }
                if (transform_hlds__term_norm__succeeded)
                  {
                    transform_hlds__term_norm__WeightInfo_19 = transform_hlds__term_norm__WeightInfo0_64;
                    transform_hlds__term_norm__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word transform_hlds__term_norm__TypeCtorInfo_7_74;
                    MR_Integer transform_hlds__term_norm__Arity_66;
                    MR_Word transform_hlds__term_norm__ArgInfos_72;
                    MR_Word transform_hlds__term_norm__V_73_73;
                    MR_Word transform_hlds__term_norm__V_65_65;

                    {
                      transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_18);
                    }
                    if (transform_hlds__term_norm__succeeded)
                      {
                        transform_hlds__term_norm__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_18, (MR_Integer) 0)));
                        transform_hlds__term_norm__Arity_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_18, (MR_Integer) 1)));
                        transform_hlds__term_norm__V_73_73 = (MR_Integer) 1;
                        transform_hlds__term_norm__TypeCtorInfo_7_74 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                        {
                          mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_74, transform_hlds__term_norm__Arity_66, ((MR_Box) (transform_hlds__term_norm__V_73_73)), &transform_hlds__term_norm__ArgInfos_72);
                        }
                        {
                          transform_hlds__term_norm__WeightInfo_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_66));
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_72));
                        }
                        transform_hlds__term_norm__succeeded = MR_TRUE;
                      }
                  }
                if (transform_hlds__term_norm__succeeded)
                  {
                    MR_Integer transform_hlds__term_norm__ConsIdGamma_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, (MR_Integer) 0)));
                    MR_Word transform_hlds__term_norm__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, (MR_Integer) 1)));

                    transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4 + transform_hlds__term_norm__ConsIdGamma_20);
                  }
                else
                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_norm__HeadVar__3__tmp_copy_3 = transform_hlds__term_norm__Args_14;
              MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26;

              transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_4;
              transform_hlds__term_norm__HeadVar__3_3 = transform_hlds__term_norm__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
  MR_Word transform_hlds__term_norm__WeightMap_7,
  MR_Integer transform_hlds__term_norm__ConstNum_8,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__ConstStruct_10;
    MR_Word transform_hlds__term_norm__ConsId_11;
    MR_Word transform_hlds__term_norm__Args_12;
    MR_Word transform_hlds__term_norm__Type_13;
    MR_Word transform_hlds__term_norm__TypeCtor_15;
    MR_Word transform_hlds__term_norm__V_14_14;
    MR_Word transform_hlds__term_norm__WeightInfo_16;
    MR_Word transform_hlds__term_norm__WeightInfo0_27;
    MR_Word transform_hlds__term_norm__V_30_30;
    MR_Box transform_hlds__term_norm__conv0_WeightInfo0_27;

    {
      hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__ConstNum_8, &transform_hlds__term_norm__ConstStruct_10);
    }
    transform_hlds__term_norm__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 0)));
    transform_hlds__term_norm__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 1)));
    transform_hlds__term_norm__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 2)));
    transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 3)));
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_13, &transform_hlds__term_norm__TypeCtor_15);
    }
    {
      transform_hlds__term_norm__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_15));
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_11));
    }
    {
      transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_7, ((MR_Box) (transform_hlds__term_norm__V_30_30)), &transform_hlds__term_norm__conv0_WeightInfo0_27);
    }
    if (transform_hlds__term_norm__succeeded)
      {
        transform_hlds__term_norm__WeightInfo0_27 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_27);
        transform_hlds__term_norm__succeeded = MR_TRUE;
      }
    if (transform_hlds__term_norm__succeeded)
      {
        transform_hlds__term_norm__WeightInfo_16 = transform_hlds__term_norm__WeightInfo0_27;
        transform_hlds__term_norm__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__term_norm__TypeCtorInfo_7_37;
        MR_Integer transform_hlds__term_norm__Arity_29;
        MR_Word transform_hlds__term_norm__ArgInfos_35;
        MR_Word transform_hlds__term_norm__V_36_36;
        MR_Word transform_hlds__term_norm__V_28_28;

        {
          transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_15);
        }
        if (transform_hlds__term_norm__succeeded)
          {
            transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 0)));
            transform_hlds__term_norm__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 1)));
            transform_hlds__term_norm__V_36_36 = (MR_Integer) 1;
            transform_hlds__term_norm__TypeCtorInfo_7_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
            {
              mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_37, transform_hlds__term_norm__Arity_29, ((MR_Box) (transform_hlds__term_norm__V_36_36)), &transform_hlds__term_norm__ArgInfos_35);
            }
            {
              transform_hlds__term_norm__WeightInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_29));
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_35));
            }
            transform_hlds__term_norm__succeeded = MR_TRUE;
          }
      }
    if (transform_hlds__term_norm__succeeded)
      {
        MR_Integer transform_hlds__term_norm__ConsIdGamma_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19 + transform_hlds__term_norm__ConsIdGamma_17);
        MR_Word transform_hlds__term_norm__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 1)));

        {
          transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__WeightMap_7, transform_hlds__term_norm__Args_12, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21, transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);
        }
      }
    else
      *transform_hlds__term_norm__STATE_VARIABLE_Gamma_20 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_norm__succeeded;

        if ((transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_norm__STATE_VARIABLE_Gamma_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
        else
          {
            MR_Word transform_hlds__term_norm__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__term_norm__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

            if (((MR_tag((MR_Word) transform_hlds__term_norm__Arg_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer transform_hlds__term_norm__ArgConstNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Arg_10, (MR_Integer) 0)));
                MR_Word transform_hlds__term_norm__ConstStruct_25;
                MR_Word transform_hlds__term_norm__Args_27;
                MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30;
                MR_Integer transform_hlds__term_norm__V_31_31;
                MR_Word transform_hlds__term_norm___ConsId_26;
                MR_Word transform_hlds__term_norm__V_28_28;
                MR_Word transform_hlds__term_norm__V_29_29;

                {
                  hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_15, &transform_hlds__term_norm__ConstStruct_25);
                }
                transform_hlds__term_norm___ConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 0)));
                transform_hlds__term_norm__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 1)));
                transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 2)));
                transform_hlds__term_norm__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 3)));
                {
                  transform_hlds__term_norm__V_31_31 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, transform_hlds__term_norm__Args_27);
                }
                transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 + transform_hlds__term_norm__V_31_31);
                {
                  transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__Args_27, transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18);
                }
              }
            else
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_norm__HeadVar__2__tmp_copy_2 = transform_hlds__term_norm__Args_11;
              MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

              transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3;
              transform_hlds__term_norm__HeadVar__2_2 = transform_hlds__term_norm__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(
  MR_Word transform_hlds__term_norm__ConstStructDb_5,
  MR_Integer transform_hlds__term_norm__ConstNum_6,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_13,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_14)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__ConstStruct_8;
    MR_Word transform_hlds__term_norm__Args_10;
    MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_15;
    MR_Integer transform_hlds__term_norm__V_16_16;
    MR_Word transform_hlds__term_norm___ConsId_9;
    MR_Word transform_hlds__term_norm__V_11_11;
    MR_Word transform_hlds__term_norm__V_12_12;

    {
      hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_5, transform_hlds__term_norm__ConstNum_6, &transform_hlds__term_norm__ConstStruct_8);
    }
    transform_hlds__term_norm___ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 0)));
    transform_hlds__term_norm__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 1)));
    transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 2)));
    transform_hlds__term_norm__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 3)));
    {
      transform_hlds__term_norm__V_16_16 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, transform_hlds__term_norm__Args_10);
    }
    transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_15 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_13 + transform_hlds__term_norm__V_16_16);
    {
      transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(transform_hlds__term_norm__ConstStructDb_5, transform_hlds__term_norm__Args_10, transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_15, transform_hlds__term_norm__STATE_VARIABLE_Gamma_14);
    }
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_norm__succeeded;

        if ((transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_norm__STATE_VARIABLE_Gamma_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
        else
          {
            MR_Word transform_hlds__term_norm__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__term_norm__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

            if (((MR_tag((MR_Word) transform_hlds__term_norm__Arg_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer transform_hlds__term_norm__ArgConstNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Arg_10, (MR_Integer) 0)));
                MR_Word transform_hlds__term_norm__ConstStruct_25;
                MR_Word transform_hlds__term_norm__Args_27;
                MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30;
                MR_Word transform_hlds__term_norm___ConsId_26;
                MR_Word transform_hlds__term_norm__V_28_28;
                MR_Word transform_hlds__term_norm__V_29_29;

                {
                  hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_15, &transform_hlds__term_norm__ConstStruct_25);
                }
                transform_hlds__term_norm___ConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 0)));
                transform_hlds__term_norm__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 1)));
                transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 2)));
                transform_hlds__term_norm__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 3)));
                transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 + (MR_Integer) 1);
                {
                  transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__Args_27, transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18);
                }
              }
            else
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_norm__HeadVar__2__tmp_copy_2 = transform_hlds__term_norm__Args_11;
              MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

              transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3;
              transform_hlds__term_norm__HeadVar__2_2 = transform_hlds__term_norm__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__term_norm__functor_norm_filter_args_5_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
  MR_Word * transform_hlds__term_norm__HeadVar__3_3,
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
  MR_Word * transform_hlds__term_norm__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_norm__succeeded;

        if ((transform_hlds__term_norm__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (transform_hlds__term_norm__succeeded)
              {
                transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__term_norm__succeeded)
                  {
                    *transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *transform_hlds__term_norm__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    transform_hlds__term_norm__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word transform_hlds__term_norm__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_norm__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_norm__V_24_24;
            MR_Word transform_hlds__term_norm__V_25_25;
            MR_Word transform_hlds__term_norm__V_26_26;
            MR_Word transform_hlds__term_norm__V_27_27;

            transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__term_norm__succeeded)
              {
                transform_hlds__term_norm__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_norm__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__term_norm__succeeded)
                  {
                    transform_hlds__term_norm__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 0)));
                    transform_hlds__term_norm__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 1)));
                    switch (transform_hlds__term_norm__V_23_23) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word transform_hlds__term_norm__HeadVar__1__tmp_copy_1 = transform_hlds__term_norm__V_22_22;
                            MR_Word transform_hlds__term_norm__HeadVar__2__tmp_copy_2 = transform_hlds__term_norm__V_24_24;
                            MR_Word transform_hlds__term_norm__HeadVar__4__tmp_copy_4 = transform_hlds__term_norm__V_26_26;

                            transform_hlds__term_norm__HeadVar__4_4 = transform_hlds__term_norm__HeadVar__4__tmp_copy_4;
                            transform_hlds__term_norm__HeadVar__2_2 = transform_hlds__term_norm__HeadVar__2__tmp_copy_2;
                            transform_hlds__term_norm__HeadVar__1_1 = transform_hlds__term_norm__HeadVar__1__tmp_copy_1;
                          }
                          continue;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word transform_hlds__term_norm__Args_9;
                          MR_Word transform_hlds__term_norm__Modes_12;

                          {
                            transform_hlds__term_norm__succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(transform_hlds__term_norm__V_22_22, transform_hlds__term_norm__V_24_24, &transform_hlds__term_norm__Args_9, transform_hlds__term_norm__V_26_26, &transform_hlds__term_norm__Modes_12);
                          }
                          if (transform_hlds__term_norm__succeeded)
                            {
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *transform_hlds__term_norm__HeadVar__3_3 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_norm__V_25_25));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__Args_9));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *transform_hlds__term_norm__HeadVar__5_5 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_norm__V_27_27));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__Modes_12));
                              }
                              transform_hlds__term_norm__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                  }
              }
          }
        return transform_hlds__term_norm__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__term_norm__search_weight_table_4_p_0(
  MR_Word transform_hlds__term_norm__WeightMap_5,
  MR_Word transform_hlds__term_norm__TypeCtor_6,
  MR_Word transform_hlds__term_norm__ConsId_7,
  MR_Word * transform_hlds__term_norm__WeightInfo_8)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__WeightInfo0_9;
    MR_Word transform_hlds__term_norm__V_12_12;
    MR_Box transform_hlds__term_norm__conv0_WeightInfo0_9;

    {
      transform_hlds__term_norm__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_12_12, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_6));
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_12_12, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_7));
    }
    {
      transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_5, ((MR_Box) (transform_hlds__term_norm__V_12_12)), &transform_hlds__term_norm__conv0_WeightInfo0_9);
    }
    if (transform_hlds__term_norm__succeeded)
      {
        transform_hlds__term_norm__WeightInfo0_9 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_9);
        transform_hlds__term_norm__succeeded = MR_TRUE;
      }
    if (transform_hlds__term_norm__succeeded)
      {
        *transform_hlds__term_norm__WeightInfo_8 = transform_hlds__term_norm__WeightInfo0_9;
        transform_hlds__term_norm__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__term_norm__TypeCtorInfo_7_19;
        MR_Integer transform_hlds__term_norm__Arity_11;
        MR_Word transform_hlds__term_norm__ArgInfos_17;
        MR_Word transform_hlds__term_norm__V_18_18;
        MR_Word transform_hlds__term_norm__V_10_10;

        {
          transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_6);
        }
        if (transform_hlds__term_norm__succeeded)
          {
            transform_hlds__term_norm__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_6, (MR_Integer) 0)));
            transform_hlds__term_norm__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_6, (MR_Integer) 1)));
            transform_hlds__term_norm__V_18_18 = (MR_Integer) 1;
            transform_hlds__term_norm__TypeCtorInfo_7_19 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
            {
              mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_19, transform_hlds__term_norm__Arity_11, ((MR_Box) (transform_hlds__term_norm__V_18_18)), &transform_hlds__term_norm__ArgInfos_17);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__term_norm__WeightInfo_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_11));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_17));
            }
            transform_hlds__term_norm__succeeded = MR_TRUE;
          }
      }
    return transform_hlds__term_norm__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
  void * transform_hlds__term_norm__env_ptr_arg)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * transform_hlds__term_norm__env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) transform_hlds__term_norm__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
  void * transform_hlds__term_norm__env_ptr_arg)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * transform_hlds__term_norm__env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) transform_hlds__term_norm__env_ptr_arg;

    (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_17_32 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[2];
    {
      (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_17_32, ((MR_Box) ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25)), ((MR_Box) ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__V_30_30)));
    }
    if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
      {
        transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(transform_hlds__term_norm__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
  void * transform_hlds__term_norm__env_ptr_arg)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * transform_hlds__term_norm__env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) transform_hlds__term_norm__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word transform_hlds__term_norm__TypeInfo_14_29;
          MR_Word transform_hlds__term_norm__ArgType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 1)));
          MR_Word transform_hlds__term_norm__ArgTypeCtor_23;
          MR_Word transform_hlds__term_norm__ArgTypeArgs_24;
          MR_Word transform_hlds__term_norm__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 0)));
          MR_Word transform_hlds__term_norm__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 2)));
          MR_Word transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 3)));

          {
            (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__term_norm__ArgType_22, &transform_hlds__term_norm__ArgTypeCtor_23, &transform_hlds__term_norm__ArgTypeArgs_24);
          }
          if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
            {
              {
                (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, transform_hlds__term_norm__ArgTypeCtor_23);
              }
              if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
                {
                  {
                    (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(transform_hlds__term_norm__ArgTypeArgs_24, &(transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25);
                  }
                  if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
                    {
                      transform_hlds__term_norm__TypeInfo_14_29 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[0];
                      {
                        mercury__list__perm_2_p_0(transform_hlds__term_norm__TypeInfo_14_29, (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &(transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__V_30_30, transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2, transform_hlds__term_norm__env_ptr);
                      }
                    }
                }
            }
        }
        (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__Id_2,
  MR_Word transform_hlds__term_norm__Params_3,
  MR_Integer * transform_hlds__term_norm__HeadVar__4_4,
  MR_Word * transform_hlds__term_norm__HeadVar__5_5)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s transform_hlds__term_norm__env;

    (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2 = transform_hlds__term_norm__Id_2;
    (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3 = transform_hlds__term_norm__Params_3;
    if ((transform_hlds__term_norm__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__term_norm__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__term_norm__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word transform_hlds__term_norm__Args_9;
        MR_Integer transform_hlds__term_norm__NonRecArgs0_14;
        MR_Word transform_hlds__term_norm__ArgInfo0_15;

        (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__term_norm__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
        {
          transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(transform_hlds__term_norm__Args_9, (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &transform_hlds__term_norm__NonRecArgs0_14, &transform_hlds__term_norm__ArgInfo0_15);
        }
        {
          transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(&transform_hlds__term_norm__env);
        }
        if ((transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
          {
            *transform_hlds__term_norm__HeadVar__4_4 = transform_hlds__term_norm__NonRecArgs0_14;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_norm__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfo0_15));
            }
          }
        else
          {
            *transform_hlds__term_norm__HeadVar__4_4 = (transform_hlds__term_norm__NonRecArgs0_14 + (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_norm__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfo0_15));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
  MR_Word transform_hlds__term_norm__TypeCtor_6,
  MR_Word transform_hlds__term_norm__Params_7,
  MR_Word transform_hlds__term_norm__Ctor_8,
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_22,
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_23)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 2)));
    MR_Word transform_hlds__term_norm__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 3)));
    MR_Integer transform_hlds__term_norm__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 4)));
    MR_Word transform_hlds__term_norm__WeightInfo_20;
    MR_Word transform_hlds__term_norm__ConsId_21;
    MR_Word transform_hlds__term_norm__V_28_28;
    MR_Word transform_hlds__term_norm___ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 0)));
    MR_Word transform_hlds__term_norm___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 1)));
    MR_Word transform_hlds__term_norm__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 5)));

    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__Arity_14 > (MR_Integer) 0);
    if (transform_hlds__term_norm__succeeded)
      {
        MR_Integer transform_hlds__term_norm__NumNonRec_16;
        MR_Word transform_hlds__term_norm__ArgInfos0_17;
        MR_Integer transform_hlds__term_norm__Weight_18;
        MR_Word transform_hlds__term_norm__ArgInfos_19;

        {
          transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(transform_hlds__term_norm__Args_13, transform_hlds__term_norm__TypeCtor_6, transform_hlds__term_norm__Params_7, &transform_hlds__term_norm__NumNonRec_16, &transform_hlds__term_norm__ArgInfos0_17);
        }
        transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__NumNonRec_16 == (MR_Integer) 0);
        if (transform_hlds__term_norm__succeeded)
          {
            transform_hlds__term_norm__Weight_18 = (MR_Integer) 1;
            {
              mercury__list__duplicate_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_norm__Arity_14, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__term_norm__ArgInfos_19);
            }
          }
        else
          {
            transform_hlds__term_norm__Weight_18 = transform_hlds__term_norm__NumNonRec_16;
            transform_hlds__term_norm__ArgInfos_19 = transform_hlds__term_norm__ArgInfos0_17;
          }
        {
          transform_hlds__term_norm__WeightInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_20, 0) = ((MR_Box) (transform_hlds__term_norm__Weight_18));
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_20, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_19));
        }
      }
    else
      {
        transform_hlds__term_norm__WeightInfo_20 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[3];
      }
    {
      transform_hlds__term_norm__ConsId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 1) = ((MR_Box) (transform_hlds__term_norm__SymName_12));
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 2) = ((MR_Box) (transform_hlds__term_norm__Arity_14));
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 3) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_6));
    }
    {
      transform_hlds__term_norm__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_28_28, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_6));
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_28_28, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_21));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, ((MR_Box) (transform_hlds__term_norm__V_28_28)), ((MR_Box) (transform_hlds__term_norm__WeightInfo_20)), transform_hlds__term_norm__STATE_VARIABLE_Weights_0_22, transform_hlds__term_norm__STATE_VARIABLE_Weights_23);
    }
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0_1(
  MR_Box transform_hlds__term_norm__closure_arg,
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box * transform_hlds__term_norm__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_norm__closure = transform_hlds__term_norm__closure_arg;
    MR_Word transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_23;

    {
      transform_hlds__term_norm__find_weights_for_cons_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), &transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_23);
    }
    *transform_hlds__term_norm__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_23));
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23,
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_24)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__term_norm__TypeDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__term_norm__TypeBody_7;

    {
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__term_norm__TypeDefn_5, &transform_hlds__term_norm__TypeBody_7);
    }
    switch (MR_tag((MR_Word) transform_hlds__term_norm__TypeBody_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_norm__Constructors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 0)));
          MR_Word transform_hlds__term_norm__TypeParams_17;
          MR_Word transform_hlds__term_norm__V_25_25;
          MR_Word transform_hlds__term_norm__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 1)));
          MR_Word transform_hlds__term_norm__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 2)));
          MR_Word transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 3)));
          MR_Word transform_hlds__term_norm__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 4)));
          MR_Word transform_hlds__term_norm__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 5)));
          MR_Word transform_hlds__term_norm__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word transform_hlds__term_norm__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word transform_hlds__term_norm__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 7)));
          MR_Box transform_hlds__term_norm__conv1_STATE_VARIABLE_Weights_24;

          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__term_norm__TypeDefn_5, &transform_hlds__term_norm__TypeParams_17);
          }
          {
            transform_hlds__term_norm__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 0) = ((MR_Box) (&transform_hlds__term_norm_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 1) = ((MR_Box) (transform_hlds__term_norm__find_weights_for_type_3_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 3) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_4));
            MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 4) = ((MR_Box) (transform_hlds__term_norm__TypeParams_17));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__V_25_25, transform_hlds__term_norm__Constructors_8, ((MR_Box) (transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23)), &transform_hlds__term_norm__conv1_STATE_VARIABLE_Weights_24);
          }
          *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = ((MR_Word) transform_hlds__term_norm__conv1_STATE_VARIABLE_Weights_24);
        }
        break;
      case (MR_Integer) 2:
        *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
            break;
          case (MR_Integer) 1:
            *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_norm__zero_size_type_2_p_0(
  MR_Word transform_hlds__term_norm__ModuleInfo_3,
  MR_Word transform_hlds__term_norm__Type_4)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__CtorCat_5;

    {
      transform_hlds__term_norm__CtorCat_5 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__term_norm__ModuleInfo_3, transform_hlds__term_norm__Type_4);
    }
    switch (MR_tag((MR_Word) transform_hlds__term_norm__CtorCat_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_norm__CtorCat_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 3:
            {
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 4:
            {
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        {
          transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__CtorCat_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__term_norm__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__CtorCat_5, (MR_Integer) 1)));

              switch (transform_hlds__term_norm__V_16_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return transform_hlds__term_norm__succeeded;
  }
}

MR_Integer MR_CALL 
transform_hlds__term_norm__functor_lower_bound_4_f_0(
  MR_Word transform_hlds__term_norm___ModuleInfo_6,
  MR_Word transform_hlds__term_norm__FunctorInfo_7,
  MR_Word transform_hlds__term_norm__TypeCtor_8,
  MR_Word transform_hlds__term_norm__ConsId_9)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Integer transform_hlds__term_norm__Weight_10;

    {
      transform_hlds__term_norm__Weight_10 = transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(transform_hlds__term_norm__FunctorInfo_7, transform_hlds__term_norm__TypeCtor_8, transform_hlds__term_norm__ConsId_9);
    }
    return transform_hlds__term_norm__Weight_10;
  }
}

void MR_CALL 
transform_hlds__term_norm__functor_norm_9_p_0(
  MR_Word transform_hlds__term_norm__ModuleInfo_10,
  MR_Word transform_hlds__term_norm__FunctorInfo_11,
  MR_Word transform_hlds__term_norm__TypeCtor_12,
  MR_Word transform_hlds__term_norm__ConsId_13,
  MR_Integer * transform_hlds__term_norm__Gamma_14,
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Args_0_32,
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Args_33,
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34,
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Modes_35)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_norm__FunctorInfo_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_norm__FunctorInfo_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer transform_hlds__term_norm__Arity_18;
              MR_Word transform_hlds__term_norm__V_17_17;
              MR_Word transform_hlds__term_norm__V_19_19;

              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
                  transform_hlds__term_norm__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
                  transform_hlds__term_norm__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 3)));
                  transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__Arity_18 == (MR_Integer) 0);
                  transform_hlds__term_norm__succeeded = !(transform_hlds__term_norm__succeeded);
                }
              if (transform_hlds__term_norm__succeeded)
                *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 1;
              else
                {
                  MR_Integer transform_hlds__term_norm__ConstNum_20;
                  MR_Word transform_hlds__term_norm__V_21_21;

                  transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (transform_hlds__term_norm__succeeded)
                    {
                      transform_hlds__term_norm__ConstNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
                      transform_hlds__term_norm__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
                      {
                        MR_Word transform_hlds__term_norm__ConstStructDb_22;
                        MR_Word transform_hlds__term_norm__ConstStruct_80;
                        MR_Word transform_hlds__term_norm__Args_82;
                        MR_Word transform_hlds__term_norm___ConsId_81;
                        MR_Word transform_hlds__term_norm__V_83_83;
                        MR_Word transform_hlds__term_norm__V_84_84;

                        {
                          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_22);
                        }
                        {
                          hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_22, transform_hlds__term_norm__ConstNum_20, &transform_hlds__term_norm__ConstStruct_80);
                        }
                        transform_hlds__term_norm___ConsId_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 0)));
                        transform_hlds__term_norm__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 1)));
                        transform_hlds__term_norm__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 2)));
                        transform_hlds__term_norm__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 3)));
                        {
                          transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(transform_hlds__term_norm__ConstStructDb_22, transform_hlds__term_norm__Args_82, ((MR_Integer) 0 + (MR_Integer) 1), transform_hlds__term_norm__Gamma_14);
                        }
                      }
                    }
                  else
                    *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
                }
              *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
              *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer transform_hlds__term_norm__Arity_50;
              MR_Word transform_hlds__term_norm__V_23_23;
              MR_Word transform_hlds__term_norm__V_24_24;

              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
                  transform_hlds__term_norm__Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
                  transform_hlds__term_norm__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 3)));
                  *transform_hlds__term_norm__Gamma_14 = transform_hlds__term_norm__Arity_50;
                }
              else
                {
                  MR_Integer transform_hlds__term_norm__ConstNum_48;
                  MR_Word transform_hlds__term_norm__V_25_25;

                  transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (transform_hlds__term_norm__succeeded)
                    {
                      transform_hlds__term_norm__ConstNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
                      transform_hlds__term_norm__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
                      {
                        MR_Word transform_hlds__term_norm__ConstStructDb_47;

                        {
                          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_47);
                        }
                        {
                          transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(transform_hlds__term_norm__ConstStructDb_47, transform_hlds__term_norm__ConstNum_48, (MR_Integer) 0, transform_hlds__term_norm__Gamma_14);
                        }
                      }
                    }
                  else
                    *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
                }
              *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
              *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_norm__WeightMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__FunctorInfo_11, (MR_Integer) 0)));
          MR_Word transform_hlds__term_norm__WeightInfo_27;

          {
            transform_hlds__term_norm__succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(transform_hlds__term_norm__WeightMap_26, transform_hlds__term_norm__TypeCtor_12, transform_hlds__term_norm__ConsId_13, &transform_hlds__term_norm__WeightInfo_27);
          }
          if (transform_hlds__term_norm__succeeded)
            {
              MR_Word transform_hlds__term_norm__V_28_28;

              *transform_hlds__term_norm__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_27, (MR_Integer) 0)));
              transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_27, (MR_Integer) 1)));
            }
          else
            {
              MR_Integer transform_hlds__term_norm__ConstNum_57;
              MR_Word transform_hlds__term_norm__V_29_29;

              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__ConstNum_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
                  transform_hlds__term_norm__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
                  {
                    MR_Word transform_hlds__term_norm__ConstStructDb_56;

                    {
                      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_56);
                    }
                    {
                      transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(transform_hlds__term_norm__ConstStructDb_56, transform_hlds__term_norm__WeightMap_26, transform_hlds__term_norm__ConstNum_57, (MR_Integer) 0, transform_hlds__term_norm__Gamma_14);
                    }
                  }
                }
              else
                *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
            }
          *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
          *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_norm__WeightMap_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__FunctorInfo_11, (MR_Integer) 0)));
          MR_Word transform_hlds__term_norm__WeightInfo_70;

          {
            transform_hlds__term_norm__succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(transform_hlds__term_norm__WeightMap_73, transform_hlds__term_norm__TypeCtor_12, transform_hlds__term_norm__ConsId_13, &transform_hlds__term_norm__WeightInfo_70);
          }
          if (transform_hlds__term_norm__succeeded)
            {
              MR_Word transform_hlds__term_norm__UseArgList_30;
              MR_Word transform_hlds__term_norm__STATE_VARIABLE_Args_36_36;
              MR_Word transform_hlds__term_norm__STATE_VARIABLE_Modes_37_37;

              *transform_hlds__term_norm__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_70, (MR_Integer) 0)));
              transform_hlds__term_norm__UseArgList_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_70, (MR_Integer) 1)));
              {
                transform_hlds__term_norm__succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(transform_hlds__term_norm__UseArgList_30, transform_hlds__term_norm__STATE_VARIABLE_Args_0_32, &transform_hlds__term_norm__STATE_VARIABLE_Args_36_36, transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34, &transform_hlds__term_norm__STATE_VARIABLE_Modes_37_37);
              }
              if (transform_hlds__term_norm__succeeded)
                {
                  *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_37_37;
                  *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_36_36;
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_norm", (MR_String) "predicate \140transform_hlds.term_norm.functor_norm\'/9", (MR_String) "unmatched lists");
                    return;
                  }
                }
            }
          else
            {
              MR_Integer transform_hlds__term_norm__ConstNum_64;
              MR_Word transform_hlds__term_norm__V_31_31;

              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (transform_hlds__term_norm__succeeded)
                {
                  transform_hlds__term_norm__ConstNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
                  transform_hlds__term_norm__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
                  {
                    MR_Word transform_hlds__term_norm__ConstStructDb_63;

                    {
                      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_63);
                    }
                    {
                      transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(transform_hlds__term_norm__ConstStructDb_63, transform_hlds__term_norm__WeightMap_73, transform_hlds__term_norm__ConstNum_64, (MR_Integer) 0, transform_hlds__term_norm__Gamma_14);
                    }
                  }
                }
              else
                *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
              *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
              *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
  MR_Box transform_hlds__term_norm__closure_arg,
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box * transform_hlds__term_norm__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_norm__closure = transform_hlds__term_norm__closure_arg;
    MR_Word transform_hlds__term_norm__conv2_STATE_VARIABLE_Weights_24;

    {
      transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), &transform_hlds__term_norm__conv2_STATE_VARIABLE_Weights_24);
    }
    *transform_hlds__term_norm__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_norm__conv2_STATE_VARIABLE_Weights_24));
  }
}

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
  MR_Box transform_hlds__term_norm__closure_arg,
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
  MR_Box * transform_hlds__term_norm__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_norm__closure = transform_hlds__term_norm__closure_arg;
    MR_Word transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_24;

    {
      transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), &transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_24);
    }
    *transform_hlds__term_norm__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_24));
  }
}

MR_Word MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0(
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_norm__succeeded;
    MR_Word transform_hlds__term_norm__HeadVar__3_3;

    switch (transform_hlds__term_norm__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_norm__WeightMap_8;
          MR_Word transform_hlds__term_norm__TypeTable_14;
          MR_Word transform_hlds__term_norm__TypeCtorsDefns_15;
          MR_Word transform_hlds__term_norm__Weights0_16;
          MR_Box transform_hlds__term_norm__conv1_WeightMap_8;

          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__term_norm__HeadVar__1_1, &transform_hlds__term_norm__TypeTable_14);
          }
          {
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__term_norm__TypeTable_14, &transform_hlds__term_norm__TypeCtorsDefns_15);
          }
          {
            mercury__map__init_1_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, &transform_hlds__term_norm__Weights0_16);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[1], (MR_Word) &transform_hlds__term_norm_scalar_common_1[2], (MR_Word) &transform_hlds__term_norm_scalar_common_1[3], transform_hlds__term_norm__TypeCtorsDefns_15, ((MR_Box) (transform_hlds__term_norm__Weights0_16)), &transform_hlds__term_norm__conv1_WeightMap_8);
          }
          transform_hlds__term_norm__WeightMap_8 = ((MR_Word) transform_hlds__term_norm__conv1_WeightMap_8);
          {
            transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_norm__WeightMap_8));
          }
        }
        break;
      case (MR_Integer) 0:
        transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        {
          MR_Word transform_hlds__term_norm__WeightMap_11;
          MR_Word transform_hlds__term_norm__TypeTable_27;
          MR_Word transform_hlds__term_norm__TypeCtorsDefns_28;
          MR_Word transform_hlds__term_norm__Weights0_29;
          MR_Box transform_hlds__term_norm__conv3_WeightMap_11;

          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__term_norm__HeadVar__1_1, &transform_hlds__term_norm__TypeTable_27);
          }
          {
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__term_norm__TypeTable_27, &transform_hlds__term_norm__TypeCtorsDefns_28);
          }
          {
            mercury__map__init_1_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, &transform_hlds__term_norm__Weights0_29);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[1], (MR_Word) &transform_hlds__term_norm_scalar_common_1[2], (MR_Word) &transform_hlds__term_norm_scalar_common_1[4], transform_hlds__term_norm__TypeCtorsDefns_28, ((MR_Box) (transform_hlds__term_norm__Weights0_29)), &transform_hlds__term_norm__conv3_WeightMap_11);
          }
          transform_hlds__term_norm__WeightMap_11 = ((MR_Word) transform_hlds__term_norm__conv3_WeightMap_11);
          {
            transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_norm__WeightMap_11));
          }
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
    }
    return transform_hlds__term_norm__HeadVar__3_3;
  }
}

void mercury__transform_hlds__term_norm__init(void)
{
}

void mercury__transform_hlds__term_norm__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_table_0);
}

void mercury__transform_hlds__term_norm__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_norm. */
