/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module transform_hlds.term_traversal. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_traversal__init
ENDINIT
*/

#include "transform_hlds.term_traversal.mih"


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
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 133 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 136 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 139 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 142 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 145 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5];

#line 154 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0;

#line 157 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1];

#line 160 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1];

#line 163 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1];

#line 166 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1];

#line 169 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 172 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 175 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2];

#line 178 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0;

#line 181 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2];

#line 184 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1;

#line 187 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1];

#line 190 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1];

#line 193 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2];

#line 196 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2];

#line 199 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2];

#line 202 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 205 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0;

#line 208 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 211 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8];

#line 214 "transform_hlds.term_traversal.c"
static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8];

#line 217 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0;

#line 220 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1];

#line 223 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1];

#line 226 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1];

#line 229 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1];

#line 232 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 235 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 237 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 240 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 243 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 245 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 247 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 250 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 253 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 255 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 258 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 261 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 263 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 265 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 268 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 271 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 273 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 276 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 279 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 281 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 283 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 696 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 696 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 696 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 694 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 694 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 694 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 692 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 692 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 692 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 690 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 690 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 690 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 688 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 688 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 688 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 630 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 630 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 630 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5);

#line 609 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorMsg_8,
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 609 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 585 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 585 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 585 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7);

#line 568 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 568 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 568 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12);

#line 544 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 544 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 544 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 544 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 544 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 544 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 520 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 520 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 520 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 520 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18);

#line 489 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 489 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 489 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 489 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3);

#line 443 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 443 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 443 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 443 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 443 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8);

#line 424 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 424 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 407 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 407 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 394 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 394 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 394 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 394 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6);

#line 382 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 382 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 382 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4);

#line 367 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_8_p_0(
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 367 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 367 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);

#line 356 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_8_p_0(
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 356 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 356 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);

#line 347 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_conj_8_p_0(
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 347 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_4,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 347 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);

#line 278 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_2(
#line 278 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 278 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);

#line 247 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_1(
#line 247 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 247 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_3[2][5];




static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
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



#line 660 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 668 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 677 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

#line 685 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 693 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 701 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 709 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 718 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0 = {
  (MR_String) "term_path_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 733 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

#line 738 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0
  }
};

#line 747 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

#line 752 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1] = {
  (MR_Integer) 0
};

#line 757 "transform_hlds.term_traversal.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_path_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_path_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_path_info",
  {
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0
  },
  {
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0
};

#line 778 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 786 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 794 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 800 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0 = {
  (MR_String) "term_traversal_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 815 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 821 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1 = {
  (MR_String) "term_traversal_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 836 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 841 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1
};

#line 846 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1
  }
};

#line 860 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1,
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 866 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 872 "transform_hlds.term_traversal.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_info",
  {
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0
  },
  {
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0
};

#line 893 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 902 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 910 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 919 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 931 "transform_hlds.term_traversal.c"
static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8] = {
  (MR_String) "term_trav_functor_info",
  (MR_String) "term_trav_ppid",
  (MR_String) "term_trav_context",
  (MR_String) "term_trav_vartypes",
  (MR_String) "term_trav_output_suppliers",
  (MR_String) "term_trav_rec_input_supplier",
  (MR_String) "term_trav_max_errors",
  (MR_String) "term_trav_max_paths"
};

#line 943 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0 = {
  (MR_String) "term_traversal_params",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0,
  NULL,
  NULL
};

#line 958 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 963 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0
  }
};

#line 972 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 977 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1] = {
  (MR_Integer) 0
};

#line 982 "transform_hlds.term_traversal.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_params",
  {
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0
  },
  {
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0
};

#line 1003 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 1006 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1008 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1010 "transform_hlds.term_traversal.c"
{
#line 1012 "transform_hlds.term_traversal.c"
  {
#line 1014 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1017 "transform_hlds.term_traversal.c"
    {
#line 1019 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1022 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1024 "transform_hlds.term_traversal.c"
  }
#line 1026 "transform_hlds.term_traversal.c"
}

#line 1029 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 1032 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1034 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1036 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1038 "transform_hlds.term_traversal.c"
{
#line 1040 "transform_hlds.term_traversal.c"
  {
#line 1042 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1045 "transform_hlds.term_traversal.c"
    {
#line 1047 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_path_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1050 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1052 "transform_hlds.term_traversal.c"
  }
#line 1054 "transform_hlds.term_traversal.c"
}

#line 1057 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 1060 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1062 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1064 "transform_hlds.term_traversal.c"
{
#line 1066 "transform_hlds.term_traversal.c"
  {
#line 1068 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1071 "transform_hlds.term_traversal.c"
    {
#line 1073 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1076 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1078 "transform_hlds.term_traversal.c"
  }
#line 1080 "transform_hlds.term_traversal.c"
}

#line 1083 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 1086 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1088 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1090 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1092 "transform_hlds.term_traversal.c"
{
#line 1094 "transform_hlds.term_traversal.c"
  {
#line 1096 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1099 "transform_hlds.term_traversal.c"
    {
#line 1101 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1104 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1106 "transform_hlds.term_traversal.c"
  }
#line 1108 "transform_hlds.term_traversal.c"
}

#line 1111 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 1114 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1116 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1118 "transform_hlds.term_traversal.c"
{
#line 1120 "transform_hlds.term_traversal.c"
  {
#line 1122 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1125 "transform_hlds.term_traversal.c"
    {
#line 1127 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1130 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1132 "transform_hlds.term_traversal.c"
  }
#line 1134 "transform_hlds.term_traversal.c"
}

#line 1137 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 1140 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1142 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1144 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1146 "transform_hlds.term_traversal.c"
{
#line 1148 "transform_hlds.term_traversal.c"
  {
#line 1150 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1153 "transform_hlds.term_traversal.c"
    {
#line 1155 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1158 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1160 "transform_hlds.term_traversal.c"
  }
#line 1162 "transform_hlds.term_traversal.c"
}

#line 652 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
#line 652 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 652 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 652 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 652 "term_traversal.m"
{
#line 652 "term_traversal.m"
  {
#line 652 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 652 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_27 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 652 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_28 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 652 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_27 == transform_hlds__term_traversal__CastY_28);
#line 652 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1189 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 652 "term_traversal.m"
    else
#line 652 "term_traversal.m"
      {
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 5)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 6)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 7)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;

#line 652 "term_traversal.m"
        {
#line 652 "term_traversal.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_traversal__V_20_20, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
        }
#line 1235 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_20_20 == (MR_Integer) 0);
#line 652 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_20_20;
#line 652 "term_traversal.m"
        else
#line 652 "term_traversal.m"
          {
#line 652 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_21_21;

#line 652 "term_traversal.m"
            {
#line 652 "term_traversal.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_21_21, transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
            }
#line 1255 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 652 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 652 "term_traversal.m"
            else
#line 652 "term_traversal.m"
              {
#line 652 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_22_22;

#line 652 "term_traversal.m"
                {
#line 652 "term_traversal.m"
                  mercury__term____Compare____context_0_0(&transform_hlds__term_traversal__V_22_22, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_14_14);
                }
#line 1275 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_22_22 == (MR_Integer) 0);
#line 652 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_22_22;
#line 652 "term_traversal.m"
                else
#line 652 "term_traversal.m"
                  {
#line 652 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_23_23;

#line 652 "term_traversal.m"
                    {
#line 652 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__term_traversal__V_23_23, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                    }
#line 1295 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_23_23 == (MR_Integer) 0);
#line 652 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_23_23;
#line 652 "term_traversal.m"
                    else
#line 652 "term_traversal.m"
                      {
#line 652 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_24_24;

#line 652 "term_traversal.m"
                        {
#line 652 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &transform_hlds__term_traversal__V_24_24, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                        }
#line 1315 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_24_24 == (MR_Integer) 0);
#line 652 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_24_24;
#line 652 "term_traversal.m"
                        else
#line 652 "term_traversal.m"
                          {
#line 652 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_25_25;

#line 652 "term_traversal.m"
                            {
#line 652 "term_traversal.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &transform_hlds__term_traversal__V_25_25, ((MR_Box) (transform_hlds__term_traversal__V_9_9)), ((MR_Box) (transform_hlds__term_traversal__V_17_17)));
                            }
#line 1335 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_25_25 == (MR_Integer) 0);
#line 652 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_25_25;
#line 652 "term_traversal.m"
                            else
#line 652 "term_traversal.m"
                              {
#line 652 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__V_26_26;

#line 652 "term_traversal.m"
                                {
#line 652 "term_traversal.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_26_26, transform_hlds__term_traversal__V_10_10, transform_hlds__term_traversal__V_18_18);
                                }
#line 1355 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_26_26 == (MR_Integer) 0);
#line 652 "term_traversal.m"
                                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 652 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_26_26;
#line 652 "term_traversal.m"
                                else
#line 652 "term_traversal.m"
                                  {
#line 652 "term_traversal.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_traversal__HeadVar__1_1, transform_hlds__term_traversal__V_11_11, transform_hlds__term_traversal__V_19_19);
#line 652 "term_traversal.m"
                                    return;
                                  }
#line 652 "term_traversal.m"
                              }
#line 652 "term_traversal.m"
                          }
#line 652 "term_traversal.m"
                      }
#line 652 "term_traversal.m"
                  }
#line 652 "term_traversal.m"
              }
#line 652 "term_traversal.m"
          }
#line 652 "term_traversal.m"
      }
#line 652 "term_traversal.m"
  }
#line 652 "term_traversal.m"
}

#line 652 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0(
#line 652 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 652 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 652 "term_traversal.m"
{
#line 652 "term_traversal.m"
  {
#line 652 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 652 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 652 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_20 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 652 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_19 == transform_hlds__term_traversal__CastY_20);
#line 652 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 652 "term_traversal.m"
    else
#line 652 "term_traversal.m"
      {
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeCtorInfo_24_24;
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_25_25;
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_26_26;
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 5)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 6)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 7)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 652 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 652 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));

#line 1458 "transform_hlds.term_traversal.c"
        {
#line 1460 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_11_11);
        }
#line 652 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
          {
#line 1467 "transform_hlds.term_traversal.c"
            {
#line 1469 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
            }
#line 652 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
              {
#line 1476 "transform_hlds.term_traversal.c"
                {
#line 1478 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
                }
#line 652 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                  {
#line 1485 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1487 "transform_hlds.term_traversal.c"
                    {
#line 1489 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_14_14)));
                    }
#line 652 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                      {
#line 1496 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
#line 1498 "transform_hlds.term_traversal.c"
                        {
#line 1500 "transform_hlds.term_traversal.c"
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                        }
#line 652 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                          {
#line 1507 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
#line 1509 "transform_hlds.term_traversal.c"
                            {
#line 1511 "transform_hlds.term_traversal.c"
                              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                            }
#line 652 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 652 "term_traversal.m"
                              {
#line 1518 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_9_9 == transform_hlds__term_traversal__V_17_17);
#line 652 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 1522 "transform_hlds.term_traversal.c"
                                  transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_10_10 == transform_hlds__term_traversal__V_18_18);
#line 652 "term_traversal.m"
                              }
#line 652 "term_traversal.m"
                          }
#line 652 "term_traversal.m"
                      }
#line 652 "term_traversal.m"
                  }
#line 652 "term_traversal.m"
              }
#line 652 "term_traversal.m"
          }
