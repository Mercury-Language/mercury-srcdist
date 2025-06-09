/*
** Automatically generated from `term_norm.m'
** by the Mercury compiler,
** version rotd-2025-06-09
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


// :- module transform_hlds.term_norm.
// :- implementation.

/*
INIT mercury__transform_hlds__term_norm__init
ENDINIT
*/

#include "transform_hlds.term_norm.mih"


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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
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
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s {
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3;
  MR_bool transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8;
  jmp_buf transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_16_28;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_22;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Var_26;
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

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word Params_7,
  MR_Word Ctor_8,
  MR_Word STATE_VARIABLE_Weights_0_22,
  MR_Word * STATE_VARIABLE_Weights_23);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Id_2,
  MR_Word Params_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Weights_0_18,
  MR_Word * STATE_VARIABLE_Weights_19);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
  MR_Word ConstStructDb_6,
  MR_Word WeightMap_7,
  MR_Integer ConstNum_8,
  MR_Integer STATE_VARIABLE_Gamma_0_20,
  MR_Integer * STATE_VARIABLE_Gamma_21);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Gamma_0_5,
  MR_Integer * STATE_VARIABLE_Gamma_6);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Gamma_0_4,
  MR_Integer * STATE_VARIABLE_Gamma_5);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Gamma_0_3,
  MR_Integer * STATE_VARIABLE_Gamma_4);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Gamma_0_3,
  MR_Integer * STATE_VARIABLE_Gamma_4);

static MR_bool MR_CALL 
transform_hlds__term_norm__functor_norm_filter_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
transform_hlds__term_norm__search_weight_table_4_p_0(
  MR_Word WeightMap_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * WeightInfo_8);

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_2[4][2];

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_4[1][8];




