/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 146 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 149 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 152 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5];

#line 161 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0;

#line 164 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1];

#line 167 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1];

#line 170 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1];

#line 173 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1];

#line 176 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 179 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 182 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2];

#line 185 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0;

#line 188 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2];

#line 191 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1;

#line 194 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1];

#line 197 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1];

#line 200 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2];

#line 203 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2];

#line 206 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2];

#line 209 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 212 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0;

#line 215 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 218 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8];

#line 221 "transform_hlds.term_traversal.c"
static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8];

#line 224 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0;

#line 227 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1];

#line 230 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1];

#line 233 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1];

#line 236 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1];

#line 239 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 242 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 244 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 247 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 250 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 252 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 254 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 257 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 260 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 262 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 265 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 268 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 270 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 272 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 275 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 278 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 280 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

#line 283 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 286 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 288 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 290 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

#line 697 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 697 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 697 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 695 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 695 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 695 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 693 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 693 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 693 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 691 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 691 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 691 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 689 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 689 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 689 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

#line 631 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 631 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 631 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5);

#line 610 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorMsg_8,
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 610 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 586 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 586 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 586 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7);

#line 569 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 569 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 569 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12);

#line 545 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 545 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 545 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 545 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 545 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 545 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

#line 521 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 521 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 521 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 521 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18);

#line 490 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 490 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 490 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 490 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3);

#line 444 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 444 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 444 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 444 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 444 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8);

#line 425 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 425 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 408 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 408 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10);

#line 395 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 395 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 395 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 395 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6);

#line 383 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 383 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 383 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4);

#line 368 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_8_p_0(
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 368 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 368 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);

#line 357 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_8_p_0(
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 357 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 357 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);

#line 348 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_conj_8_p_0(
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 348 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_4,
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 348 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);

#line 279 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_2(
#line 279 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 279 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);

#line 248 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_1(
#line 248 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 248 "term_traversal.m"
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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 667 "transform_hlds.term_traversal.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 675 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 684 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

#line 692 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 700 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 708 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 716 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 725 "transform_hlds.term_traversal.c"
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

#line 740 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

#line 745 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0
  }
};

#line 754 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

#line 759 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1] = {
  (MR_Integer) 0
};

#line 764 "transform_hlds.term_traversal.c"
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

#line 781 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 789 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 797 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 803 "transform_hlds.term_traversal.c"
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

#line 818 "transform_hlds.term_traversal.c"
static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 824 "transform_hlds.term_traversal.c"
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

#line 839 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 844 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1
};

#line 849 "transform_hlds.term_traversal.c"
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

#line 863 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1,
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

#line 869 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 875 "transform_hlds.term_traversal.c"
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

#line 892 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 901 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 909 "transform_hlds.term_traversal.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 918 "transform_hlds.term_traversal.c"
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

#line 930 "transform_hlds.term_traversal.c"
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

#line 942 "transform_hlds.term_traversal.c"
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

#line 957 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 962 "transform_hlds.term_traversal.c"
static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0
  }
};

#line 971 "transform_hlds.term_traversal.c"
static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

#line 976 "transform_hlds.term_traversal.c"
static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1] = {
  (MR_Integer) 0
};

#line 981 "transform_hlds.term_traversal.c"
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

#line 998 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
#line 1001 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1003 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1005 "transform_hlds.term_traversal.c"
{
#line 1007 "transform_hlds.term_traversal.c"
  {
#line 1009 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1012 "transform_hlds.term_traversal.c"
    {
#line 1014 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1017 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1019 "transform_hlds.term_traversal.c"
  }
#line 1021 "transform_hlds.term_traversal.c"
}

#line 1024 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
#line 1027 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1029 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1031 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1033 "transform_hlds.term_traversal.c"
{
#line 1035 "transform_hlds.term_traversal.c"
  {
#line 1037 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1040 "transform_hlds.term_traversal.c"
    {
#line 1042 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_path_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1045 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1047 "transform_hlds.term_traversal.c"
  }
#line 1049 "transform_hlds.term_traversal.c"
}

#line 1052 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
#line 1055 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1057 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1059 "transform_hlds.term_traversal.c"
{
#line 1061 "transform_hlds.term_traversal.c"
  {
#line 1063 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1066 "transform_hlds.term_traversal.c"
    {
#line 1068 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1071 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1073 "transform_hlds.term_traversal.c"
  }
#line 1075 "transform_hlds.term_traversal.c"
}

#line 1078 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
#line 1081 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1083 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1085 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1087 "transform_hlds.term_traversal.c"
{
#line 1089 "transform_hlds.term_traversal.c"
  {
#line 1091 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1094 "transform_hlds.term_traversal.c"
    {
#line 1096 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1099 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1101 "transform_hlds.term_traversal.c"
  }
#line 1103 "transform_hlds.term_traversal.c"
}

#line 1106 "transform_hlds.term_traversal.c"
static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
#line 1109 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
#line 1111 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
#line 1113 "transform_hlds.term_traversal.c"
{
#line 1115 "transform_hlds.term_traversal.c"
  {
#line 1117 "transform_hlds.term_traversal.c"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 1120 "transform_hlds.term_traversal.c"
    {
#line 1122 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
#line 1125 "transform_hlds.term_traversal.c"
    return transform_hlds__term_traversal__succeeded;
#line 1127 "transform_hlds.term_traversal.c"
  }
#line 1129 "transform_hlds.term_traversal.c"
}

#line 1132 "transform_hlds.term_traversal.c"
static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
#line 1135 "transform_hlds.term_traversal.c"
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
#line 1137 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
#line 1139 "transform_hlds.term_traversal.c"
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
#line 1141 "transform_hlds.term_traversal.c"
{
#line 1143 "transform_hlds.term_traversal.c"
  {
#line 1145 "transform_hlds.term_traversal.c"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

#line 1148 "transform_hlds.term_traversal.c"
    {
#line 1150 "transform_hlds.term_traversal.c"
      transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
#line 1153 "transform_hlds.term_traversal.c"
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
#line 1155 "transform_hlds.term_traversal.c"
  }
#line 1157 "transform_hlds.term_traversal.c"
}

#line 653 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
#line 653 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 653 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 653 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 653 "term_traversal.m"
{
#line 653 "term_traversal.m"
  {
#line 653 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 653 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_27 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 653 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_28 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 653 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_27 == transform_hlds__term_traversal__CastY_28);
#line 653 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1184 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 653 "term_traversal.m"
    else
#line 653 "term_traversal.m"
      {
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 5)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 6)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 7)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;

#line 653 "term_traversal.m"
        {
#line 653 "term_traversal.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_traversal__V_20_20, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
        }
#line 1230 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_20_20 == (MR_Integer) 0);
#line 653 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_20_20;
#line 653 "term_traversal.m"
        else
#line 653 "term_traversal.m"
          {
#line 653 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_21_21;

#line 653 "term_traversal.m"
            {
#line 653 "term_traversal.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_21_21, transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
            }
#line 1250 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 653 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 653 "term_traversal.m"
            else
#line 653 "term_traversal.m"
              {
#line 653 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_22_22;

#line 653 "term_traversal.m"
                {
#line 653 "term_traversal.m"
                  mercury__term____Compare____context_0_0(&transform_hlds__term_traversal__V_22_22, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_14_14);
                }
#line 1270 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_22_22 == (MR_Integer) 0);
#line 653 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_22_22;
#line 653 "term_traversal.m"
                else
#line 653 "term_traversal.m"
                  {
#line 653 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_23_23;

#line 653 "term_traversal.m"
                    {
#line 653 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &transform_hlds__term_traversal__V_23_23, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                    }
#line 1290 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_23_23 == (MR_Integer) 0);
#line 653 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_23_23;
#line 653 "term_traversal.m"
                    else
#line 653 "term_traversal.m"
                      {
#line 653 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_24_24;

#line 653 "term_traversal.m"
                        {
#line 653 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_24_24, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                        }
#line 1310 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_24_24 == (MR_Integer) 0);
#line 653 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_24_24;
#line 653 "term_traversal.m"
                        else
#line 653 "term_traversal.m"
                          {
#line 653 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_25_25;

#line 653 "term_traversal.m"
                            {
#line 653 "term_traversal.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_25_25, ((MR_Box) (transform_hlds__term_traversal__V_9_9)), ((MR_Box) (transform_hlds__term_traversal__V_17_17)));
                            }
#line 1330 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_25_25 == (MR_Integer) 0);
#line 653 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_25_25;
#line 653 "term_traversal.m"
                            else
#line 653 "term_traversal.m"
                              {
#line 653 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__V_26_26;

#line 653 "term_traversal.m"
                                {
#line 653 "term_traversal.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_26_26, transform_hlds__term_traversal__V_10_10, transform_hlds__term_traversal__V_18_18);
                                }
#line 1350 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_26_26 == (MR_Integer) 0);
#line 653 "term_traversal.m"
                                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 653 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_26_26;
#line 653 "term_traversal.m"
                                else
#line 653 "term_traversal.m"
                                  {
#line 653 "term_traversal.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_traversal__HeadVar__1_1, transform_hlds__term_traversal__V_11_11, transform_hlds__term_traversal__V_19_19);
#line 653 "term_traversal.m"
                                    return;
                                  }
#line 653 "term_traversal.m"
                              }
#line 653 "term_traversal.m"
                          }
#line 653 "term_traversal.m"
                      }
#line 653 "term_traversal.m"
                  }
#line 653 "term_traversal.m"
              }
#line 653 "term_traversal.m"
          }
#line 653 "term_traversal.m"
      }
#line 653 "term_traversal.m"
  }
#line 653 "term_traversal.m"
}

#line 653 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0(
#line 653 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 653 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 653 "term_traversal.m"
{
#line 653 "term_traversal.m"
  {
#line 653 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 653 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 653 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_20 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 653 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_19 == transform_hlds__term_traversal__CastY_20);
#line 653 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 653 "term_traversal.m"
    else
#line 653 "term_traversal.m"
      {
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_24_24;
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_25_25;
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_26_26;
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 5)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 6)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 7)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 653 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
#line 653 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));

#line 1453 "transform_hlds.term_traversal.c"
        {
#line 1455 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_11_11);
        }
#line 653 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
          {
#line 1462 "transform_hlds.term_traversal.c"
            {
#line 1464 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
            }
#line 653 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
              {
#line 1471 "transform_hlds.term_traversal.c"
                {
#line 1473 "transform_hlds.term_traversal.c"
                  transform_hlds__term_traversal__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
                }
#line 653 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                  {
#line 1480 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
#line 1482 "transform_hlds.term_traversal.c"
                    {
#line 1484 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_14_14)));
                    }
#line 653 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                      {
#line 1491 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
#line 1493 "transform_hlds.term_traversal.c"
                        {
#line 1495 "transform_hlds.term_traversal.c"
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                        }
#line 653 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                          {
#line 1502 "transform_hlds.term_traversal.c"
                            transform_hlds__term_traversal__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
#line 1504 "transform_hlds.term_traversal.c"
                            {
#line 1506 "transform_hlds.term_traversal.c"
                              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                            }
#line 653 "term_traversal.m"
                            if (transform_hlds__term_traversal__succeeded)
#line 653 "term_traversal.m"
                              {
#line 1513 "transform_hlds.term_traversal.c"
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_9_9 == transform_hlds__term_traversal__V_17_17);
#line 653 "term_traversal.m"
                                if (transform_hlds__term_traversal__succeeded)
#line 1517 "transform_hlds.term_traversal.c"
                                  transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_10_10 == transform_hlds__term_traversal__V_18_18);
#line 653 "term_traversal.m"
                              }
#line 653 "term_traversal.m"
                          }
#line 653 "term_traversal.m"
                      }
#line 653 "term_traversal.m"
                  }
#line 653 "term_traversal.m"
              }
#line 653 "term_traversal.m"
          }
#line 653 "term_traversal.m"
      }
#line 653 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 653 "term_traversal.m"
  }
#line 653 "term_traversal.m"
}

