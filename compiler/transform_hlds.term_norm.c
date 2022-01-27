/*
** Automatically generated from `term_norm.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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
#include "require.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 204 "term_norm.m"
struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s {
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2;
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3;
#line 208 "term_norm.m"
  MR_bool transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded;
#line 209 "term_norm.m"
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8;
#line 222 "term_norm.m"
  jmp_buf transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0;
#line 222 "term_norm.m"
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_17_32;
#line 222 "term_norm.m"
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25;
#line 222 "term_norm.m"
  MR_Word transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__V_30_30;
#line 204 "term_norm.m"
};


#line 153 "transform_hlds.term_norm.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 156 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 159 "transform_hlds.term_norm.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0;

#line 162 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 165 "transform_hlds.term_norm.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 168 "transform_hlds.term_norm.c"
static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0;

#line 171 "transform_hlds.term_norm.c"
static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1;

#line 174 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0;

#line 177 "transform_hlds.term_norm.c"
static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2[1];

#line 180 "transform_hlds.term_norm.c"
static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2;

#line 183 "transform_hlds.term_norm.c"
static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3[1];

#line 186 "transform_hlds.term_norm.c"
static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3;

#line 189 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0[2];

#line 192 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[1];

#line 195 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[1];

#line 198 "transform_hlds.term_norm.c"
static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0[3];

#line 201 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0[4];

#line 204 "transform_hlds.term_norm.c"
static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0[4];

#line 207 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0;

#line 210 "transform_hlds.term_norm.c"
static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0[2];

#line 213 "transform_hlds.term_norm.c"
static const MR_DuFunctorDesc transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0;

#line 216 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[1];

#line 219 "transform_hlds.term_norm.c"
static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0[1];

#line 222 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0[1];

#line 225 "transform_hlds.term_norm.c"
static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0[1];

#line 228 "transform_hlds.term_norm.c"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
#line 231 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 233 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2);

#line 236 "transform_hlds.term_norm.c"
static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
#line 239 "transform_hlds.term_norm.c"
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
#line 241 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 243 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_3);

#line 246 "transform_hlds.term_norm.c"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
#line 249 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 251 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2);

#line 254 "transform_hlds.term_norm.c"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
#line 257 "transform_hlds.term_norm.c"
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
#line 259 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 261 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_3);

#line 264 "transform_hlds.term_norm.c"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
#line 267 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 269 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2);

#line 272 "transform_hlds.term_norm.c"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
#line 275 "transform_hlds.term_norm.c"
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
#line 277 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 279 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_3);

#line 132 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
#line 132 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3);

#line 132 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2);

#line 134 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
#line 134 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3);

#line 134 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2);

#line 432 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
#line 432 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5,
#line 432 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_6);

#line 415 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
#line 415 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
#line 415 "term_norm.m"
  MR_Word transform_hlds__term_norm__WeightMap_7,
#line 415 "term_norm.m"
  MR_Integer transform_hlds__term_norm__ConstNum_8,
#line 415 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
#line 415 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);

#line 392 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
#line 392 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 392 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 392 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
#line 392 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4,
#line 392 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_5);

#line 376 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(
#line 376 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
#line 376 "term_norm.m"
  MR_Word transform_hlds__term_norm__WeightMap_7,
#line 376 "term_norm.m"
  MR_Integer transform_hlds__term_norm__ConstNum_8,
#line 376 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
#line 376 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);

#line 363 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(
#line 363 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 363 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 363 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
#line 363 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4);

#line 354 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(
#line 354 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConstStructDb_5,
#line 354 "term_norm.m"
  MR_Integer transform_hlds__term_norm__ConstNum_6,
#line 354 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_13,
#line 354 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_14);

#line 341 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(
#line 341 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 341 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 341 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
#line 341 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4);

#line 318 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm__functor_norm_filter_args_5_p_0(
#line 318 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 318 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 318 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__3_3,
#line 318 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
#line 318 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__5_5);

#line 229 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm__search_weight_table_4_p_0(
#line 229 "term_norm.m"
  MR_Word transform_hlds__term_norm__WeightMap_5,
#line 229 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_6,
#line 229 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConsId_7,
#line 229 "term_norm.m"
  MR_Word * transform_hlds__term_norm__WeightInfo_8);

#line 222 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
#line 222 "term_norm.m"
  void * transform_hlds__term_norm__env_ptr_arg);

#line 222 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
#line 222 "term_norm.m"
  void * transform_hlds__term_norm__env_ptr_arg);

#line 222 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
#line 222 "term_norm.m"
  void * transform_hlds__term_norm__env_ptr_arg);

#line 204 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__Id_2,
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__Params_3,
#line 204 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__HeadVar__4_4,
#line 204 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__5_5);

#line 169 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_6,
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__Params_7,
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__Ctor_8,
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_22,
#line 169 "term_norm.m"
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_23);

#line 152 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0_1(
#line 152 "term_norm.m"
  MR_Box transform_hlds__term_norm__closure_arg,
#line 152 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 152 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 152 "term_norm.m"
  MR_Box * transform_hlds__term_norm__wrapper_arg_3);

#line 144 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
#line 144 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 144 "term_norm.m"
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23,
#line 144 "term_norm.m"
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_24);

#line 142 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__closure_arg,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 142 "term_norm.m"
  MR_Box * transform_hlds__term_norm__wrapper_arg_3);

#line 142 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__closure_arg,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 142 "term_norm.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 641 "transform_hlds.term_norm.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 650 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 659 "transform_hlds.term_norm.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_norm__tree234__pti_tree234_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0__plain_transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0
  }
};

#line 668 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 676 "transform_hlds.term_norm.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_norm__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 684 "transform_hlds.term_norm.c"
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
  NULL
};

#line 699 "transform_hlds.term_norm.c"
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
  NULL
};

#line 714 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_norm__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0
  }
};

#line 723 "transform_hlds.term_norm.c"
static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
};

#line 728 "transform_hlds.term_norm.c"
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
  NULL
};

#line 743 "transform_hlds.term_norm.c"
static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_functor_info_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
};

#line 748 "transform_hlds.term_norm.c"
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
  NULL
};

#line 763 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_0[2] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1
};

#line 769 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2
};

#line 774 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3
};

#line 779 "transform_hlds.term_norm.c"
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

#line 798 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0[4] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_1,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_2,
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_functor_info_0_3
};

#line 806 "transform_hlds.term_norm.c"
static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 814 "transform_hlds.term_norm.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____functor_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____functor_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "functor_info",
  {
    transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_functor_info_0
  },
  {
    transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_functor_info_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_functor_info_0
};

#line 835 "transform_hlds.term_norm.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 843 "transform_hlds.term_norm.c"
static const MR_PseudoTypeInfo transform_hlds__term_norm__transform_hlds__term_norm__field_types_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__list__ti_list_1bool__type_ctor_info_bool_0
};

#line 849 "transform_hlds.term_norm.c"
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
  NULL
};

#line 864 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0
};

#line 869 "transform_hlds.term_norm.c"
static const MR_DuPtagLayout transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_norm__transform_hlds__term_norm__du_stag_ordered_weight_info_0_0
  }
};

#line 878 "transform_hlds.term_norm.c"
static const MR_DuFunctorDescPtr transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0[1] = {
  &transform_hlds__term_norm__transform_hlds__term_norm__du_functor_desc_weight_info_0_0
};

#line 883 "transform_hlds.term_norm.c"
static const MR_Integer transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0[1] = {
  (MR_Integer) 0
};

#line 888 "transform_hlds.term_norm.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_info",
  {
    transform_hlds__term_norm__transform_hlds__term_norm__du_name_ordered_weight_info_0
  },
  {
    transform_hlds__term_norm__transform_hlds__term_norm__du_ptag_ordered_weight_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_norm__transform_hlds__term_norm__functor_number_map_weight_info_0
};

#line 909 "transform_hlds.term_norm.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_norm____Unify____weight_table_0_0_10001)),
  ((MR_Box) (transform_hlds__term_norm____Compare____weight_table_0_0_10001)),
  (MR_String) "transform_hlds.term_norm",
  (MR_String) "weight_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_norm__tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 930 "transform_hlds.term_norm.c"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0_10001(
#line 933 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 935 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2)
#line 937 "transform_hlds.term_norm.c"
{
#line 939 "transform_hlds.term_norm.c"
  {
#line 941 "transform_hlds.term_norm.c"
    MR_bool transform_hlds__term_norm__succeeded;

#line 944 "transform_hlds.term_norm.c"
    {
#line 946 "transform_hlds.term_norm.c"
      transform_hlds__term_norm__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2));
    }
#line 949 "transform_hlds.term_norm.c"
    return transform_hlds__term_norm__succeeded;
#line 951 "transform_hlds.term_norm.c"
  }
#line 953 "transform_hlds.term_norm.c"
}

#line 956 "transform_hlds.term_norm.c"
static void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0_10001(
#line 959 "transform_hlds.term_norm.c"
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
#line 961 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 963 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_3)
#line 965 "transform_hlds.term_norm.c"
{
#line 967 "transform_hlds.term_norm.c"
  {
#line 969 "transform_hlds.term_norm.c"
    MR_Word transform_hlds__term_norm__conv0_HeadVar__1_1;

#line 972 "transform_hlds.term_norm.c"
    {
#line 974 "transform_hlds.term_norm.c"
      transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_norm__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), ((MR_Word) transform_hlds__term_norm__wrapper_arg_3));
    }
#line 977 "transform_hlds.term_norm.c"
    *transform_hlds__term_norm__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_norm__conv0_HeadVar__1_1));
#line 979 "transform_hlds.term_norm.c"
  }
#line 981 "transform_hlds.term_norm.c"
}

#line 984 "transform_hlds.term_norm.c"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0_10001(
#line 987 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 989 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2)
#line 991 "transform_hlds.term_norm.c"
{
#line 993 "transform_hlds.term_norm.c"
  {
#line 995 "transform_hlds.term_norm.c"
    MR_bool transform_hlds__term_norm__succeeded;

#line 998 "transform_hlds.term_norm.c"
    {
#line 1000 "transform_hlds.term_norm.c"
      transform_hlds__term_norm__succeeded = transform_hlds__term_norm____Unify____weight_info_0_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2));
    }
#line 1003 "transform_hlds.term_norm.c"
    return transform_hlds__term_norm__succeeded;
#line 1005 "transform_hlds.term_norm.c"
  }
#line 1007 "transform_hlds.term_norm.c"
}

#line 1010 "transform_hlds.term_norm.c"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0_10001(
#line 1013 "transform_hlds.term_norm.c"
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
#line 1015 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 1017 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_3)
#line 1019 "transform_hlds.term_norm.c"
{
#line 1021 "transform_hlds.term_norm.c"
  {
#line 1023 "transform_hlds.term_norm.c"
    MR_Word transform_hlds__term_norm__conv0_HeadVar__1_1;

#line 1026 "transform_hlds.term_norm.c"
    {
#line 1028 "transform_hlds.term_norm.c"
      transform_hlds__term_norm____Compare____weight_info_0_0(&transform_hlds__term_norm__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), ((MR_Word) transform_hlds__term_norm__wrapper_arg_3));
    }
#line 1031 "transform_hlds.term_norm.c"
    *transform_hlds__term_norm__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_norm__conv0_HeadVar__1_1));
#line 1033 "transform_hlds.term_norm.c"
  }
#line 1035 "transform_hlds.term_norm.c"
}

#line 1038 "transform_hlds.term_norm.c"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0_10001(
#line 1041 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 1043 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2)
#line 1045 "transform_hlds.term_norm.c"
{
#line 1047 "transform_hlds.term_norm.c"
  {
#line 1049 "transform_hlds.term_norm.c"
    MR_bool transform_hlds__term_norm__succeeded;

#line 1052 "transform_hlds.term_norm.c"
    {
#line 1054 "transform_hlds.term_norm.c"
      transform_hlds__term_norm__succeeded = transform_hlds__term_norm____Unify____weight_table_0_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2));
    }
#line 1057 "transform_hlds.term_norm.c"
    return transform_hlds__term_norm__succeeded;
#line 1059 "transform_hlds.term_norm.c"
  }
#line 1061 "transform_hlds.term_norm.c"
}

#line 1064 "transform_hlds.term_norm.c"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0_10001(
#line 1067 "transform_hlds.term_norm.c"
  MR_Box * transform_hlds__term_norm__wrapper_arg_1,
#line 1069 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 1071 "transform_hlds.term_norm.c"
  MR_Box transform_hlds__term_norm__wrapper_arg_3)
#line 1073 "transform_hlds.term_norm.c"
{
#line 1075 "transform_hlds.term_norm.c"
  {
#line 1077 "transform_hlds.term_norm.c"
    MR_Word transform_hlds__term_norm__conv0_HeadVar__1_1;

#line 1080 "transform_hlds.term_norm.c"
    {
#line 1082 "transform_hlds.term_norm.c"
      transform_hlds__term_norm____Compare____weight_table_0_0(&transform_hlds__term_norm__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), ((MR_Word) transform_hlds__term_norm__wrapper_arg_3));
    }
#line 1085 "transform_hlds.term_norm.c"
    *transform_hlds__term_norm__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_norm__conv0_HeadVar__1_1));
#line 1087 "transform_hlds.term_norm.c"
  }
#line 1089 "transform_hlds.term_norm.c"
}

#line 61 "term_norm.m"
MR_Integer MR_CALL 
transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm__FunctorInfo_7,
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_8,
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConsId_9)
#line 61 "term_norm.m"
{
#line 472 "term_norm.m"
  {
#line 472 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 472 "term_norm.m"
    MR_Integer transform_hlds__term_norm__Weight_10;

#line 472 "term_norm.m"
    if ((transform_hlds__term_norm__FunctorInfo_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "term_norm.m"
      {
#line 473 "term_norm.m"
        MR_Integer transform_hlds__term_norm__Arity_12;
#line 473 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_11_11;
#line 473 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_13_13;

#line 473 "term_norm.m"
        transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 473 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 473 "term_norm.m"
          {
#line 473 "term_norm.m"
            transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 1)));
#line 473 "term_norm.m"
            transform_hlds__term_norm__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 2)));
#line 473 "term_norm.m"
            transform_hlds__term_norm__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 3)));
#line 473 "term_norm.m"
            transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__Arity_12 == (MR_Integer) 0);
#line 473 "term_norm.m"
            transform_hlds__term_norm__succeeded = !(transform_hlds__term_norm__succeeded);
#line 473 "term_norm.m"
          }
#line 473 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 473 "term_norm.m"
          transform_hlds__term_norm__Weight_10 = (MR_Integer) 1;
#line 473 "term_norm.m"
        else
#line 473 "term_norm.m"
          transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
#line 473 "term_norm.m"
      }
#line 472 "term_norm.m"
    else
#line 472 "term_norm.m"
      if ((transform_hlds__term_norm__FunctorInfo_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 476 "term_norm.m"
        {
#line 476 "term_norm.m"
          MR_Integer transform_hlds__term_norm__Arity_20;
#line 476 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_14_14;
#line 476 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_15_15;

#line 476 "term_norm.m"
          transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 476 "term_norm.m"
          if (transform_hlds__term_norm__succeeded)
#line 476 "term_norm.m"
            {
#line 476 "term_norm.m"
              transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 1)));
#line 476 "term_norm.m"
              transform_hlds__term_norm__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 2)));
#line 476 "term_norm.m"
              transform_hlds__term_norm__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_9, (MR_Integer) 3)));
#line 476 "term_norm.m"
              transform_hlds__term_norm__Weight_10 = transform_hlds__term_norm__Arity_20;
#line 476 "term_norm.m"
            }
#line 476 "term_norm.m"
          else
#line 476 "term_norm.m"
            transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
#line 476 "term_norm.m"
        }
#line 472 "term_norm.m"
      else
#line 472 "term_norm.m"
        if (((MR_tag((MR_Word) transform_hlds__term_norm__FunctorInfo_7)) == (MR_mktag((MR_Integer) 1))))
#line 478 "term_norm.m"
          {
#line 478 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__FunctorInfo_7, (MR_Integer) 0)));
#line 481 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightInfo_17;
#line 235 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightInfo0_29;
#line 233 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_32_32;
#line 233 "term_norm.m"
            MR_Box transform_hlds__term_norm__conv0_WeightInfo0_29;

#line 233 "term_norm.m"
            {
#line 233 "term_norm.m"
              transform_hlds__term_norm__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_32_32, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_8));
#line 233 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_32_32, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_9));
#line 233 "term_norm.m"
            }
#line 233 "term_norm.m"
            {
#line 233 "term_norm.m"
              transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_16, ((MR_Box) (transform_hlds__term_norm__V_32_32)), &transform_hlds__term_norm__conv0_WeightInfo0_29);
            }
#line 233 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
              {
#line 233 "term_norm.m"
                transform_hlds__term_norm__WeightInfo0_29 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_29);
#line 233 "term_norm.m"
                transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
              }
#line 235 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
              {
#line 234 "term_norm.m"
                transform_hlds__term_norm__WeightInfo_17 = transform_hlds__term_norm__WeightInfo0_29;
#line 234 "term_norm.m"
                transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
              }
#line 235 "term_norm.m"
            else
#line 238 "term_norm.m"
              {
#line 238 "term_norm.m"
                MR_Word transform_hlds__term_norm__TypeCtorInfo_7_39;
#line 238 "term_norm.m"
                MR_Integer transform_hlds__term_norm__Arity_31;
#line 238 "term_norm.m"
                MR_Word transform_hlds__term_norm__ArgInfos_37;
#line 238 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_38_38;
#line 236 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_30_30;

#line 235 "term_norm.m"
                {
#line 235 "term_norm.m"
                  transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_8);
                }
#line 238 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
                  {
#line 236 "term_norm.m"
                    transform_hlds__term_norm__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 0)));
#line 236 "term_norm.m"
                    transform_hlds__term_norm__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 1)));
#line 202 "term_norm.m"
                    transform_hlds__term_norm__V_38_38 = (MR_Integer) 1;
#line 1266 "transform_hlds.term_norm.c"
                    transform_hlds__term_norm__TypeCtorInfo_7_39 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
                    {
#line 202 "term_norm.m"
                      mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_39, transform_hlds__term_norm__Arity_31, ((MR_Box) (transform_hlds__term_norm__V_38_38)), &transform_hlds__term_norm__ArgInfos_37);
                    }
#line 199 "term_norm.m"
                    {
#line 199 "term_norm.m"
                      transform_hlds__term_norm__WeightInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_31));
#line 199 "term_norm.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_37));
#line 199 "term_norm.m"
                    }
#line 199 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
                  }
#line 238 "term_norm.m"
              }
#line 481 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 480 "term_norm.m"
              {
#line 480 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_18_18;

#line 480 "term_norm.m"
                transform_hlds__term_norm__Weight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, (MR_Integer) 0)));
#line 480 "term_norm.m"
                transform_hlds__term_norm__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_17, (MR_Integer) 1)));
#line 480 "term_norm.m"
              }
#line 481 "term_norm.m"
            else
#line 481 "term_norm.m"
              transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
#line 478 "term_norm.m"
          }
#line 472 "term_norm.m"
        else
#line 484 "term_norm.m"
          {
#line 484 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__FunctorInfo_7, (MR_Integer) 0)));
#line 487 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightInfo_22;
#line 235 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightInfo0_44;
#line 233 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_47_47;
#line 233 "term_norm.m"
            MR_Box transform_hlds__term_norm__conv1_WeightInfo0_44;

#line 233 "term_norm.m"
            {
#line 233 "term_norm.m"
              transform_hlds__term_norm__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_47_47, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_8));
#line 233 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_47_47, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_9));
#line 233 "term_norm.m"
            }
#line 233 "term_norm.m"
            {
#line 233 "term_norm.m"
              transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_23, ((MR_Box) (transform_hlds__term_norm__V_47_47)), &transform_hlds__term_norm__conv1_WeightInfo0_44);
            }
#line 233 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
              {
#line 233 "term_norm.m"
                transform_hlds__term_norm__WeightInfo0_44 = ((MR_Word) transform_hlds__term_norm__conv1_WeightInfo0_44);
#line 233 "term_norm.m"
                transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
              }
#line 235 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
              {
#line 234 "term_norm.m"
                transform_hlds__term_norm__WeightInfo_22 = transform_hlds__term_norm__WeightInfo0_44;
#line 234 "term_norm.m"
                transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
              }
#line 235 "term_norm.m"
            else
#line 238 "term_norm.m"
              {
#line 238 "term_norm.m"
                MR_Word transform_hlds__term_norm__TypeCtorInfo_7_54;
#line 238 "term_norm.m"
                MR_Integer transform_hlds__term_norm__Arity_46;
#line 238 "term_norm.m"
                MR_Word transform_hlds__term_norm__ArgInfos_52;
#line 238 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_53_53;
#line 236 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_45_45;

#line 235 "term_norm.m"
                {
#line 235 "term_norm.m"
                  transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_8);
                }
#line 238 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
                  {
#line 236 "term_norm.m"
                    transform_hlds__term_norm__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 0)));
#line 236 "term_norm.m"
                    transform_hlds__term_norm__Arity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_8, (MR_Integer) 1)));
#line 202 "term_norm.m"
                    transform_hlds__term_norm__V_53_53 = (MR_Integer) 1;
#line 1388 "transform_hlds.term_norm.c"
                    transform_hlds__term_norm__TypeCtorInfo_7_54 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
                    {
#line 202 "term_norm.m"
                      mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_54, transform_hlds__term_norm__Arity_46, ((MR_Box) (transform_hlds__term_norm__V_53_53)), &transform_hlds__term_norm__ArgInfos_52);
                    }
#line 199 "term_norm.m"
                    {
#line 199 "term_norm.m"
                      transform_hlds__term_norm__WeightInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_46));
#line 199 "term_norm.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_52));
#line 199 "term_norm.m"
                    }
#line 199 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
                  }
#line 238 "term_norm.m"
              }
#line 487 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 486 "term_norm.m"
              {
#line 486 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_19_19;

#line 486 "term_norm.m"
                transform_hlds__term_norm__Weight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, (MR_Integer) 0)));
#line 486 "term_norm.m"
                transform_hlds__term_norm__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_22, (MR_Integer) 1)));
#line 486 "term_norm.m"
              }
#line 487 "term_norm.m"
            else
#line 487 "term_norm.m"
              transform_hlds__term_norm__Weight_10 = (MR_Integer) 0;
#line 484 "term_norm.m"
          }
#line 472 "term_norm.m"
    return transform_hlds__term_norm__Weight_10;
#line 472 "term_norm.m"
  }
#line 61 "term_norm.m"
}

#line 132 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_table_0_0(
#line 132 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3)
#line 132 "term_norm.m"
{
#line 132 "term_norm.m"
  {
#line 132 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 132 "term_norm.m"
    MR_Word transform_hlds__term_norm__Cast_HeadVar1_4 = transform_hlds__term_norm__HeadVar__2_2;
#line 132 "term_norm.m"
    MR_Word transform_hlds__term_norm__Cast_HeadVar2_5 = transform_hlds__term_norm__HeadVar__3_3;

#line 132 "term_norm.m"
    {
#line 132 "term_norm.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar2_5)));
#line 132 "term_norm.m"
      return;
    }
#line 132 "term_norm.m"
  }
#line 132 "term_norm.m"
}

#line 132 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_table_0_0(
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 132 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
#line 132 "term_norm.m"
{
#line 132 "term_norm.m"
  {
#line 132 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 132 "term_norm.m"
    MR_Word transform_hlds__term_norm__Cast_HeadVar1_3 = transform_hlds__term_norm__HeadVar__1_1;
#line 132 "term_norm.m"
    MR_Word transform_hlds__term_norm__Cast_HeadVar2_4 = transform_hlds__term_norm__HeadVar__2_2;

#line 132 "term_norm.m"
    {
#line 132 "term_norm.m"
      return transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_norm__Cast_HeadVar2_4)));
    }
#line 132 "term_norm.m"
    return transform_hlds__term_norm__succeeded;
#line 132 "term_norm.m"
  }
#line 132 "term_norm.m"
}

#line 134 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm____Compare____weight_info_0_0(
#line 134 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3)
#line 134 "term_norm.m"
{
#line 134 "term_norm.m"
  {
#line 134 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 134 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastX_9 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;
#line 134 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastY_10 = (MR_Integer) transform_hlds__term_norm__HeadVar__3_3;

#line 134 "term_norm.m"
    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_9 == transform_hlds__term_norm__CastY_10);
#line 134 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 1523 "transform_hlds.term_norm.c"
      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
#line 134 "term_norm.m"
    else
#line 134 "term_norm.m"
      {
#line 134 "term_norm.m"
        MR_Integer transform_hlds__term_norm__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
#line 134 "term_norm.m"
        MR_Integer transform_hlds__term_norm__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));
#line 134 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 1)));
#line 134 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_8_8;

#line 134 "term_norm.m"
        {
#line 134 "term_norm.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_norm__V_8_8, transform_hlds__term_norm__V_4_4, transform_hlds__term_norm__V_6_6);
        }
#line 1545 "transform_hlds.term_norm.c"
        transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__V_8_8 == (MR_Integer) 0);
#line 134 "term_norm.m"
        transform_hlds__term_norm__succeeded = !(transform_hlds__term_norm__succeeded);
#line 134 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 134 "term_norm.m"
          *transform_hlds__term_norm__HeadVar__1_1 = transform_hlds__term_norm__V_8_8;
#line 134 "term_norm.m"
        else
#line 134 "term_norm.m"
          {
#line 134 "term_norm.m"
            {
#line 134 "term_norm.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_2[1], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__V_5_5)), ((MR_Box) (transform_hlds__term_norm__V_7_7)));
#line 134 "term_norm.m"
              return;
            }
#line 134 "term_norm.m"
          }
#line 134 "term_norm.m"
      }
#line 134 "term_norm.m"
  }
#line 134 "term_norm.m"
}

#line 134 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm____Unify____weight_info_0_0(
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 134 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
#line 134 "term_norm.m"
{
#line 134 "term_norm.m"
  {
#line 134 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 134 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastX_7 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
#line 134 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastY_8 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

#line 134 "term_norm.m"
    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_7 == transform_hlds__term_norm__CastY_8);
#line 134 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 134 "term_norm.m"
      transform_hlds__term_norm__succeeded = MR_TRUE;
#line 134 "term_norm.m"
    else
#line 134 "term_norm.m"
      {
#line 134 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeInfo_9_9;
#line 134 "term_norm.m"
        MR_Integer transform_hlds__term_norm__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
#line 134 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
#line 134 "term_norm.m"
        MR_Integer transform_hlds__term_norm__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));

#line 1612 "transform_hlds.term_norm.c"
        transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__V_3_3 == transform_hlds__term_norm__V_5_5);
#line 134 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 134 "term_norm.m"
          {
#line 1618 "transform_hlds.term_norm.c"
            transform_hlds__term_norm__TypeInfo_9_9 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[1];
#line 1620 "transform_hlds.term_norm.c"
            {
#line 1622 "transform_hlds.term_norm.c"
              return transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_norm__TypeInfo_9_9, ((MR_Box) (transform_hlds__term_norm__V_4_4)), ((MR_Box) (transform_hlds__term_norm__V_6_6)));
            }
#line 134 "term_norm.m"
          }
#line 134 "term_norm.m"
      }
#line 134 "term_norm.m"
    return transform_hlds__term_norm__succeeded;
#line 134 "term_norm.m"
  }
#line 134 "term_norm.m"
}

#line 95 "term_norm.m"
void MR_CALL 
transform_hlds__term_norm____Compare____functor_info_0_0(
#line 95 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__1_1,
#line 95 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 95 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3)
#line 95 "term_norm.m"
{
#line 95 "term_norm.m"
  {
#line 95 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 95 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastX_20 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;
#line 95 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastY_21 = (MR_Integer) transform_hlds__term_norm__HeadVar__3_3;

#line 95 "term_norm.m"
    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_20 == transform_hlds__term_norm__CastY_21);
#line 95 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 1660 "transform_hlds.term_norm.c"
      *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "term_norm.m"
    else
#line 95 "term_norm.m"
      if ((transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "term_norm.m"
          *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "term_norm.m"
        else
#line 95 "term_norm.m"
          if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 95 "term_norm.m"
            *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "term_norm.m"
          else
#line 95 "term_norm.m"
            if (((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1680 "transform_hlds.term_norm.c"
              *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "term_norm.m"
            else
#line 1684 "transform_hlds.term_norm.c"
              *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "term_norm.m"
      else
#line 95 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 95 "term_norm.m"
          if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "term_norm.m"
            *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "term_norm.m"
          else
#line 95 "term_norm.m"
            if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 95 "term_norm.m"
              *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "term_norm.m"
            else
#line 95 "term_norm.m"
              if (((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1704 "transform_hlds.term_norm.c"
                *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "term_norm.m"
              else
#line 1708 "transform_hlds.term_norm.c"
                *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "term_norm.m"
        else
#line 95 "term_norm.m"
          if (((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 95 "term_norm.m"
            {
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));

#line 95 "term_norm.m"
              if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1721 "transform_hlds.term_norm.c"
                *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "term_norm.m"
              else
#line 95 "term_norm.m"
                if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1727 "transform_hlds.term_norm.c"
                  *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "term_norm.m"
                else
#line 95 "term_norm.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 95 "term_norm.m"
                    {
#line 95 "term_norm.m"
                      MR_Word transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));

#line 95 "term_norm.m"
                      {
#line 95 "term_norm.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__V_24_24)), ((MR_Box) (transform_hlds__term_norm__V_11_11)));
#line 95 "term_norm.m"
                        return;
                      }
#line 95 "term_norm.m"
                    }
#line 95 "term_norm.m"
                  else
#line 1749 "transform_hlds.term_norm.c"
                    *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "term_norm.m"
            }
#line 95 "term_norm.m"
          else
#line 95 "term_norm.m"
            {
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));

#line 95 "term_norm.m"
              if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1762 "transform_hlds.term_norm.c"
                *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "term_norm.m"
              else
#line 95 "term_norm.m"
                if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1768 "transform_hlds.term_norm.c"
                  *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "term_norm.m"
                else
#line 95 "term_norm.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1774 "transform_hlds.term_norm.c"
                    *transform_hlds__term_norm__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "term_norm.m"
                  else
#line 95 "term_norm.m"
                    {
#line 95 "term_norm.m"
                      MR_Word transform_hlds__term_norm__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));

#line 95 "term_norm.m"
                      {
#line 95 "term_norm.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__HeadVar__1_1, ((MR_Box) (transform_hlds__term_norm__V_25_25)), ((MR_Box) (transform_hlds__term_norm__V_19_19)));
#line 95 "term_norm.m"
                        return;
                      }
#line 95 "term_norm.m"
                    }
#line 95 "term_norm.m"
            }
#line 95 "term_norm.m"
  }
#line 95 "term_norm.m"
}

#line 95 "term_norm.m"
MR_bool MR_CALL 
transform_hlds__term_norm____Unify____functor_info_0_0(
#line 95 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 95 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
#line 95 "term_norm.m"
{
#line 95 "term_norm.m"
  {
#line 95 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 95 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastX_11 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
#line 95 "term_norm.m"
    MR_Integer transform_hlds__term_norm__CastY_12 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

#line 95 "term_norm.m"
    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastX_11 == transform_hlds__term_norm__CastY_12);
#line 95 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 95 "term_norm.m"
      transform_hlds__term_norm__succeeded = MR_TRUE;
#line 95 "term_norm.m"
    else
#line 95 "term_norm.m"
      if ((transform_hlds__term_norm__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "term_norm.m"
        {
#line 95 "term_norm.m"
          MR_Integer transform_hlds__term_norm__CastX_3 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
#line 95 "term_norm.m"
          MR_Integer transform_hlds__term_norm__CastY_4 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

#line 95 "term_norm.m"
          transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastY_4 == transform_hlds__term_norm__CastX_3);
#line 95 "term_norm.m"
        }
#line 95 "term_norm.m"
      else
#line 95 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 95 "term_norm.m"
          {
#line 95 "term_norm.m"
            MR_Integer transform_hlds__term_norm__CastX_5 = (MR_Integer) transform_hlds__term_norm__HeadVar__1_1;
#line 95 "term_norm.m"
            MR_Integer transform_hlds__term_norm__CastY_6 = (MR_Integer) transform_hlds__term_norm__HeadVar__2_2;

#line 95 "term_norm.m"
            transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__CastY_6 == transform_hlds__term_norm__CastX_5);
#line 95 "term_norm.m"
          }
#line 95 "term_norm.m"
        else
#line 95 "term_norm.m"
          if (((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 95 "term_norm.m"
            {
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__TypeInfo_13_13;
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_8_8;

#line 95 "term_norm.m"
              transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 95 "term_norm.m"
              if (transform_hlds__term_norm__succeeded)
#line 95 "term_norm.m"
                {
#line 95 "term_norm.m"
                  transform_hlds__term_norm__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 1874 "transform_hlds.term_norm.c"
                  transform_hlds__term_norm__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_norm_scalar_common_1[2];
#line 1876 "transform_hlds.term_norm.c"
                  {
#line 1878 "transform_hlds.term_norm.c"
                    return transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_norm__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_norm__V_7_7)), ((MR_Box) (transform_hlds__term_norm__V_8_8)));
                  }
#line 95 "term_norm.m"
                }
#line 95 "term_norm.m"
            }
#line 95 "term_norm.m"
          else
#line 95 "term_norm.m"
            {
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__TypeInfo_14_14;
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_10_10;

#line 95 "term_norm.m"
              transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 95 "term_norm.m"
              if (transform_hlds__term_norm__succeeded)
#line 95 "term_norm.m"
                {
#line 95 "term_norm.m"
                  transform_hlds__term_norm__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 1904 "transform_hlds.term_norm.c"
                  transform_hlds__term_norm__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_norm_scalar_common_1[2];
#line 1906 "transform_hlds.term_norm.c"
                  {
#line 1908 "transform_hlds.term_norm.c"
                    return transform_hlds__term_norm__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_norm__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_norm__V_9_9)), ((MR_Box) (transform_hlds__term_norm__V_10_10)));
                  }
#line 95 "term_norm.m"
                }
#line 95 "term_norm.m"
            }
#line 95 "term_norm.m"
    return transform_hlds__term_norm__succeeded;
#line 95 "term_norm.m"
  }
#line 95 "term_norm.m"
}

#line 432 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
#line 432 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
#line 432 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5,
#line 432 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_6)
#line 432 "term_norm.m"
{
#line 436 "term_norm.m"
  while (MR_TRUE)
#line 436 "term_norm.m"
    {
#line 436 "term_norm.m"
      /* tailcall optimized into a loop */
