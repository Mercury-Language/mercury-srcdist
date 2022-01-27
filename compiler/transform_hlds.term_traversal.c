/*
** Automatically generated from `term_traversal.m'
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




#line 141 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 147 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 150 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 153 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5];

#line 162 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0;

#line 165 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1];

#line 168 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1];

#line 171 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1];

#line 174 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1];

#line 177 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 180 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 183 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2];

#line 186 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0;

#line 189 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2];

#line 192 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1;

#line 195 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1];

#line 198 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1];

#line 201 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2];

#line 204 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2];

#line 207 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2];

#line 210 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 213 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0;

#line 216 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 219 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8];

#line 222 "transform_hlds.term_traversal.c"
static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8];

#line 225 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0;

#line 228 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1];

#line 231 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1];

#line 234 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1];

#line 237 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1];

#line 240 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 243 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 245 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 248 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 251 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 253 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 255 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 258 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 261 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 263 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 266 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 269 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 271 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 273 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 276 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 279 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 281 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 284 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 287 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 289 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 291 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 689 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 689 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 689 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 687 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 687 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 687 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 685 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 685 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 685 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 683 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 683 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 683 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 681 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 681 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 681 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 623 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 623 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 623 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5);

#line 603 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16,
#line 603 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_17);

#line 579 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 579 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 579 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7);

#line 562 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 562 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 562 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12);

#line 538 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 538 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 538 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 538 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 538 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 538 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 514 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 514 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 514 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 514 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18);

#line 483 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 483 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 483 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 483 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3);

#line 437 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 437 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 437 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 437 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 437 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8);

#line 418 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_7,
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 418 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 401 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_6,
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 401 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 388 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 388 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 388 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 388 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6);

#line 376 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 376 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 376 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4);

#line 364 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 364 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 354 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 354 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 345 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 345 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_5);

#line 276 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
#line 276 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 276 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);

#line 245 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
#line 245 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 245 "term_traversal.m"
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
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0
};

#line 774 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 782 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 790 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 796 "transform_hlds.term_traversal.c"
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

#line 811 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 817 "transform_hlds.term_traversal.c"
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

#line 832 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 837 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1
};

#line 842 "transform_hlds.term_traversal.c"
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

#line 856 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1,
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 862 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 868 "transform_hlds.term_traversal.c"
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

#line 885 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 894 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 902 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 911 "transform_hlds.term_traversal.c"
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

#line 923 "transform_hlds.term_traversal.c"
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

#line 935 "transform_hlds.term_traversal.c"
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

#line 950 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 955 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0
  }
};

#line 964 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 969 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1] = {
  (MR_Integer) 0
};

#line 974 "transform_hlds.term_traversal.c"
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

#line 991 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 994 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 996 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 998 "transform_hlds.term_traversal.c"
{
#line 1000 "transform_hlds.term_traversal.c"
  {
#line 1002 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1005 "transform_hlds.term_traversal.c"
    {
#line 1007 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1010 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1012 "transform_hlds.term_traversal.c"
  }
#line 1014 "transform_hlds.term_traversal.c"
}

#line 1017 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 1020 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1022 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1024 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1026 "transform_hlds.term_traversal.c"
{
#line 1028 "transform_hlds.term_traversal.c"
  {
#line 1030 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1033 "transform_hlds.term_traversal.c"
    {
#line 1035 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_path_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1038 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1040 "transform_hlds.term_traversal.c"
  }
#line 1042 "transform_hlds.term_traversal.c"
}

#line 1045 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 1048 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1050 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1052 "transform_hlds.term_traversal.c"
{
#line 1054 "transform_hlds.term_traversal.c"
  {
#line 1056 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1059 "transform_hlds.term_traversal.c"
    {
#line 1061 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1064 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1066 "transform_hlds.term_traversal.c"
  }
#line 1068 "transform_hlds.term_traversal.c"
}

#line 1071 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 1074 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1076 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1078 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1080 "transform_hlds.term_traversal.c"
{
#line 1082 "transform_hlds.term_traversal.c"
  {
#line 1084 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1087 "transform_hlds.term_traversal.c"
    {
#line 1089 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1092 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1094 "transform_hlds.term_traversal.c"
  }
#line 1096 "transform_hlds.term_traversal.c"
}

#line 1099 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 1102 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1104 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1106 "transform_hlds.term_traversal.c"
{
#line 1108 "transform_hlds.term_traversal.c"
  {
#line 1110 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1113 "transform_hlds.term_traversal.c"
    {
#line 1115 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1118 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1120 "transform_hlds.term_traversal.c"
  }
#line 1122 "transform_hlds.term_traversal.c"
}

#line 1125 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 1128 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1130 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1132 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1134 "transform_hlds.term_traversal.c"
{
#line 1136 "transform_hlds.term_traversal.c"
  {
#line 1138 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1141 "transform_hlds.term_traversal.c"
    {
#line 1143 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1146 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1148 "transform_hlds.term_traversal.c"
  }
#line 1150 "transform_hlds.term_traversal.c"
}

#line 645 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
#line 645 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 645 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 645 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 645 "term_traversal.m"
{
#line 645 "term_traversal.m"
  {
#line 645 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 645 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_27 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 645 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_28 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 645 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_27 == transform_hlds__term_traversal__CastY_28);
#line 645 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1177 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 645 "term_traversal.m"
    else
#line 645 "term_traversal.m"
      {
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 5)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 6)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 7)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;

#line 645 "term_traversal.m"
        {
#line 645 "term_traversal.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_traversal__V_20_20, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
        }
#line 1223 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_20_20 == (MR_Integer) 0);
#line 645 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_20_20;
#line 645 "term_traversal.m"
        else
#line 645 "term_traversal.m"
          {
#line 645 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_21_21;

#line 645 "term_traversal.m"
            {
#line 645 "term_traversal.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_21_21, transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
            }
#line 1243 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 645 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 645 "term_traversal.m"
            else
#line 645 "term_traversal.m"
              {
#line 645 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_22_22;

#line 645 "term_traversal.m"
                {
#line 645 "term_traversal.m"
                  mercury__term____Compare____context_0_0(&transform_hlds__term_traversal__V_22_22, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_14_14);
                }
#line 1263 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_22_22 == (MR_Integer) 0);
#line 645 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_22_22;
#line 645 "term_traversal.m"
                else
#line 645 "term_traversal.m"
                  {
#line 645 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_23_23;

#line 645 "term_traversal.m"
                    {
#line 645 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &transform_hlds__term_traversal__V_23_23, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                    }
#line 1283 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_23_23 == (MR_Integer) 0);
#line 645 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_23_23;
#line 645 "term_traversal.m"
                    else
#line 645 "term_traversal.m"
                      {
#line 645 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_24_24;

#line 645 "term_traversal.m"
                        {
#line 645 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_24_24, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                        }
#line 1303 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_24_24 == (MR_Integer) 0);
#line 645 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_24_24;
#line 645 "term_traversal.m"
                        else
#line 645 "term_traversal.m"
                          {
#line 645 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_25_25;

#line 645 "term_traversal.m"
                            {
#line 645 "term_traversal.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_25_25, ((MR_Box) (transform_hlds__term_traversal__V_9_9)), ((MR_Box) (transform_hlds__term_traversal__V_17_17)));
                            }
#line 1323 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_25_25 == (MR_Integer) 0);
#line 645 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_25_25;
#line 645 "term_traversal.m"
                            else
#line 645 "term_traversal.m"
                              {
#line 645 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__V_26_26;

#line 645 "term_traversal.m"
                                {
#line 645 "term_traversal.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_26_26, transform_hlds__term_traversal__V_10_10, transform_hlds__term_traversal__V_18_18);
                                }
#line 1343 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_26_26 == (MR_Integer) 0);
#line 645 "term_traversal.m"
                                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 645 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_26_26;
#line 645 "term_traversal.m"
                                else
#line 645 "term_traversal.m"
                                  {
#line 645 "term_traversal.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_traversal__HeadVar__1_1, transform_hlds__term_traversal__V_11_11, transform_hlds__term_traversal__V_19_19);
#line 645 "term_traversal.m"
                                    return;
                                  }
#line 645 "term_traversal.m"
                              }
#line 645 "term_traversal.m"
                          }
#line 645 "term_traversal.m"
                      }
#line 645 "term_traversal.m"
                  }
#line 645 "term_traversal.m"
              }
#line 645 "term_traversal.m"
          }
#line 645 "term_traversal.m"
      }
#line 645 "term_traversal.m"
  }
#line 645 "term_traversal.m"
}

#line 645 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0(
#line 645 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 645 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 645 "term_traversal.m"
{
#line 645 "term_traversal.m"
  {
#line 645 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 645 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 645 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_20 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 645 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_19 == transform_hlds__term_traversal__CastY_20);
#line 645 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 645 "term_traversal.m"
    else
#line 645 "term_traversal.m"
      {
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_24_24;
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_25_25;
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_26_26;
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 5)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 6)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 7)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 645 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 645 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));

#line 1446 "transform_hlds.term_traversal.c"
        {
#line 1448 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_11_11);
        }
#line 645 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
          {
#line 1455 "transform_hlds.term_traversal.c"
            {
#line 1457 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
            }
#line 645 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
              {
#line 1464 "transform_hlds.term_traversal.c"
                {
#line 1466 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
                }
#line 645 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                  {
#line 1473 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
#line 1475 "transform_hlds.term_traversal.c"
                    {
#line 1477 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_14_14)));
                    }
#line 645 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                      {
#line 1484 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
#line 1486 "transform_hlds.term_traversal.c"
                        {
#line 1488 "transform_hlds.term_traversal.c"
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                        }
#line 645 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                          {
#line 1495 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
#line 1497 "transform_hlds.term_traversal.c"
                            {
#line 1499 "transform_hlds.term_traversal.c"
                              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                            }
#line 645 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 645 "term_traversal.m"
                              {
#line 1506 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_9_9 == transform_hlds__term_traversal__V_17_17);
#line 645 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 1510 "transform_hlds.term_traversal.c"
                                  transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_10_10 == transform_hlds__term_traversal__V_18_18);
#line 645 "term_traversal.m"
                              }
#line 645 "term_traversal.m"
                          }
#line 645 "term_traversal.m"
                      }
#line 645 "term_traversal.m"
                  }
#line 645 "term_traversal.m"
              }
#line 645 "term_traversal.m"
          }
#line 645 "term_traversal.m"
      }
#line 645 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 645 "term_traversal.m"
  }
#line 645 "term_traversal.m"
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
#line 1557 "transform_hlds.term_traversal.c"
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
#line 1586 "transform_hlds.term_traversal.c"
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
#line 1611 "transform_hlds.term_traversal.c"
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
#line 1626 "transform_hlds.term_traversal.c"
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
#line 1644 "transform_hlds.term_traversal.c"
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
#line 1727 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1729 "transform_hlds.term_traversal.c"
            {
#line 1731 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 40 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
              {
#line 1738 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1740 "transform_hlds.term_traversal.c"
                {
#line 1742 "transform_hlds.term_traversal.c"
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
#line 1778 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[7];
#line 1780 "transform_hlds.term_traversal.c"
            {
#line 1782 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_traversal__V_3_3)), ((MR_Box) (transform_hlds__term_traversal__V_5_5)));
            }
#line 40 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 40 "term_traversal.m"
              {
#line 1789 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1791 "transform_hlds.term_traversal.c"
                {
#line 1793 "transform_hlds.term_traversal.c"
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
#line 1833 "transform_hlds.term_traversal.c"
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
#line 1867 "transform_hlds.term_traversal.c"
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
#line 1887 "transform_hlds.term_traversal.c"
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
#line 1907 "transform_hlds.term_traversal.c"
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
#line 1927 "transform_hlds.term_traversal.c"
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

#line 2016 "transform_hlds.term_traversal.c"
        {
#line 2018 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_8_8);
        }
#line 71 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
          {
#line 2025 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[3];
#line 2027 "transform_hlds.term_traversal.c"
            {
#line 2029 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 71 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
              {
#line 2036 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_5_5 == transform_hlds__term_traversal__V_10_10);
#line 71 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
                  {
#line 2042 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_17_17 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[4];
#line 2044 "transform_hlds.term_traversal.c"
                    {
#line 2046 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_17_17, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_11_11)));
                    }
#line 71 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 71 "term_traversal.m"
                      {
#line 2053 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[5];
#line 2055 "transform_hlds.term_traversal.c"
                        {
#line 2057 "transform_hlds.term_traversal.c"
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

#line 689 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 689 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 689 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 689 "term_traversal.m"
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
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 699 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 699 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 699 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 699 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 699 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 699 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 699 "term_traversal.m"
  }
#line 689 "term_traversal.m"
}

#line 687 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 687 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 687 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 687 "term_traversal.m"
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
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 698 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 698 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 698 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 698 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 698 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 698 "term_traversal.m"
  }
#line 687 "term_traversal.m"
}

#line 685 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 685 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 685 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 685 "term_traversal.m"
{
#line 697 "term_traversal.m"
  {
#line 697 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 697 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 697 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 697 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 697 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
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
#line 685 "term_traversal.m"
}

#line 683 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 683 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 683 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 683 "term_traversal.m"
{
#line 696 "term_traversal.m"
  {
#line 696 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 696 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 696 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 696 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 696 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 696 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 696 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 696 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 696 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 696 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 696 "term_traversal.m"
  }
#line 683 "term_traversal.m"
}

#line 681 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 681 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 681 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 681 "term_traversal.m"
{
#line 695 "term_traversal.m"
  {
#line 695 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 695 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 695 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5;
#line 695 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 695 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 695 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 695 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 695 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 695 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 695 "term_traversal.m"
    transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 695 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 695 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 695 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 695 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 695 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 695 "term_traversal.m"
  }
#line 681 "term_traversal.m"
}

#line 623 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 623 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 623 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5)
#line 623 "term_traversal.m"
{
#line 626 "term_traversal.m"
  while (MR_TRUE)
#line 626 "term_traversal.m"
    {
#line 626 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 626 "term_traversal.m"
      {
#line 626 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 626 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_3;
#line 626 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_4;

#line 626 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 626 "term_traversal.m"
          {
#line 626 "term_traversal.m"
            transform_hlds__term_traversal__Path_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 626 "term_traversal.m"
            transform_hlds__term_traversal__Paths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "term_traversal.m"
            {
#line 628 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 4)));
#line 628 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 0)));
#line 628 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 1)));
#line 628 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 2)));
#line 628 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 3)));

#line 629 "term_traversal.m"
              {
#line 629 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__Vars_10, transform_hlds__term_traversal__OutVars_5);
              }
#line 628 "term_traversal.m"
            }
#line 630 "term_traversal.m"
            if (!(transform_hlds__term_traversal__succeeded))
#line 631 "term_traversal.m"
              {
#line 631 "term_traversal.m"
                /* direct tailcall eliminated */
