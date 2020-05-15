/*
** Automatically generated from `term_norm.m'
** by the Mercury compiler,
** version rotd-2020-05-15
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
#include "getopt_io.mih"
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"



struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s {
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3;
  MR_bool transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8;
  jmp_buf transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_16_31;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25;
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Var_29;
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
  MR_Word STATE_VARIABLE_Weights_0_17,
  MR_Word * STATE_VARIABLE_Weights_18);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
  MR_Word ConstStructDb_6,
  MR_Word WeightMap_7,
  MR_Integer ConstNum_8,
  MR_Integer STATE_VARIABLE_Gamma_0_19,
  MR_Integer * STATE_VARIABLE_Gamma_20);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Gamma_0_5,
  MR_Integer * STATE_VARIABLE_Gamma_6);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(
  MR_Word ConstStructDb_6,
  MR_Word WeightMap_7,
  MR_Integer ConstNum_8,
  MR_Integer STATE_VARIABLE_Gamma_0_19,
  MR_Integer * STATE_VARIABLE_Gamma_20);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Gamma_0_4,
  MR_Integer * STATE_VARIABLE_Gamma_5);

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(
  MR_Word ConstStructDb_5,
  MR_Integer ConstNum_6,
  MR_Integer STATE_VARIABLE_Gamma_0_13,
  MR_Integer * STATE_VARIABLE_Gamma_14);

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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_norm_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_norm__set_functor_info_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__term_norm_scalar_common_3[1][6] = {
  /* row 0 */
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
  /* row 0 */
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0)
};

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

static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0)
};

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

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3
};

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____functor_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____functor_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "functor_info",
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0 },
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
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

static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_info",
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0 },
  {     transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_table_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_table_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_20 == CastY_21);
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_11)));
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_19)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_14_14;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_14_14 = (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word Params_7,
  MR_Word Ctor_8,
  MR_Word STATE_VARIABLE_Weights_0_22,
  MR_Word * STATE_VARIABLE_Weights_23)
{
  {
    MR_bool succeeded;
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 2))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 3))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 4))));
    MR_Word WeightInfo_20;
    MR_Word ConsId_21;
    MR_Word Var_28;

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
        MR_hl_field(MR_mktag(0), WeightInfo_20, 0) = ((MR_Box) (Weight_18));
        MR_hl_field(MR_mktag(0), WeightInfo_20, 1) = ((MR_Box) (ArgInfos_19));
      }
    }
    else
      WeightInfo_20 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[3]);
    {
      ConsId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_21, 1) = ((MR_Box) (SymName_12));
      MR_hl_field(MR_mktag(3), ConsId_21, 2) = ((MR_Box) (Arity_14));
      MR_hl_field(MR_mktag(3), ConsId_21, 3) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (TypeCtor_6));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ConsId_21));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), ((MR_Box) (Var_28)), ((MR_Box) (WeightInfo_20)), STATE_VARIABLE_Weights_0_22, STATE_VARIABLE_Weights_23);
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_16_31 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[2]);
    (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_16_31, ((MR_Box) ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25)), ((MR_Box) ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Var_29)));
    if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
      transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeInfo_13_28;
          MR_Word ArgType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 1))));
          MR_Word ArgTypeCtor_23;
          MR_Word ArgTypeArgs_24;
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 0))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 2))));

          (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_22, &ArgTypeCtor_23, &ArgTypeArgs_24);
          if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, ArgTypeCtor_23);
            if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ArgTypeArgs_24, &(env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25);
              if ((env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
              {
                TypeInfo_13_28 = (MR_Word) (&transform_hlds__term_norm_scalar_common_2[0]);
                mercury__list__perm_2_p_0(TypeInfo_13_28, (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &(env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Var_29, transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2, env_ptr);
              }
            }
          }
        }
        (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Id_2,
  MR_Word Params_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
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

      (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(Args_9, (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, (env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &NonRecArgs0_14, &ArgInfo0_15);
      transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(&env);
      if ((env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
      {
        *HeadVar__4_4 = NonRecArgs0_14;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInfo0_15));
        }
      }
      else
      {
        *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) NonRecArgs0_14 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInfo0_15));
        }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Weights_23;

    transform_hlds__term_norm__find_weights_for_cons_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Weights_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Weights_23));
  }
}