#line 436 "term_norm.m"
      {
#line 436 "term_norm.m"
        MR_bool transform_hlds__term_norm__succeeded;

#line 436 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "term_norm.m"
          if ((transform_hlds__term_norm__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "term_norm.m"
            *transform_hlds__term_norm__STATE_VARIABLE_Gamma_6 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
#line 436 "term_norm.m"
          else
#line 439 "term_norm.m"
            {
#line 440 "term_norm.m"
              {
#line 440 "term_norm.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_norm", (MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
#line 440 "term_norm.m"
                return;
              }
#line 439 "term_norm.m"
            }
#line 436 "term_norm.m"
        else
#line 436 "term_norm.m"
          {
#line 436 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 1)));
#line 436 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));

#line 436 "term_norm.m"
            if ((transform_hlds__term_norm__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "term_norm.m"
              {
#line 443 "term_norm.m"
                {
#line 443 "term_norm.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_norm", (MR_String) "predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", (MR_String) "mismatched lists");
#line 443 "term_norm.m"
                  return;
                }
#line 442 "term_norm.m"
              }
#line 436 "term_norm.m"
            else
#line 445 "term_norm.m"
              {
#line 445 "term_norm.m"
                MR_Word transform_hlds__term_norm__UseArg_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 0)));
#line 445 "term_norm.m"
                MR_Word transform_hlds__term_norm__UseArgs_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 1)));
#line 445 "term_norm.m"
                MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49;

#line 448 "term_norm.m"
                if ((transform_hlds__term_norm__UseArg_36 == (MR_Integer) 0))
#line 447 "term_norm.m"
                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
#line 448 "term_norm.m"
                else
#line 449 "term_norm.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_norm__V_52_52)) == (MR_mktag((MR_Integer) 0))))
#line 460 "term_norm.m"
                    {
#line 460 "term_norm.m"
                      MR_Integer transform_hlds__term_norm__ArgConstNum_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_52_52, (MR_Integer) 0)));