#line 631 "term_traversal.m"
                {
#line 631 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths_4;

#line 631 "term_traversal.m"
                  transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 631 "term_traversal.m"
                }
#line 631 "term_traversal.m"
                continue;
#line 631 "term_traversal.m"
              }
#line 626 "term_traversal.m"
          }
#line 626 "term_traversal.m"
        return transform_hlds__term_traversal__succeeded;
#line 626 "term_traversal.m"
      }
#line 626 "term_traversal.m"
      break;
#line 626 "term_traversal.m"
    }
#line 623 "term_traversal.m"
}

#line 603 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 603 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16,
#line 603 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_17)
#line 603 "term_traversal.m"
{
#line 609 "term_traversal.m"
  {
#line 609 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 609 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16)) == (MR_mktag((MR_Integer) 1))))
#line 609 "term_traversal.m"
      *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16;
#line 609 "term_traversal.m"
    else
#line 611 "term_traversal.m"
      {
#line 611 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 611 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 613 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathList_14;

#line 613 "term_traversal.m"
        {
#line 613 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_traversal__Paths_12, &transform_hlds__term_traversal__PathList_14);
        }
#line 614 "term_traversal.m"
        {
#line 614 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(transform_hlds__term_traversal__PathList_14, transform_hlds__term_traversal__OutVars_6);
        }
#line 618 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 616 "term_traversal.m"
          {
#line 616 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Error_15;
#line 616 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_19_19;

#line 616 "term_traversal.m"
            {
#line 616 "term_traversal.m"
              transform_hlds__term_traversal__Error_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_15, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 616 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_15, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
#line 616 "term_traversal.m"
            }
#line 617 "term_traversal.m"
            {
#line 617 "term_traversal.m"
              transform_hlds__term_traversal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_19_19, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_15));
#line 617 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "term_traversal.m"
            }
#line 617 "term_traversal.m"
            {
#line 617 "term_traversal.m"
              MR_Word base;
#line 617 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "term_traversal.m"
              *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = base;
#line 617 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_19_19));
#line 617 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_13));
#line 617 "term_traversal.m"
            }
#line 616 "term_traversal.m"
          }
#line 618 "term_traversal.m"
        else
#line 618 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16;
#line 611 "term_traversal.m"
      }
#line 609 "term_traversal.m"
  }
#line 603 "term_traversal.m"
}

#line 579 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 579 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 579 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 579 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7)
#line 579 "term_traversal.m"
{
#line 583 "term_traversal.m"
  while (MR_TRUE)
#line 583 "term_traversal.m"
    {
#line 583 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 583 "term_traversal.m"
      {
#line 583 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 583 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6;
#line 583 "term_traversal.m"
        else
#line 585 "term_traversal.m"
          {
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ProcData_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 0)));
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Start_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 1)));
#line 585 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Gamma0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 2)));
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PPIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 3)));
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Vars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 4)));
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path_31;
#line 585 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 587 "term_traversal.m"
            {
#line 587 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__OutVars_3, transform_hlds__term_traversal__Vars0_26);
            }
#line 594 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 589 "term_traversal.m"
              {
#line 589 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__TypeInfo_38_38;
#line 589 "term_traversal.m"
                MR_Integer transform_hlds__term_traversal__Gamma_27 = (transform_hlds__term_traversal__CallGamma_4 + transform_hlds__term_traversal__Gamma0_24);
#line 589 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__PPIds_28;
#line 589 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars1_29;
#line 589 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars_30;

#line 590 "term_traversal.m"
                {
#line 590 "term_traversal.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_traversal__CallPPIds_5, transform_hlds__term_traversal__PPIds0_25, &transform_hlds__term_traversal__PPIds_28);
                }
#line 2559 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_38_38 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 591 "term_traversal.m"
                {
#line 591 "term_traversal.m"
                  mercury__bag__subtract_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__Vars0_26, transform_hlds__term_traversal__OutVars_3, &transform_hlds__term_traversal__Vars1_29);
                }
#line 592 "term_traversal.m"
                {
#line 592 "term_traversal.m"
                  mercury__bag__union_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__InVars_2, transform_hlds__term_traversal__Vars1_29, &transform_hlds__term_traversal__Vars_30);
                }
#line 593 "term_traversal.m"
                {
#line 593 "term_traversal.m"
                  transform_hlds__term_traversal__Path_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 593 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 0) = ((MR_Box) (transform_hlds__term_traversal__ProcData_22));
#line 593 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 1) = ((MR_Box) (transform_hlds__term_traversal__Start_23));
#line 593 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 2) = ((MR_Box) (transform_hlds__term_traversal__Gamma_27));
#line 593 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 3) = ((MR_Box) (transform_hlds__term_traversal__PPIds_28));
#line 593 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 4) = ((MR_Box) (transform_hlds__term_traversal__Vars_30));
#line 593 "term_traversal.m"
                }
