/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module transform_hlds.term_traversal. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_traversal__init
ENDINIT
*/

#include "transform_hlds.term_traversal.mih"


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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 148 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 151 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 154 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5];

#line 163 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0;

#line 166 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1];

#line 169 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1];

#line 172 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1];

#line 175 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1];

#line 178 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 181 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 184 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2];

#line 187 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0;

#line 190 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2];

#line 193 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1;

#line 196 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1];

#line 199 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1];

#line 202 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2];

#line 205 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2];

#line 208 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2];

#line 211 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 214 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0;

#line 217 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 220 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8];

#line 223 "transform_hlds.term_traversal.c"
static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8];

#line 226 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0;

#line 229 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1];

#line 232 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1];

#line 235 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1];

#line 238 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1];

#line 241 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 244 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 246 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 249 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 252 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 254 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 256 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 259 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 262 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 264 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 267 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 270 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 272 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 274 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 277 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 280 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 282 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 285 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 288 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 290 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 292 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 691 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 691 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 691 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 689 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 689 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 689 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 687 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 687 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 687 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 685 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 685 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 685 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 683 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 683 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 683 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 625 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 625 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 625 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5);

#line 605 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16,
#line 605 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_17);

#line 581 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 581 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 581 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7);

#line 564 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 564 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 564 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12);

#line 540 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 540 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 540 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 540 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 540 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 540 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 516 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 516 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 516 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 516 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18);

#line 485 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 485 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 485 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 485 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3);

#line 439 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 439 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 439 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 439 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 439 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8);

#line 420 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_7,
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 420 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 403 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_6,
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 403 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 390 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 390 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 390 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 390 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6);

#line 378 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 378 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 378 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4);

#line 366 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 366 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 356 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 356 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 347 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 347 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_5);

#line 278 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
#line 278 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 278 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);

#line 247 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
#line 247 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 247 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[4][3];

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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_1)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 661 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 669 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 678 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

#line 686 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 694 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 702 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 710 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 719 "transform_hlds.term_traversal.c"
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

#line 734 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

#line 739 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0
  }
};

#line 748 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

#line 753 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1] = {
  (MR_Integer) 0
};

#line 758 "transform_hlds.term_traversal.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_path_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_path_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_path_info",
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0
};

#line 775 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 783 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 791 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 797 "transform_hlds.term_traversal.c"
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

#line 812 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 818 "transform_hlds.term_traversal.c"
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

#line 833 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 838 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1
};

#line 843 "transform_hlds.term_traversal.c"
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

#line 857 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1,
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 863 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 869 "transform_hlds.term_traversal.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_info",
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0
};

#line 886 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 895 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 903 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 912 "transform_hlds.term_traversal.c"
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

#line 924 "transform_hlds.term_traversal.c"
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

#line 936 "transform_hlds.term_traversal.c"
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

#line 951 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 956 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0
  }
};

#line 965 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 970 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1] = {
  (MR_Integer) 0
};

#line 975 "transform_hlds.term_traversal.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_params",
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0
};

#line 992 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 995 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 997 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 999 "transform_hlds.term_traversal.c"
{
#line 1001 "transform_hlds.term_traversal.c"
  {
#line 1003 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1006 "transform_hlds.term_traversal.c"
    {
#line 1008 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1011 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1013 "transform_hlds.term_traversal.c"
  }
#line 1015 "transform_hlds.term_traversal.c"
}

#line 1018 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 1021 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1023 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1025 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1027 "transform_hlds.term_traversal.c"
{
#line 1029 "transform_hlds.term_traversal.c"
  {
#line 1031 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1034 "transform_hlds.term_traversal.c"
    {
#line 1036 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_path_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1039 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1041 "transform_hlds.term_traversal.c"
  }
#line 1043 "transform_hlds.term_traversal.c"
}

#line 1046 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 1049 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1051 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1053 "transform_hlds.term_traversal.c"
{
#line 1055 "transform_hlds.term_traversal.c"
  {
#line 1057 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1060 "transform_hlds.term_traversal.c"
    {
#line 1062 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1065 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1067 "transform_hlds.term_traversal.c"
  }
#line 1069 "transform_hlds.term_traversal.c"
}

#line 1072 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 1075 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1077 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1079 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1081 "transform_hlds.term_traversal.c"
{
#line 1083 "transform_hlds.term_traversal.c"
  {
#line 1085 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1088 "transform_hlds.term_traversal.c"
    {
#line 1090 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1093 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1095 "transform_hlds.term_traversal.c"
  }
#line 1097 "transform_hlds.term_traversal.c"
}

#line 1100 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 1103 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1105 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1107 "transform_hlds.term_traversal.c"
{
#line 1109 "transform_hlds.term_traversal.c"
  {
#line 1111 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1114 "transform_hlds.term_traversal.c"
    {
#line 1116 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1119 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1121 "transform_hlds.term_traversal.c"
  }
#line 1123 "transform_hlds.term_traversal.c"
}

#line 1126 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 1129 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1131 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1133 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1135 "transform_hlds.term_traversal.c"
{
#line 1137 "transform_hlds.term_traversal.c"
  {
#line 1139 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1142 "transform_hlds.term_traversal.c"
    {
#line 1144 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1147 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1149 "transform_hlds.term_traversal.c"
  }
#line 1151 "transform_hlds.term_traversal.c"
}

#line 647 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
#line 647 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 647 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 647 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 647 "term_traversal.m"
{
#line 647 "term_traversal.m"
  {
#line 647 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 647 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_27 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 647 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_28 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 647 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_27 == transform_hlds__term_traversal__CastY_28);
#line 647 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1178 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 647 "term_traversal.m"
    else
#line 647 "term_traversal.m"
      {
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 5)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 6)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 7)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;

#line 647 "term_traversal.m"
        {
#line 647 "term_traversal.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_traversal__V_20_20, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
        }
#line 1224 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_20_20 == (MR_Integer) 0);
#line 647 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_20_20;
#line 647 "term_traversal.m"
        else
#line 647 "term_traversal.m"
          {
#line 647 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_21_21;

#line 647 "term_traversal.m"
            {
#line 647 "term_traversal.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_21_21, transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
            }
#line 1244 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 647 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 647 "term_traversal.m"
            else
#line 647 "term_traversal.m"
              {
#line 647 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_22_22;

#line 647 "term_traversal.m"
                {
#line 647 "term_traversal.m"
                  mercury__term____Compare____context_0_0(&transform_hlds__term_traversal__V_22_22, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_14_14);
                }
#line 1264 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_22_22 == (MR_Integer) 0);
#line 647 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_22_22;
#line 647 "term_traversal.m"
                else
#line 647 "term_traversal.m"
                  {
#line 647 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_23_23;

#line 647 "term_traversal.m"
                    {
#line 647 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &transform_hlds__term_traversal__V_23_23, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                    }
#line 1284 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_23_23 == (MR_Integer) 0);
#line 647 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_23_23;
#line 647 "term_traversal.m"
                    else
#line 647 "term_traversal.m"
                      {
#line 647 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_24_24;

#line 647 "term_traversal.m"
                        {
#line 647 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_24_24, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                        }
#line 1304 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_24_24 == (MR_Integer) 0);
#line 647 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_24_24;
#line 647 "term_traversal.m"
                        else
#line 647 "term_traversal.m"
                          {
#line 647 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_25_25;

#line 647 "term_traversal.m"
                            {
#line 647 "term_traversal.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_25_25, ((MR_Box) (transform_hlds__term_traversal__V_9_9)), ((MR_Box) (transform_hlds__term_traversal__V_17_17)));
                            }
#line 1324 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_25_25 == (MR_Integer) 0);
#line 647 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_25_25;
#line 647 "term_traversal.m"
                            else
#line 647 "term_traversal.m"
                              {
#line 647 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__V_26_26;

#line 647 "term_traversal.m"
                                {
#line 647 "term_traversal.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_26_26, transform_hlds__term_traversal__V_10_10, transform_hlds__term_traversal__V_18_18);
                                }
#line 1344 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_26_26 == (MR_Integer) 0);
#line 647 "term_traversal.m"
                                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 647 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_26_26;
#line 647 "term_traversal.m"
                                else
#line 647 "term_traversal.m"
                                  {
#line 647 "term_traversal.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_traversal__HeadVar__1_1, transform_hlds__term_traversal__V_11_11, transform_hlds__term_traversal__V_19_19);
                                  }
#line 647 "term_traversal.m"
                              }
#line 647 "term_traversal.m"
                          }
#line 647 "term_traversal.m"
                      }
#line 647 "term_traversal.m"
                  }
#line 647 "term_traversal.m"
              }
#line 647 "term_traversal.m"
          }
#line 647 "term_traversal.m"
      }
#line 647 "term_traversal.m"
  }
#line 647 "term_traversal.m"
}

#line 647 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0(
#line 647 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 647 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 647 "term_traversal.m"
{
#line 647 "term_traversal.m"
  {
#line 647 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 647 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 647 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_20 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 647 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_19 == transform_hlds__term_traversal__CastY_20);
#line 647 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 647 "term_traversal.m"
    else
#line 647 "term_traversal.m"
      {
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_24_24;
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_25_25;
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_26_26;
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 5)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 6)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 7)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 647 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 647 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));

#line 1445 "transform_hlds.term_traversal.c"
        {
#line 1447 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_11_11);
        }
#line 647 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
          {
#line 1454 "transform_hlds.term_traversal.c"
            {
#line 1456 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
            }
#line 647 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
              {
#line 1463 "transform_hlds.term_traversal.c"
                {
#line 1465 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
                }
#line 647 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                  {
#line 1472 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
#line 1474 "transform_hlds.term_traversal.c"
                    {
#line 1476 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_14_14)));
                    }
#line 647 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                      {
#line 1483 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
#line 1485 "transform_hlds.term_traversal.c"
                        {
#line 1487 "transform_hlds.term_traversal.c"
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                        }
#line 647 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                          {
#line 1494 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
#line 1496 "transform_hlds.term_traversal.c"
                            {
#line 1498 "transform_hlds.term_traversal.c"
                              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                            }
#line 647 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 647 "term_traversal.m"
                              {
#line 1505 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_9_9 == transform_hlds__term_traversal__V_17_17);
#line 647 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 1509 "transform_hlds.term_traversal.c"
                                  transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_10_10 == transform_hlds__term_traversal__V_18_18);
#line 647 "term_traversal.m"
                              }
#line 647 "term_traversal.m"
                          }
#line 647 "term_traversal.m"
                      }
#line 647 "term_traversal.m"
                  }
#line 647 "term_traversal.m"
              }
