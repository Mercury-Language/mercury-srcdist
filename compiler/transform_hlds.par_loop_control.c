/*
** Automatically generated from `par_loop_control.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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


/* :- module transform_hlds.par_loop_control. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__par_loop_control__init
ENDINIT
*/

#include "transform_hlds.par_loop_control.mih"


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
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1180 "par_loop_control.m"
struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s {
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1;
#line 1184 "par_loop_control.m"
  MR_bool transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded;
#line 1187 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
#line 1189 "par_loop_control.m"
  jmp_buf transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0;
#line 1189 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15;
#line 1180 "par_loop_control.m"
};

#line 1064 "par_loop_control.m"
struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s {
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6;
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
#line 1069 "par_loop_control.m"
  MR_bool transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded;
#line 1085 "par_loop_control.m"
  jmp_buf transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0;
#line 1085 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112;
#line 1085 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206;
#line 1085 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207;
#line 1064 "par_loop_control.m"
};


#line 169 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 172 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 175 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 184 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 187 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 196 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0;

#line 199 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1;

#line 202 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0[2];

#line 205 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2];

#line 208 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2];

#line 211 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0;

#line 214 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1;

#line 217 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0[2];

#line 220 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2];

#line 223 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2];

#line 226 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10];

#line 229 "transform_hlds.par_loop_control.c"
static const MR_ConstString transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0[10];

#line 232 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0;

#line 235 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1];

#line 238 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1];

#line 241 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1];

#line 244 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1];

#line 247 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0;

#line 250 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1;

#line 253 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0[2];

#line 256 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2];

#line 259 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2];

#line 262 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0;

#line 265 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1;

#line 268 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2;

#line 271 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 274 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1];

#line 277 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3;

#line 280 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3];

#line 283 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1];

#line 286 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0[2];

#line 289 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4];

#line 292 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4];

#line 295 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
#line 298 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 300 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 303 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
#line 306 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 308 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 310 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 313 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
#line 316 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 318 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 321 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
#line 324 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 326 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 328 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 331 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
#line 334 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 336 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 339 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
#line 342 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 344 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 346 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 349 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
#line 352 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 354 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 357 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
#line 360 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 362 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 364 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 367 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
#line 370 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 372 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 375 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
#line 378 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 380 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 382 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 1436 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1436__1_4_p_0(
#line 1436 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1436 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_17,
#line 1436 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_18,
#line 1436 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_19);

#line 1345 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1345__1_3_p_0(
#line 1345 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_23,
#line 1345 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_114,
#line 1345 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_115);

#line 1114 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1114__1_2_p_0(
#line 1114 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecPredProcId_41,
#line 1114 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_98);

#line 1125 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1125__1_2_p_0(
#line 1125 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ConjType_48,
#line 1125 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_93);

#line 208 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
#line 208 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 208 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 686 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
#line 686 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 686 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 672 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
#line 672 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 672 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 694 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
#line 694 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 694 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 1301 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
#line 1301 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 1301 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 1510 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
#line 1510 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1510 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1505 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void);

#line 1479 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
#line 1479 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_4,
#line 1479 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredId_5,
#line 1479 "par_loop_control.m"
  MR_Integer * transform_hlds__par_loop_control__ProcId_6);

#line 1473 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void);

#line 1463 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
#line 1463 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1463 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1454 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void);

#line 1443 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void);

#line 1436 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
#line 1436 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1436 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1436 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1436 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 1430 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
#line 1430 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1430 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldInstmapDelta_5,
#line 1430 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13);

#line 1416 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVarSet_10,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVar_11,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__VarType_12,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18,
#line 1416 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20,
#line 1416 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22,
#line 1416 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23);

#line 1345 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2);

#line 1343 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3,
#line 1343 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_5,
#line 1343 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_6,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_7,
#line 1343 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_8);

#line 1326 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_7,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredProcId_8,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredName_9,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_10,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46,
#line 1326 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47);

#line 1307 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
#line 1307 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_4,
#line 1307 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal0_5,
#line 1307 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_6);

#line 1285 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
#line 1285 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_3,
#line 1285 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_4);

#line 1269 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
#line 1269 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_5,
#line 1269 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCVar_6,
#line 1269 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCSVar_7,
#line 1269 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_8);

#line 1252 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_9,
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__NumContextsVar_10,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCVar_11,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_12,
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);

#line 1231 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
#line 1231 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_8,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCSVar_9,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_10,
#line 1231 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22,
#line 1231 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24);

#line 1217 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
#line 1217 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1217 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1217 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11,
#line 1217 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_12,
#line 1217 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_9);

#line 1189 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
#line 1189 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1189 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
#line 1189 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1189 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
#line 1189 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1180 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1180 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3,
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__4_4,
#line 1180 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__5_5);

#line 1135 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
#line 1135 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1135 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1135 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 1135 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 1125 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
#line 1125 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg);

#line 1114 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
#line 1114 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg);

#line 1085 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
#line 1085 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1085 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
#line 1085 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1085 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
#line 1085 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1064 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1064 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_8,
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70,
#line 1064 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71);

#line 1043 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
#line 1043 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1043 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1043 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3);

#line 1035 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
#line 1035 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1035 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1025 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
#line 1025 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__List_3,
#line 1025 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Fixup_4);

#line 1012 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
#line 1012 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 1012 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 1012 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13,
#line 1012 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_14,
#line 1012 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 1012 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11);

#line 971 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
#line 971 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 971 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 971 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 971 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 971 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 963 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
#line 963 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 963 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 963 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 963 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 963 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 946 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
#line 946 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 946 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 946 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 946 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 946 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 881 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
#line 881 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 881 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 881 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116,
#line 881 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117,
#line 881 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 881 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11);

#line 835 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_1,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__UseParentStack_2,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3,
#line 835 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_4,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5,
#line 835 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7,
#line 835 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8);

#line 810 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjuncts0_11,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_12,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalInfo_13,
#line 810 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_14,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27,
#line 810 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29,
#line 810 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30);

#line 709 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_11,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalPath0_12,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48,
#line 709 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50,
#line 709 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52,
#line 709 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);

#line 705 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 705 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 705 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_6,
#line 705 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_7);

#line 704 "par_loop_control.m"
static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
#line 704 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 704 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1);

#line 698 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalIds_11,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17,
#line 698 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 698 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 698 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);

#line 657 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
#line 657 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 657 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PreserveTailRecursion_4);

#line 558 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_9,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldPredProcId_10,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldProcInfo_11,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 558 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredProcId_13,
#line 558 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredSym_14,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55,
#line 558 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56);

#line 506 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
#line 506 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 506 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Seen0_2,
#line 506 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3);

#line 457 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
#line 457 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_4,
#line 457 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 457 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 435 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
#line 435 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 435 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_2,
#line 435 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3,
#line 435 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4);

#line 405 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
#line 405 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conj_5,
#line 405 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_6,
#line 405 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_7,
#line 405 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 379 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(
#line 379 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_5,
#line 379 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_6,
#line 379 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalId_7,
#line 379 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 503 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
#line 503 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 503 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 503 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 503 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 290 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
#line 290 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 290 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 290 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2);

#line 239 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
#line 239 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal_4,
#line 239 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_5,
#line 239 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_6);

#line 135 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__DepInfo_7,
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_8,
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19,
#line 135 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20,
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21,
#line 135 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22);

#line 132 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 132 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 132 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_5[2][12];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[1][8];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[2][1];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_9[1][7];




static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__par_loop_control_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__par_loop_control_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[1])),
    ((MR_Box) ((MR_String) "loop_control"))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[1])),
    ((MR_Box) ((MR_String) "lc_create"))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[1])),
    ((MR_Box) ((MR_String) "lc_finish"))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[1])),
    ((MR_Box) ((MR_String) "lc_wait_free_slot"))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[1])),
    ((MR_Box) ((MR_String) "lc_default_num_contexts"))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[1])),
    ((MR_Box) ((MR_String) "lc_join_and_terminate"))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_5[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "par_builtin"))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
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



#line 1477 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &hlds__hlds_module__hlds__hlds_module__type_ctor_info_dependency_info_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1485 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1494 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1502 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1510 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1519 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1527 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1535 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1544 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1553 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0 = {
  (MR_String) "fixup_goal_info",
  (MR_Integer) 0
};

#line 1559 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1 = {
  (MR_String) "do_not_fixup_goal_info",
  (MR_Integer) 1
};

#line 1565 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1
};

#line 1571 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0
};

#line 1577 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1583 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "fixup_goal_info",
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0
  },
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0
};

#line 1604 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0 = {
  (MR_String) "goal_is_last_goal_on_path",
  (MR_Integer) 0
};

#line 1610 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1 = {
  (MR_String) "goal_is_not_last_goal_on_path",
  (MR_Integer) 1
};

#line 1616 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

#line 1622 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

#line 1628 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1634 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "goal_is_last_goal_on_path",
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0
  },
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0
};

#line 1655 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 1669 "transform_hlds.par_loop_control.c"
static const MR_ConstString transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0[10] = {
  (MR_String) "lci_module_info",
  (MR_String) "lci_lc_var",
  (MR_String) "lci_rec_pred_proc_id",
  (MR_String) "lci_inner_pred_proc_id",
  (MR_String) "lci_inner_pred_name",
  (MR_String) "lci_preserve_tail_recursion",
  (MR_String) "lci_wait_free_slot_proc",
  (MR_String) "lci_wait_free_slot_proc_name",
  (MR_String) "lci_join_and_terminate_proc",
  (MR_String) "lci_join_and_terminate_proc_name"
};

#line 1683 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0 = {
  (MR_String) "loop_control_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0,
  NULL,
  NULL
};

#line 1698 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

#line 1703 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0
  }
};

#line 1712 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

#line 1717 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1] = {
  (MR_Integer) 0
};

#line 1722 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "loop_control_info",
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0
  },
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0
};

#line 1743 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0 = {
  (MR_String) "preserve_tail_recursion",
  (MR_Integer) 0
};

#line 1749 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1 = {
  (MR_String) "do_not_preserve_tail_recursion",
  (MR_Integer) 1
};

#line 1755 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1
};

#line 1761 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0
};

#line 1767 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1773 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "preserve_tail_recursion",
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0
  },
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0
};

#line 1794 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0 = {
  (MR_String) "have_not_seen_recursive_call",
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

#line 1809 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1 = {
  (MR_String) "seen_one_recursive_call_on_every_branch",
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

#line 1824 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2 = {
  (MR_String) "seen_unusable_recursion",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1839 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1847 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1852 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3 = {
  (MR_String) "seen_usable_recursion_in_par_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3,
  NULL,
  NULL,
  NULL
};

#line 1867 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2
};

#line 1874 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

#line 1879 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0[2] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1
  }
};

#line 1893 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

#line 1901 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1909 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "seen_usable_recursion",
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0
  },
  {
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0
};

#line 1930 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
#line 1933 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1935 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 1937 "transform_hlds.par_loop_control.c"
{
#line 1939 "transform_hlds.par_loop_control.c"
  {
#line 1941 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1944 "transform_hlds.par_loop_control.c"
    {
#line 1946 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 1949 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 1951 "transform_hlds.par_loop_control.c"
  }
#line 1953 "transform_hlds.par_loop_control.c"
}

#line 1956 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
#line 1959 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 1961 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1963 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 1965 "transform_hlds.par_loop_control.c"
{
#line 1967 "transform_hlds.par_loop_control.c"
  {
#line 1969 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 1972 "transform_hlds.par_loop_control.c"
    {
#line 1974 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 1977 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 1979 "transform_hlds.par_loop_control.c"
  }
#line 1981 "transform_hlds.par_loop_control.c"
}

#line 1984 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
#line 1987 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1989 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 1991 "transform_hlds.par_loop_control.c"
{
#line 1993 "transform_hlds.par_loop_control.c"
  {
#line 1995 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1998 "transform_hlds.par_loop_control.c"
    {
#line 2000 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2003 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2005 "transform_hlds.par_loop_control.c"
  }
#line 2007 "transform_hlds.par_loop_control.c"
}

#line 2010 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
#line 2013 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2015 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2017 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2019 "transform_hlds.par_loop_control.c"
{
#line 2021 "transform_hlds.par_loop_control.c"
  {
#line 2023 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2026 "transform_hlds.par_loop_control.c"
    {
#line 2028 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2031 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2033 "transform_hlds.par_loop_control.c"
  }
#line 2035 "transform_hlds.par_loop_control.c"
}

#line 2038 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
#line 2041 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2043 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2045 "transform_hlds.par_loop_control.c"
{
#line 2047 "transform_hlds.par_loop_control.c"
  {
#line 2049 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2052 "transform_hlds.par_loop_control.c"
    {
#line 2054 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____loop_control_info_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2057 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2059 "transform_hlds.par_loop_control.c"
  }
#line 2061 "transform_hlds.par_loop_control.c"
}

#line 2064 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
#line 2067 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2069 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2071 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2073 "transform_hlds.par_loop_control.c"
{
#line 2075 "transform_hlds.par_loop_control.c"
  {
#line 2077 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2080 "transform_hlds.par_loop_control.c"
    {
#line 2082 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____loop_control_info_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2085 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2087 "transform_hlds.par_loop_control.c"
  }
#line 2089 "transform_hlds.par_loop_control.c"
}

#line 2092 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
#line 2095 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2097 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2099 "transform_hlds.par_loop_control.c"
{
#line 2101 "transform_hlds.par_loop_control.c"
  {
#line 2103 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2106 "transform_hlds.par_loop_control.c"
    {
#line 2108 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2111 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2113 "transform_hlds.par_loop_control.c"
  }
#line 2115 "transform_hlds.par_loop_control.c"
}

#line 2118 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
#line 2121 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2123 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2125 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2127 "transform_hlds.par_loop_control.c"
{
#line 2129 "transform_hlds.par_loop_control.c"
  {
#line 2131 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2134 "transform_hlds.par_loop_control.c"
    {
#line 2136 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2139 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2141 "transform_hlds.par_loop_control.c"
  }
#line 2143 "transform_hlds.par_loop_control.c"
}

#line 2146 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
#line 2149 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2151 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2153 "transform_hlds.par_loop_control.c"
{
#line 2155 "transform_hlds.par_loop_control.c"
  {
#line 2157 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2160 "transform_hlds.par_loop_control.c"
    {
#line 2162 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2165 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2167 "transform_hlds.par_loop_control.c"
  }
#line 2169 "transform_hlds.par_loop_control.c"
}

#line 2172 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
#line 2175 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2177 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2179 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2181 "transform_hlds.par_loop_control.c"
{
#line 2183 "transform_hlds.par_loop_control.c"
  {
#line 2185 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2188 "transform_hlds.par_loop_control.c"
    {
#line 2190 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2193 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2195 "transform_hlds.par_loop_control.c"
  }
#line 2197 "transform_hlds.par_loop_control.c"
}

#line 1436 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1436__1_4_p_0(
#line 1436 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1436 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_17,
#line 1436 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_18,
#line 1436 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_19)
#line 1436 "par_loop_control.m"
{
#line 1436 "par_loop_control.m"
  {
#line 1436 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_24_24 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Var_12;
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_17, (MR_Integer) 0)));
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Inst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_17, (MR_Integer) 1)));
#line 1437 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_Var_12;

#line 1437 "par_loop_control.m"
    {
#line 1437 "par_loop_control.m"
      mercury__map__lookup_3_p_0(transform_hlds__par_loop_control__TypeInfo_24_24, transform_hlds__par_loop_control__TypeInfo_24_24, transform_hlds__par_loop_control__Remap_4, ((MR_Box) (transform_hlds__par_loop_control__OldVar_20)), &transform_hlds__par_loop_control__conv0_Var_12);
    }
#line 1437 "par_loop_control.m"
    transform_hlds__par_loop_control__Var_12 = ((MR_Word) transform_hlds__par_loop_control__conv0_Var_12);
#line 1438 "par_loop_control.m"
    {
#line 1438 "par_loop_control.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__par_loop_control__Var_12, transform_hlds__par_loop_control__Inst_21, transform_hlds__par_loop_control__HeadVar__3_18, transform_hlds__par_loop_control__HeadVar__4_19);
#line 1438 "par_loop_control.m"
      return;
    }
#line 1436 "par_loop_control.m"
  }
#line 1436 "par_loop_control.m"
}

#line 1345 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1345__1_3_p_0(
#line 1345 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_23,
#line 1345 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_114,
#line 1345 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_115)
#line 1345 "par_loop_control.m"
{
#line 1345 "par_loop_control.m"
  {
#line 1345 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1345 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_116_116 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1345 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_HeadVar__3_115;

#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      mercury__map__lookup_3_p_0(transform_hlds__par_loop_control__TypeInfo_116_116, transform_hlds__par_loop_control__TypeInfo_116_116, transform_hlds__par_loop_control__Remap_23, ((MR_Box) (transform_hlds__par_loop_control__HeadVar__2_114)), &transform_hlds__par_loop_control__conv0_HeadVar__3_115);
    }
#line 1345 "par_loop_control.m"
    *transform_hlds__par_loop_control__HeadVar__3_115 = ((MR_Word) transform_hlds__par_loop_control__conv0_HeadVar__3_115);
#line 1345 "par_loop_control.m"
  }
#line 1345 "par_loop_control.m"
}

#line 1114 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1114__1_2_p_0(
#line 1114 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecPredProcId_41,
#line 1114 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_98)
#line 1114 "par_loop_control.m"
{
#line 1114 "par_loop_control.m"
  {
#line 1114 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1114 "par_loop_control.m"
    {
#line 1114 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__RecPredProcId_41, transform_hlds__par_loop_control__HeadVar__2_98);
    }
#line 1114 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1114 "par_loop_control.m"
  }
#line 1114 "par_loop_control.m"
}

#line 1125 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1125__1_2_p_0(
#line 1125 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ConjType_48,
#line 1125 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_93)
#line 1125 "par_loop_control.m"
{
#line 1125 "par_loop_control.m"
  {
#line 1125 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__ConjType_48 == transform_hlds__par_loop_control__HeadVar__2_93);

#line 1125 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1125 "par_loop_control.m"
  }
#line 1125 "par_loop_control.m"
}

#line 208 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
#line 208 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 208 "par_loop_control.m"
{
#line 208 "par_loop_control.m"
  {
#line 208 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 208 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_12 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 208 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_13 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 208 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_12 == transform_hlds__par_loop_control__CastY_13);
#line 208 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 2350 "transform_hlds.par_loop_control.c"
      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "par_loop_control.m"
    else
#line 208 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "par_loop_control.m"
        else
#line 208 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 208 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "par_loop_control.m"
          else
#line 208 "par_loop_control.m"
            if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 208 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "par_loop_control.m"
            else
#line 2374 "transform_hlds.par_loop_control.c"
              *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "par_loop_control.m"
      else
#line 208 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 208 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "par_loop_control.m"
          else
#line 208 "par_loop_control.m"
            if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 208 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "par_loop_control.m"
            else
#line 208 "par_loop_control.m"
              if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 208 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "par_loop_control.m"
              else
#line 2398 "transform_hlds.par_loop_control.c"
                *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "par_loop_control.m"
        else
#line 208 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 208 "par_loop_control.m"
            if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "par_loop_control.m"
            else
#line 208 "par_loop_control.m"
              if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 208 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "par_loop_control.m"
              else
#line 208 "par_loop_control.m"
                if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 208 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "par_loop_control.m"
                else
#line 2422 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "par_loop_control.m"
          else
#line 208 "par_loop_control.m"
            {
#line 208 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));

#line 208 "par_loop_control.m"
              if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2433 "transform_hlds.par_loop_control.c"
                *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "par_loop_control.m"
              else
#line 208 "par_loop_control.m"
                if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2439 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "par_loop_control.m"
                else
#line 208 "par_loop_control.m"
                  if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2445 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "par_loop_control.m"
                  else
#line 208 "par_loop_control.m"
                    {
#line 208 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));

#line 208 "par_loop_control.m"
                      {
#line 208 "par_loop_control.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_1[3], transform_hlds__par_loop_control__HeadVar__1_1, ((MR_Box) (transform_hlds__par_loop_control__V_15_15)), ((MR_Box) (transform_hlds__par_loop_control__V_11_11)));
#line 208 "par_loop_control.m"
                        return;
                      }
#line 208 "par_loop_control.m"
                    }
#line 208 "par_loop_control.m"
            }
#line 208 "par_loop_control.m"
  }
#line 208 "par_loop_control.m"
}

#line 208 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 208 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 208 "par_loop_control.m"
{
#line 208 "par_loop_control.m"
  {
#line 208 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 208 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_11 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 208 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_12 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 208 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_11 == transform_hlds__par_loop_control__CastY_12);
#line 208 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 208 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 208 "par_loop_control.m"
    else
#line 208 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "par_loop_control.m"
        {
#line 208 "par_loop_control.m"
          MR_Integer transform_hlds__par_loop_control__CastX_3 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 208 "par_loop_control.m"
          MR_Integer transform_hlds__par_loop_control__CastY_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 208 "par_loop_control.m"
          transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_4 == transform_hlds__par_loop_control__CastX_3);
#line 208 "par_loop_control.m"
        }
#line 208 "par_loop_control.m"
      else
#line 208 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 208 "par_loop_control.m"
          {
#line 208 "par_loop_control.m"
            MR_Integer transform_hlds__par_loop_control__CastX_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 208 "par_loop_control.m"
            MR_Integer transform_hlds__par_loop_control__CastY_6 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 208 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_6 == transform_hlds__par_loop_control__CastX_5);
#line 208 "par_loop_control.m"
          }
#line 208 "par_loop_control.m"
        else
#line 208 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 208 "par_loop_control.m"
            {
#line 208 "par_loop_control.m"
              MR_Integer transform_hlds__par_loop_control__CastX_7 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 208 "par_loop_control.m"
              MR_Integer transform_hlds__par_loop_control__CastY_8 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 208 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_8 == transform_hlds__par_loop_control__CastX_7);
#line 208 "par_loop_control.m"
            }
#line 208 "par_loop_control.m"
          else
#line 208 "par_loop_control.m"
            {
#line 208 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__TypeInfo_13_13;
#line 208 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_10_10;

#line 208 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = ((MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 208 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 208 "par_loop_control.m"
                {
#line 208 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 2558 "transform_hlds.par_loop_control.c"
                  transform_hlds__par_loop_control__TypeInfo_13_13 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[3];
#line 2560 "transform_hlds.par_loop_control.c"
                  {
#line 2562 "transform_hlds.par_loop_control.c"
                    return transform_hlds__par_loop_control__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__par_loop_control__TypeInfo_13_13, ((MR_Box) (transform_hlds__par_loop_control__V_9_9)), ((MR_Box) (transform_hlds__par_loop_control__V_10_10)));
                  }
#line 208 "par_loop_control.m"
                }
#line 208 "par_loop_control.m"
            }
#line 208 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 208 "par_loop_control.m"
  }
#line 208 "par_loop_control.m"
}