#line 589 "term_traversal.m"
              }
#line 594 "term_traversal.m"
            else
#line 596 "term_traversal.m"
              transform_hlds__term_traversal__Path_31 = transform_hlds__term_traversal__Path0_15;
#line 598 "term_traversal.m"
            {
#line 598 "term_traversal.m"
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_31)), transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6, &transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34);
            }
#line 599 "term_traversal.m"
            /* direct tailcall eliminated */
#line 599 "term_traversal.m"
            {
#line 599 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths0_16;
#line 599 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 599 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6;
#line 599 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 599 "term_traversal.m"
            }
#line 599 "term_traversal.m"
            continue;
#line 585 "term_traversal.m"
          }
#line 583 "term_traversal.m"
      }
#line 583 "term_traversal.m"
      break;
#line 583 "term_traversal.m"
    }
#line 579 "term_traversal.m"
}

#line 562 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 562 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 562 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 562 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12)
#line 562 "term_traversal.m"
{
#line 568 "term_traversal.m"
  {
#line 568 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 568 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_11)) == (MR_mktag((MR_Integer) 1))))
#line 569 "term_traversal.m"
      *transform_hlds__term_traversal__Info_12 = transform_hlds__term_traversal__Info0_11;
#line 568 "term_traversal.m"
    else
#line 571 "term_traversal.m"
      {
#line 571 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeCtorInfo_20_20 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 571 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 0)));
#line 571 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 1)));
#line 571 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathsList0_17;
#line 571 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths0_18;
#line 571 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths_19;

#line 572 "term_traversal.m"
        {
#line 572 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, transform_hlds__term_traversal__Paths0_15, &transform_hlds__term_traversal__PathsList0_17);
        }
#line 573 "term_traversal.m"
        {
#line 573 "term_traversal.m"
          mercury__set__init_1_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, &transform_hlds__term_traversal__NewPaths0_18);
        }
#line 574 "term_traversal.m"
        {
#line 574 "term_traversal.m"
          transform_hlds__term_traversal__record_change_2_7_p_0(transform_hlds__term_traversal__PathsList0_17, transform_hlds__term_traversal__InVars_7, transform_hlds__term_traversal__OutVars_8, transform_hlds__term_traversal__Gamma_9, transform_hlds__term_traversal__CalledPPIds_10, transform_hlds__term_traversal__NewPaths0_18, &transform_hlds__term_traversal__NewPaths_19);
        }
#line 576 "term_traversal.m"
        {
#line 576 "term_traversal.m"
          MR_Word base;
#line 576 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "term_traversal.m"
          *transform_hlds__term_traversal__Info_12 = base;
#line 576 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__NewPaths_19));
#line 576 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_16));
#line 576 "term_traversal.m"
        }
#line 571 "term_traversal.m"
      }
#line 568 "term_traversal.m"
  }
#line 562 "term_traversal.m"
}

#line 538 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 538 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 538 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 538 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 538 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 538 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 538 "term_traversal.m"
{
#line 542 "term_traversal.m"
  {
#line 542 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 542 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "term_traversal.m"
        {
#line 542 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "term_traversal.m"
        }
#line 542 "term_traversal.m"
      else
#line 543 "term_traversal.m"
        {
#line 544 "term_traversal.m"
          {
#line 544 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 544 "term_traversal.m"
            return;
          }
#line 543 "term_traversal.m"
        }
#line 542 "term_traversal.m"
    else
#line 542 "term_traversal.m"
      {
#line 542 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 542 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 542 "term_traversal.m"
        else
#line 548 "term_traversal.m"
          {
#line 548 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Mode0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Modes0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 1)));
#line 548 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailArgs_30;
#line 548 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailModes_31;
#line 548 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Type_32;

#line 549 "term_traversal.m"
            {
#line 549 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_33_33, &transform_hlds__term_traversal__TailArgs_30, transform_hlds__term_traversal__Modes0_28, &transform_hlds__term_traversal__TailModes_31);
            }
#line 551 "term_traversal.m"
            {
#line 551 "term_traversal.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_34_34, &transform_hlds__term_traversal__Type_32);
            }
#line 552 "term_traversal.m"
            {
#line 552 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_traversal__Type_32);
            }
#line 555 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 553 "term_traversal.m"
              {
#line 553 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__TailArgs_30;
#line 554 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__5_5 = transform_hlds__term_traversal__TailModes_31;
#line 553 "term_traversal.m"
              }
#line 555 "term_traversal.m"
            else
#line 556 "term_traversal.m"
              {
#line 556 "term_traversal.m"
                {
#line 556 "term_traversal.m"
                  MR_Word base;
#line 556 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__3_3 = base;
#line 556 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_34_34));
#line 556 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailArgs_30));
#line 556 "term_traversal.m"
                }
#line 557 "term_traversal.m"
                {
#line 557 "term_traversal.m"
                  MR_Word base;
#line 557 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 557 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Mode0_27));
#line 557 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailModes_31));
#line 557 "term_traversal.m"
                }
#line 556 "term_traversal.m"
              }
#line 548 "term_traversal.m"
          }
#line 542 "term_traversal.m"
      }
#line 542 "term_traversal.m"
  }
#line 538 "term_traversal.m"
}

#line 514 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 514 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 514 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 514 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 514 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18)
#line 514 "term_traversal.m"
{
#line 519 "term_traversal.m"
  {
#line 519 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__FunctorInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 0)));
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 3)));
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Type_21;
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__TypeCtor_24;
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args1_25;
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes1_26;
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args_27;
#line 519 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes_28;
#line 694 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 1)));
#line 694 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 2)));
#line 694 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 4)));
#line 694 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 5)));
#line 694 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 6)));
#line 694 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 7)));

#line 522 "term_traversal.m"
    {
#line 522 "term_traversal.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__OutVar_11, &transform_hlds__term_traversal__Type_21);
    }
#line 523 "term_traversal.m"
    {
#line 523 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_traversal__Type_21);
    }
#line 523 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 519 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 519 "term_traversal.m"
      {
#line 526 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 525 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 526 "term_traversal.m"
        else
#line 526 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 527 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 526 "term_traversal.m"
        else
#line 526 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_FALSE;
#line 524 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 519 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 519 "term_traversal.m"
          {
#line 530 "term_traversal.m"
            {
#line 530 "term_traversal.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_traversal__Type_21, &transform_hlds__term_traversal__TypeCtor_24);
            }
#line 531 "term_traversal.m"
            {
#line 531 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__Args0_13, &transform_hlds__term_traversal__Args1_25, transform_hlds__term_traversal__Modes0_14, &transform_hlds__term_traversal__Modes1_26);
            }
#line 533 "term_traversal.m"
            {
#line 533 "term_traversal.m"
              transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__FunctorInfo_19, transform_hlds__term_traversal__TypeCtor_24, transform_hlds__term_traversal__ConsId_12, transform_hlds__term_traversal__Gamma_16, transform_hlds__term_traversal__Args1_25, &transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes1_26, &transform_hlds__term_traversal__Modes_28);
            }
#line 535 "term_traversal.m"
            {
#line 535 "term_traversal.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes_28, transform_hlds__term_traversal__InVars_17, transform_hlds__term_traversal__OutVars_18);
            }
#line 535 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 519 "term_traversal.m"
          }
#line 519 "term_traversal.m"
      }
#line 519 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 519 "term_traversal.m"
  }
#line 514 "term_traversal.m"
}

#line 483 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 483 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 483 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 483 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3)
#line 483 "term_traversal.m"
{
#line 486 "term_traversal.m"
  {
#line 486 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 486 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "term_traversal.m"
        {
#line 487 "term_traversal.m"
          {
#line 487 "term_traversal.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__HeadVar__3_3);
#line 487 "term_traversal.m"
            return;
          }
#line 486 "term_traversal.m"
        }
#line 486 "term_traversal.m"
      else
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
#line 486 "term_traversal.m"
    else
#line 486 "term_traversal.m"
      {
#line 486 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 486 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));

#line 486 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "term_traversal.m"
          {
#line 489 "term_traversal.m"
            {
#line 489 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 489 "term_traversal.m"
              return;
            }
#line 488 "term_traversal.m"
          }
#line 486 "term_traversal.m"
        else
#line 493 "term_traversal.m"
          {
#line 493 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSupplier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 493 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSuppliers_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 493 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Out1_22;

#line 494 "term_traversal.m"
            {
#line 494 "term_traversal.m"
              transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__V_25_25, transform_hlds__term_traversal__RecInputSuppliers_20, &transform_hlds__term_traversal__Out1_22);
            }
#line 498 "term_traversal.m"
#line 498 "term_traversal.m"
            switch (transform_hlds__term_traversal__RecInputSupplier_19) {
#line 498 "term_traversal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 498 "term_traversal.m"
              case (MR_Integer) 0:
#line 499 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__Out1_22;
#line 498 "term_traversal.m"
                break;
#line 498 "term_traversal.m"
              case (MR_Integer) 1:
#line 496 "term_traversal.m"
                {
#line 497 "term_traversal.m"
                  {
#line 497 "term_traversal.m"
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__V_26_26)), transform_hlds__term_traversal__Out1_22, transform_hlds__term_traversal__HeadVar__3_3);
#line 497 "term_traversal.m"
                    return;
                  }
#line 496 "term_traversal.m"
                }
#line 498 "term_traversal.m"
                break;
#line 498 "term_traversal.m"
            }
#line 493 "term_traversal.m"
          }
#line 486 "term_traversal.m"
      }
#line 486 "term_traversal.m"
  }
#line 483 "term_traversal.m"
}