#line 647 "term_traversal.m"
          }
#line 647 "term_traversal.m"
      }
#line 647 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 647 "term_traversal.m"
  }
#line 647 "term_traversal.m"
}

#line 42 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0(
#line 42 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 42 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 42 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 42 "term_traversal.m"
{
#line 42 "term_traversal.m"
  {
#line 42 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 42 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_22 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 42 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_23 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 42 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_22 == transform_hlds__term_traversal__CastY_23);
#line 42 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1556 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "term_traversal.m"
    else
#line 42 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 42 "term_traversal.m"
      {
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 42 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 42 "term_traversal.m"
          {
#line 42 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_21_21;

#line 42 "term_traversal.m"
            {
#line 42 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], &transform_hlds__term_traversal__V_21_21, ((MR_Box) (transform_hlds__term_traversal__V_29_29)), ((MR_Box) (transform_hlds__term_traversal__V_19_19)));
            }
#line 1585 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 42 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 42 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 42 "term_traversal.m"
            else
#line 42 "term_traversal.m"
              {
#line 42 "term_traversal.m"
                {
#line 42 "term_traversal.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_28_28)), ((MR_Box) (transform_hlds__term_traversal__V_20_20)));
                }
#line 42 "term_traversal.m"
              }
#line 42 "term_traversal.m"
          }
#line 42 "term_traversal.m"
        else
#line 1608 "transform_hlds.term_traversal.c"
          *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "term_traversal.m"
      }
#line 42 "term_traversal.m"
    else
#line 42 "term_traversal.m"
      {
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 42 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1623 "transform_hlds.term_traversal.c"
          *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "term_traversal.m"
        else
#line 42 "term_traversal.m"
          {
#line 42 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_8_8;

#line 42 "term_traversal.m"
            {
#line 42 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[7], &transform_hlds__term_traversal__V_8_8, ((MR_Box) (transform_hlds__term_traversal__V_31_31)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
            }
#line 1641 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_8_8 == (MR_Integer) 0);
#line 42 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 42 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_8_8;
#line 42 "term_traversal.m"
            else
#line 42 "term_traversal.m"
              {
#line 42 "term_traversal.m"
                {
#line 42 "term_traversal.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_30_30)), ((MR_Box) (transform_hlds__term_traversal__V_7_7)));
                }
#line 42 "term_traversal.m"
              }
#line 42 "term_traversal.m"
          }
#line 42 "term_traversal.m"
      }
#line 42 "term_traversal.m"
  }
#line 42 "term_traversal.m"
}

#line 42 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0(
#line 42 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 42 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 42 "term_traversal.m"
{
#line 42 "term_traversal.m"
  {
#line 42 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 42 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_11 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 42 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_12 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 42 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_11 == transform_hlds__term_traversal__CastY_12);
#line 42 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 42 "term_traversal.m"
    else
#line 42 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 42 "term_traversal.m"
      {
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_13_13;
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_14_14;
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_10_10;

#line 42 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 42 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
          {
#line 42 "term_traversal.m"
            transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "term_traversal.m"
            transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 1722 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1724 "transform_hlds.term_traversal.c"
            {
#line 1726 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 42 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
              {
#line 1733 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1735 "transform_hlds.term_traversal.c"
                {
#line 1737 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
                }
#line 42 "term_traversal.m"
              }
#line 42 "term_traversal.m"
          }
#line 42 "term_traversal.m"
      }
#line 42 "term_traversal.m"
    else
#line 42 "term_traversal.m"
      {
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_15_15;
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5;
#line 42 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6;

#line 42 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 42 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
          {
#line 42 "term_traversal.m"
            transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "term_traversal.m"
            transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 1773 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[7];
#line 1775 "transform_hlds.term_traversal.c"
            {
#line 1777 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_traversal__V_3_3)), ((MR_Box) (transform_hlds__term_traversal__V_5_5)));
            }
#line 42 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 42 "term_traversal.m"
              {
#line 1784 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1786 "transform_hlds.term_traversal.c"
                {
#line 1788 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
                }
#line 42 "term_traversal.m"
              }
#line 42 "term_traversal.m"
          }
#line 42 "term_traversal.m"
      }
#line 42 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 42 "term_traversal.m"
  }
#line 42 "term_traversal.m"
}

#line 73 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0(
#line 73 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 73 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 73 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 73 "term_traversal.m"
{
#line 73 "term_traversal.m"
  {
#line 73 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 73 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_18 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 73 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 73 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_18 == transform_hlds__term_traversal__CastY_19);
#line 73 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1828 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "term_traversal.m"
    else
#line 73 "term_traversal.m"
      {
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14;

#line 73 "term_traversal.m"
        {
#line 73 "term_traversal.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_14_14, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_9_9);
        }
#line 1862 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_14_14 == (MR_Integer) 0);
#line 73 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 73 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_14_14;
#line 73 "term_traversal.m"
        else
#line 73 "term_traversal.m"
          {
#line 73 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_15_15;

#line 73 "term_traversal.m"
            {
#line 73 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[3], &transform_hlds__term_traversal__V_15_15, ((MR_Box) (transform_hlds__term_traversal__V_5_5)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
            }
#line 1882 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_15_15 == (MR_Integer) 0);
#line 73 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 73 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_15_15;
#line 73 "term_traversal.m"
            else
#line 73 "term_traversal.m"
              {
#line 73 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_16_16;

#line 73 "term_traversal.m"
                {
#line 73 "term_traversal.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_16_16, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_11_11);
                }
#line 1902 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_16_16 == (MR_Integer) 0);
#line 73 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 73 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_16_16;
#line 73 "term_traversal.m"
                else
#line 73 "term_traversal.m"
                  {
#line 73 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_17_17;

#line 73 "term_traversal.m"
                    {
#line 73 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[4], &transform_hlds__term_traversal__V_17_17, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                    }
#line 1922 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_17_17 == (MR_Integer) 0);
#line 73 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 73 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_17_17;
#line 73 "term_traversal.m"
                    else
#line 73 "term_traversal.m"
                      {
#line 73 "term_traversal.m"
                        {
#line 73 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[5], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_13_13)));
                        }
#line 73 "term_traversal.m"
                      }
#line 73 "term_traversal.m"
                  }
#line 73 "term_traversal.m"
              }
#line 73 "term_traversal.m"
          }
#line 73 "term_traversal.m"
      }
#line 73 "term_traversal.m"
  }
#line 73 "term_traversal.m"
}

#line 73 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0(
#line 73 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 73 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 73 "term_traversal.m"
{
#line 73 "term_traversal.m"
  {
#line 73 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 73 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_13 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 73 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_14 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 73 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_13 == transform_hlds__term_traversal__CastY_14);
#line 73 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 73 "term_traversal.m"
    else
#line 73 "term_traversal.m"
      {
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_17_17;
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_18_18;
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));

#line 2009 "transform_hlds.term_traversal.c"
        {
#line 2011 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_8_8);
        }
#line 73 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
          {
#line 2018 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[3];
#line 2020 "transform_hlds.term_traversal.c"
            {
#line 2022 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 73 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
              {
#line 2029 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_5_5 == transform_hlds__term_traversal__V_10_10);
#line 73 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
                  {
#line 2035 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_17_17 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[4];
#line 2037 "transform_hlds.term_traversal.c"
                    {
#line 2039 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_17_17, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_11_11)));
                    }
#line 73 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 73 "term_traversal.m"
                      {
#line 2046 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[5];
#line 2048 "transform_hlds.term_traversal.c"
                        {
#line 2050 "transform_hlds.term_traversal.c"
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                        }
#line 73 "term_traversal.m"
                      }
#line 73 "term_traversal.m"
                  }
#line 73 "term_traversal.m"
              }
#line 73 "term_traversal.m"
          }
#line 73 "term_traversal.m"
      }
#line 73 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 73 "term_traversal.m"
  }
#line 73 "term_traversal.m"
}

#line 691 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 691 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 691 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 691 "term_traversal.m"
{
#line 701 "term_traversal.m"
  {
#line 701 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 701 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 701 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 701 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 701 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 701 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 701 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 701 "term_traversal.m"
  }
#line 691 "term_traversal.m"
}

#line 689 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 689 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 689 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 689 "term_traversal.m"
{
#line 700 "term_traversal.m"
  {
#line 700 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 700 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 700 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 700 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 700 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 700 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 700 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 700 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 700 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 700 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 700 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 700 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 700 "term_traversal.m"
  }
#line 689 "term_traversal.m"
}

#line 687 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 687 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 687 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 687 "term_traversal.m"
{
#line 699 "term_traversal.m"
  {
#line 699 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 699 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 699 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 699 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 699 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 699 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 699 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 699 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 699 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 699 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 699 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 699 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 699 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 699 "term_traversal.m"
  }
#line 687 "term_traversal.m"
}

#line 685 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 685 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 685 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 685 "term_traversal.m"
{
#line 698 "term_traversal.m"
  {
#line 698 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 698 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 698 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 698 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 698 "term_traversal.m"
  }
#line 685 "term_traversal.m"
}

#line 683 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 683 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 683 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 683 "term_traversal.m"
{
#line 697 "term_traversal.m"
  {
#line 697 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5;
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 697 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 697 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 697 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 697 "term_traversal.m"
    transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 697 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 697 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 697 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 697 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 697 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 697 "term_traversal.m"
  }
#line 683 "term_traversal.m"
}

#line 625 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 625 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 625 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5)
#line 625 "term_traversal.m"
{
#line 628 "term_traversal.m"
  while (MR_TRUE)
#line 628 "term_traversal.m"
    {
#line 628 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 628 "term_traversal.m"
      {
#line 628 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 628 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_3;
#line 628 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_4;

#line 628 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 628 "term_traversal.m"
          {
#line 628 "term_traversal.m"
            transform_hlds__term_traversal__Path_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "term_traversal.m"
            transform_hlds__term_traversal__Paths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 630 "term_traversal.m"
            {
#line 630 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 4)));
#line 630 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 0)));
#line 630 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 1)));
#line 630 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 2)));
#line 630 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 3)));

#line 631 "term_traversal.m"
              {
#line 631 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__Vars_10, transform_hlds__term_traversal__OutVars_5);
              }
#line 630 "term_traversal.m"
            }
#line 632 "term_traversal.m"
            if (!(transform_hlds__term_traversal__succeeded))
#line 633 "term_traversal.m"
              {
#line 633 "term_traversal.m"
                /* direct tailcall eliminated */
#line 633 "term_traversal.m"
                {
#line 633 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths_4;

#line 633 "term_traversal.m"
                  transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 633 "term_traversal.m"
                }
#line 633 "term_traversal.m"
                continue;
#line 633 "term_traversal.m"
              }
#line 628 "term_traversal.m"
          }
#line 628 "term_traversal.m"
        return transform_hlds__term_traversal__succeeded;
#line 628 "term_traversal.m"
      }
#line 628 "term_traversal.m"
      break;
#line 628 "term_traversal.m"
    }
#line 625 "term_traversal.m"
}

#line 605 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 605 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16,
#line 605 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_17)
#line 605 "term_traversal.m"
{
#line 611 "term_traversal.m"
  {
#line 611 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 611 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16)) == (MR_mktag((MR_Integer) 1))))
#line 611 "term_traversal.m"
      *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16;
#line 611 "term_traversal.m"
    else
#line 613 "term_traversal.m"
      {
#line 613 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 613 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 615 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathList_14;

#line 615 "term_traversal.m"
        {
#line 615 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_traversal__Paths_12, &transform_hlds__term_traversal__PathList_14);
        }
#line 616 "term_traversal.m"
        {
#line 616 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(transform_hlds__term_traversal__PathList_14, transform_hlds__term_traversal__OutVars_6);
        }
#line 614 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 618 "term_traversal.m"
          {
#line 618 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Error_15;
#line 618 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_19_19;

#line 618 "term_traversal.m"
            {
#line 618 "term_traversal.m"
              transform_hlds__term_traversal__Error_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_15, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 618 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_15, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
#line 618 "term_traversal.m"
            }
#line 619 "term_traversal.m"
            {
#line 619 "term_traversal.m"
              transform_hlds__term_traversal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_19_19, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_15));
#line 619 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "term_traversal.m"
            }
#line 619 "term_traversal.m"
            {
#line 619 "term_traversal.m"
              MR_Word base;
#line 619 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "term_traversal.m"
              *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = base;
#line 619 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_19_19));
#line 619 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_13));
#line 619 "term_traversal.m"
            }
#line 618 "term_traversal.m"
          }
#line 614 "term_traversal.m"
        else
#line 614 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16;
#line 613 "term_traversal.m"
      }
#line 611 "term_traversal.m"
  }