#line 41 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0(
#line 41 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 41 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 41 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 41 "term_traversal.m"
{
#line 41 "term_traversal.m"
  {
#line 41 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 41 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_22 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 41 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_23 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 41 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_22 == transform_hlds__term_traversal__CastY_23);
#line 41 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1564 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "term_traversal.m"
    else
#line 41 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 41 "term_traversal.m"
      {
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 41 "term_traversal.m"
          {
#line 41 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_21_21;

#line 41 "term_traversal.m"
            {
#line 41 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], &transform_hlds__term_traversal__V_21_21, ((MR_Box) (transform_hlds__term_traversal__V_29_29)), ((MR_Box) (transform_hlds__term_traversal__V_19_19)));
            }
#line 1593 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
#line 41 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 41 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
#line 41 "term_traversal.m"
            else
#line 41 "term_traversal.m"
              {
#line 41 "term_traversal.m"
                {
#line 41 "term_traversal.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_28_28)), ((MR_Box) (transform_hlds__term_traversal__V_20_20)));
#line 41 "term_traversal.m"
                  return;
                }
#line 41 "term_traversal.m"
              }
#line 41 "term_traversal.m"
          }
#line 41 "term_traversal.m"
        else
#line 1618 "transform_hlds.term_traversal.c"
          *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "term_traversal.m"
      }
#line 41 "term_traversal.m"
    else
#line 41 "term_traversal.m"
      {
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1633 "transform_hlds.term_traversal.c"
          *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "term_traversal.m"
        else
#line 41 "term_traversal.m"
          {
#line 41 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_8_8;

#line 41 "term_traversal.m"
            {
#line 41 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[7], &transform_hlds__term_traversal__V_8_8, ((MR_Box) (transform_hlds__term_traversal__V_31_31)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
            }
#line 1651 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_8_8 == (MR_Integer) 0);
#line 41 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 41 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_8_8;
#line 41 "term_traversal.m"
            else
#line 41 "term_traversal.m"
              {
#line 41 "term_traversal.m"
                {
#line 41 "term_traversal.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_30_30)), ((MR_Box) (transform_hlds__term_traversal__V_7_7)));
#line 41 "term_traversal.m"
                  return;
                }
#line 41 "term_traversal.m"
              }
#line 41 "term_traversal.m"
          }
#line 41 "term_traversal.m"
      }
#line 41 "term_traversal.m"
  }
#line 41 "term_traversal.m"
}

#line 41 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0(
#line 41 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 41 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 41 "term_traversal.m"
{
#line 41 "term_traversal.m"
  {
#line 41 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 41 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_11 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 41 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_12 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 41 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_11 == transform_hlds__term_traversal__CastY_12);
#line 41 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 41 "term_traversal.m"
    else
#line 41 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 41 "term_traversal.m"
      {
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_13_13;
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_14_14;
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_10_10;

#line 41 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 41 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
          {
#line 41 "term_traversal.m"
            transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "term_traversal.m"
            transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 1734 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1736 "transform_hlds.term_traversal.c"
            {
#line 1738 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 41 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
              {
#line 1745 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1747 "transform_hlds.term_traversal.c"
                {
#line 1749 "transform_hlds.term_traversal.c"
                  return transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
                }
#line 41 "term_traversal.m"
              }
#line 41 "term_traversal.m"
          }
#line 41 "term_traversal.m"
      }
#line 41 "term_traversal.m"
    else
#line 41 "term_traversal.m"
      {
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_15_15;
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5;
#line 41 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6;

#line 41 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 41 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
          {
#line 41 "term_traversal.m"
            transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "term_traversal.m"
            transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 1785 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[7];
#line 1787 "transform_hlds.term_traversal.c"
            {
#line 1789 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_traversal__V_3_3)), ((MR_Box) (transform_hlds__term_traversal__V_5_5)));
            }
#line 41 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 41 "term_traversal.m"
              {
#line 1796 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
#line 1798 "transform_hlds.term_traversal.c"
                {
#line 1800 "transform_hlds.term_traversal.c"
                  return transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
                }
#line 41 "term_traversal.m"
              }
#line 41 "term_traversal.m"
          }
#line 41 "term_traversal.m"
      }
#line 41 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 41 "term_traversal.m"
  }
#line 41 "term_traversal.m"
}

#line 72 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0(
#line 72 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
#line 72 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 72 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
#line 72 "term_traversal.m"
{
#line 72 "term_traversal.m"
  {
#line 72 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 72 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_18 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
#line 72 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

#line 72 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_18 == transform_hlds__term_traversal__CastY_19);
#line 72 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 1840 "transform_hlds.term_traversal.c"
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "term_traversal.m"
    else
#line 72 "term_traversal.m"
      {
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_14_14;

#line 72 "term_traversal.m"
        {
#line 72 "term_traversal.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_14_14, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_9_9);
        }
#line 1874 "transform_hlds.term_traversal.c"
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_14_14 == (MR_Integer) 0);
#line 72 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 72 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_14_14;
#line 72 "term_traversal.m"
        else
#line 72 "term_traversal.m"
          {
#line 72 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_15_15;

#line 72 "term_traversal.m"
            {
#line 72 "term_traversal.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[3], &transform_hlds__term_traversal__V_15_15, ((MR_Box) (transform_hlds__term_traversal__V_5_5)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
            }
#line 1894 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_15_15 == (MR_Integer) 0);
#line 72 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 72 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_15_15;
#line 72 "term_traversal.m"
            else
#line 72 "term_traversal.m"
              {
#line 72 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_16_16;

#line 72 "term_traversal.m"
                {
#line 72 "term_traversal.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_16_16, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_11_11);
                }
#line 1914 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_16_16 == (MR_Integer) 0);
#line 72 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 72 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_16_16;
#line 72 "term_traversal.m"
                else
#line 72 "term_traversal.m"
                  {
#line 72 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_17_17;

#line 72 "term_traversal.m"
                    {
#line 72 "term_traversal.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[4], &transform_hlds__term_traversal__V_17_17, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                    }
#line 1934 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_17_17 == (MR_Integer) 0);
#line 72 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 72 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_17_17;
#line 72 "term_traversal.m"
                    else
#line 72 "term_traversal.m"
                      {
#line 72 "term_traversal.m"
                        {
#line 72 "term_traversal.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[5], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_13_13)));
#line 72 "term_traversal.m"
                          return;
                        }
#line 72 "term_traversal.m"
                      }
#line 72 "term_traversal.m"
                  }
#line 72 "term_traversal.m"
              }
#line 72 "term_traversal.m"
          }
#line 72 "term_traversal.m"
      }
#line 72 "term_traversal.m"
  }
#line 72 "term_traversal.m"
}

#line 72 "term_traversal.m"
MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0(
#line 72 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 72 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
#line 72 "term_traversal.m"
{
#line 72 "term_traversal.m"
  {
#line 72 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 72 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastX_13 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
#line 72 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__CastY_14 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

#line 72 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_13 == transform_hlds__term_traversal__CastY_14);
#line 72 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 72 "term_traversal.m"
    else
#line 72 "term_traversal.m"
      {
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_17_17;
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeInfo_18_18;
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
#line 72 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));

#line 2023 "transform_hlds.term_traversal.c"
        {
#line 2025 "transform_hlds.term_traversal.c"
          transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_8_8);
        }
#line 72 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
          {
#line 2032 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[3];
#line 2034 "transform_hlds.term_traversal.c"
            {
#line 2036 "transform_hlds.term_traversal.c"
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
#line 72 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
              {
#line 2043 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_5_5 == transform_hlds__term_traversal__V_10_10);
#line 72 "term_traversal.m"
                if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
                  {
#line 2049 "transform_hlds.term_traversal.c"
                    transform_hlds__term_traversal__TypeInfo_17_17 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[4];
#line 2051 "transform_hlds.term_traversal.c"
                    {
#line 2053 "transform_hlds.term_traversal.c"
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_17_17, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_11_11)));
                    }
#line 72 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 72 "term_traversal.m"
                      {
#line 2060 "transform_hlds.term_traversal.c"
                        transform_hlds__term_traversal__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[5];
#line 2062 "transform_hlds.term_traversal.c"
                        {
#line 2064 "transform_hlds.term_traversal.c"
                          return transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                        }
#line 72 "term_traversal.m"
                      }
#line 72 "term_traversal.m"
                  }
#line 72 "term_traversal.m"
              }
#line 72 "term_traversal.m"
          }
#line 72 "term_traversal.m"
      }
#line 72 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 72 "term_traversal.m"
  }
#line 72 "term_traversal.m"
}

#line 697 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
#line 697 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 697 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 697 "term_traversal.m"
{
#line 707 "term_traversal.m"
  {
#line 707 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 707 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 707 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 707 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 707 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 707 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 707 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 707 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 707 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 707 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 707 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 707 "term_traversal.m"
  }
#line 697 "term_traversal.m"
}

#line 695 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
#line 695 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 695 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 695 "term_traversal.m"
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
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 706 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 706 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 706 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 706 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 706 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 706 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 706 "term_traversal.m"
  }
#line 695 "term_traversal.m"
}

#line 693 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
#line 693 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 693 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 693 "term_traversal.m"
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
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 705 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 705 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 705 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 705 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
#line 705 "term_traversal.m"
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
#line 705 "term_traversal.m"
  }
#line 693 "term_traversal.m"
}

#line 691 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
#line 691 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 691 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 691 "term_traversal.m"
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
    MR_Word transform_hlds__term_traversal__V_6_6;
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_7_7;
#line 704 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_8_8;
#line 704 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_9_9;
#line 704 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_10_10;

#line 704 "term_traversal.m"
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
#line 704 "term_traversal.m"
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
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
#line 691 "term_traversal.m"
}

#line 689 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
#line 689 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_3,
#line 689 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
#line 689 "term_traversal.m"
{
#line 703 "term_traversal.m"
  {
#line 703 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
#line 703 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_5_5;
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
    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
#line 703 "term_traversal.m"
    transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
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
#line 689 "term_traversal.m"
}

#line 631 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
#line 631 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 631 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_5)
#line 631 "term_traversal.m"
{
#line 634 "term_traversal.m"
  while (MR_TRUE)
#line 634 "term_traversal.m"
    {
#line 634 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 634 "term_traversal.m"
      {
#line 634 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 634 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_3;
#line 634 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_4;

#line 634 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 634 "term_traversal.m"
          {
#line 634 "term_traversal.m"
            transform_hlds__term_traversal__Path_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 634 "term_traversal.m"
            transform_hlds__term_traversal__Paths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 636 "term_traversal.m"
            {
#line 636 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 4)));
#line 636 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 0)));
#line 636 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 1)));
#line 636 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 2)));
#line 636 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 3)));

#line 637 "term_traversal.m"
              {
#line 637 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__Vars_10, transform_hlds__term_traversal__OutVars_5);
              }
#line 636 "term_traversal.m"
            }
#line 638 "term_traversal.m"
            if (!(transform_hlds__term_traversal__succeeded))
#line 639 "term_traversal.m"
              {
#line 639 "term_traversal.m"
                /* direct tailcall eliminated */
#line 639 "term_traversal.m"
                {
#line 639 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths_4;

#line 639 "term_traversal.m"
                  transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 639 "term_traversal.m"
                }
#line 639 "term_traversal.m"
                continue;
#line 639 "term_traversal.m"
              }
#line 634 "term_traversal.m"
          }
#line 634 "term_traversal.m"
        return transform_hlds__term_traversal__succeeded;
#line 634 "term_traversal.m"
      }
#line 634 "term_traversal.m"
      break;
#line 634 "term_traversal.m"
    }
#line 631 "term_traversal.m"
}

#line 610 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_6,
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_7,
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ErrorMsg_8,
#line 610 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 610 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 610 "term_traversal.m"
{
#line 616 "term_traversal.m"
  {
#line 616 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 616 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 617 "term_traversal.m"
      *transform_hlds__term_traversal__Info_10 = transform_hlds__term_traversal__Info0_9;
#line 616 "term_traversal.m"
    else
#line 619 "term_traversal.m"
      {
#line 619 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 619 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 621 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathList_15;

#line 621 "term_traversal.m"
        {
#line 621 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_traversal__Paths_13, &transform_hlds__term_traversal__PathList_15);
        }
#line 622 "term_traversal.m"
        {
#line 622 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(transform_hlds__term_traversal__PathList_15, transform_hlds__term_traversal__OutVars_6);
        }
#line 626 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 624 "term_traversal.m"
          {
#line 624 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorContext_16;
#line 624 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_17_17;

#line 624 "term_traversal.m"
            {
#line 624 "term_traversal.m"
              transform_hlds__term_traversal__ErrorContext_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_16, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorMsg_8));
#line 624 "term_traversal.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_16, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
#line 624 "term_traversal.m"
            }
#line 625 "term_traversal.m"
            {
#line 625 "term_traversal.m"
              transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_16));
#line 625 "term_traversal.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "term_traversal.m"
            }
#line 625 "term_traversal.m"
            {
#line 625 "term_traversal.m"
              MR_Word base;
#line 625 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "term_traversal.m"
              *transform_hlds__term_traversal__Info_10 = base;
#line 625 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
#line 625 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_14));
#line 625 "term_traversal.m"
            }
#line 624 "term_traversal.m"
          }