#line 460 "term_norm.m"
                      MR_Word transform_hlds__term_norm__ConstStruct_59;
#line 460 "term_norm.m"
                      MR_Word transform_hlds__term_norm__ConsId_60;
#line 460 "term_norm.m"
                      MR_Word transform_hlds__term_norm__Args_61;
#line 460 "term_norm.m"
                      MR_Word transform_hlds__term_norm__Type_62;
#line 460 "term_norm.m"
                      MR_Word transform_hlds__term_norm__TypeCtor_64;
#line 421 "term_norm.m"
                      MR_Word transform_hlds__term_norm__V_63_63;
#line 428 "term_norm.m"
                      MR_Word transform_hlds__term_norm__WeightInfo_65;
#line 235 "term_norm.m"
                      MR_Word transform_hlds__term_norm__WeightInfo0_74;
#line 233 "term_norm.m"
                      MR_Word transform_hlds__term_norm__V_77_77;
#line 233 "term_norm.m"
                      MR_Box transform_hlds__term_norm__conv0_WeightInfo0_74;

#line 420 "term_norm.m"
                      {
#line 420 "term_norm.m"
                        hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_45, &transform_hlds__term_norm__ConstStruct_59);
                      }
#line 421 "term_norm.m"
                      transform_hlds__term_norm__ConsId_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 0)));
#line 421 "term_norm.m"
                      transform_hlds__term_norm__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 1)));
#line 421 "term_norm.m"
                      transform_hlds__term_norm__Type_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 2)));
#line 421 "term_norm.m"
                      transform_hlds__term_norm__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_59, (MR_Integer) 3)));
#line 422 "term_norm.m"
                      {
#line 422 "term_norm.m"
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_62, &transform_hlds__term_norm__TypeCtor_64);
                      }
#line 233 "term_norm.m"
                      {
#line 233 "term_norm.m"
                        transform_hlds__term_norm__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_77_77, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_64));
#line 233 "term_norm.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_77_77, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_60));
#line 233 "term_norm.m"
                      }
#line 233 "term_norm.m"
                      {
#line 233 "term_norm.m"
                        transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__HeadVar__2_2, ((MR_Box) (transform_hlds__term_norm__V_77_77)), &transform_hlds__term_norm__conv0_WeightInfo0_74);
                      }
#line 233 "term_norm.m"
                      if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
                        {
#line 233 "term_norm.m"
                          transform_hlds__term_norm__WeightInfo0_74 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_74);
#line 233 "term_norm.m"
                          transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
                        }
#line 235 "term_norm.m"
                      if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
                        {
#line 234 "term_norm.m"
                          transform_hlds__term_norm__WeightInfo_65 = transform_hlds__term_norm__WeightInfo0_74;
#line 234 "term_norm.m"
                          transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
                        }
#line 235 "term_norm.m"
                      else
#line 238 "term_norm.m"
                        {
#line 238 "term_norm.m"
                          MR_Word transform_hlds__term_norm__TypeCtorInfo_7_84;
#line 238 "term_norm.m"
                          MR_Integer transform_hlds__term_norm__Arity_76;
#line 238 "term_norm.m"
                          MR_Word transform_hlds__term_norm__ArgInfos_82;
#line 238 "term_norm.m"
                          MR_Word transform_hlds__term_norm__V_83_83;
#line 236 "term_norm.m"
                          MR_Word transform_hlds__term_norm__V_75_75;

#line 235 "term_norm.m"
                          {
#line 235 "term_norm.m"
                            transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_64);
                          }
#line 238 "term_norm.m"
                          if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
                            {
#line 236 "term_norm.m"
                              transform_hlds__term_norm__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_64, (MR_Integer) 0)));
#line 236 "term_norm.m"
                              transform_hlds__term_norm__Arity_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_64, (MR_Integer) 1)));
#line 202 "term_norm.m"
                              transform_hlds__term_norm__V_83_83 = (MR_Integer) 1;
#line 2118 "transform_hlds.term_norm.c"
                              transform_hlds__term_norm__TypeCtorInfo_7_84 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
                              {
#line 202 "term_norm.m"
                                mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_84, transform_hlds__term_norm__Arity_76, ((MR_Box) (transform_hlds__term_norm__V_83_83)), &transform_hlds__term_norm__ArgInfos_82);
                              }
#line 199 "term_norm.m"
                              {
#line 199 "term_norm.m"
                                transform_hlds__term_norm__WeightInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_76));
#line 199 "term_norm.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_82));
#line 199 "term_norm.m"
                              }
#line 199 "term_norm.m"
                              transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
                            }
#line 238 "term_norm.m"
                        }
#line 428 "term_norm.m"
                      if (transform_hlds__term_norm__succeeded)
#line 424 "term_norm.m"
                        {
#line 424 "term_norm.m"
                          MR_Integer transform_hlds__term_norm__ConsIdGamma_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, (MR_Integer) 0)));
#line 424 "term_norm.m"
                          MR_Word transform_hlds__term_norm__UseArgs_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_65, (MR_Integer) 1)));
#line 424 "term_norm.m"
                          MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_68 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5 + transform_hlds__term_norm__ConsIdGamma_66);

#line 426 "term_norm.m"
                          {
#line 426 "term_norm.m"
                            transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__HeadVar__2_2, transform_hlds__term_norm__Args_61, transform_hlds__term_norm__UseArgs_67, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_68, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49);
                          }
#line 424 "term_norm.m"
                        }
#line 428 "term_norm.m"
                      else
#line 426 "term_norm.m"
                        transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
#line 460 "term_norm.m"
                    }
#line 449 "term_norm.m"
                  else
#line 451 "term_norm.m"
                    {
#line 451 "term_norm.m"
                      MR_Word transform_hlds__term_norm__ConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__V_52_52, (MR_Integer) 0)));
#line 451 "term_norm.m"
                      MR_Word transform_hlds__term_norm__Type_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__V_52_52, (MR_Integer) 1)));
#line 451 "term_norm.m"
                      MR_Word transform_hlds__term_norm__TypeCtor_41;
#line 456 "term_norm.m"
                      MR_Word transform_hlds__term_norm__WeightInfo_42;

#line 452 "term_norm.m"
                      {
#line 452 "term_norm.m"
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_40, &transform_hlds__term_norm__TypeCtor_41);
                      }
#line 453 "term_norm.m"
                      {
#line 453 "term_norm.m"
                        transform_hlds__term_norm__succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(transform_hlds__term_norm__HeadVar__2_2, transform_hlds__term_norm__TypeCtor_41, transform_hlds__term_norm__ConsId_39, &transform_hlds__term_norm__WeightInfo_42);
                      }
#line 456 "term_norm.m"
                      if (transform_hlds__term_norm__succeeded)
#line 454 "term_norm.m"
                        {
#line 454 "term_norm.m"
                          MR_Integer transform_hlds__term_norm__ConsIdGamma_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_42, (MR_Integer) 0)));
#line 454 "term_norm.m"
                          MR_Word transform_hlds__term_norm__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_42, (MR_Integer) 1)));

#line 455 "term_norm.m"
                          transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5 + transform_hlds__term_norm__ConsIdGamma_43);
#line 454 "term_norm.m"
                        }
#line 456 "term_norm.m"
                      else
#line 455 "term_norm.m"
                        transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5;
#line 451 "term_norm.m"
                    }
#line 465 "term_norm.m"
                /* direct tailcall eliminated */
#line 465 "term_norm.m"
                {
#line 465 "term_norm.m"
                  MR_Word transform_hlds__term_norm__HeadVar__3__tmp_copy_3 = transform_hlds__term_norm__V_51_51;
#line 465 "term_norm.m"
                  MR_Word transform_hlds__term_norm__HeadVar__4__tmp_copy_4 = transform_hlds__term_norm__UseArgs_37;
#line 465 "term_norm.m"
                  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_5 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_49_49;

#line 465 "term_norm.m"
                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_5 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_5;
#line 465 "term_norm.m"
                  transform_hlds__term_norm__HeadVar__4_4 = transform_hlds__term_norm__HeadVar__4__tmp_copy_4;
#line 465 "term_norm.m"
                  transform_hlds__term_norm__HeadVar__3_3 = transform_hlds__term_norm__HeadVar__3__tmp_copy_3;
#line 465 "term_norm.m"
                }
#line 465 "term_norm.m"
                continue;
#line 445 "term_norm.m"
              }
#line 436 "term_norm.m"
          }
#line 436 "term_norm.m"
      }
#line 436 "term_norm.m"
      break;
#line 436 "term_norm.m"
    }
#line 432 "term_norm.m"
}

#line 415 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(
#line 415 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
#line 415 "term_norm.m"
  MR_Word transform_hlds__term_norm__WeightMap_7,
#line 415 "term_norm.m"
  MR_Integer transform_hlds__term_norm__ConstNum_8,
#line 415 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
#line 415 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20)
#line 415 "term_norm.m"
{
#line 419 "term_norm.m"
  {
#line 419 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 419 "term_norm.m"
    MR_Word transform_hlds__term_norm__ConstStruct_10;
#line 419 "term_norm.m"
    MR_Word transform_hlds__term_norm__ConsId_11;
#line 419 "term_norm.m"
    MR_Word transform_hlds__term_norm__Args_12;
#line 419 "term_norm.m"
    MR_Word transform_hlds__term_norm__Type_13;
#line 419 "term_norm.m"
    MR_Word transform_hlds__term_norm__TypeCtor_15;
#line 421 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_14_14;
#line 428 "term_norm.m"
    MR_Word transform_hlds__term_norm__WeightInfo_16;
#line 235 "term_norm.m"
    MR_Word transform_hlds__term_norm__WeightInfo0_27;
#line 233 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_30_30;
#line 233 "term_norm.m"
    MR_Box transform_hlds__term_norm__conv0_WeightInfo0_27;

#line 420 "term_norm.m"
    {
#line 420 "term_norm.m"
      hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__ConstNum_8, &transform_hlds__term_norm__ConstStruct_10);
    }
#line 421 "term_norm.m"
    transform_hlds__term_norm__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 0)));
#line 421 "term_norm.m"
    transform_hlds__term_norm__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 1)));
#line 421 "term_norm.m"
    transform_hlds__term_norm__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 2)));
#line 421 "term_norm.m"
    transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 3)));
#line 422 "term_norm.m"
    {
#line 422 "term_norm.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_13, &transform_hlds__term_norm__TypeCtor_15);
    }
#line 233 "term_norm.m"
    {
#line 233 "term_norm.m"
      transform_hlds__term_norm__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_15));
#line 233 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_11));
#line 233 "term_norm.m"
    }
#line 233 "term_norm.m"
    {
#line 233 "term_norm.m"
      transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_7, ((MR_Box) (transform_hlds__term_norm__V_30_30)), &transform_hlds__term_norm__conv0_WeightInfo0_27);
    }
#line 233 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
      {
#line 233 "term_norm.m"
        transform_hlds__term_norm__WeightInfo0_27 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_27);
#line 233 "term_norm.m"
        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
      }
#line 235 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
      {
#line 234 "term_norm.m"
        transform_hlds__term_norm__WeightInfo_16 = transform_hlds__term_norm__WeightInfo0_27;
#line 234 "term_norm.m"
        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
      }
#line 235 "term_norm.m"
    else
#line 238 "term_norm.m"
      {
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeCtorInfo_7_37;
#line 238 "term_norm.m"
        MR_Integer transform_hlds__term_norm__Arity_29;
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__ArgInfos_35;
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_36_36;
#line 236 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_28_28;

#line 235 "term_norm.m"
        {
#line 235 "term_norm.m"
          transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_15);
        }
#line 238 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
          {
#line 236 "term_norm.m"
            transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 0)));
#line 236 "term_norm.m"
            transform_hlds__term_norm__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 1)));