static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Weights_0_17,
  MR_Word * STATE_VARIABLE_Weights_18)
{
  {
    MR_Word TypeCtor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeBody_7;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_5, &TypeBody_7);
    switch (MR_tag((MR_Word) TypeBody_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Weights_18 = STATE_VARIABLE_Weights_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Constructors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_7, (MR_Integer) 0))));
          MR_Word TypeParams_12;
          MR_Word Var_19;
          MR_Word Var_20;
          MR_Box conv1_STATE_VARIABLE_Weights_18;

          hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_5, &TypeParams_12);
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__term_norm_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__term_norm__find_weights_for_type_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeCtor_4));
            MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (TypeParams_12));
          }
          Var_20 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constructors_8);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), Var_19, Var_20, ((MR_Box) (STATE_VARIABLE_Weights_0_17)), &conv1_STATE_VARIABLE_Weights_18);
          *STATE_VARIABLE_Weights_18 = ((MR_Word) (conv1_STATE_VARIABLE_Weights_18));
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Weights_18 = STATE_VARIABLE_Weights_0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Weights_18 = STATE_VARIABLE_Weights_0_17;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Weights_18 = STATE_VARIABLE_Weights_0_17;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_norm__zero_size_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
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
            succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_5, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_18) {
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
}

MR_Integer MR_CALL 
transform_hlds__term_norm__functor_lower_bound_4_f_0(
  MR_Word _ModuleInfo_6,
  MR_Word FunctorInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ConsId_9)
{
  {
    MR_Integer Weight_10;

    Weight_10 = transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(FunctorInfo_7, TypeCtor_8, ConsId_9);
    return Weight_10;
  }
}