#line 626 "term_traversal.m"
        else
#line 627 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = transform_hlds__term_traversal__Info0_9;
#line 619 "term_traversal.m"
      }
#line 616 "term_traversal.m"
  }
#line 610 "term_traversal.m"
}

#line 586 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_2,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_3,
#line 586 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
#line 586 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
#line 586 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7)
#line 586 "term_traversal.m"
{
#line 590 "term_traversal.m"
  while (MR_TRUE)
#line 590 "term_traversal.m"
    {
#line 590 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 590 "term_traversal.m"
      {
#line 590 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 590 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "term_traversal.m"
          *transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6;
#line 590 "term_traversal.m"
        else
#line 592 "term_traversal.m"
          {
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ProcData_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 0)));
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Start_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 1)));
#line 592 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Gamma0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 2)));
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PPIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 3)));
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Vars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 4)));
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Path_31;
#line 592 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 594 "term_traversal.m"
            {
#line 594 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__OutVars_3, transform_hlds__term_traversal__Vars0_26);
            }
#line 601 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 596 "term_traversal.m"
              {
#line 596 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__TypeInfo_38_38;
#line 596 "term_traversal.m"
                MR_Integer transform_hlds__term_traversal__Gamma_27 = (transform_hlds__term_traversal__CallGamma_4 + transform_hlds__term_traversal__Gamma0_24);
#line 596 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__PPIds_28;
#line 596 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars1_29;
#line 596 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Vars_30;

#line 597 "term_traversal.m"
                {
#line 597 "term_traversal.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_traversal__CallPPIds_5, transform_hlds__term_traversal__PPIds0_25, &transform_hlds__term_traversal__PPIds_28);
                }
#line 2566 "transform_hlds.term_traversal.c"
                transform_hlds__term_traversal__TypeInfo_38_38 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 598 "term_traversal.m"
                {
#line 598 "term_traversal.m"
                  mercury__bag__subtract_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__Vars0_26, transform_hlds__term_traversal__OutVars_3, &transform_hlds__term_traversal__Vars1_29);
                }
#line 599 "term_traversal.m"
                {
#line 599 "term_traversal.m"
                  mercury__bag__union_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__InVars_2, transform_hlds__term_traversal__Vars1_29, &transform_hlds__term_traversal__Vars_30);
                }
#line 600 "term_traversal.m"
                {
#line 600 "term_traversal.m"
                  transform_hlds__term_traversal__Path_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 600 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 0) = ((MR_Box) (transform_hlds__term_traversal__ProcData_22));
#line 600 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 1) = ((MR_Box) (transform_hlds__term_traversal__Start_23));
#line 600 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 2) = ((MR_Box) (transform_hlds__term_traversal__Gamma_27));
#line 600 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 3) = ((MR_Box) (transform_hlds__term_traversal__PPIds_28));
#line 600 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 4) = ((MR_Box) (transform_hlds__term_traversal__Vars_30));
#line 600 "term_traversal.m"
                }
#line 596 "term_traversal.m"
              }
#line 601 "term_traversal.m"
            else
#line 603 "term_traversal.m"
              transform_hlds__term_traversal__Path_31 = transform_hlds__term_traversal__Path0_15;
#line 605 "term_traversal.m"
            {
#line 605 "term_traversal.m"
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_31)), transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6, &transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34);
            }
#line 606 "term_traversal.m"
            /* direct tailcall eliminated */
#line 606 "term_traversal.m"
            {
#line 606 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths0_16;
#line 606 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

#line 606 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6;
#line 606 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 606 "term_traversal.m"
            }
#line 606 "term_traversal.m"
            continue;
#line 592 "term_traversal.m"
          }
#line 590 "term_traversal.m"
      }
#line 590 "term_traversal.m"
      break;
#line 590 "term_traversal.m"
    }
#line 586 "term_traversal.m"
}

#line 569 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InVars_7,
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVars_8,
#line 569 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__Gamma_9,
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
#line 569 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_11,
#line 569 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_12)
#line 569 "term_traversal.m"
{
#line 575 "term_traversal.m"
  {
#line 575 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 575 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_11)) == (MR_mktag((MR_Integer) 1))))
#line 576 "term_traversal.m"
      *transform_hlds__term_traversal__Info_12 = transform_hlds__term_traversal__Info0_11;
#line 575 "term_traversal.m"
    else
#line 578 "term_traversal.m"
      {
#line 578 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__TypeCtorInfo_20_20 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 578 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 0)));
#line 578 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 1)));
#line 578 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__PathsList0_17;
#line 578 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths0_18;
#line 578 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__NewPaths_19;

#line 579 "term_traversal.m"
        {
#line 579 "term_traversal.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, transform_hlds__term_traversal__Paths0_15, &transform_hlds__term_traversal__PathsList0_17);
        }
#line 580 "term_traversal.m"
        {
#line 580 "term_traversal.m"
          mercury__set__init_1_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, &transform_hlds__term_traversal__NewPaths0_18);
        }
#line 581 "term_traversal.m"
        {
#line 581 "term_traversal.m"
          transform_hlds__term_traversal__record_change_2_7_p_0(transform_hlds__term_traversal__PathsList0_17, transform_hlds__term_traversal__InVars_7, transform_hlds__term_traversal__OutVars_8, transform_hlds__term_traversal__Gamma_9, transform_hlds__term_traversal__CalledPPIds_10, transform_hlds__term_traversal__NewPaths0_18, &transform_hlds__term_traversal__NewPaths_19);
        }
#line 583 "term_traversal.m"
        {
#line 583 "term_traversal.m"
          MR_Word base;
#line 583 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "term_traversal.m"
          *transform_hlds__term_traversal__Info_12 = base;
#line 583 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__NewPaths_19));
#line 583 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_16));
#line 583 "term_traversal.m"
        }
#line 578 "term_traversal.m"
      }
#line 575 "term_traversal.m"
  }
#line 569 "term_traversal.m"
}

#line 545 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
#line 545 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_1,
#line 545 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 545 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
#line 545 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
#line 545 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
#line 545 "term_traversal.m"
{
#line 549 "term_traversal.m"
  {
#line 549 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 549 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "term_traversal.m"
        {
#line 549 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "term_traversal.m"
        }
#line 549 "term_traversal.m"
      else
#line 550 "term_traversal.m"
        {
#line 551 "term_traversal.m"
          {
#line 551 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 551 "term_traversal.m"
            return;
          }
#line 550 "term_traversal.m"
        }
#line 549 "term_traversal.m"
    else
#line 549 "term_traversal.m"
      {
#line 549 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

#line 549 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "term_traversal.m"
          {
#line 553 "term_traversal.m"
            {
#line 553 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
#line 553 "term_traversal.m"
              return;
            }
#line 552 "term_traversal.m"
          }
#line 549 "term_traversal.m"
        else
#line 555 "term_traversal.m"
          {
#line 555 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Mode0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 0)));
#line 555 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Modes0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 1)));
#line 555 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailArgs_30;
#line 555 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TailModes_31;
#line 555 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Type_32;

#line 556 "term_traversal.m"
            {
#line 556 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_33_33, &transform_hlds__term_traversal__TailArgs_30, transform_hlds__term_traversal__Modes0_28, &transform_hlds__term_traversal__TailModes_31);
            }
#line 558 "term_traversal.m"
            {
#line 558 "term_traversal.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_34_34, &transform_hlds__term_traversal__Type_32);
            }
#line 559 "term_traversal.m"
            {
#line 559 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_traversal__Type_32);
            }
#line 562 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 560 "term_traversal.m"
              {
#line 560 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__TailArgs_30;
#line 561 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__5_5 = transform_hlds__term_traversal__TailModes_31;
#line 560 "term_traversal.m"
              }
#line 562 "term_traversal.m"
            else
#line 563 "term_traversal.m"
              {
#line 563 "term_traversal.m"
                {
#line 563 "term_traversal.m"
                  MR_Word base;
#line 563 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__3_3 = base;
#line 563 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_34_34));
#line 563 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailArgs_30));
#line 563 "term_traversal.m"
                }
#line 564 "term_traversal.m"
                {
#line 564 "term_traversal.m"
                  MR_Word base;
#line 564 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "term_traversal.m"
                  *transform_hlds__term_traversal__HeadVar__5_5 = base;
#line 564 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Mode0_27));
#line 564 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailModes_31));
#line 564 "term_traversal.m"
                }
#line 563 "term_traversal.m"
              }
#line 555 "term_traversal.m"
          }
#line 549 "term_traversal.m"
      }
#line 549 "term_traversal.m"
  }
#line 545 "term_traversal.m"
}

#line 521 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutVar_11,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__ConsId_12,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Args0_13,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Modes0_14,
#line 521 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_15,
#line 521 "term_traversal.m"
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
#line 521 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__InVars_17,
#line 521 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__OutVars_18)
#line 521 "term_traversal.m"
{
#line 526 "term_traversal.m"
  {
#line 526 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__FunctorInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 0)));
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 3)));
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Type_21;
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__TypeCtor_24;
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args1_25;
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes1_26;
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Args_27;
#line 526 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__Modes_28;
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 1)));
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 2)));
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 4)));
#line 702 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 5)));
#line 702 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 6)));
#line 702 "term_traversal.m"
    MR_Integer transform_hlds__term_traversal__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 7)));

#line 529 "term_traversal.m"
    {
#line 529 "term_traversal.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__OutVar_11, &transform_hlds__term_traversal__Type_21);
    }
#line 530 "term_traversal.m"
    {
#line 530 "term_traversal.m"
      transform_hlds__term_traversal__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_traversal__Type_21);
    }
#line 530 "term_traversal.m"
    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 526 "term_traversal.m"
    if (transform_hlds__term_traversal__succeeded)
#line 526 "term_traversal.m"
      {
#line 533 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 532 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 533 "term_traversal.m"
        else
#line 533 "term_traversal.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 534 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 533 "term_traversal.m"
        else
#line 533 "term_traversal.m"
          transform_hlds__term_traversal__succeeded = MR_FALSE;
#line 531 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
#line 526 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 526 "term_traversal.m"
          {
#line 537 "term_traversal.m"
            {
#line 537 "term_traversal.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_traversal__Type_21, &transform_hlds__term_traversal__TypeCtor_24);
            }
#line 538 "term_traversal.m"
            {
#line 538 "term_traversal.m"
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__Args0_13, &transform_hlds__term_traversal__Args1_25, transform_hlds__term_traversal__Modes0_14, &transform_hlds__term_traversal__Modes1_26);
            }
#line 540 "term_traversal.m"
            {
#line 540 "term_traversal.m"
              transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__FunctorInfo_19, transform_hlds__term_traversal__TypeCtor_24, transform_hlds__term_traversal__ConsId_12, transform_hlds__term_traversal__Gamma_16, transform_hlds__term_traversal__Args1_25, &transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes1_26, &transform_hlds__term_traversal__Modes_28);
            }
#line 542 "term_traversal.m"
            {
#line 542 "term_traversal.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes_28, transform_hlds__term_traversal__InVars_17, transform_hlds__term_traversal__OutVars_18);
            }
#line 542 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 526 "term_traversal.m"
          }
#line 526 "term_traversal.m"
      }