#line 652 "term_traversal.m"
      }
#line 652 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 652 "term_traversal.m"
  }
#line 652 "term_traversal.m"
}

#line 40 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0(
#line 40 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 40 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 40 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 40 "term_traversal.m"
{
#line 40 "term_traversal.m"
  {
#line 40 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 40 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_22 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 40 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_23 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 40 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_22 == transform_hlds__term_traversal__CastY_23);
#line 40 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1569 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "term_traversal.m"
    else
#line 40 "term_traversal.m"
      if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 40 "term_traversal.m"
        {
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "term_traversal.m"
          if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 40 "term_traversal.m"
            {
#line 40 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_21_21;

#line 40 "term_traversal.m"
              {
#line 40 "term_traversal.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], &transform_hlds__term_traversal__V_21_21, ((MR_Box) (transform_hlds__term_traversal__V_29_29)), ((MR_Box) (transform_hlds__term_traversal__V_19_19)));
              }
#line 1598 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 40 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 40 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 40 "term_traversal.m"
              else
#line 40 "term_traversal.m"
                {
#line 40 "term_traversal.m"
                  {
#line 40 "term_traversal.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_28_28)), ((MR_Box) (transform_hlds__term_traversal__V_20_20)));
#line 40 "term_traversal.m"
                    return;
                  }
#line 40 "term_traversal.m"
                }
#line 40 "term_traversal.m"
            }
#line 40 "term_traversal.m"
          else
#line 1623 "transform_hlds.term_traversal.c"
            *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "term_traversal.m"
        }
#line 40 "term_traversal.m"
      else
#line 40 "term_traversal.m"
        {
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "term_traversal.m"
          if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1638 "transform_hlds.term_traversal.c"
            *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "term_traversal.m"
          else
#line 40 "term_traversal.m"
            {
#line 40 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_8_8;

#line 40 "term_traversal.m"
              {
#line 40 "term_traversal.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[7], &transform_hlds__term_traversal__V_8_8, ((MR_Box) (transform_hlds__term_traversal__V_31_31)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
              }
#line 1656 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_8_8 == (MR_Integer) 0);
#line 40 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 40 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_8_8;
#line 40 "term_traversal.m"
              else
#line 40 "term_traversal.m"
                {
#line 40 "term_traversal.m"
                  {
#line 40 "term_traversal.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_30_30)), ((MR_Box) (transform_hlds__term_traversal__V_7_7)));
#line 40 "term_traversal.m"
                    return;
                  }
#line 40 "term_traversal.m"
                }
#line 40 "term_traversal.m"
            }
#line 40 "term_traversal.m"
        }
#line 40 "term_traversal.m"
  }
#line 40 "term_traversal.m"
}

#line 40 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0(
#line 40 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 40 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 40 "term_traversal.m"
{
#line 40 "term_traversal.m"
  {
#line 40 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 40 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_11 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 40 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_12 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 40 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_11 == transform_hlds__term_traversal__CastY_12);
#line 40 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 40 "term_traversal.m"
    else
#line 40 "term_traversal.m"
      if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 40 "term_traversal.m"
        {
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__TypeInfo_13_13;
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__TypeInfo_14_14;
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_9_9;
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_10_10;

#line 40 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "term_traversal.m"
          if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
            {
#line 40 "term_traversal.m"
              transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "term_traversal.m"
              transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 1739 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1741 "transform_hlds.term_traversal.c"
              {
#line 1743 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
              }
#line 40 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
                {
#line 1750 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1752 "transform_hlds.term_traversal.c"
                  {
#line 1754 "transform_hlds.term_traversal.c"
                    return transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
                  }
#line 40 "term_traversal.m"
                }
#line 40 "term_traversal.m"
            }
#line 40 "term_traversal.m"
        }
#line 40 "term_traversal.m"
      else
#line 40 "term_traversal.m"
        {
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__TypeInfo_15_15;
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_5_5;
#line 40 "term_traversal.m"
          MR_Word transform_hlds__term_traversal__V_6_6;

#line 40 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 40 "term_traversal.m"
          if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
            {
#line 40 "term_traversal.m"
              transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "term_traversal.m"
              transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 1790 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[7];
#line 1792 "transform_hlds.term_traversal.c"
              {
#line 1794 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_traversal__V_3_3)), ((MR_Box) (transform_hlds__term_traversal__V_5_5)));
              }
#line 40 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
                {
#line 1801 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1803 "transform_hlds.term_traversal.c"
                  {
#line 1805 "transform_hlds.term_traversal.c"
                    return transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
                  }
#line 40 "term_traversal.m"
                }
#line 40 "term_traversal.m"
            }
#line 40 "term_traversal.m"
        }
#line 40 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 40 "term_traversal.m"
  }
#line 40 "term_traversal.m"
}

#line 71 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0(
#line 71 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 71 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 71 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 71 "term_traversal.m"
{
#line 71 "term_traversal.m"
  {
#line 71 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 71 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_18 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 71 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 71 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_18 == transform_hlds__term_traversal__CastY_19);
#line 71 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1845 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "term_traversal.m"
    else
#line 71 "term_traversal.m"
      {
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14;

#line 71 "term_traversal.m"
        {
#line 71 "term_traversal.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_14_14, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_9_9);
        }
#line 1879 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_14_14 == (MR_Integer) 0);
#line 71 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 71 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_14_14;
#line 71 "term_traversal.m"
        else
#line 71 "term_traversal.m"
          {
#line 71 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_15_15;

#line 71 "term_traversal.m"
            {
#line 71 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[3], &transform_hlds__term_traversal__V_15_15, ((MR_Box) (transform_hlds__term_traversal__V_5_5)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
            }
#line 1899 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_15_15 == (MR_Integer) 0);
#line 71 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 71 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_15_15;
#line 71 "term_traversal.m"
            else
#line 71 "term_traversal.m"
              {
#line 71 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_16_16;

#line 71 "term_traversal.m"
                {
#line 71 "term_traversal.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_16_16, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_11_11);
                }
#line 1919 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_16_16 == (MR_Integer) 0);
#line 71 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 71 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_16_16;
#line 71 "term_traversal.m"
                else
#line 71 "term_traversal.m"
                  {
#line 71 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_17_17;

#line 71 "term_traversal.m"
                    {
#line 71 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[4], &transform_hlds__term_traversal__V_17_17, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                    }
#line 1939 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_17_17 == (MR_Integer) 0);
#line 71 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 71 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_17_17;
#line 71 "term_traversal.m"
                    else
#line 71 "term_traversal.m"
                      {
#line 71 "term_traversal.m"
                        {
#line 71 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[5], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_13_13)));
#line 71 "term_traversal.m"
                          return;
                        }
#line 71 "term_traversal.m"
                      }
#line 71 "term_traversal.m"
                  }
#line 71 "term_traversal.m"
              }
#line 71 "term_traversal.m"
          }
#line 71 "term_traversal.m"
      }
#line 71 "term_traversal.m"
  }
#line 71 "term_traversal.m"
}

#line 71 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0(
#line 71 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 71 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 71 "term_traversal.m"
{
#line 71 "term_traversal.m"
  {
#line 71 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 71 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_13 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 71 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_14 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 71 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_13 == transform_hlds__term_traversal__CastY_14);
#line 71 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 71 "term_traversal.m"
    else
#line 71 "term_traversal.m"
      {
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_17_17;
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_18_18;
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 71 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));

#line 2028 "transform_hlds.term_traversal.c"
        {
#line 2030 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_8_8);
        }
#line 71 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
          {
#line 2037 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[3];
#line 2039 "transform_hlds.term_traversal.c"
            {
#line 2041 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 71 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
              {
#line 2048 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_5_5 == transform_hlds__term_traversal__V_10_10);
#line 71 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
                  {
#line 2054 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_17_17 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[4];
#line 2056 "transform_hlds.term_traversal.c"
                    {
#line 2058 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_17_17, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_11_11)));
                    }
#line 71 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
                      {
#line 2065 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[5];
#line 2067 "transform_hlds.term_traversal.c"
                        {
#line 2069 "transform_hlds.term_traversal.c"
                          return transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                        }
#line 71 "term_traversal.m"
                      }
#line 71 "term_traversal.m"
                  }
#line 71 "term_traversal.m"
              }
#line 71 "term_traversal.m"
          }
#line 71 "term_traversal.m"
      }
#line 71 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 71 "term_traversal.m"
  }
#line 71 "term_traversal.m"
}

#line 696 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 696 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 696 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 696 "term_traversal.m"
{
#line 706 "term_traversal.m"
  {
#line 706 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 706 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 706 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 706 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 706 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 706 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 706 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 706 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 706 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 706 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 706 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 706 "term_traversal.m"
  }
#line 696 "term_traversal.m"
}

#line 694 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 694 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 694 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 694 "term_traversal.m"
{
#line 705 "term_traversal.m"
  {
#line 705 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 705 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 705 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 705 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 705 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 705 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 705 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 705 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 705 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 705 "term_traversal.m"
  }
#line 694 "term_traversal.m"
}

#line 692 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 692 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 692 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 692 "term_traversal.m"
{
#line 704 "term_traversal.m"
  {
#line 704 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 704 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 704 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 704 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 704 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 704 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 704 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 704 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 704 "term_traversal.m"
  }
#line 692 "term_traversal.m"
}

#line 690 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 690 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 690 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 690 "term_traversal.m"
{
#line 703 "term_traversal.m"
  {
#line 703 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 703 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 703 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 703 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 703 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 703 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 703 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 703 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 703 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 703 "term_traversal.m"
  }
#line 690 "term_traversal.m"
}

#line 688 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 688 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 688 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 688 "term_traversal.m"
{
#line 702 "term_traversal.m"
  {
#line 702 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5;
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 702 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 702 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 702 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 702 "term_traversal.m"
    transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 702 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 702 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 702 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 702 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 702 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 702 "term_traversal.m"
  }
#line 688 "term_traversal.m"
}

#line 630 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 630 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 630 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5)
#line 630 "term_traversal.m"
{
#line 633 "term_traversal.m"
  while (MR_TRUE)
#line 633 "term_traversal.m"
    {
#line 633 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 633 "term_traversal.m"
      {
#line 633 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 633 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_3;
#line 633 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_4;

#line 633 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 633 "term_traversal.m"
          {
#line 633 "term_traversal.m"
            transform_hlds__term_traversal__Path_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "term_traversal.m"
            transform_hlds__term_traversal__Paths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "term_traversal.m"
            {
#line 635 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 4)));
#line 635 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 0)));
#line 635 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 1)));
#line 635 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 2)));
#line 635 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 3)));

#line 636 "term_traversal.m"
              {
#line 636 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__Vars_10, transform_hlds__term_traversal__OutVars_5);
              }
#line 635 "term_traversal.m"
            }
#line 637 "term_traversal.m"
            if (!(transform_hlds__term_traversal__succeeded))
#line 638 "term_traversal.m"
              {
#line 638 "term_traversal.m"
                /* direct tailcall eliminated */
#line 638 "term_traversal.m"
                {
#line 638 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths_4;

#line 638 "term_traversal.m"
                  transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 638 "term_traversal.m"
                }
#line 638 "term_traversal.m"
                continue;
#line 638 "term_traversal.m"
              }
#line 633 "term_traversal.m"
          }
#line 633 "term_traversal.m"
        return transform_hlds__term_traversal__succeeded;
#line 633 "term_traversal.m"
      }
#line 633 "term_traversal.m"
      break;
#line 633 "term_traversal.m"
    }
#line 630 "term_traversal.m"
}