MR_Integer MR_CALL 
transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(
  MR_Word FunctorInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ConsId_9)
{
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

              succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
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
              MR_Integer Arity_20;

              succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
                Weight_10 = Arity_20;
              }
              else
                Weight_10 = (MR_Integer) 0;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word WeightMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorInfo_7, (MR_Integer) 0))));
          MR_Word WeightInfo_17;
          MR_Word WeightInfo0_29;
          MR_Word Var_32;
          MR_Box conv0_WeightInfo0_29;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (TypeCtor_8));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ConsId_9));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_16, ((MR_Box) (Var_32)), &conv0_WeightInfo0_29);
          if (succeeded)
          {
            WeightInfo0_29 = ((MR_Word) (conv0_WeightInfo0_29));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            WeightInfo_17 = WeightInfo0_29;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorInfo_7_39;
            MR_Integer Arity_31;
            MR_Word ArgInfos_37;
            MR_Word Var_38;

            succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_8);
            if (succeeded)
            {
              Arity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));
              Var_38 = (MR_Integer) 1;
              TypeCtorInfo_7_39 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
              mercury__list__duplicate_3_p_0(TypeCtorInfo_7_39, Arity_31, ((MR_Box) (Var_38)), &ArgInfos_37);
              {
                WeightInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), WeightInfo_17, 0) = ((MR_Box) (Arity_31));
                MR_hl_field(MR_mktag(0), WeightInfo_17, 1) = ((MR_Box) (ArgInfos_37));
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            Weight_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_17, (MR_Integer) 0))));
          else
            Weight_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word WeightMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FunctorInfo_7, (MR_Integer) 0))));
          MR_Word WeightInfo_22;
          MR_Word WeightInfo0_44;
          MR_Word Var_47;
          MR_Box conv1_WeightInfo0_44;

          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (TypeCtor_8));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ConsId_9));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_23, ((MR_Box) (Var_47)), &conv1_WeightInfo0_44);
          if (succeeded)
          {
            WeightInfo0_44 = ((MR_Word) (conv1_WeightInfo0_44));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            WeightInfo_22 = WeightInfo0_44;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorInfo_7_54;
            MR_Integer Arity_46;
            MR_Word ArgInfos_52;
            MR_Word Var_53;

            succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_8);
            if (succeeded)
            {
              Arity_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));
              Var_53 = (MR_Integer) 1;
              TypeCtorInfo_7_54 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
              mercury__list__duplicate_3_p_0(TypeCtorInfo_7_54, Arity_46, ((MR_Box) (Var_53)), &ArgInfos_52);
              {
                WeightInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), WeightInfo_22, 0) = ((MR_Box) (Arity_46));
                MR_hl_field(MR_mktag(0), WeightInfo_22, 1) = ((MR_Box) (ArgInfos_52));
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            Weight_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_22, (MR_Integer) 0))));
          else
            Weight_10 = (MR_Integer) 0;
        }
        break;
    }
    return Weight_10;
  }
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

              succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 2))));
                succeeded = (Arity_18 != (MR_Integer) 0);
              }
              if (succeeded)
                *Gamma_14 = (MR_Integer) 1;
              else
              {
                MR_Integer ConstNum_20;

                succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 23)));
                if (succeeded)
                {
                  ConstNum_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1))));
                  {
                    MR_Word ConstStructDb_22;
                    MR_Word ConstStruct_79;
                    MR_Word Args_81;

                    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_22);
                    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_22, ConstNum_20, &ConstStruct_79);
                    Args_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_79, (MR_Integer) 1))));
                    transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(ConstStructDb_22, Args_81, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Gamma_14);
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
              MR_Integer Arity_49;

              succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Arity_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 2))));
                *Gamma_14 = Arity_49;
              }
              else
              {
                MR_Integer ConstNum_47;

                succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 23)));
                if (succeeded)
                {
                  ConstNum_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1))));
                  {
                    MR_Word ConstStructDb_46;

                    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_46);
                    transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(ConstStructDb_46, ConstNum_47, (MR_Integer) 0, Gamma_14);
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
          MR_Word WeightMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorInfo_11, (MR_Integer) 0))));
          MR_Word WeightInfo_27;

          succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(WeightMap_26, TypeCtor_12, ConsId_13, &WeightInfo_27);
          if (succeeded)
            *Gamma_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_27, (MR_Integer) 0))));
          else
          {
            MR_Integer ConstNum_56;

            succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 23)));
            if (succeeded)
            {
              ConstNum_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1))));
              {
                MR_Word ConstStructDb_55;

                hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_55);
                transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(ConstStructDb_55, WeightMap_26, ConstNum_56, (MR_Integer) 0, Gamma_14);
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
          MR_Word WeightMap_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FunctorInfo_11, (MR_Integer) 0))));
          MR_Word WeightInfo_69;

          succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(WeightMap_72, TypeCtor_12, ConsId_13, &WeightInfo_69);
          if (succeeded)
          {
            MR_Word UseArgList_30;
            MR_Word STATE_VARIABLE_Args_36_36;
            MR_Word STATE_VARIABLE_Modes_37_37;

            *Gamma_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_69, (MR_Integer) 0))));
            UseArgList_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WeightInfo_69, (MR_Integer) 1))));
            succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(UseArgList_30, STATE_VARIABLE_Args_0_32, &STATE_VARIABLE_Args_36_36, STATE_VARIABLE_Modes_0_34, &STATE_VARIABLE_Modes_37_37);
            if (succeeded)
            {
              *STATE_VARIABLE_Modes_35 = STATE_VARIABLE_Modes_37_37;
              *STATE_VARIABLE_Args_33 = STATE_VARIABLE_Args_36_36;
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_norm.functor_norm\'/9", (MR_String) "unmatched lists");
                return;
              }
          }
          else
          {
            MR_Integer ConstNum_63;

            succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 23)));
            if (succeeded)
            {
              ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1))));
              {
                MR_Word ConstStructDb_62;

                hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_62);
                transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(ConstStructDb_62, WeightMap_72, ConstNum_63, (MR_Integer) 0, Gamma_14);
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
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
  MR_Word ConstStructDb_6,
  MR_Word WeightMap_7,
  MR_Integer ConstNum_8,
  MR_Integer STATE_VARIABLE_Gamma_0_19,
  MR_Integer * STATE_VARIABLE_Gamma_20)
{
  {
    MR_bool succeeded;
    MR_Word ConstStruct_10;
    MR_Word ConsId_11;
    MR_Word Args_12;
    MR_Word Type_13;
    MR_Word TypeCtor_15;
    MR_Word WeightInfo_16;
    MR_Word WeightInfo0_27;
    MR_Word Var_30;
    MR_Box conv0_WeightInfo0_27;

    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_6, ConstNum_8, &ConstStruct_10);
    ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_10, (MR_Integer) 0))));
    Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_10, (MR_Integer) 1))));
    Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_10, (MR_Integer) 2))));
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_15);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (TypeCtor_15));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ConsId_11));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_7, ((MR_Box) (Var_30)), &conv0_WeightInfo0_27);
    if (succeeded)
    {
      WeightInfo0_27 = ((MR_Word) (conv0_WeightInfo0_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      WeightInfo_16 = WeightInfo0_27;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_7_37;
      MR_Integer Arity_29;
      MR_Word ArgInfos_35;
      MR_Word Var_36;

      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_15);
      if (succeeded)
      {
        Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
        Var_36 = (MR_Integer) 1;
        TypeCtorInfo_7_37 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
        mercury__list__duplicate_3_p_0(TypeCtorInfo_7_37, Arity_29, ((MR_Box) (Var_36)), &ArgInfos_35);
        {
          WeightInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WeightInfo_16, 0) = ((MR_Box) (Arity_29));
          MR_hl_field(MR_mktag(0), WeightInfo_16, 1) = ((MR_Box) (ArgInfos_35));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer ConsIdGamma_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_16, (MR_Integer) 0))));
      MR_Word UseArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WeightInfo_16, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Gamma_21_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_19 + (MR_Unsigned) ConsIdGamma_17);

      transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(ConstStructDb_6, WeightMap_7, Args_12, UseArgs_18, STATE_VARIABLE_Gamma_21_21, STATE_VARIABLE_Gamma_20);
    }
    else
      *STATE_VARIABLE_Gamma_20 = STATE_VARIABLE_Gamma_0_19;
  }
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
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word UseArg_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word UseArgs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Integer STATE_VARIABLE_Gamma_47_47;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_5;

        switch (UseArg_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Gamma_47_47 = STATE_VARIABLE_Gamma_0_5;
            break;
          case (MR_Integer) 1:
            if (((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0))
            {
              MR_Integer ArgConstNum_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
              MR_Word ConstStruct_57;
              MR_Word ConsId_58;
              MR_Word Args_59;
              MR_Word Type_60;
              MR_Word TypeCtor_62;
              MR_Word WeightInfo_63;
              MR_Word WeightInfo0_72;
              MR_Word Var_75;
              MR_Box conv0_WeightInfo0_72;

              hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_43, &ConstStruct_57);
              ConsId_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_57, (MR_Integer) 0))));
              Args_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_57, (MR_Integer) 1))));
              Type_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_57, (MR_Integer) 2))));
              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_60, &TypeCtor_62);
              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (TypeCtor_62));
                MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ConsId_58));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_75)), &conv0_WeightInfo0_72);
              if (succeeded)
              {
                WeightInfo0_72 = ((MR_Word) (conv0_WeightInfo0_72));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                WeightInfo_63 = WeightInfo0_72;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeCtorInfo_7_82;
                MR_Integer Arity_74;
                MR_Word ArgInfos_80;
                MR_Word Var_81;

                succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_62);
                if (succeeded)
                {
                  Arity_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_62, (MR_Integer) 1))));
                  Var_81 = (MR_Integer) 1;
                  TypeCtorInfo_7_82 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
                  mercury__list__duplicate_3_p_0(TypeCtorInfo_7_82, Arity_74, ((MR_Box) (Var_81)), &ArgInfos_80);
                  {
                    WeightInfo_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), WeightInfo_63, 0) = ((MR_Box) (Arity_74));
                    MR_hl_field(MR_mktag(0), WeightInfo_63, 1) = ((MR_Box) (ArgInfos_80));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Integer ConsIdGamma_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_63, (MR_Integer) 0))));
                MR_Word UseArgs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WeightInfo_63, (MR_Integer) 1))));
                MR_Integer STATE_VARIABLE_Gamma_21_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_5 + (MR_Unsigned) ConsIdGamma_64);

                transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(HeadVar__1_1, HeadVar__2_2, Args_59, UseArgs_65, STATE_VARIABLE_Gamma_21_66, &STATE_VARIABLE_Gamma_47_47);
              }
              else
                STATE_VARIABLE_Gamma_47_47 = STATE_VARIABLE_Gamma_0_5;
            }
            else
            {
              MR_Word ConsId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
              MR_Word Type_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1))));
              MR_Word TypeCtor_39;
              MR_Word WeightInfo_40;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_38, &TypeCtor_39);
              succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(HeadVar__2_2, TypeCtor_39, ConsId_37, &WeightInfo_40);
              if (succeeded)
              {
                MR_Integer ConsIdGamma_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_40, (MR_Integer) 0))));

                STATE_VARIABLE_Gamma_47_47 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_5 + (MR_Unsigned) ConsIdGamma_41);
              }
              else
                STATE_VARIABLE_Gamma_47_47 = STATE_VARIABLE_Gamma_0_5;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_49;
        next_value_of_HeadVar__4_4 = UseArgs_35;
        next_value_of_STATE_VARIABLE_Gamma_0_5 = STATE_VARIABLE_Gamma_47_47;
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
transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(
  MR_Word ConstStructDb_6,
  MR_Word WeightMap_7,
  MR_Integer ConstNum_8,
  MR_Integer STATE_VARIABLE_Gamma_0_19,
  MR_Integer * STATE_VARIABLE_Gamma_20)
{
  {
    MR_bool succeeded;
    MR_Word ConstStruct_10;
    MR_Word ConsId_11;
    MR_Word Args_12;
    MR_Word Type_13;
    MR_Word TypeCtor_15;
    MR_Word WeightInfo_16;
    MR_Word WeightInfo0_27;
    MR_Word Var_30;
    MR_Box conv0_WeightInfo0_27;

    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_6, ConstNum_8, &ConstStruct_10);
    ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_10, (MR_Integer) 0))));
    Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_10, (MR_Integer) 1))));
    Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_10, (MR_Integer) 2))));
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_15);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (TypeCtor_15));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ConsId_11));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), WeightMap_7, ((MR_Box) (Var_30)), &conv0_WeightInfo0_27);
    if (succeeded)
    {
      WeightInfo0_27 = ((MR_Word) (conv0_WeightInfo0_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      WeightInfo_16 = WeightInfo0_27;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_7_37;
      MR_Integer Arity_29;
      MR_Word ArgInfos_35;
      MR_Word Var_36;

      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_15);
      if (succeeded)
      {
        Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
        Var_36 = (MR_Integer) 1;
        TypeCtorInfo_7_37 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
        mercury__list__duplicate_3_p_0(TypeCtorInfo_7_37, Arity_29, ((MR_Box) (Var_36)), &ArgInfos_35);
        {
          WeightInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WeightInfo_16, 0) = ((MR_Box) (Arity_29));
          MR_hl_field(MR_mktag(0), WeightInfo_16, 1) = ((MR_Box) (ArgInfos_35));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer ConsIdGamma_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_16, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_Gamma_21_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_19 + (MR_Unsigned) ConsIdGamma_17);

      transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(ConstStructDb_6, WeightMap_7, Args_12, STATE_VARIABLE_Gamma_21_21, STATE_VARIABLE_Gamma_20);
    }
    else
      *STATE_VARIABLE_Gamma_20 = STATE_VARIABLE_Gamma_0_19;
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
      MR_Word Arg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Gamma_26_26;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_4;

      if (((MR_tag((MR_Word) Arg_13)) == (MR_Integer) 0))
      {
        MR_Integer ArgConstNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 0))));
        MR_Word ConstStruct_34;
        MR_Word ConsId_35;
        MR_Word Args_36;
        MR_Word Type_37;
        MR_Word TypeCtor_39;
        MR_Word WeightInfo_40;
        MR_Word WeightInfo0_49;
        MR_Word Var_52;
        MR_Box conv0_WeightInfo0_49;

        hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_22, &ConstStruct_34);
        ConsId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_34, (MR_Integer) 0))));
        Args_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_34, (MR_Integer) 1))));
        Type_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_34, (MR_Integer) 2))));
        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_37, &TypeCtor_39);
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (TypeCtor_39));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ConsId_35));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_52)), &conv0_WeightInfo0_49);
        if (succeeded)
        {
          WeightInfo0_49 = ((MR_Word) (conv0_WeightInfo0_49));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_40 = WeightInfo0_49;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_59;
          MR_Integer Arity_51;
          MR_Word ArgInfos_57;
          MR_Word Var_58;

          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_39);
          if (succeeded)
          {
            Arity_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_39, (MR_Integer) 1))));
            Var_58 = (MR_Integer) 1;
            TypeCtorInfo_7_59 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_59, Arity_51, ((MR_Box) (Var_58)), &ArgInfos_57);
            {
              WeightInfo_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WeightInfo_40, 0) = ((MR_Box) (Arity_51));
              MR_hl_field(MR_mktag(0), WeightInfo_40, 1) = ((MR_Box) (ArgInfos_57));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Integer ConsIdGamma_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_40, (MR_Integer) 0))));
          MR_Integer STATE_VARIABLE_Gamma_21_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_4 + (MR_Unsigned) ConsIdGamma_41);

          transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(HeadVar__1_1, HeadVar__2_2, Args_36, STATE_VARIABLE_Gamma_21_43, &STATE_VARIABLE_Gamma_26_26);
        }
        else
          STATE_VARIABLE_Gamma_26_26 = STATE_VARIABLE_Gamma_0_4;
      }
      else
      {
        MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_13, (MR_Integer) 0))));
        MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_13, (MR_Integer) 1))));
        MR_Word TypeCtor_18;
        MR_Word WeightInfo_19;
        MR_Word WeightInfo0_64;
        MR_Word Var_67;
        MR_Box conv1_WeightInfo0_64;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_17, &TypeCtor_18);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (TypeCtor_18));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ConsId_16));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), HeadVar__2_2, ((MR_Box) (Var_67)), &conv1_WeightInfo0_64);
        if (succeeded)
        {
          WeightInfo0_64 = ((MR_Word) (conv1_WeightInfo0_64));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          WeightInfo_19 = WeightInfo0_64;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_7_74;
          MR_Integer Arity_66;
          MR_Word ArgInfos_72;
          MR_Word Var_73;

          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_18);
          if (succeeded)
          {
            Arity_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_18, (MR_Integer) 1))));
            Var_73 = (MR_Integer) 1;
            TypeCtorInfo_7_74 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
            mercury__list__duplicate_3_p_0(TypeCtorInfo_7_74, Arity_66, ((MR_Box) (Var_73)), &ArgInfos_72);
            {
              WeightInfo_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WeightInfo_19, 0) = ((MR_Box) (Arity_66));
              MR_hl_field(MR_mktag(0), WeightInfo_19, 1) = ((MR_Box) (ArgInfos_72));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Integer ConsIdGamma_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WeightInfo_19, (MR_Integer) 0))));

          STATE_VARIABLE_Gamma_26_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_4 + (MR_Unsigned) ConsIdGamma_20);
        }
        else
          STATE_VARIABLE_Gamma_26_26 = STATE_VARIABLE_Gamma_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Args_14;
      next_value_of_STATE_VARIABLE_Gamma_0_4 = STATE_VARIABLE_Gamma_26_26;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Gamma_0_4 = next_value_of_STATE_VARIABLE_Gamma_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(
  MR_Word ConstStructDb_5,
  MR_Integer ConstNum_6,
  MR_Integer STATE_VARIABLE_Gamma_0_13,
  MR_Integer * STATE_VARIABLE_Gamma_14)
{
  {
    MR_Word ConstStruct_8;
    MR_Word Args_10;
    MR_Integer STATE_VARIABLE_Gamma_15_15;
    MR_Integer Var_16;

    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_5, ConstNum_6, &ConstStruct_8);
    Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_8, (MR_Integer) 1))));
    Var_16 = mercury__list__length_1_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_10);
    STATE_VARIABLE_Gamma_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_13 + (MR_Unsigned) Var_16);
    transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(ConstStructDb_5, Args_10, STATE_VARIABLE_Gamma_15_15, STATE_VARIABLE_Gamma_14);
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
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Gamma_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_3;

      if (((MR_tag((MR_Word) Arg_10)) == (MR_Integer) 0))
      {
        MR_Integer ArgConstNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0))));
        MR_Word ConstStruct_25;
        MR_Word Args_27;
        MR_Integer STATE_VARIABLE_Gamma_15_30;
        MR_Integer Var_31;

        hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_15, &ConstStruct_25);
        Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_25, (MR_Integer) 1))));
        Var_31 = mercury__list__length_1_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_27);
        STATE_VARIABLE_Gamma_15_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_3 + (MR_Unsigned) Var_31);
        transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(HeadVar__1_1, Args_27, STATE_VARIABLE_Gamma_15_30, &STATE_VARIABLE_Gamma_18_18);
      }
      else
        STATE_VARIABLE_Gamma_18_18 = STATE_VARIABLE_Gamma_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_11;
      next_value_of_STATE_VARIABLE_Gamma_0_3 = STATE_VARIABLE_Gamma_18_18;
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
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Gamma_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Gamma_0_3;

      if (((MR_tag((MR_Word) Arg_10)) == (MR_Integer) 0))
      {
        MR_Integer ArgConstNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0))));
        MR_Word ConstStruct_25;
        MR_Word Args_27;
        MR_Integer STATE_VARIABLE_Gamma_15_30;

        hlds__const_struct__lookup_const_struct_num_3_p_0(HeadVar__1_1, ArgConstNum_15, &ConstStruct_25);
        Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_25, (MR_Integer) 1))));
        STATE_VARIABLE_Gamma_15_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Gamma_0_3 + (MR_Unsigned) 1);
        transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(HeadVar__1_1, Args_27, STATE_VARIABLE_Gamma_15_30, &STATE_VARIABLE_Gamma_18_18);
      }
      else
        STATE_VARIABLE_Gamma_18_18 = STATE_VARIABLE_Gamma_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_11;
      next_value_of_STATE_VARIABLE_Gamma_0_3 = STATE_VARIABLE_Gamma_18_18;
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
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_9));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_12));
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
  {
    MR_bool succeeded;
    MR_Word WeightInfo0_9;
    MR_Word Var_12;
    MR_Box conv0_WeightInfo0_9;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (TypeCtor_6));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ConsId_7));
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
      MR_Word TypeCtorInfo_7_19;
      MR_Integer Arity_11;
      MR_Word ArgInfos_17;
      MR_Word Var_18;

      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_6);
      if (succeeded)
      {
        Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1))));
        Var_18 = (MR_Integer) 1;
        TypeCtorInfo_7_19 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
        mercury__list__duplicate_3_p_0(TypeCtorInfo_7_19, Arity_11, ((MR_Box) (Var_18)), &ArgInfos_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *WeightInfo_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Arity_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInfos_17));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Weights_18;

    transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Weights_18);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Weights_18));
  }
}