#line 605 "term_traversal.m"
}

#line 581 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 581 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 581 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 581 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7)
#line 581 "term_traversal.m"
{
#line 585 "term_traversal.m"
  while (MR_TRUE)
#line 585 "term_traversal.m"
    {
#line 585 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 585 "term_traversal.m"
      {
#line 585 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 585 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6;
#line 585 "term_traversal.m"
        else
#line 587 "term_traversal.m"
          {
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ProcData_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 0)));
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Start_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 1)));
#line 587 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Gamma0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 2)));
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PPIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 3)));
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Vars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 4)));
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path_31;
#line 587 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 589 "term_traversal.m"
            {
#line 589 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__OutVars_3, transform_hlds__term_traversal__Vars0_26);
            }
#line 589 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 591 "term_traversal.m"
              {
#line 591 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__TypeInfo_38_38;
#line 591 "term_traversal.m"
                MR_Integer transform_hlds__term_traversal__Gamma_27 = (transform_hlds__term_traversal__CallGamma_4 + transform_hlds__term_traversal__Gamma0_24);
#line 591 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__PPIds_28;
#line 591 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars1_29;
#line 591 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars_30;

#line 592 "term_traversal.m"
                {
#line 592 "term_traversal.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_traversal__CallPPIds_5, transform_hlds__term_traversal__PPIds0_25, &transform_hlds__term_traversal__PPIds_28);
                }
#line 2552 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_38_38 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 593 "term_traversal.m"
                {
#line 593 "term_traversal.m"
                  mercury__bag__subtract_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__Vars0_26, transform_hlds__term_traversal__OutVars_3, &transform_hlds__term_traversal__Vars1_29);
                }
#line 594 "term_traversal.m"
                {
#line 594 "term_traversal.m"
                  mercury__bag__union_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__InVars_2, transform_hlds__term_traversal__Vars1_29, &transform_hlds__term_traversal__Vars_30);
                }
#line 595 "term_traversal.m"
                {
#line 595 "term_traversal.m"
                  transform_hlds__term_traversal__Path_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 595 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 0) = ((MR_Box) (transform_hlds__term_traversal__ProcData_22));
#line 595 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 1) = ((MR_Box) (transform_hlds__term_traversal__Start_23));
#line 595 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 2) = ((MR_Box) (transform_hlds__term_traversal__Gamma_27));
#line 595 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 3) = ((MR_Box) (transform_hlds__term_traversal__PPIds_28));
#line 595 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 4) = ((MR_Box) (transform_hlds__term_traversal__Vars_30));
#line 595 "term_traversal.m"
                }
#line 591 "term_traversal.m"
              }
#line 589 "term_traversal.m"
            else
#line 598 "term_traversal.m"
              transform_hlds__term_traversal__Path_31 = transform_hlds__term_traversal__Path0_15;
#line 600 "term_traversal.m"
            {
#line 600 "term_traversal.m"
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_31)), transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6, &transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34);
            }
#line 601 "term_traversal.m"
            /* direct tailcall eliminated */
#line 601 "term_traversal.m"
            {
#line 601 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths0_16;
#line 601 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 601 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6;
#line 601 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 601 "term_traversal.m"
            }
#line 601 "term_traversal.m"
            continue;
#line 587 "term_traversal.m"
          }
#line 585 "term_traversal.m"
      }
#line 585 "term_traversal.m"
      break;
#line 585 "term_traversal.m"
    }
#line 581 "term_traversal.m"
}

#line 564 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 564 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 564 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 564 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12)
#line 564 "term_traversal.m"
{
#line 570 "term_traversal.m"
  {
#line 570 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 570 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_11)) == (MR_mktag((MR_Integer) 1))))
#line 571 "term_traversal.m"
      *transform_hlds__term_traversal__Info_12 = transform_hlds__term_traversal__Info0_11;
#line 570 "term_traversal.m"
    else
#line 573 "term_traversal.m"
      {
#line 573 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeCtorInfo_20_20 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 573 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 0)));
#line 573 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 1)));
#line 573 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathsList0_17;
#line 573 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths0_18;
#line 573 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths_19;

#line 574 "term_traversal.m"
        {
#line 574 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, transform_hlds__term_traversal__Paths0_15, &transform_hlds__term_traversal__PathsList0_17);
        }
#line 575 "term_traversal.m"
        {
#line 575 "term_traversal.m"
          mercury__set__init_1_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, &transform_hlds__term_traversal__NewPaths0_18);
        }
#line 576 "term_traversal.m"
        {
#line 576 "term_traversal.m"
          transform_hlds__term_traversal__record_change_2_7_p_0(transform_hlds__term_traversal__PathsList0_17, transform_hlds__term_traversal__InVars_7, transform_hlds__term_traversal__OutVars_8, transform_hlds__term_traversal__Gamma_9, transform_hlds__term_traversal__CalledPPIds_10, transform_hlds__term_traversal__NewPaths0_18, &transform_hlds__term_traversal__NewPaths_19);
        }
#line 578 "term_traversal.m"
        {
#line 578 "term_traversal.m"
          MR_Word base;
#line 578 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "term_traversal.m"
          *transform_hlds__term_traversal__Info_12 = base;
#line 578 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__NewPaths_19));
#line 578 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_16));
#line 578 "term_traversal.m"
        }
#line 573 "term_traversal.m"
      }
#line 570 "term_traversal.m"
  }
#line 564 "term_traversal.m"
}

#line 540 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 540 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 540 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 540 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 540 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 540 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 540 "term_traversal.m"
{
#line 544 "term_traversal.m"
  {
#line 544 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 544 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "term_traversal.m"
        {
#line 544 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "term_traversal.m"
        }
#line 544 "term_traversal.m"
      else
#line 545 "term_traversal.m"
        {
#line 546 "term_traversal.m"
          {
#line 546 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 546 "term_traversal.m"
            return;
          }
#line 545 "term_traversal.m"
        }
#line 544 "term_traversal.m"
    else
#line 544 "term_traversal.m"
      {
#line 544 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 544 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 544 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "term_traversal.m"
          {
#line 548 "term_traversal.m"
            {
#line 548 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 548 "term_traversal.m"
              return;
            }
#line 547 "term_traversal.m"
          }
#line 544 "term_traversal.m"
        else
#line 550 "term_traversal.m"
          {
#line 550 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Mode0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 0)));
#line 550 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Modes0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 1)));
#line 550 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailArgs_30;
#line 550 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailModes_31;
#line 550 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Type_32;

#line 551 "term_traversal.m"
            {
#line 551 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_33_33, &transform_hlds__term_traversal__TailArgs_30, transform_hlds__term_traversal__Modes0_28, &transform_hlds__term_traversal__TailModes_31);
            }
#line 553 "term_traversal.m"
            {
#line 553 "term_traversal.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_34_34, &transform_hlds__term_traversal__Type_32);
            }
#line 554 "term_traversal.m"
            {
#line 554 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_traversal__Type_32);
            }
#line 554 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 555 "term_traversal.m"
              {
#line 555 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__TailArgs_30;
#line 556 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__5_5 = transform_hlds__term_traversal__TailModes_31;
#line 555 "term_traversal.m"
              }
#line 554 "term_traversal.m"
            else
#line 558 "term_traversal.m"
              {
#line 558 "term_traversal.m"
                {
#line 558 "term_traversal.m"
                  MR_Word base;
#line 558 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__3_3 = base;
#line 558 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_34_34));
#line 558 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailArgs_30));
#line 558 "term_traversal.m"
                }
#line 559 "term_traversal.m"
                {
#line 559 "term_traversal.m"
                  MR_Word base;
#line 559 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 559 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Mode0_27));
#line 559 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailModes_31));
#line 559 "term_traversal.m"
                }
#line 558 "term_traversal.m"
              }
#line 550 "term_traversal.m"
          }
#line 544 "term_traversal.m"
      }
#line 544 "term_traversal.m"
  }
#line 540 "term_traversal.m"
}