#line 686 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
#line 686 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 686 "par_loop_control.m"
{
#line 686 "par_loop_control.m"
  {
#line 686 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 686 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 686 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 686 "par_loop_control.m"
    {
#line 686 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 686 "par_loop_control.m"
      return;
    }
#line 686 "par_loop_control.m"
  }
#line 686 "par_loop_control.m"
}

#line 686 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 686 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 686 "par_loop_control.m"
{
#line 2617 "transform_hlds.par_loop_control.c"
  {
#line 2619 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 2622 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2624 "transform_hlds.par_loop_control.c"
  }
#line 686 "par_loop_control.m"
}

#line 672 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
#line 672 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 672 "par_loop_control.m"
{
#line 672 "par_loop_control.m"
  {
#line 672 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 672 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_33 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 672 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_34 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 672 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_33 == transform_hlds__par_loop_control__CastY_34);
#line 672 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 2653 "transform_hlds.par_loop_control.c"
      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 672 "par_loop_control.m"
    else
#line 672 "par_loop_control.m"
      {
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 3)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 4)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 5)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 6)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 7)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 8)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 9)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 1)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 2)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 3)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 4)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 5)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 6)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 7)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 8)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 9)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_24_24;

#line 672 "par_loop_control.m"
        {
#line 672 "par_loop_control.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__par_loop_control__V_24_24, transform_hlds__par_loop_control__V_4_4, transform_hlds__par_loop_control__V_14_14);
        }
#line 2707 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_24_24 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_24_24;
#line 672 "par_loop_control.m"
        else
#line 672 "par_loop_control.m"
          {
#line 672 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_25_25;

#line 672 "par_loop_control.m"
            {
#line 672 "par_loop_control.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0], &transform_hlds__par_loop_control__V_25_25, ((MR_Box) (transform_hlds__par_loop_control__V_5_5)), ((MR_Box) (transform_hlds__par_loop_control__V_15_15)));
            }
#line 2727 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_25_25 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_25_25;
#line 672 "par_loop_control.m"
            else
#line 672 "par_loop_control.m"
              {
#line 672 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_26_26;

#line 672 "par_loop_control.m"
                {
#line 672 "par_loop_control.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_26_26, transform_hlds__par_loop_control__V_6_6, transform_hlds__par_loop_control__V_16_16);
                }
#line 2747 "transform_hlds.par_loop_control.c"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_26_26 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_26_26;
#line 672 "par_loop_control.m"
                else
#line 672 "par_loop_control.m"
                  {
#line 672 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_27_27;

#line 672 "par_loop_control.m"
                    {
#line 672 "par_loop_control.m"
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_27_27, transform_hlds__par_loop_control__V_7_7, transform_hlds__par_loop_control__V_17_17);
                    }
#line 2767 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_27_27 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                    transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_27_27;
#line 672 "par_loop_control.m"
                    else
#line 672 "par_loop_control.m"
                      {
#line 672 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_28_28;

#line 672 "par_loop_control.m"
                        {
#line 672 "par_loop_control.m"
                          mdbcomp__prim_data____Compare____sym_name_0_0(&transform_hlds__par_loop_control__V_28_28, transform_hlds__par_loop_control__V_8_8, transform_hlds__par_loop_control__V_18_18);
                        }
#line 2787 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_28_28 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_28_28;
#line 672 "par_loop_control.m"
                        else
#line 672 "par_loop_control.m"
                          {
#line 672 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__V_29_29;
#line 672 "par_loop_control.m"
                            MR_Integer transform_hlds__par_loop_control__V_45_45 = (MR_Integer) transform_hlds__par_loop_control__V_9_9;
#line 672 "par_loop_control.m"
                            MR_Integer transform_hlds__par_loop_control__V_46_46 = (MR_Integer) transform_hlds__par_loop_control__V_19_19;

#line 672 "par_loop_control.m"
                            {
#line 672 "par_loop_control.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__par_loop_control__V_29_29, transform_hlds__par_loop_control__V_45_45, transform_hlds__par_loop_control__V_46_46);
                            }
#line 2811 "transform_hlds.par_loop_control.c"
                            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_29_29 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                            transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                            if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                              *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_29_29;
#line 672 "par_loop_control.m"
                            else
#line 672 "par_loop_control.m"
                              {
#line 672 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__V_30_30;

#line 672 "par_loop_control.m"
                                {
#line 672 "par_loop_control.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_30_30, transform_hlds__par_loop_control__V_10_10, transform_hlds__par_loop_control__V_20_20);
                                }
#line 2831 "transform_hlds.par_loop_control.c"
                                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_30_30 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                                if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_30_30;
#line 672 "par_loop_control.m"
                                else
#line 672 "par_loop_control.m"
                                  {
#line 672 "par_loop_control.m"
                                    MR_Word transform_hlds__par_loop_control__V_31_31;

#line 672 "par_loop_control.m"
                                    {
#line 672 "par_loop_control.m"
                                      mdbcomp__prim_data____Compare____sym_name_0_0(&transform_hlds__par_loop_control__V_31_31, transform_hlds__par_loop_control__V_11_11, transform_hlds__par_loop_control__V_21_21);
                                    }
#line 2851 "transform_hlds.par_loop_control.c"
                                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_31_31 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                                    transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                                    if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_31_31;
#line 672 "par_loop_control.m"
                                    else
#line 672 "par_loop_control.m"
                                      {
#line 672 "par_loop_control.m"
                                        MR_Word transform_hlds__par_loop_control__V_32_32;

#line 672 "par_loop_control.m"
                                        {
#line 672 "par_loop_control.m"
                                          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_32_32, transform_hlds__par_loop_control__V_12_12, transform_hlds__par_loop_control__V_22_22);
                                        }
#line 2871 "transform_hlds.par_loop_control.c"
                                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_32_32 == (MR_Integer) 0);
#line 672 "par_loop_control.m"
                                        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 672 "par_loop_control.m"
                                        if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                                          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_32_32;
#line 672 "par_loop_control.m"
                                        else
#line 672 "par_loop_control.m"
                                          {
#line 672 "par_loop_control.m"
                                            mdbcomp__prim_data____Compare____sym_name_0_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__V_13_13, transform_hlds__par_loop_control__V_23_23);
#line 672 "par_loop_control.m"
                                            return;
                                          }
#line 672 "par_loop_control.m"
                                      }
#line 672 "par_loop_control.m"
                                  }
#line 672 "par_loop_control.m"
                              }
#line 672 "par_loop_control.m"
                          }
#line 672 "par_loop_control.m"
                      }
#line 672 "par_loop_control.m"
                  }
#line 672 "par_loop_control.m"
              }
#line 672 "par_loop_control.m"
          }
#line 672 "par_loop_control.m"
      }
#line 672 "par_loop_control.m"
  }
#line 672 "par_loop_control.m"
}

#line 672 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 672 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 672 "par_loop_control.m"
{
#line 672 "par_loop_control.m"
  {
#line 672 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 672 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_23 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 672 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_24 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 672 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_23 == transform_hlds__par_loop_control__CastY_24);
#line 672 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 672 "par_loop_control.m"
    else
#line 672 "par_loop_control.m"
      {
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeInfo_26_26;
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 2)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 3)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 4)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 5)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 6)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 7)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 8)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 9)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 3)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 4)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 5)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 6)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 7)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 8)));
#line 672 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 9)));

#line 2982 "transform_hlds.par_loop_control.c"
        {
#line 2984 "transform_hlds.par_loop_control.c"
          transform_hlds__par_loop_control__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__par_loop_control__V_3_3, transform_hlds__par_loop_control__V_13_13);
        }
#line 672 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
          {
#line 2991 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__TypeInfo_26_26 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 2993 "transform_hlds.par_loop_control.c"
            {
#line 2995 "transform_hlds.par_loop_control.c"
              transform_hlds__par_loop_control__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__par_loop_control__TypeInfo_26_26, ((MR_Box) (transform_hlds__par_loop_control__V_4_4)), ((MR_Box) (transform_hlds__par_loop_control__V_14_14)));
            }
#line 672 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
              {
#line 3002 "transform_hlds.par_loop_control.c"
                {
#line 3004 "transform_hlds.par_loop_control.c"
                  transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_5_5, transform_hlds__par_loop_control__V_15_15);
                }
#line 672 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                  {
#line 3011 "transform_hlds.par_loop_control.c"
                    {
#line 3013 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_6_6, transform_hlds__par_loop_control__V_16_16);
                    }
#line 672 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                      {
#line 3020 "transform_hlds.par_loop_control.c"
                        {
#line 3022 "transform_hlds.par_loop_control.c"
                          transform_hlds__par_loop_control__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_7_7, transform_hlds__par_loop_control__V_17_17);
                        }
#line 672 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                          {
#line 3029 "transform_hlds.par_loop_control.c"
                            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_8_8 == transform_hlds__par_loop_control__V_18_18);
#line 672 "par_loop_control.m"
                            if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                              {
#line 3035 "transform_hlds.par_loop_control.c"
                                {
#line 3037 "transform_hlds.par_loop_control.c"
                                  transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_9_9, transform_hlds__par_loop_control__V_19_19);
                                }
#line 672 "par_loop_control.m"
                                if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                                  {
#line 3044 "transform_hlds.par_loop_control.c"
                                    {
#line 3046 "transform_hlds.par_loop_control.c"
                                      transform_hlds__par_loop_control__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_10_10, transform_hlds__par_loop_control__V_20_20);
                                    }
#line 672 "par_loop_control.m"
                                    if (transform_hlds__par_loop_control__succeeded)
#line 672 "par_loop_control.m"
                                      {
#line 3053 "transform_hlds.par_loop_control.c"
                                        {
#line 3055 "transform_hlds.par_loop_control.c"
                                          transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_11_11, transform_hlds__par_loop_control__V_21_21);
                                        }
#line 672 "par_loop_control.m"
                                        if (transform_hlds__par_loop_control__succeeded)
#line 3060 "transform_hlds.par_loop_control.c"
                                          {
#line 3062 "transform_hlds.par_loop_control.c"
                                            return transform_hlds__par_loop_control__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_12_12, transform_hlds__par_loop_control__V_22_22);
                                          }
#line 672 "par_loop_control.m"
                                      }
#line 672 "par_loop_control.m"
                                  }
#line 672 "par_loop_control.m"
                              }
#line 672 "par_loop_control.m"
                          }
#line 672 "par_loop_control.m"
                      }
#line 672 "par_loop_control.m"
                  }
#line 672 "par_loop_control.m"
              }
#line 672 "par_loop_control.m"
          }
#line 672 "par_loop_control.m"
      }
#line 672 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 672 "par_loop_control.m"
  }
#line 672 "par_loop_control.m"
}

#line 694 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
#line 694 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 694 "par_loop_control.m"
{
#line 694 "par_loop_control.m"
  {
#line 694 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 694 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 694 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 694 "par_loop_control.m"
    {
#line 694 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 694 "par_loop_control.m"
      return;
    }
#line 694 "par_loop_control.m"
  }
#line 694 "par_loop_control.m"
}

#line 694 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 694 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 694 "par_loop_control.m"
{
#line 3131 "transform_hlds.par_loop_control.c"
  {
#line 3133 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 3136 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 3138 "transform_hlds.par_loop_control.c"
  }
#line 694 "par_loop_control.m"
}

#line 1301 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
#line 1301 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 1301 "par_loop_control.m"
{
#line 1301 "par_loop_control.m"
  {
#line 1301 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1301 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 1301 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 1301 "par_loop_control.m"
    {
#line 1301 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 1301 "par_loop_control.m"
      return;
    }
#line 1301 "par_loop_control.m"
  }
#line 1301 "par_loop_control.m"
}

#line 1301 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 1301 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 1301 "par_loop_control.m"
{
#line 3184 "transform_hlds.par_loop_control.c"
  {
#line 3186 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 3189 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 3191 "transform_hlds.par_loop_control.c"
  }
#line 1301 "par_loop_control.m"
}

#line 1510 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
#line 1510 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1510 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1510 "par_loop_control.m"
{
#line 1513 "par_loop_control.m"
  {
#line 1513 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1513 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_4;
#line 1513 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_5;

#line 1539 "par_loop_control.m"
    {
#line 1539 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_3, (MR_Word) &transform_hlds__par_loop_control_scalar_common_8[1], (MR_String) "lc_join_and_terminate", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_4, &transform_hlds__par_loop_control__ProcId_5);
    }
#line 1513 "par_loop_control.m"
    {
#line 1513 "par_loop_control.m"
      MR_Word base;
#line 1513 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = base;
#line 1513 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_4));
#line 1513 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_5));
#line 1513 "par_loop_control.m"
    }
#line 1513 "par_loop_control.m"
  }
#line 1510 "par_loop_control.m"
}

#line 1505 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void)
#line 1505 "par_loop_control.m"
{
#line 1507 "par_loop_control.m"
  {
#line 1507 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1507 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[10]);
#line 1507 "par_loop_control.m"
  }
#line 1505 "par_loop_control.m"
}

#line 1479 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
#line 1479 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_4,
#line 1479 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredId_5,
#line 1479 "par_loop_control.m"
  MR_Integer * transform_hlds__par_loop_control__ProcId_6)
#line 1479 "par_loop_control.m"
{
#line 1482 "par_loop_control.m"
  {
#line 1482 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1539 "par_loop_control.m"
    {
#line 1539 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_4, (MR_Word) &transform_hlds__par_loop_control_scalar_common_8[1], (MR_String) "lc_default_num_contexts", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__par_loop_control__PredId_5, transform_hlds__par_loop_control__ProcId_6);
#line 1539 "par_loop_control.m"
      return;
    }
#line 1482 "par_loop_control.m"
  }
#line 1479 "par_loop_control.m"
}

#line 1473 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void)
#line 1473 "par_loop_control.m"
{
#line 1475 "par_loop_control.m"
  {
#line 1475 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1475 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[9]);
#line 1475 "par_loop_control.m"
  }
#line 1473 "par_loop_control.m"
}

#line 1463 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
#line 1463 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1463 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1463 "par_loop_control.m"
{
#line 1465 "par_loop_control.m"
  {
#line 1465 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1465 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_4;
#line 1465 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_5;

#line 1539 "par_loop_control.m"
    {
#line 1539 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_3, (MR_Word) &transform_hlds__par_loop_control_scalar_common_8[1], (MR_String) "lc_wait_free_slot", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_4, &transform_hlds__par_loop_control__ProcId_5);
    }
#line 1465 "par_loop_control.m"
    {
#line 1465 "par_loop_control.m"
      MR_Word base;
#line 1465 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = base;
#line 1465 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_4));
#line 1465 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_5));
#line 1465 "par_loop_control.m"
    }
#line 1465 "par_loop_control.m"
  }
#line 1463 "par_loop_control.m"
}

#line 1454 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void)
#line 1454 "par_loop_control.m"
{
#line 1456 "par_loop_control.m"
  {
#line 1456 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1456 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[8]);
#line 1456 "par_loop_control.m"
  }
#line 1454 "par_loop_control.m"
}

#line 1443 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void)
#line 1443 "par_loop_control.m"
{
#line 1445 "par_loop_control.m"
  {
#line 1445 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1445 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]);
#line 1445 "par_loop_control.m"
  }
#line 1443 "par_loop_control.m"
}

#line 1436 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
#line 1436 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1436 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1436 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1436 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 1436 "par_loop_control.m"
{
#line 1436 "par_loop_control.m"
  {
#line 1436 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__4_19;

#line 1436 "par_loop_control.m"
    {
#line 1436 "par_loop_control.m"
      transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1436__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv0_HeadVar__4_19);
    }
#line 1436 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__4_19));
#line 1436 "par_loop_control.m"
  }
#line 1436 "par_loop_control.m"
}

#line 1430 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
#line 1430 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1430 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldInstmapDelta_5,
#line 1430 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13)
#line 1430 "par_loop_control.m"
{
#line 1433 "par_loop_control.m"
  {
#line 1433 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1433 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__VarInsts_7;
#line 1433 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14;
#line 1433 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_15_15;
#line 1436 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13;

#line 1434 "par_loop_control.m"
    {
#line 1434 "par_loop_control.m"
      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__par_loop_control__OldInstmapDelta_5, &transform_hlds__par_loop_control__VarInsts_7);
    }
#line 1435 "par_loop_control.m"
    {
#line 1435 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14);
    }
#line 1436 "par_loop_control.m"
    {
#line 1436 "par_loop_control.m"
      transform_hlds__par_loop_control__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_9[0]));
#line 1436 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 1) = ((MR_Box) (transform_hlds__par_loop_control__remap_instmap_3_p_0_1));
#line 1436 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1436 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 3) = ((MR_Box) (transform_hlds__par_loop_control__Remap_4));
#line 1436 "par_loop_control.m"
    }
#line 1436 "par_loop_control.m"
    {
#line 1436 "par_loop_control.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_2[1], (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, transform_hlds__par_loop_control__V_15_15, transform_hlds__par_loop_control__VarInsts_7, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14)), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13);
    }
#line 1436 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13 = ((MR_Word) transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13);
#line 1433 "par_loop_control.m"
  }
#line 1430 "par_loop_control.m"
}

#line 1416 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVarSet_10,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVar_11,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__VarType_12,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18,
#line 1416 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20,
#line 1416 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21,
#line 1416 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22,
#line 1416 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23)
#line 1416 "par_loop_control.m"
{
#line 1421 "par_loop_control.m"
  {
#line 1421 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1421 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_31_31;
#line 1421 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Var_17;
#line 1424 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__Name_16;

#line 1422 "par_loop_control.m"
    {
#line 1422 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__OldVarSet_10, transform_hlds__par_loop_control__OldVar_11, &transform_hlds__par_loop_control__Name_16);
    }
#line 1424 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 1423 "par_loop_control.m"
      {
#line 1423 "par_loop_control.m"
        {
#line 1423 "par_loop_control.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__Name_16, &transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19);
        }
#line 1423 "par_loop_control.m"
      }
#line 1424 "par_loop_control.m"
    else
#line 1425 "par_loop_control.m"
      {
#line 1425 "par_loop_control.m"
        {
#line 1425 "par_loop_control.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19);
        }
#line 1425 "par_loop_control.m"
      }
#line 1427 "par_loop_control.m"
    {
#line 1427 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__VarType_12, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21);
    }
#line 3534 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_31_31 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1428 "par_loop_control.m"
    {
#line 1428 "par_loop_control.m"
      mercury__map__det_insert_4_p_0(transform_hlds__par_loop_control__TypeInfo_31_31, transform_hlds__par_loop_control__TypeInfo_31_31, ((MR_Box) (transform_hlds__par_loop_control__OldVar_11)), ((MR_Box) (transform_hlds__par_loop_control__Var_17)), transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22, transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23);
#line 1428 "par_loop_control.m"
      return;
    }
#line 1421 "par_loop_control.m"
  }
#line 1416 "par_loop_control.m"
}

#line 1345 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2)
#line 1345 "par_loop_control.m"
{
#line 1345 "par_loop_control.m"
  {
#line 1345 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1345 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv6_HeadVar__3_115;

#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1345__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv6_HeadVar__3_115);
    }
#line 1345 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv6_HeadVar__3_115));
#line 1345 "par_loop_control.m"
  }
#line 1345 "par_loop_control.m"
}

#line 1343 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3,
#line 1343 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_5,
#line 1343 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_6,
#line 1343 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_7,
#line 1343 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_8)
#line 1343 "par_loop_control.m"
{
#line 1343 "par_loop_control.m"
  {
#line 1343 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1343 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19;
#line 1343 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21;
#line 1343 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23;

#line 1343 "par_loop_control.m"
    {
#line 1343 "par_loop_control.m"
      transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3), &transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_5), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_7), &transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23);
    }
#line 1343 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19));
#line 1343 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_6 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21));
#line 1343 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_8 = ((MR_Box) (transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23));
#line 1343 "par_loop_control.m"
  }
#line 1343 "par_loop_control.m"
}

#line 1326 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_7,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredProcId_8,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredName_9,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_10,
#line 1326 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46,
#line 1326 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47)
#line 1326 "par_loop_control.m"
{
#line 1330 "par_loop_control.m"
  {
#line 1330 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_100_100;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_109_109;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_110_110;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_117_117;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__PredProcId_7, (MR_Integer) 0)));
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredInfo_14;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVarTypes_15;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars0_16;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_17;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigGoal_18;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigInstmapDelta_19;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldVarSet_22;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Remap_23;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars_24;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarmaps0_25;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarmaps_26;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NumContextsVar_27;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28;
#line 1330 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GetNumContextsGoalInfo_30;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GetNumContextsGoal_31;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_32;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCCreateGoal_33;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerCallArgs_34;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_35;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_36;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerProcCallGoalInfo_37;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerPredId_38;
#line 1330 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__InnerProcId_39;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerProcCallGoal_40;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ConjGoalInfo_41;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ConjGoal_42;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigPurity_43;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Body_44;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_48_48;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_51_51;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_54_54;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_55_55;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_57_57;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_65_65;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_66_66;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_69_69;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_71_71;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_76_76;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_80_80;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_83_83;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_85_85;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_87_87;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_88_88;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_89_89;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_91_91;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95;
#line 1330 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96;
#line 1331 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__PredProcId_7, (MR_Integer) 1)));
#line 1337 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_98_98;
#line 1343 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52;
#line 1343 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53;
#line 1343 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv3_Remap_23;
#line 1395 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_99_99;

#line 1332 "par_loop_control.m"
    {
#line 1332 "par_loop_control.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__par_loop_control__ModuleInfo_10, transform_hlds__par_loop_control__PredId_12, &transform_hlds__par_loop_control__PredInfo_14);
    }
#line 1333 "par_loop_control.m"
    {
#line 1333 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__par_loop_control__PredInfo_14, &transform_hlds__par_loop_control__HeadVarTypes_15);
    }
#line 1334 "par_loop_control.m"
    {
#line 1334 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__HeadVars0_16);
    }
#line 1335 "par_loop_control.m"
    {
#line 1335 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__Detism_17);
    }
#line 1336 "par_loop_control.m"
    {
#line 1336 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__OrigGoal_18);
    }
#line 1337 "par_loop_control.m"
    transform_hlds__par_loop_control__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 0)));
#line 1337 "par_loop_control.m"
    transform_hlds__par_loop_control__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 1)));
#line 1337 "par_loop_control.m"
    {
#line 1337 "par_loop_control.m"
      transform_hlds__par_loop_control__OrigInstmapDelta_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__par_loop_control__V_48_48);
    }
#line 3824 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1340 "par_loop_control.m"
    {
#line 1340 "par_loop_control.m"
      mercury__varset__init_1_p_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49);
    }
#line 1341 "par_loop_control.m"
    {
#line 1341 "par_loop_control.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50);
    }
#line 1342 "par_loop_control.m"
    {
#line 1342 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__OldVarSet_22);
    }
#line 1343 "par_loop_control.m"
    {
#line 1343 "par_loop_control.m"
      transform_hlds__par_loop_control__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[1]));