#line 609 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorMsg_8,
#line 609 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 609 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 609 "term_traversal.m"
{
#line 615 "term_traversal.m"
  {
#line 615 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 615 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 616 "term_traversal.m"
      *transform_hlds__term_traversal__Info_10 = transform_hlds__term_traversal__Info0_9;
#line 615 "term_traversal.m"
    else
#line 618 "term_traversal.m"
      {
#line 618 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 618 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 620 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathList_15;

#line 620 "term_traversal.m"
        {
#line 620 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_traversal__Paths_13, &transform_hlds__term_traversal__PathList_15);
        }
#line 621 "term_traversal.m"
        {
#line 621 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(transform_hlds__term_traversal__PathList_15, transform_hlds__term_traversal__OutVars_6);
        }
#line 625 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 623 "term_traversal.m"
          {
#line 623 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorContext_16;
#line 623 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_17_17;

#line 623 "term_traversal.m"
            {
#line 623 "term_traversal.m"
              transform_hlds__term_traversal__ErrorContext_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_16, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorMsg_8));
#line 623 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_16, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 623 "term_traversal.m"
            }
#line 624 "term_traversal.m"
            {
#line 624 "term_traversal.m"
              transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_16));
#line 624 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "term_traversal.m"
            }
#line 624 "term_traversal.m"
            {
#line 624 "term_traversal.m"
              MR_Word base;
#line 624 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "term_traversal.m"
              *transform_hlds__term_traversal__Info_10 = base;
#line 624 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
#line 624 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_14));
#line 624 "term_traversal.m"
            }
#line 623 "term_traversal.m"
          }
#line 625 "term_traversal.m"
        else
#line 626 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = transform_hlds__term_traversal__Info0_9;
#line 618 "term_traversal.m"
      }
#line 615 "term_traversal.m"
  }
#line 609 "term_traversal.m"
}

#line 585 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 585 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 585 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 585 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7)
#line 585 "term_traversal.m"
{
#line 589 "term_traversal.m"
  while (MR_TRUE)
#line 589 "term_traversal.m"
    {
#line 589 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 589 "term_traversal.m"
      {
#line 589 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 589 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6;
#line 589 "term_traversal.m"
        else
#line 591 "term_traversal.m"
          {
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ProcData_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 0)));
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Start_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 1)));
#line 591 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Gamma0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 2)));
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PPIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 3)));
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Vars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 4)));
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path_31;
#line 591 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 593 "term_traversal.m"
            {
#line 593 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__OutVars_3, transform_hlds__term_traversal__Vars0_26);
            }
#line 600 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 595 "term_traversal.m"
              {
#line 595 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__TypeInfo_38_38;
#line 595 "term_traversal.m"
                MR_Integer transform_hlds__term_traversal__Gamma_27 = (transform_hlds__term_traversal__CallGamma_4 + transform_hlds__term_traversal__Gamma0_24);
#line 595 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__PPIds_28;
#line 595 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars1_29;
#line 595 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars_30;

#line 596 "term_traversal.m"
                {
#line 596 "term_traversal.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_traversal__CallPPIds_5, transform_hlds__term_traversal__PPIds0_25, &transform_hlds__term_traversal__PPIds_28);
                }
#line 2571 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_38_38 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 597 "term_traversal.m"
                {
#line 597 "term_traversal.m"
                  mercury__bag__subtract_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__Vars0_26, transform_hlds__term_traversal__OutVars_3, &transform_hlds__term_traversal__Vars1_29);
                }
#line 598 "term_traversal.m"
                {
#line 598 "term_traversal.m"
                  mercury__bag__union_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__InVars_2, transform_hlds__term_traversal__Vars1_29, &transform_hlds__term_traversal__Vars_30);
                }
#line 599 "term_traversal.m"
                {
#line 599 "term_traversal.m"
                  transform_hlds__term_traversal__Path_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 599 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 0) = ((MR_Box) (transform_hlds__term_traversal__ProcData_22));
#line 599 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 1) = ((MR_Box) (transform_hlds__term_traversal__Start_23));
#line 599 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 2) = ((MR_Box) (transform_hlds__term_traversal__Gamma_27));
#line 599 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 3) = ((MR_Box) (transform_hlds__term_traversal__PPIds_28));
#line 599 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 4) = ((MR_Box) (transform_hlds__term_traversal__Vars_30));
#line 599 "term_traversal.m"
                }
#line 595 "term_traversal.m"
              }
#line 600 "term_traversal.m"
            else
#line 602 "term_traversal.m"
              transform_hlds__term_traversal__Path_31 = transform_hlds__term_traversal__Path0_15;
#line 604 "term_traversal.m"
            {
#line 604 "term_traversal.m"
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_31)), transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6, &transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34);
            }
#line 605 "term_traversal.m"
            /* direct tailcall eliminated */
#line 605 "term_traversal.m"
            {
#line 605 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths0_16;
#line 605 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 605 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6;
#line 605 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 605 "term_traversal.m"
            }
#line 605 "term_traversal.m"
            continue;
#line 591 "term_traversal.m"
          }
#line 589 "term_traversal.m"
      }
#line 589 "term_traversal.m"
      break;
#line 589 "term_traversal.m"
    }
#line 585 "term_traversal.m"
}

#line 568 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 568 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 568 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 568 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12)
#line 568 "term_traversal.m"
{
#line 574 "term_traversal.m"
  {
#line 574 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 574 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_11)) == (MR_mktag((MR_Integer) 1))))
#line 575 "term_traversal.m"
      *transform_hlds__term_traversal__Info_12 = transform_hlds__term_traversal__Info0_11;
#line 574 "term_traversal.m"
    else
#line 577 "term_traversal.m"
      {
#line 577 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeCtorInfo_20_20 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 577 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 0)));
#line 577 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 1)));
#line 577 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathsList0_17;
#line 577 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths0_18;
#line 577 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths_19;

#line 578 "term_traversal.m"
        {
#line 578 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, transform_hlds__term_traversal__Paths0_15, &transform_hlds__term_traversal__PathsList0_17);
        }
#line 579 "term_traversal.m"
        {
#line 579 "term_traversal.m"
          mercury__set__init_1_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, &transform_hlds__term_traversal__NewPaths0_18);
        }
#line 580 "term_traversal.m"
        {
#line 580 "term_traversal.m"
          transform_hlds__term_traversal__record_change_2_7_p_0(transform_hlds__term_traversal__PathsList0_17, transform_hlds__term_traversal__InVars_7, transform_hlds__term_traversal__OutVars_8, transform_hlds__term_traversal__Gamma_9, transform_hlds__term_traversal__CalledPPIds_10, transform_hlds__term_traversal__NewPaths0_18, &transform_hlds__term_traversal__NewPaths_19);
        }
#line 582 "term_traversal.m"
        {
#line 582 "term_traversal.m"
          MR_Word base;
#line 582 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "term_traversal.m"
          *transform_hlds__term_traversal__Info_12 = base;
#line 582 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__NewPaths_19));
#line 582 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_16));
#line 582 "term_traversal.m"
        }
#line 577 "term_traversal.m"
      }
#line 574 "term_traversal.m"
  }
#line 568 "term_traversal.m"
}

#line 544 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 544 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 544 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 544 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 544 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 544 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 544 "term_traversal.m"
{
#line 548 "term_traversal.m"
  {
#line 548 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 548 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "term_traversal.m"
        {
#line 548 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "term_traversal.m"
        }
#line 548 "term_traversal.m"
      else
#line 549 "term_traversal.m"
        {
#line 550 "term_traversal.m"
          {
#line 550 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 550 "term_traversal.m"
            return;
          }
#line 549 "term_traversal.m"
        }
#line 548 "term_traversal.m"
    else
#line 548 "term_traversal.m"
      {
#line 548 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 548 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "term_traversal.m"
          {
#line 552 "term_traversal.m"
            {
#line 552 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 552 "term_traversal.m"
              return;
            }
#line 551 "term_traversal.m"
          }
#line 548 "term_traversal.m"
        else
#line 554 "term_traversal.m"
          {
#line 554 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Mode0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 0)));
#line 554 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Modes0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 1)));
#line 554 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailArgs_30;
#line 554 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailModes_31;
#line 554 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Type_32;

#line 555 "term_traversal.m"
            {
#line 555 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_33_33, &transform_hlds__term_traversal__TailArgs_30, transform_hlds__term_traversal__Modes0_28, &transform_hlds__term_traversal__TailModes_31);
            }
#line 557 "term_traversal.m"
            {
#line 557 "term_traversal.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_34_34, &transform_hlds__term_traversal__Type_32);
            }
#line 558 "term_traversal.m"
            {
#line 558 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_traversal__Type_32);
            }
#line 561 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 559 "term_traversal.m"
              {
#line 559 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__TailArgs_30;
#line 560 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__5_5 = transform_hlds__term_traversal__TailModes_31;
#line 559 "term_traversal.m"
              }
#line 561 "term_traversal.m"
            else
#line 562 "term_traversal.m"
              {
#line 562 "term_traversal.m"
                {
#line 562 "term_traversal.m"
                  MR_Word base;
#line 562 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__3_3 = base;
#line 562 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_34_34));
#line 562 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailArgs_30));
#line 562 "term_traversal.m"
                }
#line 563 "term_traversal.m"
                {
#line 563 "term_traversal.m"
                  MR_Word base;
#line 563 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 563 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Mode0_27));
#line 563 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailModes_31));
#line 563 "term_traversal.m"
                }
#line 562 "term_traversal.m"
              }
#line 554 "term_traversal.m"
          }
#line 548 "term_traversal.m"
      }
#line 548 "term_traversal.m"
  }
#line 544 "term_traversal.m"
}

#line 520 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 520 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 520 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 520 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 520 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18)
#line 520 "term_traversal.m"
{
#line 525 "term_traversal.m"
  {
#line 525 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__FunctorInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 0)));
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 3)));
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Type_21;
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__TypeCtor_24;
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args1_25;
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes1_26;
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args_27;
#line 525 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes_28;
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 1)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 2)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 4)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 5)));
#line 701 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 6)));
#line 701 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 7)));

#line 528 "term_traversal.m"
    {
#line 528 "term_traversal.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__OutVar_11, &transform_hlds__term_traversal__Type_21);
    }
#line 529 "term_traversal.m"
    {
#line 529 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_traversal__Type_21);
    }
#line 529 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 525 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 525 "term_traversal.m"
      {
#line 532 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 531 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 532 "term_traversal.m"
        else
#line 532 "term_traversal.m"
          if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 533 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 532 "term_traversal.m"
          else
#line 532 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = MR_FALSE;
#line 530 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 525 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 525 "term_traversal.m"
          {
#line 536 "term_traversal.m"
            {
#line 536 "term_traversal.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_traversal__Type_21, &transform_hlds__term_traversal__TypeCtor_24);
            }
#line 537 "term_traversal.m"
            {
#line 537 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__Args0_13, &transform_hlds__term_traversal__Args1_25, transform_hlds__term_traversal__Modes0_14, &transform_hlds__term_traversal__Modes1_26);
            }
#line 539 "term_traversal.m"
            {
#line 539 "term_traversal.m"
              transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__FunctorInfo_19, transform_hlds__term_traversal__TypeCtor_24, transform_hlds__term_traversal__ConsId_12, transform_hlds__term_traversal__Gamma_16, transform_hlds__term_traversal__Args1_25, &transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes1_26, &transform_hlds__term_traversal__Modes_28);
            }
#line 541 "term_traversal.m"
            {
#line 541 "term_traversal.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes_28, transform_hlds__term_traversal__InVars_17, transform_hlds__term_traversal__OutVars_18);
            }
#line 541 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 525 "term_traversal.m"
          }