static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Weights_18;

    transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Weights_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Weights_18));
  }
}

MR_Word MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word WeightMap_8;
          MR_Word TypeTable_14;
          MR_Word TypeCtorsDefns_15;
          MR_Word Weights0_16;
          MR_Box conv1_WeightMap_8;

          hlds__hlds_module__module_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_14);
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_14, &TypeCtorsDefns_15);
          mercury__map__init_1_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), &Weights0_16);
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[3]), TypeCtorsDefns_15, ((MR_Box) (Weights0_16)), &conv1_WeightMap_8);
          WeightMap_8 = ((MR_Word) (conv1_WeightMap_8));
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (WeightMap_8));
          }
        }
        break;
      case (MR_Integer) 0:
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        {
          MR_Word WeightMap_11;
          MR_Word TypeTable_27;
          MR_Word TypeCtorsDefns_28;
          MR_Word Weights0_29;
          MR_Box conv3_WeightMap_11;

          hlds__hlds_module__module_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_27);
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_27, &TypeCtorsDefns_28);
          mercury__map__init_1_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0), &Weights0_29);
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_norm_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_norm_scalar_common_1[4]), TypeCtorsDefns_28, ((MR_Box) (Weights0_29)), &conv3_WeightMap_11);
          WeightMap_11 = ((MR_Word) (conv3_WeightMap_11));
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (WeightMap_11));
          }
        }
        break;
      case (MR_Integer) 1:
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 4U);
        break;
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_norm____Compare____functor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_norm____Unify____weight_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_norm____Compare____weight_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_norm____Unify____weight_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_norm____Compare____weight_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_norm__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_norm.