#line 1343 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_1));
#line 1343 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1343 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 3) = ((MR_Box) (transform_hlds__par_loop_control__OldVarSet_22));
#line 1343 "par_loop_control.m"
    }
#line 3855 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_109_109 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1343 "par_loop_control.m"
    {
#line 1343 "par_loop_control.m"
      transform_hlds__par_loop_control__V_54_54 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeInfo_109_109);
    }
#line 3862 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1343 "par_loop_control.m"
    {
#line 1343 "par_loop_control.m"
      mercury__list__foldl3_corresponding_9_p_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeCtorInfo_110_110, (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__par_loop_control_scalar_common_2[0], transform_hlds__par_loop_control__V_51_51, transform_hlds__par_loop_control__HeadVars0_16, transform_hlds__par_loop_control__HeadVarTypes_15, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49)), &transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50)), &transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53, ((MR_Box) (transform_hlds__par_loop_control__V_54_54)), &transform_hlds__par_loop_control__conv3_Remap_23);
    }
#line 1343 "par_loop_control.m"
    transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52 = ((MR_Word) transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52);
#line 1343 "par_loop_control.m"
    transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53 = ((MR_Word) transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53);
#line 1343 "par_loop_control.m"
    transform_hlds__par_loop_control__Remap_23 = ((MR_Word) transform_hlds__par_loop_control__conv3_Remap_23);
#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      transform_hlds__par_loop_control__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[3]));
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_2));
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 3) = ((MR_Box) (transform_hlds__par_loop_control__Remap_23));
#line 1345 "par_loop_control.m"
    }
#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      mercury__list__map_3_p_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__V_55_55, transform_hlds__par_loop_control__HeadVars0_16, &transform_hlds__par_loop_control__HeadVars_24);
    }
#line 1346 "par_loop_control.m"
    {
#line 1346 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__par_loop_control__HeadVars_24, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56);
    }
#line 1349 "par_loop_control.m"
    {
#line 1349 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__par_loop_control__RttiVarmaps0_25);
    }
#line 3904 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_117_117 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[2];
#line 1350 "par_loop_control.m"
    {
#line 1350 "par_loop_control.m"
      transform_hlds__par_loop_control__V_57_57 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_117_117, transform_hlds__par_loop_control__TypeInfo_117_117);
    }
#line 1350 "par_loop_control.m"
    {
#line 1350 "par_loop_control.m"
      transform_hlds__par_loop_control__V_58_58 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_117_117, transform_hlds__par_loop_control__TypeCtorInfo_110_110);
    }
#line 1350 "par_loop_control.m"
    {
#line 1350 "par_loop_control.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__par_loop_control__V_57_57, transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__Remap_23, transform_hlds__par_loop_control__RttiVarmaps0_25, &transform_hlds__par_loop_control__RttiVarmaps_26);
    }
#line 1352 "par_loop_control.m"
    {
#line 1352 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__par_loop_control__RttiVarmaps_26, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59);
    }
#line 1358 "par_loop_control.m"
    {
#line 1358 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, (MR_String) "NumContexts", &transform_hlds__par_loop_control__NumContextsVar_27, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61);
    }
#line 1359 "par_loop_control.m"
    {
#line 1359 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__NumContextsVar_27, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_8[0]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63);
    }
#line 1361 "par_loop_control.m"
    {
#line 1361 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(transform_hlds__par_loop_control__ModuleInfo_10, &transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28, &transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29);
    }
#line 1363 "par_loop_control.m"
    {
#line 1363 "par_loop_control.m"
      transform_hlds__par_loop_control__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_69_69, 0) = ((MR_Box) (transform_hlds__par_loop_control__NumContextsVar_27));
#line 1363 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "par_loop_control.m"
    }
#line 1363 "par_loop_control.m"
    {
#line 1363 "par_loop_control.m"
      transform_hlds__par_loop_control__V_65_65 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__V_69_69);
    }
#line 1363 "par_loop_control.m"
    {
#line 1363 "par_loop_control.m"
      transform_hlds__par_loop_control__V_66_66 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__par_loop_control__NumContextsVar_27);
    }
#line 1363 "par_loop_control.m"
    {
#line 1363 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_65_65, transform_hlds__par_loop_control__V_66_66, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__par_loop_control__GetNumContextsGoalInfo_30);
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      transform_hlds__par_loop_control__V_76_76 = transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0();
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      transform_hlds__par_loop_control__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_69_69));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 5) = ((MR_Box) (transform_hlds__par_loop_control__V_76_76));
#line 1366 "par_loop_control.m"
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      transform_hlds__par_loop_control__GetNumContextsGoal_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__GetNumContextsGoal_31, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_71_71));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__GetNumContextsGoal_31, 1) = ((MR_Box) (transform_hlds__par_loop_control__GetNumContextsGoalInfo_30));
#line 1366 "par_loop_control.m"
    }
#line 1372 "par_loop_control.m"
    {
#line 1372 "par_loop_control.m"
      transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(transform_hlds__par_loop_control__ModuleInfo_10, transform_hlds__par_loop_control__NumContextsVar_27, &transform_hlds__par_loop_control__LCVar_32, &transform_hlds__par_loop_control__LCCreateGoal_33, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78);
    }
#line 1376 "par_loop_control.m"
    {
#line 1376 "par_loop_control.m"
      transform_hlds__par_loop_control__InnerCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__InnerCallArgs_34, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_32));
#line 1376 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__InnerCallArgs_34, 1) = ((MR_Box) (transform_hlds__par_loop_control__HeadVars_24));
#line 1376 "par_loop_control.m"
    }
#line 1377 "par_loop_control.m"
    {
#line 1377 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__InnerCallArgs_34);
    }
#line 1380 "par_loop_control.m"
    {
#line 1380 "par_loop_control.m"
      transform_hlds__par_loop_control__remap_instmap_3_p_0(transform_hlds__par_loop_control__Remap_23, transform_hlds__par_loop_control__OrigInstmapDelta_19, &transform_hlds__par_loop_control__InstmapDelta_36);
    }
#line 1381 "par_loop_control.m"
    {
#line 1381 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__NonLocals_35, transform_hlds__par_loop_control__InstmapDelta_36, transform_hlds__par_loop_control__Detism_17, (MR_Integer) 2, &transform_hlds__par_loop_control__InnerProcCallGoalInfo_37);
    }
#line 1383 "par_loop_control.m"
    transform_hlds__par_loop_control__InnerPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerPredProcId_8, (MR_Integer) 0)));
#line 1383 "par_loop_control.m"
    transform_hlds__par_loop_control__InnerProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerPredProcId_8, (MR_Integer) 1)));
#line 1384 "par_loop_control.m"
    {
#line 1384 "par_loop_control.m"
      transform_hlds__par_loop_control__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredId_38));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcId_39));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 2) = ((MR_Box) (transform_hlds__par_loop_control__InnerCallArgs_34));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 5) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredName_9));
#line 1384 "par_loop_control.m"
    }
#line 1384 "par_loop_control.m"
    {
#line 1384 "par_loop_control.m"
      transform_hlds__par_loop_control__InnerProcCallGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerProcCallGoal_40, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_80_80));
#line 1384 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerProcCallGoal_40, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcCallGoalInfo_37));
#line 1384 "par_loop_control.m"
    }
#line 1389 "par_loop_control.m"
    {
#line 1389 "par_loop_control.m"
      transform_hlds__par_loop_control__V_83_83 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__HeadVars_24);
    }
#line 1389 "par_loop_control.m"
    {
#line 1389 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_83_83, transform_hlds__par_loop_control__InstmapDelta_36, transform_hlds__par_loop_control__Detism_17, (MR_Integer) 2, &transform_hlds__par_loop_control__ConjGoalInfo_41);
    }
#line 1392 "par_loop_control.m"
    {
#line 1392 "par_loop_control.m"
      transform_hlds__par_loop_control__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_89_89, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcCallGoal_40));
#line 1392 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1392 "par_loop_control.m"
    }
#line 1392 "par_loop_control.m"
    {
#line 1392 "par_loop_control.m"
      transform_hlds__par_loop_control__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_88_88, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCCreateGoal_33));
#line 1392 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_88_88, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_89_89));
#line 1392 "par_loop_control.m"
    }
#line 1391 "par_loop_control.m"
    {
#line 1391 "par_loop_control.m"
      transform_hlds__par_loop_control__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_87_87, 0) = ((MR_Box) (transform_hlds__par_loop_control__GetNumContextsGoal_31));
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_87_87, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_88_88));
#line 1391 "par_loop_control.m"
    }
#line 1391 "par_loop_control.m"
    {
#line 1391 "par_loop_control.m"
      transform_hlds__par_loop_control__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_87_87));
#line 1391 "par_loop_control.m"
    }
#line 1391 "par_loop_control.m"
    {
#line 1391 "par_loop_control.m"
      transform_hlds__par_loop_control__ConjGoal_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ConjGoal_42, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_85_85));
#line 1391 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ConjGoal_42, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjGoalInfo_41));
#line 1391 "par_loop_control.m"
    }
#line 1395 "par_loop_control.m"
    transform_hlds__par_loop_control__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 0)));
#line 1395 "par_loop_control.m"
    transform_hlds__par_loop_control__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 1)));
#line 1395 "par_loop_control.m"
    {
#line 1395 "par_loop_control.m"
      transform_hlds__par_loop_control__OrigPurity_43 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__par_loop_control__V_91_91);
    }
#line 1401 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__OrigPurity_43 == (MR_Integer) 2))
#line 1400 "par_loop_control.m"
      transform_hlds__par_loop_control__Body_44 = transform_hlds__par_loop_control__ConjGoal_42;
#line 1401 "par_loop_control.m"
    else
#line 1404 "par_loop_control.m"
      {
#line 1404 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalInfo_45;
#line 1404 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_93_93;
#line 1404 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_94_94;

#line 1406 "par_loop_control.m"
        {
#line 1406 "par_loop_control.m"
          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, transform_hlds__par_loop_control__ConjGoalInfo_41, &transform_hlds__par_loop_control__ScopeGoalInfo_45);
        }
#line 1407 "par_loop_control.m"
        {
#line 1407 "par_loop_control.m"
          transform_hlds__par_loop_control__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "par_loop_control.m"
          MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_94_94, 0) = ((MR_Box) (transform_hlds__par_loop_control__OrigPurity_43));
#line 1407 "par_loop_control.m"
        }
#line 1407 "par_loop_control.m"
        {
#line 1407 "par_loop_control.m"
          transform_hlds__par_loop_control__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1407 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_94_94));
#line 1407 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 2) = ((MR_Box) (transform_hlds__par_loop_control__ConjGoal_42));
#line 1407 "par_loop_control.m"
        }
#line 1407 "par_loop_control.m"
        {
#line 1407 "par_loop_control.m"
          transform_hlds__par_loop_control__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1407 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Body_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_93_93));
#line 1407 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Body_44, 1) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalInfo_45));
#line 1407 "par_loop_control.m"
        }
#line 1404 "par_loop_control.m"
      }
#line 1411 "par_loop_control.m"
    {
#line 1411 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__par_loop_control__Body_44, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95);
    }
#line 1412 "par_loop_control.m"
    {
#line 1412 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96);
    }
#line 1413 "par_loop_control.m"
    {
#line 1413 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47);
#line 1413 "par_loop_control.m"
      return;
    }
#line 1330 "par_loop_control.m"
  }
#line 1326 "par_loop_control.m"
}

#line 1307 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
#line 1307 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_4,
#line 1307 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal0_5,
#line 1307 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_6)
#line 1307 "par_loop_control.m"
{
#line 1312 "par_loop_control.m"
  {
#line 1312 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_5, (MR_Integer) 0)));
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 1)));
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_5, (MR_Integer) 1)));
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12;
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13;
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14;
#line 1312 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 0)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 2)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 3)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 4)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 5)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 6)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 7)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 8)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 9)));

#line 1315 "par_loop_control.m"
    {
#line 1315 "par_loop_control.m"
      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11);
    }
#line 1316 "par_loop_control.m"
    {
#line 1316 "par_loop_control.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__LCVar_10, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13);
    }
#line 1317 "par_loop_control.m"
    {
#line 1317 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14);
    }
#line 1319 "par_loop_control.m"
    {
#line 1319 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 1321 "par_loop_control.m"
    {
#line 1321 "par_loop_control.m"
      MR_Word base;
#line 1321 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_6 = base;
#line 1321 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_9));
#line 1321 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16));
#line 1321 "par_loop_control.m"
    }
#line 1312 "par_loop_control.m"
  }
#line 1307 "par_loop_control.m"
}

#line 1285 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
#line 1285 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_3,
#line 1285 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_4)
#line 1285 "par_loop_control.m"
{
#line 1288 "par_loop_control.m"
  {
#line 1288 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_5;
#line 1288 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_6;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_7;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_8;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_9;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_10;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_11;
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 0)));
#line 1288 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_13_13;
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 1)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 2)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 3)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 4)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 5)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 6)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 7)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 8)));
#line 1289 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 9)));
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_32_32;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_34_34;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_35_35;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_36_36;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_37_37;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_38_38;

#line 1539 "par_loop_control.m"
    {
#line 1539 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__V_12_12, (MR_Word) &transform_hlds__par_loop_control_scalar_common_8[1], (MR_String) "lc_finish", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_5, &transform_hlds__par_loop_control__ProcId_6);
    }
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 0)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 1)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 2)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 3)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 4)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 5)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 6)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 7)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 8)));
#line 1290 "par_loop_control.m"
    transform_hlds__par_loop_control__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 9)));
#line 1292 "par_loop_control.m"
    {
#line 1292 "par_loop_control.m"
      transform_hlds__par_loop_control__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_7));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "par_loop_control.m"
    }
#line 1292 "par_loop_control.m"
    {
#line 1292 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_5));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_6));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_13_13));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[7])));
#line 1292 "par_loop_control.m"
    }
#line 1294 "par_loop_control.m"
    {
#line 1294 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_13_13);
    }
#line 1295 "par_loop_control.m"
    {
#line 1295 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__InstmapDelta_10);
    }
#line 1296 "par_loop_control.m"
    {
#line 1296 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_11 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_9, transform_hlds__par_loop_control__InstmapDelta_10, (MR_Integer) 0);
    }
#line 1297 "par_loop_control.m"
    {
#line 1297 "par_loop_control.m"
      MR_Word base;
#line 1297 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1297 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_4 = base;
#line 1297 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_8));
#line 1297 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_11));
#line 1297 "par_loop_control.m"
    }
#line 1288 "par_loop_control.m"
  }
#line 1285 "par_loop_control.m"
}

#line 1269 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
#line 1269 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_5,
#line 1269 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCVar_6,
#line 1269 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCSVar_7,
#line 1269 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_8)
#line 1269 "par_loop_control.m"
{
#line 1272 "par_loop_control.m"
  {
#line 1272 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_9;
#line 1272 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_10;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 9)));
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_12;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_13;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_14;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_15;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 8)));
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17;
#line 1272 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18;
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 0)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 1)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 2)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 3)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 4)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 5)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 6)));
#line 1273 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 7)));

#line 1273 "par_loop_control.m"
    transform_hlds__par_loop_control__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_16_16, (MR_Integer) 0)));
#line 1273 "par_loop_control.m"
    transform_hlds__par_loop_control__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_16_16, (MR_Integer) 1)));
#line 1276 "par_loop_control.m"
    {
#line 1276 "par_loop_control.m"
      transform_hlds__par_loop_control__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_18_18, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCSVar_7));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "par_loop_control.m"
    }
#line 1276 "par_loop_control.m"
    {
#line 1276 "par_loop_control.m"
      transform_hlds__par_loop_control__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_17_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_6));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_17_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_18_18));
#line 1276 "par_loop_control.m"
    }
#line 1276 "par_loop_control.m"
    {
#line 1276 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_9));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_10));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_17_17));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_11));
#line 1276 "par_loop_control.m"
    }
#line 1278 "par_loop_control.m"
    {
#line 1278 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_17_17);
    }
#line 1279 "par_loop_control.m"
    {
#line 1279 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__InstmapDelta_14);
    }
#line 1280 "par_loop_control.m"
    {
#line 1280 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_15 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_13, transform_hlds__par_loop_control__InstmapDelta_14, (MR_Integer) 0);
    }
#line 1281 "par_loop_control.m"
    {
#line 1281 "par_loop_control.m"
      MR_Word base;
#line 1281 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_8 = base;
#line 1281 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_12));
#line 1281 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_15));
#line 1281 "par_loop_control.m"
    }
#line 1272 "par_loop_control.m"
  }
#line 1269 "par_loop_control.m"
}

#line 1252 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_9,
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__NumContextsVar_10,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCVar_11,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_12,
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 1252 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 1252 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22)
#line 1252 "par_loop_control.m"
{
#line 1257 "par_loop_control.m"
  {
#line 1257 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCCreatePredId_15;
#line 1257 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__LCCreateProcId_16;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_17;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_18;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33;
#line 1257 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_34_34;

#line 1258 "par_loop_control.m"
    {
#line 1258 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_40_40, (MR_String) "LC", transform_hlds__par_loop_control__LCVar_11, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20);
    }
#line 1259 "par_loop_control.m"
    {
#line 1259 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__par_loop_control__LCVar_11, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);
    }
#line 1539 "par_loop_control.m"
    {
#line 1539 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_9, (MR_Word) &transform_hlds__par_loop_control_scalar_common_8[1], (MR_String) "lc_create", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__LCCreatePredId_15, &transform_hlds__par_loop_control__LCCreateProcId_16);
    }
#line 1262 "par_loop_control.m"
    {
#line 1262 "par_loop_control.m"
      transform_hlds__par_loop_control__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_28_28, 0) = ((MR_Box) (*transform_hlds__par_loop_control__LCVar_11));
#line 1262 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1262 "par_loop_control.m"
    }
#line 1261 "par_loop_control.m"
    {
#line 1261 "par_loop_control.m"
      transform_hlds__par_loop_control__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_27_27, 0) = ((MR_Box) (transform_hlds__par_loop_control__NumContextsVar_10));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_27_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_28_28));
#line 1261 "par_loop_control.m"
    }
#line 1261 "par_loop_control.m"
    {
#line 1261 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCCreatePredId_15));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCCreateProcId_16));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_27_27));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[6])));
#line 1261 "par_loop_control.m"
    }
#line 1263 "par_loop_control.m"
    {
#line 1263 "par_loop_control.m"
      transform_hlds__par_loop_control__V_33_33 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_40_40, transform_hlds__par_loop_control__V_27_27);
    }
#line 1263 "par_loop_control.m"
    {
#line 1263 "par_loop_control.m"
      transform_hlds__par_loop_control__V_34_34 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__par_loop_control__LCVar_11);
    }
#line 1263 "par_loop_control.m"
    {
#line 1263 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_33_33, transform_hlds__par_loop_control__V_34_34, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__par_loop_control__GoalInfo_18);
    }
#line 1265 "par_loop_control.m"
    {
#line 1265 "par_loop_control.m"
      MR_Word base;
#line 1265 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_12 = base;
#line 1265 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_17));
#line 1265 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_18));
#line 1265 "par_loop_control.m"
    }
#line 1257 "par_loop_control.m"
  }
#line 1252 "par_loop_control.m"
}

#line 1231 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
#line 1231 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_8,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCSVar_9,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_10,
#line 1231 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22,
#line 1231 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23,
#line 1231 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24)
#line 1231 "par_loop_control.m"
{
#line 1236 "par_loop_control.m"
  {
#line 1236 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_13;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_14;
#line 1236 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_15;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SymName_16;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_17;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_18;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_19;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_20;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 1236 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_44_44;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_39_39;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_40_40;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_41_41;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_42_42;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_43_43;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_46_46;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_47_47;

#line 1237 "par_loop_control.m"
    {
#line 1237 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_66_66, (MR_String) "LCS", transform_hlds__par_loop_control__LCSVar_9, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22);
    }
#line 1238 "par_loop_control.m"
    {
#line 1238 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__par_loop_control__LCSVar_9, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_8[0]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24);
    }
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 0)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 1)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 2)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 3)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 4)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 5)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 6)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 7)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 8)));
#line 1239 "par_loop_control.m"
    transform_hlds__par_loop_control__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 9)));
#line 1240 "par_loop_control.m"
    transform_hlds__par_loop_control__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_44_44, (MR_Integer) 0)));
#line 1240 "par_loop_control.m"
    transform_hlds__par_loop_control__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_44_44, (MR_Integer) 1)));
#line 1243 "par_loop_control.m"
    {
#line 1243 "par_loop_control.m"
      transform_hlds__par_loop_control__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_31_31, 0) = ((MR_Box) (*transform_hlds__par_loop_control__LCSVar_9));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "par_loop_control.m"
    }
#line 1243 "par_loop_control.m"
    {
#line 1243 "par_loop_control.m"
      transform_hlds__par_loop_control__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_30_30, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_13));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_30_30, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_31_31));
#line 1243 "par_loop_control.m"
    }
#line 1243 "par_loop_control.m"
    {
#line 1243 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_14));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_15));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_30_30));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_16));
#line 1243 "par_loop_control.m"
    }
#line 1245 "par_loop_control.m"
    {
#line 1245 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_66_66, transform_hlds__par_loop_control__V_30_30);
    }
#line 1246 "par_loop_control.m"
    {
#line 1246 "par_loop_control.m"
      transform_hlds__par_loop_control__InstmapDelta_19 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__par_loop_control__LCSVar_9);
    }
#line 1247 "par_loop_control.m"
    {
#line 1247 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_20 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_18, transform_hlds__par_loop_control__InstmapDelta_19, (MR_Integer) 0);
    }
#line 1248 "par_loop_control.m"
    {
#line 1248 "par_loop_control.m"
      MR_Word base;
#line 1248 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_10 = base;
#line 1248 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_17));
#line 1248 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_20));
#line 1248 "par_loop_control.m"
    }
#line 1236 "par_loop_control.m"
  }
#line 1231 "par_loop_control.m"
}

#line 1217 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
#line 1217 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1217 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1217 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11,
#line 1217 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_12,
#line 1217 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_9)
#line 1217 "par_loop_control.m"
{
#line 1223 "par_loop_control.m"
  {
#line 1223 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1223 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 2)));
#line 1223 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14;
#line 1223 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 0)));
#line 1223 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 1)));
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18;
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19;
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20;

#line 1224 "par_loop_control.m"
    {
#line 1224 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(transform_hlds__par_loop_control__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_9, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_13_13, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14);
    }
#line 1226 "par_loop_control.m"
    transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 0)));
#line 1226 "par_loop_control.m"
    transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 1)));
#line 1226 "par_loop_control.m"
    transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 2)));
#line 1226 "par_loop_control.m"
    {
#line 1226 "par_loop_control.m"
      MR_Word base;
#line 1226 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "par_loop_control.m"
      *transform_hlds__par_loop_control__STATE_VARIABLE_Case_12 = base;
#line 1226 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_18_18));
#line 1226 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_19_19));
#line 1226 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14));
#line 1226 "par_loop_control.m"
    }