#line 202 "term_norm.m"
            transform_hlds__term_norm__V_36_36 = (MR_Integer) 1;
#line 2364 "transform_hlds.term_norm.c"
            transform_hlds__term_norm__TypeCtorInfo_7_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
            {
#line 202 "term_norm.m"
              mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_37, transform_hlds__term_norm__Arity_29, ((MR_Box) (transform_hlds__term_norm__V_36_36)), &transform_hlds__term_norm__ArgInfos_35);
            }
#line 199 "term_norm.m"
            {
#line 199 "term_norm.m"
              transform_hlds__term_norm__WeightInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_29));
#line 199 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_35));
#line 199 "term_norm.m"
            }
#line 199 "term_norm.m"
            transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
          }
#line 238 "term_norm.m"
      }
#line 428 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 424 "term_norm.m"
      {
#line 424 "term_norm.m"
        MR_Integer transform_hlds__term_norm__ConsIdGamma_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 0)));
#line 424 "term_norm.m"
        MR_Word transform_hlds__term_norm__UseArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 1)));
#line 424 "term_norm.m"
        MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19 + transform_hlds__term_norm__ConsIdGamma_17);

#line 426 "term_norm.m"
        {
#line 426 "term_norm.m"
          transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__WeightMap_7, transform_hlds__term_norm__Args_12, transform_hlds__term_norm__UseArgs_18, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21, transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);
#line 426 "term_norm.m"
          return;
        }
#line 424 "term_norm.m"
      }
#line 428 "term_norm.m"
    else
#line 426 "term_norm.m"
      *transform_hlds__term_norm__STATE_VARIABLE_Gamma_20 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19;
#line 419 "term_norm.m"
  }
#line 415 "term_norm.m"
}

#line 392 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(
#line 392 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 392 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 392 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__3_3,
#line 392 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4,
#line 392 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_5)
#line 392 "term_norm.m"
{
#line 395 "term_norm.m"
  while (MR_TRUE)
#line 395 "term_norm.m"
    {
#line 395 "term_norm.m"
      /* tailcall optimized into a loop */
#line 395 "term_norm.m"
      {
#line 395 "term_norm.m"
        MR_bool transform_hlds__term_norm__succeeded;

#line 395 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "term_norm.m"
          *transform_hlds__term_norm__STATE_VARIABLE_Gamma_5 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4;
#line 395 "term_norm.m"
        else
#line 397 "term_norm.m"
          {
#line 397 "term_norm.m"
            MR_Word transform_hlds__term_norm__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 0)));
#line 397 "term_norm.m"
            MR_Word transform_hlds__term_norm__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, (MR_Integer) 1)));
#line 397 "term_norm.m"
            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26;

#line 407 "term_norm.m"
            if (((MR_tag((MR_Word) transform_hlds__term_norm__Arg_13)) == (MR_mktag((MR_Integer) 0))))
#line 408 "term_norm.m"
              {
#line 408 "term_norm.m"
                MR_Integer transform_hlds__term_norm__ArgConstNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Arg_13, (MR_Integer) 0)));
#line 408 "term_norm.m"
                MR_Word transform_hlds__term_norm__ConstStruct_34;
#line 408 "term_norm.m"
                MR_Word transform_hlds__term_norm__ConsId_35;
#line 408 "term_norm.m"
                MR_Word transform_hlds__term_norm__Args_36;
#line 408 "term_norm.m"
                MR_Word transform_hlds__term_norm__Type_37;
#line 408 "term_norm.m"
                MR_Word transform_hlds__term_norm__TypeCtor_39;
#line 381 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_38_38;
#line 388 "term_norm.m"
                MR_Word transform_hlds__term_norm__WeightInfo_40;
#line 235 "term_norm.m"
                MR_Word transform_hlds__term_norm__WeightInfo0_49;
#line 233 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_52_52;
#line 233 "term_norm.m"
                MR_Box transform_hlds__term_norm__conv0_WeightInfo0_49;

#line 380 "term_norm.m"
                {
#line 380 "term_norm.m"
                  hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_22, &transform_hlds__term_norm__ConstStruct_34);
                }
#line 381 "term_norm.m"
                transform_hlds__term_norm__ConsId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 0)));
#line 381 "term_norm.m"
                transform_hlds__term_norm__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 1)));
#line 381 "term_norm.m"
                transform_hlds__term_norm__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 2)));
#line 381 "term_norm.m"
                transform_hlds__term_norm__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_34, (MR_Integer) 3)));
#line 382 "term_norm.m"
                {
#line 382 "term_norm.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_37, &transform_hlds__term_norm__TypeCtor_39);
                }
#line 233 "term_norm.m"
                {
#line 233 "term_norm.m"
                  transform_hlds__term_norm__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_52_52, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_39));
#line 233 "term_norm.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_52_52, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_35));
#line 233 "term_norm.m"
                }
#line 233 "term_norm.m"
                {
#line 233 "term_norm.m"
                  transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__HeadVar__2_2, ((MR_Box) (transform_hlds__term_norm__V_52_52)), &transform_hlds__term_norm__conv0_WeightInfo0_49);
                }
#line 233 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
                  {
#line 233 "term_norm.m"
                    transform_hlds__term_norm__WeightInfo0_49 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_49);
#line 233 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
                  }
#line 235 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
                  {
#line 234 "term_norm.m"
                    transform_hlds__term_norm__WeightInfo_40 = transform_hlds__term_norm__WeightInfo0_49;
#line 234 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
                  }
#line 235 "term_norm.m"
                else
#line 238 "term_norm.m"
                  {
#line 238 "term_norm.m"
                    MR_Word transform_hlds__term_norm__TypeCtorInfo_7_59;
#line 238 "term_norm.m"
                    MR_Integer transform_hlds__term_norm__Arity_51;
#line 238 "term_norm.m"
                    MR_Word transform_hlds__term_norm__ArgInfos_57;
#line 238 "term_norm.m"
                    MR_Word transform_hlds__term_norm__V_58_58;
#line 236 "term_norm.m"
                    MR_Word transform_hlds__term_norm__V_50_50;

#line 235 "term_norm.m"
                    {
#line 235 "term_norm.m"
                      transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_39);
                    }
#line 238 "term_norm.m"
                    if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
                      {
#line 236 "term_norm.m"
                        transform_hlds__term_norm__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_39, (MR_Integer) 0)));
#line 236 "term_norm.m"
                        transform_hlds__term_norm__Arity_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_39, (MR_Integer) 1)));
#line 202 "term_norm.m"
                        transform_hlds__term_norm__V_58_58 = (MR_Integer) 1;
#line 2567 "transform_hlds.term_norm.c"
                        transform_hlds__term_norm__TypeCtorInfo_7_59 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
                        {
#line 202 "term_norm.m"
                          mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_59, transform_hlds__term_norm__Arity_51, ((MR_Box) (transform_hlds__term_norm__V_58_58)), &transform_hlds__term_norm__ArgInfos_57);
                        }
#line 199 "term_norm.m"
                        {
#line 199 "term_norm.m"
                          transform_hlds__term_norm__WeightInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_51));
#line 199 "term_norm.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_57));
#line 199 "term_norm.m"
                        }
#line 199 "term_norm.m"
                        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
                      }
#line 238 "term_norm.m"
                  }
#line 388 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 384 "term_norm.m"
                  {
#line 384 "term_norm.m"
                    MR_Integer transform_hlds__term_norm__ConsIdGamma_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, (MR_Integer) 0)));
#line 384 "term_norm.m"
                    MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_43 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4 + transform_hlds__term_norm__ConsIdGamma_41);
#line 384 "term_norm.m"
                    MR_Word transform_hlds__term_norm__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_40, (MR_Integer) 1)));

#line 386 "term_norm.m"
                    {
#line 386 "term_norm.m"
                      transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__HeadVar__2_2, transform_hlds__term_norm__Args_36, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_43, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26);
                    }
#line 384 "term_norm.m"
                  }
#line 388 "term_norm.m"
                else
#line 386 "term_norm.m"
                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4;
#line 408 "term_norm.m"
              }
#line 407 "term_norm.m"
            else
#line 399 "term_norm.m"
              {
#line 399 "term_norm.m"
                MR_Word transform_hlds__term_norm__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__Arg_13, (MR_Integer) 0)));
#line 399 "term_norm.m"
                MR_Word transform_hlds__term_norm__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__Arg_13, (MR_Integer) 1)));
#line 399 "term_norm.m"
                MR_Word transform_hlds__term_norm__TypeCtor_18;
#line 404 "term_norm.m"
                MR_Word transform_hlds__term_norm__WeightInfo_19;
#line 235 "term_norm.m"
                MR_Word transform_hlds__term_norm__WeightInfo0_64;
#line 233 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_67_67;
#line 233 "term_norm.m"
                MR_Box transform_hlds__term_norm__conv1_WeightInfo0_64;

#line 400 "term_norm.m"
                {
#line 400 "term_norm.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_17, &transform_hlds__term_norm__TypeCtor_18);
                }
#line 233 "term_norm.m"
                {
#line 233 "term_norm.m"
                  transform_hlds__term_norm__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_67_67, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_18));
#line 233 "term_norm.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_67_67, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_16));
#line 233 "term_norm.m"
                }
#line 233 "term_norm.m"
                {
#line 233 "term_norm.m"
                  transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__HeadVar__2_2, ((MR_Box) (transform_hlds__term_norm__V_67_67)), &transform_hlds__term_norm__conv1_WeightInfo0_64);
                }
#line 233 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
                  {
#line 233 "term_norm.m"
                    transform_hlds__term_norm__WeightInfo0_64 = ((MR_Word) transform_hlds__term_norm__conv1_WeightInfo0_64);
#line 233 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
                  }
#line 235 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
                  {
#line 234 "term_norm.m"
                    transform_hlds__term_norm__WeightInfo_19 = transform_hlds__term_norm__WeightInfo0_64;
#line 234 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
                  }
#line 235 "term_norm.m"
                else
#line 238 "term_norm.m"
                  {
#line 238 "term_norm.m"
                    MR_Word transform_hlds__term_norm__TypeCtorInfo_7_74;
#line 238 "term_norm.m"
                    MR_Integer transform_hlds__term_norm__Arity_66;
#line 238 "term_norm.m"
                    MR_Word transform_hlds__term_norm__ArgInfos_72;
#line 238 "term_norm.m"
                    MR_Word transform_hlds__term_norm__V_73_73;
#line 236 "term_norm.m"
                    MR_Word transform_hlds__term_norm__V_65_65;

#line 235 "term_norm.m"
                    {
#line 235 "term_norm.m"
                      transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_18);
                    }
#line 238 "term_norm.m"
                    if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
                      {
#line 236 "term_norm.m"
                        transform_hlds__term_norm__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_18, (MR_Integer) 0)));
#line 236 "term_norm.m"
                        transform_hlds__term_norm__Arity_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_18, (MR_Integer) 1)));
#line 202 "term_norm.m"
                        transform_hlds__term_norm__V_73_73 = (MR_Integer) 1;
#line 2703 "transform_hlds.term_norm.c"
                        transform_hlds__term_norm__TypeCtorInfo_7_74 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
                        {
#line 202 "term_norm.m"
                          mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_74, transform_hlds__term_norm__Arity_66, ((MR_Box) (transform_hlds__term_norm__V_73_73)), &transform_hlds__term_norm__ArgInfos_72);
                        }
#line 199 "term_norm.m"
                        {
#line 199 "term_norm.m"
                          transform_hlds__term_norm__WeightInfo_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_66));
#line 199 "term_norm.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_72));
#line 199 "term_norm.m"
                        }
#line 199 "term_norm.m"
                        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
                      }
#line 238 "term_norm.m"
                  }
#line 404 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 402 "term_norm.m"
                  {
#line 402 "term_norm.m"
                    MR_Integer transform_hlds__term_norm__ConsIdGamma_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, (MR_Integer) 0)));
#line 402 "term_norm.m"
                    MR_Word transform_hlds__term_norm__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_19, (MR_Integer) 1)));

#line 403 "term_norm.m"
                    transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4 + transform_hlds__term_norm__ConsIdGamma_20);
#line 402 "term_norm.m"
                  }
#line 404 "term_norm.m"
                else
#line 403 "term_norm.m"
                  transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4;
#line 399 "term_norm.m"
              }
#line 412 "term_norm.m"
            /* direct tailcall eliminated */
#line 412 "term_norm.m"
            {
#line 412 "term_norm.m"
              MR_Word transform_hlds__term_norm__HeadVar__3__tmp_copy_3 = transform_hlds__term_norm__Args_14;
#line 412 "term_norm.m"
              MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_26_26;

#line 412 "term_norm.m"
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_4;
#line 412 "term_norm.m"
              transform_hlds__term_norm__HeadVar__3_3 = transform_hlds__term_norm__HeadVar__3__tmp_copy_3;
#line 412 "term_norm.m"
            }
#line 412 "term_norm.m"
            continue;
#line 397 "term_norm.m"
          }
#line 395 "term_norm.m"
      }
#line 395 "term_norm.m"
      break;
#line 395 "term_norm.m"
    }
#line 392 "term_norm.m"
}

#line 376 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(
#line 376 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConstStructDb_6,
#line 376 "term_norm.m"
  MR_Word transform_hlds__term_norm__WeightMap_7,
#line 376 "term_norm.m"
  MR_Integer transform_hlds__term_norm__ConstNum_8,
#line 376 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19,
#line 376 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_20)
#line 376 "term_norm.m"
{
#line 379 "term_norm.m"
  {
#line 379 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 379 "term_norm.m"
    MR_Word transform_hlds__term_norm__ConstStruct_10;
#line 379 "term_norm.m"
    MR_Word transform_hlds__term_norm__ConsId_11;
#line 379 "term_norm.m"
    MR_Word transform_hlds__term_norm__Args_12;
#line 379 "term_norm.m"
    MR_Word transform_hlds__term_norm__Type_13;
#line 379 "term_norm.m"
    MR_Word transform_hlds__term_norm__TypeCtor_15;
#line 381 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_14_14;
#line 388 "term_norm.m"
    MR_Word transform_hlds__term_norm__WeightInfo_16;
#line 235 "term_norm.m"
    MR_Word transform_hlds__term_norm__WeightInfo0_27;
#line 233 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_30_30;
#line 233 "term_norm.m"
    MR_Box transform_hlds__term_norm__conv0_WeightInfo0_27;

#line 380 "term_norm.m"
    {
#line 380 "term_norm.m"
      hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__ConstNum_8, &transform_hlds__term_norm__ConstStruct_10);
    }
#line 381 "term_norm.m"
    transform_hlds__term_norm__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 0)));
#line 381 "term_norm.m"
    transform_hlds__term_norm__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 1)));
#line 381 "term_norm.m"
    transform_hlds__term_norm__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 2)));
#line 381 "term_norm.m"
    transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_10, (MR_Integer) 3)));
#line 382 "term_norm.m"
    {
#line 382 "term_norm.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_norm__Type_13, &transform_hlds__term_norm__TypeCtor_15);
    }
#line 233 "term_norm.m"
    {
#line 233 "term_norm.m"
      transform_hlds__term_norm__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_15));
#line 233 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_30_30, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_11));
#line 233 "term_norm.m"
    }
#line 233 "term_norm.m"
    {
#line 233 "term_norm.m"
      transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_7, ((MR_Box) (transform_hlds__term_norm__V_30_30)), &transform_hlds__term_norm__conv0_WeightInfo0_27);
    }
#line 233 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
      {
#line 233 "term_norm.m"
        transform_hlds__term_norm__WeightInfo0_27 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_27);
#line 233 "term_norm.m"
        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
      }
#line 235 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
      {
#line 234 "term_norm.m"
        transform_hlds__term_norm__WeightInfo_16 = transform_hlds__term_norm__WeightInfo0_27;
#line 234 "term_norm.m"
        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
      }
#line 235 "term_norm.m"
    else
#line 238 "term_norm.m"
      {
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeCtorInfo_7_37;
#line 238 "term_norm.m"
        MR_Integer transform_hlds__term_norm__Arity_29;
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__ArgInfos_35;
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_36_36;
#line 236 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_28_28;

#line 235 "term_norm.m"
        {
#line 235 "term_norm.m"
          transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_15);
        }