#line 437 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 437 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 437 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 437 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 437 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8)
#line 437 "term_traversal.m"
{
#line 442 "term_traversal.m"
  {
#line 442 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 442 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoA_5)) == (MR_mktag((MR_Integer) 1))))
#line 442 "term_traversal.m"
      {
#line 442 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 442 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 442 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 442 "term_traversal.m"
          {
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 442 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Errors_14;
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_31_31;
#line 442 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_32_32;
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 700 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 445 "term_traversal.m"
            {
#line 445 "term_traversal.m"
              transform_hlds__term_traversal__V_31_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_53_53, transform_hlds__term_traversal__ErrorsB_11);
            }
#line 445 "term_traversal.m"
            {
#line 445 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_31_31, &transform_hlds__term_traversal__Errors_14);
            }
#line 446 "term_traversal.m"
            {
#line 446 "term_traversal.m"
              transform_hlds__term_traversal__V_32_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_12);
            }
#line 446 "term_traversal.m"
            {
#line 446 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_32_32, &transform_hlds__term_traversal__CanLoop_15);
            }
#line 447 "term_traversal.m"
            {
#line 447 "term_traversal.m"
              MR_Word base;
#line 447 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 447 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_14));
#line 447 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 447 "term_traversal.m"
            }
#line 442 "term_traversal.m"
          }
#line 442 "term_traversal.m"
        else
#line 449 "term_traversal.m"
          {
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_30_30;
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 449 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_37;
#line 450 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 700 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 452 "term_traversal.m"
            {
#line 452 "term_traversal.m"
              transform_hlds__term_traversal__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_35);
            }
#line 452 "term_traversal.m"
            {
#line 452 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__MaxErrors_36, transform_hlds__term_traversal__V_30_30, &transform_hlds__term_traversal__CanLoop_37);
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_53_53));
#line 453 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_37));
#line 453 "term_traversal.m"
            }
#line 449 "term_traversal.m"
          }
#line 442 "term_traversal.m"
      }
#line 442 "term_traversal.m"
    else
#line 442 "term_traversal.m"
      {
#line 442 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 442 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 442 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 455 "term_traversal.m"
          {
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_29_29;
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 455 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 455 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_42;
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 700 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 458 "term_traversal.m"
            {
#line 458 "term_traversal.m"
              transform_hlds__term_traversal__V_29_29 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_40);
            }
#line 458 "term_traversal.m"
            {
#line 458 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__MaxErrors_41, transform_hlds__term_traversal__V_29_29, &transform_hlds__term_traversal__CanLoop_42);
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorsB_39));
#line 459 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_42));
#line 459 "term_traversal.m"
            }
#line 455 "term_traversal.m"
          }
#line 442 "term_traversal.m"
        else
#line 461 "term_traversal.m"
          {
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_51_51;
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PathsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths_20;
#line 461 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxPaths_21;
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_25_25;
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 461 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 461 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_46;
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 700 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 700 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 701 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_89_89;
#line 701 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_90_90;
#line 701 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_91_91;
#line 701 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_92_92;
#line 701 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_93_93;
#line 701 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_94_94;
#line 701 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_95_95;
#line 470 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Count_22;

#line 464 "term_traversal.m"
            {
#line 464 "term_traversal.m"
              transform_hlds__term_traversal__V_25_25 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_44);
            }
#line 464 "term_traversal.m"
            {
#line 464 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__MaxErrors_45, transform_hlds__term_traversal__V_25_25, &transform_hlds__term_traversal__CanLoop_46);
            }
#line 3385 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 465 "term_traversal.m"
            {
#line 465 "term_traversal.m"
              mercury__set__union_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__PathsB_19, transform_hlds__term_traversal__V_55_55, &transform_hlds__term_traversal__Paths_20);
            }
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 701 "term_traversal.m"
            transform_hlds__term_traversal__MaxPaths_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 470 "term_traversal.m"
            {
#line 470 "term_traversal.m"
              mercury__set__count_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__Paths_20, &transform_hlds__term_traversal__Count_22);
            }
#line 471 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__Count_22 <= transform_hlds__term_traversal__MaxPaths_21);
#line 474 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 473 "term_traversal.m"
              {
#line 473 "term_traversal.m"
                MR_Word base;
#line 473 "term_traversal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "term_traversal.m"
                *transform_hlds__term_traversal__Info_8 = base;
#line 473 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_20));
#line 473 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 473 "term_traversal.m"
              }
#line 474 "term_traversal.m"
            else
#line 475 "term_traversal.m"
              {
#line 475 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Context_23;
#line 475 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Error_24;
#line 475 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_27_27;

#line 475 "term_traversal.m"
                {
#line 475 "term_traversal.m"
                  transform_hlds__term_traversal__params_get_context_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Context_23);
                }
#line 476 "term_traversal.m"
                {
#line 476 "term_traversal.m"
                  transform_hlds__term_traversal__Error_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_24, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_23));
#line 476 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 476 "term_traversal.m"
                }
#line 477 "term_traversal.m"
                {
#line 477 "term_traversal.m"
                  transform_hlds__term_traversal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_24));
#line 477 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "term_traversal.m"
                }
#line 477 "term_traversal.m"
                {
#line 477 "term_traversal.m"
                  MR_Word base;
#line 477 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "term_traversal.m"
                  *transform_hlds__term_traversal__Info_8 = base;
#line 477 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_27_27));
#line 477 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 477 "term_traversal.m"
                }
#line 475 "term_traversal.m"
              }
#line 461 "term_traversal.m"
          }
#line 442 "term_traversal.m"
      }
#line 442 "term_traversal.m"
  }
#line 437 "term_traversal.m"
}

#line 418 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_7,
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 418 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 418 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 418 "term_traversal.m"
{
#line 424 "term_traversal.m"
  {
#line 424 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 424 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 424 "term_traversal.m"
      {
#line 424 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 424 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 424 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_13;
#line 424 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 424 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 424 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_30_30;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_31_31;
#line 700 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_32_32;

#line 425 "term_traversal.m"
        {
#line 425 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 425 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_7));
#line 425 "term_traversal.m"
        }
#line 425 "term_traversal.m"
        {
#line 425 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 425 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_12));
#line 425 "term_traversal.m"
        }
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 427 "term_traversal.m"
        {
#line 427 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__CanLoop1_13, &transform_hlds__term_traversal__CanLoop_15);
        }
#line 428 "term_traversal.m"
        {
#line 428 "term_traversal.m"
          MR_Word base;
#line 428 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 428 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_11));
#line 428 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 428 "term_traversal.m"
        }
#line 424 "term_traversal.m"
      }
#line 424 "term_traversal.m"
    else
#line 430 "term_traversal.m"
      {
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17;
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_20;
#line 430 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_21;
#line 430 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_22;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_35_35;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_36_36;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_37_37;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_38_38;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_39_39;
#line 700 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_40_40;

#line 431 "term_traversal.m"
        {
#line 431 "term_traversal.m"
          transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_7));
#line 431 "term_traversal.m"
        }
#line 431 "term_traversal.m"
        {
#line 431 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
#line 431 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_19));
#line 431 "term_traversal.m"
        }
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 433 "term_traversal.m"
        {
#line 433 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_21, transform_hlds__term_traversal__CanLoop1_20, &transform_hlds__term_traversal__CanLoop_22);
        }
#line 434 "term_traversal.m"
        {
#line 434 "term_traversal.m"
          MR_Word base;
#line 434 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 434 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_16));
#line 434 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_22));
#line 434 "term_traversal.m"
        }
#line 430 "term_traversal.m"
      }
#line 424 "term_traversal.m"
  }
#line 418 "term_traversal.m"
}

#line 401 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_6,
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
#line 401 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 401 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 401 "term_traversal.m"
{
#line 407 "term_traversal.m"
  {
#line 407 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 407 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 407 "term_traversal.m"
      {
#line 407 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 407 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 407 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors1_13;
#line 407 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 407 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_15;
#line 407 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_24_24;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 700 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 700 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_30_30;

#line 408 "term_traversal.m"
        {
#line 408 "term_traversal.m"
          transform_hlds__term_traversal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 408 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
#line 408 "term_traversal.m"
        }
#line 408 "term_traversal.m"
        {
#line 408 "term_traversal.m"
          transform_hlds__term_traversal__Errors1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_20_20));
#line 408 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__Errors0_11));
#line 408 "term_traversal.m"
        }
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 0)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 1)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 2)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 3)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 4)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 5)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 6)));
#line 700 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 7)));
#line 410 "term_traversal.m"
        {
#line 410 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__Errors1_13, &transform_hlds__term_traversal__Errors_15);
        }
#line 411 "term_traversal.m"
        {
#line 411 "term_traversal.m"
          MR_Word base;
#line 411 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 411 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_15));
#line 411 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_12));
#line 411 "term_traversal.m"
        }
#line 407 "term_traversal.m"
      }
#line 407 "term_traversal.m"
    else
#line 413 "term_traversal.m"
      {
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ErrorContext_17;
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 413 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));

#line 414 "term_traversal.m"
        {
#line 414 "term_traversal.m"
          transform_hlds__term_traversal__ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 414 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
#line 414 "term_traversal.m"
        }
#line 415 "term_traversal.m"
        {
#line 415 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_17));
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "term_traversal.m"
        }
#line 415 "term_traversal.m"
        {
#line 415 "term_traversal.m"
          MR_Word base;
#line 415 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_21));
#line 415 "term_traversal.m"
        }
#line 413 "term_traversal.m"
      }
#line 407 "term_traversal.m"
  }
#line 401 "term_traversal.m"
}