#line 525 "term_traversal.m"
      }
#line 525 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 525 "term_traversal.m"
  }
#line 520 "term_traversal.m"
}

#line 489 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 489 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 489 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 489 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3)
#line 489 "term_traversal.m"
{
#line 492 "term_traversal.m"
  {
#line 492 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 492 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "term_traversal.m"
        {
#line 493 "term_traversal.m"
          {
#line 493 "term_traversal.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__HeadVar__3_3);
#line 493 "term_traversal.m"
            return;
          }
#line 492 "term_traversal.m"
        }
#line 492 "term_traversal.m"
      else
#line 496 "term_traversal.m"
        {
#line 497 "term_traversal.m"
          {
#line 497 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 497 "term_traversal.m"
            return;
          }
#line 496 "term_traversal.m"
        }
#line 492 "term_traversal.m"
    else
#line 492 "term_traversal.m"
      {
#line 492 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));

#line 492 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "term_traversal.m"
          {
#line 495 "term_traversal.m"
            {
#line 495 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 495 "term_traversal.m"
              return;
            }
#line 494 "term_traversal.m"
          }
#line 492 "term_traversal.m"
        else
#line 499 "term_traversal.m"
          {
#line 499 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSupplier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 499 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSuppliers_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 499 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Out1_22;

#line 500 "term_traversal.m"
            {
#line 500 "term_traversal.m"
              transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__V_25_25, transform_hlds__term_traversal__RecInputSuppliers_20, &transform_hlds__term_traversal__Out1_22);
            }
#line 504 "term_traversal.m"
            if ((transform_hlds__term_traversal__RecInputSupplier_19 == (MR_Integer) 0))
#line 505 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__Out1_22;
#line 504 "term_traversal.m"
            else
#line 502 "term_traversal.m"
              {
#line 503 "term_traversal.m"
                {
#line 503 "term_traversal.m"
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__V_26_26)), transform_hlds__term_traversal__Out1_22, transform_hlds__term_traversal__HeadVar__3_3);
#line 503 "term_traversal.m"
                  return;
                }
#line 502 "term_traversal.m"
              }
#line 499 "term_traversal.m"
          }
#line 492 "term_traversal.m"
      }
#line 492 "term_traversal.m"
  }
#line 489 "term_traversal.m"
}

#line 443 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 443 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 443 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 443 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 443 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8)
#line 443 "term_traversal.m"
{
#line 448 "term_traversal.m"
  {
#line 448 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 448 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoA_5)) == (MR_mktag((MR_Integer) 1))))
#line 448 "term_traversal.m"
      {
#line 448 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 448 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 448 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 448 "term_traversal.m"
          {
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 448 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Errors_14;
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_31_31;
#line 448 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_32_32;
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 707 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 451 "term_traversal.m"
            {
#line 451 "term_traversal.m"
              transform_hlds__term_traversal__V_31_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_53_53, transform_hlds__term_traversal__ErrorsB_11);
            }
#line 451 "term_traversal.m"
            {
#line 451 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_31_31, &transform_hlds__term_traversal__Errors_14);
            }
#line 452 "term_traversal.m"
            {
#line 452 "term_traversal.m"
              transform_hlds__term_traversal__V_32_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_12);
            }
#line 452 "term_traversal.m"
            {
#line 452 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_32_32, &transform_hlds__term_traversal__CanLoop_15);
            }
#line 453 "term_traversal.m"
            {
#line 453 "term_traversal.m"
              MR_Word base;
#line 453 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 453 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_14));
#line 453 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 453 "term_traversal.m"
            }
#line 448 "term_traversal.m"
          }
#line 448 "term_traversal.m"
        else
#line 455 "term_traversal.m"
          {
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_30_30;
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 455 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_37;
#line 456 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 707 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 458 "term_traversal.m"
            {
#line 458 "term_traversal.m"
              transform_hlds__term_traversal__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_35);
            }
#line 458 "term_traversal.m"
            {
#line 458 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__MaxErrors_36, transform_hlds__term_traversal__V_30_30, &transform_hlds__term_traversal__CanLoop_37);
            }
#line 459 "term_traversal.m"
            {
#line 459 "term_traversal.m"
              MR_Word base;
#line 459 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 459 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_53_53));
#line 459 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_37));
#line 459 "term_traversal.m"
            }
#line 455 "term_traversal.m"
          }
#line 448 "term_traversal.m"
      }
#line 448 "term_traversal.m"
    else
#line 448 "term_traversal.m"
      {
#line 448 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 448 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 448 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 461 "term_traversal.m"
          {
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_29_29;
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 461 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_42;
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 707 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 464 "term_traversal.m"
            {
#line 464 "term_traversal.m"
              transform_hlds__term_traversal__V_29_29 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_40);
            }
#line 464 "term_traversal.m"
            {
#line 464 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__MaxErrors_41, transform_hlds__term_traversal__V_29_29, &transform_hlds__term_traversal__CanLoop_42);
            }
#line 465 "term_traversal.m"
            {
#line 465 "term_traversal.m"
              MR_Word base;
#line 465 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 465 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorsB_39));
#line 465 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_42));
#line 465 "term_traversal.m"
            }
#line 461 "term_traversal.m"
          }
#line 448 "term_traversal.m"
        else
#line 467 "term_traversal.m"
          {
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_51_51;
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PathsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths_20;
#line 467 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxPaths_21;
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_25_25;
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 467 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 467 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_46;
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 707 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 707 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_89_89;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_90_90;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_91_91;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_92_92;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_93_93;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_94_94;
#line 708 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_95_95;
#line 476 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Count_22;

#line 470 "term_traversal.m"
            {
#line 470 "term_traversal.m"
              transform_hlds__term_traversal__V_25_25 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_44);
            }
#line 470 "term_traversal.m"
            {
#line 470 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__MaxErrors_45, transform_hlds__term_traversal__V_25_25, &transform_hlds__term_traversal__CanLoop_46);
            }
#line 3386 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 471 "term_traversal.m"
            {
#line 471 "term_traversal.m"
              mercury__set__union_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__PathsB_19, transform_hlds__term_traversal__V_55_55, &transform_hlds__term_traversal__Paths_20);
            }
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 708 "term_traversal.m"
            transform_hlds__term_traversal__MaxPaths_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 476 "term_traversal.m"
            {
#line 476 "term_traversal.m"
              mercury__set__count_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__Paths_20, &transform_hlds__term_traversal__Count_22);
            }
#line 477 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__Count_22 <= transform_hlds__term_traversal__MaxPaths_21);
#line 480 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 479 "term_traversal.m"
              {
#line 479 "term_traversal.m"
                MR_Word base;
#line 479 "term_traversal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "term_traversal.m"
                *transform_hlds__term_traversal__Info_8 = base;
#line 479 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_20));
#line 479 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 479 "term_traversal.m"
              }
#line 480 "term_traversal.m"
            else
#line 481 "term_traversal.m"
              {
#line 481 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Context_23;
#line 481 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__ErrorContext_24;
#line 481 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_27_27;

#line 481 "term_traversal.m"
                {
#line 481 "term_traversal.m"
                  transform_hlds__term_traversal__params_get_context_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Context_23);
                }
#line 482 "term_traversal.m"
                {
#line 482 "term_traversal.m"
                  transform_hlds__term_traversal__ErrorContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 482 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_24, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_23));
#line 482 "term_traversal.m"
                }
#line 483 "term_traversal.m"
                {
#line 483 "term_traversal.m"
                  transform_hlds__term_traversal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_24));
#line 483 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "term_traversal.m"
                }
#line 483 "term_traversal.m"
                {
#line 483 "term_traversal.m"
                  MR_Word base;
#line 483 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "term_traversal.m"
                  *transform_hlds__term_traversal__Info_8 = base;
#line 483 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_27_27));
#line 483 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 483 "term_traversal.m"
                }
#line 481 "term_traversal.m"
              }
#line 467 "term_traversal.m"
          }
#line 448 "term_traversal.m"
      }
#line 448 "term_traversal.m"
  }
#line 443 "term_traversal.m"
}

#line 424 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 424 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 424 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 424 "term_traversal.m"
{
#line 430 "term_traversal.m"
  {
#line 430 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 430 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 430 "term_traversal.m"
      {
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_13;
#line 430 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_30_30;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_31_31;
#line 707 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_32_32;

#line 431 "term_traversal.m"
        {
#line 431 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 431 "term_traversal.m"
        }
#line 431 "term_traversal.m"
        {
#line 431 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_12));
#line 431 "term_traversal.m"
        }
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 433 "term_traversal.m"
        {
#line 433 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__CanLoop1_13, &transform_hlds__term_traversal__CanLoop_15);
        }
#line 434 "term_traversal.m"
        {
#line 434 "term_traversal.m"
          MR_Word base;
#line 434 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 434 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_11));
#line 434 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 434 "term_traversal.m"
        }
#line 430 "term_traversal.m"
      }
#line 430 "term_traversal.m"
    else
#line 436 "term_traversal.m"
      {
#line 436 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 436 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17;
#line 436 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 436 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_20;
#line 436 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_21;
#line 436 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_22;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_35_35;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_36_36;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_37_37;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_38_38;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_39_39;
#line 707 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_40_40;

#line 437 "term_traversal.m"
        {
#line 437 "term_traversal.m"
          transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 437 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 437 "term_traversal.m"
        }
#line 437 "term_traversal.m"
        {
#line 437 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
#line 437 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_19));
#line 437 "term_traversal.m"
        }
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 439 "term_traversal.m"
        {
#line 439 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_traversal__MaxErrors_21, transform_hlds__term_traversal__CanLoop1_20, &transform_hlds__term_traversal__CanLoop_22);
        }
#line 440 "term_traversal.m"
        {
#line 440 "term_traversal.m"
          MR_Word base;
#line 440 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 440 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_16));
#line 440 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_22));
#line 440 "term_traversal.m"
        }
#line 436 "term_traversal.m"
      }
#line 430 "term_traversal.m"
  }
#line 424 "term_traversal.m"
}

#line 407 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 407 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 407 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 407 "term_traversal.m"
{
#line 413 "term_traversal.m"
  {
#line 413 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 413 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 413 "term_traversal.m"
      {
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors1_13;
#line 413 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_15;
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_24_24;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 707 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 707 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_30_30;

#line 414 "term_traversal.m"
        {
#line 414 "term_traversal.m"
          transform_hlds__term_traversal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 414 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 414 "term_traversal.m"
        }
#line 414 "term_traversal.m"
        {
#line 414 "term_traversal.m"
          transform_hlds__term_traversal__Errors1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_20_20));
#line 414 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__Errors0_11));
#line 414 "term_traversal.m"
        }
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 707 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 416 "term_traversal.m"
        {
#line 416 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__Errors1_13, &transform_hlds__term_traversal__Errors_15);
        }
#line 417 "term_traversal.m"
        {
#line 417 "term_traversal.m"
          MR_Word base;
#line 417 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 417 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_15));
#line 417 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_12));
#line 417 "term_traversal.m"
        }
#line 413 "term_traversal.m"
      }