#line 238 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
          {
#line 236 "term_norm.m"
            transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 0)));
#line 236 "term_norm.m"
            transform_hlds__term_norm__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_15, (MR_Integer) 1)));
#line 202 "term_norm.m"
            transform_hlds__term_norm__V_36_36 = (MR_Integer) 1;
#line 2896 "transform_hlds.term_norm.c"
            transform_hlds__term_norm__TypeCtorInfo_7_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
            {
#line 202 "term_norm.m"
              mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_37, transform_hlds__term_norm__Arity_29, ((MR_Box) (transform_hlds__term_norm__V_36_36)), &transform_hlds__term_norm__ArgInfos_35);
            }
#line 199 "term_norm.m"
            {
#line 199 "term_norm.m"
              transform_hlds__term_norm__WeightInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_29));
#line 199 "term_norm.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_35));
#line 199 "term_norm.m"
            }
#line 199 "term_norm.m"
            transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
          }
#line 238 "term_norm.m"
      }
#line 388 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 384 "term_norm.m"
      {
#line 384 "term_norm.m"
        MR_Integer transform_hlds__term_norm__ConsIdGamma_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 0)));
#line 384 "term_norm.m"
        MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19 + transform_hlds__term_norm__ConsIdGamma_17);
#line 384 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_16, (MR_Integer) 1)));

#line 386 "term_norm.m"
        {
#line 386 "term_norm.m"
          transform_hlds__term_norm__const_struct_count_cell_weights_args_5_p_0(transform_hlds__term_norm__ConstStructDb_6, transform_hlds__term_norm__WeightMap_7, transform_hlds__term_norm__Args_12, transform_hlds__term_norm__STATE_VARIABLE_Gamma_21_21, transform_hlds__term_norm__STATE_VARIABLE_Gamma_20);
#line 386 "term_norm.m"
          return;
        }
#line 384 "term_norm.m"
      }
#line 388 "term_norm.m"
    else
#line 386 "term_norm.m"
      *transform_hlds__term_norm__STATE_VARIABLE_Gamma_20 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_19;
#line 379 "term_norm.m"
  }
#line 376 "term_norm.m"
}

#line 363 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(
#line 363 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 363 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 363 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
#line 363 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4)
#line 363 "term_norm.m"
{
#line 366 "term_norm.m"
  while (MR_TRUE)
#line 366 "term_norm.m"
    {
#line 366 "term_norm.m"
      /* tailcall optimized into a loop */
#line 366 "term_norm.m"
      {
#line 366 "term_norm.m"
        MR_bool transform_hlds__term_norm__succeeded;

#line 366 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "term_norm.m"
          *transform_hlds__term_norm__STATE_VARIABLE_Gamma_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
#line 366 "term_norm.m"
        else
#line 367 "term_norm.m"
          {
#line 367 "term_norm.m"
            MR_Word transform_hlds__term_norm__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "term_norm.m"
            MR_Word transform_hlds__term_norm__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "term_norm.m"
            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

#line 370 "term_norm.m"
            if (((MR_tag((MR_Word) transform_hlds__term_norm__Arg_10)) == (MR_mktag((MR_Integer) 0))))
#line 371 "term_norm.m"
              {
#line 371 "term_norm.m"
                MR_Integer transform_hlds__term_norm__ArgConstNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Arg_10, (MR_Integer) 0)));
#line 371 "term_norm.m"
                MR_Word transform_hlds__term_norm__ConstStruct_25;
#line 371 "term_norm.m"
                MR_Word transform_hlds__term_norm__Args_27;
#line 371 "term_norm.m"
                MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30;
#line 371 "term_norm.m"
                MR_Integer transform_hlds__term_norm__V_31_31;
#line 359 "term_norm.m"
                MR_Word transform_hlds__term_norm___ConsId_26;
#line 359 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_28_28;
#line 359 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_29_29;

#line 358 "term_norm.m"
                {
#line 358 "term_norm.m"
                  hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_15, &transform_hlds__term_norm__ConstStruct_25);
                }
#line 359 "term_norm.m"
                transform_hlds__term_norm___ConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 0)));
#line 359 "term_norm.m"
                transform_hlds__term_norm__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 1)));
#line 359 "term_norm.m"
                transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 2)));
#line 359 "term_norm.m"
                transform_hlds__term_norm__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 3)));
#line 360 "term_norm.m"
                {
#line 360 "term_norm.m"
                  transform_hlds__term_norm__V_31_31 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, transform_hlds__term_norm__Args_27);
                }
#line 360 "term_norm.m"
                transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 + transform_hlds__term_norm__V_31_31);
#line 361 "term_norm.m"
                {
#line 361 "term_norm.m"
                  transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__Args_27, transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18);
                }
#line 371 "term_norm.m"
              }
#line 370 "term_norm.m"
            else
#line 369 "term_norm.m"
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
#line 374 "term_norm.m"
            /* direct tailcall eliminated */
#line 374 "term_norm.m"
            {
#line 374 "term_norm.m"
              MR_Word transform_hlds__term_norm__HeadVar__2__tmp_copy_2 = transform_hlds__term_norm__Args_11;
#line 374 "term_norm.m"
              MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

#line 374 "term_norm.m"
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3;
#line 374 "term_norm.m"
              transform_hlds__term_norm__HeadVar__2_2 = transform_hlds__term_norm__HeadVar__2__tmp_copy_2;
#line 374 "term_norm.m"
            }
#line 374 "term_norm.m"
            continue;
#line 367 "term_norm.m"
          }
#line 366 "term_norm.m"
      }
#line 366 "term_norm.m"
      break;
#line 366 "term_norm.m"
    }
#line 363 "term_norm.m"
}

#line 354 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(
#line 354 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConstStructDb_5,
#line 354 "term_norm.m"
  MR_Integer transform_hlds__term_norm__ConstNum_6,
#line 354 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_13,
#line 354 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_14)
#line 354 "term_norm.m"
{
#line 357 "term_norm.m"
  {
#line 357 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 357 "term_norm.m"
    MR_Word transform_hlds__term_norm__ConstStruct_8;
#line 357 "term_norm.m"
    MR_Word transform_hlds__term_norm__Args_10;
#line 357 "term_norm.m"
    MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_15;
#line 357 "term_norm.m"
    MR_Integer transform_hlds__term_norm__V_16_16;
#line 359 "term_norm.m"
    MR_Word transform_hlds__term_norm___ConsId_9;
#line 359 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_11_11;
#line 359 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_12_12;

#line 358 "term_norm.m"
    {
#line 358 "term_norm.m"
      hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_5, transform_hlds__term_norm__ConstNum_6, &transform_hlds__term_norm__ConstStruct_8);
    }
#line 359 "term_norm.m"
    transform_hlds__term_norm___ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 0)));
#line 359 "term_norm.m"
    transform_hlds__term_norm__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 1)));
#line 359 "term_norm.m"
    transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 2)));
#line 359 "term_norm.m"
    transform_hlds__term_norm__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_8, (MR_Integer) 3)));
#line 360 "term_norm.m"
    {
#line 360 "term_norm.m"
      transform_hlds__term_norm__V_16_16 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, transform_hlds__term_norm__Args_10);
    }
#line 360 "term_norm.m"
    transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_15 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_13 + transform_hlds__term_norm__V_16_16);
#line 361 "term_norm.m"
    {
#line 361 "term_norm.m"
      transform_hlds__term_norm__const_struct_count_cell_arities_args_4_p_0(transform_hlds__term_norm__ConstStructDb_5, transform_hlds__term_norm__Args_10, transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_15, transform_hlds__term_norm__STATE_VARIABLE_Gamma_14);
#line 361 "term_norm.m"
      return;
    }
#line 357 "term_norm.m"
  }
#line 354 "term_norm.m"
}

#line 341 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(
#line 341 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 341 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 341 "term_norm.m"
  MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3,
#line 341 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__STATE_VARIABLE_Gamma_4)
#line 341 "term_norm.m"
{
#line 344 "term_norm.m"
  while (MR_TRUE)
#line 344 "term_norm.m"
    {
#line 344 "term_norm.m"
      /* tailcall optimized into a loop */
#line 344 "term_norm.m"
      {
#line 344 "term_norm.m"
        MR_bool transform_hlds__term_norm__succeeded;

#line 344 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "term_norm.m"
          *transform_hlds__term_norm__STATE_VARIABLE_Gamma_4 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
#line 344 "term_norm.m"
        else
#line 345 "term_norm.m"
          {
#line 345 "term_norm.m"
            MR_Word transform_hlds__term_norm__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 345 "term_norm.m"
            MR_Word transform_hlds__term_norm__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
#line 345 "term_norm.m"
            MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

#line 348 "term_norm.m"
            if (((MR_tag((MR_Word) transform_hlds__term_norm__Arg_10)) == (MR_mktag((MR_Integer) 0))))
#line 349 "term_norm.m"
              {
#line 349 "term_norm.m"
                MR_Integer transform_hlds__term_norm__ArgConstNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Arg_10, (MR_Integer) 0)));
#line 349 "term_norm.m"
                MR_Word transform_hlds__term_norm__ConstStruct_25;
#line 349 "term_norm.m"
                MR_Word transform_hlds__term_norm__Args_27;
#line 349 "term_norm.m"
                MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30;
#line 337 "term_norm.m"
                MR_Word transform_hlds__term_norm___ConsId_26;
#line 337 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_28_28;
#line 337 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_29_29;

#line 336 "term_norm.m"
                {
#line 336 "term_norm.m"
                  hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__ArgConstNum_15, &transform_hlds__term_norm__ConstStruct_25);
                }
#line 337 "term_norm.m"
                transform_hlds__term_norm___ConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 0)));
#line 337 "term_norm.m"
                transform_hlds__term_norm__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 1)));
#line 337 "term_norm.m"
                transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 2)));
#line 337 "term_norm.m"
                transform_hlds__term_norm__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_25, (MR_Integer) 3)));
#line 338 "term_norm.m"
                transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30 = (transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 + (MR_Integer) 1);
#line 339 "term_norm.m"
                {
#line 339 "term_norm.m"
                  transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(transform_hlds__term_norm__HeadVar__1_1, transform_hlds__term_norm__Args_27, transform_hlds__term_norm__STATE_VARIABLE_Gamma_15_30, &transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18);
                }
#line 349 "term_norm.m"
              }
#line 348 "term_norm.m"
            else
#line 347 "term_norm.m"
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3;
#line 352 "term_norm.m"
            /* direct tailcall eliminated */
#line 352 "term_norm.m"
            {
#line 352 "term_norm.m"
              MR_Word transform_hlds__term_norm__HeadVar__2__tmp_copy_2 = transform_hlds__term_norm__Args_11;
#line 352 "term_norm.m"
              MR_Integer transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_18_18;

#line 352 "term_norm.m"
              transform_hlds__term_norm__STATE_VARIABLE_Gamma_0_3 = transform_hlds__term_norm__STATE_VARIABLE_Gamma_0__tmp_copy_3;
#line 352 "term_norm.m"
              transform_hlds__term_norm__HeadVar__2_2 = transform_hlds__term_norm__HeadVar__2__tmp_copy_2;
#line 352 "term_norm.m"
            }
#line 352 "term_norm.m"
            continue;
#line 345 "term_norm.m"
          }
#line 344 "term_norm.m"
      }
#line 344 "term_norm.m"
      break;
#line 344 "term_norm.m"
    }
#line 341 "term_norm.m"
}

#line 318 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm__functor_norm_filter_args_5_p_0(
#line 318 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 318 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2,
#line 318 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__3_3,
#line 318 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__4_4,
#line 318 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__5_5)
#line 318 "term_norm.m"
{
#line 322 "term_norm.m"
  while (MR_TRUE)
#line 322 "term_norm.m"
    {
#line 322 "term_norm.m"
      /* tailcall optimized into a loop */
#line 322 "term_norm.m"
      {
#line 322 "term_norm.m"
        MR_bool transform_hlds__term_norm__succeeded;

#line 322 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 322 "term_norm.m"
          {
#line 322 "term_norm.m"
            transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 322 "term_norm.m"
              {
#line 322 "term_norm.m"
                transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 322 "term_norm.m"
                  {
#line 322 "term_norm.m"
                    *transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "term_norm.m"
                    *transform_hlds__term_norm__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "term_norm.m"
                    transform_hlds__term_norm__succeeded = MR_TRUE;
#line 322 "term_norm.m"
                  }
#line 322 "term_norm.m"
              }
#line 322 "term_norm.m"
          }
#line 322 "term_norm.m"
        else
#line 322 "term_norm.m"
          {
#line 322 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
#line 322 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
#line 322 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_24_24;
#line 322 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_25_25;
#line 322 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_26_26;
#line 322 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_27_27;

#line 324 "term_norm.m"
            transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 324 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 324 "term_norm.m"
              {
#line 324 "term_norm.m"
                transform_hlds__term_norm__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 0)));
#line 324 "term_norm.m"
                transform_hlds__term_norm__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__2_2, (MR_Integer) 1)));
#line 324 "term_norm.m"
                transform_hlds__term_norm__succeeded = ((MR_tag((MR_Word) transform_hlds__term_norm__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 324 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 324 "term_norm.m"
                  {
#line 324 "term_norm.m"
                    transform_hlds__term_norm__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 0)));
#line 324 "term_norm.m"
                    transform_hlds__term_norm__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__4_4, (MR_Integer) 1)));
#line 322 "term_norm.m"
                    if ((transform_hlds__term_norm__V_23_23 == (MR_Integer) 0))
#line 328 "term_norm.m"
                      {
#line 328 "term_norm.m"
                        /* direct tailcall eliminated */
#line 328 "term_norm.m"
                        {
#line 328 "term_norm.m"
                          MR_Word transform_hlds__term_norm__HeadVar__1__tmp_copy_1 = transform_hlds__term_norm__V_22_22;
#line 328 "term_norm.m"
                          MR_Word transform_hlds__term_norm__HeadVar__2__tmp_copy_2 = transform_hlds__term_norm__V_24_24;
#line 328 "term_norm.m"
                          MR_Word transform_hlds__term_norm__HeadVar__4__tmp_copy_4 = transform_hlds__term_norm__V_26_26;

#line 328 "term_norm.m"
                          transform_hlds__term_norm__HeadVar__4_4 = transform_hlds__term_norm__HeadVar__4__tmp_copy_4;
#line 328 "term_norm.m"
                          transform_hlds__term_norm__HeadVar__2_2 = transform_hlds__term_norm__HeadVar__2__tmp_copy_2;
#line 328 "term_norm.m"
                          transform_hlds__term_norm__HeadVar__1_1 = transform_hlds__term_norm__HeadVar__1__tmp_copy_1;
#line 328 "term_norm.m"
                        }
#line 328 "term_norm.m"
                        continue;
#line 328 "term_norm.m"
                      }
#line 322 "term_norm.m"
                    else
#line 324 "term_norm.m"
                      {
#line 324 "term_norm.m"
                        MR_Word transform_hlds__term_norm__Args_9;
#line 324 "term_norm.m"
                        MR_Word transform_hlds__term_norm__Modes_12;

#line 325 "term_norm.m"
                        {
#line 325 "term_norm.m"
                          transform_hlds__term_norm__succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(transform_hlds__term_norm__V_22_22, transform_hlds__term_norm__V_24_24, &transform_hlds__term_norm__Args_9, transform_hlds__term_norm__V_26_26, &transform_hlds__term_norm__Modes_12);
                        }
#line 324 "term_norm.m"
                        if (transform_hlds__term_norm__succeeded)
#line 324 "term_norm.m"
                          {
#line 324 "term_norm.m"
                            {
#line 324 "term_norm.m"
                              MR_Word base;
#line 324 "term_norm.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "term_norm.m"
                              *transform_hlds__term_norm__HeadVar__3_3 = base;
#line 324 "term_norm.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_norm__V_25_25));
#line 324 "term_norm.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__Args_9));
#line 324 "term_norm.m"
                            }
#line 324 "term_norm.m"
                            {
#line 324 "term_norm.m"
                              MR_Word base;
#line 324 "term_norm.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "term_norm.m"
                              *transform_hlds__term_norm__HeadVar__5_5 = base;
#line 324 "term_norm.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_norm__V_27_27));
#line 324 "term_norm.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__Modes_12));
#line 324 "term_norm.m"
                            }
#line 324 "term_norm.m"
                            transform_hlds__term_norm__succeeded = MR_TRUE;
#line 324 "term_norm.m"
                          }
#line 324 "term_norm.m"
                      }