#line 388 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 388 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 388 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 388 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6)
#line 388 "term_traversal.m"
{
#line 393 "term_traversal.m"
  {
#line 393 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 393 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_5)) == (MR_mktag((MR_Integer) 1))))
#line 394 "term_traversal.m"
      *transform_hlds__term_traversal__Info_6 = transform_hlds__term_traversal__Info0_5;
#line 393 "term_traversal.m"
    else
#line 396 "term_traversal.m"
      {
#line 396 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 0)));
#line 396 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 1)));
#line 396 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_11;

#line 397 "term_traversal.m"
        {
#line 397 "term_traversal.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_4)), transform_hlds__term_traversal__Paths0_9, &transform_hlds__term_traversal__Paths_11);
        }
#line 398 "term_traversal.m"
        {
#line 398 "term_traversal.m"
          MR_Word base;
#line 398 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "term_traversal.m"
          *transform_hlds__term_traversal__Info_6 = base;
#line 398 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_11));
#line 398 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_10));
#line 398 "term_traversal.m"
        }
#line 396 "term_traversal.m"
      }
#line 393 "term_traversal.m"
  }
#line 388 "term_traversal.m"
}

#line 376 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 376 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 376 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4)
#line 376 "term_traversal.m"
{
#line 381 "term_traversal.m"
  {
#line 381 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 381 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_3)) == (MR_mktag((MR_Integer) 1))))
#line 382 "term_traversal.m"
      *transform_hlds__term_traversal__Info_4 = transform_hlds__term_traversal__Info0_3;
#line 381 "term_traversal.m"
    else
#line 384 "term_traversal.m"
      {
#line 384 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 1)));
#line 384 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 384 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 0)));

#line 385 "term_traversal.m"
        {
#line 385 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 385 "term_traversal.m"
        {
#line 385 "term_traversal.m"
          MR_Word base;
#line 385 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "term_traversal.m"
          *transform_hlds__term_traversal__Info_4 = base;
#line 385 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 385 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_8));
#line 385 "term_traversal.m"
        }
#line 384 "term_traversal.m"
      }
#line 381 "term_traversal.m"
  }
#line 376 "term_traversal.m"
}

#line 364 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 364 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 364 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 364 "term_traversal.m"
{
#line 367 "term_traversal.m"
  {
#line 367 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 367 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "term_traversal.m"
      {
#line 367 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;

#line 367 "term_traversal.m"
        {
#line 367 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 367 "term_traversal.m"
        {
#line 367 "term_traversal.m"
          MR_Word base;
#line 367 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 367 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 367 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "term_traversal.m"
        }
#line 367 "term_traversal.m"
      }
#line 367 "term_traversal.m"
    else
#line 368 "term_traversal.m"
      {
#line 368 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Case_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 368 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 368 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 2)));
#line 368 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CaseInfo_19;
#line 368 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CasesInfo_20;
#line 369 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 0)));
#line 369 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 1)));

#line 370 "term_traversal.m"
        {
#line 370 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_18, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__CaseInfo_19);
        }
#line 371 "term_traversal.m"
        {
#line 371 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_switch_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Cases_14, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__CasesInfo_20);
        }
#line 372 "term_traversal.m"
        {
#line 372 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CaseInfo_19, transform_hlds__term_traversal__CasesInfo_20, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__5_5);
#line 372 "term_traversal.m"
          return;
        }
#line 368 "term_traversal.m"
      }
#line 367 "term_traversal.m"
  }
#line 364 "term_traversal.m"
}

#line 354 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 354 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 354 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 354 "term_traversal.m"
{
#line 358 "term_traversal.m"
  {
#line 358 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 358 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "term_traversal.m"
      {
#line 358 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;

#line 358 "term_traversal.m"
        {
#line 358 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 358 "term_traversal.m"
        {
#line 358 "term_traversal.m"
          MR_Word base;
#line 358 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 358 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 358 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "term_traversal.m"
        }
#line 358 "term_traversal.m"
      }
#line 358 "term_traversal.m"
    else
#line 359 "term_traversal.m"
      {
#line 359 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 359 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 359 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_16;
#line 359 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalsInfo_17;

#line 360 "term_traversal.m"
        {
#line 360 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_13, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__GoalInfo_16);
        }
#line 361 "term_traversal.m"
        {
#line 361 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_disj_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goals_14, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__GoalsInfo_17);
        }
#line 362 "term_traversal.m"
        {
#line 362 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_16, transform_hlds__term_traversal__GoalsInfo_17, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__5_5);
#line 362 "term_traversal.m"
          return;
        }
#line 359 "term_traversal.m"
      }
#line 358 "term_traversal.m"
  }
#line 354 "term_traversal.m"
}

#line 345 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
#line 345 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
#line 345 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_5)
#line 345 "term_traversal.m"
{
#line 349 "term_traversal.m"
  while (MR_TRUE)
#line 349 "term_traversal.m"
    {
#line 349 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 349 "term_traversal.m"
      {
#line 349 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 349 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_Info_5 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4;
#line 349 "term_traversal.m"
        else
#line 350 "term_traversal.m"
          {
#line 350 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 350 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 350 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18;

#line 351 "term_traversal.m"
            {
#line 351 "term_traversal.m"
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_13, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18);
            }
#line 352 "term_traversal.m"
            /* direct tailcall eliminated */
#line 352 "term_traversal.m"
            {
#line 352 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__3__tmp_copy_3 = transform_hlds__term_traversal__Goals_14;
#line 352 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18;

#line 352 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 352 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__HeadVar__3__tmp_copy_3;
#line 352 "term_traversal.m"
            }
#line 352 "term_traversal.m"
            continue;
#line 350 "term_traversal.m"
          }
#line 349 "term_traversal.m"
      }
#line 349 "term_traversal.m"
      break;
#line 349 "term_traversal.m"
    }
#line 345 "term_traversal.m"
}

#line 102 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(
#line 102 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 102 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__ActiveVars_2)
#line 102 "term_traversal.m"
{
#line 636 "term_traversal.m"
  {
#line 636 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 636 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "term_traversal.m"
      {
#line 637 "term_traversal.m"
        {
#line 637 "term_traversal.m"
          mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars_2);
#line 637 "term_traversal.m"
          return;
        }
#line 636 "term_traversal.m"
      }
#line 636 "term_traversal.m"
    else
#line 638 "term_traversal.m"
      {
#line 638 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 638 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 638 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars1_7;
#line 638 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars2_12;
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8;
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 640 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10;
#line 640 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11;

#line 639 "term_traversal.m"
        {
#line 639 "term_traversal.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_traversal__Paths_5, &transform_hlds__term_traversal__ActiveVars1_7);
        }
#line 640 "term_traversal.m"
        transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 0)));
#line 640 "term_traversal.m"
        transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 1)));
#line 640 "term_traversal.m"
        transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 2)));
#line 640 "term_traversal.m"
        transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 3)));
#line 640 "term_traversal.m"
        transform_hlds__term_traversal__ActiveVars2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 4)));
#line 641 "term_traversal.m"
        {
#line 641 "term_traversal.m"
          mercury__bag__least_upper_bound_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars1_7, transform_hlds__term_traversal__ActiveVars2_12, transform_hlds__term_traversal__ActiveVars_2);
#line 641 "term_traversal.m"
          return;
        }
#line 638 "term_traversal.m"
      }
#line 636 "term_traversal.m"
  }
#line 102 "term_traversal.m"
}

#line 276 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
#line 276 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 276 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
#line 276 "term_traversal.m"
{
#line 276 "term_traversal.m"
  {
#line 276 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 276 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;

#line 276 "term_traversal.m"
    {
#line 276 "term_traversal.m"
      return transform_hlds__term_traversal__succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 276 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 276 "term_traversal.m"
  }
#line 276 "term_traversal.m"
}

#line 245 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
#line 245 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 245 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
#line 245 "term_traversal.m"
{
#line 245 "term_traversal.m"
  {
#line 245 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__wrapper_arg_2;
#line 245 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;
#line 245 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__2_2;

#line 245 "term_traversal.m"
    {
#line 245 "term_traversal.m"
      transform_hlds__term_traversal__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 245 "term_traversal.m"
    transform_hlds__term_traversal__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__2_2));
#line 245 "term_traversal.m"
    return transform_hlds__term_traversal__wrapper_arg_2;
#line 245 "term_traversal.m"
  }
#line 245 "term_traversal.m"
}

#line 99 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0(
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_6,
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Goal_8,
#line 99 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110,
#line 99 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_111)
#line 99 "term_traversal.m"
{
#line 119 "term_traversal.m"
  while (MR_TRUE)
#line 119 "term_traversal.m"
    {
#line 119 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 119 "term_traversal.m"
      {
#line 119 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;
#line 119 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_8, (MR_Integer) 0)));
#line 119 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_8, (MR_Integer) 1)));
#line 119 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 122 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Detism_12;
#line 122 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_244_244;
#line 123 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13;

#line 122 "term_traversal.m"
        {
#line 122 "term_traversal.m"
          transform_hlds__term_traversal__Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
        }
#line 123 "term_traversal.m"
        {
#line 123 "term_traversal.m"
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__term_traversal__Detism_12, &transform_hlds__term_traversal__V_13_13, &transform_hlds__term_traversal__V_244_244);
        }
#line 123 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_Integer) 0 == transform_hlds__term_traversal__V_244_244);
#line 126 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 125 "term_traversal.m"
          {
#line 125 "term_traversal.m"
            transform_hlds__term_traversal__cannot_succeed_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110, &transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113);
          }
#line 126 "term_traversal.m"
        else
#line 126 "term_traversal.m"
          transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110;
#line 168 "term_traversal.m"
#line 168 "term_traversal.m"
        switch (MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_10)) {
#line 168 "term_traversal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 168 "term_traversal.m"
          case (MR_Integer) 0:
#line 323 "term_traversal.m"
            {
#line 323 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__SubGoal_107 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_traversal__GoalExpr_10), (MR_Integer) 0);

#line 328 "term_traversal.m"
              /* direct tailcall eliminated */
#line 328 "term_traversal.m"
              {
#line 328 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Goal__tmp_copy_8 = transform_hlds__term_traversal__SubGoal_107;
#line 328 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;

#line 328 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110;
#line 328 "term_traversal.m"
                transform_hlds__term_traversal__Goal_8 = transform_hlds__term_traversal__Goal__tmp_copy_8;
#line 328 "term_traversal.m"
              }
#line 328 "term_traversal.m"
              continue;
#line 323 "term_traversal.m"
            }
#line 168 "term_traversal.m"
            break;
#line 168 "term_traversal.m"
          case (MR_Integer) 1:
#line 130 "term_traversal.m"
            {
#line 130 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 130 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)));
#line 130 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___RHS_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 130 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___UniMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 130 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));

#line 144 "term_traversal.m"
#line 144 "term_traversal.m"
              switch (MR_tag((MR_Word) transform_hlds__term_traversal__Unification_17)) {
#line 144 "term_traversal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 144 "term_traversal.m"
                case (MR_Integer) 0:
#line 132 "term_traversal.m"
                  {
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 2)));
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 3)));
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 4)));
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 5)));
#line 132 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 6)));
#line 139 "term_traversal.m"
                    MR_Integer transform_hlds__term_traversal__Gamma_26;