#line 413 "term_traversal.m"
    else
#line 419 "term_traversal.m"
      {
#line 419 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ErrorContext_17;
#line 419 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 419 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 419 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));

#line 420 "term_traversal.m"
        {
#line 420 "term_traversal.m"
          transform_hlds__term_traversal__ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 420 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 420 "term_traversal.m"
        }
#line 421 "term_traversal.m"
        {
#line 421 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_17));
#line 421 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "term_traversal.m"
        }
#line 421 "term_traversal.m"
        {
#line 421 "term_traversal.m"
          MR_Word base;
#line 421 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 421 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 421 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_21));
#line 421 "term_traversal.m"
        }
#line 419 "term_traversal.m"
      }
#line 413 "term_traversal.m"
  }
#line 407 "term_traversal.m"
}

#line 394 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 394 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 394 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 394 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6)
#line 394 "term_traversal.m"
{
#line 399 "term_traversal.m"
  {
#line 399 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 399 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_5)) == (MR_mktag((MR_Integer) 1))))
#line 400 "term_traversal.m"
      *transform_hlds__term_traversal__Info_6 = transform_hlds__term_traversal__Info0_5;
#line 399 "term_traversal.m"
    else
#line 402 "term_traversal.m"
      {
#line 402 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 0)));
#line 402 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 1)));
#line 402 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_11;

#line 403 "term_traversal.m"
        {
#line 403 "term_traversal.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_4)), transform_hlds__term_traversal__Paths0_9, &transform_hlds__term_traversal__Paths_11);
        }
#line 404 "term_traversal.m"
        {
#line 404 "term_traversal.m"
          MR_Word base;
#line 404 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "term_traversal.m"
          *transform_hlds__term_traversal__Info_6 = base;
#line 404 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_11));
#line 404 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_10));
#line 404 "term_traversal.m"
        }
#line 402 "term_traversal.m"
      }
#line 399 "term_traversal.m"
  }
#line 394 "term_traversal.m"
}

#line 382 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 382 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 382 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4)
#line 382 "term_traversal.m"
{
#line 387 "term_traversal.m"
  {
#line 387 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 387 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_3)) == (MR_mktag((MR_Integer) 1))))
#line 388 "term_traversal.m"
      *transform_hlds__term_traversal__Info_4 = transform_hlds__term_traversal__Info0_3;
#line 387 "term_traversal.m"
    else
#line 390 "term_traversal.m"
      {
#line 390 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 1)));
#line 390 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 390 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 0)));

#line 391 "term_traversal.m"
        {
#line 391 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 391 "term_traversal.m"
        {
#line 391 "term_traversal.m"
          MR_Word base;
#line 391 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "term_traversal.m"
          *transform_hlds__term_traversal__Info_4 = base;
#line 391 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 391 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_8));
#line 391 "term_traversal.m"
        }
#line 390 "term_traversal.m"
      }
#line 387 "term_traversal.m"
  }
#line 382 "term_traversal.m"
}

#line 367 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_8_p_0(
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 367 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 367 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 367 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6)
#line 367 "term_traversal.m"
{
#line 372 "term_traversal.m"
  {
#line 372 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 372 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "term_traversal.m"
      {
#line 372 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Empty_11;

#line 373 "term_traversal.m"
        {
#line 373 "term_traversal.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, &transform_hlds__term_traversal__Empty_11);
        }
#line 371 "term_traversal.m"
        {
#line 371 "term_traversal.m"
          MR_Word base;
#line 371 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__4_4 = base;
#line 371 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Empty_11));
#line 371 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "term_traversal.m"
        }
#line 372 "term_traversal.m"
        *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5;
#line 372 "term_traversal.m"
      }
#line 372 "term_traversal.m"
    else
#line 375 "term_traversal.m"
      {
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_21;
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_27;
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CasesInfo_28;
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_36_36;
#line 374 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_35_35, (MR_Integer) 0)));
#line 374 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_35_35, (MR_Integer) 1)));

#line 374 "term_traversal.m"
        transform_hlds__term_traversal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_35_35, (MR_Integer) 2)));
#line 376 "term_traversal.m"
        {
#line 376 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Goal_21, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__GoalInfo_27, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_36_36);
        }
#line 377 "term_traversal.m"
        {
#line 377 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_switch_8_p_0(transform_hlds__term_traversal__Cases_22, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__CasesInfo_28, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_36_36, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);
        }
#line 378 "term_traversal.m"
        {
#line 378 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_27, transform_hlds__term_traversal__CasesInfo_28, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__4_4);
#line 378 "term_traversal.m"
          return;
        }
#line 375 "term_traversal.m"
      }
#line 372 "term_traversal.m"
  }
#line 367 "term_traversal.m"
}

#line 356 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_8_p_0(
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 356 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 356 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6)
#line 356 "term_traversal.m"
{
#line 360 "term_traversal.m"
  {
#line 360 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 360 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 360 "term_traversal.m"
      {
#line 360 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Empty_11;

#line 361 "term_traversal.m"
        {
#line 361 "term_traversal.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, &transform_hlds__term_traversal__Empty_11);
        }
#line 360 "term_traversal.m"
        {
#line 360 "term_traversal.m"
          MR_Word base;
#line 360 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__4_4 = base;
#line 360 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Empty_11));
#line 360 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "term_traversal.m"
        }
#line 360 "term_traversal.m"
        *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5;
#line 360 "term_traversal.m"
      }
#line 360 "term_traversal.m"
    else
#line 362 "term_traversal.m"
      {
#line 362 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_25;
#line 362 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalsInfo_26;
#line 362 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_33_33;

#line 363 "term_traversal.m"
        {
#line 363 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Goal_19, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__GoalInfo_25, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_33_33);
        }
#line 364 "term_traversal.m"
        {
#line 364 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_disj_8_p_0(transform_hlds__term_traversal__Goals_20, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__GoalsInfo_26, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);
        }
#line 365 "term_traversal.m"
        {
#line 365 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_25, transform_hlds__term_traversal__GoalsInfo_26, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__4_4);
#line 365 "term_traversal.m"
          return;
        }
#line 362 "term_traversal.m"
      }
#line 360 "term_traversal.m"
  }
#line 356 "term_traversal.m"
}

#line 347 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_conj_8_p_0(
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 347 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_4,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 347 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6)
#line 347 "term_traversal.m"
{
#line 351 "term_traversal.m"
  while (MR_TRUE)
#line 351 "term_traversal.m"
    {
#line 351 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 351 "term_traversal.m"
      {
#line 351 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 351 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "term_traversal.m"
          {
#line 351 "term_traversal.m"
            *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5;
#line 351 "term_traversal.m"
            *transform_hlds__term_traversal__STATE_VARIABLE_Info_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3;
#line 351 "term_traversal.m"
          }
#line 351 "term_traversal.m"
        else
#line 352 "term_traversal.m"
          {
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_31_31;
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_32_32;

#line 353 "term_traversal.m"
            {
#line 353 "term_traversal.m"
              transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Goal_19, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__STATE_VARIABLE_Info_31_31, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 354 "term_traversal.m"
            /* direct tailcall eliminated */
#line 354 "term_traversal.m"
            {
#line 354 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Goals_20;
#line 354 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_3 = transform_hlds__term_traversal__STATE_VARIABLE_Info_31_31;
#line 354 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_32_32;

#line 354 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 354 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 354 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 354 "term_traversal.m"
            }
#line 354 "term_traversal.m"
            continue;
#line 352 "term_traversal.m"
          }
#line 351 "term_traversal.m"
      }
#line 351 "term_traversal.m"
      break;
#line 351 "term_traversal.m"
    }
#line 347 "term_traversal.m"
}

#line 103 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(
#line 103 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 103 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__ActiveVars_2)
#line 103 "term_traversal.m"
{
#line 643 "term_traversal.m"
  {
#line 643 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 643 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "term_traversal.m"
      {
#line 644 "term_traversal.m"
        {
#line 644 "term_traversal.m"
          mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars_2);
#line 644 "term_traversal.m"
          return;
        }
#line 643 "term_traversal.m"
      }
#line 643 "term_traversal.m"
    else
#line 645 "term_traversal.m"
      {
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars1_7;
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars2_12;
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8;
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10;
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11;

#line 646 "term_traversal.m"
        {
#line 646 "term_traversal.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_traversal__Paths_5, &transform_hlds__term_traversal__ActiveVars1_7);
        }
#line 647 "term_traversal.m"
        transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 0)));
#line 647 "term_traversal.m"
        transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 1)));
#line 647 "term_traversal.m"
        transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 2)));
#line 647 "term_traversal.m"
        transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 3)));
#line 647 "term_traversal.m"
        transform_hlds__term_traversal__ActiveVars2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 4)));
#line 648 "term_traversal.m"
        {
#line 648 "term_traversal.m"
          mercury__bag__least_upper_bound_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars1_7, transform_hlds__term_traversal__ActiveVars2_12, transform_hlds__term_traversal__ActiveVars_2);
#line 648 "term_traversal.m"
          return;
        }
#line 645 "term_traversal.m"
      }
#line 643 "term_traversal.m"
  }
#line 103 "term_traversal.m"
}

#line 278 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_2(
#line 278 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 278 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
#line 278 "term_traversal.m"
{
#line 278 "term_traversal.m"
  {
#line 278 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 278 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;

#line 278 "term_traversal.m"
    {
#line 278 "term_traversal.m"
      return transform_hlds__term_traversal__succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 278 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 278 "term_traversal.m"
  }
#line 278 "term_traversal.m"
}

#line 247 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_1(
#line 247 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 247 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
#line 247 "term_traversal.m"
{
#line 247 "term_traversal.m"
  {
#line 247 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__wrapper_arg_2;
#line 247 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;
#line 247 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__conv2_HeadVar__2_2;

#line 247 "term_traversal.m"
    {
#line 247 "term_traversal.m"
      transform_hlds__term_traversal__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 247 "term_traversal.m"
    transform_hlds__term_traversal__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_traversal__conv2_HeadVar__2_2));
#line 247 "term_traversal.m"
    return transform_hlds__term_traversal__wrapper_arg_2;
#line 247 "term_traversal.m"
  }
#line 247 "term_traversal.m"
}