static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_norm__set_functor_info_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_norm__set_functor_info_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0)),
    ((MR_Box) (&transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0 = {
  (MR_String) "simple",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1 = {
  (MR_String) "total",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2[1] = { (MR_PseudoTypeInfo) (&transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0) };

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2 = {
  (MR_String) "use_map",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3[1] = { (MR_PseudoTypeInfo) (&transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0) };

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3 = {
  (MR_String) "use_map_and_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0[2] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[1] = { &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2 };

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[1] = { &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3 };

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____functor_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____functor_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "functor_info",
  { transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0 },
  { transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0)
};

static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0 = {
  (MR_String) "weight",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[1] = { &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0 };

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0[1] = { &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0 };

static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_info",
  { transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0 },
  { transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_table_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_table_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_11_11 = (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_12_12;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_12_12 = (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word Params_7,
  MR_Word Ctor_8,
  MR_Word STATE_VARIABLE_Weights_0_22,
  MR_Word * STATE_VARIABLE_Weights_23)
{
  MR_bool succeeded;
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, Ctor_8, 2))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, Ctor_8, 3))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor_8, 4))));
  MR_Word WeightInfo_20;
  MR_Word ConsId_21;
  MR_Word Var_28;
  MR_Word Var_29;

  succeeded = (Arity_14 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer NumNonRec_16;
    MR_Word ArgInfos0_17;
    MR_Integer Weight_18;
    MR_Word ArgInfos_19;

    transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(Args_13, TypeCtor_6, Params_7, &NumNonRec_16, &ArgInfos0_17);
    succeeded = (NumNonRec_16 == (MR_Integer) 0);
    if (succeeded)
    {
      Weight_18 = (MR_Integer) 1;
      mercury__list__duplicate_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Arity_14, ((MR_Box) ((MR_Integer) 1)), &ArgInfos_19);
    }
    else
    {
      Weight_18 = NumNonRec_16;
      ArgInfos_19 = ArgInfos0_17;
    }
    {
      WeightInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, WeightInfo_20, 0) = ((MR_Box) (Weight_18));
      MR_hl_field(0, WeightInfo_20, 1) = ((MR_Box) (ArgInfos_19));
    }
  }
  else
    WeightInfo_20 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[2]);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (Arity_14));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) (TypeCtor_6));
  }
  ConsId_21 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_28)));
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (TypeCtor_6));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (ConsId_21));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), ((MR_Box) (Var_29)), ((MR_Box) (WeightInfo_20)), STATE_VARIABLE_Weights_0_22, STATE_VARIABLE_Weights_23);
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_16_28 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[3]);
  (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_16_28, ((MR_Box) ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_22)), ((MR_Box) ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Var_26)));
  if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
    transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeInfo_13_25;
        MR_Word ArgType_19 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, 1))));
        MR_Word ArgTypeCtor_20;
        MR_Word ArgTypeArgs_21;
        MR_Word Var_23;
        MR_Word Var_24;

        (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_19, &ArgTypeCtor_20, &ArgTypeArgs_21);
        if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, ArgTypeCtor_20);
          if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ArgTypeArgs_21, &(env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_22);
            if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
            {
              TypeInfo_13_25 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[0]);
              mercury__list__perm_2_p_0(TypeInfo_13_25, (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &(env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Var_26, transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2, env_ptr);
            }
          }
        }
      }
      (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Id_2,
  MR_Word Params_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s env;

  (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2 = Id_2;
  (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3 = Params_3;
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Integer) 0;
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Args_9;
    MR_Integer NonRecArgs0_14;
    MR_Word ArgInfo0_15;

    (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    Args_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(Args_9, (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &NonRecArgs0_14, &ArgInfo0_15);
    transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(&env);
    if ((env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
    {
      *HeadVar__4_4 = NonRecArgs0_14;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgInfo0_15));
      }
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) NonRecArgs0_14 + (MR_Unsigned) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgInfo0_15));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Weights_23;

  transform_hlds__term_norm__find_weights_for_cons_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Weights_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Weights_23));
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Weights_0_18,
  MR_Word * STATE_VARIABLE_Weights_19)
{
  MR_Word TypeCtor_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word TypeBody_7;

  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_5, &TypeBody_7);
  switch (MR_tag((MR_Word) TypeBody_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Constructors_8;
        MR_Word TypeParams_13;
        MR_Word Var_20 = (MR_Word) ((MR_Word) (TypeBody_7));
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Box conv1_STATE_VARIABLE_Weights_19;

        Constructors_8 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_5, &TypeParams_13);
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__term_norm_scalar_common_4[0]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__term_norm__find_weights_for_type_3_p_0_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeCtor_4));
          MR_hl_field(0, Var_21, 4) = ((MR_Box) (TypeParams_13));
        }
        Var_22 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constructors_8);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), Var_21, Var_22, ((MR_Box) (STATE_VARIABLE_Weights_0_18)), &conv1_STATE_VARIABLE_Weights_19);
        *STATE_VARIABLE_Weights_19 = ((MR_Word) (conv1_STATE_VARIABLE_Weights_19));
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Weights_19 = STATE_VARIABLE_Weights_0_18;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Weights_19 = STATE_VARIABLE_Weights_0_18;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Weights_19 = STATE_VARIABLE_Weights_0_18;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Weights_19 = STATE_VARIABLE_Weights_0_18;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
transform_hlds__term_norm__zero_size_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word CtorCat_5;

  CtorCat_5 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_3, Type_4);
  switch (MR_tag((MR_Word) CtorCat_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_5, 1))) & (MR_Integer) 7);

            switch (Var_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 2:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_Integer MR_CALL 
transform_hlds__term_norm__functor_lower_bound_4_f_0(
  MR_Word _ModuleInfo_6,
  MR_Word FunctorInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ConsId_9)
{
  MR_Integer Weight_10;

  Weight_10 = transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(FunctorInfo_7, TypeCtor_8, ConsId_9);
  return Weight_10;
}

MR_Integer MR_CALL 
transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(
  MR_Word FunctorInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ConsId_9)
{
  MR_bool succeeded;
  MR_Integer Weight_10;

  switch (MR_tag((MR_Word) FunctorInfo_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(FunctorInfo_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Arity_12;
            MR_Word Var_20;

            succeeded = ((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_20 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 1));
              Arity_12 = ((MR_Integer) ((MR_hl_field(0, Var_20, 1))));
              succeeded = (Arity_12 != (MR_Integer) 0);
            }
            if (succeeded)
              Weight_10 = (MR_Integer) 1;
            else
              Weight_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Arity_22;
            MR_Word Var_21;

            succeeded = ((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_21 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 1));
              Arity_22 = ((MR_Integer) ((MR_hl_field(0, Var_21, 1))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              Weight_10 = Arity_22;
            else
              Weight_10 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word WeightMap_16 = ((MR_Word) ((MR_hl_field(1, FunctorInfo_7, 0))));
        MR_Word WeightInfo_17;
        MR_Word WeightInfo0_26;
        MR_Word Var_29;
        MR_Box conv0_WeightInfo0_26;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (ConsId_9));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_16, ((MR_Box) (Var_29)), &conv0_WeightInfo0_26);
        if (succeeded)
        {
          WeightInfo0_26 = ((MR_Word) (conv0_WeightInfo0_26));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_17 = WeightInfo0_26;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_35;
          MR_Integer Arity_28;
          MR_Word ArgInfos_33;
          MR_Word Var_34;

          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_8);
          if (succeeded)
          {
            Arity_28 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_8, 1))));
            Var_34 = (MR_Integer) 1;
            TypeCtorInfo_7_35 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_35, Arity_28, ((MR_Box) (Var_34)), &ArgInfos_33);
            {
              WeightInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, WeightInfo_17, 0) = ((MR_Box) (Arity_28));
              MR_hl_field(0, WeightInfo_17, 1) = ((MR_Box) (ArgInfos_33));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          Weight_10 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_17, 0))));
        else
          Weight_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word WeightMap_25 = ((MR_Word) ((MR_hl_field(2, FunctorInfo_7, 0))));
        MR_Word WeightInfo_24;
        MR_Word WeightInfo0_36;
        MR_Word Var_39;
        MR_Box conv1_WeightInfo0_36;

        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(0, Var_39, 1) = ((MR_Box) (ConsId_9));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_25, ((MR_Box) (Var_39)), &conv1_WeightInfo0_36);
        if (succeeded)
        {
          WeightInfo0_36 = ((MR_Word) (conv1_WeightInfo0_36));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_24 = WeightInfo0_36;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_45;
          MR_Integer Arity_38;
          MR_Word ArgInfos_43;
          MR_Word Var_44;

          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_8);
          if (succeeded)
          {
            Arity_38 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_8, 1))));
            Var_44 = (MR_Integer) 1;
            TypeCtorInfo_7_45 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_45, Arity_38, ((MR_Box) (Var_44)), &ArgInfos_43);
            {
              WeightInfo_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, WeightInfo_24, 0) = ((MR_Box) (Arity_38));
              MR_hl_field(0, WeightInfo_24, 1) = ((MR_Box) (ArgInfos_43));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          Weight_10 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_24, 0))));
        else
          Weight_10 = (MR_Integer) 0;
      }
      break;
  }
  return Weight_10;
}