#line 1223 "par_loop_control.m"
  }
#line 1217 "par_loop_control.m"
}

#line 1189 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
#line 1189 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1189 "par_loop_control.m"
{
#line 1189 "par_loop_control.m"
  {
#line 1189 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1189 "par_loop_control.m"
    MR_builtin_longjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
#line 1189 "par_loop_control.m"
  }
#line 1189 "par_loop_control.m"
}

#line 1189 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
#line 1189 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1189 "par_loop_control.m"
{
#line 1189 "par_loop_control.m"
  {
#line 1189 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1189 "par_loop_control.m"
    {
#line 1189 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__goal_util__goal_calls_2_p_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15);
    }
#line 1189 "par_loop_control.m"
    (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded);
#line 1189 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1189 "par_loop_control.m"
      {
#line 1189 "par_loop_control.m"
        transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(transform_hlds__par_loop_control__env_ptr);
#line 1189 "par_loop_control.m"
        return;
      }
#line 1189 "par_loop_control.m"
  }
#line 1189 "par_loop_control.m"
}

#line 1189 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
#line 1189 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1189 "par_loop_control.m"
{
#line 1189 "par_loop_control.m"
  {
#line 1189 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1189 "par_loop_control.m"
    if (MR_builtin_setjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
#line 1189 "par_loop_control.m"
      {
#line 1189 "par_loop_control.m"
        {
#line 1189 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 3)));
#line 1189 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 9)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 8)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 7)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 6)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 5)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 4)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 1195 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));

#line 1195 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = transform_hlds__par_loop_control__V_41_41;
#line 1195 "par_loop_control.m"
          {
#line 1195 "par_loop_control.m"
            transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(transform_hlds__par_loop_control__env_ptr);
          }
#line 1197 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = transform_hlds__par_loop_control__V_40_40;
#line 1197 "par_loop_control.m"
          {
#line 1197 "par_loop_control.m"
            transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(transform_hlds__par_loop_control__env_ptr);
          }
#line 1189 "par_loop_control.m"
        }
#line 1189 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
#line 1189 "par_loop_control.m"
      }
#line 1189 "par_loop_control.m"
    else
#line 1189 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
#line 1189 "par_loop_control.m"
  }
#line 1189 "par_loop_control.m"
}

#line 1180 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1180 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3,
#line 1180 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__4_4,
#line 1180 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__5_5)
#line 1180 "par_loop_control.m"
{
#line 1180 "par_loop_control.m"
  {
#line 1180 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s transform_hlds__par_loop_control__env;

#line 1180 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1_1;
#line 1184 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1184 "par_loop_control.m"
      {
#line 1184 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1184 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1184 "par_loop_control.m"
      }
#line 1184 "par_loop_control.m"
    else
#line 1187 "par_loop_control.m"
      {
#line 1187 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs0_12;
#line 1187 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conj_13;
#line 1187 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs_14;

#line 1187 "par_loop_control.m"
        (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__4_4, (MR_Integer) 0)));
#line 1187 "par_loop_control.m"
        transform_hlds__par_loop_control__Conjs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__4_4, (MR_Integer) 1)));
#line 1189 "par_loop_control.m"
        {
#line 1189 "par_loop_control.m"
          transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(&transform_hlds__par_loop_control__env);
        }
#line 1205 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1202 "par_loop_control.m"
          {
#line 1202 "par_loop_control.m"
            transform_hlds__par_loop_control__Conj_13 = (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
#line 1203 "par_loop_control.m"
            {
#line 1203 "par_loop_control.m"
              transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, transform_hlds__par_loop_control__HeadVar__2_2, transform_hlds__par_loop_control__HeadVar__3_3, transform_hlds__par_loop_control__Conjs0_12, &transform_hlds__par_loop_control__Conjs_14);
            }
#line 1202 "par_loop_control.m"
          }
#line 1205 "par_loop_control.m"
        else
#line 1208 "par_loop_control.m"
          {
#line 1207 "par_loop_control.m"
            {
#line 1207 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, transform_hlds__par_loop_control__HeadVar__2_2, transform_hlds__par_loop_control__HeadVar__3_3, (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, &transform_hlds__par_loop_control__Conj_13);
            }
#line 1211 "par_loop_control.m"
            transform_hlds__par_loop_control__Conjs_14 = transform_hlds__par_loop_control__Conjs0_12;
#line 1208 "par_loop_control.m"
          }
#line 1187 "par_loop_control.m"
        {
#line 1187 "par_loop_control.m"
          MR_Word base;
#line 1187 "par_loop_control.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__5_5 = base;
#line 1187 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__Conj_13));
#line 1187 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_14));
#line 1187 "par_loop_control.m"
        }
#line 1187 "par_loop_control.m"
      }
#line 1180 "par_loop_control.m"
  }
#line 1180 "par_loop_control.m"
}

#line 1135 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
#line 1135 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1135 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1135 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 1135 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 1135 "par_loop_control.m"
{
#line 1135 "par_loop_control.m"
  {
#line 1135 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1135 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12;
#line 1135 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_FixupGoalInfo_9;

#line 1135 "par_loop_control.m"
    {
#line 1135 "par_loop_control.m"
      transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12, &transform_hlds__par_loop_control__conv0_FixupGoalInfo_9);
    }
#line 1135 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12));
#line 1135 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv0_FixupGoalInfo_9));
#line 1135 "par_loop_control.m"
  }
#line 1135 "par_loop_control.m"
}

#line 1125 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
#line 1125 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg)
#line 1125 "par_loop_control.m"
{
#line 1125 "par_loop_control.m"
  {
#line 1125 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1125 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;

#line 1125 "par_loop_control.m"
    {
#line 1125 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1125__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))));
    }
#line 1125 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1125 "par_loop_control.m"
  }
#line 1125 "par_loop_control.m"
}

#line 1114 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
#line 1114 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg)
#line 1114 "par_loop_control.m"
{
#line 1114 "par_loop_control.m"
  {
#line 1114 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1114 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;

#line 1114 "par_loop_control.m"
    {
#line 1114 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1114__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))));
    }
#line 1114 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1114 "par_loop_control.m"
  }
#line 1114 "par_loop_control.m"
}

#line 1085 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
#line 1085 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1085 "par_loop_control.m"
{
#line 1085 "par_loop_control.m"
  {
#line 1085 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1085 "par_loop_control.m"
    MR_builtin_longjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
#line 1085 "par_loop_control.m"
  }
#line 1085 "par_loop_control.m"
}

#line 1085 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
#line 1085 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1085 "par_loop_control.m"
{
#line 1085 "par_loop_control.m"
  {
#line 1085 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1085 "par_loop_control.m"
    {
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_200_200;
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_201_201;
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_202_202;
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_203_203;
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_204_204;
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_205_205;
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1087 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));

#line 1087 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1087 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1087 "par_loop_control.m"
      transform_hlds__par_loop_control__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1087 "par_loop_control.m"
      transform_hlds__par_loop_control__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1087 "par_loop_control.m"
      transform_hlds__par_loop_control__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1087 "par_loop_control.m"
      transform_hlds__par_loop_control__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1087 "par_loop_control.m"
      transform_hlds__par_loop_control__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1087 "par_loop_control.m"
      transform_hlds__par_loop_control__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1087 "par_loop_control.m"
      {
#line 1087 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207);
      }
#line 1088 "par_loop_control.m"
      if (!((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded))
#line 1089 "par_loop_control.m"
        {
#line 1089 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206);
        }
#line 1088 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1088 "par_loop_control.m"
        {
#line 1088 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(transform_hlds__par_loop_control__env_ptr);
#line 1088 "par_loop_control.m"
          return;
        }
#line 1085 "par_loop_control.m"
    }
#line 1085 "par_loop_control.m"
  }
#line 1085 "par_loop_control.m"
}

#line 1085 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
#line 1085 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1085 "par_loop_control.m"
{
#line 1085 "par_loop_control.m"
  {
#line 1085 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1085 "par_loop_control.m"
    if (MR_builtin_setjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
#line 1085 "par_loop_control.m"
      {
#line 1085 "par_loop_control.m"
        {
#line 1085 "par_loop_control.m"
          hlds__goal_util__goal_calls_2_p_1((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &(transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2, transform_hlds__par_loop_control__env_ptr);
        }
#line 1085 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
#line 1085 "par_loop_control.m"
      }
#line 1085 "par_loop_control.m"
    else
#line 1085 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
#line 1085 "par_loop_control.m"
  }
#line 1085 "par_loop_control.m"
}

#line 1064 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1064 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_8,
#line 1064 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70,
#line 1064 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71)
#line 1064 "par_loop_control.m"
{
#line 1064 "par_loop_control.m"
  {
#line 1064 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s transform_hlds__par_loop_control__env;

#line 1064 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6 = transform_hlds__par_loop_control__Info_6;
#line 1064 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70;
#line 1069 "par_loop_control.m"
    {
#line 1069 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 1069 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__GoalId_11;
#line 1070 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));

#line 1071 "par_loop_control.m"
      {
#line 1071 "par_loop_control.m"
        transform_hlds__par_loop_control__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__par_loop_control__GoalInfo0_10);
      }
#line 1079 "par_loop_control.m"
      {
#line 1079 "par_loop_control.m"
        (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (transform_hlds__par_loop_control__GoalId_11)), transform_hlds__par_loop_control__RecParConjIds_7);
      }
#line 1082 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1081 "par_loop_control.m"
        {
#line 1081 "par_loop_control.m"
          *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 1;
#line 1081 "par_loop_control.m"
          *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
#line 1081 "par_loop_control.m"
        }
#line 1082 "par_loop_control.m"
      else
#line 1099 "par_loop_control.m"
        {
#line 1085 "par_loop_control.m"
          {
#line 1085 "par_loop_control.m"
            transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(&transform_hlds__par_loop_control__env);
          }
#line 1084 "par_loop_control.m"
          (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded);
#line 1099 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1093 "par_loop_control.m"
            {
#line 1093 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs0_13;
#line 1093 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__FinishLCGoal_14;
#line 1093 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs_15;
#line 1093 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_72_72;
#line 1093 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74;

#line 1093 "par_loop_control.m"
              {
#line 1093 "par_loop_control.m"
                hlds__hlds_goal__goal_to_conj_list_2_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &transform_hlds__par_loop_control__Conjs0_13);
              }
#line 1094 "par_loop_control.m"
              {
#line 1094 "par_loop_control.m"
                transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, &transform_hlds__par_loop_control__FinishLCGoal_14);
              }
#line 1095 "par_loop_control.m"
              {
#line 1095 "par_loop_control.m"
                transform_hlds__par_loop_control__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_72_72, 0) = ((MR_Box) (transform_hlds__par_loop_control__FinishLCGoal_14));
#line 1095 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1095 "par_loop_control.m"
              }
#line 1095 "par_loop_control.m"
              {
#line 1095 "par_loop_control.m"
                transform_hlds__par_loop_control__Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_13, transform_hlds__par_loop_control__V_72_72);
              }
#line 1096 "par_loop_control.m"
              {
#line 1096 "par_loop_control.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__par_loop_control__Conjs_15, transform_hlds__par_loop_control__GoalInfo0_10, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74);
              }
#line 1097 "par_loop_control.m"
              {
#line 1097 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71);
              }
#line 1098 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 0;
#line 1093 "par_loop_control.m"
            }
#line 1099 "par_loop_control.m"
          else
#line 1100 "par_loop_control.m"
            {
#line 1100 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));
#line 1100 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 1100 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_47;
#line 1100 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103;
#line 1100 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_175_175;

#line 1109 "par_loop_control.m"
              if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 0))))
#line 1140 "par_loop_control.m"
                {
#line 1141 "par_loop_control.m"
                  {
#line 1141 "par_loop_control.m"
                    mercury__require__sorry_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "negation");
#line 1141 "par_loop_control.m"
                    return;
                  }
#line 1140 "par_loop_control.m"
                }
#line 1109 "par_loop_control.m"
              else
#line 1109 "par_loop_control.m"
                if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 2))))
#line 1111 "par_loop_control.m"
                  {
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__PredId_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)));
#line 1111 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Builtin_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__MaybeContext_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__RecPredProcId_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__InnerPredId_42;
#line 1111 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__InnerProcId_43;
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LCVar_44;
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Args_45;
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SymName_46;
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_94_94;
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_98_98;
#line 1111 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_99_99;
#line 1110 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control___SymName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 5)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_147_147;
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_149_149;
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_151_151;
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_152_152;
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_153_153;
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_154_154;
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_155_155;

#line 1114 "par_loop_control.m"
                    {
#line 1114 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_98_98, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_35));
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_98_98, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_36));
#line 1114 "par_loop_control.m"
                    }
#line 1114 "par_loop_control.m"
                    {
#line 1114 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[0]));
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4));
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 3) = ((MR_Box) (transform_hlds__par_loop_control__RecPredProcId_41));
#line 1114 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 4) = ((MR_Box) (transform_hlds__par_loop_control__V_98_98));
#line 1114 "par_loop_control.m"
                    }
#line 1114 "par_loop_control.m"
                    {
#line 1114 "par_loop_control.m"
                      mercury__require__expect_4_p_0(transform_hlds__par_loop_control__V_94_94, (MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Expected recursive call");
                    }
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__LCVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__SymName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__InnerPredId_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_99_99, (MR_Integer) 0)));
#line 1116 "par_loop_control.m"
                    transform_hlds__par_loop_control__InnerProcId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_99_99, (MR_Integer) 1)));
#line 1118 "par_loop_control.m"
                    {
#line 1118 "par_loop_control.m"
                      transform_hlds__par_loop_control__Args_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_45, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_44));
#line 1118 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_45, 1) = ((MR_Box) (transform_hlds__par_loop_control__Args0_37));
#line 1118 "par_loop_control.m"
                    }
#line 1120 "par_loop_control.m"
                    {
#line 1120 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredId_42));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcId_43));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Args_45));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Builtin_38));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 4) = ((MR_Box) (transform_hlds__par_loop_control__MaybeContext_39));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_46));
#line 1120 "par_loop_control.m"
                    }
#line 1122 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 0;
#line 1111 "par_loop_control.m"
                  }
#line 1109 "par_loop_control.m"
                else
#line 1109 "par_loop_control.m"
                  if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1124 "par_loop_control.m"
                    {
#line 1124 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__ConjType_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1124 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_89_89;
#line 1124 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Conjs0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1124 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Conjs_114;

#line 1125 "par_loop_control.m"
                      {
#line 1125 "par_loop_control.m"
                        transform_hlds__par_loop_control__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[1]));
#line 1125 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5));
#line 1125 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1125 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 3) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_48));
#line 1125 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1125 "par_loop_control.m"
                      }
#line 1125 "par_loop_control.m"
                      {
#line 1125 "par_loop_control.m"
                        mercury__require__expect_4_p_0(transform_hlds__par_loop_control__V_89_89, (MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "parallel conjunction");
                      }
#line 1127 "par_loop_control.m"
                      {
#line 1127 "par_loop_control.m"
                        transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_8, transform_hlds__par_loop_control__Conjs0_113, &transform_hlds__par_loop_control__Conjs_114);
                      }
#line 1129 "par_loop_control.m"
                      {
#line 1129 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1129 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_48));
#line 1129 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_114));
#line 1129 "par_loop_control.m"
                      }
#line 1124 "par_loop_control.m"
                    }
#line 1109 "par_loop_control.m"
                  else
#line 1109 "par_loop_control.m"
                    if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1131 "par_loop_control.m"
                      {
#line 1132 "par_loop_control.m"
                        {
#line 1132 "par_loop_control.m"
                          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "disjunction");
#line 1132 "par_loop_control.m"
                          return;
                        }
#line 1131 "par_loop_control.m"
                      }
#line 1109 "par_loop_control.m"
                    else
#line 1109 "par_loop_control.m"
                      if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1148 "par_loop_control.m"
                        {
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__ExistVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__Cond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__Then0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__Else0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_63;
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__Then_64;
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_65;
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__Else_66;
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__V_79_79;
#line 1148 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__V_80_80;

#line 1151 "par_loop_control.m"
                          {
#line 1151 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, &transform_hlds__par_loop_control__FixupGoalInfoThen_63, transform_hlds__par_loop_control__Then0_61, &transform_hlds__par_loop_control__Then_64);
                          }
#line 1153 "par_loop_control.m"
                          {
#line 1153 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, &transform_hlds__par_loop_control__FixupGoalInfoElse_65, transform_hlds__par_loop_control__Else0_62, &transform_hlds__par_loop_control__Else_66);
                          }
#line 1155 "par_loop_control.m"
                          {
#line 1155 "par_loop_control.m"
                            transform_hlds__par_loop_control__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "par_loop_control.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_80_80, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_65));
#line 1155 "par_loop_control.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "par_loop_control.m"
                          }
#line 1155 "par_loop_control.m"
                          {
#line 1155 "par_loop_control.m"
                            transform_hlds__par_loop_control__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "par_loop_control.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_79_79, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_63));
#line 1155 "par_loop_control.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_79_79, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_80_80));
#line 1155 "par_loop_control.m"
                          }
#line 1155 "par_loop_control.m"
                          {
#line 1155 "par_loop_control.m"
                            transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_79_79, transform_hlds__par_loop_control__FixupGoalInfo_8);
                          }
#line 1157 "par_loop_control.m"
                          {
#line 1157 "par_loop_control.m"
                            transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "par_loop_control.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1157 "par_loop_control.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ExistVars_59));
#line 1157 "par_loop_control.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_60));
#line 1157 "par_loop_control.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_64));
#line 1157 "par_loop_control.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_66));
#line 1157 "par_loop_control.m"
                          }
#line 1148 "par_loop_control.m"
                        }
#line 1109 "par_loop_control.m"
                      else
#line 1109 "par_loop_control.m"
                        if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1143 "par_loop_control.m"
                          {
#line 1143 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1143 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1143 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__SubGoal_58;

#line 1144 "par_loop_control.m"
                            {
#line 1144 "par_loop_control.m"
                              transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_8, transform_hlds__par_loop_control__SubGoal0_57, &transform_hlds__par_loop_control__SubGoal_58);
                            }
#line 1146 "par_loop_control.m"
                            {
#line 1146 "par_loop_control.m"
                              transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "par_loop_control.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1146 "par_loop_control.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_56));
#line 1146 "par_loop_control.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_58));
#line 1146 "par_loop_control.m"
                            }
#line 1143 "par_loop_control.m"
                          }
#line 1109 "par_loop_control.m"
                        else
#line 1109 "par_loop_control.m"
                          if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1159 "par_loop_control.m"
                            {
#line 1160 "par_loop_control.m"
                              {
#line 1160 "par_loop_control.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "shorthand");
#line 1160 "par_loop_control.m"
                                return;
                              }
#line 1159 "par_loop_control.m"
                            }
#line 1109 "par_loop_control.m"
                          else
#line 1109 "par_loop_control.m"
                            if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1134 "par_loop_control.m"
                              {
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__TypeCtorInfo_195_195;
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__CanFail_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__Cases0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__Cases_53;
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__FixupGoalInfos_54;
#line 1134 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__V_85_85;

#line 1135 "par_loop_control.m"
                                {
#line 1135 "par_loop_control.m"
                                  transform_hlds__par_loop_control__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[0]));
#line 1135 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6));
#line 1135 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1135 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 3) = ((MR_Box) ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6));
#line 1135 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 4) = ((MR_Box) (transform_hlds__par_loop_control__RecParConjIds_7));
#line 1135 "par_loop_control.m"
                                }
#line 5914 "transform_hlds.par_loop_control.c"
                                transform_hlds__par_loop_control__TypeCtorInfo_195_195 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1135 "par_loop_control.m"
                                {
#line 1135 "par_loop_control.m"
                                  mercury__list__map2_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_195_195, transform_hlds__par_loop_control__TypeCtorInfo_195_195, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_85_85, transform_hlds__par_loop_control__Cases0_52, &transform_hlds__par_loop_control__Cases_53, &transform_hlds__par_loop_control__FixupGoalInfos_54);
                                }
#line 1137 "par_loop_control.m"
                                {
#line 1137 "par_loop_control.m"
                                  transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfos_54, transform_hlds__par_loop_control__FixupGoalInfo_8);
                                }
#line 1138 "par_loop_control.m"
                                {
#line 1138 "par_loop_control.m"
                                  transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1138 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_50));
#line 1138 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_51));
#line 1138 "par_loop_control.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_53));
#line 1138 "par_loop_control.m"
                                }
#line 1134 "par_loop_control.m"
                              }
#line 1109 "par_loop_control.m"
                            else
#line 1105 "par_loop_control.m"
                              {
#line 1108 "par_loop_control.m"
                                {
#line 1108 "par_loop_control.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
#line 1108 "par_loop_control.m"
                                  return;
                                }
#line 1105 "par_loop_control.m"
                              }
#line 1162 "par_loop_control.m"
              transform_hlds__par_loop_control__V_175_175 = transform_hlds__par_loop_control__V_17_17;
#line 1162 "par_loop_control.m"
              {
#line 1162 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_47));
#line 1162 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_175_175));
#line 1162 "par_loop_control.m"
              }
#line 1173 "par_loop_control.m"
              if ((*transform_hlds__par_loop_control__FixupGoalInfo_8 == (MR_Integer) 1))
#line 1174 "par_loop_control.m"
                *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103;
#line 1173 "par_loop_control.m"
              else
#line 1166 "par_loop_control.m"
                {
#line 1166 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105;
#line 1166 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_106_106;
#line 1166 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107;
#line 1166 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108;
#line 1166 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_177_177;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_178_178;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_179_179;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_180_180;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_181_181;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_182_182;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_183_183;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_184_184;
#line 1168 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_185_185;
#line 1171 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_186_186;
#line 1171 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_187_187;

#line 1167 "par_loop_control.m"
                  {
#line 1167 "par_loop_control.m"
                    transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__V_175_175);
                  }
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1168 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1168 "par_loop_control.m"
                  {
#line 1168 "par_loop_control.m"
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_106_106, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107);
                  }
#line 1169 "par_loop_control.m"
                  {
#line 1169 "par_loop_control.m"
                    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107, transform_hlds__par_loop_control__V_175_175, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108);
                  }
#line 1170 "par_loop_control.m"
                  {
#line 1170 "par_loop_control.m"
                    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110);
                  }
#line 1171 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, (MR_Integer) 0)));
#line 1171 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, (MR_Integer) 1)));
#line 1171 "par_loop_control.m"
                  {
#line 1171 "par_loop_control.m"
                    MR_Word base;
#line 1171 "par_loop_control.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "par_loop_control.m"
                    *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = base;
#line 1171 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_186_186));
#line 1171 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110));
#line 1171 "par_loop_control.m"
                  }
#line 1166 "par_loop_control.m"
                }
#line 1100 "par_loop_control.m"
            }
#line 1099 "par_loop_control.m"
        }
#line 1069 "par_loop_control.m"
    }
#line 1064 "par_loop_control.m"
  }