#line 526 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 526 "term_traversal.m"
  }
#line 521 "term_traversal.m"
}

#line 490 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
#line 490 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 490 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
#line 490 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3)
#line 490 "term_traversal.m"
{
#line 493 "term_traversal.m"
  {
#line 493 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 493 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "term_traversal.m"
      if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "term_traversal.m"
        {
#line 494 "term_traversal.m"
          {
#line 494 "term_traversal.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__HeadVar__3_3);
#line 494 "term_traversal.m"
            return;
          }
#line 493 "term_traversal.m"
        }
#line 493 "term_traversal.m"
      else
#line 497 "term_traversal.m"
        {
#line 498 "term_traversal.m"
          {
#line 498 "term_traversal.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 498 "term_traversal.m"
            return;
          }
#line 497 "term_traversal.m"
        }
#line 493 "term_traversal.m"
    else
#line 493 "term_traversal.m"
      {
#line 493 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));

#line 493 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "term_traversal.m"
          {
#line 496 "term_traversal.m"
            {
#line 496 "term_traversal.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
#line 496 "term_traversal.m"
              return;
            }
#line 495 "term_traversal.m"
          }
#line 493 "term_traversal.m"
        else
#line 500 "term_traversal.m"
          {
#line 500 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSupplier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
#line 500 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__RecInputSuppliers_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
#line 500 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Out1_22;

#line 501 "term_traversal.m"
            {
#line 501 "term_traversal.m"
              transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__V_25_25, transform_hlds__term_traversal__RecInputSuppliers_20, &transform_hlds__term_traversal__Out1_22);
            }
#line 505 "term_traversal.m"
#line 505 "term_traversal.m"
            switch (transform_hlds__term_traversal__RecInputSupplier_19) {
#line 505 "term_traversal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 505 "term_traversal.m"
              case (MR_Integer) 0:
#line 506 "term_traversal.m"
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__Out1_22;
#line 505 "term_traversal.m"
                break;
#line 505 "term_traversal.m"
              case (MR_Integer) 1:
#line 503 "term_traversal.m"
                {
#line 504 "term_traversal.m"
                  {
#line 504 "term_traversal.m"
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__V_26_26)), transform_hlds__term_traversal__Out1_22, transform_hlds__term_traversal__HeadVar__3_3);
#line 504 "term_traversal.m"
                    return;
                  }
#line 503 "term_traversal.m"
                }
#line 505 "term_traversal.m"
                break;
#line 505 "term_traversal.m"
            }
#line 500 "term_traversal.m"
          }
#line 493 "term_traversal.m"
      }
#line 493 "term_traversal.m"
  }
#line 490 "term_traversal.m"
}

#line 444 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
#line 444 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoA_5,
#line 444 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__InfoB_6,
#line 444 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_7,
#line 444 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_8)
#line 444 "term_traversal.m"
{
#line 449 "term_traversal.m"
  {
#line 449 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 449 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoA_5)) == (MR_mktag((MR_Integer) 1))))
#line 449 "term_traversal.m"
      {
#line 449 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 449 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 449 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 449 "term_traversal.m"
          {
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 449 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Errors_14;
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_31_31;
#line 449 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_32_32;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 708 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 452 "term_traversal.m"
            {
#line 452 "term_traversal.m"
              transform_hlds__term_traversal__V_31_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_53_53, transform_hlds__term_traversal__ErrorsB_11);
            }
#line 452 "term_traversal.m"
            {
#line 452 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_31_31, &transform_hlds__term_traversal__Errors_14);
            }
#line 453 "term_traversal.m"
            {
#line 453 "term_traversal.m"
              transform_hlds__term_traversal__V_32_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_12);
            }
#line 453 "term_traversal.m"
            {
#line 453 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_32_32, &transform_hlds__term_traversal__CanLoop_15);
            }
#line 454 "term_traversal.m"
            {
#line 454 "term_traversal.m"
              MR_Word base;
#line 454 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 454 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_14));
#line 454 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 454 "term_traversal.m"
            }
#line 449 "term_traversal.m"
          }
#line 449 "term_traversal.m"
        else
#line 456 "term_traversal.m"
          {
#line 456 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 456 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_30_30;
#line 456 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 456 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 456 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_37;
#line 457 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 708 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 459 "term_traversal.m"
            {
#line 459 "term_traversal.m"
              transform_hlds__term_traversal__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_35);
            }
#line 459 "term_traversal.m"
            {
#line 459 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__MaxErrors_36, transform_hlds__term_traversal__V_30_30, &transform_hlds__term_traversal__CanLoop_37);
            }
#line 460 "term_traversal.m"
            {
#line 460 "term_traversal.m"
              MR_Word base;
#line 460 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 460 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_53_53));
#line 460 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_37));
#line 460 "term_traversal.m"
            }
#line 456 "term_traversal.m"
          }
#line 449 "term_traversal.m"
      }
#line 449 "term_traversal.m"
    else
#line 449 "term_traversal.m"
      {
#line 449 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
#line 449 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

#line 449 "term_traversal.m"
        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
#line 462 "term_traversal.m"
          {
#line 462 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 462 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_29_29;
#line 462 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__ErrorsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 462 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 462 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 462 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_42;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 708 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

#line 465 "term_traversal.m"
            {
#line 465 "term_traversal.m"
              transform_hlds__term_traversal__V_29_29 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_40);
            }
#line 465 "term_traversal.m"
            {
#line 465 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__MaxErrors_41, transform_hlds__term_traversal__V_29_29, &transform_hlds__term_traversal__CanLoop_42);
            }
#line 466 "term_traversal.m"
            {
#line 466 "term_traversal.m"
              MR_Word base;
#line 466 "term_traversal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "term_traversal.m"
              *transform_hlds__term_traversal__Info_8 = base;
#line 466 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorsB_39));
#line 466 "term_traversal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_42));
#line 466 "term_traversal.m"
            }
#line 462 "term_traversal.m"
          }
#line 449 "term_traversal.m"
        else
#line 468 "term_traversal.m"
          {
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_51_51;
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__PathsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Paths_20;
#line 468 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxPaths_21;
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_25_25;
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoopB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
#line 468 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__MaxErrors_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 468 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__CanLoop_46;
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 708 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 708 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 709 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_89_89;
#line 709 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_90_90;
#line 709 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_91_91;
#line 709 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_92_92;
#line 709 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_93_93;
#line 709 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__V_94_94;
#line 709 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__V_95_95;
#line 477 "term_traversal.m"
            MR_Integer transform_hlds__term_traversal__Count_22;

#line 471 "term_traversal.m"
            {
#line 471 "term_traversal.m"
              transform_hlds__term_traversal__V_25_25 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_44);
            }
#line 471 "term_traversal.m"
            {
#line 471 "term_traversal.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__MaxErrors_45, transform_hlds__term_traversal__V_25_25, &transform_hlds__term_traversal__CanLoop_46);
            }
#line 3392 "transform_hlds.term_traversal.c"
            transform_hlds__term_traversal__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 472 "term_traversal.m"
            {
#line 472 "term_traversal.m"
              mercury__set__union_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__PathsB_19, transform_hlds__term_traversal__V_55_55, &transform_hlds__term_traversal__Paths_20);
            }
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
#line 709 "term_traversal.m"
            transform_hlds__term_traversal__MaxPaths_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
#line 477 "term_traversal.m"
            {
#line 477 "term_traversal.m"
              mercury__set__count_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__Paths_20, &transform_hlds__term_traversal__Count_22);
            }
#line 478 "term_traversal.m"
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__Count_22 <= transform_hlds__term_traversal__MaxPaths_21);
#line 481 "term_traversal.m"
            if (transform_hlds__term_traversal__succeeded)
#line 480 "term_traversal.m"
              {
#line 480 "term_traversal.m"
                MR_Word base;
#line 480 "term_traversal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "term_traversal.m"
                *transform_hlds__term_traversal__Info_8 = base;
#line 480 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_20));
#line 480 "term_traversal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 480 "term_traversal.m"
              }
#line 481 "term_traversal.m"
            else
#line 482 "term_traversal.m"
              {
#line 482 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Context_23;
#line 482 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__ErrorContext_24;
#line 482 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__V_27_27;

#line 482 "term_traversal.m"
                {
#line 482 "term_traversal.m"
                  transform_hlds__term_traversal__params_get_context_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Context_23);
                }
#line 483 "term_traversal.m"
                {
#line 483 "term_traversal.m"
                  transform_hlds__term_traversal__ErrorContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 483 "term_traversal.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_24, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_23));
#line 483 "term_traversal.m"
                }
#line 484 "term_traversal.m"
                {
#line 484 "term_traversal.m"
                  transform_hlds__term_traversal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_24));
#line 484 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "term_traversal.m"
                }
#line 484 "term_traversal.m"
                {
#line 484 "term_traversal.m"
                  MR_Word base;
#line 484 "term_traversal.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "term_traversal.m"
                  *transform_hlds__term_traversal__Info_8 = base;
#line 484 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_27_27));
#line 484 "term_traversal.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
#line 484 "term_traversal.m"
                }
#line 482 "term_traversal.m"
              }
#line 468 "term_traversal.m"
          }
#line 449 "term_traversal.m"
      }
#line 449 "term_traversal.m"
  }
#line 444 "term_traversal.m"
}

#line 425 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 425 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 425 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 425 "term_traversal.m"
{
#line 431 "term_traversal.m"
  {
#line 431 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 431 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 431 "term_traversal.m"
      {
#line 431 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 431 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 431 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_13;
#line 431 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 431 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_15;
#line 431 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_30_30;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_31_31;
#line 708 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_32_32;

#line 432 "term_traversal.m"
        {
#line 432 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 432 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 432 "term_traversal.m"
        }
#line 432 "term_traversal.m"
        {
#line 432 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 432 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_12));
#line 432 "term_traversal.m"
        }
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 434 "term_traversal.m"
        {
#line 434 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__CanLoop1_13, &transform_hlds__term_traversal__CanLoop_15);
        }
#line 435 "term_traversal.m"
        {
#line 435 "term_traversal.m"
          MR_Word base;
#line 435 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 435 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_11));
#line 435 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
#line 435 "term_traversal.m"
        }
#line 431 "term_traversal.m"
      }
#line 431 "term_traversal.m"
    else
#line 437 "term_traversal.m"
      {
#line 437 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 437 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17;
#line 437 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 437 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop1_20;
#line 437 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_21;
#line 437 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_22;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_34_34;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_35_35;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_36_36;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_37_37;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_38_38;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_39_39;
#line 708 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_40_40;

#line 438 "term_traversal.m"
        {
#line 438 "term_traversal.m"
          transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 438 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 438 "term_traversal.m"
        }
#line 438 "term_traversal.m"
        {
#line 438 "term_traversal.m"
          transform_hlds__term_traversal__CanLoop1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
#line 438 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_19));
#line 438 "term_traversal.m"
        }
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 440 "term_traversal.m"
        {
#line 440 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_traversal__MaxErrors_21, transform_hlds__term_traversal__CanLoop1_20, &transform_hlds__term_traversal__CanLoop_22);
        }
#line 441 "term_traversal.m"
        {
#line 441 "term_traversal.m"
          MR_Word base;
#line 441 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 441 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_16));
#line 441 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_22));
#line 441 "term_traversal.m"
        }
#line 437 "term_traversal.m"
      }
#line 431 "term_traversal.m"
  }
#line 425 "term_traversal.m"
}

#line 408 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_6,
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Error_7,
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_8,
#line 408 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_9,
#line 408 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_10)
#line 408 "term_traversal.m"
{
#line 414 "term_traversal.m"
  {
#line 414 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 414 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
#line 414 "term_traversal.m"
      {
#line 414 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
#line 414 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 414 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors1_13;
#line 414 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
#line 414 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Errors_15;
#line 414 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_24_24;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_25_25;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_26_26;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_27_27;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_28_28;
#line 708 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_29_29;
#line 708 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_30_30;

#line 415 "term_traversal.m"
        {
#line 415 "term_traversal.m"
          transform_hlds__term_traversal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 415 "term_traversal.m"
        }
#line 415 "term_traversal.m"
        {
#line 415 "term_traversal.m"
          transform_hlds__term_traversal__Errors1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_20_20));
#line 415 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__Errors0_11));
#line 415 "term_traversal.m"
        }
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
#line 708 "term_traversal.m"
        transform_hlds__term_traversal__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
#line 417 "term_traversal.m"
        {
#line 417 "term_traversal.m"
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__Errors1_13, &transform_hlds__term_traversal__Errors_15);
        }