#line 324 "term_norm.m"
                  }
#line 324 "term_norm.m"
              }
#line 322 "term_norm.m"
          }
#line 322 "term_norm.m"
        return transform_hlds__term_norm__succeeded;
#line 322 "term_norm.m"
      }
#line 322 "term_norm.m"
      break;
#line 322 "term_norm.m"
    }
#line 318 "term_norm.m"
}

#line 229 "term_norm.m"
static MR_bool MR_CALL 
transform_hlds__term_norm__search_weight_table_4_p_0(
#line 229 "term_norm.m"
  MR_Word transform_hlds__term_norm__WeightMap_5,
#line 229 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_6,
#line 229 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConsId_7,
#line 229 "term_norm.m"
  MR_Word * transform_hlds__term_norm__WeightInfo_8)
#line 229 "term_norm.m"
{
#line 235 "term_norm.m"
  {
#line 235 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 235 "term_norm.m"
    MR_Word transform_hlds__term_norm__WeightInfo0_9;
#line 233 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_12_12;
#line 233 "term_norm.m"
    MR_Box transform_hlds__term_norm__conv0_WeightInfo0_9;

#line 233 "term_norm.m"
    {
#line 233 "term_norm.m"
      transform_hlds__term_norm__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_12_12, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_6));
#line 233 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_12_12, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_7));
#line 233 "term_norm.m"
    }
#line 233 "term_norm.m"
    {
#line 233 "term_norm.m"
      transform_hlds__term_norm__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, transform_hlds__term_norm__WeightMap_5, ((MR_Box) (transform_hlds__term_norm__V_12_12)), &transform_hlds__term_norm__conv0_WeightInfo0_9);
    }
#line 233 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 233 "term_norm.m"
      {
#line 233 "term_norm.m"
        transform_hlds__term_norm__WeightInfo0_9 = ((MR_Word) transform_hlds__term_norm__conv0_WeightInfo0_9);
#line 233 "term_norm.m"
        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 233 "term_norm.m"
      }
#line 235 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 234 "term_norm.m"
      {
#line 234 "term_norm.m"
        *transform_hlds__term_norm__WeightInfo_8 = transform_hlds__term_norm__WeightInfo0_9;
#line 234 "term_norm.m"
        transform_hlds__term_norm__succeeded = MR_TRUE;
#line 234 "term_norm.m"
      }
#line 235 "term_norm.m"
    else
#line 238 "term_norm.m"
      {
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeCtorInfo_7_19;
#line 238 "term_norm.m"
        MR_Integer transform_hlds__term_norm__Arity_11;
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__ArgInfos_17;
#line 238 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_18_18;
#line 236 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_10_10;

#line 235 "term_norm.m"
        {
#line 235 "term_norm.m"
          transform_hlds__term_norm__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__term_norm__TypeCtor_6);
        }
#line 238 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 238 "term_norm.m"
          {
#line 236 "term_norm.m"
            transform_hlds__term_norm__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_6, (MR_Integer) 0)));
#line 236 "term_norm.m"
            transform_hlds__term_norm__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__TypeCtor_6, (MR_Integer) 1)));
#line 202 "term_norm.m"
            transform_hlds__term_norm__V_18_18 = (MR_Integer) 1;
#line 3519 "transform_hlds.term_norm.c"
            transform_hlds__term_norm__TypeCtorInfo_7_19 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 202 "term_norm.m"
            {
#line 202 "term_norm.m"
              mercury__list__duplicate_3_p_0(transform_hlds__term_norm__TypeCtorInfo_7_19, transform_hlds__term_norm__Arity_11, ((MR_Box) (transform_hlds__term_norm__V_18_18)), &transform_hlds__term_norm__ArgInfos_17);
            }
#line 199 "term_norm.m"
            {
#line 199 "term_norm.m"
              MR_Word base;
#line 199 "term_norm.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "term_norm.m"
              *transform_hlds__term_norm__WeightInfo_8 = base;
#line 199 "term_norm.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_norm__Arity_11));
#line 199 "term_norm.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_17));
#line 199 "term_norm.m"
            }
#line 199 "term_norm.m"
            transform_hlds__term_norm__succeeded = MR_TRUE;
#line 238 "term_norm.m"
          }
#line 238 "term_norm.m"
      }
#line 235 "term_norm.m"
    return transform_hlds__term_norm__succeeded;
#line 235 "term_norm.m"
  }
#line 229 "term_norm.m"
}

#line 222 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(
#line 222 "term_norm.m"
  void * transform_hlds__term_norm__env_ptr_arg)
#line 222 "term_norm.m"
{
#line 222 "term_norm.m"
  {
#line 222 "term_norm.m"
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * transform_hlds__term_norm__env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) transform_hlds__term_norm__env_ptr_arg;

#line 222 "term_norm.m"
    MR_builtin_longjmp((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0, 1);
#line 222 "term_norm.m"
  }
#line 222 "term_norm.m"
}

#line 222 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2(
#line 222 "term_norm.m"
  void * transform_hlds__term_norm__env_ptr_arg)
#line 222 "term_norm.m"
{
#line 222 "term_norm.m"
  {
#line 222 "term_norm.m"
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * transform_hlds__term_norm__env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) transform_hlds__term_norm__env_ptr_arg;

#line 3584 "transform_hlds.term_norm.c"
    (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_17_32 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[2];
#line 227 "term_norm.m"
    {
#line 227 "term_norm.m"
      (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__TypeInfo_17_32, ((MR_Box) ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25)), ((MR_Box) ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__V_30_30)));
    }
#line 227 "term_norm.m"
    if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
#line 227 "term_norm.m"
      {
#line 227 "term_norm.m"
        transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_1(transform_hlds__term_norm__env_ptr);
#line 227 "term_norm.m"
        return;
      }
#line 222 "term_norm.m"
  }
#line 222 "term_norm.m"
}

#line 222 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(
#line 222 "term_norm.m"
  void * transform_hlds__term_norm__env_ptr_arg)
#line 222 "term_norm.m"
{
#line 222 "term_norm.m"
  {
#line 222 "term_norm.m"
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s * transform_hlds__term_norm__env_ptr = (struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s *) transform_hlds__term_norm__env_ptr_arg;

#line 222 "term_norm.m"
    if (MR_builtin_setjmp((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__commit_0) == 0)
#line 222 "term_norm.m"
      {
#line 222 "term_norm.m"
        {
#line 222 "term_norm.m"
          MR_Word transform_hlds__term_norm__TypeInfo_14_29;
#line 222 "term_norm.m"
          MR_Word transform_hlds__term_norm__ArgType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 1)));
#line 222 "term_norm.m"
          MR_Word transform_hlds__term_norm__ArgTypeCtor_23;
#line 222 "term_norm.m"
          MR_Word transform_hlds__term_norm__ArgTypeArgs_24;
#line 223 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 0)));
#line 223 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 2)));
#line 223 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8, (MR_Integer) 3)));

#line 224 "term_norm.m"
          {
#line 224 "term_norm.m"
            (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__term_norm__ArgType_22, &transform_hlds__term_norm__ArgTypeCtor_23, &transform_hlds__term_norm__ArgTypeArgs_24);
          }
#line 222 "term_norm.m"
          if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
#line 222 "term_norm.m"
            {
#line 225 "term_norm.m"
              {
#line 225 "term_norm.m"
                (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, transform_hlds__term_norm__ArgTypeCtor_23);
              }
#line 222 "term_norm.m"
              if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
#line 222 "term_norm.m"
                {
#line 226 "term_norm.m"
                  {
#line 226 "term_norm.m"
                    (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(transform_hlds__term_norm__ArgTypeArgs_24, &(transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__ArgTypeParams_25);
                  }
#line 222 "term_norm.m"
                  if ((transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
#line 222 "term_norm.m"
                    {
#line 3665 "transform_hlds.term_norm.c"
                      transform_hlds__term_norm__TypeInfo_14_29 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[0];
#line 227 "term_norm.m"
                      {
#line 227 "term_norm.m"
                        mercury__list__perm_2_p_0(transform_hlds__term_norm__TypeInfo_14_29, (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &(transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__V_30_30, transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_2, transform_hlds__term_norm__env_ptr);
                      }
#line 222 "term_norm.m"
                    }
#line 222 "term_norm.m"
                }
#line 222 "term_norm.m"
            }
#line 222 "term_norm.m"
        }
#line 222 "term_norm.m"
        (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_FALSE;
#line 222 "term_norm.m"
      }
#line 222 "term_norm.m"
    else
#line 222 "term_norm.m"
      (transform_hlds__term_norm__env_ptr)->transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded = MR_TRUE;
#line 222 "term_norm.m"
  }
#line 222 "term_norm.m"
}

#line 204 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__Id_2,
#line 204 "term_norm.m"
  MR_Word transform_hlds__term_norm__Params_3,
#line 204 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__HeadVar__4_4,
#line 204 "term_norm.m"
  MR_Word * transform_hlds__term_norm__HeadVar__5_5)
#line 204 "term_norm.m"
{
#line 204 "term_norm.m"
  {
#line 204 "term_norm.m"
    struct transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0_s transform_hlds__term_norm__env;

#line 204 "term_norm.m"
    (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2 = transform_hlds__term_norm__Id_2;
#line 204 "term_norm.m"
    (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3 = transform_hlds__term_norm__Params_3;
#line 208 "term_norm.m"
    if ((transform_hlds__term_norm__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "term_norm.m"
      {
#line 208 "term_norm.m"
        *transform_hlds__term_norm__HeadVar__4_4 = (MR_Integer) 0;
#line 208 "term_norm.m"
        *transform_hlds__term_norm__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "term_norm.m"
      }
#line 208 "term_norm.m"
    else
#line 209 "term_norm.m"
      {
#line 209 "term_norm.m"
        MR_Word transform_hlds__term_norm__Args_9;
#line 209 "term_norm.m"
        MR_Integer transform_hlds__term_norm__NonRecArgs0_14;
#line 209 "term_norm.m"
        MR_Word transform_hlds__term_norm__ArgInfo0_15;

#line 209 "term_norm.m"
        (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "term_norm.m"
        transform_hlds__term_norm__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "term_norm.m"
        {
#line 210 "term_norm.m"
          transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(transform_hlds__term_norm__Args_9, (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Id_2, (transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__Params_3, &transform_hlds__term_norm__NonRecArgs0_14, &transform_hlds__term_norm__ArgInfo0_15);
        }
#line 222 "term_norm.m"
        {
#line 222 "term_norm.m"
          transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_3(&transform_hlds__term_norm__env);
        }
#line 214 "term_norm.m"
        if ((transform_hlds__term_norm__env).transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0_env_0__succeeded)
#line 212 "term_norm.m"
          {
#line 212 "term_norm.m"
            *transform_hlds__term_norm__HeadVar__4_4 = transform_hlds__term_norm__NonRecArgs0_14;
#line 213 "term_norm.m"
            {
#line 213 "term_norm.m"
              MR_Word base;
#line 213 "term_norm.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "term_norm.m"
              *transform_hlds__term_norm__HeadVar__5_5 = base;
#line 213 "term_norm.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 213 "term_norm.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfo0_15));
#line 213 "term_norm.m"
            }
#line 212 "term_norm.m"
          }
#line 214 "term_norm.m"
        else
#line 215 "term_norm.m"
          {
#line 215 "term_norm.m"
            *transform_hlds__term_norm__HeadVar__4_4 = (transform_hlds__term_norm__NonRecArgs0_14 + (MR_Integer) 1);
#line 216 "term_norm.m"
            {
#line 216 "term_norm.m"
              MR_Word base;
#line 216 "term_norm.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "term_norm.m"
              *transform_hlds__term_norm__HeadVar__5_5 = base;
#line 216 "term_norm.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 216 "term_norm.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfo0_15));
#line 216 "term_norm.m"
            }
#line 215 "term_norm.m"
          }
#line 209 "term_norm.m"
      }
#line 204 "term_norm.m"
  }
#line 204 "term_norm.m"
}

#line 169 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_weights_for_cons_5_p_0(
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_6,
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__Params_7,
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__Ctor_8,
#line 169 "term_norm.m"
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_22,
#line 169 "term_norm.m"
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_23)
#line 169 "term_norm.m"
{
#line 177 "term_norm.m"
  {
#line 177 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 177 "term_norm.m"
    MR_Word transform_hlds__term_norm__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 2)));
#line 177 "term_norm.m"
    MR_Word transform_hlds__term_norm__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 3)));
#line 177 "term_norm.m"
    MR_Integer transform_hlds__term_norm__Arity_15;
#line 177 "term_norm.m"
    MR_Word transform_hlds__term_norm__WeightInfo_20;
#line 177 "term_norm.m"
    MR_Word transform_hlds__term_norm__ConsId_21;
#line 177 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_28_28;
#line 178 "term_norm.m"
    MR_Word transform_hlds__term_norm___ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 0)));
#line 178 "term_norm.m"
    MR_Word transform_hlds__term_norm___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 1)));
#line 178 "term_norm.m"
    MR_Word transform_hlds__term_norm__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__Ctor_8, (MR_Integer) 4)));

#line 179 "term_norm.m"
    {
#line 179 "term_norm.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, transform_hlds__term_norm__Args_13, &transform_hlds__term_norm__Arity_15);
    }
#line 180 "term_norm.m"
    transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__Arity_15 > (MR_Integer) 0);
#line 191 "term_norm.m"
    if (transform_hlds__term_norm__succeeded)
#line 182 "term_norm.m"
      {
#line 182 "term_norm.m"
        MR_Integer transform_hlds__term_norm__NumNonRec_16;
#line 182 "term_norm.m"
        MR_Word transform_hlds__term_norm__ArgInfos0_17;
#line 182 "term_norm.m"
        MR_Integer transform_hlds__term_norm__Weight_18;
#line 182 "term_norm.m"
        MR_Word transform_hlds__term_norm__ArgInfos_19;

#line 181 "term_norm.m"
        {
#line 181 "term_norm.m"
          transform_hlds__term_norm__find_and_count_nonrec_args_5_p_0(transform_hlds__term_norm__Args_13, transform_hlds__term_norm__TypeCtor_6, transform_hlds__term_norm__Params_7, &transform_hlds__term_norm__NumNonRec_16, &transform_hlds__term_norm__ArgInfos0_17);
        }
#line 183 "term_norm.m"
        transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__NumNonRec_16 == (MR_Integer) 0);
#line 186 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 184 "term_norm.m"
          {
#line 184 "term_norm.m"
            transform_hlds__term_norm__Weight_18 = (MR_Integer) 1;
#line 185 "term_norm.m"
            {
#line 185 "term_norm.m"
              mercury__list__duplicate_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_norm__Arity_15, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__term_norm__ArgInfos_19);
            }
#line 184 "term_norm.m"
          }
#line 186 "term_norm.m"
        else
#line 187 "term_norm.m"
          {
#line 187 "term_norm.m"
            transform_hlds__term_norm__Weight_18 = transform_hlds__term_norm__NumNonRec_16;
#line 188 "term_norm.m"
            transform_hlds__term_norm__ArgInfos_19 = transform_hlds__term_norm__ArgInfos0_17;
#line 187 "term_norm.m"
          }
#line 190 "term_norm.m"
        {
#line 190 "term_norm.m"
          transform_hlds__term_norm__WeightInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_20, 0) = ((MR_Box) (transform_hlds__term_norm__Weight_18));
#line 190 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_20, 1) = ((MR_Box) (transform_hlds__term_norm__ArgInfos_19));
#line 190 "term_norm.m"
        }
#line 182 "term_norm.m"
      }
#line 191 "term_norm.m"
    else
#line 192 "term_norm.m"
      {
#line 192 "term_norm.m"
        transform_hlds__term_norm__WeightInfo_20 = (MR_Word) &transform_hlds__term_norm_scalar_common_2[3];
#line 192 "term_norm.m"
      }