#line 516 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 516 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 516 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 516 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 516 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18)
#line 516 "term_traversal.m"
{
#line 521 "term_traversal.m"
  {
#line 521 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__FunctorInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 0)));
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 3)));
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Type_21;
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__TypeCtor_24;
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args1_25;
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes1_26;
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args_27;
#line 521 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes_28;
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 1)));
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 2)));
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 4)));
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 5)));
#line 696 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 6)));
#line 696 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 7)));

#line 524 "term_traversal.m"
    {
#line 524 "term_traversal.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__OutVar_11, &transform_hlds__term_traversal__Type_21);
    }
#line 525 "term_traversal.m"
    {
#line 525 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_traversal__Type_21);
    }
#line 525 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 521 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 521 "term_traversal.m"
      {
#line 528 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 527 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 528 "term_traversal.m"
        else
#line 528 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 529 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 528 "term_traversal.m"
        else
#line 528 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_FALSE;
#line 526 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 521 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 521 "term_traversal.m"
          {
#line 532 "term_traversal.m"
            {
#line 532 "term_traversal.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_traversal__Type_21, &transform_hlds__term_traversal__TypeCtor_24);
            }
#line 533 "term_traversal.m"
            {
#line 533 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__Args0_13, &transform_hlds__term_traversal__Args1_25, transform_hlds__term_traversal__Modes0_14, &transform_hlds__term_traversal__Modes1_26);
            }
#line 535 "term_traversal.m"
            {
#line 535 "term_traversal.m"
              transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__FunctorInfo_19, transform_hlds__term_traversal__TypeCtor_24, transform_hlds__term_traversal__ConsId_12, transform_hlds__term_traversal__Gamma_16, transform_hlds__term_traversal__Args1_25, &transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes1_26, &transform_hlds__term_traversal__Modes_28);
            }
#line 537 "term_traversal.m"
            {
#line 537 "term_traversal.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes_28, transform_hlds__term_traversal__InVars_17, transform_hlds__term_traversal__OutVars_18);
            }
#line 537 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 521 "term_traversal.m"
          }
#line 521 "term_traversal.m"
      }
#line 521 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 521 "term_traversal.m"
  }
#line 516 "term_traversal.m"
}

#line 485 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 485 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 485 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 485 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3)
#line 485 "term_traversal.m"
{
#line 488 "term_traversal.m"
  {
#line 488 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 488 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "term_traversal.m"
        {
#line 489 "term_traversal.m"
          {
#line 489 "term_traversal.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__HeadVar__3_3);
          }
#line 488 "term_traversal.m"
        }
#line 488 "term_traversal.m"
      else
#line 492 "term_traversal.m"
        {
#line 493 "term_traversal.m"
          {
#line 493 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 493 "term_traversal.m"
            return;
          }
#line 492 "term_traversal.m"
        }
#line 488 "term_traversal.m"
    else
#line 488 "term_traversal.m"
      {
#line 488 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));

#line 488 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "term_traversal.m"
          {
#line 491 "term_traversal.m"
            {
#line 491 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 491 "term_traversal.m"
              return;
            }
#line 490 "term_traversal.m"
          }
#line 488 "term_traversal.m"
        else
#line 495 "term_traversal.m"
          {
#line 495 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSupplier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 495 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSuppliers_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 495 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Out1_22;

#line 496 "term_traversal.m"
            {
#line 496 "term_traversal.m"
              transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__V_25_25, transform_hlds__term_traversal__RecInputSuppliers_20, &transform_hlds__term_traversal__Out1_22);
            }
#line 500 "term_traversal.m"
#line 500 "term_traversal.m"
            switch (transform_hlds__term_traversal__RecInputSupplier_19) {
#line 500 "term_traversal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 500 "term_traversal.m"
              case (MR_Integer) 0:
#line 501 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__Out1_22;
#line 500 "term_traversal.m"
                break;
#line 500 "term_traversal.m"
              case (MR_Integer) 1:
#line 498 "term_traversal.m"
                {
#line 499 "term_traversal.m"
                  {
#line 499 "term_traversal.m"
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__V_26_26)), transform_hlds__term_traversal__Out1_22, transform_hlds__term_traversal__HeadVar__3_3);
                  }
#line 498 "term_traversal.m"
                }
#line 500 "term_traversal.m"
                break;
#line 500 "term_traversal.m"
            }
#line 495 "term_traversal.m"
          }
#line 488 "term_traversal.m"
      }
#line 488 "term_traversal.m"
  }
#line 485 "term_traversal.m"
}

#line 439 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 439 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 439 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 439 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 439 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8)
#line 439 "term_traversal.m"
{
#line 444 "term_traversal.m"
  {
#line 444 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 444 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoA_5)) == (MR_mktag((MR_Integer) 1))))
#line 444 "term_traversal.m"
      {
#line 444 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 444 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 444 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 444 "term_traversal.m"
          {
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 444 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Errors_14;
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_31_31;
#line 444 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_32_32;
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 702 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 447 "term_traversal.m"
            {
#line 447 "term_traversal.m"
              transform_hlds__term_traversal__V_31_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_53_53, transform_hlds__term_traversal__ErrorsB_11);
            }
#line 447 "term_traversal.m"
            {
#line 447 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_31_31, &transform_hlds__term_traversal__Errors_14);
            }
#line 448 "term_traversal.m"
            {
#line 448 "term_traversal.m"
              transform_hlds__term_traversal__V_32_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_12);
            }
#line 448 "term_traversal.m"
            {
#line 448 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_32_32, &transform_hlds__term_traversal__CanLoop_15);
            }
#line 449 "term_traversal.m"
            {
#line 449 "term_traversal.m"
              MR_Word base;
#line 449 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 449 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_14));
#line 449 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 449 "term_traversal.m"
            }
#line 444 "term_traversal.m"
          }
#line 444 "term_traversal.m"
        else
#line 451 "term_traversal.m"
          {
#line 451 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 451 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_30_30;
#line 451 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 451 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 451 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_37;
#line 452 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 702 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 454 "term_traversal.m"
            {
#line 454 "term_traversal.m"
              transform_hlds__term_traversal__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_35);
            }
#line 454 "term_traversal.m"
            {
#line 454 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__MaxErrors_36, transform_hlds__term_traversal__V_30_30, &transform_hlds__term_traversal__CanLoop_37);
            }
#line 455 "term_traversal.m"
            {
#line 455 "term_traversal.m"
              MR_Word base;
#line 455 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 455 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_53_53));
#line 455 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_37));
#line 455 "term_traversal.m"
            }
#line 451 "term_traversal.m"
          }
#line 444 "term_traversal.m"
      }
#line 444 "term_traversal.m"
    else
#line 444 "term_traversal.m"
      {
#line 444 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 444 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 444 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 457 "term_traversal.m"
          {
#line 457 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 457 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_29_29;
#line 457 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 457 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 457 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 457 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_42;
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 702 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 460 "term_traversal.m"
            {
#line 460 "term_traversal.m"
              transform_hlds__term_traversal__V_29_29 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_40);
            }
#line 460 "term_traversal.m"
            {
#line 460 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__MaxErrors_41, transform_hlds__term_traversal__V_29_29, &transform_hlds__term_traversal__CanLoop_42);
            }
#line 461 "term_traversal.m"
            {
#line 461 "term_traversal.m"
              MR_Word base;
#line 461 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 461 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorsB_39));
#line 461 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_42));
#line 461 "term_traversal.m"
            }
#line 457 "term_traversal.m"
          }
#line 444 "term_traversal.m"
        else
#line 463 "term_traversal.m"
          {
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_51_51;
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PathsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths_20;
#line 463 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxPaths_21;
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_25_25;
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 463 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 463 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_46;
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 702 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 702 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 703 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_89_89;
#line 703 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_90_90;
#line 703 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_91_91;
#line 703 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_92_92;
#line 703 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_93_93;
#line 703 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_94_94;
#line 703 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_95_95;
#line 472 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Count_22;

#line 466 "term_traversal.m"
            {
#line 466 "term_traversal.m"
              transform_hlds__term_traversal__V_25_25 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_44);
            }
#line 466 "term_traversal.m"
            {
#line 466 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__MaxErrors_45, transform_hlds__term_traversal__V_25_25, &transform_hlds__term_traversal__CanLoop_46);
            }
#line 3374 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 467 "term_traversal.m"
            {
#line 467 "term_traversal.m"
              mercury__set__union_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__PathsB_19, transform_hlds__term_traversal__V_55_55, &transform_hlds__term_traversal__Paths_20);
            }
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 703 "term_traversal.m"
            transform_hlds__term_traversal__MaxPaths_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 472 "term_traversal.m"
            {
#line 472 "term_traversal.m"
              mercury__set__count_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__Paths_20, &transform_hlds__term_traversal__Count_22);
            }
#line 473 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__Count_22 <= transform_hlds__term_traversal__MaxPaths_21);
#line 469 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 475 "term_traversal.m"
              {
#line 475 "term_traversal.m"
                MR_Word base;
#line 475 "term_traversal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "term_traversal.m"
                *transform_hlds__term_traversal__Info_8 = base;
#line 475 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_20));
#line 475 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 475 "term_traversal.m"
              }
#line 469 "term_traversal.m"
            else
#line 477 "term_traversal.m"
              {
#line 477 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Context_23;
#line 477 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Error_24;
#line 477 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_27_27;

#line 477 "term_traversal.m"
                {
#line 477 "term_traversal.m"
                  transform_hlds__term_traversal__params_get_context_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Context_23);
                }
#line 478 "term_traversal.m"
                {
#line 478 "term_traversal.m"
                  transform_hlds__term_traversal__Error_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_24, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_23));
#line 478 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 478 "term_traversal.m"
                }
#line 479 "term_traversal.m"
                {
#line 479 "term_traversal.m"
                  transform_hlds__term_traversal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_24));
#line 479 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "term_traversal.m"
                }
#line 479 "term_traversal.m"
                {
#line 479 "term_traversal.m"
                  MR_Word base;
#line 479 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "term_traversal.m"
                  *transform_hlds__term_traversal__Info_8 = base;
#line 479 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_27_27));
#line 479 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 479 "term_traversal.m"
                }
#line 477 "term_traversal.m"
              }
#line 463 "term_traversal.m"
          }
#line 444 "term_traversal.m"
      }
#line 444 "term_traversal.m"
  }
#line 439 "term_traversal.m"
}