void MR_CALL 
transform_hlds__term_norm__functor_norm_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FunctorInfo_11,
  MR_Word TypeCtor_12,
  MR_Word ConsId_13,
  MR_Integer * Gamma_14,
  MR_Word STATE_VARIABLE_Args_0_32,
  MR_Word * STATE_VARIABLE_Args_33,
  MR_Word STATE_VARIABLE_Modes_0_34,
  MR_Word * STATE_VARIABLE_Modes_35)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) FunctorInfo_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(FunctorInfo_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Arity_18;
            MR_Word Var_36;

            succeeded = ((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_36 = (MR_Word) (MR_body((MR_Word) (ConsId_13), (MR_Integer) 1));
              Arity_18 = ((MR_Integer) ((MR_hl_field(0, Var_36, 1))));
              succeeded = (Arity_18 != (MR_Integer) 0);
            }
            if (succeeded)
              *Gamma_14 = (MR_Integer) 1;
            else
            {
              MR_Integer ConstNum_20;

              succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_13, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ConstNum_20 = ((MR_Integer) ((MR_hl_field(3, ConsId_13, 1))));
                {
                  MR_Word ConstStructDb_22;
                  MR_Word ConstStruct_75;
                  MR_Word Args_77;

                  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_22);
                  hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_22, ConstNum_20, &ConstStruct_75);
                  Args_77 = ((MR_Word) ((MR_hl_field(0, ConstStruct_75, 1))));
                  transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(ConstStructDb_22, Args_77, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Gamma_14);
                }
              }
              else
                *Gamma_14 = (MR_Integer) 0;
            }
            *STATE_VARIABLE_Args_33 = STATE_VARIABLE_Args_0_32;
            *STATE_VARIABLE_Modes_35 = STATE_VARIABLE_Modes_0_34;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Arity_51;
            MR_Word Var_38;

            succeeded = ((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_38 = (MR_Word) (MR_body((MR_Word) (ConsId_13), (MR_Integer) 1));
              Arity_51 = ((MR_Integer) ((MR_hl_field(0, Var_38, 1))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              *Gamma_14 = Arity_51;
            else
            {
              MR_Integer ConstNum_49;

              succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_13, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ConstNum_49 = ((MR_Integer) ((MR_hl_field(3, ConsId_13, 1))));
                {
                  MR_Word ConstStructDb_48;
                  MR_Word ConstStruct_83;
                  MR_Word Args_85;
                  MR_Integer STATE_VARIABLE_Gamma_1_89;
                  MR_Integer Var_90;

                  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_48);
                  hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_48, ConstNum_49, &ConstStruct_83);
                  Args_85 = ((MR_Word) ((MR_hl_field(0, ConstStruct_83, 1))));
                  Var_90 = mercury__list__length_1_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_85);
                  STATE_VARIABLE_Gamma_1_89 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) Var_90);
                  transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(ConstStructDb_48, Args_85, STATE_VARIABLE_Gamma_1_89, Gamma_14);
                }
              }
              else
                *Gamma_14 = (MR_Integer) 0;
            }
            *STATE_VARIABLE_Args_33 = STATE_VARIABLE_Args_0_32;
            *STATE_VARIABLE_Modes_35 = STATE_VARIABLE_Modes_0_34;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word WeightMap_26 = ((MR_Word) ((MR_hl_field(1, FunctorInfo_11, 0))));
        MR_Word WeightInfo_27;
        MR_Word WeightInfo0_92;
        MR_Word Var_95;
        MR_Box conv0_WeightInfo0_92;

        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_95, 0) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(0, Var_95, 1) = ((MR_Box) (ConsId_13));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_26, ((MR_Box) (Var_95)), &conv0_WeightInfo0_92);
        if (succeeded)
        {
          WeightInfo0_92 = ((MR_Word) (conv0_WeightInfo0_92));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_27 = WeightInfo0_92;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_101;
          MR_Integer Arity_94;
          MR_Word ArgInfos_99;
          MR_Word Var_100;

          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_12);
          if (succeeded)
          {
            Arity_94 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_12, 1))));
            Var_100 = (MR_Integer) 1;
            TypeCtorInfo_7_101 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_101, Arity_94, ((MR_Box) (Var_100)), &ArgInfos_99);
            {
              WeightInfo_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, WeightInfo_27, 0) = ((MR_Box) (Arity_94));
              MR_hl_field(0, WeightInfo_27, 1) = ((MR_Box) (ArgInfos_99));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *Gamma_14 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_27, 0))));
        else
        {
          MR_Integer ConstNum_58;

          succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_13, 0)))) == (MR_Integer) 14)));
          if (succeeded)
          {
            ConstNum_58 = ((MR_Integer) ((MR_hl_field(3, ConsId_13, 1))));
            {
              MR_Word ConstStructDb_57;
              MR_Word ConstStruct_102;
              MR_Word ConsId_103;
              MR_Word Args_104;
              MR_Word Type_105;
              MR_Word TypeCtor_108;
              MR_Word WeightInfo_109;
              MR_Word WeightInfo0_113;
              MR_Word Var_116;
              MR_Box conv1_WeightInfo0_113;

              hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_57);
              hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_57, ConstNum_58, &ConstStruct_102);
              ConsId_103 = ((MR_Word) ((MR_hl_field(0, ConstStruct_102, 0))));
              Args_104 = ((MR_Word) ((MR_hl_field(0, ConstStruct_102, 1))));
              Type_105 = ((MR_Word) ((MR_hl_field(0, ConstStruct_102, 2))));
              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_105, &TypeCtor_108);
              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_116, 0) = ((MR_Box) (TypeCtor_108));
                MR_hl_field(0, Var_116, 1) = ((MR_Box) (ConsId_103));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_26, ((MR_Box) (Var_116)), &conv1_WeightInfo0_113);
              if (succeeded)
              {
                WeightInfo0_113 = ((MR_Word) (conv1_WeightInfo0_113));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                WeightInfo_109 = WeightInfo0_113;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeCtorInfo_7_122;
                MR_Integer Arity_115;
                MR_Word ArgInfos_120;
                MR_Word Var_121;

                succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_108);
                if (succeeded)
                {
                  Arity_115 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_108, 1))));
                  Var_121 = (MR_Integer) 1;
                  TypeCtorInfo_7_122 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
                  mercury__list__duplicate_3_p_0(TypeCtorInfo_7_122, Arity_115, ((MR_Box) (Var_121)), &ArgInfos_120);
                  {
                    WeightInfo_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, WeightInfo_109, 0) = ((MR_Box) (Arity_115));
                    MR_hl_field(0, WeightInfo_109, 1) = ((MR_Box) (ArgInfos_120));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Integer ConsIdGamma_110 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_109, 0))));
                MR_Integer STATE_VARIABLE_Gamma_1_112 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) ConsIdGamma_110);

                transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(ConstStructDb_57, WeightMap_26, Args_104, STATE_VARIABLE_Gamma_1_112, Gamma_14);
              }
              else
                *Gamma_14 = (MR_Integer) 0;
            }
          }
          else
            *Gamma_14 = (MR_Integer) 0;
        }
        *STATE_VARIABLE_Args_33 = STATE_VARIABLE_Args_0_32;
        *STATE_VARIABLE_Modes_35 = STATE_VARIABLE_Modes_0_34;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word WeightMap_74 = ((MR_Word) ((MR_hl_field(2, FunctorInfo_11, 0))));
        MR_Word WeightInfo_71;

        succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(WeightMap_74, TypeCtor_12, ConsId_13, &WeightInfo_71);
        if (succeeded)
        {
          MR_Word UseArgList_30;
          MR_Word STATE_VARIABLE_Args_1_41;
          MR_Word STATE_VARIABLE_Modes_1_42;

          *Gamma_14 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_71, 0))));
          UseArgList_30 = ((MR_Word) ((MR_hl_field(0, WeightInfo_71, 1))));
          succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(UseArgList_30, STATE_VARIABLE_Args_0_32, &STATE_VARIABLE_Args_1_41, STATE_VARIABLE_Modes_0_34, &STATE_VARIABLE_Modes_1_42);
          if (succeeded)
          {
            *STATE_VARIABLE_Modes_35 = STATE_VARIABLE_Modes_1_42;
            *STATE_VARIABLE_Args_33 = STATE_VARIABLE_Args_1_41;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_norm.functor_norm\'/9", (MR_String) "unmatched lists");
              return;
            }
        }
        else
        {
          MR_Integer ConstNum_65;

          succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_13, 0)))) == (MR_Integer) 14)));
          if (succeeded)
          {
            ConstNum_65 = ((MR_Integer) ((MR_hl_field(3, ConsId_13, 1))));
            {
              MR_Word ConstStructDb_64;

              hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_64);
              transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(ConstStructDb_64, WeightMap_74, ConstNum_65, (MR_Integer) 0, Gamma_14);
            }
          }
          else
            *Gamma_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Modes_35 = STATE_VARIABLE_Modes_0_34;
          *STATE_VARIABLE_Args_33 = STATE_VARIABLE_Args_0_32;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
  MR_Word ConstStructDb_6,
  MR_Word WeightMap_7,
  MR_Integer ConstNum_8,
  MR_Integer STATE_VARIABLE_Gamma_0_20,
  MR_Integer * STATE_VARIABLE_Gamma_21)
{
  MR_bool succeeded;
  MR_Word ConstStruct_10;
  MR_Word ConsId_11;
  MR_Word Args_12;
  MR_Word Type_13;
  MR_Word TypeCtor_16;
  MR_Word WeightInfo_17;
  MR_Word WeightInfo0_23;
  MR_Word Var_26;
  MR_Box conv0_WeightInfo0_23;

  hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_6, ConstNum_8, &ConstStruct_10);
  ConsId_11 = ((MR_Word) ((MR_hl_field(0, ConstStruct_10, 0))));
  Args_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_10, 1))));
  Type_13 = ((MR_Word) ((MR_hl_field(0, ConstStruct_10, 2))));
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_16);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (TypeCtor_16));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ConsId_11));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_7, ((MR_Box) (Var_26)), &conv0_WeightInfo0_23);
  if (succeeded)
  {
    WeightInfo0_23 = ((MR_Word) (conv0_WeightInfo0_23));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    WeightInfo_17 = WeightInfo0_23;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_7_32;
    MR_Integer Arity_25;
    MR_Word ArgInfos_30;
    MR_Word Var_31;

    succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_16);
    if (succeeded)
    {
      Arity_25 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_16, 1))));
      Var_31 = (MR_Integer) 1;
      TypeCtorInfo_7_32 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
      mercury__list__duplicate_3_p_0(TypeCtorInfo_7_32, Arity_25, ((MR_Box) (Var_31)), &ArgInfos_30);
      {
        WeightInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WeightInfo_17, 0) = ((MR_Box) (Arity_25));
        MR_hl_field(0, WeightInfo_17, 1) = ((MR_Box) (ArgInfos_30));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Integer ConsIdGamma_18 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_17, 0))));
    MR_Word UseArgs_19 = ((MR_Word) ((MR_hl_field(0, WeightInfo_17, 1))));
    MR_Integer STATE_VARIABLE_Gamma_1_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_20 + (MR_Unsigned) ConsIdGamma_18);

    transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(ConstStructDb_6, WeightMap_7, Args_12, UseArgs_19, STATE_VARIABLE_Gamma_1_22, STATE_VARIABLE_Gamma_21);
  }
  else
    *STATE_VARIABLE_Gamma_21 = STATE_VARIABLE_Gamma_0_20;
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Gamma_0_5,
  MR_Integer * STATE_VARIABLE_Gamma_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Gamma_6 = STATE_VARIABLE_Gamma_0_5;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word UseArg_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word UseArgs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        MR_Integer STATE_VARIABLE_Gamma_1_46;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_5;

        switch (UseArg_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Gamma_1_46 = STATE_VARIABLE_Gamma_0_5;
            break;
          case (MR_Integer) 1:
            if (((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0))
            {
              MR_Integer ArgConstNum_43 = ((MR_Integer) ((MR_hl_field(0, Var_48, 0))));
              MR_Word ConstStruct_49;
              MR_Word ConsId_50;
              MR_Word Args_51;
              MR_Word Type_52;
              MR_Word TypeCtor_55;
              MR_Word WeightInfo_56;
              MR_Word WeightInfo0_60;
              MR_Word Var_63;
              MR_Box conv0_WeightInfo0_60;

              hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_43, &ConstStruct_49);
              ConsId_50 = ((MR_Word) ((MR_hl_field(0, ConstStruct_49, 0))));
              Args_51 = ((MR_Word) ((MR_hl_field(0, ConstStruct_49, 1))));
              Type_52 = ((MR_Word) ((MR_hl_field(0, ConstStruct_49, 2))));
              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_52, &TypeCtor_55);
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (TypeCtor_55));
                MR_hl_field(0, Var_63, 1) = ((MR_Box) (ConsId_50));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_63)), &conv0_WeightInfo0_60);
              if (succeeded)
              {
                WeightInfo0_60 = ((MR_Word) (conv0_WeightInfo0_60));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                WeightInfo_56 = WeightInfo0_60;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeCtorInfo_7_69;
                MR_Integer Arity_62;
                MR_Word ArgInfos_67;
                MR_Word Var_68;

                succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_55);
                if (succeeded)
                {
                  Arity_62 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_55, 1))));
                  Var_68 = (MR_Integer) 1;
                  TypeCtorInfo_7_69 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
                  mercury__list__duplicate_3_p_0(TypeCtorInfo_7_69, Arity_62, ((MR_Box) (Var_68)), &ArgInfos_67);
                  {
                    WeightInfo_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, WeightInfo_56, 0) = ((MR_Box) (Arity_62));
                    MR_hl_field(0, WeightInfo_56, 1) = ((MR_Box) (ArgInfos_67));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Integer ConsIdGamma_57 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_56, 0))));
                MR_Word UseArgs_58 = ((MR_Word) ((MR_hl_field(0, WeightInfo_56, 1))));
                MR_Integer STATE_VARIABLE_Gamma_1_59 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_5 + (MR_Unsigned) ConsIdGamma_57);

                transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(HeadVar__1_1, HeadVar__2_2, Args_51, UseArgs_58, STATE_VARIABLE_Gamma_1_59, &STATE_VARIABLE_Gamma_1_46);
              }
              else
                STATE_VARIABLE_Gamma_1_46 = STATE_VARIABLE_Gamma_0_5;
            }
            else
            {
              MR_Word ConsId_37 = ((MR_Word) ((MR_hl_field(1, Var_48, 0))));
              MR_Word Type_38 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
              MR_Word TypeCtor_39;
              MR_Word WeightInfo_40;
              MR_Word WeightInfo0_70;
              MR_Word Var_73;
              MR_Box conv1_WeightInfo0_70;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_38, &TypeCtor_39);
              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_73, 0) = ((MR_Box) (TypeCtor_39));
                MR_hl_field(0, Var_73, 1) = ((MR_Box) (ConsId_37));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_73)), &conv1_WeightInfo0_70);
              if (succeeded)
              {
                WeightInfo0_70 = ((MR_Word) (conv1_WeightInfo0_70));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                WeightInfo_40 = WeightInfo0_70;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeCtorInfo_7_79;
                MR_Integer Arity_72;
                MR_Word ArgInfos_77;
                MR_Word Var_78;

                succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_39);
                if (succeeded)
                {
                  Arity_72 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_39, 1))));
                  Var_78 = (MR_Integer) 1;
                  TypeCtorInfo_7_79 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
                  mercury__list__duplicate_3_p_0(TypeCtorInfo_7_79, Arity_72, ((MR_Box) (Var_78)), &ArgInfos_77);
                  {
                    WeightInfo_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, WeightInfo_40, 0) = ((MR_Box) (Arity_72));
                    MR_hl_field(0, WeightInfo_40, 1) = ((MR_Box) (ArgInfos_77));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Integer ConsIdGamma_41 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_40, 0))));

                STATE_VARIABLE_Gamma_1_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_5 + (MR_Unsigned) ConsIdGamma_41);
              }
              else
                STATE_VARIABLE_Gamma_1_46 = STATE_VARIABLE_Gamma_0_5;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_47;
        next_value_of_HeadVar__4_4 = UseArgs_35;
        next_value_of_STATE_VARIABLE_Gamma_0_5 = STATE_VARIABLE_Gamma_1_46;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Gamma_0_5 = next_value_of_STATE_VARIABLE_Gamma_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Gamma_0_4,
  MR_Integer * STATE_VARIABLE_Gamma_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Gamma_5 = STATE_VARIABLE_Gamma_0_4;
    else
    {
      MR_Word Arg_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Integer STATE_VARIABLE_Gamma_1_25;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_4;

      if (((MR_tag((MR_Word) Arg_13)) == (MR_Integer) 0))
      {
        MR_Integer ArgConstNum_22 = ((MR_Integer) ((MR_hl_field(0, Arg_13, 0))));
        MR_Word ConstStruct_26;
        MR_Word ConsId_27;
        MR_Word Args_28;
        MR_Word Type_29;
        MR_Word TypeCtor_32;
        MR_Word WeightInfo_33;
        MR_Word WeightInfo0_37;
        MR_Word Var_40;
        MR_Box conv0_WeightInfo0_37;

        hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_22, &ConstStruct_26);
        ConsId_27 = ((MR_Word) ((MR_hl_field(0, ConstStruct_26, 0))));
        Args_28 = ((MR_Word) ((MR_hl_field(0, ConstStruct_26, 1))));
        Type_29 = ((MR_Word) ((MR_hl_field(0, ConstStruct_26, 2))));
        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_29, &TypeCtor_32);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (TypeCtor_32));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) (ConsId_27));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_40)), &conv0_WeightInfo0_37);
        if (succeeded)
        {
          WeightInfo0_37 = ((MR_Word) (conv0_WeightInfo0_37));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_33 = WeightInfo0_37;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_46;
          MR_Integer Arity_39;
          MR_Word ArgInfos_44;
          MR_Word Var_45;

          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_32);
          if (succeeded)
          {
            Arity_39 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_32, 1))));
            Var_45 = (MR_Integer) 1;
            TypeCtorInfo_7_46 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_46, Arity_39, ((MR_Box) (Var_45)), &ArgInfos_44);
            {
              WeightInfo_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, WeightInfo_33, 0) = ((MR_Box) (Arity_39));
              MR_hl_field(0, WeightInfo_33, 1) = ((MR_Box) (ArgInfos_44));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Integer ConsIdGamma_34 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_33, 0))));
          MR_Integer STATE_VARIABLE_Gamma_1_36 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_4 + (MR_Unsigned) ConsIdGamma_34);

          transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(HeadVar__1_1, HeadVar__2_2, Args_28, STATE_VARIABLE_Gamma_1_36, &STATE_VARIABLE_Gamma_1_25);
        }
        else
          STATE_VARIABLE_Gamma_1_25 = STATE_VARIABLE_Gamma_0_4;
      }
      else
      {
        MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(1, Arg_13, 0))));
        MR_Word Type_17 = ((MR_Word) ((MR_hl_field(1, Arg_13, 1))));
        MR_Word TypeCtor_18;
        MR_Word WeightInfo_19;
        MR_Word WeightInfo0_47;
        MR_Word Var_50;
        MR_Box conv1_WeightInfo0_47;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_17, &TypeCtor_18);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (TypeCtor_18));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (ConsId_16));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_50)), &conv1_WeightInfo0_47);
        if (succeeded)
        {
          WeightInfo0_47 = ((MR_Word) (conv1_WeightInfo0_47));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_19 = WeightInfo0_47;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_56;
          MR_Integer Arity_49;
          MR_Word ArgInfos_54;
          MR_Word Var_55;

          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_18);
          if (succeeded)
          {
            Arity_49 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_18, 1))));
            Var_55 = (MR_Integer) 1;
            TypeCtorInfo_7_56 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_56, Arity_49, ((MR_Box) (Var_55)), &ArgInfos_54);
            {
              WeightInfo_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, WeightInfo_19, 0) = ((MR_Box) (Arity_49));
              MR_hl_field(0, WeightInfo_19, 1) = ((MR_Box) (ArgInfos_54));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Integer ConsIdGamma_20 = ((MR_Integer) ((MR_hl_field(0, WeightInfo_19, 0))));

          STATE_VARIABLE_Gamma_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_4 + (MR_Unsigned) ConsIdGamma_20);
        }
        else
          STATE_VARIABLE_Gamma_1_25 = STATE_VARIABLE_Gamma_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Args_14;
      next_value_of_STATE_VARIABLE_Gamma_0_4 = STATE_VARIABLE_Gamma_1_25;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Gamma_0_4 = next_value_of_STATE_VARIABLE_Gamma_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Gamma_0_3,
  MR_Integer * STATE_VARIABLE_Gamma_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Gamma_4 = STATE_VARIABLE_Gamma_0_3;
    else
    {
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer STATE_VARIABLE_Gamma_1_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_3;

      if (((MR_tag((MR_Word) Arg_10)) == (MR_Integer) 0))
      {
        MR_Integer ArgConstNum_15 = ((MR_Integer) ((MR_hl_field(0, Arg_10, 0))));
        MR_Word ConstStruct_19;
        MR_Word Args_21;
        MR_Integer STATE_VARIABLE_Gamma_1_25;
        MR_Integer Var_26;

        hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_15, &ConstStruct_19);
        Args_21 = ((MR_Word) ((MR_hl_field(0, ConstStruct_19, 1))));
        Var_26 = mercury__list__length_1_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_21);
        STATE_VARIABLE_Gamma_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_3 + (MR_Unsigned) Var_26);
        transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(HeadVar__1_1, Args_21, STATE_VARIABLE_Gamma_1_25, &STATE_VARIABLE_Gamma_1_18);
      }
      else
        STATE_VARIABLE_Gamma_1_18 = STATE_VARIABLE_Gamma_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_11;
      next_value_of_STATE_VARIABLE_Gamma_0_3 = STATE_VARIABLE_Gamma_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Gamma_0_3 = next_value_of_STATE_VARIABLE_Gamma_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Gamma_0_3,
  MR_Integer * STATE_VARIABLE_Gamma_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Gamma_4 = STATE_VARIABLE_Gamma_0_3;
    else
    {
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer STATE_VARIABLE_Gamma_1_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_3;

      if (((MR_tag((MR_Word) Arg_10)) == (MR_Integer) 0))
      {
        MR_Integer ArgConstNum_15 = ((MR_Integer) ((MR_hl_field(0, Arg_10, 0))));
        MR_Word ConstStruct_19;
        MR_Word Args_21;
        MR_Integer STATE_VARIABLE_Gamma_1_25;

        hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_15, &ConstStruct_19);
        Args_21 = ((MR_Word) ((MR_hl_field(0, ConstStruct_19, 1))));
        STATE_VARIABLE_Gamma_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_3 + (MR_Unsigned) 1);
        transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(HeadVar__1_1, Args_21, STATE_VARIABLE_Gamma_1_25, &STATE_VARIABLE_Gamma_1_18);
      }
      else
        STATE_VARIABLE_Gamma_1_18 = STATE_VARIABLE_Gamma_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_11;
      next_value_of_STATE_VARIABLE_Gamma_0_3 = STATE_VARIABLE_Gamma_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Gamma_0_3 = next_value_of_STATE_VARIABLE_Gamma_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm__functor_norm_filter_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
          switch (Var_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__1_1 = Var_22;
                MR_Word next_value_of_HeadVar__2_2 = Var_24;
                MR_Word next_value_of_HeadVar__4_4 = Var_26;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_9;
                MR_Word Modes_12;

                succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(Var_22, Var_24, &Args_9, Var_26, &Modes_12);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Args_9));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Modes_12));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm__search_weight_table_4_p_0(
  MR_Word WeightMap_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * WeightInfo_8)
{
  MR_bool succeeded;
  MR_Word WeightInfo0_9;
  MR_Word Var_12;
  MR_Box conv0_WeightInfo0_9;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (TypeCtor_6));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (ConsId_7));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_5, ((MR_Box) (Var_12)), &conv0_WeightInfo0_9);
  if (succeeded)
  {
    WeightInfo0_9 = ((MR_Word) (conv0_WeightInfo0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *WeightInfo_8 = WeightInfo0_9;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_7_18;
    MR_Integer Arity_11;
    MR_Word ArgInfos_16;
    MR_Word Var_17;

    succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_6);
    if (succeeded)
    {
      Arity_11 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_6, 1))));
      Var_17 = (MR_Integer) 1;
      TypeCtorInfo_7_18 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
      mercury__list__duplicate_3_p_0(TypeCtorInfo_7_18, Arity_11, ((MR_Box) (Var_17)), &ArgInfos_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *WeightInfo_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Arity_11));
        MR_hl_field(0, base, 1) = ((MR_Box) (ArgInfos_16));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Weights_19;

  transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Weights_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Weights_19));
}

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Weights_19;

  transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Weights_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Weights_19));
}