#line 194 "term_norm.m"
    {
#line 194 "term_norm.m"
      transform_hlds__term_norm__ConsId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 194 "term_norm.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 194 "term_norm.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 1) = ((MR_Box) (transform_hlds__term_norm__SymName_12));
#line 194 "term_norm.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 2) = ((MR_Box) (transform_hlds__term_norm__Arity_15));
#line 194 "term_norm.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_21, 3) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_6));
#line 194 "term_norm.m"
    }
#line 195 "term_norm.m"
    {
#line 195 "term_norm.m"
      transform_hlds__term_norm__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_28_28, 0) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_6));
#line 195 "term_norm.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_28_28, 1) = ((MR_Box) (transform_hlds__term_norm__ConsId_21));
#line 195 "term_norm.m"
    }
#line 195 "term_norm.m"
    {
#line 195 "term_norm.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, ((MR_Box) (transform_hlds__term_norm__V_28_28)), ((MR_Box) (transform_hlds__term_norm__WeightInfo_20)), transform_hlds__term_norm__STATE_VARIABLE_Weights_0_22, transform_hlds__term_norm__STATE_VARIABLE_Weights_23);
#line 195 "term_norm.m"
      return;
    }
#line 177 "term_norm.m"
  }
#line 169 "term_norm.m"
}

#line 152 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0_1(
#line 152 "term_norm.m"
  MR_Box transform_hlds__term_norm__closure_arg,
#line 152 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 152 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 152 "term_norm.m"
  MR_Box * transform_hlds__term_norm__wrapper_arg_3)
#line 152 "term_norm.m"
{
#line 152 "term_norm.m"
  {
#line 152 "term_norm.m"
    MR_Box transform_hlds__term_norm__closure = transform_hlds__term_norm__closure_arg;
#line 152 "term_norm.m"
    MR_Word transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_23;

#line 152 "term_norm.m"
    {
#line 152 "term_norm.m"
      transform_hlds__term_norm__find_weights_for_cons_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), &transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_23);
    }
#line 152 "term_norm.m"
    *transform_hlds__term_norm__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_23));
#line 152 "term_norm.m"
  }
#line 152 "term_norm.m"
}

#line 144 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__find_weights_for_type_3_p_0(
#line 144 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 144 "term_norm.m"
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23,
#line 144 "term_norm.m"
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Weights_24)
#line 144 "term_norm.m"
{
#line 147 "term_norm.m"
  {
#line 147 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 147 "term_norm.m"
    MR_Word transform_hlds__term_norm__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "term_norm.m"
    MR_Word transform_hlds__term_norm__TypeDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "term_norm.m"
    MR_Word transform_hlds__term_norm__TypeBody_7;

#line 148 "term_norm.m"
    {
#line 148 "term_norm.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__term_norm__TypeDefn_5, &transform_hlds__term_norm__TypeBody_7);
    }
#line 154 "term_norm.m"
    if (((MR_tag((MR_Word) transform_hlds__term_norm__TypeBody_7)) == (MR_mktag((MR_Integer) 1))))
#line 150 "term_norm.m"
      {
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__Constructors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 0)));
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeParams_17;
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_25_25;
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 1)));
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 2)));
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 3)));
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 4)));
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 5)));
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 150 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 7)));
#line 152 "term_norm.m"
        MR_Box transform_hlds__term_norm__conv1_STATE_VARIABLE_Weights_24;

#line 151 "term_norm.m"
        {
#line 151 "term_norm.m"
          hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__term_norm__TypeDefn_5, &transform_hlds__term_norm__TypeParams_17);
        }
#line 152 "term_norm.m"
        {
#line 152 "term_norm.m"
          transform_hlds__term_norm__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 152 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 0) = ((MR_Box) (&transform_hlds__term_norm_scalar_common_4[0]));
#line 152 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 1) = ((MR_Box) (transform_hlds__term_norm__find_weights_for_type_3_p_0_1));
#line 152 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 152 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 3) = ((MR_Box) (transform_hlds__term_norm__TypeCtor_4));
#line 152 "term_norm.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_norm__V_25_25, 4) = ((MR_Box) (transform_hlds__term_norm__TypeParams_17));
#line 152 "term_norm.m"
        }
#line 152 "term_norm.m"
        {
#line 152 "term_norm.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &transform_hlds__term_norm_scalar_common_1[2], transform_hlds__term_norm__V_25_25, transform_hlds__term_norm__Constructors_8, ((MR_Box) (transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23)), &transform_hlds__term_norm__conv1_STATE_VARIABLE_Weights_24);
        }
#line 152 "term_norm.m"
        *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = ((MR_Word) transform_hlds__term_norm__conv1_STATE_VARIABLE_Weights_24);
#line 150 "term_norm.m"
      }
#line 154 "term_norm.m"
    else
#line 154 "term_norm.m"
      if (((MR_tag((MR_Word) transform_hlds__term_norm__TypeBody_7)) == (MR_mktag((MR_Integer) 2))))
#line 156 "term_norm.m"
        *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
#line 154 "term_norm.m"
      else
#line 154 "term_norm.m"
        if (((MR_tag((MR_Word) transform_hlds__term_norm__TypeBody_7)) == (MR_mktag((MR_Integer) 0))))
#line 163 "term_norm.m"
          *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
#line 154 "term_norm.m"
        else
#line 154 "term_norm.m"
          if (((((MR_tag((MR_Word) transform_hlds__term_norm__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 160 "term_norm.m"
            *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
#line 154 "term_norm.m"
          else
#line 166 "term_norm.m"
            *transform_hlds__term_norm__STATE_VARIABLE_Weights_24 = transform_hlds__term_norm__STATE_VARIABLE_Weights_0_23;
#line 147 "term_norm.m"
  }
#line 144 "term_norm.m"
}

#line 66 "term_norm.m"
MR_bool MR_CALL 
transform_hlds__term_norm__zero_size_type_2_p_0(
#line 66 "term_norm.m"
  MR_Word transform_hlds__term_norm__ModuleInfo_3,
#line 66 "term_norm.m"
  MR_Word transform_hlds__term_norm__Type_4)
#line 66 "term_norm.m"
{
#line 493 "term_norm.m"
  {
#line 493 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 493 "term_norm.m"
    MR_Word transform_hlds__term_norm__CtorCat_5;

#line 494 "term_norm.m"
    {
#line 494 "term_norm.m"
      transform_hlds__term_norm__CtorCat_5 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__term_norm__ModuleInfo_3, transform_hlds__term_norm__Type_4);
    }
#line 508 "term_norm.m"
    if ((transform_hlds__term_norm__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 508 "term_norm.m"
      {
#line 495 "term_norm.m"
        transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 508 "term_norm.m"
      }
#line 508 "term_norm.m"
    else
#line 508 "term_norm.m"
      if ((transform_hlds__term_norm__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "term_norm.m"
        {
#line 495 "term_norm.m"
          transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 508 "term_norm.m"
        }
#line 508 "term_norm.m"
      else
#line 508 "term_norm.m"
        if ((transform_hlds__term_norm__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 515 "term_norm.m"
          {
#line 495 "term_norm.m"
            transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 515 "term_norm.m"
          }
#line 508 "term_norm.m"
        else
#line 508 "term_norm.m"
          if ((transform_hlds__term_norm__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 515 "term_norm.m"
            {
#line 495 "term_norm.m"
              transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 515 "term_norm.m"
            }
#line 508 "term_norm.m"
          else
#line 508 "term_norm.m"
            if ((transform_hlds__term_norm__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 508 "term_norm.m"
              {
#line 495 "term_norm.m"
                transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 508 "term_norm.m"
              }
#line 508 "term_norm.m"
            else
#line 508 "term_norm.m"
              if (((MR_tag((MR_Word) transform_hlds__term_norm__CtorCat_5)) == (MR_mktag((MR_Integer) 1))))
#line 509 "term_norm.m"
                {
#line 495 "term_norm.m"
                  transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 509 "term_norm.m"
                }
#line 508 "term_norm.m"
              else
#line 508 "term_norm.m"
                if (((MR_tag((MR_Word) transform_hlds__term_norm__CtorCat_5)) == (MR_mktag((MR_Integer) 2))))
#line 509 "term_norm.m"
                  {
#line 495 "term_norm.m"
                    transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 509 "term_norm.m"
                  }
#line 508 "term_norm.m"
                else
#line 508 "term_norm.m"
                  if (((((MR_tag((MR_Word) transform_hlds__term_norm__CtorCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__CtorCat_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 509 "term_norm.m"
                    {
#line 495 "term_norm.m"
                      transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 509 "term_norm.m"
                    }
#line 508 "term_norm.m"
                  else
#line 508 "term_norm.m"
                    {
#line 508 "term_norm.m"
                      MR_Word transform_hlds__term_norm__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__CtorCat_5, (MR_Integer) 1)));

#line 508 "term_norm.m"
                      if ((transform_hlds__term_norm__V_16_16 == (MR_Integer) 0))
#line 509 "term_norm.m"
                        {
#line 495 "term_norm.m"
                          transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 509 "term_norm.m"
                        }
#line 508 "term_norm.m"
                      else
#line 508 "term_norm.m"
                        if ((transform_hlds__term_norm__V_16_16 == (MR_Integer) 2))
#line 516 "term_norm.m"
                          {
#line 495 "term_norm.m"
                            transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 516 "term_norm.m"
                          }
#line 508 "term_norm.m"
                        else
#line 516 "term_norm.m"
                          {
#line 495 "term_norm.m"
                            transform_hlds__term_norm__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 516 "term_norm.m"
                          }
#line 508 "term_norm.m"
                    }
#line 493 "term_norm.m"
    return transform_hlds__term_norm__succeeded;
#line 493 "term_norm.m"
  }
#line 66 "term_norm.m"
}

#line 61 "term_norm.m"
MR_Integer MR_CALL 
transform_hlds__term_norm__functor_lower_bound_4_f_0(
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm___ModuleInfo_6,
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm__FunctorInfo_7,
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_8,
#line 61 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConsId_9)
#line 61 "term_norm.m"
{
#line 472 "term_norm.m"
  {
#line 472 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 472 "term_norm.m"
    MR_Integer transform_hlds__term_norm__Weight_10;

#line 472 "term_norm.m"
    {
#line 472 "term_norm.m"
      return transform_hlds__term_norm__Weight_10 = transform_hlds__term_norm__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_f_0(transform_hlds__term_norm__FunctorInfo_7, transform_hlds__term_norm__TypeCtor_8, transform_hlds__term_norm__ConsId_9);
    }
#line 472 "term_norm.m"
    return transform_hlds__term_norm__Weight_10;
#line 472 "term_norm.m"
  }
#line 61 "term_norm.m"
}

#line 51 "term_norm.m"
void MR_CALL 
transform_hlds__term_norm__functor_norm_9_p_0(
#line 51 "term_norm.m"
  MR_Word transform_hlds__term_norm__ModuleInfo_10,
#line 51 "term_norm.m"
  MR_Word transform_hlds__term_norm__FunctorInfo_11,
#line 51 "term_norm.m"
  MR_Word transform_hlds__term_norm__TypeCtor_12,
#line 51 "term_norm.m"
  MR_Word transform_hlds__term_norm__ConsId_13,
#line 51 "term_norm.m"
  MR_Integer * transform_hlds__term_norm__Gamma_14,
#line 51 "term_norm.m"
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Args_0_32,
#line 51 "term_norm.m"
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Args_33,
#line 51 "term_norm.m"
  MR_Word transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34,
#line 51 "term_norm.m"
  MR_Word * transform_hlds__term_norm__STATE_VARIABLE_Modes_35)
#line 51 "term_norm.m"
{
#line 258 "term_norm.m"
  {
#line 258 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;

#line 258 "term_norm.m"
    if ((transform_hlds__term_norm__FunctorInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "term_norm.m"
      {
#line 260 "term_norm.m"
        MR_Integer transform_hlds__term_norm__Arity_18;
#line 260 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_17_17;
#line 260 "term_norm.m"
        MR_Word transform_hlds__term_norm__V_19_19;

#line 260 "term_norm.m"
        transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 260 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 260 "term_norm.m"
          {
#line 260 "term_norm.m"
            transform_hlds__term_norm__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
#line 260 "term_norm.m"
            transform_hlds__term_norm__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
#line 260 "term_norm.m"
            transform_hlds__term_norm__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 3)));
#line 261 "term_norm.m"
            transform_hlds__term_norm__succeeded = (transform_hlds__term_norm__Arity_18 == (MR_Integer) 0);
#line 261 "term_norm.m"
            transform_hlds__term_norm__succeeded = !(transform_hlds__term_norm__succeeded);
#line 260 "term_norm.m"
          }
#line 264 "term_norm.m"
        if (transform_hlds__term_norm__succeeded)
#line 263 "term_norm.m"
          *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 1;
#line 264 "term_norm.m"
        else
#line 269 "term_norm.m"
          {
#line 269 "term_norm.m"
            MR_Integer transform_hlds__term_norm__ConstNum_20;
#line 265 "term_norm.m"
            MR_Word transform_hlds__term_norm__V_21_21;

#line 265 "term_norm.m"
            transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 265 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 265 "term_norm.m"
              {
#line 265 "term_norm.m"
                transform_hlds__term_norm__ConstNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
#line 265 "term_norm.m"
                transform_hlds__term_norm__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
#line 267 "term_norm.m"
                {
#line 267 "term_norm.m"
                  MR_Word transform_hlds__term_norm__ConstStructDb_22;
#line 267 "term_norm.m"
                  MR_Word transform_hlds__term_norm__ConstStruct_80;
#line 267 "term_norm.m"
                  MR_Word transform_hlds__term_norm__Args_82;
#line 337 "term_norm.m"
                  MR_Word transform_hlds__term_norm___ConsId_81;
#line 337 "term_norm.m"
                  MR_Word transform_hlds__term_norm__V_83_83;
#line 337 "term_norm.m"
                  MR_Word transform_hlds__term_norm__V_84_84;

#line 267 "term_norm.m"
                  {
#line 267 "term_norm.m"
                    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_22);
                  }
#line 336 "term_norm.m"
                  {
#line 336 "term_norm.m"
                    hlds__const_struct__lookup_const_struct_num_3_p_0(transform_hlds__term_norm__ConstStructDb_22, transform_hlds__term_norm__ConstNum_20, &transform_hlds__term_norm__ConstStruct_80);
                  }
#line 337 "term_norm.m"
                  transform_hlds__term_norm___ConsId_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 0)));
#line 337 "term_norm.m"
                  transform_hlds__term_norm__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 1)));
#line 337 "term_norm.m"
                  transform_hlds__term_norm__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 2)));
#line 337 "term_norm.m"
                  transform_hlds__term_norm__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__ConstStruct_80, (MR_Integer) 3)));
#line 339 "term_norm.m"
                  {
#line 339 "term_norm.m"
                    transform_hlds__term_norm__const_struct_count_cells_args_4_p_0(transform_hlds__term_norm__ConstStructDb_22, transform_hlds__term_norm__Args_82, (MR_Integer) 1, transform_hlds__term_norm__Gamma_14);
                  }
#line 267 "term_norm.m"
                }
#line 265 "term_norm.m"
              }
#line 265 "term_norm.m"
            else
#line 270 "term_norm.m"
              *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
#line 269 "term_norm.m"
          }
#line 270 "term_norm.m"
        *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
#line 270 "term_norm.m"
        *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
#line 258 "term_norm.m"
      }
#line 258 "term_norm.m"
    else
#line 258 "term_norm.m"
      if ((transform_hlds__term_norm__FunctorInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 273 "term_norm.m"
        {
#line 276 "term_norm.m"
          MR_Integer transform_hlds__term_norm__Arity_50;
#line 274 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_23_23;
#line 274 "term_norm.m"
          MR_Word transform_hlds__term_norm__V_24_24;

#line 274 "term_norm.m"
          transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 274 "term_norm.m"
          if (transform_hlds__term_norm__succeeded)
#line 274 "term_norm.m"
            {
#line 274 "term_norm.m"
              transform_hlds__term_norm__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
#line 274 "term_norm.m"
              transform_hlds__term_norm__Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
#line 274 "term_norm.m"
              transform_hlds__term_norm__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 3)));
#line 275 "term_norm.m"
              *transform_hlds__term_norm__Gamma_14 = transform_hlds__term_norm__Arity_50;
#line 274 "term_norm.m"
            }
#line 274 "term_norm.m"
          else
#line 279 "term_norm.m"
            {
#line 279 "term_norm.m"
              MR_Integer transform_hlds__term_norm__ConstNum_48;
#line 276 "term_norm.m"
              MR_Word transform_hlds__term_norm__V_25_25;

#line 276 "term_norm.m"
              transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 276 "term_norm.m"
              if (transform_hlds__term_norm__succeeded)
#line 276 "term_norm.m"
                {
#line 276 "term_norm.m"
                  transform_hlds__term_norm__ConstNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
#line 276 "term_norm.m"
                  transform_hlds__term_norm__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
#line 277 "term_norm.m"
                  {
#line 277 "term_norm.m"
                    MR_Word transform_hlds__term_norm__ConstStructDb_47;

#line 277 "term_norm.m"
                    {
#line 277 "term_norm.m"
                      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_47);
                    }
#line 278 "term_norm.m"
                    {
#line 278 "term_norm.m"
                      transform_hlds__term_norm__const_struct_count_cell_arities_4_p_0(transform_hlds__term_norm__ConstStructDb_47, transform_hlds__term_norm__ConstNum_48, (MR_Integer) 0, transform_hlds__term_norm__Gamma_14);
                    }
#line 277 "term_norm.m"
                  }
#line 276 "term_norm.m"
                }
#line 276 "term_norm.m"
              else
#line 280 "term_norm.m"
                *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
#line 279 "term_norm.m"
            }
#line 280 "term_norm.m"
          *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
#line 280 "term_norm.m"
          *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
#line 273 "term_norm.m"
        }
#line 258 "term_norm.m"
      else
#line 258 "term_norm.m"
        if (((MR_tag((MR_Word) transform_hlds__term_norm__FunctorInfo_11)) == (MR_mktag((MR_Integer) 1))))
#line 283 "term_norm.m"
          {
#line 283 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_norm__FunctorInfo_11, (MR_Integer) 0)));
#line 286 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightInfo_27;

#line 284 "term_norm.m"
            {
#line 284 "term_norm.m"
              transform_hlds__term_norm__succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(transform_hlds__term_norm__WeightMap_26, transform_hlds__term_norm__TypeCtor_12, transform_hlds__term_norm__ConsId_13, &transform_hlds__term_norm__WeightInfo_27);
            }
#line 286 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 285 "term_norm.m"
              {
#line 285 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_28_28;

#line 285 "term_norm.m"
                *transform_hlds__term_norm__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_27, (MR_Integer) 0)));
#line 285 "term_norm.m"
                transform_hlds__term_norm__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_27, (MR_Integer) 1)));