#line 418 "term_traversal.m"
        {
#line 418 "term_traversal.m"
          MR_Word base;
#line 418 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 418 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_15));
#line 418 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_12));
#line 418 "term_traversal.m"
        }
#line 414 "term_traversal.m"
      }
#line 414 "term_traversal.m"
    else
#line 420 "term_traversal.m"
      {
#line 420 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ErrorContext_17;
#line 420 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_18_18;
#line 420 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
#line 420 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));

#line 421 "term_traversal.m"
        {
#line 421 "term_traversal.m"
          transform_hlds__term_traversal__ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_7));
#line 421 "term_traversal.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
#line 421 "term_traversal.m"
        }
#line 422 "term_traversal.m"
        {
#line 422 "term_traversal.m"
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_17));
#line 422 "term_traversal.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "term_traversal.m"
        }
#line 422 "term_traversal.m"
        {
#line 422 "term_traversal.m"
          MR_Word base;
#line 422 "term_traversal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_traversal.m"
          *transform_hlds__term_traversal__Info_10 = base;
#line 422 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
#line 422 "term_traversal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_21));
#line 422 "term_traversal.m"
        }
#line 420 "term_traversal.m"
      }
#line 414 "term_traversal.m"
  }
#line 408 "term_traversal.m"
}

#line 395 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
#line 395 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Path_4,
#line 395 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_5,
#line 395 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_6)
#line 395 "term_traversal.m"
{
#line 400 "term_traversal.m"
  {
#line 400 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 400 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_5)) == (MR_mktag((MR_Integer) 1))))
#line 401 "term_traversal.m"
      *transform_hlds__term_traversal__Info_6 = transform_hlds__term_traversal__Info0_5;
#line 400 "term_traversal.m"
    else
#line 403 "term_traversal.m"
      {
#line 403 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 0)));
#line 403 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 1)));
#line 403 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_11;

#line 404 "term_traversal.m"
        {
#line 404 "term_traversal.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_4)), transform_hlds__term_traversal__Paths0_9, &transform_hlds__term_traversal__Paths_11);
        }
#line 405 "term_traversal.m"
        {
#line 405 "term_traversal.m"
          MR_Word base;
#line 405 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "term_traversal.m"
          *transform_hlds__term_traversal__Info_6 = base;
#line 405 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_11));
#line 405 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_10));
#line 405 "term_traversal.m"
        }
#line 403 "term_traversal.m"
      }
#line 400 "term_traversal.m"
  }
#line 395 "term_traversal.m"
}

#line 383 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
#line 383 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Info0_3,
#line 383 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Info_4)
#line 383 "term_traversal.m"
{
#line 388 "term_traversal.m"
  {
#line 388 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 388 "term_traversal.m"
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_3)) == (MR_mktag((MR_Integer) 1))))
#line 389 "term_traversal.m"
      *transform_hlds__term_traversal__Info_4 = transform_hlds__term_traversal__Info0_3;
#line 388 "term_traversal.m"
    else
#line 391 "term_traversal.m"
      {
#line 391 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CanLoop_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 1)));
#line 391 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 391 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 0)));

#line 392 "term_traversal.m"
        {
#line 392 "term_traversal.m"
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
#line 392 "term_traversal.m"
        {
#line 392 "term_traversal.m"
          MR_Word base;
#line 392 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "term_traversal.m"
          *transform_hlds__term_traversal__Info_4 = base;
#line 392 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
#line 392 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_8));
#line 392 "term_traversal.m"
        }
#line 391 "term_traversal.m"
      }
#line 388 "term_traversal.m"
  }
#line 383 "term_traversal.m"
}

#line 368 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_8_p_0(
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 368 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 368 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 368 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6)
#line 368 "term_traversal.m"
{
#line 373 "term_traversal.m"
  {
#line 373 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 373 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "term_traversal.m"
      {
#line 373 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Empty_11;

#line 374 "term_traversal.m"
        {
#line 374 "term_traversal.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, &transform_hlds__term_traversal__Empty_11);
        }
#line 372 "term_traversal.m"
        {
#line 372 "term_traversal.m"
          MR_Word base;
#line 372 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__4_4 = base;
#line 372 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Empty_11));
#line 372 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "term_traversal.m"
        }
#line 373 "term_traversal.m"
        *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5;
#line 373 "term_traversal.m"
      }
#line 373 "term_traversal.m"
    else
#line 376 "term_traversal.m"
      {
#line 376 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_21;
#line 376 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 376 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_27;
#line 376 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__CasesInfo_28;
#line 376 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_36_36;
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_35_35, (MR_Integer) 0)));
#line 375 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_35_35, (MR_Integer) 1)));

#line 375 "term_traversal.m"
        transform_hlds__term_traversal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_35_35, (MR_Integer) 2)));
#line 377 "term_traversal.m"
        {
#line 377 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Goal_21, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__GoalInfo_27, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_36_36);
        }
#line 378 "term_traversal.m"
        {
#line 378 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_switch_8_p_0(transform_hlds__term_traversal__Cases_22, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__CasesInfo_28, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_36_36, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);
        }
#line 379 "term_traversal.m"
        {
#line 379 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_27, transform_hlds__term_traversal__CasesInfo_28, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__4_4);
#line 379 "term_traversal.m"
          return;
        }
#line 376 "term_traversal.m"
      }
#line 373 "term_traversal.m"
  }
#line 368 "term_traversal.m"
}

#line 357 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_8_p_0(
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 357 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__HeadVar__4_4,
#line 357 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 357 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6)
#line 357 "term_traversal.m"
{
#line 361 "term_traversal.m"
  {
#line 361 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 361 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "term_traversal.m"
      {
#line 361 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Empty_11;

#line 362 "term_traversal.m"
        {
#line 362 "term_traversal.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, &transform_hlds__term_traversal__Empty_11);
        }
#line 361 "term_traversal.m"
        {
#line 361 "term_traversal.m"
          MR_Word base;
#line 361 "term_traversal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "term_traversal.m"
          *transform_hlds__term_traversal__HeadVar__4_4 = base;
#line 361 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Empty_11));
#line 361 "term_traversal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "term_traversal.m"
        }
#line 361 "term_traversal.m"
        *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5;
#line 361 "term_traversal.m"
      }
#line 361 "term_traversal.m"
    else
#line 363 "term_traversal.m"
      {
#line 363 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 363 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 363 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_25;
#line 363 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalsInfo_26;
#line 363 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_33_33;

#line 364 "term_traversal.m"
        {
#line 364 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Goal_19, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__GoalInfo_25, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_33_33);
        }
#line 365 "term_traversal.m"
        {
#line 365 "term_traversal.m"
          transform_hlds__term_traversal__term_traverse_disj_8_p_0(transform_hlds__term_traversal__Goals_20, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__GoalsInfo_26, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6);
        }
#line 366 "term_traversal.m"
        {
#line 366 "term_traversal.m"
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_25, transform_hlds__term_traversal__GoalsInfo_26, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__4_4);
#line 366 "term_traversal.m"
          return;
        }
#line 363 "term_traversal.m"
      }
#line 361 "term_traversal.m"
  }
#line 357 "term_traversal.m"
}

#line 348 "term_traversal.m"
static void MR_CALL 
transform_hlds__term_traversal__term_traverse_conj_8_p_0(
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_2,
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3,
#line 348 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_4,
#line 348 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5,
#line 348 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6)
#line 348 "term_traversal.m"
{
#line 352 "term_traversal.m"
  while (MR_TRUE)
#line 352 "term_traversal.m"
    {
#line 352 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 352 "term_traversal.m"
      {
#line 352 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;

#line 352 "term_traversal.m"
        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "term_traversal.m"
          {
#line 352 "term_traversal.m"
            *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_6 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5;
#line 352 "term_traversal.m"
            *transform_hlds__term_traversal__STATE_VARIABLE_Info_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3;
#line 352 "term_traversal.m"
          }
#line 352 "term_traversal.m"
        else
#line 353 "term_traversal.m"
          {
#line 353 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 353 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_31_31;
#line 353 "term_traversal.m"
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_32_32;

#line 354 "term_traversal.m"
            {
#line 354 "term_traversal.m"
              transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Goal_19, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3, &transform_hlds__term_traversal__STATE_VARIABLE_Info_31_31, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 355 "term_traversal.m"
            /* direct tailcall eliminated */
#line 355 "term_traversal.m"
            {
#line 355 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Goals_20;
#line 355 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_3 = transform_hlds__term_traversal__STATE_VARIABLE_Info_31_31;
#line 355 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_32_32;

#line 355 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_5 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 355 "term_traversal.m"
              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_3 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 355 "term_traversal.m"
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
#line 355 "term_traversal.m"
            }
#line 355 "term_traversal.m"
            continue;
#line 353 "term_traversal.m"
          }
#line 352 "term_traversal.m"
      }
#line 352 "term_traversal.m"
      break;
#line 352 "term_traversal.m"
    }
#line 348 "term_traversal.m"
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
#line 644 "term_traversal.m"
  {
#line 644 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 644 "term_traversal.m"
    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "term_traversal.m"
      {
#line 645 "term_traversal.m"
        {
#line 645 "term_traversal.m"
          mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars_2);
#line 645 "term_traversal.m"
          return;
        }
#line 644 "term_traversal.m"
      }
#line 644 "term_traversal.m"
    else
#line 646 "term_traversal.m"
      {
#line 646 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Path_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
#line 646 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Paths_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars1_7;
#line 646 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__ActiveVars2_12;
#line 648 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_8_8;
#line 648 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_9_9;
#line 648 "term_traversal.m"
        MR_Integer transform_hlds__term_traversal__V_10_10;
#line 648 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_11_11;

#line 647 "term_traversal.m"
        {
#line 647 "term_traversal.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_traversal__Paths_5, &transform_hlds__term_traversal__ActiveVars1_7);
        }
#line 648 "term_traversal.m"
        transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 0)));
#line 648 "term_traversal.m"
        transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 1)));
#line 648 "term_traversal.m"
        transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 2)));
#line 648 "term_traversal.m"
        transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 3)));
#line 648 "term_traversal.m"
        transform_hlds__term_traversal__ActiveVars2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 4)));
#line 649 "term_traversal.m"
        {
#line 649 "term_traversal.m"
          mercury__bag__least_upper_bound_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars1_7, transform_hlds__term_traversal__ActiveVars2_12, transform_hlds__term_traversal__ActiveVars_2);
#line 649 "term_traversal.m"
          return;
        }
#line 646 "term_traversal.m"
      }
#line 644 "term_traversal.m"
  }
#line 104 "term_traversal.m"
}