#line 99 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0(
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Goal_9,
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_10,
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114,
#line 99 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_115,
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116,
#line 99 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117)
#line 99 "term_traversal.m"
{
#line 121 "term_traversal.m"
  while (MR_TRUE)
#line 121 "term_traversal.m"
    {
#line 121 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 121 "term_traversal.m"
      {
#line 121 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;
#line 121 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_9, (MR_Integer) 0)));
#line 121 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_9, (MR_Integer) 1)));
#line 121 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 124 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Detism_16;
#line 124 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_266_266;
#line 125 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17;

#line 124 "term_traversal.m"
        {
#line 124 "term_traversal.m"
          transform_hlds__term_traversal__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
        }
#line 125 "term_traversal.m"
        {
#line 125 "term_traversal.m"
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__term_traversal__Detism_16, &transform_hlds__term_traversal__V_17_17, &transform_hlds__term_traversal__V_266_266);
        }
#line 125 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_Integer) 0 == transform_hlds__term_traversal__V_266_266);
#line 128 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 127 "term_traversal.m"
          {
#line 127 "term_traversal.m"
            transform_hlds__term_traversal__cannot_succeed_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114, &transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121);
          }
#line 128 "term_traversal.m"
        else
#line 127 "term_traversal.m"
          transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114;
#line 170 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 0))))
#line 325 "term_traversal.m"
          {
#line 325 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__SubGoal_111 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_traversal__GoalExpr_14), (MR_Integer) 0);

#line 330 "term_traversal.m"
            /* direct tailcall eliminated */
#line 330 "term_traversal.m"
            {
#line 330 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Goal__tmp_copy_9 = transform_hlds__term_traversal__SubGoal_111;
#line 330 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;

#line 330 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114;
#line 330 "term_traversal.m"
              transform_hlds__term_traversal__Goal_9 = transform_hlds__term_traversal__Goal__tmp_copy_9;
#line 330 "term_traversal.m"
            }
#line 330 "term_traversal.m"
            continue;
#line 325 "term_traversal.m"
          }
#line 170 "term_traversal.m"
        else
#line 170 "term_traversal.m"
          if (((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 2))))
#line 171 "term_traversal.m"
            {
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)));
#line 171 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__CallProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Context_50;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__PPId_51;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPPId_52;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallProcInfo_54;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgModes_55;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgSizeInfo_56;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallTerminationInfo_57;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Args_214 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__InVars_215;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__OutVars_216;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 5)));
#line 176 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_53_53;
#line 207 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_174_174;
#line 207 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_63_63;
#line 218 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__VarTypes_64;
#line 238 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliers_66;
#line 228 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliersMap_65;
#line 229 "term_traversal.m"
              MR_Box transform_hlds__term_traversal__conv1_RecInputSuppliers_66;

#line 172 "term_traversal.m"
              {
#line 172 "term_traversal.m"
                transform_hlds__term_traversal__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
              }
#line 173 "term_traversal.m"
              {
#line 173 "term_traversal.m"
                transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__PPId_51);
              }
#line 174 "term_traversal.m"
              {
#line 174 "term_traversal.m"
                transform_hlds__term_traversal__CallPPId_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_52, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_45));
#line 174 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_52, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_46));
#line 174 "term_traversal.m"
              }
#line 176 "term_traversal.m"
              {
#line 176 "term_traversal.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallPredId_45, transform_hlds__term_traversal__CallProcId_46, &transform_hlds__term_traversal__V_53_53, &transform_hlds__term_traversal__CallProcInfo_54);
              }
#line 178 "term_traversal.m"
              {
#line 178 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_54, &transform_hlds__term_traversal__CallArgModes_55);
              }
#line 180 "term_traversal.m"
              {
#line 180 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_54, &transform_hlds__term_traversal__CallArgSizeInfo_56);
              }
#line 181 "term_traversal.m"
              {
#line 181 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_54, &transform_hlds__term_traversal__CallTerminationInfo_57);
              }
#line 184 "term_traversal.m"
              {
#line 184 "term_traversal.m"
                transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallArgModes_55, transform_hlds__term_traversal__Args_214, &transform_hlds__term_traversal__InVars_215, &transform_hlds__term_traversal__OutVars_216);
              }
#line 191 "term_traversal.m"
              if ((transform_hlds__term_traversal__CallArgSizeInfo_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "term_traversal.m"
                {
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliersMap_62;
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_165_165;
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliers_212;
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__UsedInVars_213;
#line 201 "term_traversal.m"
                  MR_Box transform_hlds__term_traversal__conv0_OutputSuppliers_212;

#line 200 "term_traversal.m"
                  {
#line 200 "term_traversal.m"
                    transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__OutputSuppliersMap_62);
                  }
#line 201 "term_traversal.m"
                  {
#line 201 "term_traversal.m"
                    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__OutputSuppliersMap_62, ((MR_Box) (transform_hlds__term_traversal__CallPPId_52)), &transform_hlds__term_traversal__conv0_OutputSuppliers_212);
                  }
#line 201 "term_traversal.m"
                  transform_hlds__term_traversal__OutputSuppliers_212 = ((MR_Word) transform_hlds__term_traversal__conv0_OutputSuppliers_212);
#line 202 "term_traversal.m"
                  {
#line 202 "term_traversal.m"
                    transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_215, transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__OutputSuppliers_212, &transform_hlds__term_traversal__UsedInVars_213);
                  }
#line 203 "term_traversal.m"
                  {
#line 203 "term_traversal.m"
                    transform_hlds__term_traversal__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_165_165, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 203 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "term_traversal.m"
                  }
#line 203 "term_traversal.m"
                  {
#line 203 "term_traversal.m"
                    transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_213, transform_hlds__term_traversal__OutVars_216, (MR_Integer) 0, transform_hlds__term_traversal__V_165_165, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173);
                  }
#line 196 "term_traversal.m"
                }
#line 191 "term_traversal.m"
              else
#line 191 "term_traversal.m"
                {
#line 191 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallArgSizeInfo_56, (MR_Integer) 0)));

#line 191 "term_traversal.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_traversal__V_267_267)) == (MR_mktag((MR_Integer) 0))))
#line 188 "term_traversal.m"
                    {
#line 188 "term_traversal.m"
                      MR_Integer transform_hlds__term_traversal__CallGamma_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_267_267, (MR_Integer) 0)));
#line 188 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__OutputSuppliers_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_267_267, (MR_Integer) 1)));
#line 188 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__UsedInVars_60;

#line 189 "term_traversal.m"
                      {
#line 189 "term_traversal.m"
                        transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_215, transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__OutputSuppliers_59, &transform_hlds__term_traversal__UsedInVars_60);
                      }
#line 190 "term_traversal.m"
                      {
#line 190 "term_traversal.m"
                        transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_60, transform_hlds__term_traversal__OutVars_216, transform_hlds__term_traversal__CallGamma_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173);
                      }
#line 188 "term_traversal.m"
                    }
#line 191 "term_traversal.m"
                  else
#line 192 "term_traversal.m"
                    {
#line 192 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_169_169;

#line 194 "term_traversal.m"
                      {
#line 194 "term_traversal.m"
                        transform_hlds__term_traversal__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 194 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 194 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_169_169, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 194 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_169_169, 2) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 194 "term_traversal.m"
                      }
#line 193 "term_traversal.m"
                      {
#line 193 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_216, transform_hlds__term_traversal__Context_50, transform_hlds__term_traversal__V_169_169, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173);
                      }
#line 192 "term_traversal.m"
                    }
#line 191 "term_traversal.m"
                }
#line 207 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__CallTerminationInfo_57)) == (MR_mktag((MR_Integer) 1)));
#line 207 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 207 "term_traversal.m"
                {
#line 207 "term_traversal.m"
                  transform_hlds__term_traversal__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallTerminationInfo_57, (MR_Integer) 0)));
#line 207 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__V_174_174)) == (MR_mktag((MR_Integer) 1)));
#line 207 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 207 "term_traversal.m"
                    transform_hlds__term_traversal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_174_174, (MR_Integer) 0)));
#line 207 "term_traversal.m"
                }
#line 210 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 208 "term_traversal.m"
                {
#line 208 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_175_175;

#line 208 "term_traversal.m"
                  {
#line 208 "term_traversal.m"
                    transform_hlds__term_traversal__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_175_175, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 208 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_175_175, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 208 "term_traversal.m"
                  }
#line 208 "term_traversal.m"
                  {
#line 208 "term_traversal.m"
                    transform_hlds__term_traversal__called_can_loop_5_p_0(transform_hlds__term_traversal__Context_50, transform_hlds__term_traversal__V_175_175, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173, &transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176);
                  }
#line 208 "term_traversal.m"
                }
#line 210 "term_traversal.m"
              else
#line 208 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176 = transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173;
#line 218 "term_traversal.m"
              {
#line 218 "term_traversal.m"
                transform_hlds__term_traversal__params_get_var_types_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__VarTypes_64);
              }
#line 219 "term_traversal.m"
              {
#line 219 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__VarTypes_64);
              }
#line 222 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 221 "term_traversal.m"
                {
#line 221 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_177_177;

#line 221 "term_traversal.m"
                  {
#line 221 "term_traversal.m"
                    transform_hlds__term_traversal__V_177_177 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_177_177, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 221 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_177_177, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 221 "term_traversal.m"
                  }
#line 221 "term_traversal.m"
                  {
#line 221 "term_traversal.m"
                    transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_50, transform_hlds__term_traversal__V_177_177, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176, &transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178);
                  }
#line 221 "term_traversal.m"
                }
#line 222 "term_traversal.m"
              else
#line 221 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178 = transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176;
#line 228 "term_traversal.m"
              {
#line 228 "term_traversal.m"
                transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__RecInputSuppliersMap_65);
              }
#line 229 "term_traversal.m"
              {
#line 229 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__RecInputSuppliersMap_65, ((MR_Box) (transform_hlds__term_traversal__CallPPId_52)), &transform_hlds__term_traversal__conv1_RecInputSuppliers_66);
              }
#line 229 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 229 "term_traversal.m"
                {
#line 229 "term_traversal.m"
                  transform_hlds__term_traversal__RecInputSuppliers_66 = ((MR_Word) transform_hlds__term_traversal__conv1_RecInputSuppliers_66);
#line 229 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 229 "term_traversal.m"
                }
#line 238 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 234 "term_traversal.m"
                {
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Bag_67;
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__PathStart_68;
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__NewPath_69;
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_179_179;

#line 234 "term_traversal.m"
                  {
#line 234 "term_traversal.m"
                    transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__RecInputSuppliers_66, &transform_hlds__term_traversal__Bag_67);
                  }
#line 235 "term_traversal.m"
                  {
#line 235 "term_traversal.m"
                    transform_hlds__term_traversal__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_179_179, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 235 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_179_179, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_50));
#line 235 "term_traversal.m"
                  }
#line 235 "term_traversal.m"
                  {
#line 235 "term_traversal.m"
                    transform_hlds__term_traversal__PathStart_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 235 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__PathStart_68, 0) = ((MR_Box) (transform_hlds__term_traversal__V_179_179));
#line 235 "term_traversal.m"
                  }
#line 236 "term_traversal.m"
                  {
#line 236 "term_traversal.m"
                    transform_hlds__term_traversal__NewPath_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 1) = ((MR_Box) (transform_hlds__term_traversal__PathStart_68));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 2) = ((MR_Box) ((MR_Integer) 0));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 4) = ((MR_Box) (transform_hlds__term_traversal__Bag_67));
#line 236 "term_traversal.m"
                  }
#line 237 "term_traversal.m"
                  {
#line 237 "term_traversal.m"
                    transform_hlds__term_traversal__add_path_3_p_0(transform_hlds__term_traversal__NewPath_69, transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                  }
#line 234 "term_traversal.m"
                }
#line 238 "term_traversal.m"
              else
#line 237 "term_traversal.m"
                *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178;
#line 237 "term_traversal.m"
              *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 171 "term_traversal.m"
            }