#line 139 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_27;
#line 139 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars0_28;

#line 134 "term_traversal.m"
                    {
#line 134 "term_traversal.m"
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__OutVar_19, transform_hlds__term_traversal__ConsId_20, transform_hlds__term_traversal__Args_21, transform_hlds__term_traversal__Modes_22, transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Gamma_26, &transform_hlds__term_traversal__InVars_27, &transform_hlds__term_traversal__OutVars0_28);
                    }
#line 139 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 137 "term_traversal.m"
                      {
#line 137 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__OutVars_29;

#line 137 "term_traversal.m"
                        {
#line 137 "term_traversal.m"
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__OutVar_19)), transform_hlds__term_traversal__OutVars0_28, &transform_hlds__term_traversal__OutVars_29);
                        }
#line 138 "term_traversal.m"
                        {
#line 138 "term_traversal.m"
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_27, transform_hlds__term_traversal__OutVars_29, transform_hlds__term_traversal__Gamma_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 138 "term_traversal.m"
                          return;
                        }
#line 137 "term_traversal.m"
                      }
#line 139 "term_traversal.m"
                    else
#line 139 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 132 "term_traversal.m"
                  }
#line 144 "term_traversal.m"
                  break;
#line 144 "term_traversal.m"
                case (MR_Integer) 1:
#line 145 "term_traversal.m"
                  {
#line 145 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
#line 145 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__ConsId_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));
#line 145 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Args_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 2)));
#line 145 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Modes_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 3)));
#line 145 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 4)));
#line 145 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 5)));
#line 153 "term_traversal.m"
                    MR_Integer transform_hlds__term_traversal__Gamma0_33;
#line 153 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars0_34;
#line 153 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_179;

#line 147 "term_traversal.m"
                    {
#line 147 "term_traversal.m"
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__InVar_30, transform_hlds__term_traversal__ConsId_180, transform_hlds__term_traversal__Args_181, transform_hlds__term_traversal__Modes_182, transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Gamma0_33, &transform_hlds__term_traversal__InVars0_34, &transform_hlds__term_traversal__OutVars_179);
                    }
#line 153 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 150 "term_traversal.m"
                      {
#line 150 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__Gamma_175;
#line 150 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__InVars_176;

#line 150 "term_traversal.m"
                        {
#line 150 "term_traversal.m"
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__InVar_30)), transform_hlds__term_traversal__InVars0_34, &transform_hlds__term_traversal__InVars_176);
                        }
#line 151 "term_traversal.m"
                        transform_hlds__term_traversal__Gamma_175 = ((MR_Integer) 0 - transform_hlds__term_traversal__Gamma0_33);
#line 152 "term_traversal.m"
                        {
#line 152 "term_traversal.m"
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_176, transform_hlds__term_traversal__OutVars_179, transform_hlds__term_traversal__Gamma_175, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 152 "term_traversal.m"
                          return;
                        }
#line 150 "term_traversal.m"
                      }
#line 153 "term_traversal.m"
                    else
#line 154 "term_traversal.m"
                      {
#line 154 "term_traversal.m"
                        {
#line 154 "term_traversal.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "higher order deconstruction");
#line 154 "term_traversal.m"
                          return;
                        }
#line 154 "term_traversal.m"
                      }
#line 145 "term_traversal.m"
                  }
#line 144 "term_traversal.m"
                  break;
#line 144 "term_traversal.m"
                case (MR_Integer) 2:
#line 157 "term_traversal.m"
                  {
#line 157 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__TypeInfo_230_230 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 157 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Empty_35;
#line 157 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_186 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
#line 157 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_187;
#line 157 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_188;
#line 157 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_189 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));

#line 158 "term_traversal.m"
                    {
#line 158 "term_traversal.m"
                      mercury__bag__init_1_p_0(transform_hlds__term_traversal__TypeInfo_230_230, &transform_hlds__term_traversal__Empty_35);
                    }
#line 159 "term_traversal.m"
                    {
#line 159 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_230_230, ((MR_Box) (transform_hlds__term_traversal__InVar_189)), transform_hlds__term_traversal__Empty_35, &transform_hlds__term_traversal__InVars_187);
                    }
#line 160 "term_traversal.m"
                    {
#line 160 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_230_230, ((MR_Box) (transform_hlds__term_traversal__OutVar_186)), transform_hlds__term_traversal__Empty_35, &transform_hlds__term_traversal__OutVars_188);
                    }
#line 161 "term_traversal.m"
                    {
#line 161 "term_traversal.m"
                      transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_187, transform_hlds__term_traversal__OutVars_188, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 161 "term_traversal.m"
                      return;
                    }
#line 157 "term_traversal.m"
                  }
#line 144 "term_traversal.m"
                  break;
#line 144 "term_traversal.m"
                case (MR_Integer) 3:
#line 144 "term_traversal.m"
#line 144 "term_traversal.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)))) {
#line 144 "term_traversal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 144 "term_traversal.m"
                    case (MR_Integer) 0:
#line 163 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 144 "term_traversal.m"
                      break;
#line 144 "term_traversal.m"
                    case (MR_Integer) 1:
#line 165 "term_traversal.m"
                      {
#line 166 "term_traversal.m"
                        {
#line 166 "term_traversal.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "complicated unify");
#line 166 "term_traversal.m"
                          return;
                        }
#line 165 "term_traversal.m"
                      }
#line 144 "term_traversal.m"
                      break;
#line 144 "term_traversal.m"
                  }
#line 144 "term_traversal.m"
                  break;
#line 144 "term_traversal.m"
              }
#line 130 "term_traversal.m"
            }
#line 168 "term_traversal.m"
            break;
#line 168 "term_traversal.m"
          case (MR_Integer) 2:
#line 169 "term_traversal.m"
            {
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)));
#line 169 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Context_46;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__PPId_47;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPPId_48;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallProcInfo_50;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgModes_51;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgSizeInfo_52;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallTerminationInfo_53;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Args_192 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__InVars_193;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__OutVars_194;
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 169 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));
#line 174 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_49_49;
#line 205 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_152_152;
#line 205 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_59_59;
#line 216 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__VarTypes_60;
#line 236 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliers_62;
#line 226 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliersMap_61;
#line 227 "term_traversal.m"
              MR_Box transform_hlds__term_traversal__conv3_RecInputSuppliers_62;

#line 170 "term_traversal.m"
              {
#line 170 "term_traversal.m"
                transform_hlds__term_traversal__Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
              }
#line 171 "term_traversal.m"
              {
#line 171 "term_traversal.m"
                transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__PPId_47);
              }
#line 172 "term_traversal.m"
              {
#line 172 "term_traversal.m"
                transform_hlds__term_traversal__CallPPId_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_48, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_41));
#line 172 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_48, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_42));
#line 172 "term_traversal.m"
              }
#line 174 "term_traversal.m"
              {
#line 174 "term_traversal.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallPredId_41, transform_hlds__term_traversal__CallProcId_42, &transform_hlds__term_traversal__V_49_49, &transform_hlds__term_traversal__CallProcInfo_50);
              }
#line 176 "term_traversal.m"
              {
#line 176 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallArgModes_51);
              }
#line 178 "term_traversal.m"
              {
#line 178 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallArgSizeInfo_52);
              }
#line 179 "term_traversal.m"
              {
#line 179 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallTerminationInfo_53);
              }
#line 182 "term_traversal.m"
              {
#line 182 "term_traversal.m"
                transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallArgModes_51, transform_hlds__term_traversal__Args_192, &transform_hlds__term_traversal__InVars_193, &transform_hlds__term_traversal__OutVars_194);
              }
#line 189 "term_traversal.m"
              if ((transform_hlds__term_traversal__CallArgSizeInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "term_traversal.m"
                {
#line 194 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliersMap_58;
#line 194 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_143_143;
#line 194 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliers_190;
#line 194 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__UsedInVars_191;
#line 199 "term_traversal.m"
                  MR_Box transform_hlds__term_traversal__conv2_OutputSuppliers_190;

#line 198 "term_traversal.m"
                  {
#line 198 "term_traversal.m"
                    transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__OutputSuppliersMap_58);
                  }
#line 199 "term_traversal.m"
                  {
#line 199 "term_traversal.m"
                    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__OutputSuppliersMap_58, ((MR_Box) (transform_hlds__term_traversal__CallPPId_48)), &transform_hlds__term_traversal__conv2_OutputSuppliers_190);
                  }
#line 199 "term_traversal.m"
                  transform_hlds__term_traversal__OutputSuppliers_190 = ((MR_Word) transform_hlds__term_traversal__conv2_OutputSuppliers_190);
#line 200 "term_traversal.m"
                  {
#line 200 "term_traversal.m"
                    transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_193, transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__OutputSuppliers_190, &transform_hlds__term_traversal__UsedInVars_191);
                  }
#line 201 "term_traversal.m"
                  {
#line 201 "term_traversal.m"
                    transform_hlds__term_traversal__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_143_143, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 201 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "term_traversal.m"
                  }