#line 279 "term_traversal.m"
static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_2(
#line 279 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 279 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
#line 279 "term_traversal.m"
{
#line 279 "term_traversal.m"
  {
#line 279 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;
#line 279 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;

#line 279 "term_traversal.m"
    {
#line 279 "term_traversal.m"
      return transform_hlds__term_traversal__succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 279 "term_traversal.m"
    return transform_hlds__term_traversal__succeeded;
#line 279 "term_traversal.m"
  }
#line 279 "term_traversal.m"
}

#line 248 "term_traversal.m"
static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0_1(
#line 248 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__closure_arg,
#line 248 "term_traversal.m"
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
#line 248 "term_traversal.m"
{
#line 248 "term_traversal.m"
  {
#line 248 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__wrapper_arg_2;
#line 248 "term_traversal.m"
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;
#line 248 "term_traversal.m"
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__2_2;

#line 248 "term_traversal.m"
    {
#line 248 "term_traversal.m"
      transform_hlds__term_traversal__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
#line 248 "term_traversal.m"
    transform_hlds__term_traversal__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__2_2));
#line 248 "term_traversal.m"
    return transform_hlds__term_traversal__wrapper_arg_2;
#line 248 "term_traversal.m"
  }
#line 248 "term_traversal.m"
}

#line 100 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_8_p_0(
#line 100 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Goal_9,
#line 100 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Params_10,
#line 100 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114,
#line 100 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_115,
#line 100 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116,
#line 100 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117)
#line 100 "term_traversal.m"
{
#line 122 "term_traversal.m"
  while (MR_TRUE)
#line 122 "term_traversal.m"
    {
#line 122 "term_traversal.m"
      /* tailcall optimized into a loop */
#line 122 "term_traversal.m"
      {
#line 122 "term_traversal.m"
        MR_bool transform_hlds__term_traversal__succeeded;
#line 122 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_9, (MR_Integer) 0)));
#line 122 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_9, (MR_Integer) 1)));
#line 122 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 125 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__Detism_16;
#line 125 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_266_266;
#line 126 "term_traversal.m"
        MR_Word transform_hlds__term_traversal__V_17_17;

#line 125 "term_traversal.m"
        {
#line 125 "term_traversal.m"
          transform_hlds__term_traversal__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
        }
#line 126 "term_traversal.m"
        {
#line 126 "term_traversal.m"
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__term_traversal__Detism_16, &transform_hlds__term_traversal__V_17_17, &transform_hlds__term_traversal__V_266_266);
        }
#line 126 "term_traversal.m"
        transform_hlds__term_traversal__succeeded = ((MR_Integer) 0 == transform_hlds__term_traversal__V_266_266);
#line 129 "term_traversal.m"
        if (transform_hlds__term_traversal__succeeded)
#line 128 "term_traversal.m"
          {
#line 128 "term_traversal.m"
            transform_hlds__term_traversal__cannot_succeed_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114, &transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121);
          }
#line 129 "term_traversal.m"
        else
#line 129 "term_traversal.m"
          transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114;
#line 171 "term_traversal.m"
#line 171 "term_traversal.m"
        switch (MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_14)) {
#line 171 "term_traversal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 171 "term_traversal.m"
          case (MR_Integer) 0:
#line 326 "term_traversal.m"
            {
#line 326 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__SubGoal_111 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_traversal__GoalExpr_14), (MR_Integer) 0);

#line 331 "term_traversal.m"
              /* direct tailcall eliminated */
#line 331 "term_traversal.m"
              {
#line 331 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__Goal__tmp_copy_9 = transform_hlds__term_traversal__SubGoal_111;
#line 331 "term_traversal.m"
                MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;

#line 331 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114;
#line 331 "term_traversal.m"
                transform_hlds__term_traversal__Goal_9 = transform_hlds__term_traversal__Goal__tmp_copy_9;
#line 331 "term_traversal.m"
              }
#line 331 "term_traversal.m"
              continue;
#line 326 "term_traversal.m"
            }
#line 171 "term_traversal.m"
            break;
#line 171 "term_traversal.m"
          case (MR_Integer) 1:
#line 133 "term_traversal.m"
            {
#line 133 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Unification_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 133 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)));
#line 133 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 133 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___UniMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 133 "term_traversal.m"
              MR_Word transform_hlds__term_traversal___Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));

#line 147 "term_traversal.m"
#line 147 "term_traversal.m"
              switch (MR_tag((MR_Word) transform_hlds__term_traversal__Unification_21)) {
#line 147 "term_traversal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "term_traversal.m"
                case (MR_Integer) 0:
#line 135 "term_traversal.m"
                  {
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)));
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 1)));
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 2)));
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 3)));
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 4)));
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 5)));
#line 135 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_21, (MR_Integer) 6)));
#line 142 "term_traversal.m"
                    MR_Integer transform_hlds__term_traversal__Gamma_30;
#line 142 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_31;
#line 142 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars0_32;

#line 137 "term_traversal.m"
                    {
#line 137 "term_traversal.m"
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__OutVar_23, transform_hlds__term_traversal__ConsId_24, transform_hlds__term_traversal__Args_25, transform_hlds__term_traversal__Modes_26, transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__Gamma_30, &transform_hlds__term_traversal__InVars_31, &transform_hlds__term_traversal__OutVars0_32);
                    }
#line 142 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 140 "term_traversal.m"
                      {
#line 140 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__OutVars_33;

#line 140 "term_traversal.m"
                        {
#line 140 "term_traversal.m"
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__OutVar_23)), transform_hlds__term_traversal__OutVars0_32, &transform_hlds__term_traversal__OutVars_33);
                        }
#line 141 "term_traversal.m"
                        {
#line 141 "term_traversal.m"
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_31, transform_hlds__term_traversal__OutVars_33, transform_hlds__term_traversal__Gamma_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                        }
#line 140 "term_traversal.m"
                      }
#line 142 "term_traversal.m"
                    else
#line 142 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 135 "term_traversal.m"
                  }
#line 147 "term_traversal.m"
                  break;
#line 147 "term_traversal.m"
                case (MR_Integer) 1:
#line 148 "term_traversal.m"
                  {
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)));
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__ConsId_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 1)));
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Args_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 2)));
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Modes_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 3)));
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 4)));
#line 148 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_21, (MR_Integer) 5)));
#line 156 "term_traversal.m"
                    MR_Integer transform_hlds__term_traversal__Gamma0_37;
#line 156 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars0_38;
#line 156 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_201;

#line 150 "term_traversal.m"
                    {
#line 150 "term_traversal.m"
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__InVar_34, transform_hlds__term_traversal__ConsId_202, transform_hlds__term_traversal__Args_203, transform_hlds__term_traversal__Modes_204, transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__Gamma0_37, &transform_hlds__term_traversal__InVars0_38, &transform_hlds__term_traversal__OutVars_201);
                    }
#line 156 "term_traversal.m"
                    if (transform_hlds__term_traversal__succeeded)
#line 153 "term_traversal.m"
                      {
#line 153 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__Gamma_197;
#line 153 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__InVars_198;

#line 153 "term_traversal.m"
                        {
#line 153 "term_traversal.m"
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__InVar_34)), transform_hlds__term_traversal__InVars0_38, &transform_hlds__term_traversal__InVars_198);
                        }
#line 154 "term_traversal.m"
                        transform_hlds__term_traversal__Gamma_197 = ((MR_Integer) 0 - transform_hlds__term_traversal__Gamma0_37);
#line 155 "term_traversal.m"
                        {
#line 155 "term_traversal.m"
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_198, transform_hlds__term_traversal__OutVars_201, transform_hlds__term_traversal__Gamma_197, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                        }
#line 153 "term_traversal.m"
                      }
#line 156 "term_traversal.m"
                    else
#line 157 "term_traversal.m"
                      {
#line 157 "term_traversal.m"
                        {
#line 157 "term_traversal.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/8", (MR_String) "higher order deconstruction");
#line 157 "term_traversal.m"
                          return;
                        }
#line 157 "term_traversal.m"
                      }
#line 148 "term_traversal.m"
                  }
#line 147 "term_traversal.m"
                  break;
#line 147 "term_traversal.m"
                case (MR_Integer) 2:
#line 160 "term_traversal.m"
                  {
#line 160 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__TypeInfo_252_252 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
#line 160 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Empty_39;
#line 160 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVar_208 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)));
#line 160 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVars_209;
#line 160 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__OutVars_210;
#line 160 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__InVar_211 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_21, (MR_Integer) 1)));

#line 161 "term_traversal.m"
                    {
#line 161 "term_traversal.m"
                      mercury__bag__init_1_p_0(transform_hlds__term_traversal__TypeInfo_252_252, &transform_hlds__term_traversal__Empty_39);
                    }
#line 162 "term_traversal.m"
                    {
#line 162 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_252_252, ((MR_Box) (transform_hlds__term_traversal__InVar_211)), transform_hlds__term_traversal__Empty_39, &transform_hlds__term_traversal__InVars_209);
                    }
#line 163 "term_traversal.m"
                    {
#line 163 "term_traversal.m"
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_252_252, ((MR_Box) (transform_hlds__term_traversal__OutVar_208)), transform_hlds__term_traversal__Empty_39, &transform_hlds__term_traversal__OutVars_210);
                    }
#line 164 "term_traversal.m"
                    {
#line 164 "term_traversal.m"
                      transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_209, transform_hlds__term_traversal__OutVars_210, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                    }
#line 160 "term_traversal.m"
                  }
#line 147 "term_traversal.m"
                  break;
#line 147 "term_traversal.m"
                case (MR_Integer) 3:
#line 147 "term_traversal.m"
#line 147 "term_traversal.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Unification_21, (MR_Integer) 0)))) {
#line 147 "term_traversal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "term_traversal.m"
                    case (MR_Integer) 0:
#line 166 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 147 "term_traversal.m"
                      break;
#line 147 "term_traversal.m"
                    case (MR_Integer) 1:
#line 168 "term_traversal.m"
                      {
#line 169 "term_traversal.m"
                        {
#line 169 "term_traversal.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/8", (MR_String) "complicated unify");
#line 169 "term_traversal.m"
                          return;
                        }
#line 168 "term_traversal.m"
                      }
#line 147 "term_traversal.m"
                      break;
#line 147 "term_traversal.m"
                  }
#line 147 "term_traversal.m"
                  break;
#line 147 "term_traversal.m"
              }
#line 133 "term_traversal.m"
              *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 133 "term_traversal.m"
            }
#line 171 "term_traversal.m"
            break;
#line 171 "term_traversal.m"
          case (MR_Integer) 2:
#line 172 "term_traversal.m"
            {
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)));
#line 172 "term_traversal.m"
              MR_Integer transform_hlds__term_traversal__CallProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Context_50;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__PPId_51;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallPPId_52;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallProcInfo_54;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgModes_55;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallArgSizeInfo_56;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__CallTerminationInfo_57;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__Args_214 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__InVars_215;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__OutVars_216;
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 172 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 5)));
#line 177 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_53_53;
#line 208 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_174_174;
#line 208 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__V_63_63;
#line 219 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__VarTypes_64;
#line 239 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliers_66;
#line 229 "term_traversal.m"
              MR_Word transform_hlds__term_traversal__RecInputSuppliersMap_65;
#line 230 "term_traversal.m"
              MR_Box transform_hlds__term_traversal__conv3_RecInputSuppliers_66;

#line 173 "term_traversal.m"
              {
#line 173 "term_traversal.m"
                transform_hlds__term_traversal__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
              }
#line 174 "term_traversal.m"
              {
#line 174 "term_traversal.m"
                transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__PPId_51);
              }
#line 175 "term_traversal.m"
              {
#line 175 "term_traversal.m"
                transform_hlds__term_traversal__CallPPId_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 175 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_52, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_45));
#line 175 "term_traversal.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_52, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_46));
#line 175 "term_traversal.m"
              }
#line 177 "term_traversal.m"
              {
#line 177 "term_traversal.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallPredId_45, transform_hlds__term_traversal__CallProcId_46, &transform_hlds__term_traversal__V_53_53, &transform_hlds__term_traversal__CallProcInfo_54);
              }
#line 179 "term_traversal.m"
              {
#line 179 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_54, &transform_hlds__term_traversal__CallArgModes_55);
              }
#line 181 "term_traversal.m"
              {
#line 181 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_54, &transform_hlds__term_traversal__CallArgSizeInfo_56);
              }
#line 182 "term_traversal.m"
              {
#line 182 "term_traversal.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_54, &transform_hlds__term_traversal__CallTerminationInfo_57);
              }
#line 185 "term_traversal.m"
              {
#line 185 "term_traversal.m"
                transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallArgModes_55, transform_hlds__term_traversal__Args_214, &transform_hlds__term_traversal__InVars_215, &transform_hlds__term_traversal__OutVars_216);
              }