#line 1064 "par_loop_control.m"
}

#line 1043 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
#line 1043 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1043 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1043 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3)
#line 1043 "par_loop_control.m"
{
#line 1046 "par_loop_control.m"
  {
#line 1046 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1046 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__1_1 == (MR_Integer) 1))
#line 1046 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__HeadVar__2_2 == (MR_Integer) 1))
#line 1052 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1046 "par_loop_control.m"
      else
#line 1050 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1046 "par_loop_control.m"
    else
#line 1046 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__HeadVar__2_2 == (MR_Integer) 1))
#line 1048 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1046 "par_loop_control.m"
      else
#line 1046 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 0;
#line 1046 "par_loop_control.m"
  }
#line 1043 "par_loop_control.m"
}

#line 1035 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
#line 1035 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1035 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1035 "par_loop_control.m"
{
#line 1038 "par_loop_control.m"
  {
#line 1038 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1038 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1038 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 0;
#line 1038 "par_loop_control.m"
    else
#line 1039 "par_loop_control.m"
      {
#line 1039 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__X_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 1039 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 1039 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__UseParentStack0_6;

#line 1040 "par_loop_control.m"
        {
#line 1040 "par_loop_control.m"
          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__Xs_4, &transform_hlds__par_loop_control__UseParentStack0_6);
        }
#line 1046 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__X_3 == (MR_Integer) 1))
#line 1046 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__UseParentStack0_6 == (MR_Integer) 1))
#line 1052 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1046 "par_loop_control.m"
          else
#line 1050 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1046 "par_loop_control.m"
        else
#line 1046 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__UseParentStack0_6 == (MR_Integer) 1))
#line 1048 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1046 "par_loop_control.m"
          else
#line 1046 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 0;
#line 1039 "par_loop_control.m"
      }
#line 1038 "par_loop_control.m"
  }
#line 1035 "par_loop_control.m"
}

#line 1025 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
#line 1025 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__List_3,
#line 1025 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Fixup_4)
#line 1025 "par_loop_control.m"
{
#line 1031 "par_loop_control.m"
  {
#line 1031 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1029 "par_loop_control.m"
    {
#line 1029 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mercury__list__contains_2_p_0((MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__List_3, ((MR_Box) ((MR_Integer) 0)));
    }
#line 1031 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 1030 "par_loop_control.m"
      *transform_hlds__par_loop_control__Fixup_4 = (MR_Integer) 0;
#line 1031 "par_loop_control.m"
    else
#line 1032 "par_loop_control.m"
      *transform_hlds__par_loop_control__Fixup_4 = (MR_Integer) 1;
#line 1031 "par_loop_control.m"
  }
#line 1025 "par_loop_control.m"
}

#line 1012 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
#line 1012 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 1012 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 1012 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13,
#line 1012 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_14,
#line 1012 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 1012 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11)
#line 1012 "par_loop_control.m"
{
#line 1019 "par_loop_control.m"
  {
#line 1019 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1019 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 2)));
#line 1019 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16;
#line 1019 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 0)));
#line 1019 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 1)));
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20;
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21;
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22;

#line 1020 "par_loop_control.m"
    {
#line 1020 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_15_15, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
    }
#line 1022 "par_loop_control.m"
    transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 0)));
#line 1022 "par_loop_control.m"
    transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 1)));
#line 1022 "par_loop_control.m"
    transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 2)));
#line 1022 "par_loop_control.m"
    {
#line 1022 "par_loop_control.m"
      MR_Word base;
#line 1022 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "par_loop_control.m"
      *transform_hlds__par_loop_control__STATE_VARIABLE_Case_14 = base;
#line 1022 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_20_20));
#line 1022 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_21_21));
#line 1022 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16));
#line 1022 "par_loop_control.m"
    }
#line 1019 "par_loop_control.m"
  }
#line 1012 "par_loop_control.m"
}

#line 971 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
#line 971 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 971 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 971 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 971 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 971 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 971 "par_loop_control.m"
{
#line 971 "par_loop_control.m"
  {
#line 971 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 971 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14;
#line 971 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv8_UseParentStack_10;
#line 971 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv7_FixupGoalInfo_11;

#line 971 "par_loop_control.m"
    {
#line 971 "par_loop_control.m"
      transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14, &transform_hlds__par_loop_control__conv8_UseParentStack_10, &transform_hlds__par_loop_control__conv7_FixupGoalInfo_11);
    }
#line 971 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14));
#line 971 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv8_UseParentStack_10));
#line 971 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv7_FixupGoalInfo_11));
#line 971 "par_loop_control.m"
  }
#line 971 "par_loop_control.m"
}

#line 963 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
#line 963 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 963 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 963 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 963 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 963 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 963 "par_loop_control.m"
{
#line 963 "par_loop_control.m"
  {
#line 963 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 963 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117;
#line 963 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv5_UseParentStack_10;
#line 963 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv4_FixupGoalInfo_11;

#line 963 "par_loop_control.m"
    {
#line 963 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117, &transform_hlds__par_loop_control__conv5_UseParentStack_10, &transform_hlds__par_loop_control__conv4_FixupGoalInfo_11);
    }
#line 963 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117));
#line 963 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv5_UseParentStack_10));
#line 963 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv4_FixupGoalInfo_11));
#line 963 "par_loop_control.m"
  }
#line 963 "par_loop_control.m"
}

#line 946 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
#line 946 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 946 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 946 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 946 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 946 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 946 "par_loop_control.m"
{
#line 946 "par_loop_control.m"
  {
#line 946 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 946 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117;
#line 946 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_UseParentStack_10;
#line 946 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_FixupGoalInfo_11;

#line 946 "par_loop_control.m"
    {
#line 946 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117, &transform_hlds__par_loop_control__conv2_UseParentStack_10, &transform_hlds__par_loop_control__conv1_FixupGoalInfo_11);
    }
#line 946 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117));
#line 946 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv2_UseParentStack_10));
#line 946 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv1_FixupGoalInfo_11));
#line 946 "par_loop_control.m"
  }
#line 946 "par_loop_control.m"
}

#line 881 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
#line 881 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 881 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 881 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116,
#line 881 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117,
#line 881 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 881 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11)
#line 881 "par_loop_control.m"
{
#line 886 "par_loop_control.m"
  {
#line 886 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 886 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116, (MR_Integer) 0)));
#line 886 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116, (MR_Integer) 1)));

#line 921 "par_loop_control.m"
    if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 890 "par_loop_control.m"
      {
#line 890 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__CallPredId0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)));
#line 890 "par_loop_control.m"
        MR_Integer transform_hlds__par_loop_control__CallProcId0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 890 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 890 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Builtin_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 890 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__MaybeUnify_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 890 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__RecPredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 2)));
#line 889 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control___Name0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 5)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 0)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 1)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 3)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 4)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 5)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 6)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 7)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 8)));
#line 891 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 9)));
#line 892 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__RecPredProcId_20, (MR_Integer) 0)));
#line 892 "par_loop_control.m"
        MR_Integer transform_hlds__par_loop_control__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__RecPredProcId_20, (MR_Integer) 1)));

#line 892 "par_loop_control.m"
        {
#line 892 "par_loop_control.m"
          transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__par_loop_control__CallPredId0_14, transform_hlds__par_loop_control__V_212_212);
        }
#line 892 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 892 "par_loop_control.m"
          transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CallProcId0_15 == transform_hlds__par_loop_control__V_213_213);
#line 917 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 893 "par_loop_control.m"
          {
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__NewPredProcId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 3)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__CallPredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__NewPredProcId_21, (MR_Integer) 0)));
#line 893 "par_loop_control.m"
            MR_Integer transform_hlds__par_loop_control__CallProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__NewPredProcId_21, (MR_Integer) 1)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__LCVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 1)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Args_25;
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 4)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__GoalExpr_27;
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__PreserveTailRecursion_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 5)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139;
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141;
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 0)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 2)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 6)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 7)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 8)));
#line 893 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 9)));

#line 896 "par_loop_control.m"
            {
#line 896 "par_loop_control.m"
              transform_hlds__par_loop_control__Args_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "par_loop_control.m"
              MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_25, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_24));
#line 896 "par_loop_control.m"
              MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_25, 1) = ((MR_Box) (transform_hlds__par_loop_control__Args0_16));
#line 896 "par_loop_control.m"
            }
#line 898 "par_loop_control.m"
            {
#line 898 "par_loop_control.m"
              transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 898 "par_loop_control.m"
              MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__par_loop_control__CallPredId_22));
#line 898 "par_loop_control.m"
              MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__CallProcId_23));
#line 898 "par_loop_control.m"
              MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Args_25));
#line 898 "par_loop_control.m"
              MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Builtin_17));
#line 898 "par_loop_control.m"
              MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__MaybeUnify_18));
#line 898 "par_loop_control.m"
              MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__par_loop_control__Name_26));
#line 898 "par_loop_control.m"
            }
#line 901 "par_loop_control.m"
            {
#line 901 "par_loop_control.m"
              transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "par_loop_control.m"
              MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_27));
#line 901 "par_loop_control.m"
              MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 901 "par_loop_control.m"
            }
#line 903 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__IsLastGoal_8 == (MR_Integer) 0);
#line 903 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 904 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__PreserveTailRecursion_28 == (MR_Integer) 0);
#line 909 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 908 "par_loop_control.m"
              {
#line 908 "par_loop_control.m"
                *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 1;
#line 908 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139;
#line 908 "par_loop_control.m"
              }
#line 909 "par_loop_control.m"
            else
#line 910 "par_loop_control.m"
              {
#line 910 "par_loop_control.m"
                *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 913 "par_loop_control.m"
                {
#line 913 "par_loop_control.m"
                  hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 22, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141);
                }
#line 910 "par_loop_control.m"
              }
#line 915 "par_loop_control.m"
            {
#line 915 "par_loop_control.m"
              transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
            }
#line 916 "par_loop_control.m"
            *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 0;
#line 893 "par_loop_control.m"
          }
#line 917 "par_loop_control.m"
        else
#line 918 "par_loop_control.m"
          {
#line 918 "par_loop_control.m"
            *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 919 "par_loop_control.m"
            *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 919 "par_loop_control.m"
            *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116;
#line 918 "par_loop_control.m"
          }
#line 890 "par_loop_control.m"
      }
#line 921 "par_loop_control.m"
    else
#line 921 "par_loop_control.m"
      if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1008 "par_loop_control.m"
        {
#line 1009 "par_loop_control.m"
          {
#line 1009 "par_loop_control.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_rewrite_recursive_call\'/6", (MR_String) "shorthand");
#line 1009 "par_loop_control.m"
            return;
          }
#line 1008 "par_loop_control.m"
        }
#line 921 "par_loop_control.m"
      else
#line 931 "par_loop_control.m"
        {
#line 931 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 931 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 941 "par_loop_control.m"
          if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 977 "par_loop_control.m"
            {
#line 977 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 977 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 978 "par_loop_control.m"
              {
#line 978 "par_loop_control.m"
                transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
              }
#line 980 "par_loop_control.m"
              transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 977 "par_loop_control.m"
            }
#line 941 "par_loop_control.m"
          else
#line 941 "par_loop_control.m"
            if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 942 "par_loop_control.m"
              {
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_133_133;
#line 942 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_135_135;
#line 943 "par_loop_control.m"
                MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 943 "par_loop_control.m"
                {
#line 943 "par_loop_control.m"
                  mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                }
#line 943 "par_loop_control.m"
                transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 944 "par_loop_control.m"
                {
#line 944 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                }
#line 946 "par_loop_control.m"
                {
#line 946 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 946 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 946 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 946 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 946 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 946 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 946 "par_loop_control.m"
                }
#line 946 "par_loop_control.m"
                {
#line 946 "par_loop_control.m"
                  mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                }
#line 950 "par_loop_control.m"
                {
#line 950 "par_loop_control.m"
                  transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "par_loop_control.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 950 "par_loop_control.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 950 "par_loop_control.m"
                }
#line 952 "par_loop_control.m"
                {
#line 952 "par_loop_control.m"
                  transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                }
#line 953 "par_loop_control.m"
                {
#line 953 "par_loop_control.m"
                  transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                }
#line 955 "par_loop_control.m"
                {
#line 955 "par_loop_control.m"
                  transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                }
#line 957 "par_loop_control.m"
                {
#line 957 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "par_loop_control.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 957 "par_loop_control.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "par_loop_control.m"
                }
#line 957 "par_loop_control.m"
                {
#line 957 "par_loop_control.m"
                  transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                }
#line 958 "par_loop_control.m"
                {
#line 958 "par_loop_control.m"
                  transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 958 "par_loop_control.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 958 "par_loop_control.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 958 "par_loop_control.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 958 "par_loop_control.m"
                }
#line 942 "par_loop_control.m"
              }
#line 941 "par_loop_control.m"
            else
#line 941 "par_loop_control.m"
              if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 960 "par_loop_control.m"
                {
#line 960 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 960 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 960 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 960 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 960 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 960 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_131_131;

#line 963 "par_loop_control.m"
                  {
#line 963 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 963 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 963 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 963 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 963 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 963 "par_loop_control.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 963 "par_loop_control.m"
                  }
#line 6815 "transform_hlds.par_loop_control.c"
                  transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 963 "par_loop_control.m"
                  {
#line 963 "par_loop_control.m"
                    mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                  }
#line 966 "par_loop_control.m"
                  {
#line 966 "par_loop_control.m"
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                  }
#line 967 "par_loop_control.m"
                  {
#line 967 "par_loop_control.m"
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                  }
#line 968 "par_loop_control.m"
                  {
#line 968 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 968 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 968 "par_loop_control.m"
                  }
#line 960 "par_loop_control.m"
                }
#line 941 "par_loop_control.m"
              else
#line 941 "par_loop_control.m"
                if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 987 "par_loop_control.m"
                  {
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond_106;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then_109;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else_112;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_122_122;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_123_123;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_124_124;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_126_126;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_127_127;
#line 987 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_128_128;

#line 988 "par_loop_control.m"
                    {
#line 988 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                    }
#line 990 "par_loop_control.m"
                    {
#line 990 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                    }
#line 992 "par_loop_control.m"
                    {
#line 992 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                    }
#line 994 "par_loop_control.m"
                    {
#line 994 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 994 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "par_loop_control.m"
                    }
#line 994 "par_loop_control.m"
                    {
#line 994 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 994 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 994 "par_loop_control.m"
                    }
#line 994 "par_loop_control.m"
                    {
#line 994 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 994 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 994 "par_loop_control.m"
                    }
#line 994 "par_loop_control.m"
                    {
#line 994 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 998 "par_loop_control.m"
                    }
#line 987 "par_loop_control.m"
                  }
#line 941 "par_loop_control.m"
                else
#line 941 "par_loop_control.m"
                  if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 982 "par_loop_control.m"
                    {
#line 982 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 982 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 982 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 983 "par_loop_control.m"
                      {
#line 983 "par_loop_control.m"
                        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                      }
#line 985 "par_loop_control.m"
                      {
#line 985 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 985 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 985 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 985 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 985 "par_loop_control.m"
                      }
#line 982 "par_loop_control.m"
                    }
#line 941 "par_loop_control.m"
                  else
#line 941 "par_loop_control.m"
                    if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 970 "par_loop_control.m"
                      {
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases_96;
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 970 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_130_130;

#line 971 "par_loop_control.m"
                        {
#line 971 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 971 "par_loop_control.m"
                        }
#line 7063 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 971 "par_loop_control.m"
                        {
#line 971 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                        }
#line 973 "par_loop_control.m"
                        {
#line 973 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 974 "par_loop_control.m"
                        {
#line 974 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 975 "par_loop_control.m"
                        {
#line 975 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 975 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 975 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 975 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 975 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 975 "par_loop_control.m"
                        }
#line 970 "par_loop_control.m"
                      }
#line 941 "par_loop_control.m"
                    else
#line 936 "par_loop_control.m"
                      {
#line 937 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 939 "par_loop_control.m"
                        *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 940 "par_loop_control.m"
                        *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 936 "par_loop_control.m"
                      }
#line 1000 "par_loop_control.m"
          {
#line 1000 "par_loop_control.m"
            transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1000 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1000 "par_loop_control.m"
          }
#line 1004 "par_loop_control.m"
          if ((*transform_hlds__par_loop_control__FixupGoalInfo_11 == (MR_Integer) 1))
#line 1005 "par_loop_control.m"
            *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1004 "par_loop_control.m"
          else
#line 1003 "par_loop_control.m"
            {
#line 1003 "par_loop_control.m"
              transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1003 "par_loop_control.m"
              return;
            }
#line 931 "par_loop_control.m"
        }
#line 886 "par_loop_control.m"
  }
#line 881 "par_loop_control.m"
}

#line 835 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_1,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__UseParentStack_2,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3,
#line 835 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_4,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5,
#line 835 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6,
#line 835 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7,
#line 835 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8)
#line 835 "par_loop_control.m"
{
#line 839 "par_loop_control.m"
  {
#line 839 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 839 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "par_loop_control.m"
      {
#line 839 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8 = transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7;
#line 839 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6 = transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5;
#line 839 "par_loop_control.m"
      }
#line 839 "par_loop_control.m"
    else
#line 841 "par_loop_control.m"
      {
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_64_64;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjuncts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 1)));
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__LCSVar_24;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__GetFreeSlotGoal_25;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__LCVar_26;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__JoinAndTerminateGoal_27;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0GoalInfo_28;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0Goals_29;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ConjunctGoals_30;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct_33;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalInfo_34;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalExpr_35;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoal_36;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TailGoals_37;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_44_44;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_49_49;
#line 841 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_52_52;
#line 848 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_53_53;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_54_54;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_55_55;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_56_56;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_57_57;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_58_58;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_59_59;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_60_60;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_61_61;
#line 861 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_62_62;

#line 843 "par_loop_control.m"
        {
#line 843 "par_loop_control.m"
          transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(transform_hlds__par_loop_control__Info_1, &transform_hlds__par_loop_control__LCSVar_24, &transform_hlds__par_loop_control__GetFreeSlotGoal_25, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43);
        }
#line 848 "par_loop_control.m"
        transform_hlds__par_loop_control__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Conjunct0_19, (MR_Integer) 0)));
#line 848 "par_loop_control.m"
        transform_hlds__par_loop_control__Conjunct0GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Conjunct0_19, (MR_Integer) 1)));
#line 849 "par_loop_control.m"
        {
#line 849 "par_loop_control.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__par_loop_control__Conjunct0_19, &transform_hlds__par_loop_control__Conjunct0Goals_29);
        }
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 0)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__LCVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 1)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 2)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 3)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 4)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 5)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 6)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 7)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 8)));
#line 861 "par_loop_control.m"
        transform_hlds__par_loop_control__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 9)));
#line 847 "par_loop_control.m"
        {
#line 847 "par_loop_control.m"
          transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(transform_hlds__par_loop_control__Info_1, transform_hlds__par_loop_control__LCVar_26, transform_hlds__par_loop_control__LCSVar_24, &transform_hlds__par_loop_control__JoinAndTerminateGoal_27);
        }
#line 850 "par_loop_control.m"
        {
#line 850 "par_loop_control.m"
          transform_hlds__par_loop_control__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_44_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__JoinAndTerminateGoal_27));
#line 850 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "par_loop_control.m"
        }
#line 850 "par_loop_control.m"
        {
#line 850 "par_loop_control.m"
          transform_hlds__par_loop_control__ConjunctGoals_30 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjunct0Goals_29, transform_hlds__par_loop_control__V_44_44);
        }
#line 852 "par_loop_control.m"
        {
#line 852 "par_loop_control.m"
          transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__Conjunct0GoalInfo_28);
        }
#line 7306 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 853 "par_loop_control.m"
        {
#line 853 "par_loop_control.m"
          parse_tree__set_of_var__insert_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_64_64, transform_hlds__par_loop_control__LCSVar_24, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47);
        }
#line 854 "par_loop_control.m"
        {
#line 854 "par_loop_control.m"
          parse_tree__set_of_var__insert_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_64_64, transform_hlds__par_loop_control__LCVar_26, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48);
        }
#line 855 "par_loop_control.m"
        {
#line 855 "par_loop_control.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48, transform_hlds__par_loop_control__Conjunct0GoalInfo_28, &transform_hlds__par_loop_control__ScopeGoalInfo_34);
        }
#line 858 "par_loop_control.m"
        {
#line 858 "par_loop_control.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__par_loop_control__ConjunctGoals_30, transform_hlds__par_loop_control__ScopeGoalInfo_34, &transform_hlds__par_loop_control__Conjunct_33);
        }
#line 863 "par_loop_control.m"
        {
#line 863 "par_loop_control.m"
          transform_hlds__par_loop_control__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_26));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 2) = ((MR_Box) (transform_hlds__par_loop_control__LCSVar_24));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 3) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStack_2));
#line 863 "par_loop_control.m"
        }
#line 863 "par_loop_control.m"
        {
#line 863 "par_loop_control.m"
          transform_hlds__par_loop_control__ScopeGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_49_49));
#line 863 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjunct_33));
#line 863 "par_loop_control.m"
        }
#line 865 "par_loop_control.m"
        {
#line 865 "par_loop_control.m"
          transform_hlds__par_loop_control__ScopeGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 865 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ScopeGoal_36, 0) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalExpr_35));
#line 865 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ScopeGoal_36, 1) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalInfo_34));
#line 865 "par_loop_control.m"
        }
#line 867 "par_loop_control.m"
        {
#line 867 "par_loop_control.m"
          transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(transform_hlds__par_loop_control__Info_1, transform_hlds__par_loop_control__UseParentStack_2, transform_hlds__par_loop_control__Conjuncts0_20, &transform_hlds__par_loop_control__TailGoals_37, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8);
        }
#line 869 "par_loop_control.m"
        {
#line 869 "par_loop_control.m"
          transform_hlds__par_loop_control__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_52_52, 0) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoal_36));
#line 869 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_52_52, 1) = ((MR_Box) (transform_hlds__par_loop_control__TailGoals_37));
#line 869 "par_loop_control.m"
        }
#line 869 "par_loop_control.m"
        {
#line 869 "par_loop_control.m"
          MR_Word base;
#line 869 "par_loop_control.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__4_4 = base;
#line 869 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GetFreeSlotGoal_25));
#line 869 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_52_52));
#line 869 "par_loop_control.m"
        }
#line 841 "par_loop_control.m"
      }
#line 839 "par_loop_control.m"
  }
#line 835 "par_loop_control.m"
}