#line 420 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_7,
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 420 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 420 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 420 "term_traversal.m"
{
#line 426 "term_traversal.m"
  {
#line 426 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 426 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 426 "term_traversal.m"
      {
#line 426 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 426 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 426 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_13;
#line 426 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 426 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 426 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_30_30;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_31_31;
#line 702 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_32_32;

#line 427 "term_traversal.m"
        {
#line 427 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 427 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_7));
#line 427 "term_traversal.m"
        }
#line 427 "term_traversal.m"
        {
#line 427 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 427 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_12));
#line 427 "term_traversal.m"
        }
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 429 "term_traversal.m"
        {
#line 429 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__CanLoop1_13, &transform_hlds__term_traversal__CanLoop_15);
        }
#line 430 "term_traversal.m"
        {
#line 430 "term_traversal.m"
          MR_Word base;
#line 430 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 430 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_11));
#line 430 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 430 "term_traversal.m"
        }
#line 426 "term_traversal.m"
      }
#line 426 "term_traversal.m"
    else
#line 432 "term_traversal.m"
      {
#line 432 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 432 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17;
#line 432 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 432 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_20;
#line 432 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_21;
#line 432 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_22;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_35_35;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_36_36;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_37_37;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_38_38;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_39_39;
#line 702 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_40_40;

#line 433 "term_traversal.m"
        {
#line 433 "term_traversal.m"
          transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 433 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_7));
#line 433 "term_traversal.m"
        }
#line 433 "term_traversal.m"
        {
#line 433 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
#line 433 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_19));
#line 433 "term_traversal.m"
        }
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 435 "term_traversal.m"
        {
#line 435 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_21, transform_hlds__term_traversal__CanLoop1_20, &transform_hlds__term_traversal__CanLoop_22);
        }
#line 436 "term_traversal.m"
        {
#line 436 "term_traversal.m"
          MR_Word base;
#line 436 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 436 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_16));
#line 436 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_22));
#line 436 "term_traversal.m"
        }
#line 432 "term_traversal.m"
      }
#line 426 "term_traversal.m"
  }
#line 420 "term_traversal.m"
}

#line 403 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_6,
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 403 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 403 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 403 "term_traversal.m"
{
#line 409 "term_traversal.m"
  {
#line 409 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 409 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 409 "term_traversal.m"
      {
#line 409 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 409 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 409 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors1_13;
#line 409 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 409 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_15;
#line 409 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_24_24;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 702 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 702 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_30_30;

#line 410 "term_traversal.m"
        {
#line 410 "term_traversal.m"
          transform_hlds__term_traversal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 410 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
#line 410 "term_traversal.m"
        }
#line 410 "term_traversal.m"
        {
#line 410 "term_traversal.m"
          transform_hlds__term_traversal__Errors1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_20_20));
#line 410 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__Errors0_11));
#line 410 "term_traversal.m"
        }
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 0)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 1)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 2)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 3)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 4)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 5)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 6)));
#line 702 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 7)));
#line 412 "term_traversal.m"
        {
#line 412 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__Errors1_13, &transform_hlds__term_traversal__Errors_15);
        }
#line 413 "term_traversal.m"
        {
#line 413 "term_traversal.m"
          MR_Word base;
#line 413 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 413 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_15));
#line 413 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_12));
#line 413 "term_traversal.m"
        }
#line 409 "term_traversal.m"
      }
#line 409 "term_traversal.m"
    else
#line 415 "term_traversal.m"
      {
#line 415 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ErrorContext_17;
#line 415 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 415 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 415 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));

#line 416 "term_traversal.m"
        {
#line 416 "term_traversal.m"
          transform_hlds__term_traversal__ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 416 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
#line 416 "term_traversal.m"
        }
#line 417 "term_traversal.m"
        {
#line 417 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_17));
#line 417 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "term_traversal.m"
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 417 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_21));
#line 417 "term_traversal.m"
        }
#line 415 "term_traversal.m"
      }
#line 409 "term_traversal.m"
  }
#line 403 "term_traversal.m"
}

#line 390 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 390 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 390 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 390 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6)
#line 390 "term_traversal.m"
{
#line 395 "term_traversal.m"
  {
#line 395 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 395 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_5)) == (MR_mktag((MR_Integer) 1))))
#line 396 "term_traversal.m"
      *transform_hlds__term_traversal__Info_6 = transform_hlds__term_traversal__Info0_5;
#line 395 "term_traversal.m"
    else
#line 398 "term_traversal.m"
      {
#line 398 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 0)));
#line 398 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 1)));
#line 398 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_11;

#line 399 "term_traversal.m"
        {
#line 399 "term_traversal.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_4)), transform_hlds__term_traversal__Paths0_9, &transform_hlds__term_traversal__Paths_11);
        }
#line 400 "term_traversal.m"
        {
#line 400 "term_traversal.m"
          MR_Word base;
#line 400 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "term_traversal.m"
          *transform_hlds__term_traversal__Info_6 = base;
#line 400 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_11));
#line 400 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_10));
#line 400 "term_traversal.m"
        }
#line 398 "term_traversal.m"
      }
#line 395 "term_traversal.m"
  }
#line 390 "term_traversal.m"
}

#line 378 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 378 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 378 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4)
#line 378 "term_traversal.m"
{
#line 383 "term_traversal.m"
  {
#line 383 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 383 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_3)) == (MR_mktag((MR_Integer) 1))))
#line 384 "term_traversal.m"
      *transform_hlds__term_traversal__Info_4 = transform_hlds__term_traversal__Info0_3;
#line 383 "term_traversal.m"
    else
#line 386 "term_traversal.m"
      {
#line 386 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 1)));
#line 386 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 386 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 0)));

#line 387 "term_traversal.m"
        {
#line 387 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 387 "term_traversal.m"
        {
#line 387 "term_traversal.m"
          MR_Word base;
#line 387 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "term_traversal.m"
          *transform_hlds__term_traversal__Info_4 = base;
#line 387 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 387 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_8));
#line 387 "term_traversal.m"
        }
#line 386 "term_traversal.m"
      }
#line 383 "term_traversal.m"
  }
#line 378 "term_traversal.m"
}

#line 366 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 366 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 366 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 366 "term_traversal.m"
{
#line 369 "term_traversal.m"
  {
#line 369 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 369 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "term_traversal.m"
      {
#line 369 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;

#line 369 "term_traversal.m"
        {
#line 369 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 369 "term_traversal.m"
        {
#line 369 "term_traversal.m"
          MR_Word base;
#line 369 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 369 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 369 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "term_traversal.m"
        }
#line 369 "term_traversal.m"
      }
#line 369 "term_traversal.m"
    else
#line 370 "term_traversal.m"
      {
#line 370 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Case_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 370 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 370 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 2)));
#line 370 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CaseInfo_19;
#line 370 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CasesInfo_20;
#line 371 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 0)));
#line 371 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 1)));

#line 372 "term_traversal.m"
        {
#line 372 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_18, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__CaseInfo_19);
        }
#line 373 "term_traversal.m"
        {
#line 373 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_switch_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Cases_14, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__CasesInfo_20);
        }
#line 374 "term_traversal.m"
        {
#line 374 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CaseInfo_19, transform_hlds__term_traversal__CasesInfo_20, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__5_5);
        }
#line 370 "term_traversal.m"
      }
#line 369 "term_traversal.m"
  }
#line 366 "term_traversal.m"
}

#line 356 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 356 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 356 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 356 "term_traversal.m"
{
#line 360 "term_traversal.m"
  {
#line 360 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 360 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 360 "term_traversal.m"
      {
#line 360 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;

#line 360 "term_traversal.m"
        {
#line 360 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 360 "term_traversal.m"
        {
#line 360 "term_traversal.m"
          MR_Word base;
#line 360 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 360 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 360 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "term_traversal.m"
        }
#line 360 "term_traversal.m"
      }
#line 360 "term_traversal.m"
    else
#line 361 "term_traversal.m"
      {
#line 361 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 361 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 361 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_16;
#line 361 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalsInfo_17;

#line 362 "term_traversal.m"
        {
#line 362 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_13, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__GoalInfo_16);
        }
#line 363 "term_traversal.m"
        {
#line 363 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_disj_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goals_14, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__GoalsInfo_17);
        }
#line 364 "term_traversal.m"
        {
#line 364 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_16, transform_hlds__term_traversal__GoalsInfo_17, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__5_5);
        }
#line 361 "term_traversal.m"
      }
#line 360 "term_traversal.m"
  }
#line 356 "term_traversal.m"
}

#line 347 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 347 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 347 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_5)
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
        if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_Info_5 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4;
#line 351 "term_traversal.m"
        else
#line 352 "term_traversal.m"
          {
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 352 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18;

#line 353 "term_traversal.m"
            {
#line 353 "term_traversal.m"
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_13, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18);
            }
#line 354 "term_traversal.m"
            /* direct tailcall eliminated */
#line 354 "term_traversal.m"
            {
#line 354 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__3__tmp_copy_3 = transform_hlds__term_traversal__Goals_14;
#line 354 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18;

#line 354 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 354 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__HeadVar__3__tmp_copy_3;
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

#line 104 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(
#line 104 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 104 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__ActiveVars_2)
#line 104 "term_traversal.m"
{
#line 638 "term_traversal.m"
  {
#line 638 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 638 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "term_traversal.m"
      {
#line 639 "term_traversal.m"
        {
#line 639 "term_traversal.m"
          mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars_2);
        }
#line 638 "term_traversal.m"
      }
#line 638 "term_traversal.m"
    else
#line 640 "term_traversal.m"
      {
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars1_7;
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars2_12;
#line 642 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8;
#line 642 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 642 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10;
#line 642 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11;

#line 641 "term_traversal.m"
        {
#line 641 "term_traversal.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_traversal__Paths_5, &transform_hlds__term_traversal__ActiveVars1_7);
        }
#line 642 "term_traversal.m"
        transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 0)));
#line 642 "term_traversal.m"
        transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 1)));
#line 642 "term_traversal.m"
        transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 2)));
#line 642 "term_traversal.m"
        transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 3)));
#line 642 "term_traversal.m"
        transform_hlds__term_traversal__ActiveVars2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 4)));
#line 643 "term_traversal.m"
        {
#line 643 "term_traversal.m"
          mercury__bag__least_upper_bound_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars1_7, transform_hlds__term_traversal__ActiveVars2_12, transform_hlds__term_traversal__ActiveVars_2);
        }
#line 640 "term_traversal.m"
      }
#line 638 "term_traversal.m"
  }
#line 104 "term_traversal.m"
}

#line 278 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
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
      transform_hlds__term_traversal__succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 278 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 278 "term_traversal.m"
  }