#line 192 "term_traversal.m"
              if ((transform_hlds__term_traversal__CallArgSizeInfo_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "term_traversal.m"
                {
#line 197 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliersMap_62;
#line 197 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_165_165;
#line 197 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutputSuppliers_212;
#line 197 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__UsedInVars_213;
#line 202 "term_traversal.m"
                  MR_Box transform_hlds__term_traversal__conv2_OutputSuppliers_212;

#line 201 "term_traversal.m"
                  {
#line 201 "term_traversal.m"
                    transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__OutputSuppliersMap_62);
                  }
#line 202 "term_traversal.m"
                  {
#line 202 "term_traversal.m"
                    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__OutputSuppliersMap_62, ((MR_Box) (transform_hlds__term_traversal__CallPPId_52)), &transform_hlds__term_traversal__conv2_OutputSuppliers_212);
                  }
#line 202 "term_traversal.m"
                  transform_hlds__term_traversal__OutputSuppliers_212 = ((MR_Word) transform_hlds__term_traversal__conv2_OutputSuppliers_212);
#line 203 "term_traversal.m"
                  {
#line 203 "term_traversal.m"
                    transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_215, transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__OutputSuppliers_212, &transform_hlds__term_traversal__UsedInVars_213);
                  }
#line 204 "term_traversal.m"
                  {
#line 204 "term_traversal.m"
                    transform_hlds__term_traversal__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_165_165, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 204 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "term_traversal.m"
                  }
#line 204 "term_traversal.m"
                  {
#line 204 "term_traversal.m"
                    transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_213, transform_hlds__term_traversal__OutVars_216, (MR_Integer) 0, transform_hlds__term_traversal__V_165_165, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173);
                  }
#line 197 "term_traversal.m"
                }
#line 192 "term_traversal.m"
              else
#line 192 "term_traversal.m"
                {
#line 192 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallArgSizeInfo_56, (MR_Integer) 0)));

#line 192 "term_traversal.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_traversal__V_267_267)) == (MR_mktag((MR_Integer) 0))))
#line 189 "term_traversal.m"
                    {
#line 189 "term_traversal.m"
                      MR_Integer transform_hlds__term_traversal__CallGamma_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_267_267, (MR_Integer) 0)));
#line 189 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__OutputSuppliers_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_267_267, (MR_Integer) 1)));
#line 189 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__UsedInVars_60;

#line 190 "term_traversal.m"
                      {
#line 190 "term_traversal.m"
                        transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_215, transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__OutputSuppliers_59, &transform_hlds__term_traversal__UsedInVars_60);
                      }
#line 191 "term_traversal.m"
                      {
#line 191 "term_traversal.m"
                        transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_60, transform_hlds__term_traversal__OutVars_216, transform_hlds__term_traversal__CallGamma_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173);
                      }
#line 189 "term_traversal.m"
                    }
#line 192 "term_traversal.m"
                  else
#line 193 "term_traversal.m"
                    {
#line 193 "term_traversal.m"
                      MR_Word transform_hlds__term_traversal__V_169_169;

#line 195 "term_traversal.m"
                      {
#line 195 "term_traversal.m"
                        transform_hlds__term_traversal__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 195 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 195 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_169_169, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 195 "term_traversal.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_169_169, 2) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 195 "term_traversal.m"
                      }
#line 194 "term_traversal.m"
                      {
#line 194 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_216, transform_hlds__term_traversal__Context_50, transform_hlds__term_traversal__V_169_169, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173);
                      }
#line 193 "term_traversal.m"
                    }
#line 192 "term_traversal.m"
                }
#line 208 "term_traversal.m"
              transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__CallTerminationInfo_57)) == (MR_mktag((MR_Integer) 1)));
#line 208 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 208 "term_traversal.m"
                {
#line 208 "term_traversal.m"
                  transform_hlds__term_traversal__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallTerminationInfo_57, (MR_Integer) 0)));
#line 208 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__V_174_174)) == (MR_mktag((MR_Integer) 1)));
#line 208 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 208 "term_traversal.m"
                    transform_hlds__term_traversal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_174_174, (MR_Integer) 0)));
#line 208 "term_traversal.m"
                }
#line 211 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 209 "term_traversal.m"
                {
#line 209 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_175_175;

#line 209 "term_traversal.m"
                  {
#line 209 "term_traversal.m"
                    transform_hlds__term_traversal__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_175_175, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 209 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_175_175, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 209 "term_traversal.m"
                  }
#line 209 "term_traversal.m"
                  {
#line 209 "term_traversal.m"
                    transform_hlds__term_traversal__called_can_loop_5_p_0(transform_hlds__term_traversal__Context_50, transform_hlds__term_traversal__V_175_175, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173, &transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176);
                  }
#line 209 "term_traversal.m"
                }
#line 211 "term_traversal.m"
              else
#line 211 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176 = transform_hlds__term_traversal__STATE_VARIABLE_Info_173_173;
#line 219 "term_traversal.m"
              {
#line 219 "term_traversal.m"
                transform_hlds__term_traversal__params_get_var_types_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__VarTypes_64);
              }
#line 220 "term_traversal.m"
              {
#line 220 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__VarTypes_64);
              }
#line 223 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 222 "term_traversal.m"
                {
#line 222 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_177_177;

#line 222 "term_traversal.m"
                  {
#line 222 "term_traversal.m"
                    transform_hlds__term_traversal__V_177_177 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_177_177, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 222 "term_traversal.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_177_177, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 222 "term_traversal.m"
                  }
#line 222 "term_traversal.m"
                  {
#line 222 "term_traversal.m"
                    transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_50, transform_hlds__term_traversal__V_177_177, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176, &transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178);
                  }
#line 222 "term_traversal.m"
                }
#line 223 "term_traversal.m"
              else
#line 223 "term_traversal.m"
                transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178 = transform_hlds__term_traversal__STATE_VARIABLE_Info_176_176;
#line 229 "term_traversal.m"
              {
#line 229 "term_traversal.m"
                transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__RecInputSuppliersMap_65);
              }
#line 230 "term_traversal.m"
              {
#line 230 "term_traversal.m"
                transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__RecInputSuppliersMap_65, ((MR_Box) (transform_hlds__term_traversal__CallPPId_52)), &transform_hlds__term_traversal__conv3_RecInputSuppliers_66);
              }
#line 230 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 230 "term_traversal.m"
                {
#line 230 "term_traversal.m"
                  transform_hlds__term_traversal__RecInputSuppliers_66 = ((MR_Word) transform_hlds__term_traversal__conv3_RecInputSuppliers_66);
#line 230 "term_traversal.m"
                  transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 230 "term_traversal.m"
                }
#line 239 "term_traversal.m"
              if (transform_hlds__term_traversal__succeeded)
#line 235 "term_traversal.m"
                {
#line 235 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Bag_67;
#line 235 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__PathStart_68;
#line 235 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__NewPath_69;
#line 235 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_179_179;

#line 235 "term_traversal.m"
                  {
#line 235 "term_traversal.m"
                    transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__Args_214, transform_hlds__term_traversal__RecInputSuppliers_66, &transform_hlds__term_traversal__Bag_67);
                  }
#line 236 "term_traversal.m"
                  {
#line 236 "term_traversal.m"
                    transform_hlds__term_traversal__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_179_179, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_52));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_179_179, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_50));
#line 236 "term_traversal.m"
                  }
#line 236 "term_traversal.m"
                  {
#line 236 "term_traversal.m"
                    transform_hlds__term_traversal__PathStart_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__PathStart_68, 0) = ((MR_Box) (transform_hlds__term_traversal__V_179_179));
#line 236 "term_traversal.m"
                  }
#line 237 "term_traversal.m"
                  {
#line 237 "term_traversal.m"
                    transform_hlds__term_traversal__NewPath_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_51));
#line 237 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 1) = ((MR_Box) (transform_hlds__term_traversal__PathStart_68));
#line 237 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 2) = ((MR_Box) ((MR_Integer) 0));
#line 237 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_69, 4) = ((MR_Box) (transform_hlds__term_traversal__Bag_67));
#line 237 "term_traversal.m"
                  }
#line 238 "term_traversal.m"
                  {
#line 238 "term_traversal.m"
                    transform_hlds__term_traversal__add_path_3_p_0(transform_hlds__term_traversal__NewPath_69, transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                  }
#line 235 "term_traversal.m"
                }
#line 239 "term_traversal.m"
              else
#line 239 "term_traversal.m"
                *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_178_178;
#line 172 "term_traversal.m"
              *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 172 "term_traversal.m"
            }
#line 171 "term_traversal.m"
            break;
#line 171 "term_traversal.m"
          case (MR_Integer) 3:
#line 171 "term_traversal.m"
#line 171 "term_traversal.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 0)))) {
#line 171 "term_traversal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 171 "term_traversal.m"
              case (MR_Integer) 0:
#line 265 "term_traversal.m"
                {
#line 265 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Details_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 265 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgModes_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 265 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 265 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_245;
#line 265 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 265 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 5)));

#line 266 "term_traversal.m"
                  {
#line 266 "term_traversal.m"
                    transform_hlds__term_traversal__Context_245 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
                  }
#line 297 "term_traversal.m"
#line 297 "term_traversal.m"
                  switch (MR_tag((MR_Word) transform_hlds__term_traversal__Details_77)) {
#line 297 "term_traversal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 297 "term_traversal.m"
                    case (MR_Integer) 0:
#line 268 "term_traversal.m"
                      {
#line 268 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 0)));
#line 268 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ClosureValueMap_85;
#line 268 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 1)));
#line 268 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 2)));
#line 268 "term_traversal.m"
                        MR_Integer transform_hlds__term_traversal__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_77, (MR_Integer) 3)));
#line 294 "term_traversal.m"
                        MR_Word transform_hlds__term_traversal__ClosureValues0_86;
#line 276 "term_traversal.m"
                        MR_Box transform_hlds__term_traversal__conv1_ClosureValues0_86;

#line 269 "term_traversal.m"
                        {
#line 269 "term_traversal.m"
                          transform_hlds__term_traversal__ClosureValueMap_85 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
                        }
#line 276 "term_traversal.m"
                        {
#line 276 "term_traversal.m"
                          transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_1[2], transform_hlds__term_traversal__ClosureValueMap_85, ((MR_Box) (transform_hlds__term_traversal__Var_81)), &transform_hlds__term_traversal__conv1_ClosureValues0_86);
                        }
#line 276 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 276 "term_traversal.m"
                          {
#line 276 "term_traversal.m"
                            transform_hlds__term_traversal__ClosureValues0_86 = ((MR_Word) transform_hlds__term_traversal__conv1_ClosureValues0_86);
#line 276 "term_traversal.m"
                            transform_hlds__term_traversal__succeeded = MR_TRUE;
#line 276 "term_traversal.m"
                          }
#line 294 "term_traversal.m"
                        if (transform_hlds__term_traversal__succeeded)
#line 277 "term_traversal.m"
                          {
#line 277 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__TypeCtorInfo_263_263 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 277 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__ClosureValues_87;
#line 277 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__Terminating_88;
#line 277 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__NonTerminating_89;
#line 277 "term_traversal.m"
                            MR_Word transform_hlds__term_traversal__V_150_150;

#line 277 "term_traversal.m"
                            {
#line 277 "term_traversal.m"
                              transform_hlds__term_traversal__ClosureValues_87 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_traversal__TypeCtorInfo_263_263, transform_hlds__term_traversal__ClosureValues0_86);
                            }
#line 279 "term_traversal.m"
                            {
#line 279 "term_traversal.m"
                              transform_hlds__term_traversal__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 279 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
#line 279 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_8_p_0_2));
#line 279 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "term_traversal.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_150_150, 3) = ((MR_Box) (transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116));
#line 279 "term_traversal.m"
                            }
#line 279 "term_traversal.m"
                            {
#line 279 "term_traversal.m"
                              mercury__list__filter_4_p_0(transform_hlds__term_traversal__TypeCtorInfo_263_263, transform_hlds__term_traversal__V_150_150, transform_hlds__term_traversal__ClosureValues_87, &transform_hlds__term_traversal__Terminating_88, &transform_hlds__term_traversal__NonTerminating_89);
                            }