#line 810 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjuncts0_11,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_12,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalInfo_13,
#line 810 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_14,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27,
#line 810 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28,
#line 810 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29,
#line 810 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30)
#line 810 "par_loop_control.m"
{
#line 815 "par_loop_control.m"
  {
#line 815 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__EarlierConjuncts0_17;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjunct0_18;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjunct_19;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__UseParentStack_20;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjGoals_22;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__EarlierConjuncts_23;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Conjuncts_24;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Goal0_25;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_42;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_43;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47;
#line 815 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49;
#line 816 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_LastConjunct0_18;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21;
#line 830 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_35_35;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_50_50;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_51_51;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_52_52;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_53_53;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_54_54;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_55_55;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_56_56;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_57_57;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;

#line 816 "par_loop_control.m"
    {
#line 816 "par_loop_control.m"
      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_36_36, transform_hlds__par_loop_control__Conjuncts0_11, &transform_hlds__par_loop_control__EarlierConjuncts0_17, &transform_hlds__par_loop_control__conv0_LastConjunct0_18);
    }
#line 816 "par_loop_control.m"
    transform_hlds__par_loop_control__LastConjunct0_18 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConjunct0_18);
#line 818 "par_loop_control.m"
    {
#line 818 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_12, transform_hlds__par_loop_control__LastConjunct0_18, &transform_hlds__par_loop_control__LastConjunct_19, &transform_hlds__par_loop_control__UseParentStack_20, &transform_hlds__par_loop_control__V_21_21);
    }
#line 820 "par_loop_control.m"
    {
#line 820 "par_loop_control.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__par_loop_control__LastConjunct_19, &transform_hlds__par_loop_control__LastConjGoals_22);
    }
#line 823 "par_loop_control.m"
    {
#line 823 "par_loop_control.m"
      transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__UseParentStack_20, transform_hlds__par_loop_control__EarlierConjuncts0_17, &transform_hlds__par_loop_control__EarlierConjuncts_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30);
    }
#line 825 "par_loop_control.m"
    {
#line 825 "par_loop_control.m"
      transform_hlds__par_loop_control__Conjuncts_24 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_36_36, transform_hlds__par_loop_control__EarlierConjuncts_23, transform_hlds__par_loop_control__LastConjGoals_22);
    }
#line 829 "par_loop_control.m"
    {
#line 829 "par_loop_control.m"
      hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__par_loop_control__Conjuncts_24, (MR_Integer) 0, &transform_hlds__par_loop_control__Goal0_25);
    }
#line 830 "par_loop_control.m"
    transform_hlds__par_loop_control__GoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_25, (MR_Integer) 0)));
#line 830 "par_loop_control.m"
    transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_25, (MR_Integer) 1)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 0)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 1)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 2)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 3)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 4)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 5)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 6)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 7)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 8)));
#line 1314 "par_loop_control.m"
    transform_hlds__par_loop_control__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 9)));
#line 1315 "par_loop_control.m"
    {
#line 1315 "par_loop_control.m"
      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__GoalInfo_13);
    }
#line 1316 "par_loop_control.m"
    {
#line 1316 "par_loop_control.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__LCVar_43, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46);
    }
#line 1317 "par_loop_control.m"
    {
#line 1317 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46, transform_hlds__par_loop_control__GoalInfo_13, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47);
    }
#line 1319 "par_loop_control.m"
    {
#line 1319 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49);
    }
#line 1321 "par_loop_control.m"
    {
#line 1321 "par_loop_control.m"
      MR_Word base;
#line 1321 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_14 = base;
#line 1321 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_42));
#line 1321 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49));
#line 1321 "par_loop_control.m"
    }
#line 815 "par_loop_control.m"
  }
#line 810 "par_loop_control.m"
}

#line 709 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_11,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalPath0_12,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48,
#line 709 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50,
#line 709 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51,
#line 709 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52,
#line 709 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53)
#line 709 "par_loop_control.m"
{
#line 715 "par_loop_control.m"
  {
#line 715 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 715 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
#line 715 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
#line 801 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalPath_18;
#line 801 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Step_19;

#line 717 "par_loop_control.m"
    {
#line 717 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mdbcomp__goal_path__goal_path_remove_first_3_p_0(transform_hlds__par_loop_control__GoalPath0_12, &transform_hlds__par_loop_control__GoalPath_18, &transform_hlds__par_loop_control__Step_19);
    }
#line 801 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 719 "par_loop_control.m"
      {
#line 719 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
#line 719 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__ErrorString_20;
#line 719 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__GoalExpr_27;
#line 719 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_57_57;
#line 719 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89;
#line 719 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_122_122;

#line 718 "par_loop_control.m"
        {
#line 718 "par_loop_control.m"
          transform_hlds__par_loop_control__V_57_57 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
        }
#line 7640 "transform_hlds.par_loop_control.c"
        {
#line 7642 "transform_hlds.par_loop_control.c"
          transform_hlds__par_loop_control__V_122_122 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_57_57, (MR_String) "\"");
        }
#line 7645 "transform_hlds.par_loop_control.c"
        {
#line 7647 "transform_hlds.par_loop_control.c"
          transform_hlds__par_loop_control__ErrorString_20 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t follow goal path step: \"", transform_hlds__par_loop_control__V_122_122);
        }
#line 744 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__Step_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 774 "par_loop_control.m"
          {
#line 774 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Else0_41;
#line 774 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Vars_100;
#line 774 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Cond_101;
#line 774 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Then_103;

#line 770 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 770 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 770 "par_loop_control.m"
              {
#line 770 "par_loop_control.m"
                transform_hlds__par_loop_control__Vars_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 770 "par_loop_control.m"
                transform_hlds__par_loop_control__Cond_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 770 "par_loop_control.m"
                transform_hlds__par_loop_control__Then_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 770 "par_loop_control.m"
                transform_hlds__par_loop_control__Else0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 772 "par_loop_control.m"
                {
#line 772 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Else_99;

#line 771 "par_loop_control.m"
                  {
#line 771 "par_loop_control.m"
                    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Else0_41, &transform_hlds__par_loop_control__Else_99, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                  }
#line 773 "par_loop_control.m"
                  {
#line 773 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 773 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 773 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_100));
#line 773 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_101));
#line 773 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_103));
#line 773 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_99));
#line 773 "par_loop_control.m"
                  }
#line 772 "par_loop_control.m"
                }
#line 770 "par_loop_control.m"
              }
#line 770 "par_loop_control.m"
            else
#line 775 "par_loop_control.m"
              {
#line 775 "par_loop_control.m"
                {
#line 775 "par_loop_control.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 775 "par_loop_control.m"
                  return;
                }
#line 775 "par_loop_control.m"
              }
#line 774 "par_loop_control.m"
          }
#line 744 "par_loop_control.m"
        else
#line 744 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__Step_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 765 "par_loop_control.m"
            {
#line 765 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Vars_36;
#line 765 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Cond_37;
#line 765 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Then0_38;
#line 765 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Else_39;

#line 761 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 761 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 761 "par_loop_control.m"
                {
#line 761 "par_loop_control.m"
                  transform_hlds__par_loop_control__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 761 "par_loop_control.m"
                  transform_hlds__par_loop_control__Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 761 "par_loop_control.m"
                  transform_hlds__par_loop_control__Then0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 761 "par_loop_control.m"
                  transform_hlds__par_loop_control__Else_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 763 "par_loop_control.m"
                  {
#line 763 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then_40;

#line 762 "par_loop_control.m"
                    {
#line 762 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Then0_38, &transform_hlds__par_loop_control__Then_40, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                    }
#line 764 "par_loop_control.m"
                    {
#line 764 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 764 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 764 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_36));
#line 764 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_37));
#line 764 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_40));
#line 764 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_39));
#line 764 "par_loop_control.m"
                    }
#line 763 "par_loop_control.m"
                  }
#line 761 "par_loop_control.m"
                }
#line 761 "par_loop_control.m"
              else
#line 766 "par_loop_control.m"
                {
#line 766 "par_loop_control.m"
                  {
#line 766 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 766 "par_loop_control.m"
                    return;
                  }
#line 766 "par_loop_control.m"
                }
#line 765 "par_loop_control.m"
            }
#line 744 "par_loop_control.m"
          else
#line 744 "par_loop_control.m"
            if (((MR_tag((MR_Word) transform_hlds__par_loop_control__Step_19)) == (MR_mktag((MR_Integer) 1))))
#line 721 "par_loop_control.m"
              {
#line 721 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)));
#line 741 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__Conjs0_22;
#line 741 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__Conj0_23;
#line 723 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__TypeCtorInfo_115_115;
#line 723 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_83_83;
#line 724 "par_loop_control.m"
                MR_Box transform_hlds__par_loop_control__conv0_Conj0_23;

#line 723 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 723 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 723 "par_loop_control.m"
                  {
#line 723 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 723 "par_loop_control.m"
                    transform_hlds__par_loop_control__Conjs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 723 "par_loop_control.m"
                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_83_83 == (MR_Integer) 0);
#line 723 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 723 "par_loop_control.m"
                      {
#line 7831 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_115_115 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 724 "par_loop_control.m"
                        {
#line 724 "par_loop_control.m"
                          transform_hlds__par_loop_control__succeeded = mercury__list__index1_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_115_115, transform_hlds__par_loop_control__Conjs0_22, transform_hlds__par_loop_control__N_21, &transform_hlds__par_loop_control__conv0_Conj0_23);
                        }
#line 724 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 724 "par_loop_control.m"
                          {
#line 724 "par_loop_control.m"
                            transform_hlds__par_loop_control__Conj0_23 = ((MR_Word) transform_hlds__par_loop_control__conv0_Conj0_23);
#line 724 "par_loop_control.m"
                            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 724 "par_loop_control.m"
                          }
#line 723 "par_loop_control.m"
                      }
#line 723 "par_loop_control.m"
                  }
#line 741 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 736 "par_loop_control.m"
                  {
#line 736 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__IsLastGoalConj_24;
#line 736 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conj_25;
#line 736 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs_26;

#line 733 "par_loop_control.m"
                    if ((transform_hlds__par_loop_control__IsLastGoal_11 == (MR_Integer) 0))
#line 730 "par_loop_control.m"
                      {
#line 728 "par_loop_control.m"
                        MR_Integer transform_hlds__par_loop_control__V_120_120;

#line 728 "par_loop_control.m"
                        {
#line 728 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_120_120 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_22);
                        }
#line 728 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__N_21 == transform_hlds__par_loop_control__V_120_120);
#line 730 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 729 "par_loop_control.m"
                          transform_hlds__par_loop_control__IsLastGoalConj_24 = (MR_Integer) 0;
#line 730 "par_loop_control.m"
                        else
#line 731 "par_loop_control.m"
                          transform_hlds__par_loop_control__IsLastGoalConj_24 = (MR_Integer) 1;
#line 730 "par_loop_control.m"
                      }
#line 733 "par_loop_control.m"
                    else
#line 735 "par_loop_control.m"
                      transform_hlds__par_loop_control__IsLastGoalConj_24 = transform_hlds__par_loop_control__IsLastGoal_11;
#line 737 "par_loop_control.m"
                    {
#line 737 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoalConj_24, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Conj0_23, &transform_hlds__par_loop_control__Conj_25, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                    }
#line 739 "par_loop_control.m"
                    {
#line 739 "par_loop_control.m"
                      mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_22, transform_hlds__par_loop_control__N_21, ((MR_Box) (transform_hlds__par_loop_control__Conj_25)), &transform_hlds__par_loop_control__Conjs_26);
                    }
#line 740 "par_loop_control.m"
                    {
#line 740 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 740 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 740 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 740 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_26));
#line 740 "par_loop_control.m"
                    }
#line 736 "par_loop_control.m"
                  }
#line 741 "par_loop_control.m"
                else
#line 742 "par_loop_control.m"
                  {
#line 742 "par_loop_control.m"
                    {
#line 742 "par_loop_control.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 742 "par_loop_control.m"
                      return;
                    }
#line 742 "par_loop_control.m"
                  }
#line 721 "par_loop_control.m"
              }
#line 744 "par_loop_control.m"
            else
#line 744 "par_loop_control.m"
              if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__Step_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 783 "par_loop_control.m"
                {
#line 783 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Reason_43;
#line 783 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__SubGoal0_44;

#line 779 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 779 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 779 "par_loop_control.m"
                    {
#line 779 "par_loop_control.m"
                      transform_hlds__par_loop_control__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 779 "par_loop_control.m"
                      transform_hlds__par_loop_control__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 781 "par_loop_control.m"
                      {
#line 781 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_45;

#line 780 "par_loop_control.m"
                        {
#line 780 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__SubGoal0_44, &transform_hlds__par_loop_control__SubGoal_45, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 782 "par_loop_control.m"
                        {
#line 782 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 782 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 782 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_43));
#line 782 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_45));
#line 782 "par_loop_control.m"
                        }
#line 781 "par_loop_control.m"
                      }
#line 779 "par_loop_control.m"
                    }
#line 779 "par_loop_control.m"
                  else
#line 784 "par_loop_control.m"
                    {
#line 784 "par_loop_control.m"
                      {
#line 784 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 784 "par_loop_control.m"
                        return;
                      }
#line 784 "par_loop_control.m"
                    }
#line 783 "par_loop_control.m"
                }
#line 744 "par_loop_control.m"
              else
#line 744 "par_loop_control.m"
                if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__Step_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 745 "par_loop_control.m"
                  {
#line 745 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__N_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 1)));
#line 745 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 2)));
#line 756 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Var_29;
#line 756 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__CanFail_30;
#line 756 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases0_31;
#line 756 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Case0_32;
#line 747 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_118_118;
#line 748 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv1_Case0_32;

#line 747 "par_loop_control.m"
                    transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 747 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 747 "par_loop_control.m"
                      {
#line 747 "par_loop_control.m"
                        transform_hlds__par_loop_control__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 747 "par_loop_control.m"
                        transform_hlds__par_loop_control__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 747 "par_loop_control.m"
                        transform_hlds__par_loop_control__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 8027 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 748 "par_loop_control.m"
                        {
#line 748 "par_loop_control.m"
                          transform_hlds__par_loop_control__succeeded = mercury__list__index1_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_118_118, transform_hlds__par_loop_control__Cases0_31, transform_hlds__par_loop_control__N_98, &transform_hlds__par_loop_control__conv1_Case0_32);
                        }
#line 748 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 748 "par_loop_control.m"
                          {
#line 748 "par_loop_control.m"
                            transform_hlds__par_loop_control__Case0_32 = ((MR_Word) transform_hlds__par_loop_control__conv1_Case0_32);
#line 748 "par_loop_control.m"
                            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 748 "par_loop_control.m"
                          }
#line 747 "par_loop_control.m"
                      }
#line 756 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 750 "par_loop_control.m"
                      {
#line 750 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Goal_13;
#line 750 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 2)));
#line 750 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Case_34;
#line 750 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases_35;
#line 750 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 0)));
#line 750 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 1)));
#line 753 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_111_111;
#line 753 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_112_112;
#line 753 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_113_113;

#line 751 "par_loop_control.m"
                        {
#line 751 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Goal0_33, &transform_hlds__par_loop_control__Goal_13, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 753 "par_loop_control.m"
                        transform_hlds__par_loop_control__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 0)));
#line 753 "par_loop_control.m"
                        transform_hlds__par_loop_control__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 1)));
#line 753 "par_loop_control.m"
                        transform_hlds__par_loop_control__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 2)));
#line 753 "par_loop_control.m"
                        {
#line 753 "par_loop_control.m"
                          transform_hlds__par_loop_control__Case_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_111_111));
#line 753 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_112_112));
#line 753 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 2) = ((MR_Box) (transform_hlds__par_loop_control__Goal_13));
#line 753 "par_loop_control.m"
                        }
#line 754 "par_loop_control.m"
                        {
#line 754 "par_loop_control.m"
                          mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__par_loop_control__Cases0_31, transform_hlds__par_loop_control__N_98, ((MR_Box) (transform_hlds__par_loop_control__Case_34)), &transform_hlds__par_loop_control__Cases_35);
                        }
#line 755 "par_loop_control.m"
                        {
#line 755 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 755 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 755 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_29));
#line 755 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_30));
#line 755 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_35));
#line 755 "par_loop_control.m"
                        }
#line 750 "par_loop_control.m"
                      }
#line 756 "par_loop_control.m"
                    else
#line 757 "par_loop_control.m"
                      {
#line 757 "par_loop_control.m"
                        {
#line 757 "par_loop_control.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 757 "par_loop_control.m"
                          return;
                        }
#line 757 "par_loop_control.m"
                      }
#line 745 "par_loop_control.m"
                  }
#line 744 "par_loop_control.m"
                else
#line 794 "par_loop_control.m"
                  {
#line 794 "par_loop_control.m"
                    MR_String transform_hlds__par_loop_control__V_61_61;
#line 794 "par_loop_control.m"
                    MR_String transform_hlds__par_loop_control__V_65_65;
#line 794 "par_loop_control.m"
                    MR_String transform_hlds__par_loop_control__V_125_125;

#line 797 "par_loop_control.m"
                    {
#line 797 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
                    }
#line 8144 "transform_hlds.par_loop_control.c"
                    {
#line 8146 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__V_125_125 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_65_65, (MR_String) "\"");
                    }
#line 8149 "transform_hlds.par_loop_control.c"
                    {
#line 8151 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_125_125);
                    }
#line 795 "par_loop_control.m"
                    {
#line 795 "par_loop_control.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 795 "par_loop_control.m"
                      return;
                    }
#line 794 "par_loop_control.m"
                  }
#line 799 "par_loop_control.m"
        {
#line 799 "par_loop_control.m"
          transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 799 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_27));
#line 799 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_17));
#line 799 "par_loop_control.m"
        }
#line 800 "par_loop_control.m"
        {
#line 800 "par_loop_control.m"
          transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49);
#line 800 "par_loop_control.m"
          return;
        }
#line 719 "par_loop_control.m"
      }
#line 801 "par_loop_control.m"
    else
#line 805 "par_loop_control.m"
      {
#line 805 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs_108;
#line 802 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_91_91;

#line 802 "par_loop_control.m"
        transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 802 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 802 "par_loop_control.m"
          {
#line 802 "par_loop_control.m"
            transform_hlds__par_loop_control__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 802 "par_loop_control.m"
            transform_hlds__par_loop_control__Conjs_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 802 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_91_91 == (MR_Integer) 1);
#line 802 "par_loop_control.m"
          }
#line 805 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 803 "par_loop_control.m"
          {
#line 803 "par_loop_control.m"
            transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__Conjs_108, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalInfo_17, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
#line 803 "par_loop_control.m"
            return;
          }
#line 805 "par_loop_control.m"
        else
#line 806 "par_loop_control.m"
          {
#line 806 "par_loop_control.m"
            {
#line 806 "par_loop_control.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", (MR_String) "expected parallel conjunction");
#line 806 "par_loop_control.m"
              return;
            }
#line 806 "par_loop_control.m"
          }
#line 805 "par_loop_control.m"
      }
#line 715 "par_loop_control.m"
  }
#line 709 "par_loop_control.m"
}

#line 705 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 705 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 705 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5,
#line 705 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_6,
#line 705 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_7)
#line 705 "par_loop_control.m"
{
#line 705 "par_loop_control.m"
  {
#line 705 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53;

#line 705 "par_loop_control.m"
    {
#line 705 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_4), &transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_6), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53);
    }
#line 705 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49));
#line 705 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_5 = ((MR_Box) (transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51));
#line 705 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_7 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53));
#line 705 "par_loop_control.m"
  }
#line 705 "par_loop_control.m"
}

#line 704 "par_loop_control.m"
static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
#line 704 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 704 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1)
#line 704 "par_loop_control.m"
{
#line 704 "par_loop_control.m"
  {
#line 704 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__wrapper_arg_2;
#line 704 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 704 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__3_3;

#line 704 "par_loop_control.m"
    {
#line 704 "par_loop_control.m"
      transform_hlds__par_loop_control__conv0_HeadVar__3_3 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1));
    }
#line 704 "par_loop_control.m"
    transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__3_3));
#line 704 "par_loop_control.m"
    return transform_hlds__par_loop_control__wrapper_arg_2;
#line 704 "par_loop_control.m"
  }
#line 704 "par_loop_control.m"
}

#line 698 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalIds_11,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17,
#line 698 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 698 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 698 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 698 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22)
#line 698 "par_loop_control.m"
{
#line 703 "par_loop_control.m"
  {
#line 703 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 703 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
#line 703 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalPaths_16;
#line 703 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23;
#line 703 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24;
#line 705 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18;
#line 705 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20;
#line 705 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22;

#line 704 "par_loop_control.m"
    {
#line 704 "par_loop_control.m"
      transform_hlds__par_loop_control__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 704 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
#line 704 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1));
#line 704 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 704 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 3) = ((MR_Box) (transform_hlds__par_loop_control__ContainingGoalMap_12));
#line 704 "par_loop_control.m"
    }
#line 704 "par_loop_control.m"
    {
#line 704 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalPaths_16 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, transform_hlds__par_loop_control__TypeCtorInfo_30_30, transform_hlds__par_loop_control__V_23_23, transform_hlds__par_loop_control__GoalIds_11);
    }
#line 705 "par_loop_control.m"
    {
#line 705 "par_loop_control.m"
      transform_hlds__par_loop_control__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 705 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[0]));
#line 705 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2));
#line 705 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 705 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_10));
#line 705 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 4) = ((MR_Box) ((MR_Integer) 0));
#line 705 "par_loop_control.m"
    }
#line 705 "par_loop_control.m"
    {
#line 705 "par_loop_control.m"
      mercury__list__foldl3_8_p_0(transform_hlds__par_loop_control__TypeCtorInfo_30_30, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__par_loop_control__V_24_24, transform_hlds__par_loop_control__GoalPaths_16, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17)), &transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19)), &transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21)), &transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22);
    }
#line 705 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18 = ((MR_Word) transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18);
#line 705 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20 = ((MR_Word) transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20);
#line 705 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22 = ((MR_Word) transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22);
#line 703 "par_loop_control.m"
  }
#line 698 "par_loop_control.m"
}

#line 657 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
#line 657 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 657 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PreserveTailRecursion_4)
#line 657 "par_loop_control.m"
{
#line 660 "par_loop_control.m"
  {
#line 660 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 660 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Globals_5;
#line 660 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PreserveTailRecursionBool_6;

#line 661 "par_loop_control.m"
    {
#line 661 "par_loop_control.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__par_loop_control__ModuleInfo_3, &transform_hlds__par_loop_control__Globals_5);
    }
#line 662 "par_loop_control.m"
    {
#line 662 "par_loop_control.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__par_loop_control__Globals_5, (MR_Integer) 674, &transform_hlds__par_loop_control__PreserveTailRecursionBool_6);
    }
#line 667 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__PreserveTailRecursionBool_6 == (MR_Integer) 0))
#line 669 "par_loop_control.m"
      *transform_hlds__par_loop_control__PreserveTailRecursion_4 = (MR_Integer) 1;
#line 667 "par_loop_control.m"
    else
#line 666 "par_loop_control.m"
      *transform_hlds__par_loop_control__PreserveTailRecursion_4 = (MR_Integer) 0;
#line 660 "par_loop_control.m"
  }
#line 657 "par_loop_control.m"
}