#line 170 "term_traversal.m"
          else
#line 170 "term_traversal.m"
            if (((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 1))))
#line 132 "term_traversal.m"
              {
#line 132 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Unification_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 132 "term_traversal.m"
                MR_Word transform_hlds__term_traversal___Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)));
#line 132 "term_traversal.m"
                MR_Word transform_hlds__term_traversal___RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 132 "term_traversal.m"
                MR_Word transform_hlds__term_traversal___UniMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 132 "term_traversal.m"
                MR_Word transform_hlds__term_traversal___Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));

#line 146 "term_traversal.m"
                if (((MR_tag((MR_Word) transform_hlds__term_traversal__Unification_21)) == (MR_mktag((MR_Integer) 2))))
#line 159 "term_traversal.m"
                  {
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__TypeInfo_252_252 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Empty_39;
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_208 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)));
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_209;
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_210;
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_211 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_21, (MR_Integer) 1)));

#line 160 "term_traversal.m"
                    {
#line 160 "term_traversal.m"
                      mercury__bag__init_1_p_0(transform_hlds__term_traversal__TypeInfo_252_252, &transform_hlds__term_traversal__Empty_39);
                    }
#line 161 "term_traversal.m"
                    {
#line 161 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_252_252, ((MR_Box) (transform_hlds__term_traversal__InVar_211)), transform_hlds__term_traversal__Empty_39, &transform_hlds__term_traversal__InVars_209);
                    }
#line 162 "term_traversal.m"
                    {
#line 162 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_252_252, ((MR_Box) (transform_hlds__term_traversal__OutVar_208)), transform_hlds__term_traversal__Empty_39, &transform_hlds__term_traversal__OutVars_210);
                    }
#line 163 "term_traversal.m"
                    {
#line 163 "term_traversal.m"
                      transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_209, transform_hlds__term_traversal__OutVars_210, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                    }
#line 159 "term_traversal.m"
                  }
#line 146 "term_traversal.m"
                else
#line 146 "term_traversal.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_traversal__Unification_21)) == (MR_mktag((MR_Integer) 0))))
#line 134 "term_traversal.m"
                    {
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__OutVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)));
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 1)));
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 2)));
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 3)));
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 4)));
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 5)));
#line 134 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 6)));
#line 141 "term_traversal.m"
                      MR_Integer transform_hlds__term_traversal__Gamma_30;
#line 141 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__InVars_31;
#line 141 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__OutVars0_32;

#line 136 "term_traversal.m"
                      {
#line 136 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__OutVar_23, transform_hlds__term_traversal__ConsId_24, transform_hlds__term_traversal__Args_25, transform_hlds__term_traversal__Modes_26, transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__Gamma_30, &transform_hlds__term_traversal__InVars_31, &transform_hlds__term_traversal__OutVars0_32);
                      }
#line 141 "term_traversal.m"
                      if (transform_hlds__term_traversal__succeeded)
#line 139 "term_traversal.m"
                        {
#line 139 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__OutVars_33;

#line 139 "term_traversal.m"
                          {
#line 139 "term_traversal.m"
                            mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__OutVar_23)), transform_hlds__term_traversal__OutVars0_32, &transform_hlds__term_traversal__OutVars_33);
                          }
#line 140 "term_traversal.m"
                          {
#line 140 "term_traversal.m"
                            transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_31, transform_hlds__term_traversal__OutVars_33, transform_hlds__term_traversal__Gamma_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                          }
#line 139 "term_traversal.m"
                        }
#line 141 "term_traversal.m"
                      else
#line 140 "term_traversal.m"
                        *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 134 "term_traversal.m"
                    }
#line 146 "term_traversal.m"
                  else
#line 146 "term_traversal.m"
                    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Unification_21)) == (MR_mktag((MR_Integer) 1))))
#line 147 "term_traversal.m"
                      {
#line 147 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__InVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)));
#line 147 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ConsId_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 1)));
#line 147 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Args_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 2)));
#line 147 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Modes_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 3)));
#line 147 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 4)));
#line 147 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 5)));
#line 155 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__Gamma0_37;
#line 155 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__InVars0_38;
#line 155 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__OutVars_201;

#line 149 "term_traversal.m"
                        {
#line 149 "term_traversal.m"
                          transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__InVar_34, transform_hlds__term_traversal__ConsId_202, transform_hlds__term_traversal__Args_203, transform_hlds__term_traversal__Modes_204, transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__Gamma0_37, &transform_hlds__term_traversal__InVars0_38, &transform_hlds__term_traversal__OutVars_201);
                        }
#line 155 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 152 "term_traversal.m"
                          {
#line 152 "term_traversal.m"
                            MR_Integer transform_hlds__term_traversal__Gamma_197;
#line 152 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__InVars_198;

#line 152 "term_traversal.m"
                            {
#line 152 "term_traversal.m"
                              mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__InVar_34)), transform_hlds__term_traversal__InVars0_38, &transform_hlds__term_traversal__InVars_198);
                            }
#line 153 "term_traversal.m"
                            transform_hlds__term_traversal__Gamma_197 = ((MR_Integer) 0 - transform_hlds__term_traversal__Gamma0_37);
#line 154 "term_traversal.m"
                            {
#line 154 "term_traversal.m"
                              transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_198, transform_hlds__term_traversal__OutVars_201, transform_hlds__term_traversal__Gamma_197, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                            }
#line 152 "term_traversal.m"
                          }
#line 155 "term_traversal.m"
                        else
#line 156 "term_traversal.m"
                          {
#line 156 "term_traversal.m"
                            {
#line 156 "term_traversal.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/8", (MR_String) "higher order deconstruction");
#line 156 "term_traversal.m"
                              return;
                            }
#line 156 "term_traversal.m"
                          }
#line 147 "term_traversal.m"
                      }
#line 146 "term_traversal.m"
                    else
#line 146 "term_traversal.m"
                      if (((((MR_tag((MR_Word) transform_hlds__term_traversal__Unification_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 167 "term_traversal.m"
                        {
#line 168 "term_traversal.m"
                          {
#line 168 "term_traversal.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/8", (MR_String) "complicated unify");
#line 168 "term_traversal.m"
                            return;
                          }
#line 167 "term_traversal.m"
                        }
#line 146 "term_traversal.m"
                      else
#line 165 "term_traversal.m"
                        *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 168 "term_traversal.m"
                *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 132 "term_traversal.m"
              }
#line 170 "term_traversal.m"
            else
#line 170 "term_traversal.m"
              if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 243 "term_traversal.m"
                {
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Attributes_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgVars_75;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutVars_218;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallPredId_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 243 "term_traversal.m"
                  MR_Integer transform_hlds__term_traversal__CallProcId_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_221;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallProcInfo_222;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallArgModes_223;
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 5)));
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 6)));
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 7)));
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_74_74;
#line 248 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal___InVars_76;
#line 252 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_157_157;

#line 244 "term_traversal.m"
                  {
#line 244 "term_traversal.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallPredId_219, transform_hlds__term_traversal__CallProcId_220, &transform_hlds__term_traversal__V_74_74, &transform_hlds__term_traversal__CallProcInfo_222);
                  }
#line 246 "term_traversal.m"
                  {
#line 246 "term_traversal.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_222, &transform_hlds__term_traversal__CallArgModes_223);
                  }
#line 247 "term_traversal.m"
                  {
#line 247 "term_traversal.m"
                    transform_hlds__term_traversal__ArgVars_75 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], transform_hlds__term_traversal__Args_217);
                  }
#line 248 "term_traversal.m"
                  {
#line 248 "term_traversal.m"
                    transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallArgModes_223, transform_hlds__term_traversal__ArgVars_75, &transform_hlds__term_traversal___InVars_76, &transform_hlds__term_traversal__OutVars_218);
                  }
#line 250 "term_traversal.m"
                  {
#line 250 "term_traversal.m"
                    transform_hlds__term_traversal__Context_221 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
                  }
#line 252 "term_traversal.m"
                  {
#line 252 "term_traversal.m"
                    transform_hlds__term_traversal__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_219));
#line 252 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_220));
#line 252 "term_traversal.m"
                  }
#line 252 "term_traversal.m"
                  {
#line 252 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__V_157_157);
                  }
#line 254 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 253 "term_traversal.m"
                    {
#line 253 "term_traversal.m"
                      {
#line 253 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_218, transform_hlds__term_traversal__Context_221, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                      }
#line 253 "term_traversal.m"
                    }
#line 254 "term_traversal.m"
                  else
#line 258 "term_traversal.m"
                    {
#line 255 "term_traversal.m"
                      {
#line 255 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__term_traversal__Attributes_70);
                      }
#line 258 "term_traversal.m"
                      if (transform_hlds__term_traversal__succeeded)
#line 256 "term_traversal.m"
                        {
#line 256 "term_traversal.m"
                          {
#line 256 "term_traversal.m"
                            transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_218, transform_hlds__term_traversal__Context_221, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                          }
#line 256 "term_traversal.m"
                        }
#line 258 "term_traversal.m"
                      else
#line 259 "term_traversal.m"
                        {
#line 259 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_162_162;

#line 259 "term_traversal.m"
                          {
#line 259 "term_traversal.m"
                            transform_hlds__term_traversal__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 259 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_162_162, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_219));
#line 259 "term_traversal.m"
                          }
#line 259 "term_traversal.m"
                          {
#line 259 "term_traversal.m"
                            transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_221, transform_hlds__term_traversal__V_162_162, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                          }
#line 259 "term_traversal.m"
                        }
#line 258 "term_traversal.m"
                    }
#line 259 "term_traversal.m"
                  *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 243 "term_traversal.m"
                }
#line 170 "term_traversal.m"
              else
#line 170 "term_traversal.m"
                if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 309 "term_traversal.m"
                  {
#line 309 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Goals_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 309 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__RevGoals_101;
#line 309 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 310 "term_traversal.m"
                    {
#line 310 "term_traversal.m"
                      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__term_traversal__Goals_100, &transform_hlds__term_traversal__RevGoals_101);
                    }
#line 311 "term_traversal.m"
                    {
#line 311 "term_traversal.m"
                      transform_hlds__term_traversal__term_traverse_conj_8_p_0(transform_hlds__term_traversal__RevGoals_101, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
#line 311 "term_traversal.m"
                      return;
                    }
#line 309 "term_traversal.m"
                  }
#line 170 "term_traversal.m"
                else