#line 278 "term_traversal.m"
}

#line 247 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
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
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__2_2;

#line 247 "term_traversal.m"
    {
#line 247 "term_traversal.m"
      transform_hlds__term_traversal__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 247 "term_traversal.m"
    transform_hlds__term_traversal__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__2_2));
#line 247 "term_traversal.m"
    return transform_hlds__term_traversal__wrapper_arg_2;
#line 247 "term_traversal.m"
  }
#line 247 "term_traversal.m"
}

#line 101 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0(
#line 101 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_6,
#line 101 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 101 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Goal_8,
#line 101 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110,
#line 101 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_111)
#line 101 "term_traversal.m"
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
        MR_Word transform_hlds__term_traversal__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_8, (MR_Integer) 0)));
#line 121 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_8, (MR_Integer) 1)));
#line 121 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 124 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Detism_12;
#line 124 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_244_244;
#line 125 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13;

#line 124 "term_traversal.m"
        {
#line 124 "term_traversal.m"
          transform_hlds__term_traversal__Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
        }
#line 125 "term_traversal.m"
        {
#line 125 "term_traversal.m"
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__term_traversal__Detism_12, &transform_hlds__term_traversal__V_13_13, &transform_hlds__term_traversal__V_244_244);
        }
#line 125 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_Integer) 0 == transform_hlds__term_traversal__V_244_244);
#line 123 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 127 "term_traversal.m"
          {
#line 127 "term_traversal.m"
            transform_hlds__term_traversal__cannot_succeed_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110, &transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113);
          }
#line 123 "term_traversal.m"
        else
#line 123 "term_traversal.m"
          transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110;
#line 170 "term_traversal.m"
#line 170 "term_traversal.m"
        switch (MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_10)) {
#line 170 "term_traversal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 170 "term_traversal.m"
          case (MR_Integer) 0:
#line 325 "term_traversal.m"
            {
#line 325 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__SubGoal_107 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_traversal__GoalExpr_10), (MR_Integer) 0);

#line 330 "term_traversal.m"
              /* direct tailcall eliminated */
#line 330 "term_traversal.m"
              {
#line 330 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Goal__tmp_copy_8 = transform_hlds__term_traversal__SubGoal_107;
#line 330 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;

#line 330 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110;
#line 330 "term_traversal.m"
                transform_hlds__term_traversal__Goal_8 = transform_hlds__term_traversal__Goal__tmp_copy_8;
#line 330 "term_traversal.m"
              }
#line 330 "term_traversal.m"
              continue;
#line 325 "term_traversal.m"
            }
#line 170 "term_traversal.m"
            break;
#line 170 "term_traversal.m"
          case (MR_Integer) 1:
#line 132 "term_traversal.m"
            {
#line 132 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 132 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)));
#line 132 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___RHS_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 132 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___UniMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 132 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));

#line 146 "term_traversal.m"
#line 146 "term_traversal.m"
              switch (MR_tag((MR_Word) transform_hlds__term_traversal__Unification_17)) {
#line 146 "term_traversal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 146 "term_traversal.m"
                case (MR_Integer) 0:
#line 134 "term_traversal.m"
                  {
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 2)));
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 3)));
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 4)));
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 5)));
#line 134 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 6)));
#line 135 "term_traversal.m"
                    MR_Integer transform_hlds__term_traversal__Gamma_26;
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_27;
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars0_28;

#line 136 "term_traversal.m"
                    {
#line 136 "term_traversal.m"
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__OutVar_19, transform_hlds__term_traversal__ConsId_20, transform_hlds__term_traversal__Args_21, transform_hlds__term_traversal__Modes_22, transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Gamma_26, &transform_hlds__term_traversal__InVars_27, &transform_hlds__term_traversal__OutVars0_28);
                    }
#line 135 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 139 "term_traversal.m"
                      {
#line 139 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__OutVars_29;

#line 139 "term_traversal.m"
                        {
#line 139 "term_traversal.m"
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__OutVar_19)), transform_hlds__term_traversal__OutVars0_28, &transform_hlds__term_traversal__OutVars_29);
                        }
#line 140 "term_traversal.m"
                        {
#line 140 "term_traversal.m"
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_27, transform_hlds__term_traversal__OutVars_29, transform_hlds__term_traversal__Gamma_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                        }
#line 139 "term_traversal.m"
                      }
#line 135 "term_traversal.m"
                    else
#line 135 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 134 "term_traversal.m"
                  }
#line 146 "term_traversal.m"
                  break;
#line 146 "term_traversal.m"
                case (MR_Integer) 1:
#line 147 "term_traversal.m"
                  {
#line 147 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
#line 147 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__ConsId_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));
#line 147 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Args_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 2)));
#line 147 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Modes_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 3)));
#line 147 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 4)));
#line 147 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 5)));
#line 148 "term_traversal.m"
                    MR_Integer transform_hlds__term_traversal__Gamma0_33;
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars0_34;
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_179;

#line 149 "term_traversal.m"
                    {
#line 149 "term_traversal.m"
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__InVar_30, transform_hlds__term_traversal__ConsId_180, transform_hlds__term_traversal__Args_181, transform_hlds__term_traversal__Modes_182, transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Gamma0_33, &transform_hlds__term_traversal__InVars0_34, &transform_hlds__term_traversal__OutVars_179);
                    }
#line 148 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 152 "term_traversal.m"
                      {
#line 152 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__Gamma_175;
#line 152 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__InVars_176;

#line 152 "term_traversal.m"
                        {
#line 152 "term_traversal.m"
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__InVar_30)), transform_hlds__term_traversal__InVars0_34, &transform_hlds__term_traversal__InVars_176);
                        }
#line 153 "term_traversal.m"
                        transform_hlds__term_traversal__Gamma_175 = ((MR_Integer) 0 - transform_hlds__term_traversal__Gamma0_33);
#line 154 "term_traversal.m"
                        {
#line 154 "term_traversal.m"
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_176, transform_hlds__term_traversal__OutVars_179, transform_hlds__term_traversal__Gamma_175, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                        }
#line 152 "term_traversal.m"
                      }
#line 148 "term_traversal.m"
                    else
#line 156 "term_traversal.m"
                      {
#line 156 "term_traversal.m"
                        {
#line 156 "term_traversal.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "higher order deconstruction");
#line 156 "term_traversal.m"
                          return;
                        }
#line 156 "term_traversal.m"
                      }
#line 147 "term_traversal.m"
                  }
#line 146 "term_traversal.m"
                  break;
#line 146 "term_traversal.m"
                case (MR_Integer) 2:
#line 159 "term_traversal.m"
                  {
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__TypeInfo_230_230 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Empty_35;
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_186 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_187;
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_188;
#line 159 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_189 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));

#line 160 "term_traversal.m"
                    {
#line 160 "term_traversal.m"
                      mercury__bag__init_1_p_0(transform_hlds__term_traversal__TypeInfo_230_230, &transform_hlds__term_traversal__Empty_35);
                    }
#line 161 "term_traversal.m"
                    {
#line 161 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_230_230, ((MR_Box) (transform_hlds__term_traversal__InVar_189)), transform_hlds__term_traversal__Empty_35, &transform_hlds__term_traversal__InVars_187);
                    }
#line 162 "term_traversal.m"
                    {
#line 162 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_230_230, ((MR_Box) (transform_hlds__term_traversal__OutVar_186)), transform_hlds__term_traversal__Empty_35, &transform_hlds__term_traversal__OutVars_188);
                    }
#line 163 "term_traversal.m"
                    {
#line 163 "term_traversal.m"
                      transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_187, transform_hlds__term_traversal__OutVars_188, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                    }
#line 159 "term_traversal.m"
                  }
#line 146 "term_traversal.m"
                  break;
#line 146 "term_traversal.m"
                case (MR_Integer) 3:
#line 146 "term_traversal.m"
#line 146 "term_traversal.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)))) {
#line 146 "term_traversal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 146 "term_traversal.m"
                    case (MR_Integer) 0:
#line 165 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 146 "term_traversal.m"
                      break;
#line 146 "term_traversal.m"
                    case (MR_Integer) 1:
#line 167 "term_traversal.m"
                      {
#line 168 "term_traversal.m"
                        {
#line 168 "term_traversal.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "complicated unify");
#line 168 "term_traversal.m"
                          return;
                        }
#line 167 "term_traversal.m"
                      }
#line 146 "term_traversal.m"
                      break;
#line 146 "term_traversal.m"
                  }
#line 146 "term_traversal.m"
                  break;
#line 146 "term_traversal.m"
              }
#line 132 "term_traversal.m"
            }
#line 170 "term_traversal.m"
            break;
#line 170 "term_traversal.m"
          case (MR_Integer) 2:
#line 171 "term_traversal.m"
            {
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)));
#line 171 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Context_46;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__PPId_47;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPPId_48;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallProcInfo_50;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgModes_51;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgSizeInfo_52;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallTerminationInfo_53;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Args_192 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__InVars_193;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__OutVars_194;
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 171 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));
#line 176 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_49_49;
#line 207 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_152_152;
#line 207 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_59_59;
#line 218 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__VarTypes_60;
#line 227 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliers_62;
#line 228 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliersMap_61;
#line 229 "term_traversal.m"
              MR_Box transform_hlds__term_traversal__conv3_RecInputSuppliers_62;

#line 172 "term_traversal.m"
              {
#line 172 "term_traversal.m"
                transform_hlds__term_traversal__Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
              }
#line 173 "term_traversal.m"
              {
#line 173 "term_traversal.m"
                transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__PPId_47);
              }
#line 174 "term_traversal.m"
              {
#line 174 "term_traversal.m"
                transform_hlds__term_traversal__CallPPId_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_48, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_41));
#line 174 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_48, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_42));
#line 174 "term_traversal.m"
              }
#line 176 "term_traversal.m"
              {
#line 176 "term_traversal.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallPredId_41, transform_hlds__term_traversal__CallProcId_42, &transform_hlds__term_traversal__V_49_49, &transform_hlds__term_traversal__CallProcInfo_50);
              }
#line 178 "term_traversal.m"
              {
#line 178 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallArgModes_51);
              }
#line 180 "term_traversal.m"
              {
#line 180 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallArgSizeInfo_52);
              }
#line 181 "term_traversal.m"
              {
#line 181 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallTerminationInfo_53);
              }