#line 558 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_9,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldPredProcId_10,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldProcInfo_11,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 558 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredProcId_13,
#line 558 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredSym_14,
#line 558 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55,
#line 558 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56)
#line 558 "par_loop_control.m"
{
#line 563 "par_loop_control.m"
  {
#line 563 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_101_101;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_102_102;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldPredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OldPredProcId_10, (MR_Integer) 0)));
#line 563 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__OldProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OldPredProcId_10, (MR_Integer) 1)));
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldPredInfo_18;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ModuleName_19;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredOrFunc_20;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredSym0_21;
#line 563 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__OldProcInt_22;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Context_23;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldOrigin_24;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Origin_25;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Markers_26;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeVarSet_27;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ExistQVars_28;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ClassConstraints_29;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgTypes0_30;
#line 563 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_35;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_37;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgModes0_38;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars0_39;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_40;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PreserveTailRecursion_41;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__WaitFreeSlotProc_42;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__JoinAndTerminateProc_43;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Info_44;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars_46;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgTypes_47;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgModes_50;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstVarSet_51;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarMaps_52;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_53;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ProcInfo_54;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;
#line 563 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_59_59;
#line 563 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_61_61;
#line 563 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_63_63;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_71_71;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_72_72;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_82_82;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_84_84;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_85_85;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_90_90;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_96_96;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_97_97;
#line 563 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98;
#line 635 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_45_45;

#line 565 "par_loop_control.m"
    {
#line 565 "par_loop_control.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, transform_hlds__par_loop_control__OldPredId_16, &transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 568 "par_loop_control.m"
    {
#line 568 "par_loop_control.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__ModuleName_19);
    }
#line 569 "par_loop_control.m"
    {
#line 569 "par_loop_control.m"
      transform_hlds__par_loop_control__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 570 "par_loop_control.m"
    {
#line 570 "par_loop_control.m"
      transform_hlds__par_loop_control__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_58_58, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredOrFunc_20));
#line 570 "par_loop_control.m"
    }
#line 570 "par_loop_control.m"
    {
#line 570 "par_loop_control.m"
      transform_hlds__par_loop_control__V_59_59 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 570 "par_loop_control.m"
    {
#line 570 "par_loop_control.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__par_loop_control__ModuleName_19, (MR_String) "LoopControl", transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__V_59_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredSym0_21);
    }
#line 578 "par_loop_control.m"
    {
#line 578 "par_loop_control.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__par_loop_control__OldProcId_17, &transform_hlds__par_loop_control__OldProcInt_22);
    }
#line 579 "par_loop_control.m"
    {
#line 579 "par_loop_control.m"
      transform_hlds__par_loop_control__V_63_63 = mercury__string__int_to_string_1_f_0(transform_hlds__par_loop_control__OldProcInt_22);
    }
#line 579 "par_loop_control.m"
    {
#line 579 "par_loop_control.m"
      transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__par_loop_control__V_63_63);
    }
#line 579 "par_loop_control.m"
    {
#line 579 "par_loop_control.m"
      mdbcomp__prim_data__add_sym_name_suffix_3_p_0(transform_hlds__par_loop_control__PredSym0_21, transform_hlds__par_loop_control__V_61_61, transform_hlds__par_loop_control__PredSym_14);
    }
#line 580 "par_loop_control.m"
    {
#line 580 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__Context_23);
    }
#line 581 "par_loop_control.m"
    {
#line 581 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__OldOrigin_24);
    }
#line 582 "par_loop_control.m"
    {
#line 582 "par_loop_control.m"
      transform_hlds__par_loop_control__Origin_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 582 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 582 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 1) = ((MR_Box) (transform_hlds__par_loop_control__OldOrigin_24));
#line 582 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 2) = ((MR_Box) (transform_hlds__par_loop_control__OldPredId_16));
#line 582 "par_loop_control.m"
    }
#line 585 "par_loop_control.m"
    {
#line 585 "par_loop_control.m"
      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65);
    }
#line 586 "par_loop_control.m"
    {
#line 586 "par_loop_control.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 12, transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65, &transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67);
    }
#line 587 "par_loop_control.m"
    {
#line 587 "par_loop_control.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67, &transform_hlds__par_loop_control__Markers_26);
    }
#line 590 "par_loop_control.m"
    {
#line 590 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__TypeVarSet_27);
    }
#line 591 "par_loop_control.m"
    {
#line 591 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ExistQVars_28);
    }
#line 592 "par_loop_control.m"
    {
#line 592 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ClassConstraints_29);
    }
#line 593 "par_loop_control.m"
    {
#line 593 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ArgTypes0_30);
    }
#line 598 "par_loop_control.m"
    {
#line 598 "par_loop_control.m"
      transform_hlds__par_loop_control__V_71_71 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0);
    }
#line 8713 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_101_101 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 8715 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_102_102 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 598 "par_loop_control.m"
    {
#line 598 "par_loop_control.m"
      transform_hlds__par_loop_control__V_72_72 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_101_101, transform_hlds__par_loop_control__TypeCtorInfo_102_102);
    }
#line 598 "par_loop_control.m"
    {
#line 598 "par_loop_control.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__par_loop_control__ModuleName_19, *transform_hlds__par_loop_control__PredSym_14, transform_hlds__par_loop_control__PredOrFunc_20, transform_hlds__par_loop_control__Context_23, transform_hlds__par_loop_control__Origin_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__par_loop_control__Markers_26, transform_hlds__par_loop_control__ArgTypes0_30, transform_hlds__par_loop_control__TypeVarSet_27, transform_hlds__par_loop_control__ExistQVars_28, transform_hlds__par_loop_control__ClassConstraints_29, transform_hlds__par_loop_control__V_71_71, transform_hlds__par_loop_control__V_72_72, transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__ProcId_35, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73);
    }
#line 605 "par_loop_control.m"
    {
#line 605 "par_loop_control.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74);
    }
#line 606 "par_loop_control.m"
    {
#line 606 "par_loop_control.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__par_loop_control__PredId_37, transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74, &transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75);
    }
#line 607 "par_loop_control.m"
    {
#line 607 "par_loop_control.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 609 "par_loop_control.m"
    {
#line 609 "par_loop_control.m"
      MR_Word base;
#line 609 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "par_loop_control.m"
      *transform_hlds__par_loop_control__PredProcId_13 = base;
#line 609 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_37));
#line 609 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_35));
#line 609 "par_loop_control.m"
    }
#line 614 "par_loop_control.m"
    {
#line 614 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__ArgModes0_38);
    }
#line 615 "par_loop_control.m"
    {
#line 615 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__HeadVars0_39);
    }
#line 616 "par_loop_control.m"
    {
#line 616 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77);
    }
#line 617 "par_loop_control.m"
    {
#line 617 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78);
    }
#line 618 "par_loop_control.m"
    {
#line 618 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79);
    }
#line 620 "par_loop_control.m"
    {
#line 620 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "LC", &transform_hlds__par_loop_control__LCVar_40, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81);
    }
#line 621 "par_loop_control.m"
    {
#line 621 "par_loop_control.m"
      transform_hlds__par_loop_control__V_82_82 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    }
#line 621 "par_loop_control.m"
    {
#line 621 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__LCVar_40, transform_hlds__par_loop_control__V_82_82, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83);
    }
#line 622 "par_loop_control.m"
    {
#line 622 "par_loop_control.m"
      transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__PreserveTailRecursion_41);
    }
#line 623 "par_loop_control.m"
    {
#line 623 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__WaitFreeSlotProc_42);
    }
#line 624 "par_loop_control.m"
    {
#line 624 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__JoinAndTerminateProc_43);
    }
#line 626 "par_loop_control.m"
    {
#line 626 "par_loop_control.m"
      transform_hlds__par_loop_control__V_84_84 = transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0();
    }
#line 626 "par_loop_control.m"
    {
#line 626 "par_loop_control.m"
      transform_hlds__par_loop_control__V_85_85 = transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0();
    }
#line 626 "par_loop_control.m"
    {
#line 626 "par_loop_control.m"
      transform_hlds__par_loop_control__Info_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_40));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 2) = ((MR_Box) (transform_hlds__par_loop_control__OldPredProcId_10));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 3) = ((MR_Box) (*transform_hlds__par_loop_control__PredProcId_13));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 4) = ((MR_Box) (*transform_hlds__par_loop_control__PredSym_14));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 5) = ((MR_Box) (transform_hlds__par_loop_control__PreserveTailRecursion_41));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 6) = ((MR_Box) (transform_hlds__par_loop_control__WaitFreeSlotProc_42));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 7) = ((MR_Box) (transform_hlds__par_loop_control__V_84_84));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 8) = ((MR_Box) (transform_hlds__par_loop_control__JoinAndTerminateProc_43));
#line 626 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 9) = ((MR_Box) (transform_hlds__par_loop_control__V_85_85));
#line 626 "par_loop_control.m"
    }
#line 630 "par_loop_control.m"
    {
#line 630 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(transform_hlds__par_loop_control__Info_44, transform_hlds__par_loop_control__RecParConjIds_9, transform_hlds__par_loop_control__ContainingGoalMap_12, transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88);
    }
#line 635 "par_loop_control.m"
    {
#line 635 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(transform_hlds__par_loop_control__Info_44, transform_hlds__par_loop_control__RecParConjIds_9, &transform_hlds__par_loop_control__V_45_45, transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89);
    }
#line 638 "par_loop_control.m"
    {
#line 638 "par_loop_control.m"
      transform_hlds__par_loop_control__HeadVars_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVars_46, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_40));
#line 638 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVars_46, 1) = ((MR_Box) (transform_hlds__par_loop_control__HeadVars0_39));
#line 638 "par_loop_control.m"
    }
#line 639 "par_loop_control.m"
    {
#line 639 "par_loop_control.m"
      transform_hlds__par_loop_control__V_90_90 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    }
#line 639 "par_loop_control.m"
    {
#line 639 "par_loop_control.m"
      transform_hlds__par_loop_control__ArgTypes_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgTypes_47, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_90_90));
#line 639 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgTypes_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ArgTypes0_30));
#line 639 "par_loop_control.m"
    }
#line 642 "par_loop_control.m"
    {
#line 642 "par_loop_control.m"
      transform_hlds__par_loop_control__ArgModes_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgModes_50, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[4]));
#line 642 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgModes_50, 1) = ((MR_Box) (transform_hlds__par_loop_control__ArgModes0_38));
#line 642 "par_loop_control.m"
    }
#line 644 "par_loop_control.m"
    {
#line 644 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__InstVarSet_51);
    }
#line 645 "par_loop_control.m"
    {
#line 645 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__RttiVarMaps_52);
    }
#line 646 "par_loop_control.m"
    {
#line 646 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__Detism_53);
    }
#line 647 "par_loop_control.m"
    {
#line 647 "par_loop_control.m"
      transform_hlds__par_loop_control__V_96_96 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_101_101, transform_hlds__par_loop_control__TypeCtorInfo_102_102);
    }
#line 647 "par_loop_control.m"
    {
#line 647 "par_loop_control.m"
      hlds__hlds_pred__proc_info_create_13_p_0(transform_hlds__par_loop_control__Context_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88, transform_hlds__par_loop_control__HeadVars_46, transform_hlds__par_loop_control__InstVarSet_51, transform_hlds__par_loop_control__ArgModes_50, (MR_Integer) 2, transform_hlds__par_loop_control__Detism_53, transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89, transform_hlds__par_loop_control__RttiVarMaps_52, (MR_Integer) 1, transform_hlds__par_loop_control__V_96_96, &transform_hlds__par_loop_control__ProcInfo_54);
    }
#line 652 "par_loop_control.m"
    {
#line 652 "par_loop_control.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__par_loop_control__TypeVarSet_27, transform_hlds__par_loop_control__ExistQVars_28, transform_hlds__par_loop_control__ArgTypes_47, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_97_97);
    }
#line 653 "par_loop_control.m"
    {
#line 653 "par_loop_control.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__par_loop_control__ProcId_35, transform_hlds__par_loop_control__ProcInfo_54, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_97_97, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98);
    }
#line 654 "par_loop_control.m"
    {
#line 654 "par_loop_control.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__par_loop_control__PredId_37, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56);
#line 654 "par_loop_control.m"
      return;
    }
#line 563 "par_loop_control.m"
  }
#line 558 "par_loop_control.m"
}