#line 288 "term_traversal.m"
                            if ((transform_hlds__term_traversal__NonTerminating_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "term_traversal.m"
                              {
#line 282 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__Error_90;
#line 282 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__OutVars_225;
#line 282 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal__PPId_226;
#line 283 "term_traversal.m"
                                MR_Word transform_hlds__term_traversal___InVars_224;

#line 283 "term_traversal.m"
                                {
#line 283 "term_traversal.m"
                                  transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__ArgModes_78, transform_hlds__term_traversal__Args_243, &transform_hlds__term_traversal___InVars_224, &transform_hlds__term_traversal__OutVars_225);
                                }
#line 285 "term_traversal.m"
                                {
#line 285 "term_traversal.m"
                                  transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_10, &transform_hlds__term_traversal__PPId_226);
                                }
#line 286 "term_traversal.m"
                                {
#line 286 "term_traversal.m"
                                  transform_hlds__term_traversal__Error_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 286 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 286 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_90, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_226));
#line 286 "term_traversal.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_90, 2) = ((MR_Box) (transform_hlds__term_traversal__Terminating_88));
#line 286 "term_traversal.m"
                                }
#line 287 "term_traversal.m"
                                {
#line 287 "term_traversal.m"
                                  transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_225, transform_hlds__term_traversal__Context_245, transform_hlds__term_traversal__Error_90, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                                }
#line 282 "term_traversal.m"
                              }
#line 288 "term_traversal.m"
                            else
#line 289 "term_traversal.m"
                              {
#line 292 "term_traversal.m"
                                {
#line 292 "term_traversal.m"
                                  transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_245, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                                }
#line 289 "term_traversal.m"
                              }
#line 277 "term_traversal.m"
                          }
#line 294 "term_traversal.m"
                        else
#line 295 "term_traversal.m"
                          {
#line 295 "term_traversal.m"
                            {
#line 295 "term_traversal.m"
                              transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_245, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                            }
#line 295 "term_traversal.m"
                          }
#line 268 "term_traversal.m"
                      }
#line 297 "term_traversal.m"
                      break;
#line 297 "term_traversal.m"
                    case (MR_Integer) 1:
#line 298 "term_traversal.m"
                      {
#line 303 "term_traversal.m"
                        {
#line 303 "term_traversal.m"
                          transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_245, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                        }
#line 298 "term_traversal.m"
                      }
#line 297 "term_traversal.m"
                      break;
#line 297 "term_traversal.m"
                    case (MR_Integer) 2:
#line 305 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 297 "term_traversal.m"
                      break;
#line 297 "term_traversal.m"
                    case (MR_Integer) 3:
#line 307 "term_traversal.m"
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_115 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;
#line 297 "term_traversal.m"
                      break;
#line 297 "term_traversal.m"
                  }
#line 265 "term_traversal.m"
                  *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 265 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 1:
#line 244 "term_traversal.m"
                {
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Attributes_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ArgVars_75;
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Args_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__OutVars_218;
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallPredId_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 244 "term_traversal.m"
                  MR_Integer transform_hlds__term_traversal__CallProcId_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Context_221;
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallProcInfo_222;
#line 244 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CallArgModes_223;
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 5)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 6)));
#line 243 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 7)));
#line 245 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_74_74;
#line 249 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal___InVars_76;
#line 253 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_157_157;

#line 245 "term_traversal.m"
                  {
#line 245 "term_traversal.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallPredId_219, transform_hlds__term_traversal__CallProcId_220, &transform_hlds__term_traversal__V_74_74, &transform_hlds__term_traversal__CallProcInfo_222);
                  }
#line 247 "term_traversal.m"
                  {
#line 247 "term_traversal.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_222, &transform_hlds__term_traversal__CallArgModes_223);
                  }
#line 248 "term_traversal.m"
                  {
#line 248 "term_traversal.m"
                    transform_hlds__term_traversal__ArgVars_75 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_2[3], transform_hlds__term_traversal__Args_217);
                  }
#line 249 "term_traversal.m"
                  {
#line 249 "term_traversal.m"
                    transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__CallArgModes_223, transform_hlds__term_traversal__ArgVars_75, &transform_hlds__term_traversal___InVars_76, &transform_hlds__term_traversal__OutVars_218);
                  }
#line 251 "term_traversal.m"
                  {
#line 251 "term_traversal.m"
                    transform_hlds__term_traversal__Context_221 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_15);
                  }
#line 253 "term_traversal.m"
                  {
#line 253 "term_traversal.m"
                    transform_hlds__term_traversal__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_219));
#line 253 "term_traversal.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_220));
#line 253 "term_traversal.m"
                  }
#line 253 "term_traversal.m"
                  {
#line 253 "term_traversal.m"
                    transform_hlds__term_traversal__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__V_157_157);
                  }
#line 255 "term_traversal.m"
                  if (transform_hlds__term_traversal__succeeded)
#line 254 "term_traversal.m"
                    {
#line 254 "term_traversal.m"
                      {
#line 254 "term_traversal.m"
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_218, transform_hlds__term_traversal__Context_221, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                      }
#line 254 "term_traversal.m"
                    }
#line 255 "term_traversal.m"
                  else
#line 259 "term_traversal.m"
                    {
#line 256 "term_traversal.m"
                      {
#line 256 "term_traversal.m"
                        transform_hlds__term_traversal__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__term_traversal__Attributes_70);
                      }
#line 259 "term_traversal.m"
                      if (transform_hlds__term_traversal__succeeded)
#line 257 "term_traversal.m"
                        {
#line 257 "term_traversal.m"
                          {
#line 257 "term_traversal.m"
                            transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_218, transform_hlds__term_traversal__Context_221, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                          }
#line 257 "term_traversal.m"
                        }
#line 259 "term_traversal.m"
                      else
#line 260 "term_traversal.m"
                        {
#line 260 "term_traversal.m"
                          MR_Word transform_hlds__term_traversal__V_162_162;

#line 260 "term_traversal.m"
                          {
#line 260 "term_traversal.m"
                            transform_hlds__term_traversal__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 260 "term_traversal.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_162_162, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_219));
#line 260 "term_traversal.m"
                          }
#line 260 "term_traversal.m"
                          {
#line 260 "term_traversal.m"
                            transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Context_221, transform_hlds__term_traversal__V_162_162, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
                          }
#line 260 "term_traversal.m"
                        }
#line 259 "term_traversal.m"
                    }
#line 244 "term_traversal.m"
                  *transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117 = transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116;
#line 244 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 2:
#line 310 "term_traversal.m"
                {
#line 310 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Goals_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 310 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__RevGoals_101;
#line 310 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 311 "term_traversal.m"
                  {
#line 311 "term_traversal.m"
                    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__term_traversal__Goals_100, &transform_hlds__term_traversal__RevGoals_101);
                  }
#line 312 "term_traversal.m"
                  {
#line 312 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_conj_8_p_0(transform_hlds__term_traversal__RevGoals_101, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
#line 312 "term_traversal.m"
                    return;
                  }
#line 310 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 3:
#line 314 "term_traversal.m"
                {
#line 314 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Goals_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 315 "term_traversal.m"
                  {
#line 315 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_disj_8_p_0(transform_hlds__term_traversal__Goals_248, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
#line 315 "term_traversal.m"
                    return;
                  }
#line 314 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 4:
#line 317 "term_traversal.m"
                {
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Cases_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));
#line 317 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));

#line 318 "term_traversal.m"
                  {
#line 318 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_switch_8_p_0(transform_hlds__term_traversal__Cases_104, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, transform_hlds__term_traversal__STATE_VARIABLE_Info_115, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
#line 318 "term_traversal.m"
                    return;
                  }
#line 317 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 5:
#line 333 "term_traversal.m"
                {
#line 333 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__SubGoal_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 333 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 336 "term_traversal.m"
                  /* direct tailcall eliminated */
#line 336 "term_traversal.m"
                  {
#line 336 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__Goal__tmp_copy_9 = transform_hlds__term_traversal__SubGoal_249;
#line 336 "term_traversal.m"
                    MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121;

#line 336 "term_traversal.m"
                    transform_hlds__term_traversal__STATE_VARIABLE_Info_0_114 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_114;
#line 336 "term_traversal.m"
                    transform_hlds__term_traversal__Goal_9 = transform_hlds__term_traversal__Goal__tmp_copy_9;
#line 336 "term_traversal.m"
                  }
#line 336 "term_traversal.m"
                  continue;
#line 333 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 6:
#line 320 "term_traversal.m"
                {
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Cond_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 2)));
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Then_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 3)));
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__Else_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 4)));
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__CondThenInfo_109;
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__ElseInfo_110;
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_131_131;
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_132_132;
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_134_134;
#line 320 "term_traversal.m"
                  MR_Word transform_hlds__term_traversal__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_14, (MR_Integer) 1)));

#line 321 "term_traversal.m"
                  {
#line 321 "term_traversal.m"
                    transform_hlds__term_traversal__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_134_134, 0) = ((MR_Box) (transform_hlds__term_traversal__Cond_106));
#line 321 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "term_traversal.m"
                  }
#line 321 "term_traversal.m"
                  {
#line 321 "term_traversal.m"
                    transform_hlds__term_traversal__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_131_131, 0) = ((MR_Box) (transform_hlds__term_traversal__Then_107));
#line 321 "term_traversal.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_131_131, 1) = ((MR_Box) (transform_hlds__term_traversal__V_134_134));
#line 321 "term_traversal.m"
                  }
#line 321 "term_traversal.m"
                  {
#line 321 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_conj_8_p_0(transform_hlds__term_traversal__V_131_131, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__CondThenInfo_109, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_0_116, &transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_132_132);
                  }
#line 323 "term_traversal.m"
                  {
#line 323 "term_traversal.m"
                    transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_traversal__Else_108, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_121_121, &transform_hlds__term_traversal__ElseInfo_110, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_132_132, transform_hlds__term_traversal__STATE_VARIABLE_ModuleInfo_117);
                  }
#line 324 "term_traversal.m"
                  {
#line 324 "term_traversal.m"
                    transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CondThenInfo_109, transform_hlds__term_traversal__ElseInfo_110, transform_hlds__term_traversal__Params_10, transform_hlds__term_traversal__STATE_VARIABLE_Info_115);
#line 324 "term_traversal.m"
                    return;
                  }
#line 320 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
              case (MR_Integer) 7:
#line 338 "term_traversal.m"
                {
#line 340 "term_traversal.m"
                  {
#line 340 "term_traversal.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/8", (MR_String) "shorthand");
#line 340 "term_traversal.m"
                    return;
                  }
#line 338 "term_traversal.m"
                }
#line 171 "term_traversal.m"
                break;
#line 171 "term_traversal.m"
            }
#line 171 "term_traversal.m"
            break;
#line 171 "term_traversal.m"
        }
#line 122 "term_traversal.m"
      }
#line 122 "term_traversal.m"
      break;
#line 122 "term_traversal.m"
    }
#line 100 "term_traversal.m"
}

#line 95 "term_traversal.m"
void MR_CALL 
transform_hlds__term_traversal__init_term_traversal_params_9_p_0(
#line 95 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__FunctorInfo_10,
#line 95 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__PredProcId_11,
#line 95 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__Context_12,
#line 95 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__VarTypes_13,
#line 95 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__OutputSuppliers_14,
#line 95 "term_traversal.m"
  MR_Word transform_hlds__term_traversal__RecInputSuppliers_15,
#line 95 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__MaxErrors_16,
#line 95 "term_traversal.m"
  MR_Integer transform_hlds__term_traversal__MaxPaths_17,
#line 95 "term_traversal.m"
  MR_Word * transform_hlds__term_traversal__Params_18)
#line 95 "term_traversal.m"
{
#line 683 "term_traversal.m"
  {
#line 683 "term_traversal.m"
    MR_bool transform_hlds__term_traversal__succeeded;

#line 683 "term_traversal.m"
    {
#line 683 "term_traversal.m"
      MR_Word base;
#line 683 "term_traversal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 683 "term_traversal.m"
      *transform_hlds__term_traversal__Params_18 = base;
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__FunctorInfo_10));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__PredProcId_11));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_traversal__Context_12));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_traversal__VarTypes_13));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_traversal__OutputSuppliers_14));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_traversal__RecInputSuppliers_15));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_traversal__MaxErrors_16));
#line 683 "term_traversal.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_traversal__MaxPaths_17));
#line 683 "term_traversal.m"
    }
#line 683 "term_traversal.m"
  }
#line 95 "term_traversal.m"
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