MR_Word MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word WeightMap_8;
        MR_Word TypeTable_12;
        MR_Word TypeCtorsDefns_13;
        MR_Word Weights0_14;
        MR_Box conv1_WeightMap_8;

        hlds__hlds_module__module_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_12);
        hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_12, &TypeCtorsDefns_13);
        mercury__map__init_1_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), &Weights0_14);
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[3]), TypeCtorsDefns_13, ((MR_Box) (Weights0_14)), &conv1_WeightMap_8);
        WeightMap_8 = ((MR_Word) (conv1_WeightMap_8));
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (WeightMap_8));
        }
      }
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word WeightMap_11;
        MR_Word TypeTable_20;
        MR_Word TypeCtorsDefns_21;
        MR_Word Weights0_22;
        MR_Box conv3_WeightMap_11;

        hlds__hlds_module__module_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_20);
        hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_20, &TypeCtorsDefns_21);
        mercury__map__init_1_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), &Weights0_22);
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[4]), TypeCtorsDefns_21, ((MR_Box) (Weights0_22)), &conv3_WeightMap_11);
        WeightMap_11 = ((MR_Word) (conv3_WeightMap_11));
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (WeightMap_11));
        }
      }
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 4U);
      break;
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_norm____Compare____functor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_norm____Unify____weight_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_norm____Compare____weight_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_norm____Unify____weight_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_norm____Compare____weight_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_norm__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_norm.