#line 285 "term_norm.m"
              }
#line 286 "term_norm.m"
            else
#line 290 "term_norm.m"
              {
#line 290 "term_norm.m"
                MR_Integer transform_hlds__term_norm__ConstNum_57;
#line 286 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_29_29;

#line 286 "term_norm.m"
                transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 286 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 286 "term_norm.m"
                  {
#line 286 "term_norm.m"
                    transform_hlds__term_norm__ConstNum_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
#line 286 "term_norm.m"
                    transform_hlds__term_norm__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
#line 287 "term_norm.m"
                    {
#line 287 "term_norm.m"
                      MR_Word transform_hlds__term_norm__ConstStructDb_56;

#line 287 "term_norm.m"
                      {
#line 287 "term_norm.m"
                        hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_56);
                      }
#line 288 "term_norm.m"
                      {
#line 288 "term_norm.m"
                        transform_hlds__term_norm__const_struct_count_cell_weights_5_p_0(transform_hlds__term_norm__ConstStructDb_56, transform_hlds__term_norm__WeightMap_26, transform_hlds__term_norm__ConstNum_57, (MR_Integer) 0, transform_hlds__term_norm__Gamma_14);
                      }
#line 287 "term_norm.m"
                    }
#line 286 "term_norm.m"
                  }
#line 286 "term_norm.m"
                else
#line 291 "term_norm.m"
                  *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
#line 290 "term_norm.m"
              }
#line 291 "term_norm.m"
            *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
#line 291 "term_norm.m"
            *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
#line 283 "term_norm.m"
          }
#line 258 "term_norm.m"
        else
#line 294 "term_norm.m"
          {
#line 294 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightMap_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_norm__FunctorInfo_11, (MR_Integer) 0)));
#line 302 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightInfo_70;

#line 295 "term_norm.m"
            {
#line 295 "term_norm.m"
              transform_hlds__term_norm__succeeded = transform_hlds__term_norm__search_weight_table_4_p_0(transform_hlds__term_norm__WeightMap_73, transform_hlds__term_norm__TypeCtor_12, transform_hlds__term_norm__ConsId_13, &transform_hlds__term_norm__WeightInfo_70);
            }
#line 302 "term_norm.m"
            if (transform_hlds__term_norm__succeeded)
#line 296 "term_norm.m"
              {
#line 296 "term_norm.m"
                MR_Word transform_hlds__term_norm__UseArgList_30;
#line 299 "term_norm.m"
                MR_Word transform_hlds__term_norm__STATE_VARIABLE_Args_36_36;
#line 299 "term_norm.m"
                MR_Word transform_hlds__term_norm__STATE_VARIABLE_Modes_37_37;

#line 296 "term_norm.m"
                *transform_hlds__term_norm__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_70, (MR_Integer) 0)));
#line 296 "term_norm.m"
                transform_hlds__term_norm__UseArgList_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_norm__WeightInfo_70, (MR_Integer) 1)));
#line 297 "term_norm.m"
                {
#line 297 "term_norm.m"
                  transform_hlds__term_norm__succeeded = transform_hlds__term_norm__functor_norm_filter_args_5_p_0(transform_hlds__term_norm__UseArgList_30, transform_hlds__term_norm__STATE_VARIABLE_Args_0_32, &transform_hlds__term_norm__STATE_VARIABLE_Args_36_36, transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34, &transform_hlds__term_norm__STATE_VARIABLE_Modes_37_37);
                }
#line 299 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 298 "term_norm.m"
                  {
#line 298 "term_norm.m"
                    *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_37_37;
#line 298 "term_norm.m"
                    *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_36_36;
#line 298 "term_norm.m"
                  }
#line 299 "term_norm.m"
                else
#line 300 "term_norm.m"
                  {
#line 300 "term_norm.m"
                    {
#line 300 "term_norm.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_norm", (MR_String) "predicate \140transform_hlds.term_norm.functor_norm\'/9", (MR_String) "unmatched lists");
#line 300 "term_norm.m"
                      return;
                    }
#line 300 "term_norm.m"
                  }
#line 296 "term_norm.m"
              }
#line 302 "term_norm.m"
            else
#line 310 "term_norm.m"
              {
#line 310 "term_norm.m"
                MR_Integer transform_hlds__term_norm__ConstNum_64;
#line 302 "term_norm.m"
                MR_Word transform_hlds__term_norm__V_31_31;

#line 302 "term_norm.m"
                transform_hlds__term_norm__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_norm__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 302 "term_norm.m"
                if (transform_hlds__term_norm__succeeded)
#line 302 "term_norm.m"
                  {
#line 302 "term_norm.m"
                    transform_hlds__term_norm__ConstNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 1)));
#line 302 "term_norm.m"
                    transform_hlds__term_norm__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_norm__ConsId_13, (MR_Integer) 2)));
#line 307 "term_norm.m"
                    {
#line 307 "term_norm.m"
                      MR_Word transform_hlds__term_norm__ConstStructDb_63;

#line 307 "term_norm.m"
                      {
#line 307 "term_norm.m"
                        hlds__hlds_module__module_info_get_const_struct_db_2_p_0(transform_hlds__term_norm__ModuleInfo_10, &transform_hlds__term_norm__ConstStructDb_63);
                      }
#line 308 "term_norm.m"
                      {
#line 308 "term_norm.m"
                        transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_p_0(transform_hlds__term_norm__ConstStructDb_63, transform_hlds__term_norm__WeightMap_73, transform_hlds__term_norm__ConstNum_64, (MR_Integer) 0, transform_hlds__term_norm__Gamma_14);
                      }
#line 307 "term_norm.m"
                    }
#line 302 "term_norm.m"
                  }
#line 302 "term_norm.m"
                else
#line 311 "term_norm.m"
                  *transform_hlds__term_norm__Gamma_14 = (MR_Integer) 0;
#line 311 "term_norm.m"
                *transform_hlds__term_norm__STATE_VARIABLE_Modes_35 = transform_hlds__term_norm__STATE_VARIABLE_Modes_0_34;
#line 311 "term_norm.m"
                *transform_hlds__term_norm__STATE_VARIABLE_Args_33 = transform_hlds__term_norm__STATE_VARIABLE_Args_0_32;
#line 310 "term_norm.m"
              }
#line 294 "term_norm.m"
          }
#line 258 "term_norm.m"
  }
#line 51 "term_norm.m"
}

#line 142 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_2(
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__closure_arg,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 142 "term_norm.m"
  MR_Box * transform_hlds__term_norm__wrapper_arg_3)
#line 142 "term_norm.m"
{
#line 142 "term_norm.m"
  {
#line 142 "term_norm.m"
    MR_Box transform_hlds__term_norm__closure = transform_hlds__term_norm__closure_arg;
#line 142 "term_norm.m"
    MR_Word transform_hlds__term_norm__conv2_STATE_VARIABLE_Weights_24;

#line 142 "term_norm.m"
    {
#line 142 "term_norm.m"
      transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), &transform_hlds__term_norm__conv2_STATE_VARIABLE_Weights_24);
    }
#line 142 "term_norm.m"
    *transform_hlds__term_norm__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_norm__conv2_STATE_VARIABLE_Weights_24));
#line 142 "term_norm.m"
  }
#line 142 "term_norm.m"
}

#line 142 "term_norm.m"
static void MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0_1(
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__closure_arg,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_1,
#line 142 "term_norm.m"
  MR_Box transform_hlds__term_norm__wrapper_arg_2,
#line 142 "term_norm.m"
  MR_Box * transform_hlds__term_norm__wrapper_arg_3)
#line 142 "term_norm.m"
{
#line 142 "term_norm.m"
  {
#line 142 "term_norm.m"
    MR_Box transform_hlds__term_norm__closure = transform_hlds__term_norm__closure_arg;
#line 142 "term_norm.m"
    MR_Word transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_24;

#line 142 "term_norm.m"
    {
#line 142 "term_norm.m"
      transform_hlds__term_norm__find_weights_for_type_3_p_0(((MR_Word) transform_hlds__term_norm__wrapper_arg_1), ((MR_Word) transform_hlds__term_norm__wrapper_arg_2), &transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_24);
    }
#line 142 "term_norm.m"
    *transform_hlds__term_norm__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_norm__conv0_STATE_VARIABLE_Weights_24));
#line 142 "term_norm.m"
  }
#line 142 "term_norm.m"
}

#line 36 "term_norm.m"
MR_Word MR_CALL 
transform_hlds__term_norm__set_functor_info_2_f_0(
#line 36 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__1_1,
#line 36 "term_norm.m"
  MR_Word transform_hlds__term_norm__HeadVar__2_2)
#line 36 "term_norm.m"
{
#line 244 "term_norm.m"
  {
#line 244 "term_norm.m"
    MR_bool transform_hlds__term_norm__succeeded;
#line 244 "term_norm.m"
    MR_Word transform_hlds__term_norm__HeadVar__3_3;

#line 244 "term_norm.m"
    if ((transform_hlds__term_norm__HeadVar__2_2 == (MR_Integer) 2))
#line 246 "term_norm.m"
      {
#line 246 "term_norm.m"
        MR_Word transform_hlds__term_norm__WeightMap_8;
#line 246 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeTable_14;
#line 246 "term_norm.m"
        MR_Word transform_hlds__term_norm__TypeCtorsDefns_15;
#line 246 "term_norm.m"
        MR_Word transform_hlds__term_norm__Weights0_16;
#line 142 "term_norm.m"
        MR_Box transform_hlds__term_norm__conv1_WeightMap_8;

#line 139 "term_norm.m"
        {
#line 139 "term_norm.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__term_norm__HeadVar__1_1, &transform_hlds__term_norm__TypeTable_14);
        }
#line 140 "term_norm.m"
        {
#line 140 "term_norm.m"
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__term_norm__TypeTable_14, &transform_hlds__term_norm__TypeCtorsDefns_15);
        }
#line 141 "term_norm.m"
        {
#line 141 "term_norm.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, &transform_hlds__term_norm__Weights0_16);
        }
#line 142 "term_norm.m"
        {
#line 142 "term_norm.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[1], (MR_Word) &transform_hlds__term_norm_scalar_common_1[2], (MR_Word) &transform_hlds__term_norm_scalar_common_1[3], transform_hlds__term_norm__TypeCtorsDefns_15, ((MR_Box) (transform_hlds__term_norm__Weights0_16)), &transform_hlds__term_norm__conv1_WeightMap_8);
        }
#line 142 "term_norm.m"
        transform_hlds__term_norm__WeightMap_8 = ((MR_Word) transform_hlds__term_norm__conv1_WeightMap_8);
#line 248 "term_norm.m"
        {
#line 248 "term_norm.m"
          transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 248 "term_norm.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_norm__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_norm__WeightMap_8));
#line 248 "term_norm.m"
        }
#line 246 "term_norm.m"
      }
#line 244 "term_norm.m"
    else
#line 244 "term_norm.m"
      if ((transform_hlds__term_norm__HeadVar__2_2 == (MR_Integer) 0))
#line 245 "term_norm.m"
        transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "term_norm.m"
      else
#line 244 "term_norm.m"
        if ((transform_hlds__term_norm__HeadVar__2_2 == (MR_Integer) 3))
#line 249 "term_norm.m"
          {
#line 249 "term_norm.m"
            MR_Word transform_hlds__term_norm__WeightMap_11;
#line 249 "term_norm.m"
            MR_Word transform_hlds__term_norm__TypeTable_27;
#line 249 "term_norm.m"
            MR_Word transform_hlds__term_norm__TypeCtorsDefns_28;
#line 249 "term_norm.m"
            MR_Word transform_hlds__term_norm__Weights0_29;
#line 142 "term_norm.m"
            MR_Box transform_hlds__term_norm__conv3_WeightMap_11;

#line 139 "term_norm.m"
            {
#line 139 "term_norm.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__term_norm__HeadVar__1_1, &transform_hlds__term_norm__TypeTable_27);
            }
#line 140 "term_norm.m"
            {
#line 140 "term_norm.m"
              hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__term_norm__TypeTable_27, &transform_hlds__term_norm__TypeCtorsDefns_28);
            }
#line 141 "term_norm.m"
            {
#line 141 "term_norm.m"
              mercury__map__init_1_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[0], (MR_Word) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_weight_info_0, &transform_hlds__term_norm__Weights0_29);
            }
#line 142 "term_norm.m"
            {
#line 142 "term_norm.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_norm_scalar_common_1[1], (MR_Word) &transform_hlds__term_norm_scalar_common_1[2], (MR_Word) &transform_hlds__term_norm_scalar_common_1[4], transform_hlds__term_norm__TypeCtorsDefns_28, ((MR_Box) (transform_hlds__term_norm__Weights0_29)), &transform_hlds__term_norm__conv3_WeightMap_11);
            }
#line 142 "term_norm.m"
            transform_hlds__term_norm__WeightMap_11 = ((MR_Word) transform_hlds__term_norm__conv3_WeightMap_11);
#line 251 "term_norm.m"
            {
#line 251 "term_norm.m"
              transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "term_norm.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_norm__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_norm__WeightMap_11));
#line 251 "term_norm.m"
            }
#line 249 "term_norm.m"
          }
#line 244 "term_norm.m"
        else
#line 244 "term_norm.m"
          transform_hlds__term_norm__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 244 "term_norm.m"
    return transform_hlds__term_norm__HeadVar__3_3;
#line 244 "term_norm.m"
  }
#line 36 "term_norm.m"
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