#line 506 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
#line 506 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 506 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Seen0_2,
#line 506 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3)
#line 506 "par_loop_control.m"
{
#line 511 "par_loop_control.m"
  {
#line 511 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 511 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "par_loop_control.m"
      else
#line 515 "par_loop_control.m"
        if ((((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 519 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 515 "par_loop_control.m"
        else
#line 522 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__Seen0_2;
#line 511 "par_loop_control.m"
    else
#line 511 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 529 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 528 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__Seen0_2;
#line 529 "par_loop_control.m"
        else
#line 534 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 511 "par_loop_control.m"
      else
#line 511 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 536 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 511 "par_loop_control.m"
        else
#line 539 "par_loop_control.m"
          {
#line 539 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__GoalIdsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));

#line 543 "par_loop_control.m"
            if ((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__HeadVar__1_1;
#line 543 "par_loop_control.m"
            else
#line 543 "par_loop_control.m"
              if ((((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((transform_hlds__par_loop_control__Seen0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 547 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 543 "par_loop_control.m"
              else
#line 549 "par_loop_control.m"
                {
#line 549 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__GoalIdsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Seen0_2, (MR_Integer) 0)));
#line 549 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__GoalIds_15;

#line 552 "par_loop_control.m"
                  {
#line 552 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalIds_15 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, transform_hlds__par_loop_control__GoalIdsA_11, transform_hlds__par_loop_control__GoalIdsB_14);
                  }
#line 553 "par_loop_control.m"
                  {
#line 553 "par_loop_control.m"
                    MR_Word base;
#line 553 "par_loop_control.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = base;
#line 553 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalIds_15));
#line 553 "par_loop_control.m"
                  }
#line 549 "par_loop_control.m"
                }
#line 539 "par_loop_control.m"
          }
#line 511 "par_loop_control.m"
  }
#line 506 "par_loop_control.m"
}

#line 457 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
#line 457 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_4,
#line 457 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 457 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 457 "par_loop_control.m"
{
#line 461 "par_loop_control.m"
  {
#line 461 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 461 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 461 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 461 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));

#line 462 "par_loop_control.m"
    {
#line 462 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Goal_7, transform_hlds__par_loop_control__SelfPredProcId_4, transform_hlds__par_loop_control__SeenUsableRecursion_8);
#line 462 "par_loop_control.m"
      return;
    }
#line 461 "par_loop_control.m"
  }
#line 457 "par_loop_control.m"
}

#line 435 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
#line 435 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 435 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_2,
#line 435 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3,
#line 435 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4)
#line 435 "par_loop_control.m"
{
#line 439 "par_loop_control.m"
  while (MR_TRUE)
#line 439 "par_loop_control.m"
    {
#line 439 "par_loop_control.m"
      /* tailcall optimized into a loop */
#line 439 "par_loop_control.m"
      {
#line 439 "par_loop_control.m"
        MR_bool transform_hlds__par_loop_control__succeeded;

#line 439 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "par_loop_control.m"
          *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3;
#line 439 "par_loop_control.m"
        else
#line 441 "par_loop_control.m"
          {
#line 441 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Conj_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 441 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Conjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__SeenUsableRecursionConj_13;

#line 442 "par_loop_control.m"
            {
#line 442 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Conj_9, transform_hlds__par_loop_control__SelfPredProcId_2, &transform_hlds__par_loop_control__SeenUsableRecursionConj_13);
            }
#line 9119 "transform_hlds.par_loop_control.c"
            if ((transform_hlds__par_loop_control__SeenUsableRecursionConj_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "par_loop_control.m"
              {
#line 453 "par_loop_control.m"
                /* direct tailcall eliminated */
#line 453 "par_loop_control.m"
                {
#line 453 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;

#line 453 "par_loop_control.m"
                  transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 453 "par_loop_control.m"
                }
#line 453 "par_loop_control.m"
                continue;
#line 453 "par_loop_control.m"
              }
#line 9138 "transform_hlds.par_loop_control.c"
            else
#line 9140 "transform_hlds.par_loop_control.c"
              if ((transform_hlds__par_loop_control__SeenUsableRecursionConj_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9142 "transform_hlds.par_loop_control.c"
                if ((transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9144 "transform_hlds.par_loop_control.c"
                  {
#line 453 "par_loop_control.m"
                    /* direct tailcall eliminated */
#line 453 "par_loop_control.m"
                    {
#line 453 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;

#line 453 "par_loop_control.m"
                      transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 453 "par_loop_control.m"
                      transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 453 "par_loop_control.m"
                    }
#line 453 "par_loop_control.m"
                    continue;
#line 9161 "transform_hlds.par_loop_control.c"
                  }
#line 9163 "transform_hlds.par_loop_control.c"
                else
#line 482 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9167 "transform_hlds.par_loop_control.c"
              else
#line 9169 "transform_hlds.par_loop_control.c"
                if ((transform_hlds__par_loop_control__SeenUsableRecursionConj_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 470 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9173 "transform_hlds.par_loop_control.c"
                else
#line 9175 "transform_hlds.par_loop_control.c"
                  if ((transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "par_loop_control.m"
                    {
#line 453 "par_loop_control.m"
                      /* direct tailcall eliminated */
#line 453 "par_loop_control.m"
                      {
#line 453 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;
#line 453 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0__tmp_copy_3 = transform_hlds__par_loop_control__SeenUsableRecursionConj_13;

#line 453 "par_loop_control.m"
                        transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 = transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0__tmp_copy_3;
#line 453 "par_loop_control.m"
                        transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 453 "par_loop_control.m"
                      }
#line 453 "par_loop_control.m"
                      continue;
#line 453 "par_loop_control.m"
                    }
#line 9198 "transform_hlds.par_loop_control.c"
                  else
#line 494 "par_loop_control.m"
                    *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 441 "par_loop_control.m"
          }
#line 439 "par_loop_control.m"
      }
#line 439 "par_loop_control.m"
      break;
#line 439 "par_loop_control.m"
    }
#line 435 "par_loop_control.m"
}

#line 405 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
#line 405 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conj_5,
#line 405 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_6,
#line 405 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_7,
#line 405 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 405 "par_loop_control.m"
{
#line 409 "par_loop_control.m"
  while (MR_TRUE)
#line 409 "par_loop_control.m"
    {
#line 409 "par_loop_control.m"
      /* tailcall optimized into a loop */
#line 409 "par_loop_control.m"
      {
#line 409 "par_loop_control.m"
        MR_bool transform_hlds__par_loop_control__succeeded;
#line 409 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_9;

#line 410 "par_loop_control.m"
        {
#line 410 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Conj_5, transform_hlds__par_loop_control__SelfPredProcId_7, &transform_hlds__par_loop_control__SeenUsableRecursion0_9);
        }
#line 417 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__Conjs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "par_loop_control.m"
          *transform_hlds__par_loop_control__SeenUsableRecursion_8 = transform_hlds__par_loop_control__SeenUsableRecursion0_9;
#line 417 "par_loop_control.m"
        else
#line 418 "par_loop_control.m"
          {
#line 418 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Head_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_6, (MR_Integer) 0)));
#line 418 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_6, (MR_Integer) 1)));

#line 427 "par_loop_control.m"
            if ((transform_hlds__par_loop_control__SeenUsableRecursion0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "par_loop_control.m"
              {
#line 430 "par_loop_control.m"
                /* direct tailcall eliminated */
#line 430 "par_loop_control.m"
                {
#line 430 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Conj__tmp_copy_5 = transform_hlds__par_loop_control__Head_10;
#line 430 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Conjs__tmp_copy_6 = transform_hlds__par_loop_control__Tail_11;

#line 430 "par_loop_control.m"
                  transform_hlds__par_loop_control__Conjs_6 = transform_hlds__par_loop_control__Conjs__tmp_copy_6;
#line 430 "par_loop_control.m"
                  transform_hlds__par_loop_control__Conj_5 = transform_hlds__par_loop_control__Conj__tmp_copy_5;
#line 430 "par_loop_control.m"
                }
#line 430 "par_loop_control.m"
                continue;
#line 430 "par_loop_control.m"
              }
#line 427 "par_loop_control.m"
            else
#line 426 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 418 "par_loop_control.m"
          }
#line 409 "par_loop_control.m"
      }
#line 409 "par_loop_control.m"
      break;
#line 409 "par_loop_control.m"
    }
#line 405 "par_loop_control.m"
}

#line 379 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(
#line 379 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_5,
#line 379 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_6,
#line 379 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalId_7,
#line 379 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 379 "par_loop_control.m"
{
#line 385 "par_loop_control.m"
  {
#line 385 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 385 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__Conjs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "par_loop_control.m"
      {
#line 386 "par_loop_control.m"
        {
#line 386 "par_loop_control.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.par_conj_get_loop_control_par_conjs\'/4", (MR_String) "Empty parallel conjunction");
#line 386 "par_loop_control.m"
          return;
        }
#line 385 "par_loop_control.m"
      }
#line 385 "par_loop_control.m"
    else
#line 388 "par_loop_control.m"
      {
#line 388 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Head_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_5, (MR_Integer) 0)));
#line 388 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_5, (MR_Integer) 1)));
#line 388 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_11;

#line 389 "par_loop_control.m"
        {
#line 389 "par_loop_control.m"
          transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(transform_hlds__par_loop_control__Head_9, transform_hlds__par_loop_control__Tail_10, transform_hlds__par_loop_control__SelfPredProcId_6, &transform_hlds__par_loop_control__SeenUsableRecursion0_11);
        }
#line 394 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__SeenUsableRecursion0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "par_loop_control.m"
          *transform_hlds__par_loop_control__SeenUsableRecursion_8 = transform_hlds__par_loop_control__SeenUsableRecursion0_11;
#line 394 "par_loop_control.m"
        else
#line 394 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__SeenUsableRecursion0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 395 "par_loop_control.m"
            {
#line 395 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_13_13;

#line 396 "par_loop_control.m"
              {
#line 396 "par_loop_control.m"
                transform_hlds__par_loop_control__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalId_7));
#line 396 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "par_loop_control.m"
              }
#line 396 "par_loop_control.m"
              {
#line 396 "par_loop_control.m"
                MR_Word base;
#line 396 "par_loop_control.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = base;
#line 396 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_13_13));
#line 396 "par_loop_control.m"
              }
#line 395 "par_loop_control.m"
            }
#line 394 "par_loop_control.m"
          else
#line 401 "par_loop_control.m"
            *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 388 "par_loop_control.m"
      }
#line 385 "par_loop_control.m"
  }
#line 379 "par_loop_control.m"
}

#line 503 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
#line 503 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 503 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 503 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 503 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 503 "par_loop_control.m"
{
#line 503 "par_loop_control.m"
  {
#line 503 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 503 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_HeadVar__3_3;

#line 503 "par_loop_control.m"
    {
#line 503 "par_loop_control.m"
      transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv1_HeadVar__3_3);
    }
#line 503 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv1_HeadVar__3_3));
#line 503 "par_loop_control.m"
  }
#line 503 "par_loop_control.m"
}

#line 290 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
#line 290 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 290 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 290 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2)
#line 290 "par_loop_control.m"
{
#line 290 "par_loop_control.m"
  {
#line 290 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8;

#line 290 "par_loop_control.m"
    {
#line 290 "par_loop_control.m"
      transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8);
    }
#line 290 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8));
#line 290 "par_loop_control.m"
  }
#line 290 "par_loop_control.m"
}

#line 239 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
#line 239 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal_4,
#line 239 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_5,
#line 239 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_6)
#line 239 "par_loop_control.m"
{
#line 242 "par_loop_control.m"
  {
#line 242 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal_4, (MR_Integer) 0)));
#line 242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal_4, (MR_Integer) 1)));
#line 242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_9;
#line 242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_10;

#line 244 "par_loop_control.m"
    {
#line 244 "par_loop_control.m"
      transform_hlds__par_loop_control__Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
    }
#line 245 "par_loop_control.m"
    {
#line 245 "par_loop_control.m"
      transform_hlds__par_loop_control__InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
    }
#line 246 "par_loop_control.m"
    {
#line 246 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__par_loop_control__InstmapDelta_10);
    }
#line 368 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 9493 "transform_hlds.par_loop_control.c"
      if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 9495 "transform_hlds.par_loop_control.c"
        {
#line 9497 "transform_hlds.par_loop_control.c"
          MR_Word transform_hlds__par_loop_control__SubGoal_43 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr_7), (MR_Integer) 0);
#line 9499 "transform_hlds.par_loop_control.c"
          MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_81;

#line 300 "par_loop_control.m"
          {
#line 300 "par_loop_control.m"
            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__SubGoal_43, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursion0_81);
          }
#line 348 "par_loop_control.m"
          if ((((transform_hlds__par_loop_control__SeenUsableRecursion0_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((transform_hlds__par_loop_control__SeenUsableRecursion0_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 347 "par_loop_control.m"
            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 348 "par_loop_control.m"
          else
#line 357 "par_loop_control.m"
            if ((((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 4)) || ((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 0))))
#line 356 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 357 "par_loop_control.m"
            else
#line 365 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9521 "transform_hlds.par_loop_control.c"
        }
#line 9523 "transform_hlds.par_loop_control.c"
      else
#line 9525 "transform_hlds.par_loop_control.c"
        if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 9527 "transform_hlds.par_loop_control.c"
          {
#line 9529 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)));
#line 9531 "transform_hlds.par_loop_control.c"
            MR_Integer transform_hlds__par_loop_control__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 251 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 251 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 251 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 4)));
#line 251 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 5)));
#line 252 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Integer) 0)));
#line 252 "par_loop_control.m"
            MR_Integer transform_hlds__par_loop_control__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Integer) 1)));

#line 252 "par_loop_control.m"
            {
#line 252 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__par_loop_control__PredId_17, transform_hlds__par_loop_control__V_65_65);
            }
#line 252 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 252 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__ProcId_18 == transform_hlds__par_loop_control__V_66_66);
#line 9555 "transform_hlds.par_loop_control.c"
            if (transform_hlds__par_loop_control__succeeded)
#line 9557 "transform_hlds.par_loop_control.c"
              {
#line 357 "par_loop_control.m"
                if ((((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 4)) || ((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 0))))
#line 356 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 357 "par_loop_control.m"
                else
#line 365 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9567 "transform_hlds.par_loop_control.c"
              }
#line 9569 "transform_hlds.par_loop_control.c"
            else
#line 256 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9573 "transform_hlds.par_loop_control.c"
          }
#line 9575 "transform_hlds.par_loop_control.c"
        else
#line 9577 "transform_hlds.par_loop_control.c"
          if (((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 249 "par_loop_control.m"
            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9581 "transform_hlds.par_loop_control.c"
          else
#line 9583 "transform_hlds.par_loop_control.c"
            if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 266 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9587 "transform_hlds.par_loop_control.c"
            else
#line 9589 "transform_hlds.par_loop_control.c"
              if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 9591 "transform_hlds.par_loop_control.c"
                {
#line 9593 "transform_hlds.par_loop_control.c"
                  MR_Word transform_hlds__par_loop_control__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 9595 "transform_hlds.par_loop_control.c"
                  MR_Word transform_hlds__par_loop_control__Conjs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 9597 "transform_hlds.par_loop_control.c"
                  MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_77;

#line 273 "par_loop_control.m"
                  if ((transform_hlds__par_loop_control__ConjType_35 == (MR_Integer) 1))
#line 274 "par_loop_control.m"
                    {
#line 274 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__GoalId_37;

#line 275 "par_loop_control.m"
                      {
#line 275 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
                      }
#line 276 "par_loop_control.m"
                      {
#line 276 "par_loop_control.m"
                        transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(transform_hlds__par_loop_control__Conjs_36, transform_hlds__par_loop_control__SelfPredProcId_5, transform_hlds__par_loop_control__GoalId_37, &transform_hlds__par_loop_control__SeenUsableRecursion0_77);
                      }
#line 274 "par_loop_control.m"
                    }
#line 273 "par_loop_control.m"
                  else
#line 270 "par_loop_control.m"
                    {
#line 271 "par_loop_control.m"
                      {
#line 271 "par_loop_control.m"
                        transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(transform_hlds__par_loop_control__Conjs_36, transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__SeenUsableRecursion0_77);
                      }
#line 270 "par_loop_control.m"
                    }
#line 348 "par_loop_control.m"
                  if ((((transform_hlds__par_loop_control__SeenUsableRecursion0_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((transform_hlds__par_loop_control__SeenUsableRecursion0_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 347 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 348 "par_loop_control.m"
                  else
#line 357 "par_loop_control.m"
                    if ((((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 4)) || ((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 0))))
#line 356 "par_loop_control.m"
                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 357 "par_loop_control.m"
                    else
#line 365 "par_loop_control.m"
                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9644 "transform_hlds.par_loop_control.c"
                }
#line 9646 "transform_hlds.par_loop_control.c"
              else
#line 9648 "transform_hlds.par_loop_control.c"
                if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 9650 "transform_hlds.par_loop_control.c"
                  {
#line 283 "par_loop_control.m"
                    {
#line 283 "par_loop_control.m"
                      transform_hlds__par_loop_control__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__par_loop_control__Goal_4, transform_hlds__par_loop_control__SelfPredProcId_5);
                    }
#line 9657 "transform_hlds.par_loop_control.c"
                    if (transform_hlds__par_loop_control__succeeded)
#line 284 "par_loop_control.m"
                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9661 "transform_hlds.par_loop_control.c"
                    else
#line 286 "par_loop_control.m"
                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9665 "transform_hlds.par_loop_control.c"
                  }
#line 9667 "transform_hlds.par_loop_control.c"
                else
#line 9669 "transform_hlds.par_loop_control.c"
                  if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 263 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9673 "transform_hlds.par_loop_control.c"
                  else
#line 9675 "transform_hlds.par_loop_control.c"
                    if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 9677 "transform_hlds.par_loop_control.c"
                      {
#line 9679 "transform_hlds.par_loop_control.c"
                        MR_Word transform_hlds__par_loop_control__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 9681 "transform_hlds.par_loop_control.c"
                        MR_Word transform_hlds__par_loop_control__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 9683 "transform_hlds.par_loop_control.c"
                        MR_Word transform_hlds__par_loop_control__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 4)));
#line 9685 "transform_hlds.par_loop_control.c"
                        MR_Word transform_hlds__par_loop_control__SeenUsableRecursionCond_49;
#line 313 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));

#line 314 "par_loop_control.m"
                        {
#line 314 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Cond_46, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionCond_49);
                        }
#line 9695 "transform_hlds.par_loop_control.c"
                        if ((transform_hlds__par_loop_control__SeenUsableRecursionCond_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9697 "transform_hlds.par_loop_control.c"
                          {
#line 9699 "transform_hlds.par_loop_control.c"
                            MR_Word transform_hlds__par_loop_control__SeenUsableRecursionThen_50;
#line 9701 "transform_hlds.par_loop_control.c"
                            MR_Word transform_hlds__par_loop_control__SeenUsableRecursionElse_51;
#line 9703 "transform_hlds.par_loop_control.c"
                            MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_80;

#line 318 "par_loop_control.m"
                            {
#line 318 "par_loop_control.m"
                              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Then_47, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionThen_50);
                            }
#line 320 "par_loop_control.m"
                            {
#line 320 "par_loop_control.m"
                              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Else_48, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionElse_51);
                            }
#line 322 "par_loop_control.m"
                            {
#line 322 "par_loop_control.m"
                              transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(transform_hlds__par_loop_control__SeenUsableRecursionThen_50, transform_hlds__par_loop_control__SeenUsableRecursionElse_51, &transform_hlds__par_loop_control__SeenUsableRecursion0_80);
                            }
#line 348 "par_loop_control.m"
                            if ((((transform_hlds__par_loop_control__SeenUsableRecursion0_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((transform_hlds__par_loop_control__SeenUsableRecursion0_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 347 "par_loop_control.m"
                              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 348 "par_loop_control.m"
                            else
#line 357 "par_loop_control.m"
                              if ((((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 4)) || ((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 0))))
#line 356 "par_loop_control.m"
                                *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 357 "par_loop_control.m"
                              else
#line 365 "par_loop_control.m"
                                *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9735 "transform_hlds.par_loop_control.c"
                          }
#line 9737 "transform_hlds.par_loop_control.c"
                        else
#line 334 "par_loop_control.m"
                          *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9741 "transform_hlds.par_loop_control.c"
                      }
#line 9743 "transform_hlds.par_loop_control.c"
                    else
#line 9745 "transform_hlds.par_loop_control.c"
                      if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 9747 "transform_hlds.par_loop_control.c"
                        {
#line 9749 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SubGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 9751 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 307 "par_loop_control.m"
                          MR_Word transform_hlds__par_loop_control__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));

#line 308 "par_loop_control.m"
                          {
#line 308 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__SubGoal_60, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursion0_83);
                          }
#line 348 "par_loop_control.m"
                          if ((((transform_hlds__par_loop_control__SeenUsableRecursion0_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((transform_hlds__par_loop_control__SeenUsableRecursion0_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 347 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 348 "par_loop_control.m"
                          else
#line 357 "par_loop_control.m"
                            if ((((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 4)) || ((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 0))))
#line 356 "par_loop_control.m"
                              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 357 "par_loop_control.m"
                            else
#line 365 "par_loop_control.m"
                              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9775 "transform_hlds.par_loop_control.c"
                        }
#line 9777 "transform_hlds.par_loop_control.c"
                      else
#line 9779 "transform_hlds.par_loop_control.c"
                        if (((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 9781 "transform_hlds.par_loop_control.c"
                          {
#line 338 "par_loop_control.m"
                            {
#line 338 "par_loop_control.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_get_loop_control_par_conjs\'/3", (MR_String) "shorthand");
#line 338 "par_loop_control.m"
                              return;
                            }
#line 9790 "transform_hlds.par_loop_control.c"
                          }
#line 9792 "transform_hlds.par_loop_control.c"
                        else
#line 9794 "transform_hlds.par_loop_control.c"
                          {
#line 9796 "transform_hlds.par_loop_control.c"
                            MR_Word transform_hlds__par_loop_control__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 9798 "transform_hlds.par_loop_control.c"
                            MR_Word transform_hlds__par_loop_control__SeenUsableRecursionCases_42;
#line 9800 "transform_hlds.par_loop_control.c"
                            MR_Word transform_hlds__par_loop_control__V_58_58;
#line 289 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 289 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));

#line 290 "par_loop_control.m"
                            {
#line 290 "par_loop_control.m"
                              transform_hlds__par_loop_control__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "par_loop_control.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[0]));
#line 290 "par_loop_control.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1));
#line 290 "par_loop_control.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "par_loop_control.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 3) = ((MR_Box) (transform_hlds__par_loop_control__SelfPredProcId_5));
#line 290 "par_loop_control.m"
                            }
#line 290 "par_loop_control.m"
                            {
#line 290 "par_loop_control.m"
                              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0, transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__Cases_41, &transform_hlds__par_loop_control__SeenUsableRecursionCases_42);
                            }
#line 9826 "transform_hlds.par_loop_control.c"
                            if ((transform_hlds__par_loop_control__SeenUsableRecursionCases_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "par_loop_control.m"
                              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9830 "transform_hlds.par_loop_control.c"
                            else
#line 9832 "transform_hlds.par_loop_control.c"
                              {
#line 9834 "transform_hlds.par_loop_control.c"
                                MR_Word transform_hlds__par_loop_control__TypeCtorInfo_10_76 = (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0;
#line 9836 "transform_hlds.par_loop_control.c"
                                MR_Word transform_hlds__par_loop_control__Seen_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__SeenUsableRecursionCases_42, (MR_Integer) 0)));
#line 9838 "transform_hlds.par_loop_control.c"
                                MR_Word transform_hlds__par_loop_control__Seens_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__SeenUsableRecursionCases_42, (MR_Integer) 1)));
#line 9840 "transform_hlds.par_loop_control.c"
                                MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 503 "par_loop_control.m"
                                MR_Box transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88;

#line 503 "par_loop_control.m"
                                {
#line 503 "par_loop_control.m"
                                  mercury__list__foldl_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_10_76, transform_hlds__par_loop_control__TypeCtorInfo_10_76, (MR_Word) &transform_hlds__par_loop_control_scalar_common_2[2], transform_hlds__par_loop_control__Seens_70, ((MR_Box) (transform_hlds__par_loop_control__Seen_69)), &transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88);
                                }
#line 503 "par_loop_control.m"
                                transform_hlds__par_loop_control__SeenUsableRecursion0_88 = ((MR_Word) transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88);
#line 348 "par_loop_control.m"
                                if ((((transform_hlds__par_loop_control__SeenUsableRecursion0_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((transform_hlds__par_loop_control__SeenUsableRecursion0_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 347 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 348 "par_loop_control.m"
                                else
#line 357 "par_loop_control.m"
                                  if ((((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 4)) || ((transform_hlds__par_loop_control__Detism_9 == (MR_Integer) 0))))
#line 356 "par_loop_control.m"
                                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 357 "par_loop_control.m"
                                  else
#line 365 "par_loop_control.m"
                                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 9866 "transform_hlds.par_loop_control.c"
                              }
#line 9868 "transform_hlds.par_loop_control.c"
                          }
#line 368 "par_loop_control.m"
    else
#line 370 "par_loop_control.m"
      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "par_loop_control.m"
  }
#line 239 "par_loop_control.m"
}

#line 135 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__DepInfo_7,
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_8,
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19,
#line 135 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20,
#line 135 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21,
#line 135 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22)
#line 135 "par_loop_control.m"
{
#line 164 "par_loop_control.m"
  {
#line 164 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_12_41;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_29;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepGraph_34;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SelfKey_35;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepGraphWOSelfEdge_36;
#line 177 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_37;

#line 178 "par_loop_control.m"
    {
#line 178 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__V_31_31);
    }
#line 178 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = ((MR_Integer) 1 == transform_hlds__par_loop_control__V_31_31);
#line 177 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 177 "par_loop_control.m"
      {
#line 179 "par_loop_control.m"
        {
#line 179 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__Detism_29);
        }
#line 184 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__Detism_29 == (MR_Integer) 4))
#line 184 "par_loop_control.m"
          transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 184 "par_loop_control.m"
        else
#line 184 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__Detism_29 == (MR_Integer) 0))
#line 183 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 184 "par_loop_control.m"
          else
#line 184 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_FALSE;
#line 177 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 177 "par_loop_control.m"
          {
#line 9949 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__TypeCtorInfo_12_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 192 "par_loop_control.m"
            {
#line 192 "par_loop_control.m"
              hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_41, transform_hlds__par_loop_control__DepInfo_7, &transform_hlds__par_loop_control__DepGraph_34);
            }
#line 195 "par_loop_control.m"
            {
#line 195 "par_loop_control.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_41, transform_hlds__par_loop_control__DepGraph_34, ((MR_Box) (transform_hlds__par_loop_control__PredProcId_8)), &transform_hlds__par_loop_control__SelfKey_35);
            }
#line 196 "par_loop_control.m"
            {
#line 196 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = mercury__digraph__is_edge_3_p_1(transform_hlds__par_loop_control__TypeCtorInfo_12_41, transform_hlds__par_loop_control__DepGraph_34, transform_hlds__par_loop_control__SelfKey_35, transform_hlds__par_loop_control__SelfKey_35);
            }
#line 177 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 177 "par_loop_control.m"
              {
#line 202 "par_loop_control.m"
                {
#line 202 "par_loop_control.m"
                  mercury__digraph__delete_edge_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_41, transform_hlds__par_loop_control__SelfKey_35, transform_hlds__par_loop_control__SelfKey_35, transform_hlds__par_loop_control__DepGraph_34, &transform_hlds__par_loop_control__DepGraphWOSelfEdge_36);
                }
#line 203 "par_loop_control.m"
                {
#line 203 "par_loop_control.m"
                  mercury__digraph__tc_2_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_41, transform_hlds__par_loop_control__DepGraphWOSelfEdge_36, &transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_37);
                }
#line 204 "par_loop_control.m"
                {
#line 204 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = mercury__digraph__is_edge_3_p_1(transform_hlds__par_loop_control__TypeCtorInfo_12_41, transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_37, transform_hlds__par_loop_control__SelfKey_35, transform_hlds__par_loop_control__SelfKey_35);
                }
#line 204 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 177 "par_loop_control.m"
              }
#line 177 "par_loop_control.m"
          }
#line 177 "par_loop_control.m"
      }
#line 164 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 140 "par_loop_control.m"
      {
#line 140 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Body0_11;
#line 140 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__VarTypes_12;
#line 140 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ContainingGoalMap_13;
#line 140 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Body_14;
#line 140 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__RecursiveParConjIds_15;
#line 140 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;

#line 140 "par_loop_control.m"
        {
#line 140 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__Body0_11);
        }
#line 143 "par_loop_control.m"
        {
#line 143 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__VarTypes_12);
        }
#line 144 "par_loop_control.m"
        {
#line 144 "par_loop_control.m"
          hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__par_loop_control__VarTypes_12, &transform_hlds__par_loop_control__ContainingGoalMap_13, transform_hlds__par_loop_control__Body0_11, &transform_hlds__par_loop_control__Body_14);
        }
#line 146 "par_loop_control.m"
        {
#line 146 "par_loop_control.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__par_loop_control__Body_14, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 147 "par_loop_control.m"
        {
#line 147 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Body_14, transform_hlds__par_loop_control__PredProcId_8, &transform_hlds__par_loop_control__RecursiveParConjIds_15);
        }
#line 154 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__RecursiveParConjIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "par_loop_control.m"
          {
#line 150 "par_loop_control.m"
            *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 150 "par_loop_control.m"
            *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 150 "par_loop_control.m"
          }
#line 154 "par_loop_control.m"
        else
#line 154 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__RecursiveParConjIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 151 "par_loop_control.m"
            {
#line 151 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 151 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 151 "par_loop_control.m"
            }
#line 154 "par_loop_control.m"
          else
#line 154 "par_loop_control.m"
            if ((transform_hlds__par_loop_control__RecursiveParConjIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 152 "par_loop_control.m"
              {
#line 152 "par_loop_control.m"
                *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 152 "par_loop_control.m"
                *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 152 "par_loop_control.m"
              }
#line 154 "par_loop_control.m"
            else
#line 155 "par_loop_control.m"
              {
#line 155 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__GoalIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__RecursiveParConjIds_15, (MR_Integer) 0)));
#line 155 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__InnerPredProcId_17;
#line 155 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__InnerPredName_18;

#line 158 "par_loop_control.m"
                {
#line 158 "par_loop_control.m"
                  transform_hlds__par_loop_control__create_inner_proc_8_p_0(transform_hlds__par_loop_control__GoalIds_16, transform_hlds__par_loop_control__PredProcId_8, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__par_loop_control__ContainingGoalMap_13, &transform_hlds__par_loop_control__InnerPredProcId_17, &transform_hlds__par_loop_control__InnerPredName_18, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22);
                }
#line 161 "par_loop_control.m"
                {
#line 161 "par_loop_control.m"
                  transform_hlds__par_loop_control__update_outer_proc_6_p_0(transform_hlds__par_loop_control__PredProcId_8, transform_hlds__par_loop_control__InnerPredProcId_17, transform_hlds__par_loop_control__InnerPredName_18, *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20);
#line 161 "par_loop_control.m"
                  return;
                }
#line 155 "par_loop_control.m"
              }
#line 140 "par_loop_control.m"
      }
#line 164 "par_loop_control.m"
    else
#line 165 "par_loop_control.m"
      {
#line 165 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 165 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19;
#line 165 "par_loop_control.m"
      }
#line 164 "par_loop_control.m"
  }
#line 135 "par_loop_control.m"
}

#line 132 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 132 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 132 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 132 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5)
#line 132 "par_loop_control.m"
{
#line 132 "par_loop_control.m"
  {
#line 132 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 132 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20;
#line 132 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22;

#line 132 "par_loop_control.m"
    {
#line 132 "par_loop_control.m"
      transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_4), &transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22);
    }
#line 132 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20));
#line 132 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_5 = ((MR_Box) (transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22));
#line 132 "par_loop_control.m"
  }
#line 132 "par_loop_control.m"
}

#line 91 "par_loop_control.m"
void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(
#line 91 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_5,
#line 91 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_6)
#line 91 "par_loop_control.m"
{
#line 129 "par_loop_control.m"
  {
#line 129 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 129 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepInfo_4;
#line 129 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7;
#line 129 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_8_8;
#line 129 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_10_10;

#line 130 "par_loop_control.m"
    {
#line 130 "par_loop_control.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7, &transform_hlds__par_loop_control__DepInfo_4);
    }
#line 132 "par_loop_control.m"
    {
#line 132 "par_loop_control.m"
      transform_hlds__par_loop_control__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 132 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[0]));
#line 132 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 1) = ((MR_Box) (transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1));
#line 132 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 132 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 3) = ((MR_Box) (transform_hlds__par_loop_control__DepInfo_4));
#line 132 "par_loop_control.m"
    }
#line 131 "par_loop_control.m"
    {
#line 131 "par_loop_control.m"
      transform_hlds__par_loop_control__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 131 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_8_8, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_10_10));
#line 131 "par_loop_control.m"
    }
#line 131 "par_loop_control.m"
    {
#line 131 "par_loop_control.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__par_loop_control__V_8_8, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_6);
#line 131 "par_loop_control.m"
      return;
    }
#line 129 "par_loop_control.m"
  }
#line 91 "par_loop_control.m"
}

void mercury__transform_hlds__par_loop_control__init(void)
{
}

void mercury__transform_hlds__par_loop_control__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0);
	MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0);
	MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0);
	MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0);
	MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0);
}

void mercury__transform_hlds__par_loop_control__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.par_loop_control. */