#line 170 "term_traversal.m"
                  if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 313 "term_traversal.m"
                    {
#line 313 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__Goals_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 314 "term_traversal.m"
                      {
#line 314 "term_traversal.m"
                        transform_hlds__term_traversal__term_traverse_disj_8_p_0(transform_hlds__term_traversal__Goals_248, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
#line 314 "term_traversal.m"
                        return;
                      }
#line 313 "term_traversal.m"
                    }
#line 170 "term_traversal.m"
                  else
#line 170 "term_traversal.m"
                    if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 264 "term_traversal.m"
                      {
#line 264 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Details_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 264 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ArgModes_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 264 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Args_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 264 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Context_245;
#line 264 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 264 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 5)));

#line 265 "term_traversal.m"
                        {
#line 265 "term_traversal.m"
                          transform_hlds__term_traversal__Context_245 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
                        }
#line 296 "term_traversal.m"
                        if (((MR_tag((MR_Word) transform_hlds__term_traversal__Details_77)) == (MR_mktag((MR_Integer) 3))))
#line 306 "term_traversal.m"
                          *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 296 "term_traversal.m"
                        else
#line 296 "term_traversal.m"
                          if (((MR_tag((MR_Word) transform_hlds__term_traversal__Details_77)) == (MR_mktag((MR_Integer) 1))))
#line 297 "term_traversal.m"
                            {
#line 302 "term_traversal.m"
                              {
#line 302 "term_traversal.m"
                                transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_245, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                              }
#line 297 "term_traversal.m"
                            }
#line 296 "term_traversal.m"
                          else
#line 296 "term_traversal.m"
                            if (((MR_tag((MR_Word) transform_hlds__term_traversal__Details_77)) == (MR_mktag((MR_Integer) 2))))
#line 304 "term_traversal.m"
                              *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 296 "term_traversal.m"
                            else
#line 267 "term_traversal.m"
                              {
#line 267 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 0)));
#line 267 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__ClosureValueMap_85;
#line 267 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 1)));
#line 267 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 2)));
#line 267 "term_traversal.m"
                                MR_Integer transform_hlds__term_traversal__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 3)));
#line 293 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__ClosureValues0_86;
#line 275 "term_traversal.m"
                                MR_Box transform_hlds__term_traversal__conv3_ClosureValues0_86;

#line 268 "term_traversal.m"
                                {
#line 268 "term_traversal.m"
                                  transform_hlds__term_traversal__ClosureValueMap_85 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
                                }
#line 275 "term_traversal.m"
                                {
#line 275 "term_traversal.m"
                                  transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_1[2], transform_hlds__term_traversal__ClosureValueMap_85, ((MR_Box) (transform_hlds__term_traversal__Var_81)), &transform_hlds__term_traversal__conv3_ClosureValues0_86);
                                }
#line 275 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 275 "term_traversal.m"
                                  {
#line 275 "term_traversal.m"
                                    transform_hlds__term_traversal__ClosureValues0_86 = ((MR_Word) transform_hlds__term_traversal__conv3_ClosureValues0_86);
#line 275 "term_traversal.m"
                                    transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 275 "term_traversal.m"
                                  }
#line 293 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 276 "term_traversal.m"
                                  {
#line 276 "term_traversal.m"
                                    MR_Word transform_hlds__term_traversal__TypeCtorInfo_263_263 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 276 "term_traversal.m"
                                    MR_Word transform_hlds__term_traversal__ClosureValues_87;
#line 276 "term_traversal.m"
                                    MR_Word transform_hlds__term_traversal__Terminating_88;
#line 276 "term_traversal.m"
                                    MR_Word transform_hlds__term_traversal__NonTerminating_89;
#line 276 "term_traversal.m"
                                    MR_Word transform_hlds__term_traversal__V_150_150;

#line 276 "term_traversal.m"
                                    {
#line 276 "term_traversal.m"
                                      transform_hlds__term_traversal__ClosureValues_87 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_traversal__TypeCtorInfo_263_263, transform_hlds__term_traversal__ClosureValues0_86);
                                    }
#line 278 "term_traversal.m"
                                    {
#line 278 "term_traversal.m"
                                      transform_hlds__term_traversal__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "term_traversal.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
#line 278 "term_traversal.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_8_p_0_2));
#line 278 "term_traversal.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "term_traversal.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 3) = ((MR_Box) (transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116));
#line 278 "term_traversal.m"
                                    }
#line 278 "term_traversal.m"
                                    {
#line 278 "term_traversal.m"
                                      mercury__list__filter_4_p_0(transform_hlds__term_traversal__TypeCtorInfo_263_263, transform_hlds__term_traversal__V_150_150, transform_hlds__term_traversal__ClosureValues_87, &transform_hlds__term_traversal__Terminating_88, &transform_hlds__term_traversal__NonTerminating_89);
                                    }
#line 287 "term_traversal.m"
                                    if ((transform_hlds__term_traversal__NonTerminating_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "term_traversal.m"
                                      {
#line 281 "term_traversal.m"
                                        MR_Word transform_hlds__term_traversal__Error_90;
#line 281 "term_traversal.m"
                                        MR_Word transform_hlds__term_traversal__OutVars_225;
#line 281 "term_traversal.m"
                                        MR_Word transform_hlds__term_traversal__PPId_226;
#line 282 "term_traversal.m"
                                        MR_Word transform_hlds__term_traversal___InVars_224;

#line 282 "term_traversal.m"
                                        {
#line 282 "term_traversal.m"
                                          transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__ArgModes_78, transform_hlds__term_traversal__Args_243, &transform_hlds__term_traversal___InVars_224, &transform_hlds__term_traversal__OutVars_225);
                                        }
#line 284 "term_traversal.m"
                                        {
#line 284 "term_traversal.m"
                                          transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__PPId_226);
                                        }
#line 285 "term_traversal.m"
                                        {
#line 285 "term_traversal.m"
                                          transform_hlds__term_traversal__Error_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 285 "term_traversal.m"
                                          MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "term_traversal.m"
                                          MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_90, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_226));
#line 285 "term_traversal.m"
                                          MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_90, 2) = ((MR_Box) (transform_hlds__term_traversal__Terminating_88));
#line 285 "term_traversal.m"
                                        }
#line 286 "term_traversal.m"
                                        {
#line 286 "term_traversal.m"
                                          transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_225, transform_hlds__term_traversal__Context_245, transform_hlds__term_traversal__Error_90, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                                        }
#line 281 "term_traversal.m"
                                      }
#line 287 "term_traversal.m"
                                    else
#line 288 "term_traversal.m"
                                      {
#line 291 "term_traversal.m"
                                        {
#line 291 "term_traversal.m"
                                          transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_245, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                                        }
#line 288 "term_traversal.m"
                                      }
#line 276 "term_traversal.m"
                                  }
#line 293 "term_traversal.m"
                                else
#line 294 "term_traversal.m"
                                  {
#line 294 "term_traversal.m"
                                    {
#line 294 "term_traversal.m"
                                      transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_245, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                                    }
#line 294 "term_traversal.m"
                                  }
#line 267 "term_traversal.m"
                              }
#line 306 "term_traversal.m"
                        *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 264 "term_traversal.m"
                      }
#line 170 "term_traversal.m"
                    else
#line 170 "term_traversal.m"
                      if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 319 "term_traversal.m"
                        {
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__Cond_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__Then_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__Else_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__CondThenInfo_109;
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__ElseInfo_110;
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_131_131;
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_132_132;
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_134_134;
#line 319 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 320 "term_traversal.m"
                          {
#line 320 "term_traversal.m"
                            transform_hlds__term_traversal__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "term_traversal.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_134_134, 0) = ((MR_Box) (transform_hlds__term_traversal__Cond_106));
#line 320 "term_traversal.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "term_traversal.m"
                          }
#line 320 "term_traversal.m"
                          {
#line 320 "term_traversal.m"
                            transform_hlds__term_traversal__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "term_traversal.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_131_131, 0) = ((MR_Box) (transform_hlds__term_traversal__Then_107));
#line 320 "term_traversal.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_131_131, 1) = ((MR_Box) (transform_hlds__term_traversal__V_134_134));
#line 320 "term_traversal.m"
                          }
#line 320 "term_traversal.m"
                          {
#line 320 "term_traversal.m"
                            transform_hlds__term_traversal__term_traverse_conj_8_p_0(transform_hlds__term_traversal__V_131_131, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__CondThenInfo_109, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_132_132);
                          }
#line 322 "term_traversal.m"
                          {
#line 322 "term_traversal.m"
                            transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Else_108, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__ElseInfo_110, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_132_132, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
                          }
#line 323 "term_traversal.m"
                          {
#line 323 "term_traversal.m"
                            transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CondThenInfo_109, transform_hlds__term_traversal__ElseInfo_110, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
#line 323 "term_traversal.m"
                            return;
                          }
#line 319 "term_traversal.m"
                        }
#line 170 "term_traversal.m"
                      else
#line 170 "term_traversal.m"
                        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 332 "term_traversal.m"
                          {
#line 332 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__SubGoal_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 332 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 335 "term_traversal.m"
                            /* direct tailcall eliminated */
#line 335 "term_traversal.m"
                            {
#line 335 "term_traversal.m"
                              MR_Word transform_hlds__term_traversal__Goal__tmp_copy_9 = transform_hlds__term_traversal__SubGoal_249;
#line 335 "term_traversal.m"
                              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;

#line 335 "term_traversal.m"
                              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114;
#line 335 "term_traversal.m"
                              transform_hlds__term_traversal__Goal_9 = transform_hlds__term_traversal__Goal__tmp_copy_9;
#line 335 "term_traversal.m"
                            }
#line 335 "term_traversal.m"
                            continue;
#line 332 "term_traversal.m"
                          }
#line 170 "term_traversal.m"
                        else
#line 170 "term_traversal.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 337 "term_traversal.m"
                            {
#line 339 "term_traversal.m"
                              {
#line 339 "term_traversal.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/8", (MR_String) "shorthand");
#line 339 "term_traversal.m"
                                return;
                              }
#line 337 "term_traversal.m"
                            }
#line 170 "term_traversal.m"
                          else
#line 316 "term_traversal.m"
                            {
#line 316 "term_traversal.m"
                              MR_Word transform_hlds__term_traversal__Cases_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 316 "term_traversal.m"
                              MR_Word transform_hlds__term_traversal__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 316 "term_traversal.m"
                              MR_Word transform_hlds__term_traversal__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));

#line 317 "term_traversal.m"
                              {
#line 317 "term_traversal.m"
                                transform_hlds__term_traversal__term_traverse_switch_8_p_0(transform_hlds__term_traversal__Cases_104, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
#line 317 "term_traversal.m"
                                return;
                              }
#line 316 "term_traversal.m"
                            }
#line 121 "term_traversal.m"
      }
#line 121 "term_traversal.m"
      break;
#line 121 "term_traversal.m"
    }
#line 99 "term_traversal.m"
}

#line 94 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__init_term_traversal_params_9_p_0(
#line 94 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__FunctorInfo_10,
#line 94 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__PredProcId_11,
#line 94 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_12,
#line 94 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_13,
#line 94 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutputSuppliers_14,
#line 94 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__RecInputSuppliers_15,
#line 94 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__MaxErrors_16,
#line 94 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__MaxPaths_17,
#line 94 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Params_18)
#line 94 "term_traversal.m"
{
#line 682 "term_traversal.m"
  {
#line 682 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 682 "term_traversal.m"
    {
#line 682 "term_traversal.m"
      MR_Word base;
#line 682 "term_traversal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 682 "term_traversal.m"
      *transform_hlds__term_traversal__Params_18 = base;
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__FunctorInfo_10));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__PredProcId_11));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_traversal__Context_12));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_traversal__VarTypes_13));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_traversal__OutputSuppliers_14));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_traversal__RecInputSuppliers_15));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_traversal__MaxErrors_16));
#line 682 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_traversal__MaxPaths_17));
#line 682 "term_traversal.m"
    }
#line 682 "term_traversal.m"
  }
#line 94 "term_traversal.m"
}

void mercury__transform_hlds__term_traversal__init(void)
{
}

void mercury__transform_hlds__term_traversal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_params_0);
}

void mercury__transform_hlds__term_traversal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_traversal. */