#line 201 "term_traversal.m"
                  {
#line 201 "term_traversal.m"
                    transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_191, transform_hlds__term_traversal__OutVars_194, (MR_Integer) 0, transform_hlds__term_traversal__V_143_143, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                  }
#line 194 "term_traversal.m"
                }
#line 189 "term_traversal.m"
              else
#line 189 "term_traversal.m"
                {
#line 189 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallArgSizeInfo_52, (MR_Integer) 0)));

#line 189 "term_traversal.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_traversal__V_245_245)) == (MR_mktag((MR_Integer) 0))))
#line 186 "term_traversal.m"
                    {
#line 186 "term_traversal.m"
                      MR_Integer transform_hlds__term_traversal__CallGamma_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_245_245, (MR_Integer) 0)));
#line 186 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__OutputSuppliers_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_245_245, (MR_Integer) 1)));
#line 186 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__UsedInVars_56;

#line 187 "term_traversal.m"
                      {
#line 187 "term_traversal.m"
                        transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_193, transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__OutputSuppliers_55, &transform_hlds__term_traversal__UsedInVars_56);
                      }
#line 188 "term_traversal.m"
                      {
#line 188 "term_traversal.m"
                        transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_56, transform_hlds__term_traversal__OutVars_194, transform_hlds__term_traversal__CallGamma_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                      }
#line 186 "term_traversal.m"
                    }
#line 189 "term_traversal.m"
                  else
#line 190 "term_traversal.m"
                    {
#line 190 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_147_147;

#line 192 "term_traversal.m"
                      {
#line 192 "term_traversal.m"
                        transform_hlds__term_traversal__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 192 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 192 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 192 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 2) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 192 "term_traversal.m"
                      }
#line 191 "term_traversal.m"
                      {
#line 191 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_194, transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_147_147, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                      }
#line 190 "term_traversal.m"
                    }
#line 189 "term_traversal.m"
                }
#line 205 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__CallTerminationInfo_53)) == (MR_mktag((MR_Integer) 1)));
#line 205 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 205 "term_traversal.m"
                {
#line 205 "term_traversal.m"
                  transform_hlds__term_traversal__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallTerminationInfo_53, (MR_Integer) 0)));
#line 205 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__V_152_152)) == (MR_mktag((MR_Integer) 1)));
#line 205 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 205 "term_traversal.m"
                    transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_152_152, (MR_Integer) 0)));
#line 205 "term_traversal.m"
                }
#line 208 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 206 "term_traversal.m"
                {
#line 206 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_153_153;

#line 206 "term_traversal.m"
                  {
#line 206 "term_traversal.m"
                    transform_hlds__term_traversal__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_153_153, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 206 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_153_153, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 206 "term_traversal.m"
                  }
#line 206 "term_traversal.m"
                  {
#line 206 "term_traversal.m"
                    transform_hlds__term_traversal__called_can_loop_5_p_0(transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_153_153, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151, &transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154);
                  }
#line 206 "term_traversal.m"
                }
#line 208 "term_traversal.m"
              else
#line 208 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154 = transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151;
#line 216 "term_traversal.m"
              {
#line 216 "term_traversal.m"
                transform_hlds__term_traversal__params_get_var_types_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__VarTypes_60);
              }
#line 217 "term_traversal.m"
              {
#line 217 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__VarTypes_60);
              }
#line 220 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 219 "term_traversal.m"
                {
#line 219 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_155_155;

#line 219 "term_traversal.m"
                  {
#line 219 "term_traversal.m"
                    transform_hlds__term_traversal__V_155_155 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_155_155, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 219 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_155_155, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 219 "term_traversal.m"
                  }
#line 219 "term_traversal.m"
                  {
#line 219 "term_traversal.m"
                    transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_155_155, transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154, &transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156);
                  }
#line 219 "term_traversal.m"
                }
#line 220 "term_traversal.m"
              else
#line 220 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156 = transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154;
#line 226 "term_traversal.m"
              {
#line 226 "term_traversal.m"
                transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__RecInputSuppliersMap_61);
              }
#line 227 "term_traversal.m"
              {
#line 227 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__RecInputSuppliersMap_61, ((MR_Box) (transform_hlds__term_traversal__CallPPId_48)), &transform_hlds__term_traversal__conv3_RecInputSuppliers_62);
              }
#line 227 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 227 "term_traversal.m"
                {
#line 227 "term_traversal.m"
                  transform_hlds__term_traversal__RecInputSuppliers_62 = ((MR_Word) transform_hlds__term_traversal__conv3_RecInputSuppliers_62);
#line 227 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 227 "term_traversal.m"
                }
#line 236 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 232 "term_traversal.m"
                {
#line 232 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Bag_63;
#line 232 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__PathStart_64;
#line 232 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__NewPath_65;
#line 232 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_157_157;

#line 232 "term_traversal.m"
                  {
#line 232 "term_traversal.m"
                    transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__RecInputSuppliers_62, &transform_hlds__term_traversal__Bag_63);
                  }
#line 233 "term_traversal.m"
                  {
#line 233 "term_traversal.m"
                    transform_hlds__term_traversal__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
#line 233 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_46));
#line 233 "term_traversal.m"
                  }
#line 233 "term_traversal.m"
                  {
#line 233 "term_traversal.m"
                    transform_hlds__term_traversal__PathStart_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 233 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__PathStart_64, 0) = ((MR_Box) (transform_hlds__term_traversal__V_157_157));
#line 233 "term_traversal.m"
                  }
#line 234 "term_traversal.m"
                  {
#line 234 "term_traversal.m"
                    transform_hlds__term_traversal__NewPath_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 234 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
#line 234 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 1) = ((MR_Box) (transform_hlds__term_traversal__PathStart_64));
#line 234 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 2) = ((MR_Box) ((MR_Integer) 0));
#line 234 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 4) = ((MR_Box) (transform_hlds__term_traversal__Bag_63));
#line 234 "term_traversal.m"
                  }
#line 235 "term_traversal.m"
                  {
#line 235 "term_traversal.m"
                    transform_hlds__term_traversal__add_path_3_p_0(transform_hlds__term_traversal__NewPath_65, transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 235 "term_traversal.m"
                    return;
                  }
#line 232 "term_traversal.m"
                }
#line 236 "term_traversal.m"
              else
#line 236 "term_traversal.m"
                *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156;
#line 169 "term_traversal.m"
            }
#line 168 "term_traversal.m"
            break;
#line 168 "term_traversal.m"
          case (MR_Integer) 3:
#line 168 "term_traversal.m"
#line 168 "term_traversal.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)))) {
#line 168 "term_traversal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "term_traversal.m"
              case (MR_Integer) 0:
#line 262 "term_traversal.m"
                {
#line 262 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Details_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 262 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgModes_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 262 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 262 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_223;
#line 262 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 262 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));

#line 263 "term_traversal.m"
                  {
#line 263 "term_traversal.m"
                    transform_hlds__term_traversal__Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                  }
#line 294 "term_traversal.m"
#line 294 "term_traversal.m"
                  switch (MR_tag((MR_Word) transform_hlds__term_traversal__Details_73)) {
#line 294 "term_traversal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 294 "term_traversal.m"
                    case (MR_Integer) 0:
#line 265 "term_traversal.m"
                      {
#line 265 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 0)));
#line 265 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ClosureValueMap_81;
#line 265 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 1)));
#line 265 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 2)));
#line 265 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 3)));
#line 291 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ClosureValues0_82;
#line 273 "term_traversal.m"
                        MR_Box transform_hlds__term_traversal__conv1_ClosureValues0_82;

#line 266 "term_traversal.m"
                        {
#line 266 "term_traversal.m"
                          transform_hlds__term_traversal__ClosureValueMap_81 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                        }
#line 273 "term_traversal.m"
                        {
#line 273 "term_traversal.m"
                          transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_1[2], transform_hlds__term_traversal__ClosureValueMap_81, ((MR_Box) (transform_hlds__term_traversal__Var_77)), &transform_hlds__term_traversal__conv1_ClosureValues0_82);
                        }
#line 273 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 273 "term_traversal.m"
                          {
#line 273 "term_traversal.m"
                            transform_hlds__term_traversal__ClosureValues0_82 = ((MR_Word) transform_hlds__term_traversal__conv1_ClosureValues0_82);
#line 273 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 273 "term_traversal.m"
                          }
#line 291 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 274 "term_traversal.m"
                          {
#line 274 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__TypeCtorInfo_241_241 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 274 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__ClosureValues_83;
#line 274 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__Terminating_84;
#line 274 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__NonTerminating_85;
#line 274 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_128_128;

#line 274 "term_traversal.m"
                            {
#line 274 "term_traversal.m"
                              transform_hlds__term_traversal__ClosureValues_83 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_traversal__TypeCtorInfo_241_241, transform_hlds__term_traversal__ClosureValues0_82);
                            }
#line 276 "term_traversal.m"
                            {
#line 276 "term_traversal.m"
                              transform_hlds__term_traversal__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 276 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
#line 276 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_2));
#line 276 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 276 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 3) = ((MR_Box) (transform_hlds__term_traversal__ModuleInfo_6));
#line 276 "term_traversal.m"
                            }
#line 276 "term_traversal.m"
                            {
#line 276 "term_traversal.m"
                              mercury__list__filter_4_p_0(transform_hlds__term_traversal__TypeCtorInfo_241_241, transform_hlds__term_traversal__V_128_128, transform_hlds__term_traversal__ClosureValues_83, &transform_hlds__term_traversal__Terminating_84, &transform_hlds__term_traversal__NonTerminating_85);
                            }
#line 285 "term_traversal.m"
                            if ((transform_hlds__term_traversal__NonTerminating_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "term_traversal.m"
                              {
#line 279 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__Error_86;
#line 279 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__OutVars_203;
#line 279 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__PPId_204;
#line 280 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal___InVars_202;

#line 280 "term_traversal.m"
                                {
#line 280 "term_traversal.m"
                                  transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__ArgModes_74, transform_hlds__term_traversal__Args_221, &transform_hlds__term_traversal___InVars_202, &transform_hlds__term_traversal__OutVars_203);
                                }
#line 282 "term_traversal.m"
                                {
#line 282 "term_traversal.m"
                                  transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__PPId_204);
                                }
#line 283 "term_traversal.m"
                                {
#line 283 "term_traversal.m"
                                  transform_hlds__term_traversal__Error_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 283 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 283 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_204));
#line 283 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 2) = ((MR_Box) (transform_hlds__term_traversal__Terminating_84));
#line 283 "term_traversal.m"
                                }
#line 284 "term_traversal.m"
                                {
#line 284 "term_traversal.m"
                                  transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_203, transform_hlds__term_traversal__Context_223, transform_hlds__term_traversal__Error_86, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 284 "term_traversal.m"
                                  return;
                                }
#line 279 "term_traversal.m"
                              }