#line 184 "term_traversal.m"
              {
#line 184 "term_traversal.m"
                transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallArgModes_51, transform_hlds__term_traversal__Args_192, &transform_hlds__term_traversal__InVars_193, &transform_hlds__term_traversal__OutVars_194);
              }
#line 191 "term_traversal.m"
              if ((transform_hlds__term_traversal__CallArgSizeInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "term_traversal.m"
                {
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliersMap_58;
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_143_143;
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliers_190;
#line 196 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__UsedInVars_191;
#line 201 "term_traversal.m"
                  MR_Box transform_hlds__term_traversal__conv2_OutputSuppliers_190;

#line 200 "term_traversal.m"
                  {
#line 200 "term_traversal.m"
                    transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__OutputSuppliersMap_58);
                  }
#line 201 "term_traversal.m"
                  {
#line 201 "term_traversal.m"
                    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__OutputSuppliersMap_58, ((MR_Box) (transform_hlds__term_traversal__CallPPId_48)), &transform_hlds__term_traversal__conv2_OutputSuppliers_190);
                  }
#line 201 "term_traversal.m"
                  transform_hlds__term_traversal__OutputSuppliers_190 = ((MR_Word) transform_hlds__term_traversal__conv2_OutputSuppliers_190);
#line 202 "term_traversal.m"
                  {
#line 202 "term_traversal.m"
                    transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_193, transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__OutputSuppliers_190, &transform_hlds__term_traversal__UsedInVars_191);
                  }
#line 203 "term_traversal.m"
                  {
#line 203 "term_traversal.m"
                    transform_hlds__term_traversal__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_143_143, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 203 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "term_traversal.m"
                  }
#line 203 "term_traversal.m"
                  {
#line 203 "term_traversal.m"
                    transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_191, transform_hlds__term_traversal__OutVars_194, (MR_Integer) 0, transform_hlds__term_traversal__V_143_143, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                  }
#line 196 "term_traversal.m"
                }
#line 191 "term_traversal.m"
              else
#line 191 "term_traversal.m"
                {
#line 191 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallArgSizeInfo_52, (MR_Integer) 0)));

#line 191 "term_traversal.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_traversal__V_245_245)) == (MR_mktag((MR_Integer) 0))))
#line 188 "term_traversal.m"
                    {
#line 188 "term_traversal.m"
                      MR_Integer transform_hlds__term_traversal__CallGamma_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_245_245, (MR_Integer) 0)));
#line 188 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__OutputSuppliers_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_245_245, (MR_Integer) 1)));
#line 188 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__UsedInVars_56;

#line 189 "term_traversal.m"
                      {
#line 189 "term_traversal.m"
                        transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_193, transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__OutputSuppliers_55, &transform_hlds__term_traversal__UsedInVars_56);
                      }
#line 190 "term_traversal.m"
                      {
#line 190 "term_traversal.m"
                        transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_56, transform_hlds__term_traversal__OutVars_194, transform_hlds__term_traversal__CallGamma_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                      }
#line 188 "term_traversal.m"
                    }
#line 191 "term_traversal.m"
                  else
#line 192 "term_traversal.m"
                    {
#line 192 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_147_147;

#line 194 "term_traversal.m"
                      {
#line 194 "term_traversal.m"
                        transform_hlds__term_traversal__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 194 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 194 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 194 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 2) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 194 "term_traversal.m"
                      }
#line 193 "term_traversal.m"
                      {
#line 193 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_194, transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_147_147, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                      }
#line 192 "term_traversal.m"
                    }
#line 191 "term_traversal.m"
                }
#line 207 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__CallTerminationInfo_53)) == (MR_mktag((MR_Integer) 1)));
#line 207 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 207 "term_traversal.m"
                {
#line 207 "term_traversal.m"
                  transform_hlds__term_traversal__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallTerminationInfo_53, (MR_Integer) 0)));
#line 207 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__V_152_152)) == (MR_mktag((MR_Integer) 1)));
#line 207 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 207 "term_traversal.m"
                    transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_152_152, (MR_Integer) 0)));
#line 207 "term_traversal.m"
                }
#line 207 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 208 "term_traversal.m"
                {
#line 208 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_153_153;

#line 208 "term_traversal.m"
                  {
#line 208 "term_traversal.m"
                    transform_hlds__term_traversal__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_153_153, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 208 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_153_153, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 208 "term_traversal.m"
                  }
#line 208 "term_traversal.m"
                  {
#line 208 "term_traversal.m"
                    transform_hlds__term_traversal__called_can_loop_5_p_0(transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_153_153, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151, &transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154);
                  }
#line 208 "term_traversal.m"
                }
#line 207 "term_traversal.m"
              else
#line 207 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154 = transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151;
#line 218 "term_traversal.m"
              {
#line 218 "term_traversal.m"
                transform_hlds__term_traversal__params_get_var_types_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__VarTypes_60);
              }
#line 219 "term_traversal.m"
              {
#line 219 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__VarTypes_60);
              }
#line 215 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 221 "term_traversal.m"
                {
#line 221 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_155_155;

#line 221 "term_traversal.m"
                  {
#line 221 "term_traversal.m"
                    transform_hlds__term_traversal__V_155_155 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_155_155, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 221 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_155_155, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 221 "term_traversal.m"
                  }
#line 221 "term_traversal.m"
                  {
#line 221 "term_traversal.m"
                    transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_155_155, transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154, &transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156);
                  }
#line 221 "term_traversal.m"
                }
#line 215 "term_traversal.m"
              else
#line 215 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156 = transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154;
#line 228 "term_traversal.m"
              {
#line 228 "term_traversal.m"
                transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__RecInputSuppliersMap_61);
              }
#line 229 "term_traversal.m"
              {
#line 229 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__RecInputSuppliersMap_61, ((MR_Box) (transform_hlds__term_traversal__CallPPId_48)), &transform_hlds__term_traversal__conv3_RecInputSuppliers_62);
              }
#line 229 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 229 "term_traversal.m"
                {
#line 229 "term_traversal.m"
                  transform_hlds__term_traversal__RecInputSuppliers_62 = ((MR_Word) transform_hlds__term_traversal__conv3_RecInputSuppliers_62);
#line 229 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 229 "term_traversal.m"
                }
#line 227 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 234 "term_traversal.m"
                {
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Bag_63;
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__PathStart_64;
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__NewPath_65;
#line 234 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_157_157;

#line 234 "term_traversal.m"
                  {
#line 234 "term_traversal.m"
                    transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__RecInputSuppliers_62, &transform_hlds__term_traversal__Bag_63);
                  }
#line 235 "term_traversal.m"
                  {
#line 235 "term_traversal.m"
                    transform_hlds__term_traversal__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 235 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_46));
#line 235 "term_traversal.m"
                  }
#line 235 "term_traversal.m"
                  {
#line 235 "term_traversal.m"
                    transform_hlds__term_traversal__PathStart_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 235 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__PathStart_64, 0) = ((MR_Box) (transform_hlds__term_traversal__V_157_157));
#line 235 "term_traversal.m"
                  }
#line 236 "term_traversal.m"
                  {
#line 236 "term_traversal.m"
                    transform_hlds__term_traversal__NewPath_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 1) = ((MR_Box) (transform_hlds__term_traversal__PathStart_64));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 2) = ((MR_Box) ((MR_Integer) 0));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 4) = ((MR_Box) (transform_hlds__term_traversal__Bag_63));
#line 236 "term_traversal.m"
                  }
#line 237 "term_traversal.m"
                  {
#line 237 "term_traversal.m"
                    transform_hlds__term_traversal__add_path_3_p_0(transform_hlds__term_traversal__NewPath_65, transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
#line 234 "term_traversal.m"
                }
#line 227 "term_traversal.m"
              else
#line 227 "term_traversal.m"
                *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156;
#line 171 "term_traversal.m"
            }
#line 170 "term_traversal.m"
            break;
#line 170 "term_traversal.m"
          case (MR_Integer) 3:
#line 170 "term_traversal.m"
#line 170 "term_traversal.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)))) {
#line 170 "term_traversal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 170 "term_traversal.m"
              case (MR_Integer) 0:
#line 264 "term_traversal.m"
                {
#line 264 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Details_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 264 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgModes_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 264 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 264 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_223;
#line 264 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 264 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));

#line 265 "term_traversal.m"
                  {
#line 265 "term_traversal.m"
                    transform_hlds__term_traversal__Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                  }
#line 296 "term_traversal.m"
#line 296 "term_traversal.m"
                  switch (MR_tag((MR_Word) transform_hlds__term_traversal__Details_73)) {
#line 296 "term_traversal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 296 "term_traversal.m"
                    case (MR_Integer) 0:
#line 267 "term_traversal.m"
                      {
#line 267 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 0)));
#line 267 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ClosureValueMap_81;
#line 267 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 1)));
#line 267 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 2)));
#line 267 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 3)));
#line 275 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ClosureValues0_82;
#line 275 "term_traversal.m"
                        MR_Box transform_hlds__term_traversal__conv1_ClosureValues0_82;

#line 268 "term_traversal.m"
                        {
#line 268 "term_traversal.m"
                          transform_hlds__term_traversal__ClosureValueMap_81 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                        }
#line 275 "term_traversal.m"
                        {
#line 275 "term_traversal.m"
                          transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_1[2], transform_hlds__term_traversal__ClosureValueMap_81, ((MR_Box) (transform_hlds__term_traversal__Var_77)), &transform_hlds__term_traversal__conv1_ClosureValues0_82);
                        }
#line 275 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 275 "term_traversal.m"
                          {
#line 275 "term_traversal.m"
                            transform_hlds__term_traversal__ClosureValues0_82 = ((MR_Word) transform_hlds__term_traversal__conv1_ClosureValues0_82);
#line 275 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 275 "term_traversal.m"
                          }
#line 275 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 276 "term_traversal.m"
                          {
#line 276 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__TypeCtorInfo_241_241 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 276 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__ClosureValues_83;
#line 276 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__Terminating_84;
#line 276 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__NonTerminating_85;
#line 276 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_128_128;

#line 276 "term_traversal.m"
                            {
#line 276 "term_traversal.m"
                              transform_hlds__term_traversal__ClosureValues_83 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_traversal__TypeCtorInfo_241_241, transform_hlds__term_traversal__ClosureValues0_82);
                            }
#line 278 "term_traversal.m"
                            {
#line 278 "term_traversal.m"
                              transform_hlds__term_traversal__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
#line 278 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_2));
#line 278 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 3) = ((MR_Box) (transform_hlds__term_traversal__ModuleInfo_6));
#line 278 "term_traversal.m"
                            }
#line 278 "term_traversal.m"
                            {
#line 278 "term_traversal.m"
                              mercury__list__filter_4_p_0(transform_hlds__term_traversal__TypeCtorInfo_241_241, transform_hlds__term_traversal__V_128_128, transform_hlds__term_traversal__ClosureValues_83, &transform_hlds__term_traversal__Terminating_84, &transform_hlds__term_traversal__NonTerminating_85);
                            }
#line 287 "term_traversal.m"
                            if ((transform_hlds__term_traversal__NonTerminating_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "term_traversal.m"
                              {
#line 281 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__Error_86;
#line 281 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__OutVars_203;
#line 281 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__PPId_204;
#line 282 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal___InVars_202;

#line 282 "term_traversal.m"
                                {
#line 282 "term_traversal.m"
                                  transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__ArgModes_74, transform_hlds__term_traversal__Args_221, &transform_hlds__term_traversal___InVars_202, &transform_hlds__term_traversal__OutVars_203);
                                }
#line 284 "term_traversal.m"
                                {
#line 284 "term_traversal.m"
                                  transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__PPId_204);
                                }
#line 285 "term_traversal.m"
                                {
#line 285 "term_traversal.m"
                                  transform_hlds__term_traversal__Error_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 285 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_204));
#line 285 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 2) = ((MR_Box) (transform_hlds__term_traversal__Terminating_84));
#line 285 "term_traversal.m"
                                }
#line 286 "term_traversal.m"
                                {
#line 286 "term_traversal.m"
                                  transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_203, transform_hlds__term_traversal__Context_223, transform_hlds__term_traversal__Error_86, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
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
                                  transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                                }
#line 288 "term_traversal.m"
                              }
#line 276 "term_traversal.m"
                          }
#line 275 "term_traversal.m"
                        else
#line 294 "term_traversal.m"
                          {
#line 294 "term_traversal.m"
                            {
#line 294 "term_traversal.m"
                              transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                            }
#line 294 "term_traversal.m"
                          }
#line 267 "term_traversal.m"
                      }
#line 296 "term_traversal.m"
                      break;
#line 296 "term_traversal.m"
                    case (MR_Integer) 1:
#line 297 "term_traversal.m"
                      {
#line 302 "term_traversal.m"
                        {
#line 302 "term_traversal.m"
                          transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                        }
#line 297 "term_traversal.m"
                      }
#line 296 "term_traversal.m"
                      break;
#line 296 "term_traversal.m"
                    case (MR_Integer) 2:
#line 304 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 296 "term_traversal.m"
                      break;
#line 296 "term_traversal.m"
                    case (MR_Integer) 3:
#line 306 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 296 "term_traversal.m"
                      break;
#line 296 "term_traversal.m"
                  }
#line 264 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 1:
#line 243 "term_traversal.m"
                {
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Attributes_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgVars_71;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutVars_196;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallPredId_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 243 "term_traversal.m"
                  MR_Integer transform_hlds__term_traversal__CallProcId_198 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_199;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallProcInfo_200;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallArgModes_201;
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 6)));
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 7)));
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_70_70;
#line 248 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal___InVars_72;
#line 253 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_135_135;

#line 244 "term_traversal.m"
                  {
#line 244 "term_traversal.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallPredId_197, transform_hlds__term_traversal__CallProcId_198, &transform_hlds__term_traversal__V_70_70, &transform_hlds__term_traversal__CallProcInfo_200);
                  }
#line 246 "term_traversal.m"
                  {
#line 246 "term_traversal.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_200, &transform_hlds__term_traversal__CallArgModes_201);
                  }
#line 247 "term_traversal.m"
                  {
#line 247 "term_traversal.m"
                    transform_hlds__term_traversal__ArgVars_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_2[3], transform_hlds__term_traversal__Args_195);
                  }
#line 248 "term_traversal.m"
                  {
#line 248 "term_traversal.m"
                    transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallArgModes_201, transform_hlds__term_traversal__ArgVars_71, &transform_hlds__term_traversal___InVars_72, &transform_hlds__term_traversal__OutVars_196);
                  }
#line 250 "term_traversal.m"
                  {
#line 250 "term_traversal.m"
                    transform_hlds__term_traversal__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                  }
#line 253 "term_traversal.m"
                  {
#line 253 "term_traversal.m"
                    transform_hlds__term_traversal__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_135_135, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_197));
#line 253 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_135_135, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_198));
#line 253 "term_traversal.m"
                  }
#line 253 "term_traversal.m"
                  {
#line 253 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__V_135_135);
                  }
#line 252 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 255 "term_traversal.m"
                    {
#line 255 "term_traversal.m"
                      {
#line 255 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_196, transform_hlds__term_traversal__Context_199, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                      }
#line 255 "term_traversal.m"
                    }
#line 252 "term_traversal.m"
                  else
#line 256 "term_traversal.m"
                    {
#line 257 "term_traversal.m"
                      {
#line 257 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__term_traversal__Attributes_66);
                      }
#line 256 "term_traversal.m"
                      if (transform_hlds__term_traversal__succeeded)
#line 259 "term_traversal.m"
                        {
#line 259 "term_traversal.m"
                          {
#line 259 "term_traversal.m"
                            transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_196, transform_hlds__term_traversal__Context_199, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                          }
#line 259 "term_traversal.m"
                        }
#line 256 "term_traversal.m"
                      else
#line 261 "term_traversal.m"
                        {
#line 261 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_140_140;

#line 261 "term_traversal.m"
                          {
#line 261 "term_traversal.m"
                            transform_hlds__term_traversal__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 261 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_140_140, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_197));
#line 261 "term_traversal.m"
                          }
#line 261 "term_traversal.m"
                          {
#line 261 "term_traversal.m"
                            transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_199, transform_hlds__term_traversal__V_140_140, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                          }
#line 261 "term_traversal.m"
                        }
#line 256 "term_traversal.m"
                    }
#line 243 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 2:
#line 309 "term_traversal.m"
                {
#line 309 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Goals_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 309 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__RevGoals_97;
#line 309 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 310 "term_traversal.m"
                  {
#line 310 "term_traversal.m"
                    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__term_traversal__Goals_96, &transform_hlds__term_traversal__RevGoals_97);
                  }
#line 311 "term_traversal.m"
                  {
#line 311 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__RevGoals_97, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
#line 309 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 3:
#line 313 "term_traversal.m"
                {
#line 313 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Goals_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 314 "term_traversal.m"
                  {
#line 314 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_disj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Goals_226, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
#line 313 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 4:
#line 316 "term_traversal.m"
                {
#line 316 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Cases_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 316 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 316 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));

#line 317 "term_traversal.m"
                  {
#line 317 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_switch_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Cases_100, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
#line 316 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 5:
#line 332 "term_traversal.m"
                {
#line 332 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 332 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 335 "term_traversal.m"
                  /* direct tailcall eliminated */
#line 335 "term_traversal.m"
                  {
#line 335 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Goal__tmp_copy_8 = transform_hlds__term_traversal__SubGoal_227;
#line 335 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;

#line 335 "term_traversal.m"
                    transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110;
#line 335 "term_traversal.m"
                    transform_hlds__term_traversal__Goal_8 = transform_hlds__term_traversal__Goal__tmp_copy_8;
#line 335 "term_traversal.m"
                  }
#line 335 "term_traversal.m"
                  continue;
#line 332 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 6:
#line 319 "term_traversal.m"
                {
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Cond_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Then_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Else_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CondThenInfo_105;
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ElseInfo_106;
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_119_119;
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_120_120;
#line 319 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 320 "term_traversal.m"
                  {
#line 320 "term_traversal.m"
                    transform_hlds__term_traversal__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_120_120, 0) = ((MR_Box) (transform_hlds__term_traversal__Cond_102));
#line 320 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "term_traversal.m"
                  }
#line 320 "term_traversal.m"
                  {
#line 320 "term_traversal.m"
                    transform_hlds__term_traversal__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_119_119, 0) = ((MR_Box) (transform_hlds__term_traversal__Then_103));
#line 320 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_119_119, 1) = ((MR_Box) (transform_hlds__term_traversal__V_120_120));
#line 320 "term_traversal.m"
                  }
#line 320 "term_traversal.m"
                  {
#line 320 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__V_119_119, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__CondThenInfo_105);
                  }
#line 322 "term_traversal.m"
                  {
#line 322 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Else_104, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__ElseInfo_106);
                  }
#line 323 "term_traversal.m"
                  {
#line 323 "term_traversal.m"
                    transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CondThenInfo_105, transform_hlds__term_traversal__ElseInfo_106, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
#line 319 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
              case (MR_Integer) 7:
#line 337 "term_traversal.m"
                {
#line 339 "term_traversal.m"
                  {
#line 339 "term_traversal.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "shorthand");
#line 339 "term_traversal.m"
                    return;
                  }
#line 337 "term_traversal.m"
                }
#line 170 "term_traversal.m"
                break;
#line 170 "term_traversal.m"
            }
#line 170 "term_traversal.m"
            break;
#line 170 "term_traversal.m"
        }
#line 121 "term_traversal.m"
      }
#line 121 "term_traversal.m"
      break;
#line 121 "term_traversal.m"
    }
#line 101 "term_traversal.m"
}

#line 96 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__init_term_traversal_params_9_p_0(
#line 96 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__FunctorInfo_10,
#line 96 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__PredProcId_11,
#line 96 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_12,
#line 96 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_13,
#line 96 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutputSuppliers_14,
#line 96 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__RecInputSuppliers_15,
#line 96 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__MaxErrors_16,
#line 96 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__MaxPaths_17,
#line 96 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Params_18)
#line 96 "term_traversal.m"
{
#line 677 "term_traversal.m"
  {
#line 677 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 677 "term_traversal.m"
    {
#line 677 "term_traversal.m"
      MR_Word base;
#line 677 "term_traversal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 677 "term_traversal.m"
      *transform_hlds__term_traversal__Params_18 = base;
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__FunctorInfo_10));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__PredProcId_11));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_traversal__Context_12));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_traversal__VarTypes_13));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_traversal__OutputSuppliers_14));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_traversal__RecInputSuppliers_15));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_traversal__MaxErrors_16));
#line 677 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_traversal__MaxPaths_17));
#line 677 "term_traversal.m"
    }
#line 677 "term_traversal.m"
  }
#line 96 "term_traversal.m"
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