#line 285 "term_traversal.m"
                            else
#line 286 "term_traversal.m"
                              {
#line 289 "term_traversal.m"
                                {
#line 289 "term_traversal.m"
                                  transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 289 "term_traversal.m"
                                  return;
                                }
#line 286 "term_traversal.m"
                              }
#line 274 "term_traversal.m"
                          }
#line 291 "term_traversal.m"
                        else
#line 292 "term_traversal.m"
                          {
#line 292 "term_traversal.m"
                            {
#line 292 "term_traversal.m"
                              transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 292 "term_traversal.m"
                              return;
                            }
#line 292 "term_traversal.m"
                          }
#line 265 "term_traversal.m"
                      }
#line 294 "term_traversal.m"
                      break;
#line 294 "term_traversal.m"
                    case (MR_Integer) 1:
#line 295 "term_traversal.m"
                      {
#line 300 "term_traversal.m"
                        {
#line 300 "term_traversal.m"
                          transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 300 "term_traversal.m"
                          return;
                        }
#line 295 "term_traversal.m"
                      }
#line 294 "term_traversal.m"
                      break;
#line 294 "term_traversal.m"
                    case (MR_Integer) 2:
#line 302 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 294 "term_traversal.m"
                      break;
#line 294 "term_traversal.m"
                    case (MR_Integer) 3:
#line 304 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
#line 294 "term_traversal.m"
                      break;
#line 294 "term_traversal.m"
                  }
#line 262 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 1:
#line 241 "term_traversal.m"
                {
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Attributes_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgVars_71;
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutVars_196;
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallPredId_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 241 "term_traversal.m"
                  MR_Integer transform_hlds__term_traversal__CallProcId_198 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_199;
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallProcInfo_200;
#line 241 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallArgModes_201;
#line 240 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));
#line 240 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 6)));
#line 240 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 7)));
#line 242 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_70_70;
#line 246 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal___InVars_72;
#line 251 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_135_135;

#line 242 "term_traversal.m"
                  {
#line 242 "term_traversal.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallPredId_197, transform_hlds__term_traversal__CallProcId_198, &transform_hlds__term_traversal__V_70_70, &transform_hlds__term_traversal__CallProcInfo_200);
                  }
#line 244 "term_traversal.m"
                  {
#line 244 "term_traversal.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_200, &transform_hlds__term_traversal__CallArgModes_201);
                  }
#line 245 "term_traversal.m"
                  {
#line 245 "term_traversal.m"
                    transform_hlds__term_traversal__ArgVars_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_2[3], transform_hlds__term_traversal__Args_195);
                  }
#line 246 "term_traversal.m"
                  {
#line 246 "term_traversal.m"
                    transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallArgModes_201, transform_hlds__term_traversal__ArgVars_71, &transform_hlds__term_traversal___InVars_72, &transform_hlds__term_traversal__OutVars_196);
                  }
#line 248 "term_traversal.m"
                  {
#line 248 "term_traversal.m"
                    transform_hlds__term_traversal__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                  }
#line 251 "term_traversal.m"
                  {
#line 251 "term_traversal.m"
                    transform_hlds__term_traversal__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_135_135, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_197));
#line 251 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_135_135, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_198));
#line 251 "term_traversal.m"
                  }
#line 251 "term_traversal.m"
                  {
#line 251 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__V_135_135);
                  }
#line 254 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 253 "term_traversal.m"
                    {
#line 253 "term_traversal.m"
                      {
#line 253 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_196, transform_hlds__term_traversal__Context_199, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 253 "term_traversal.m"
                        return;
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
                        transform_hlds__term_traversal__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__term_traversal__Attributes_66);
                      }
#line 258 "term_traversal.m"
                      if (transform_hlds__term_traversal__succeeded)
#line 257 "term_traversal.m"
                        {
#line 257 "term_traversal.m"
                          {
#line 257 "term_traversal.m"
                            transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_196, transform_hlds__term_traversal__Context_199, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 257 "term_traversal.m"
                            return;
                          }
#line 257 "term_traversal.m"
                        }
#line 258 "term_traversal.m"
                      else
#line 259 "term_traversal.m"
                        {
#line 259 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_140_140;

#line 259 "term_traversal.m"
                          {
#line 259 "term_traversal.m"
                            transform_hlds__term_traversal__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 259 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_140_140, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_197));
#line 259 "term_traversal.m"
                          }
#line 259 "term_traversal.m"
                          {
#line 259 "term_traversal.m"
                            transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_199, transform_hlds__term_traversal__V_140_140, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 259 "term_traversal.m"
                            return;
                          }
#line 259 "term_traversal.m"
                        }
#line 258 "term_traversal.m"
                    }
#line 241 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 2:
#line 307 "term_traversal.m"
                {
#line 307 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Goals_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 307 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__RevGoals_97;
#line 307 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 308 "term_traversal.m"
                  {
#line 308 "term_traversal.m"
                    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__term_traversal__Goals_96, &transform_hlds__term_traversal__RevGoals_97);
                  }
#line 309 "term_traversal.m"
                  {
#line 309 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__RevGoals_97, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 309 "term_traversal.m"
                    return;
                  }
#line 307 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 3:
#line 311 "term_traversal.m"
                {
#line 311 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Goals_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 312 "term_traversal.m"
                  {
#line 312 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_disj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Goals_226, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 312 "term_traversal.m"
                    return;
                  }
#line 311 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 4:
#line 314 "term_traversal.m"
                {
#line 314 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Cases_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 314 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
#line 314 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));

#line 315 "term_traversal.m"
                  {
#line 315 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_switch_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Cases_100, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 315 "term_traversal.m"
                    return;
                  }
#line 314 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 5:
#line 330 "term_traversal.m"
                {
#line 330 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 330 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 333 "term_traversal.m"
                  /* direct tailcall eliminated */
#line 333 "term_traversal.m"
                  {
#line 333 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Goal__tmp_copy_8 = transform_hlds__term_traversal__SubGoal_227;
#line 333 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;

#line 333 "term_traversal.m"
                    transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110;
#line 333 "term_traversal.m"
                    transform_hlds__term_traversal__Goal_8 = transform_hlds__term_traversal__Goal__tmp_copy_8;
#line 333 "term_traversal.m"
                  }
#line 333 "term_traversal.m"
                  continue;
#line 330 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 6:
#line 317 "term_traversal.m"
                {
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Cond_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Then_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Else_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CondThenInfo_105;
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ElseInfo_106;
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_119_119;
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_120_120;
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

#line 318 "term_traversal.m"
                  {
#line 318 "term_traversal.m"
                    transform_hlds__term_traversal__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_120_120, 0) = ((MR_Box) (transform_hlds__term_traversal__Cond_102));
#line 318 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "term_traversal.m"
                  }
#line 318 "term_traversal.m"
                  {
#line 318 "term_traversal.m"
                    transform_hlds__term_traversal__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_119_119, 0) = ((MR_Box) (transform_hlds__term_traversal__Then_103));
#line 318 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_119_119, 1) = ((MR_Box) (transform_hlds__term_traversal__V_120_120));
#line 318 "term_traversal.m"
                  }
#line 318 "term_traversal.m"
                  {
#line 318 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__V_119_119, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__CondThenInfo_105);
                  }
#line 320 "term_traversal.m"
                  {
#line 320 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Else_104, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__ElseInfo_106);
                  }
#line 321 "term_traversal.m"
                  {
#line 321 "term_traversal.m"
                    transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CondThenInfo_105, transform_hlds__term_traversal__ElseInfo_106, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
#line 321 "term_traversal.m"
                    return;
                  }
#line 317 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
              case (MR_Integer) 7:
#line 335 "term_traversal.m"
                {
#line 337 "term_traversal.m"
                  {
#line 337 "term_traversal.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "shorthand");
#line 337 "term_traversal.m"
                    return;
                  }
#line 335 "term_traversal.m"
                }
#line 168 "term_traversal.m"
                break;
#line 168 "term_traversal.m"
            }
#line 168 "term_traversal.m"
            break;
#line 168 "term_traversal.m"
        }
#line 119 "term_traversal.m"
      }
#line 119 "term_traversal.m"
      break;
#line 119 "term_traversal.m"
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
#line 675 "term_traversal.m"
  {
#line 675 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 675 "term_traversal.m"
    {
#line 675 "term_traversal.m"
      MR_Word base;
#line 675 "term_traversal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 675 "term_traversal.m"
      *transform_hlds__term_traversal__Params_18 = base;
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__FunctorInfo_10));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__PredProcId_11));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_traversal__Context_12));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_traversal__VarTypes_13));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_traversal__OutputSuppliers_14));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_traversal__RecInputSuppliers_15));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_traversal__MaxErrors_16));
#line 675 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_traversal__MaxPaths_17));
#line 675 "term_traversal.m"
    }
#line 675 "term_traversal.m"
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
