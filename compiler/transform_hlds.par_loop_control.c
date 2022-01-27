/*
** Automatically generated from `par_loop_control.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1182 "par_loop_control.m"
struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s {
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1;
#line 1186 "par_loop_control.m"
  MR_bool transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded;
#line 1189 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
#line 1191 "par_loop_control.m"
  jmp_buf transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0;
#line 1191 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15;
#line 1182 "par_loop_control.m"
};

#line 1066 "par_loop_control.m"
struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s {
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6;
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
#line 1071 "par_loop_control.m"
  MR_bool transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded;
#line 1087 "par_loop_control.m"
  jmp_buf transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0;
#line 1087 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112;
#line 1087 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206;
#line 1087 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207;
#line 1066 "par_loop_control.m"
};


#line 175 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 178 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 181 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 190 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 193 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 202 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0;

#line 205 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1;

#line 208 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0[2];

#line 211 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2];

#line 214 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2];

#line 217 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0;

#line 220 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1;

#line 223 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0[2];

#line 226 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2];

#line 229 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2];

#line 232 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10];

#line 235 "transform_hlds.par_loop_control.c"
static const MR_ConstString transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0[10];

#line 238 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0;

#line 241 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1];

#line 244 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1];

#line 247 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1];

#line 250 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1];

#line 253 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0;

#line 256 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1;

#line 259 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0[2];

#line 262 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2];

#line 265 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2];

#line 268 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0;

#line 271 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1;

#line 274 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2;

#line 277 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 280 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1];

#line 283 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3;

#line 286 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3];

#line 289 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1];

#line 292 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0[2];

#line 295 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4];

#line 298 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4];

#line 301 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
#line 304 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 306 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 309 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
#line 312 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 314 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 316 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 319 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
#line 322 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 324 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 327 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
#line 330 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 332 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 334 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 337 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
#line 340 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 342 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 345 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
#line 348 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 350 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 352 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 355 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
#line 358 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 360 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 363 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
#line 366 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 368 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 370 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 373 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
#line 376 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 378 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 381 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
#line 384 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 386 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 388 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 1438 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1438__1_4_p_0(
#line 1438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_17,
#line 1438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_18,
#line 1438 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_19);

#line 1347 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1347__1_3_p_0(
#line 1347 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_23,
#line 1347 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_114,
#line 1347 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_115);

#line 1116 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1116__1_2_p_0(
#line 1116 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecPredProcId_41,
#line 1116 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_98);

#line 1127 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1127__1_2_p_0(
#line 1127 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ConjType_48,
#line 1127 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_93);

#line 210 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
#line 210 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 210 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 688 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
#line 688 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 688 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 674 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
#line 674 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 674 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 696 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
#line 696 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 696 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 1303 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
#line 1303 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 1303 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 1512 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
#line 1512 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1512 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1507 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void);

#line 1481 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
#line 1481 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_4,
#line 1481 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredId_5,
#line 1481 "par_loop_control.m"
  MR_Integer * transform_hlds__par_loop_control__ProcId_6);

#line 1475 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void);

#line 1465 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
#line 1465 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1465 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1456 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void);

#line 1445 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void);

#line 1438 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
#line 1438 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1438 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1438 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1438 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 1432 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
#line 1432 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1432 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldInstmapDelta_5,
#line 1432 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13);

#line 1418 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVarSet_10,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVar_11,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__VarType_12,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18,
#line 1418 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20,
#line 1418 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22,
#line 1418 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23);

#line 1347 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
#line 1347 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1347 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1347 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2);

#line 1345 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_5,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_6,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_7,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_8);

#line 1328 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_7,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredProcId_8,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredName_9,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_10,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46,
#line 1328 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47);

#line 1309 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
#line 1309 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_4,
#line 1309 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal0_5,
#line 1309 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_6);

#line 1287 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
#line 1287 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_3,
#line 1287 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_4);

#line 1271 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
#line 1271 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_5,
#line 1271 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCVar_6,
#line 1271 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCSVar_7,
#line 1271 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_8);

#line 1254 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_9,
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__NumContextsVar_10,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCVar_11,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_12,
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);

#line 1233 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
#line 1233 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_8,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCSVar_9,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_10,
#line 1233 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22,
#line 1233 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24);

#line 1219 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
#line 1219 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1219 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1219 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11,
#line 1219 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_12,
#line 1219 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_9);

#line 1191 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
#line 1191 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1191 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
#line 1191 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1191 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
#line 1191 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1182 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1182 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3,
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__4_4,
#line 1182 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__5_5);

#line 1137 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
#line 1137 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1137 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1137 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 1137 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 1116 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
#line 1116 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg);

#line 1127 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
#line 1127 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg);

#line 1087 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
#line 1087 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1087 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
#line 1087 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1087 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
#line 1087 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1066 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1066 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_8,
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70,
#line 1066 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71);

#line 1045 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
#line 1045 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1045 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1045 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3);

#line 1037 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
#line 1037 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1037 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1027 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
#line 1027 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__List_3,
#line 1027 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Fixup_4);

#line 1014 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
#line 1014 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 1014 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 1014 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13,
#line 1014 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_14,
#line 1014 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 1014 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11);

#line 973 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
#line 973 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 973 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 973 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 973 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 973 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 965 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
#line 965 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 965 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 965 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 965 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 965 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 948 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
#line 948 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 948 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 948 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 948 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 948 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 883 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
#line 883 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 883 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 883 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116,
#line 883 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117,
#line 883 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 883 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11);

#line 837 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_1,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__UseParentStack_2,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3,
#line 837 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_4,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5,
#line 837 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7,
#line 837 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8);

#line 812 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjuncts0_11,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_12,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalInfo_13,
#line 812 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_14,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27,
#line 812 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29,
#line 812 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30);

#line 711 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_11,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalPath0_12,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48,
#line 711 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50,
#line 711 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52,
#line 711 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);

#line 707 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 707 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 707 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_6,
#line 707 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_7);

#line 706 "par_loop_control.m"
static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
#line 706 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 706 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1);

#line 700 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalIds_11,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17,
#line 700 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 700 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 700 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);

#line 659 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
#line 659 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 659 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PreserveTailRecursion_4);

#line 560 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_9,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldPredProcId_10,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldProcInfo_11,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 560 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredProcId_13,
#line 560 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredSym_14,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55,
#line 560 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56);

#line 508 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
#line 508 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 508 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Seen0_2,
#line 508 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3);

#line 459 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
#line 459 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_4,
#line 459 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 459 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 437 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
#line 437 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 437 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_2,
#line 437 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3,
#line 437 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4);

#line 407 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
#line 407 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conj_5,
#line 407 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_6,
#line 407 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_7,
#line 407 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 381 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(
#line 381 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_5,
#line 381 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_6,
#line 381 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalId_7,
#line 381 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 505 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
#line 505 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 505 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 505 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 505 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 292 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
#line 292 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 292 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 292 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2);

#line 241 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
#line 241 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal_4,
#line 241 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_5,
#line 241 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_6);

#line 136 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__DepInfo_7,
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_8,
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19,
#line 136 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20,
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21,
#line 136 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22);

#line 133 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 133 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 133 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_5[2][12];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[3][1];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[2][5];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[1][8];

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
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[2])),
    ((MR_Box) ((MR_String) "loop_control"))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[2])),
    ((MR_Box) ((MR_String) "lc_create"))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[2])),
    ((MR_Box) ((MR_String) "lc_finish"))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[2])),
    ((MR_Box) ((MR_String) "lc_wait_free_slot"))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[2])),
    ((MR_Box) ((MR_String) "lc_default_num_contexts"))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[2])),
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

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "par_builtin"))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[1][8] = {
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



#line 1487 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &hlds__hlds_module__hlds__hlds_module__type_ctor_info_dependency_info_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1495 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1504 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1512 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1520 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1529 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1537 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1545 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1554 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1563 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0 = {
  (MR_String) "fixup_goal_info",
  (MR_Integer) 0
};

#line 1569 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1 = {
  (MR_String) "do_not_fixup_goal_info",
  (MR_Integer) 1
};

#line 1575 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1
};

#line 1581 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0
};

#line 1587 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1593 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "fixup_goal_info",
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0
};

#line 1610 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0 = {
  (MR_String) "goal_is_last_goal_on_path",
  (MR_Integer) 0
};

#line 1616 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1 = {
  (MR_String) "goal_is_not_last_goal_on_path",
  (MR_Integer) 1
};

#line 1622 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

#line 1628 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

#line 1634 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1640 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "goal_is_last_goal_on_path",
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0
};

#line 1657 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 1671 "transform_hlds.par_loop_control.c"
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

#line 1685 "transform_hlds.par_loop_control.c"
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

#line 1700 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

#line 1705 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0
  }
};

#line 1714 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

#line 1719 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1] = {
  (MR_Integer) 0
};

#line 1724 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "loop_control_info",
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0
};

#line 1741 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0 = {
  (MR_String) "preserve_tail_recursion",
  (MR_Integer) 0
};

#line 1747 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1 = {
  (MR_String) "do_not_preserve_tail_recursion",
  (MR_Integer) 1
};

#line 1753 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1
};

#line 1759 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0
};

#line 1765 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1771 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "preserve_tail_recursion",
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0
};

#line 1788 "transform_hlds.par_loop_control.c"
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

#line 1803 "transform_hlds.par_loop_control.c"
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

#line 1818 "transform_hlds.par_loop_control.c"
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

#line 1833 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1841 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1846 "transform_hlds.par_loop_control.c"
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

#line 1861 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2
};

#line 1868 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

#line 1873 "transform_hlds.par_loop_control.c"
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

#line 1887 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

#line 1895 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1903 "transform_hlds.par_loop_control.c"
const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "seen_usable_recursion",
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0
};

#line 1920 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
#line 1923 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1925 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 1927 "transform_hlds.par_loop_control.c"
{
#line 1929 "transform_hlds.par_loop_control.c"
  {
#line 1931 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1934 "transform_hlds.par_loop_control.c"
    {
#line 1936 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 1939 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 1941 "transform_hlds.par_loop_control.c"
  }
#line 1943 "transform_hlds.par_loop_control.c"
}

#line 1946 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
#line 1949 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 1951 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1953 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 1955 "transform_hlds.par_loop_control.c"
{
#line 1957 "transform_hlds.par_loop_control.c"
  {
#line 1959 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 1962 "transform_hlds.par_loop_control.c"
    {
#line 1964 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 1967 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 1969 "transform_hlds.par_loop_control.c"
  }
#line 1971 "transform_hlds.par_loop_control.c"
}

#line 1974 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
#line 1977 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1979 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 1981 "transform_hlds.par_loop_control.c"
{
#line 1983 "transform_hlds.par_loop_control.c"
  {
#line 1985 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1988 "transform_hlds.par_loop_control.c"
    {
#line 1990 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 1993 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 1995 "transform_hlds.par_loop_control.c"
  }
#line 1997 "transform_hlds.par_loop_control.c"
}

#line 2000 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
#line 2003 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2005 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2007 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2009 "transform_hlds.par_loop_control.c"
{
#line 2011 "transform_hlds.par_loop_control.c"
  {
#line 2013 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2016 "transform_hlds.par_loop_control.c"
    {
#line 2018 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2021 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2023 "transform_hlds.par_loop_control.c"
  }
#line 2025 "transform_hlds.par_loop_control.c"
}

#line 2028 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
#line 2031 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2033 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2035 "transform_hlds.par_loop_control.c"
{
#line 2037 "transform_hlds.par_loop_control.c"
  {
#line 2039 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2042 "transform_hlds.par_loop_control.c"
    {
#line 2044 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____loop_control_info_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2047 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2049 "transform_hlds.par_loop_control.c"
  }
#line 2051 "transform_hlds.par_loop_control.c"
}

#line 2054 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
#line 2057 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2059 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2061 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2063 "transform_hlds.par_loop_control.c"
{
#line 2065 "transform_hlds.par_loop_control.c"
  {
#line 2067 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2070 "transform_hlds.par_loop_control.c"
    {
#line 2072 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____loop_control_info_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2075 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2077 "transform_hlds.par_loop_control.c"
  }
#line 2079 "transform_hlds.par_loop_control.c"
}

#line 2082 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
#line 2085 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2087 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2089 "transform_hlds.par_loop_control.c"
{
#line 2091 "transform_hlds.par_loop_control.c"
  {
#line 2093 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2096 "transform_hlds.par_loop_control.c"
    {
#line 2098 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2101 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2103 "transform_hlds.par_loop_control.c"
  }
#line 2105 "transform_hlds.par_loop_control.c"
}

#line 2108 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
#line 2111 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2113 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2115 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2117 "transform_hlds.par_loop_control.c"
{
#line 2119 "transform_hlds.par_loop_control.c"
  {
#line 2121 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2124 "transform_hlds.par_loop_control.c"
    {
#line 2126 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2129 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2131 "transform_hlds.par_loop_control.c"
  }
#line 2133 "transform_hlds.par_loop_control.c"
}

#line 2136 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
#line 2139 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2141 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2143 "transform_hlds.par_loop_control.c"
{
#line 2145 "transform_hlds.par_loop_control.c"
  {
#line 2147 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2150 "transform_hlds.par_loop_control.c"
    {
#line 2152 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2155 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2157 "transform_hlds.par_loop_control.c"
  }
#line 2159 "transform_hlds.par_loop_control.c"
}

#line 2162 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
#line 2165 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2167 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2169 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2171 "transform_hlds.par_loop_control.c"
{
#line 2173 "transform_hlds.par_loop_control.c"
  {
#line 2175 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2178 "transform_hlds.par_loop_control.c"
    {
#line 2180 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2183 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2185 "transform_hlds.par_loop_control.c"
  }
#line 2187 "transform_hlds.par_loop_control.c"
}

#line 1438 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1438__1_4_p_0(
#line 1438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_17,
#line 1438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_18,
#line 1438 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_19)
#line 1438 "par_loop_control.m"
{
#line 1438 "par_loop_control.m"
  {
#line 1438 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1438 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_24_24 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1438 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Var_12;
#line 1438 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_17, (MR_Integer) 0)));
#line 1438 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Inst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_17, (MR_Integer) 1)));
#line 1439 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_Var_12;

#line 1439 "par_loop_control.m"
    {
#line 1439 "par_loop_control.m"
      mercury__map__lookup_3_p_0(transform_hlds__par_loop_control__TypeInfo_24_24, transform_hlds__par_loop_control__TypeInfo_24_24, transform_hlds__par_loop_control__Remap_4, ((MR_Box) (transform_hlds__par_loop_control__OldVar_20)), &transform_hlds__par_loop_control__conv0_Var_12);
    }
#line 1439 "par_loop_control.m"
    transform_hlds__par_loop_control__Var_12 = ((MR_Word) transform_hlds__par_loop_control__conv0_Var_12);
#line 1440 "par_loop_control.m"
    {
#line 1440 "par_loop_control.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__par_loop_control__Var_12, transform_hlds__par_loop_control__Inst_21, transform_hlds__par_loop_control__HeadVar__3_18, transform_hlds__par_loop_control__HeadVar__4_19);
#line 1440 "par_loop_control.m"
      return;
    }
#line 1438 "par_loop_control.m"
  }
#line 1438 "par_loop_control.m"
}

#line 1347 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1347__1_3_p_0(
#line 1347 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_23,
#line 1347 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_114,
#line 1347 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_115)
#line 1347 "par_loop_control.m"
{
#line 1347 "par_loop_control.m"
  {
#line 1347 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1347 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_116_116 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1347 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_HeadVar__3_115;

#line 1347 "par_loop_control.m"
    {
#line 1347 "par_loop_control.m"
      mercury__map__lookup_3_p_0(transform_hlds__par_loop_control__TypeInfo_116_116, transform_hlds__par_loop_control__TypeInfo_116_116, transform_hlds__par_loop_control__Remap_23, ((MR_Box) (transform_hlds__par_loop_control__HeadVar__2_114)), &transform_hlds__par_loop_control__conv0_HeadVar__3_115);
    }
#line 1347 "par_loop_control.m"
    *transform_hlds__par_loop_control__HeadVar__3_115 = ((MR_Word) transform_hlds__par_loop_control__conv0_HeadVar__3_115);
#line 1347 "par_loop_control.m"
  }
#line 1347 "par_loop_control.m"
}

#line 1116 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1116__1_2_p_0(
#line 1116 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecPredProcId_41,
#line 1116 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_98)
#line 1116 "par_loop_control.m"
{
#line 1116 "par_loop_control.m"
  {
#line 1116 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1116 "par_loop_control.m"
    {
#line 1116 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__RecPredProcId_41, transform_hlds__par_loop_control__HeadVar__2_98);
    }
#line 1116 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1116 "par_loop_control.m"
  }
#line 1116 "par_loop_control.m"
}

#line 1127 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1127__1_2_p_0(
#line 1127 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ConjType_48,
#line 1127 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_93)
#line 1127 "par_loop_control.m"
{
#line 1127 "par_loop_control.m"
  {
#line 1127 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__ConjType_48 == transform_hlds__par_loop_control__HeadVar__2_93);

#line 1127 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1127 "par_loop_control.m"
  }
#line 1127 "par_loop_control.m"
}

#line 210 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
#line 210 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 210 "par_loop_control.m"
{
#line 210 "par_loop_control.m"
  {
#line 210 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 210 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_12 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 210 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_13 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 210 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_12 == transform_hlds__par_loop_control__CastY_13);
#line 210 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 2340 "transform_hlds.par_loop_control.c"
      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "par_loop_control.m"
    else
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
      switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__2_2)) {
#line 210 "par_loop_control.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
        case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
          switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__2_2)) {
#line 210 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
            case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
                  switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                  }
#line 210 "par_loop_control.m"
                  break;
#line 210 "par_loop_control.m"
                case (MR_Integer) 1:
#line 2394 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "par_loop_control.m"
                  break;
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
              break;
#line 210 "par_loop_control.m"
            case (MR_Integer) 1:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
                  switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                  }
#line 210 "par_loop_control.m"
                  break;
#line 210 "par_loop_control.m"
                case (MR_Integer) 1:
#line 2440 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "par_loop_control.m"
                  break;
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
              break;
#line 210 "par_loop_control.m"
            case (MR_Integer) 2:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
                  switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 210 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "par_loop_control.m"
                      break;
#line 210 "par_loop_control.m"
                  }
#line 210 "par_loop_control.m"
                  break;
#line 210 "par_loop_control.m"
                case (MR_Integer) 1:
#line 2486 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "par_loop_control.m"
                  break;
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
              break;
#line 210 "par_loop_control.m"
          }
#line 210 "par_loop_control.m"
          break;
#line 210 "par_loop_control.m"
        case (MR_Integer) 1:
#line 210 "par_loop_control.m"
          {
#line 210 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));

#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
              case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 210 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 2519 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "par_loop_control.m"
                    break;
#line 210 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 2525 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "par_loop_control.m"
                    break;
#line 210 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 2531 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "par_loop_control.m"
                    break;
#line 210 "par_loop_control.m"
                }
#line 210 "par_loop_control.m"
                break;
#line 210 "par_loop_control.m"
              case (MR_Integer) 1:
#line 210 "par_loop_control.m"
                {
#line 210 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));

#line 210 "par_loop_control.m"
                  {
#line 210 "par_loop_control.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_1[3], transform_hlds__par_loop_control__HeadVar__1_1, ((MR_Box) (transform_hlds__par_loop_control__V_15_15)), ((MR_Box) (transform_hlds__par_loop_control__V_11_11)));
#line 210 "par_loop_control.m"
                    return;
                  }
#line 210 "par_loop_control.m"
                }
#line 210 "par_loop_control.m"
                break;
#line 210 "par_loop_control.m"
            }
#line 210 "par_loop_control.m"
          }
#line 210 "par_loop_control.m"
          break;
#line 210 "par_loop_control.m"
      }
#line 210 "par_loop_control.m"
  }
#line 210 "par_loop_control.m"
}

#line 210 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 210 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 210 "par_loop_control.m"
{
#line 210 "par_loop_control.m"
  {
#line 210 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 210 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_11 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 210 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_12 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 210 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_11 == transform_hlds__par_loop_control__CastY_12);
#line 210 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 210 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 210 "par_loop_control.m"
    else
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
      switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 210 "par_loop_control.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
        case (MR_Integer) 0:
#line 210 "par_loop_control.m"
#line 210 "par_loop_control.m"
          switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 210 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 210 "par_loop_control.m"
            case (MR_Integer) 0:
#line 210 "par_loop_control.m"
              {
#line 210 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastX_3 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 210 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastY_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 210 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_4 == transform_hlds__par_loop_control__CastX_3);
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
              break;
#line 210 "par_loop_control.m"
            case (MR_Integer) 1:
#line 210 "par_loop_control.m"
              {
#line 210 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastX_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 210 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastY_6 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 210 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_6 == transform_hlds__par_loop_control__CastX_5);
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
              break;
#line 210 "par_loop_control.m"
            case (MR_Integer) 2:
#line 210 "par_loop_control.m"
              {
#line 210 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastX_7 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 210 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastY_8 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 210 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_8 == transform_hlds__par_loop_control__CastX_7);
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
              break;
#line 210 "par_loop_control.m"
          }
#line 210 "par_loop_control.m"
          break;
#line 210 "par_loop_control.m"
        case (MR_Integer) 1:
#line 210 "par_loop_control.m"
          {
#line 210 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__TypeInfo_13_13;
#line 210 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_10_10;

#line 210 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = ((MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 210 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 210 "par_loop_control.m"
              {
#line 210 "par_loop_control.m"
                transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 2676 "transform_hlds.par_loop_control.c"
                transform_hlds__par_loop_control__TypeInfo_13_13 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[3];
#line 2678 "transform_hlds.par_loop_control.c"
                {
#line 2680 "transform_hlds.par_loop_control.c"
                  return transform_hlds__par_loop_control__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__par_loop_control__TypeInfo_13_13, ((MR_Box) (transform_hlds__par_loop_control__V_9_9)), ((MR_Box) (transform_hlds__par_loop_control__V_10_10)));
                }
#line 210 "par_loop_control.m"
              }
#line 210 "par_loop_control.m"
          }
#line 210 "par_loop_control.m"
          break;
#line 210 "par_loop_control.m"
      }
#line 210 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 210 "par_loop_control.m"
  }
#line 210 "par_loop_control.m"
}

#line 688 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
#line 688 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 688 "par_loop_control.m"
{
#line 688 "par_loop_control.m"
  {
#line 688 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 688 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 688 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 688 "par_loop_control.m"
    {
#line 688 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 688 "par_loop_control.m"
      return;
    }
#line 688 "par_loop_control.m"
  }
#line 688 "par_loop_control.m"
}

#line 688 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 688 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 688 "par_loop_control.m"
{
#line 2739 "transform_hlds.par_loop_control.c"
  {
#line 2741 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 2744 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2746 "transform_hlds.par_loop_control.c"
  }
#line 688 "par_loop_control.m"
}

#line 674 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
#line 674 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 674 "par_loop_control.m"
{
#line 674 "par_loop_control.m"
  {
#line 674 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 674 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_33 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 674 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_34 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 674 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_33 == transform_hlds__par_loop_control__CastY_34);
#line 674 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 2775 "transform_hlds.par_loop_control.c"
      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 674 "par_loop_control.m"
    else
#line 674 "par_loop_control.m"
      {
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 3)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 4)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 5)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 6)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 7)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 8)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 9)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 1)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 2)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 3)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 4)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 5)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 6)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 7)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 8)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 9)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_24_24;

#line 674 "par_loop_control.m"
        {
#line 674 "par_loop_control.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__par_loop_control__V_24_24, transform_hlds__par_loop_control__V_4_4, transform_hlds__par_loop_control__V_14_14);
        }
#line 2829 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_24_24 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_24_24;
#line 674 "par_loop_control.m"
        else
#line 674 "par_loop_control.m"
          {
#line 674 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_25_25;

#line 674 "par_loop_control.m"
            {
#line 674 "par_loop_control.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0], &transform_hlds__par_loop_control__V_25_25, ((MR_Box) (transform_hlds__par_loop_control__V_5_5)), ((MR_Box) (transform_hlds__par_loop_control__V_15_15)));
            }
#line 2849 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_25_25 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_25_25;
#line 674 "par_loop_control.m"
            else
#line 674 "par_loop_control.m"
              {
#line 674 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_26_26;

#line 674 "par_loop_control.m"
                {
#line 674 "par_loop_control.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_26_26, transform_hlds__par_loop_control__V_6_6, transform_hlds__par_loop_control__V_16_16);
                }
#line 2869 "transform_hlds.par_loop_control.c"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_26_26 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_26_26;
#line 674 "par_loop_control.m"
                else
#line 674 "par_loop_control.m"
                  {
#line 674 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_27_27;

#line 674 "par_loop_control.m"
                    {
#line 674 "par_loop_control.m"
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_27_27, transform_hlds__par_loop_control__V_7_7, transform_hlds__par_loop_control__V_17_17);
                    }
#line 2889 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_27_27 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                    transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_27_27;
#line 674 "par_loop_control.m"
                    else
#line 674 "par_loop_control.m"
                      {
#line 674 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_28_28;

#line 674 "par_loop_control.m"
                        {
#line 674 "par_loop_control.m"
                          mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__par_loop_control__V_28_28, transform_hlds__par_loop_control__V_8_8, transform_hlds__par_loop_control__V_18_18);
                        }
#line 2909 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_28_28 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_28_28;
#line 674 "par_loop_control.m"
                        else
#line 674 "par_loop_control.m"
                          {
#line 674 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__V_29_29;
#line 674 "par_loop_control.m"
                            MR_Integer transform_hlds__par_loop_control__V_45_45 = (MR_Integer) transform_hlds__par_loop_control__V_9_9;
#line 674 "par_loop_control.m"
                            MR_Integer transform_hlds__par_loop_control__V_46_46 = (MR_Integer) transform_hlds__par_loop_control__V_19_19;

#line 674 "par_loop_control.m"
                            {
#line 674 "par_loop_control.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__par_loop_control__V_29_29, transform_hlds__par_loop_control__V_45_45, transform_hlds__par_loop_control__V_46_46);
                            }
#line 2933 "transform_hlds.par_loop_control.c"
                            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_29_29 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                            transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                            if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                              *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_29_29;
#line 674 "par_loop_control.m"
                            else
#line 674 "par_loop_control.m"
                              {
#line 674 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__V_30_30;

#line 674 "par_loop_control.m"
                                {
#line 674 "par_loop_control.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_30_30, transform_hlds__par_loop_control__V_10_10, transform_hlds__par_loop_control__V_20_20);
                                }
#line 2953 "transform_hlds.par_loop_control.c"
                                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_30_30 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                                if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_30_30;
#line 674 "par_loop_control.m"
                                else
#line 674 "par_loop_control.m"
                                  {
#line 674 "par_loop_control.m"
                                    MR_Word transform_hlds__par_loop_control__V_31_31;

#line 674 "par_loop_control.m"
                                    {
#line 674 "par_loop_control.m"
                                      mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__par_loop_control__V_31_31, transform_hlds__par_loop_control__V_11_11, transform_hlds__par_loop_control__V_21_21);
                                    }
#line 2973 "transform_hlds.par_loop_control.c"
                                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_31_31 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                                    transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                                    if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_31_31;
#line 674 "par_loop_control.m"
                                    else
#line 674 "par_loop_control.m"
                                      {
#line 674 "par_loop_control.m"
                                        MR_Word transform_hlds__par_loop_control__V_32_32;

#line 674 "par_loop_control.m"
                                        {
#line 674 "par_loop_control.m"
                                          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_32_32, transform_hlds__par_loop_control__V_12_12, transform_hlds__par_loop_control__V_22_22);
                                        }
#line 2993 "transform_hlds.par_loop_control.c"
                                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_32_32 == (MR_Integer) 0);
#line 674 "par_loop_control.m"
                                        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 674 "par_loop_control.m"
                                        if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                                          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_32_32;
#line 674 "par_loop_control.m"
                                        else
#line 674 "par_loop_control.m"
                                          {
#line 674 "par_loop_control.m"
                                            mdbcomp__sym_name____Compare____sym_name_0_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__V_13_13, transform_hlds__par_loop_control__V_23_23);
#line 674 "par_loop_control.m"
                                            return;
                                          }
#line 674 "par_loop_control.m"
                                      }
#line 674 "par_loop_control.m"
                                  }
#line 674 "par_loop_control.m"
                              }
#line 674 "par_loop_control.m"
                          }
#line 674 "par_loop_control.m"
                      }
#line 674 "par_loop_control.m"
                  }
#line 674 "par_loop_control.m"
              }
#line 674 "par_loop_control.m"
          }
#line 674 "par_loop_control.m"
      }
#line 674 "par_loop_control.m"
  }
#line 674 "par_loop_control.m"
}

#line 674 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 674 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 674 "par_loop_control.m"
{
#line 674 "par_loop_control.m"
  {
#line 674 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 674 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_23 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 674 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_24 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 674 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_23 == transform_hlds__par_loop_control__CastY_24);
#line 674 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 674 "par_loop_control.m"
    else
#line 674 "par_loop_control.m"
      {
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeInfo_26_26;
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 2)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 3)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 4)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 5)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 6)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 7)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 8)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 9)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 3)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 4)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 5)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 6)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 7)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 8)));
#line 674 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 9)));

#line 3104 "transform_hlds.par_loop_control.c"
        {
#line 3106 "transform_hlds.par_loop_control.c"
          transform_hlds__par_loop_control__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__par_loop_control__V_3_3, transform_hlds__par_loop_control__V_13_13);
        }
#line 674 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
          {
#line 3113 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__TypeInfo_26_26 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 3115 "transform_hlds.par_loop_control.c"
            {
#line 3117 "transform_hlds.par_loop_control.c"
              transform_hlds__par_loop_control__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__par_loop_control__TypeInfo_26_26, ((MR_Box) (transform_hlds__par_loop_control__V_4_4)), ((MR_Box) (transform_hlds__par_loop_control__V_14_14)));
            }
#line 674 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
              {
#line 3124 "transform_hlds.par_loop_control.c"
                {
#line 3126 "transform_hlds.par_loop_control.c"
                  transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_5_5, transform_hlds__par_loop_control__V_15_15);
                }
#line 674 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                  {
#line 3133 "transform_hlds.par_loop_control.c"
                    {
#line 3135 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_6_6, transform_hlds__par_loop_control__V_16_16);
                    }
#line 674 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                      {
#line 3142 "transform_hlds.par_loop_control.c"
                        {
#line 3144 "transform_hlds.par_loop_control.c"
                          transform_hlds__par_loop_control__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_7_7, transform_hlds__par_loop_control__V_17_17);
                        }
#line 674 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                          {
#line 3151 "transform_hlds.par_loop_control.c"
                            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_8_8 == transform_hlds__par_loop_control__V_18_18);
#line 674 "par_loop_control.m"
                            if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                              {
#line 3157 "transform_hlds.par_loop_control.c"
                                {
#line 3159 "transform_hlds.par_loop_control.c"
                                  transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_9_9, transform_hlds__par_loop_control__V_19_19);
                                }
#line 674 "par_loop_control.m"
                                if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                                  {
#line 3166 "transform_hlds.par_loop_control.c"
                                    {
#line 3168 "transform_hlds.par_loop_control.c"
                                      transform_hlds__par_loop_control__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_10_10, transform_hlds__par_loop_control__V_20_20);
                                    }
#line 674 "par_loop_control.m"
                                    if (transform_hlds__par_loop_control__succeeded)
#line 674 "par_loop_control.m"
                                      {
#line 3175 "transform_hlds.par_loop_control.c"
                                        {
#line 3177 "transform_hlds.par_loop_control.c"
                                          transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_11_11, transform_hlds__par_loop_control__V_21_21);
                                        }
#line 674 "par_loop_control.m"
                                        if (transform_hlds__par_loop_control__succeeded)
#line 3182 "transform_hlds.par_loop_control.c"
                                          {
#line 3184 "transform_hlds.par_loop_control.c"
                                            return transform_hlds__par_loop_control__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_12_12, transform_hlds__par_loop_control__V_22_22);
                                          }
#line 674 "par_loop_control.m"
                                      }
#line 674 "par_loop_control.m"
                                  }
#line 674 "par_loop_control.m"
                              }
#line 674 "par_loop_control.m"
                          }
#line 674 "par_loop_control.m"
                      }
#line 674 "par_loop_control.m"
                  }
#line 674 "par_loop_control.m"
              }
#line 674 "par_loop_control.m"
          }
#line 674 "par_loop_control.m"
      }
#line 674 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 674 "par_loop_control.m"
  }
#line 674 "par_loop_control.m"
}

#line 696 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
#line 696 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 696 "par_loop_control.m"
{
#line 696 "par_loop_control.m"
  {
#line 696 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 696 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 696 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 696 "par_loop_control.m"
    {
#line 696 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 696 "par_loop_control.m"
      return;
    }
#line 696 "par_loop_control.m"
  }
#line 696 "par_loop_control.m"
}

#line 696 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 696 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 696 "par_loop_control.m"
{
#line 3253 "transform_hlds.par_loop_control.c"
  {
#line 3255 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 3258 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 3260 "transform_hlds.par_loop_control.c"
  }
#line 696 "par_loop_control.m"
}

#line 1303 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
#line 1303 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 1303 "par_loop_control.m"
{
#line 1303 "par_loop_control.m"
  {
#line 1303 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1303 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 1303 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 1303 "par_loop_control.m"
    {
#line 1303 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 1303 "par_loop_control.m"
      return;
    }
#line 1303 "par_loop_control.m"
  }
#line 1303 "par_loop_control.m"
}

#line 1303 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 1303 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 1303 "par_loop_control.m"
{
#line 3306 "transform_hlds.par_loop_control.c"
  {
#line 3308 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 3311 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 3313 "transform_hlds.par_loop_control.c"
  }
#line 1303 "par_loop_control.m"
}

#line 1512 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
#line 1512 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1512 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1512 "par_loop_control.m"
{
#line 1515 "par_loop_control.m"
  {
#line 1515 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1515 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_4;
#line 1515 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_5;

#line 1541 "par_loop_control.m"
    {
#line 1541 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_3, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_join_and_terminate", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_4, &transform_hlds__par_loop_control__ProcId_5);
    }
#line 1515 "par_loop_control.m"
    {
#line 1515 "par_loop_control.m"
      MR_Word base;
#line 1515 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = base;
#line 1515 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_4));
#line 1515 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_5));
#line 1515 "par_loop_control.m"
    }
#line 1515 "par_loop_control.m"
  }
#line 1512 "par_loop_control.m"
}

#line 1507 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void)
#line 1507 "par_loop_control.m"
{
#line 1509 "par_loop_control.m"
  {
#line 1509 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1509 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[10]);
#line 1509 "par_loop_control.m"
  }
#line 1507 "par_loop_control.m"
}

#line 1481 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
#line 1481 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_4,
#line 1481 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredId_5,
#line 1481 "par_loop_control.m"
  MR_Integer * transform_hlds__par_loop_control__ProcId_6)
#line 1481 "par_loop_control.m"
{
#line 1484 "par_loop_control.m"
  {
#line 1484 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1541 "par_loop_control.m"
    {
#line 1541 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_4, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_default_num_contexts", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__par_loop_control__PredId_5, transform_hlds__par_loop_control__ProcId_6);
#line 1541 "par_loop_control.m"
      return;
    }
#line 1484 "par_loop_control.m"
  }
#line 1481 "par_loop_control.m"
}

#line 1475 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void)
#line 1475 "par_loop_control.m"
{
#line 1477 "par_loop_control.m"
  {
#line 1477 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1477 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[9]);
#line 1477 "par_loop_control.m"
  }
#line 1475 "par_loop_control.m"
}

#line 1465 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
#line 1465 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1465 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1465 "par_loop_control.m"
{
#line 1467 "par_loop_control.m"
  {
#line 1467 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1467 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_4;
#line 1467 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_5;

#line 1541 "par_loop_control.m"
    {
#line 1541 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_3, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_wait_free_slot", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_4, &transform_hlds__par_loop_control__ProcId_5);
    }
#line 1467 "par_loop_control.m"
    {
#line 1467 "par_loop_control.m"
      MR_Word base;
#line 1467 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = base;
#line 1467 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_4));
#line 1467 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_5));
#line 1467 "par_loop_control.m"
    }
#line 1467 "par_loop_control.m"
  }
#line 1465 "par_loop_control.m"
}

#line 1456 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void)
#line 1456 "par_loop_control.m"
{
#line 1458 "par_loop_control.m"
  {
#line 1458 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1458 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[8]);
#line 1458 "par_loop_control.m"
  }
#line 1456 "par_loop_control.m"
}

#line 1445 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void)
#line 1445 "par_loop_control.m"
{
#line 1447 "par_loop_control.m"
  {
#line 1447 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1447 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]);
#line 1447 "par_loop_control.m"
  }
#line 1445 "par_loop_control.m"
}

#line 1438 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
#line 1438 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1438 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1438 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1438 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 1438 "par_loop_control.m"
{
#line 1438 "par_loop_control.m"
  {
#line 1438 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1438 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__4_19;

#line 1438 "par_loop_control.m"
    {
#line 1438 "par_loop_control.m"
      transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1438__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv0_HeadVar__4_19);
    }
#line 1438 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__4_19));
#line 1438 "par_loop_control.m"
  }
#line 1438 "par_loop_control.m"
}

#line 1432 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
#line 1432 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1432 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldInstmapDelta_5,
#line 1432 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13)
#line 1432 "par_loop_control.m"
{
#line 1435 "par_loop_control.m"
  {
#line 1435 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1435 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__VarInsts_7;
#line 1435 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14;
#line 1435 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_15_15;
#line 1438 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13;

#line 1436 "par_loop_control.m"
    {
#line 1436 "par_loop_control.m"
      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__par_loop_control__OldInstmapDelta_5, &transform_hlds__par_loop_control__VarInsts_7);
    }
#line 1437 "par_loop_control.m"
    {
#line 1437 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14);
    }
#line 1438 "par_loop_control.m"
    {
#line 1438 "par_loop_control.m"
      transform_hlds__par_loop_control__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_9[0]));
#line 1438 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 1) = ((MR_Box) (transform_hlds__par_loop_control__remap_instmap_3_p_0_1));
#line 1438 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1438 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 3) = ((MR_Box) (transform_hlds__par_loop_control__Remap_4));
#line 1438 "par_loop_control.m"
    }
#line 1438 "par_loop_control.m"
    {
#line 1438 "par_loop_control.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_2[1], (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, transform_hlds__par_loop_control__V_15_15, transform_hlds__par_loop_control__VarInsts_7, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14)), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13);
    }
#line 1438 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13 = ((MR_Word) transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13);
#line 1435 "par_loop_control.m"
  }
#line 1432 "par_loop_control.m"
}

#line 1418 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVarSet_10,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVar_11,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__VarType_12,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18,
#line 1418 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20,
#line 1418 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21,
#line 1418 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22,
#line 1418 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23)
#line 1418 "par_loop_control.m"
{
#line 1423 "par_loop_control.m"
  {
#line 1423 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1423 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_31_31;
#line 1423 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Var_17;
#line 1426 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__Name_16;

#line 1424 "par_loop_control.m"
    {
#line 1424 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__OldVarSet_10, transform_hlds__par_loop_control__OldVar_11, &transform_hlds__par_loop_control__Name_16);
    }
#line 1426 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 1425 "par_loop_control.m"
      {
#line 1425 "par_loop_control.m"
        {
#line 1425 "par_loop_control.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__Name_16, &transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19);
        }
#line 1425 "par_loop_control.m"
      }
#line 1426 "par_loop_control.m"
    else
#line 1427 "par_loop_control.m"
      {
#line 1427 "par_loop_control.m"
        {
#line 1427 "par_loop_control.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19);
        }
#line 1427 "par_loop_control.m"
      }
#line 1429 "par_loop_control.m"
    {
#line 1429 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__VarType_12, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21);
    }
#line 3656 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_31_31 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1430 "par_loop_control.m"
    {
#line 1430 "par_loop_control.m"
      mercury__map__det_insert_4_p_0(transform_hlds__par_loop_control__TypeInfo_31_31, transform_hlds__par_loop_control__TypeInfo_31_31, ((MR_Box) (transform_hlds__par_loop_control__OldVar_11)), ((MR_Box) (transform_hlds__par_loop_control__Var_17)), transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22, transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23);
#line 1430 "par_loop_control.m"
      return;
    }
#line 1423 "par_loop_control.m"
  }
#line 1418 "par_loop_control.m"
}

#line 1347 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
#line 1347 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1347 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1347 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2)
#line 1347 "par_loop_control.m"
{
#line 1347 "par_loop_control.m"
  {
#line 1347 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1347 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv6_HeadVar__3_115;

#line 1347 "par_loop_control.m"
    {
#line 1347 "par_loop_control.m"
      transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1347__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv6_HeadVar__3_115);
    }
#line 1347 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv6_HeadVar__3_115));
#line 1347 "par_loop_control.m"
  }
#line 1347 "par_loop_control.m"
}

#line 1345 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_5,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_6,
#line 1345 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_7,
#line 1345 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_8)
#line 1345 "par_loop_control.m"
{
#line 1345 "par_loop_control.m"
  {
#line 1345 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1345 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19;
#line 1345 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21;
#line 1345 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23;

#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3), &transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_5), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_7), &transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23);
    }
#line 1345 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19));
#line 1345 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_6 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21));
#line 1345 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_8 = ((MR_Box) (transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23));
#line 1345 "par_loop_control.m"
  }
#line 1345 "par_loop_control.m"
}

#line 1328 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_7,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredProcId_8,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredName_9,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_10,
#line 1328 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46,
#line 1328 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47)
#line 1328 "par_loop_control.m"
{
#line 1332 "par_loop_control.m"
  {
#line 1332 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_100_100;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_109_109;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_110_110;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_117_117;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__PredProcId_7, (MR_Integer) 0)));
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredInfo_14;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVarTypes_15;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars0_16;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_17;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigGoal_18;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigInstmapDelta_19;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldVarSet_22;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Remap_23;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars_24;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarmaps0_25;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarmaps_26;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NumContextsVar_27;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28;
#line 1332 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GetNumContextsGoalInfo_30;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GetNumContextsGoal_31;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_32;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCCreateGoal_33;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerCallArgs_34;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_35;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_36;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerProcCallGoalInfo_37;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerPredId_38;
#line 1332 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__InnerProcId_39;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerProcCallGoal_40;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ConjGoalInfo_41;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ConjGoal_42;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigPurity_43;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Body_44;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_48_48;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_51_51;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_54_54;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_55_55;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_57_57;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_65_65;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_66_66;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_69_69;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_71_71;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_76_76;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_80_80;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_83_83;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_85_85;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_87_87;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_88_88;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_89_89;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_91_91;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95;
#line 1332 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96;
#line 1333 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__PredProcId_7, (MR_Integer) 1)));
#line 1339 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_98_98;
#line 1345 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52;
#line 1345 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53;
#line 1345 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv3_Remap_23;
#line 1397 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_99_99;

#line 1334 "par_loop_control.m"
    {
#line 1334 "par_loop_control.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__par_loop_control__ModuleInfo_10, transform_hlds__par_loop_control__PredId_12, &transform_hlds__par_loop_control__PredInfo_14);
    }
#line 1335 "par_loop_control.m"
    {
#line 1335 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__par_loop_control__PredInfo_14, &transform_hlds__par_loop_control__HeadVarTypes_15);
    }
#line 1336 "par_loop_control.m"
    {
#line 1336 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__HeadVars0_16);
    }
#line 1337 "par_loop_control.m"
    {
#line 1337 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__Detism_17);
    }
#line 1338 "par_loop_control.m"
    {
#line 1338 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__OrigGoal_18);
    }
#line 1339 "par_loop_control.m"
    transform_hlds__par_loop_control__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 0)));
#line 1339 "par_loop_control.m"
    transform_hlds__par_loop_control__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 1)));
#line 1339 "par_loop_control.m"
    {
#line 1339 "par_loop_control.m"
      transform_hlds__par_loop_control__OrigInstmapDelta_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__par_loop_control__V_48_48);
    }
#line 3946 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1342 "par_loop_control.m"
    {
#line 1342 "par_loop_control.m"
      mercury__varset__init_1_p_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49);
    }
#line 1343 "par_loop_control.m"
    {
#line 1343 "par_loop_control.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50);
    }
#line 1344 "par_loop_control.m"
    {
#line 1344 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__OldVarSet_22);
    }
#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      transform_hlds__par_loop_control__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[1]));
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_1));
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1345 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 3) = ((MR_Box) (transform_hlds__par_loop_control__OldVarSet_22));
#line 1345 "par_loop_control.m"
    }
#line 3977 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_109_109 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1346 "par_loop_control.m"
    {
#line 1346 "par_loop_control.m"
      transform_hlds__par_loop_control__V_54_54 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeInfo_109_109);
    }
#line 3984 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      mercury__list__foldl3_corresponding_9_p_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeCtorInfo_110_110, (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__par_loop_control_scalar_common_2[0], transform_hlds__par_loop_control__V_51_51, transform_hlds__par_loop_control__HeadVars0_16, transform_hlds__par_loop_control__HeadVarTypes_15, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49)), &transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50)), &transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53, ((MR_Box) (transform_hlds__par_loop_control__V_54_54)), &transform_hlds__par_loop_control__conv3_Remap_23);
    }
#line 1345 "par_loop_control.m"
    transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52 = ((MR_Word) transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52);
#line 1345 "par_loop_control.m"
    transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53 = ((MR_Word) transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53);
#line 1345 "par_loop_control.m"
    transform_hlds__par_loop_control__Remap_23 = ((MR_Word) transform_hlds__par_loop_control__conv3_Remap_23);
#line 1347 "par_loop_control.m"
    {
#line 1347 "par_loop_control.m"
      transform_hlds__par_loop_control__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1347 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[3]));
#line 1347 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_2));
#line 1347 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1347 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 3) = ((MR_Box) (transform_hlds__par_loop_control__Remap_23));
#line 1347 "par_loop_control.m"
    }
#line 1347 "par_loop_control.m"
    {
#line 1347 "par_loop_control.m"
      mercury__list__map_3_p_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__V_55_55, transform_hlds__par_loop_control__HeadVars0_16, &transform_hlds__par_loop_control__HeadVars_24);
    }
#line 1348 "par_loop_control.m"
    {
#line 1348 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__par_loop_control__HeadVars_24, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56);
    }
#line 1351 "par_loop_control.m"
    {
#line 1351 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__par_loop_control__RttiVarmaps0_25);
    }
#line 4026 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_117_117 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[2];
#line 1352 "par_loop_control.m"
    {
#line 1352 "par_loop_control.m"
      transform_hlds__par_loop_control__V_57_57 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_117_117, transform_hlds__par_loop_control__TypeInfo_117_117);
    }
#line 1352 "par_loop_control.m"
    {
#line 1352 "par_loop_control.m"
      transform_hlds__par_loop_control__V_58_58 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_117_117, transform_hlds__par_loop_control__TypeCtorInfo_110_110);
    }
#line 1352 "par_loop_control.m"
    {
#line 1352 "par_loop_control.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__par_loop_control__V_57_57, transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__Remap_23, transform_hlds__par_loop_control__RttiVarmaps0_25, &transform_hlds__par_loop_control__RttiVarmaps_26);
    }
#line 1354 "par_loop_control.m"
    {
#line 1354 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__par_loop_control__RttiVarmaps_26, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59);
    }
#line 1360 "par_loop_control.m"
    {
#line 1360 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, (MR_String) "NumContexts", &transform_hlds__par_loop_control__NumContextsVar_27, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61);
    }
#line 1361 "par_loop_control.m"
    {
#line 1361 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__NumContextsVar_27, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_6[1]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63);
    }
#line 1363 "par_loop_control.m"
    {
#line 1363 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(transform_hlds__par_loop_control__ModuleInfo_10, &transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28, &transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29);
    }
#line 1365 "par_loop_control.m"
    {
#line 1365 "par_loop_control.m"
      transform_hlds__par_loop_control__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_69_69, 0) = ((MR_Box) (transform_hlds__par_loop_control__NumContextsVar_27));
#line 1365 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "par_loop_control.m"
    }
#line 1365 "par_loop_control.m"
    {
#line 1365 "par_loop_control.m"
      transform_hlds__par_loop_control__V_65_65 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__V_69_69);
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      transform_hlds__par_loop_control__V_66_66 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__par_loop_control__NumContextsVar_27);
    }
#line 1365 "par_loop_control.m"
    {
#line 1365 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_65_65, transform_hlds__par_loop_control__V_66_66, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__par_loop_control__GetNumContextsGoalInfo_30);
    }
#line 1370 "par_loop_control.m"
    {
#line 1370 "par_loop_control.m"
      transform_hlds__par_loop_control__V_76_76 = transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0();
    }
#line 1368 "par_loop_control.m"
    {
#line 1368 "par_loop_control.m"
      transform_hlds__par_loop_control__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_69_69));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 5) = ((MR_Box) (transform_hlds__par_loop_control__V_76_76));
#line 1368 "par_loop_control.m"
    }
#line 1368 "par_loop_control.m"
    {
#line 1368 "par_loop_control.m"
      transform_hlds__par_loop_control__GetNumContextsGoal_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__GetNumContextsGoal_31, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_71_71));
#line 1368 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__GetNumContextsGoal_31, 1) = ((MR_Box) (transform_hlds__par_loop_control__GetNumContextsGoalInfo_30));
#line 1368 "par_loop_control.m"
    }
#line 1374 "par_loop_control.m"
    {
#line 1374 "par_loop_control.m"
      transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(transform_hlds__par_loop_control__ModuleInfo_10, transform_hlds__par_loop_control__NumContextsVar_27, &transform_hlds__par_loop_control__LCVar_32, &transform_hlds__par_loop_control__LCCreateGoal_33, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78);
    }
#line 1378 "par_loop_control.m"
    {
#line 1378 "par_loop_control.m"
      transform_hlds__par_loop_control__InnerCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__InnerCallArgs_34, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_32));
#line 1378 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__InnerCallArgs_34, 1) = ((MR_Box) (transform_hlds__par_loop_control__HeadVars_24));
#line 1378 "par_loop_control.m"
    }
#line 1379 "par_loop_control.m"
    {
#line 1379 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__InnerCallArgs_34);
    }
#line 1382 "par_loop_control.m"
    {
#line 1382 "par_loop_control.m"
      transform_hlds__par_loop_control__remap_instmap_3_p_0(transform_hlds__par_loop_control__Remap_23, transform_hlds__par_loop_control__OrigInstmapDelta_19, &transform_hlds__par_loop_control__InstmapDelta_36);
    }
#line 1383 "par_loop_control.m"
    {
#line 1383 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__NonLocals_35, transform_hlds__par_loop_control__InstmapDelta_36, transform_hlds__par_loop_control__Detism_17, (MR_Integer) 2, &transform_hlds__par_loop_control__InnerProcCallGoalInfo_37);
    }
#line 1385 "par_loop_control.m"
    transform_hlds__par_loop_control__InnerPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerPredProcId_8, (MR_Integer) 0)));
#line 1385 "par_loop_control.m"
    transform_hlds__par_loop_control__InnerProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerPredProcId_8, (MR_Integer) 1)));
#line 1386 "par_loop_control.m"
    {
#line 1386 "par_loop_control.m"
      transform_hlds__par_loop_control__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredId_38));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcId_39));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 2) = ((MR_Box) (transform_hlds__par_loop_control__InnerCallArgs_34));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 5) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredName_9));
#line 1386 "par_loop_control.m"
    }
#line 1386 "par_loop_control.m"
    {
#line 1386 "par_loop_control.m"
      transform_hlds__par_loop_control__InnerProcCallGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerProcCallGoal_40, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_80_80));
#line 1386 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerProcCallGoal_40, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcCallGoalInfo_37));
#line 1386 "par_loop_control.m"
    }
#line 1391 "par_loop_control.m"
    {
#line 1391 "par_loop_control.m"
      transform_hlds__par_loop_control__V_83_83 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__HeadVars_24);
    }
#line 1391 "par_loop_control.m"
    {
#line 1391 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_83_83, transform_hlds__par_loop_control__InstmapDelta_36, transform_hlds__par_loop_control__Detism_17, (MR_Integer) 2, &transform_hlds__par_loop_control__ConjGoalInfo_41);
    }
#line 1394 "par_loop_control.m"
    {
#line 1394 "par_loop_control.m"
      transform_hlds__par_loop_control__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_89_89, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcCallGoal_40));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1394 "par_loop_control.m"
    }
#line 1394 "par_loop_control.m"
    {
#line 1394 "par_loop_control.m"
      transform_hlds__par_loop_control__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_88_88, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCCreateGoal_33));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_88_88, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_89_89));
#line 1394 "par_loop_control.m"
    }
#line 1394 "par_loop_control.m"
    {
#line 1394 "par_loop_control.m"
      transform_hlds__par_loop_control__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_87_87, 0) = ((MR_Box) (transform_hlds__par_loop_control__GetNumContextsGoal_31));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_87_87, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_88_88));
#line 1394 "par_loop_control.m"
    }
#line 1393 "par_loop_control.m"
    {
#line 1393 "par_loop_control.m"
      transform_hlds__par_loop_control__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1393 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1393 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_87_87));
#line 1393 "par_loop_control.m"
    }
#line 1393 "par_loop_control.m"
    {
#line 1393 "par_loop_control.m"
      transform_hlds__par_loop_control__ConjGoal_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ConjGoal_42, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_85_85));
#line 1393 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ConjGoal_42, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjGoalInfo_41));
#line 1393 "par_loop_control.m"
    }
#line 1397 "par_loop_control.m"
    transform_hlds__par_loop_control__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 0)));
#line 1397 "par_loop_control.m"
    transform_hlds__par_loop_control__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 1)));
#line 1397 "par_loop_control.m"
    {
#line 1397 "par_loop_control.m"
      transform_hlds__par_loop_control__OrigPurity_43 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__par_loop_control__V_91_91);
    }
#line 1403 "par_loop_control.m"
#line 1403 "par_loop_control.m"
    switch (transform_hlds__par_loop_control__OrigPurity_43) {
#line 1403 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "par_loop_control.m"
      case (MR_Integer) 2:
#line 1402 "par_loop_control.m"
        transform_hlds__par_loop_control__Body_44 = transform_hlds__par_loop_control__ConjGoal_42;
#line 1403 "par_loop_control.m"
        break;
#line 1403 "par_loop_control.m"
      case (MR_Integer) 0:
#line 1403 "par_loop_control.m"
      case (MR_Integer) 1:
#line 1406 "par_loop_control.m"
        {
#line 1406 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__ScopeGoalInfo_45;
#line 1406 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_93_93;
#line 1406 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_94_94;

#line 1408 "par_loop_control.m"
          {
#line 1408 "par_loop_control.m"
            hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, transform_hlds__par_loop_control__ConjGoalInfo_41, &transform_hlds__par_loop_control__ScopeGoalInfo_45);
          }
#line 1409 "par_loop_control.m"
          {
#line 1409 "par_loop_control.m"
            transform_hlds__par_loop_control__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "par_loop_control.m"
            MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_94_94, 0) = ((MR_Box) (transform_hlds__par_loop_control__OrigPurity_43));
#line 1409 "par_loop_control.m"
          }
#line 1409 "par_loop_control.m"
          {
#line 1409 "par_loop_control.m"
            transform_hlds__par_loop_control__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "par_loop_control.m"
            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1409 "par_loop_control.m"
            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_94_94));
#line 1409 "par_loop_control.m"
            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 2) = ((MR_Box) (transform_hlds__par_loop_control__ConjGoal_42));
#line 1409 "par_loop_control.m"
          }
#line 1409 "par_loop_control.m"
          {
#line 1409 "par_loop_control.m"
            transform_hlds__par_loop_control__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Body_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_93_93));
#line 1409 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Body_44, 1) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalInfo_45));
#line 1409 "par_loop_control.m"
          }
#line 1406 "par_loop_control.m"
        }
#line 1403 "par_loop_control.m"
        break;
#line 1403 "par_loop_control.m"
    }
#line 1413 "par_loop_control.m"
    {
#line 1413 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__par_loop_control__Body_44, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95);
    }
#line 1414 "par_loop_control.m"
    {
#line 1414 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96);
    }
#line 1415 "par_loop_control.m"
    {
#line 1415 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47);
#line 1415 "par_loop_control.m"
      return;
    }
#line 1332 "par_loop_control.m"
  }
#line 1328 "par_loop_control.m"
}

#line 1309 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
#line 1309 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_4,
#line 1309 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal0_5,
#line 1309 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_6)
#line 1309 "par_loop_control.m"
{
#line 1314 "par_loop_control.m"
  {
#line 1314 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_5, (MR_Integer) 0)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 1)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_5, (MR_Integer) 1)));
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14;
#line 1314 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 0)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 2)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 3)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 4)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 5)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 6)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 7)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 8)));
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 9)));

#line 1317 "par_loop_control.m"
    {
#line 1317 "par_loop_control.m"
      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11);
    }
#line 1318 "par_loop_control.m"
    {
#line 1318 "par_loop_control.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__LCVar_10, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13);
    }
#line 1319 "par_loop_control.m"
    {
#line 1319 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14);
    }
#line 1321 "par_loop_control.m"
    {
#line 1321 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 1323 "par_loop_control.m"
    {
#line 1323 "par_loop_control.m"
      MR_Word base;
#line 1323 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_6 = base;
#line 1323 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_9));
#line 1323 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16));
#line 1323 "par_loop_control.m"
    }
#line 1314 "par_loop_control.m"
  }
#line 1309 "par_loop_control.m"
}

#line 1287 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
#line 1287 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_3,
#line 1287 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_4)
#line 1287 "par_loop_control.m"
{
#line 1290 "par_loop_control.m"
  {
#line 1290 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_5;
#line 1290 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_6;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_7;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_8;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_9;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_10;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_11;
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 0)));
#line 1290 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_13_13;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 1)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 2)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 3)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 4)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 5)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 6)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 7)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 8)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 9)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_32_32;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_34_34;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_35_35;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_36_36;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_37_37;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_38_38;

#line 1541 "par_loop_control.m"
    {
#line 1541 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__V_12_12, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_finish", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_5, &transform_hlds__par_loop_control__ProcId_6);
    }
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 0)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 1)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 2)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 3)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 4)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 5)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 6)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 7)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 8)));
#line 1292 "par_loop_control.m"
    transform_hlds__par_loop_control__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 9)));
#line 1294 "par_loop_control.m"
    {
#line 1294 "par_loop_control.m"
      transform_hlds__par_loop_control__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_7));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1294 "par_loop_control.m"
    }
#line 1294 "par_loop_control.m"
    {
#line 1294 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_5));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_6));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_13_13));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1294 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[7])));
#line 1294 "par_loop_control.m"
    }
#line 1296 "par_loop_control.m"
    {
#line 1296 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_13_13);
    }
#line 1297 "par_loop_control.m"
    {
#line 1297 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__InstmapDelta_10);
    }
#line 1298 "par_loop_control.m"
    {
#line 1298 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_11 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_9, transform_hlds__par_loop_control__InstmapDelta_10, (MR_Integer) 0);
    }
#line 1299 "par_loop_control.m"
    {
#line 1299 "par_loop_control.m"
      MR_Word base;
#line 1299 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_4 = base;
#line 1299 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_8));
#line 1299 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_11));
#line 1299 "par_loop_control.m"
    }
#line 1290 "par_loop_control.m"
  }
#line 1287 "par_loop_control.m"
}

#line 1271 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
#line 1271 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_5,
#line 1271 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCVar_6,
#line 1271 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCSVar_7,
#line 1271 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_8)
#line 1271 "par_loop_control.m"
{
#line 1274 "par_loop_control.m"
  {
#line 1274 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_9;
#line 1274 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_10;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 9)));
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_12;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_13;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_14;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_15;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 8)));
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17;
#line 1274 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 0)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 1)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 2)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 3)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 4)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 5)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 6)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 7)));

#line 1275 "par_loop_control.m"
    transform_hlds__par_loop_control__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_16_16, (MR_Integer) 0)));
#line 1275 "par_loop_control.m"
    transform_hlds__par_loop_control__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_16_16, (MR_Integer) 1)));
#line 1278 "par_loop_control.m"
    {
#line 1278 "par_loop_control.m"
      transform_hlds__par_loop_control__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_18_18, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCSVar_7));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1278 "par_loop_control.m"
    }
#line 1278 "par_loop_control.m"
    {
#line 1278 "par_loop_control.m"
      transform_hlds__par_loop_control__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_17_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_6));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_17_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_18_18));
#line 1278 "par_loop_control.m"
    }
#line 1278 "par_loop_control.m"
    {
#line 1278 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_9));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_10));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_17_17));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1278 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_11));
#line 1278 "par_loop_control.m"
    }
#line 1280 "par_loop_control.m"
    {
#line 1280 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_17_17);
    }
#line 1281 "par_loop_control.m"
    {
#line 1281 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__InstmapDelta_14);
    }
#line 1282 "par_loop_control.m"
    {
#line 1282 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_15 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_13, transform_hlds__par_loop_control__InstmapDelta_14, (MR_Integer) 0);
    }
#line 1283 "par_loop_control.m"
    {
#line 1283 "par_loop_control.m"
      MR_Word base;
#line 1283 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_8 = base;
#line 1283 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_12));
#line 1283 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_15));
#line 1283 "par_loop_control.m"
    }
#line 1274 "par_loop_control.m"
  }
#line 1271 "par_loop_control.m"
}

#line 1254 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_9,
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__NumContextsVar_10,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCVar_11,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_12,
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 1254 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 1254 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22)
#line 1254 "par_loop_control.m"
{
#line 1259 "par_loop_control.m"
  {
#line 1259 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCCreatePredId_15;
#line 1259 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__LCCreateProcId_16;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_17;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_18;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33;
#line 1259 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_34_34;

#line 1260 "par_loop_control.m"
    {
#line 1260 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_40_40, (MR_String) "LC", transform_hlds__par_loop_control__LCVar_11, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20);
    }
#line 1261 "par_loop_control.m"
    {
#line 1261 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__par_loop_control__LCVar_11, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);
    }
#line 1541 "par_loop_control.m"
    {
#line 1541 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_9, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_create", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__LCCreatePredId_15, &transform_hlds__par_loop_control__LCCreateProcId_16);
    }
#line 1264 "par_loop_control.m"
    {
#line 1264 "par_loop_control.m"
      transform_hlds__par_loop_control__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_28_28, 0) = ((MR_Box) (*transform_hlds__par_loop_control__LCVar_11));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "par_loop_control.m"
    }
#line 1264 "par_loop_control.m"
    {
#line 1264 "par_loop_control.m"
      transform_hlds__par_loop_control__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_27_27, 0) = ((MR_Box) (transform_hlds__par_loop_control__NumContextsVar_10));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_27_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_28_28));
#line 1264 "par_loop_control.m"
    }
#line 1263 "par_loop_control.m"
    {
#line 1263 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCCreatePredId_15));
#line 1263 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCCreateProcId_16));
#line 1263 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_27_27));
#line 1263 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1263 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[6])));
#line 1263 "par_loop_control.m"
    }
#line 1265 "par_loop_control.m"
    {
#line 1265 "par_loop_control.m"
      transform_hlds__par_loop_control__V_33_33 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_40_40, transform_hlds__par_loop_control__V_27_27);
    }
#line 1266 "par_loop_control.m"
    {
#line 1266 "par_loop_control.m"
      transform_hlds__par_loop_control__V_34_34 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__par_loop_control__LCVar_11);
    }
#line 1265 "par_loop_control.m"
    {
#line 1265 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_33_33, transform_hlds__par_loop_control__V_34_34, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__par_loop_control__GoalInfo_18);
    }
#line 1267 "par_loop_control.m"
    {
#line 1267 "par_loop_control.m"
      MR_Word base;
#line 1267 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_12 = base;
#line 1267 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_17));
#line 1267 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_18));
#line 1267 "par_loop_control.m"
    }
#line 1259 "par_loop_control.m"
  }
#line 1254 "par_loop_control.m"
}

#line 1233 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
#line 1233 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_8,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCSVar_9,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_10,
#line 1233 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22,
#line 1233 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23,
#line 1233 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24)
#line 1233 "par_loop_control.m"
{
#line 1238 "par_loop_control.m"
  {
#line 1238 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_13;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_14;
#line 1238 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_15;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SymName_16;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_17;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_18;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_19;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_20;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 1238 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_44_44;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_39_39;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_40_40;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_41_41;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_42_42;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_43_43;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_46_46;
#line 1241 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_47_47;

#line 1239 "par_loop_control.m"
    {
#line 1239 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_66_66, (MR_String) "LCS", transform_hlds__par_loop_control__LCSVar_9, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22);
    }
#line 1240 "par_loop_control.m"
    {
#line 1240 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__par_loop_control__LCSVar_9, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_6[1]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24);
    }
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 0)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 1)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 2)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 3)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 4)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 5)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 6)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 7)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 8)));
#line 1241 "par_loop_control.m"
    transform_hlds__par_loop_control__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 9)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_44_44, (MR_Integer) 0)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_44_44, (MR_Integer) 1)));
#line 1245 "par_loop_control.m"
    {
#line 1245 "par_loop_control.m"
      transform_hlds__par_loop_control__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_31_31, 0) = ((MR_Box) (*transform_hlds__par_loop_control__LCSVar_9));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1245 "par_loop_control.m"
    }
#line 1245 "par_loop_control.m"
    {
#line 1245 "par_loop_control.m"
      transform_hlds__par_loop_control__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_30_30, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_13));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_30_30, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_31_31));
#line 1245 "par_loop_control.m"
    }
#line 1245 "par_loop_control.m"
    {
#line 1245 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_14));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_15));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_30_30));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1245 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_16));
#line 1245 "par_loop_control.m"
    }
#line 1247 "par_loop_control.m"
    {
#line 1247 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_66_66, transform_hlds__par_loop_control__V_30_30);
    }
#line 1248 "par_loop_control.m"
    {
#line 1248 "par_loop_control.m"
      transform_hlds__par_loop_control__InstmapDelta_19 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__par_loop_control__LCSVar_9);
    }
#line 1249 "par_loop_control.m"
    {
#line 1249 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_20 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_18, transform_hlds__par_loop_control__InstmapDelta_19, (MR_Integer) 0);
    }
#line 1250 "par_loop_control.m"
    {
#line 1250 "par_loop_control.m"
      MR_Word base;
#line 1250 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_10 = base;
#line 1250 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_17));
#line 1250 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_20));
#line 1250 "par_loop_control.m"
    }
#line 1238 "par_loop_control.m"
  }
#line 1233 "par_loop_control.m"
}

#line 1219 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
#line 1219 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1219 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1219 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11,
#line 1219 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_12,
#line 1219 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_9)
#line 1219 "par_loop_control.m"
{
#line 1225 "par_loop_control.m"
  {
#line 1225 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1225 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 2)));
#line 1225 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14;
#line 1225 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 0)));
#line 1225 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 1)));
#line 1228 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18;
#line 1228 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19;
#line 1228 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20;

#line 1226 "par_loop_control.m"
    {
#line 1226 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(transform_hlds__par_loop_control__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_9, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_13_13, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14);
    }
#line 1228 "par_loop_control.m"
    transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 0)));
#line 1228 "par_loop_control.m"
    transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 1)));
#line 1228 "par_loop_control.m"
    transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 2)));
#line 1228 "par_loop_control.m"
    {
#line 1228 "par_loop_control.m"
      MR_Word base;
#line 1228 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "par_loop_control.m"
      *transform_hlds__par_loop_control__STATE_VARIABLE_Case_12 = base;
#line 1228 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_18_18));
#line 1228 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_19_19));
#line 1228 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14));
#line 1228 "par_loop_control.m"
    }
#line 1225 "par_loop_control.m"
  }
#line 1219 "par_loop_control.m"
}

#line 1191 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
#line 1191 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1191 "par_loop_control.m"
{
#line 1191 "par_loop_control.m"
  {
#line 1191 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1191 "par_loop_control.m"
    MR_builtin_longjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
#line 1191 "par_loop_control.m"
  }
#line 1191 "par_loop_control.m"
}

#line 1191 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
#line 1191 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1191 "par_loop_control.m"
{
#line 1191 "par_loop_control.m"
  {
#line 1191 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1191 "par_loop_control.m"
    {
#line 1191 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__goal_util__goal_calls_2_p_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15);
    }
#line 1191 "par_loop_control.m"
    (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded);
#line 1191 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1191 "par_loop_control.m"
      {
#line 1191 "par_loop_control.m"
        transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(transform_hlds__par_loop_control__env_ptr);
#line 1191 "par_loop_control.m"
        return;
      }
#line 1191 "par_loop_control.m"
  }
#line 1191 "par_loop_control.m"
}

#line 1191 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
#line 1191 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1191 "par_loop_control.m"
{
#line 1191 "par_loop_control.m"
  {
#line 1191 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1191 "par_loop_control.m"
    if (MR_builtin_setjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
#line 1191 "par_loop_control.m"
      {
#line 1191 "par_loop_control.m"
        {
#line 1191 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 3)));
#line 1191 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 9)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 8)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 7)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 6)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 5)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 4)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 1197 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));

#line 1197 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = transform_hlds__par_loop_control__V_41_41;
#line 1197 "par_loop_control.m"
          {
#line 1197 "par_loop_control.m"
            transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(transform_hlds__par_loop_control__env_ptr);
          }
#line 1199 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = transform_hlds__par_loop_control__V_40_40;
#line 1199 "par_loop_control.m"
          {
#line 1199 "par_loop_control.m"
            transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(transform_hlds__par_loop_control__env_ptr);
          }
#line 1191 "par_loop_control.m"
        }
#line 1191 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
#line 1191 "par_loop_control.m"
      }
#line 1191 "par_loop_control.m"
    else
#line 1191 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
#line 1191 "par_loop_control.m"
  }
#line 1191 "par_loop_control.m"
}

#line 1182 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1182 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3,
#line 1182 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__4_4,
#line 1182 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__5_5)
#line 1182 "par_loop_control.m"
{
#line 1182 "par_loop_control.m"
  {
#line 1182 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s transform_hlds__par_loop_control__env;

#line 1182 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1_1;
#line 1186 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "par_loop_control.m"
      {
#line 1186 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1187 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "par_loop_control.m"
      }
#line 1186 "par_loop_control.m"
    else
#line 1189 "par_loop_control.m"
      {
#line 1189 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs0_12;
#line 1189 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conj_13;
#line 1189 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs_14;

#line 1189 "par_loop_control.m"
        (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__4_4, (MR_Integer) 0)));
#line 1189 "par_loop_control.m"
        transform_hlds__par_loop_control__Conjs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__4_4, (MR_Integer) 1)));
#line 1191 "par_loop_control.m"
        {
#line 1191 "par_loop_control.m"
          transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(&transform_hlds__par_loop_control__env);
        }
#line 1207 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1204 "par_loop_control.m"
          {
#line 1204 "par_loop_control.m"
            transform_hlds__par_loop_control__Conj_13 = (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
#line 1205 "par_loop_control.m"
            {
#line 1205 "par_loop_control.m"
              transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, transform_hlds__par_loop_control__HeadVar__2_2, transform_hlds__par_loop_control__HeadVar__3_3, transform_hlds__par_loop_control__Conjs0_12, &transform_hlds__par_loop_control__Conjs_14);
            }
#line 1204 "par_loop_control.m"
          }
#line 1207 "par_loop_control.m"
        else
#line 1210 "par_loop_control.m"
          {
#line 1209 "par_loop_control.m"
            {
#line 1209 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, transform_hlds__par_loop_control__HeadVar__2_2, transform_hlds__par_loop_control__HeadVar__3_3, (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, &transform_hlds__par_loop_control__Conj_13);
            }
#line 1213 "par_loop_control.m"
            transform_hlds__par_loop_control__Conjs_14 = transform_hlds__par_loop_control__Conjs0_12;
#line 1210 "par_loop_control.m"
          }
#line 1189 "par_loop_control.m"
        {
#line 1189 "par_loop_control.m"
          MR_Word base;
#line 1189 "par_loop_control.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__5_5 = base;
#line 1189 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__Conj_13));
#line 1189 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_14));
#line 1189 "par_loop_control.m"
        }
#line 1189 "par_loop_control.m"
      }
#line 1182 "par_loop_control.m"
  }
#line 1182 "par_loop_control.m"
}

#line 1137 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
#line 1137 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1137 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1137 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 1137 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 1137 "par_loop_control.m"
{
#line 1137 "par_loop_control.m"
  {
#line 1137 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1137 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12;
#line 1137 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_FixupGoalInfo_9;

#line 1137 "par_loop_control.m"
    {
#line 1137 "par_loop_control.m"
      transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12, &transform_hlds__par_loop_control__conv0_FixupGoalInfo_9);
    }
#line 1137 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12));
#line 1137 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv0_FixupGoalInfo_9));
#line 1137 "par_loop_control.m"
  }
#line 1137 "par_loop_control.m"
}

#line 1116 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
#line 1116 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg)
#line 1116 "par_loop_control.m"
{
#line 1116 "par_loop_control.m"
  {
#line 1116 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1116 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;

#line 1116 "par_loop_control.m"
    {
#line 1116 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1116__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))));
    }
#line 1116 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1116 "par_loop_control.m"
  }
#line 1116 "par_loop_control.m"
}

#line 1127 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
#line 1127 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg)
#line 1127 "par_loop_control.m"
{
#line 1127 "par_loop_control.m"
  {
#line 1127 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1127 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;

#line 1127 "par_loop_control.m"
    {
#line 1127 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1127__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))));
    }
#line 1127 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1127 "par_loop_control.m"
  }
#line 1127 "par_loop_control.m"
}

#line 1087 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
#line 1087 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1087 "par_loop_control.m"
{
#line 1087 "par_loop_control.m"
  {
#line 1087 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1087 "par_loop_control.m"
    MR_builtin_longjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
#line 1087 "par_loop_control.m"
  }
#line 1087 "par_loop_control.m"
}

#line 1087 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
#line 1087 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1087 "par_loop_control.m"
{
#line 1087 "par_loop_control.m"
  {
#line 1087 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1087 "par_loop_control.m"
    {
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_200_200;
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_201_201;
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_202_202;
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_203_203;
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_204_204;
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_205_205;
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1089 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));

#line 1089 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1089 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1089 "par_loop_control.m"
      transform_hlds__par_loop_control__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1089 "par_loop_control.m"
      transform_hlds__par_loop_control__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1089 "par_loop_control.m"
      transform_hlds__par_loop_control__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1089 "par_loop_control.m"
      transform_hlds__par_loop_control__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1089 "par_loop_control.m"
      transform_hlds__par_loop_control__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1089 "par_loop_control.m"
      transform_hlds__par_loop_control__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1089 "par_loop_control.m"
      {
#line 1089 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207);
      }
#line 1090 "par_loop_control.m"
      if (!((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded))
#line 1091 "par_loop_control.m"
        {
#line 1091 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206);
        }
#line 1090 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1090 "par_loop_control.m"
        {
#line 1090 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(transform_hlds__par_loop_control__env_ptr);
#line 1090 "par_loop_control.m"
          return;
        }
#line 1087 "par_loop_control.m"
    }
#line 1087 "par_loop_control.m"
  }
#line 1087 "par_loop_control.m"
}

#line 1087 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
#line 1087 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1087 "par_loop_control.m"
{
#line 1087 "par_loop_control.m"
  {
#line 1087 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1087 "par_loop_control.m"
    if (MR_builtin_setjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
#line 1087 "par_loop_control.m"
      {
#line 1087 "par_loop_control.m"
        {
#line 1087 "par_loop_control.m"
          hlds__goal_util__goal_calls_2_p_1((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &(transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2, transform_hlds__par_loop_control__env_ptr);
        }
#line 1087 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
#line 1087 "par_loop_control.m"
      }
#line 1087 "par_loop_control.m"
    else
#line 1087 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
#line 1087 "par_loop_control.m"
  }
#line 1087 "par_loop_control.m"
}

#line 1066 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1066 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_8,
#line 1066 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70,
#line 1066 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71)
#line 1066 "par_loop_control.m"
{
#line 1066 "par_loop_control.m"
  {
#line 1066 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s transform_hlds__par_loop_control__env;

#line 1066 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6 = transform_hlds__par_loop_control__Info_6;
#line 1066 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70;
#line 1071 "par_loop_control.m"
    {
#line 1071 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 1071 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__GoalId_11;
#line 1072 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));

#line 1073 "par_loop_control.m"
      {
#line 1073 "par_loop_control.m"
        transform_hlds__par_loop_control__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__par_loop_control__GoalInfo0_10);
      }
#line 1081 "par_loop_control.m"
      {
#line 1081 "par_loop_control.m"
        (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (transform_hlds__par_loop_control__GoalId_11)), transform_hlds__par_loop_control__RecParConjIds_7);
      }
#line 1084 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1083 "par_loop_control.m"
        {
#line 1083 "par_loop_control.m"
          *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 1;
#line 1083 "par_loop_control.m"
          *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
#line 1083 "par_loop_control.m"
        }
#line 1084 "par_loop_control.m"
      else
#line 1101 "par_loop_control.m"
        {
#line 1087 "par_loop_control.m"
          {
#line 1087 "par_loop_control.m"
            transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(&transform_hlds__par_loop_control__env);
          }
#line 1086 "par_loop_control.m"
          (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded);
#line 1101 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1095 "par_loop_control.m"
            {
#line 1095 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs0_13;
#line 1095 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__FinishLCGoal_14;
#line 1095 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs_15;
#line 1095 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_72_72;
#line 1095 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74;

#line 1095 "par_loop_control.m"
              {
#line 1095 "par_loop_control.m"
                hlds__hlds_goal__goal_to_conj_list_2_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &transform_hlds__par_loop_control__Conjs0_13);
              }
#line 1096 "par_loop_control.m"
              {
#line 1096 "par_loop_control.m"
                transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, &transform_hlds__par_loop_control__FinishLCGoal_14);
              }
#line 1097 "par_loop_control.m"
              {
#line 1097 "par_loop_control.m"
                transform_hlds__par_loop_control__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_72_72, 0) = ((MR_Box) (transform_hlds__par_loop_control__FinishLCGoal_14));
#line 1097 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "par_loop_control.m"
              }
#line 1097 "par_loop_control.m"
              {
#line 1097 "par_loop_control.m"
                transform_hlds__par_loop_control__Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_13, transform_hlds__par_loop_control__V_72_72);
              }
#line 1098 "par_loop_control.m"
              {
#line 1098 "par_loop_control.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__par_loop_control__Conjs_15, transform_hlds__par_loop_control__GoalInfo0_10, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74);
              }
#line 1099 "par_loop_control.m"
              {
#line 1099 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71);
              }
#line 1100 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 0;
#line 1095 "par_loop_control.m"
            }
#line 1101 "par_loop_control.m"
          else
#line 1102 "par_loop_control.m"
            {
#line 1102 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));
#line 1102 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 1102 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_47;
#line 1102 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103;
#line 1102 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_175_175;

#line 1111 "par_loop_control.m"
#line 1111 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) {
#line 1111 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "par_loop_control.m"
                case (MR_Integer) 0:
#line 1142 "par_loop_control.m"
                  {
#line 1143 "par_loop_control.m"
                    {
#line 1143 "par_loop_control.m"
                      mercury__require__sorry_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "negation");
#line 1143 "par_loop_control.m"
                      return;
                    }
#line 1142 "par_loop_control.m"
                  }
#line 1111 "par_loop_control.m"
                  break;
#line 1111 "par_loop_control.m"
                case (MR_Integer) 1:
#line 1107 "par_loop_control.m"
                  {
#line 1110 "par_loop_control.m"
                    {
#line 1110 "par_loop_control.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
#line 1110 "par_loop_control.m"
                      return;
                    }
#line 1107 "par_loop_control.m"
                  }
#line 1111 "par_loop_control.m"
                  break;
#line 1111 "par_loop_control.m"
                case (MR_Integer) 2:
#line 1113 "par_loop_control.m"
                  {
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__PredId_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)));
#line 1113 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Builtin_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__MaybeContext_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__RecPredProcId_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__InnerPredId_42;
#line 1113 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__InnerProcId_43;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LCVar_44;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Args_45;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SymName_46;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_94_94;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_98_98;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_99_99;
#line 1112 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control___SymName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 5)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1115 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_147_147;
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_149_149;
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_151_151;
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_152_152;
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_153_153;
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_154_154;
#line 1118 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_155_155;

#line 1116 "par_loop_control.m"
                    {
#line 1116 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_98_98, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_35));
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_98_98, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_36));
#line 1116 "par_loop_control.m"
                    }
#line 1116 "par_loop_control.m"
                    {
#line 1116 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[1]));
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5));
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 3) = ((MR_Box) (transform_hlds__par_loop_control__RecPredProcId_41));
#line 1116 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 4) = ((MR_Box) (transform_hlds__par_loop_control__V_98_98));
#line 1116 "par_loop_control.m"
                    }
#line 1116 "par_loop_control.m"
                    {
#line 1116 "par_loop_control.m"
                      mercury__require__expect_4_p_0(transform_hlds__par_loop_control__V_94_94, (MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Expected recursive call");
                    }
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__LCVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__SymName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__InnerPredId_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_99_99, (MR_Integer) 0)));
#line 1118 "par_loop_control.m"
                    transform_hlds__par_loop_control__InnerProcId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_99_99, (MR_Integer) 1)));
#line 1120 "par_loop_control.m"
                    {
#line 1120 "par_loop_control.m"
                      transform_hlds__par_loop_control__Args_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_45, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_44));
#line 1120 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_45, 1) = ((MR_Box) (transform_hlds__par_loop_control__Args0_37));
#line 1120 "par_loop_control.m"
                    }
#line 1122 "par_loop_control.m"
                    {
#line 1122 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredId_42));
#line 1122 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcId_43));
#line 1122 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Args_45));
#line 1122 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Builtin_38));
#line 1122 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 4) = ((MR_Box) (transform_hlds__par_loop_control__MaybeContext_39));
#line 1122 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_46));
#line 1122 "par_loop_control.m"
                    }
#line 1124 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 0;
#line 1113 "par_loop_control.m"
                  }
#line 1111 "par_loop_control.m"
                  break;
#line 1111 "par_loop_control.m"
                case (MR_Integer) 3:
#line 1111 "par_loop_control.m"
#line 1111 "par_loop_control.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) {
#line 1111 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 1107 "par_loop_control.m"
                      {
#line 1110 "par_loop_control.m"
                        {
#line 1110 "par_loop_control.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
#line 1110 "par_loop_control.m"
                          return;
                        }
#line 1107 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 1126 "par_loop_control.m"
                      {
#line 1126 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__ConjType_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1126 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_89_89;
#line 1126 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1126 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs_114;

#line 1127 "par_loop_control.m"
                        {
#line 1127 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[0]));
#line 1127 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4));
#line 1127 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1127 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 3) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_48));
#line 1127 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1127 "par_loop_control.m"
                        }
#line 1127 "par_loop_control.m"
                        {
#line 1127 "par_loop_control.m"
                          mercury__require__expect_4_p_0(transform_hlds__par_loop_control__V_89_89, (MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "parallel conjunction");
                        }
#line 1129 "par_loop_control.m"
                        {
#line 1129 "par_loop_control.m"
                          transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_8, transform_hlds__par_loop_control__Conjs0_113, &transform_hlds__par_loop_control__Conjs_114);
                        }
#line 1131 "par_loop_control.m"
                        {
#line 1131 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1131 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_48));
#line 1131 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_114));
#line 1131 "par_loop_control.m"
                        }
#line 1126 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 3:
#line 1133 "par_loop_control.m"
                      {
#line 1134 "par_loop_control.m"
                        {
#line 1134 "par_loop_control.m"
                          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "disjunction");
#line 1134 "par_loop_control.m"
                          return;
                        }
#line 1133 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 4:
#line 1136 "par_loop_control.m"
                      {
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_195_195;
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__CanFail_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases_53;
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfos_54;
#line 1136 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_85_85;

#line 1137 "par_loop_control.m"
                        {
#line 1137 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[0]));
#line 1137 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6));
#line 1137 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1137 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 3) = ((MR_Box) ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6));
#line 1137 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 4) = ((MR_Box) (transform_hlds__par_loop_control__RecParConjIds_7));
#line 1137 "par_loop_control.m"
                        }
#line 5966 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_195_195 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1137 "par_loop_control.m"
                        {
#line 1137 "par_loop_control.m"
                          mercury__list__map2_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_195_195, transform_hlds__par_loop_control__TypeCtorInfo_195_195, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_85_85, transform_hlds__par_loop_control__Cases0_52, &transform_hlds__par_loop_control__Cases_53, &transform_hlds__par_loop_control__FixupGoalInfos_54);
                        }
#line 1139 "par_loop_control.m"
                        {
#line 1139 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfos_54, transform_hlds__par_loop_control__FixupGoalInfo_8);
                        }
#line 1140 "par_loop_control.m"
                        {
#line 1140 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1140 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_50));
#line 1140 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_51));
#line 1140 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_53));
#line 1140 "par_loop_control.m"
                        }
#line 1136 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 5:
#line 1145 "par_loop_control.m"
                      {
#line 1145 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1145 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1145 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_58;

#line 1146 "par_loop_control.m"
                        {
#line 1146 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_8, transform_hlds__par_loop_control__SubGoal0_57, &transform_hlds__par_loop_control__SubGoal_58);
                        }
#line 1148 "par_loop_control.m"
                        {
#line 1148 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1148 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_56));
#line 1148 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_58));
#line 1148 "par_loop_control.m"
                        }
#line 1145 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 6:
#line 1150 "par_loop_control.m"
                      {
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__ExistVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_63;
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then_64;
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_65;
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else_66;
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_79_79;
#line 1150 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_80_80;

#line 1153 "par_loop_control.m"
                        {
#line 1153 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, &transform_hlds__par_loop_control__FixupGoalInfoThen_63, transform_hlds__par_loop_control__Then0_61, &transform_hlds__par_loop_control__Then_64);
                        }
#line 1155 "par_loop_control.m"
                        {
#line 1155 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, &transform_hlds__par_loop_control__FixupGoalInfoElse_65, transform_hlds__par_loop_control__Else0_62, &transform_hlds__par_loop_control__Else_66);
                        }
#line 1157 "par_loop_control.m"
                        {
#line 1157 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_80_80, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_65));
#line 1157 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "par_loop_control.m"
                        }
#line 1157 "par_loop_control.m"
                        {
#line 1157 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_79_79, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_63));
#line 1157 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_79_79, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_80_80));
#line 1157 "par_loop_control.m"
                        }
#line 1157 "par_loop_control.m"
                        {
#line 1157 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_79_79, transform_hlds__par_loop_control__FixupGoalInfo_8);
                        }
#line 1159 "par_loop_control.m"
                        {
#line 1159 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1159 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ExistVars_59));
#line 1159 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_60));
#line 1159 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_64));
#line 1159 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_66));
#line 1159 "par_loop_control.m"
                        }
#line 1150 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                    case (MR_Integer) 7:
#line 1161 "par_loop_control.m"
                      {
#line 1162 "par_loop_control.m"
                        {
#line 1162 "par_loop_control.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "shorthand");
#line 1162 "par_loop_control.m"
                          return;
                        }
#line 1161 "par_loop_control.m"
                      }
#line 1111 "par_loop_control.m"
                      break;
#line 1111 "par_loop_control.m"
                  }
#line 1111 "par_loop_control.m"
                  break;
#line 1111 "par_loop_control.m"
              }
#line 1164 "par_loop_control.m"
              transform_hlds__par_loop_control__V_175_175 = transform_hlds__par_loop_control__V_17_17;
#line 1164 "par_loop_control.m"
              {
#line 1164 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_47));
#line 1164 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_175_175));
#line 1164 "par_loop_control.m"
              }
#line 1175 "par_loop_control.m"
#line 1175 "par_loop_control.m"
              switch (*transform_hlds__par_loop_control__FixupGoalInfo_8) {
#line 1175 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1175 "par_loop_control.m"
                case (MR_Integer) 1:
#line 1176 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103;
#line 1175 "par_loop_control.m"
                  break;
#line 1175 "par_loop_control.m"
                case (MR_Integer) 0:
#line 1168 "par_loop_control.m"
                  {
#line 1168 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105;
#line 1168 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_106_106;
#line 1168 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107;
#line 1168 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108;
#line 1168 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_177_177;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_178_178;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_179_179;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_180_180;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_181_181;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_182_182;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_183_183;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_184_184;
#line 1170 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_185_185;
#line 1173 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_186_186;
#line 1173 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_187_187;

#line 1169 "par_loop_control.m"
                    {
#line 1169 "par_loop_control.m"
                      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__V_175_175);
                    }
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1170 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1170 "par_loop_control.m"
                    {
#line 1170 "par_loop_control.m"
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_106_106, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107);
                    }
#line 1171 "par_loop_control.m"
                    {
#line 1171 "par_loop_control.m"
                      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107, transform_hlds__par_loop_control__V_175_175, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108);
                    }
#line 1172 "par_loop_control.m"
                    {
#line 1172 "par_loop_control.m"
                      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110);
                    }
#line 1173 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, (MR_Integer) 0)));
#line 1173 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, (MR_Integer) 1)));
#line 1173 "par_loop_control.m"
                    {
#line 1173 "par_loop_control.m"
                      MR_Word base;
#line 1173 "par_loop_control.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "par_loop_control.m"
                      *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = base;
#line 1173 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_186_186));
#line 1173 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110));
#line 1173 "par_loop_control.m"
                    }
#line 1168 "par_loop_control.m"
                  }
#line 1175 "par_loop_control.m"
                  break;
#line 1175 "par_loop_control.m"
              }
#line 1102 "par_loop_control.m"
            }
#line 1101 "par_loop_control.m"
        }
#line 1071 "par_loop_control.m"
    }
#line 1066 "par_loop_control.m"
  }
#line 1066 "par_loop_control.m"
}

#line 1045 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
#line 1045 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1045 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1045 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3)
#line 1045 "par_loop_control.m"
{
#line 1048 "par_loop_control.m"
  {
#line 1048 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1048 "par_loop_control.m"
#line 1048 "par_loop_control.m"
    switch (transform_hlds__par_loop_control__HeadVar__1_1) {
#line 1048 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "par_loop_control.m"
      case (MR_Integer) 1:
#line 1048 "par_loop_control.m"
#line 1048 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__HeadVar__2_2) {
#line 1048 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "par_loop_control.m"
          case (MR_Integer) 1:
#line 1055 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1048 "par_loop_control.m"
            break;
#line 1048 "par_loop_control.m"
          case (MR_Integer) 0:
#line 1053 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1048 "par_loop_control.m"
            break;
#line 1048 "par_loop_control.m"
        }
#line 1048 "par_loop_control.m"
        break;
#line 1048 "par_loop_control.m"
      case (MR_Integer) 0:
#line 1048 "par_loop_control.m"
#line 1048 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__HeadVar__2_2) {
#line 1048 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "par_loop_control.m"
          case (MR_Integer) 1:
#line 1051 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1048 "par_loop_control.m"
            break;
#line 1048 "par_loop_control.m"
          case (MR_Integer) 0:
#line 1049 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 0;
#line 1048 "par_loop_control.m"
            break;
#line 1048 "par_loop_control.m"
        }
#line 1048 "par_loop_control.m"
        break;
#line 1048 "par_loop_control.m"
    }
#line 1048 "par_loop_control.m"
  }
#line 1045 "par_loop_control.m"
}

#line 1037 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
#line 1037 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1037 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1037 "par_loop_control.m"
{
#line 1040 "par_loop_control.m"
  {
#line 1040 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1040 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 0;
#line 1040 "par_loop_control.m"
    else
#line 1041 "par_loop_control.m"
      {
#line 1041 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__X_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 1041 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 1041 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__UseParentStack0_6;

#line 1042 "par_loop_control.m"
        {
#line 1042 "par_loop_control.m"
          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__Xs_4, &transform_hlds__par_loop_control__UseParentStack0_6);
        }
#line 1048 "par_loop_control.m"
#line 1048 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__X_3) {
#line 1048 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "par_loop_control.m"
          case (MR_Integer) 1:
#line 1048 "par_loop_control.m"
#line 1048 "par_loop_control.m"
            switch (transform_hlds__par_loop_control__UseParentStack0_6) {
#line 1048 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "par_loop_control.m"
              case (MR_Integer) 1:
#line 1055 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1048 "par_loop_control.m"
                break;
#line 1048 "par_loop_control.m"
              case (MR_Integer) 0:
#line 1053 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1048 "par_loop_control.m"
                break;
#line 1048 "par_loop_control.m"
            }
#line 1048 "par_loop_control.m"
            break;
#line 1048 "par_loop_control.m"
          case (MR_Integer) 0:
#line 1048 "par_loop_control.m"
#line 1048 "par_loop_control.m"
            switch (transform_hlds__par_loop_control__UseParentStack0_6) {
#line 1048 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "par_loop_control.m"
              case (MR_Integer) 1:
#line 1051 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1048 "par_loop_control.m"
                break;
#line 1048 "par_loop_control.m"
              case (MR_Integer) 0:
#line 1049 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 0;
#line 1048 "par_loop_control.m"
                break;
#line 1048 "par_loop_control.m"
            }
#line 1048 "par_loop_control.m"
            break;
#line 1048 "par_loop_control.m"
        }
#line 1041 "par_loop_control.m"
      }
#line 1040 "par_loop_control.m"
  }
#line 1037 "par_loop_control.m"
}

#line 1027 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
#line 1027 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__List_3,
#line 1027 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Fixup_4)
#line 1027 "par_loop_control.m"
{
#line 1033 "par_loop_control.m"
  {
#line 1033 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1031 "par_loop_control.m"
    {
#line 1031 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mercury__list__contains_2_p_0((MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__List_3, ((MR_Box) ((MR_Integer) 0)));
    }
#line 1033 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 1032 "par_loop_control.m"
      *transform_hlds__par_loop_control__Fixup_4 = (MR_Integer) 0;
#line 1033 "par_loop_control.m"
    else
#line 1034 "par_loop_control.m"
      *transform_hlds__par_loop_control__Fixup_4 = (MR_Integer) 1;
#line 1033 "par_loop_control.m"
  }
#line 1027 "par_loop_control.m"
}

#line 1014 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
#line 1014 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 1014 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 1014 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13,
#line 1014 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_14,
#line 1014 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 1014 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11)
#line 1014 "par_loop_control.m"
{
#line 1021 "par_loop_control.m"
  {
#line 1021 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1021 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 2)));
#line 1021 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16;
#line 1021 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 0)));
#line 1021 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 1)));
#line 1024 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20;
#line 1024 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21;
#line 1024 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22;

#line 1022 "par_loop_control.m"
    {
#line 1022 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_15_15, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
    }
#line 1024 "par_loop_control.m"
    transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 0)));
#line 1024 "par_loop_control.m"
    transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 1)));
#line 1024 "par_loop_control.m"
    transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 2)));
#line 1024 "par_loop_control.m"
    {
#line 1024 "par_loop_control.m"
      MR_Word base;
#line 1024 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "par_loop_control.m"
      *transform_hlds__par_loop_control__STATE_VARIABLE_Case_14 = base;
#line 1024 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_20_20));
#line 1024 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_21_21));
#line 1024 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16));
#line 1024 "par_loop_control.m"
    }
#line 1021 "par_loop_control.m"
  }
#line 1014 "par_loop_control.m"
}

#line 973 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
#line 973 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 973 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 973 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 973 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 973 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 973 "par_loop_control.m"
{
#line 973 "par_loop_control.m"
  {
#line 973 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 973 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14;
#line 973 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv8_UseParentStack_10;
#line 973 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv7_FixupGoalInfo_11;

#line 973 "par_loop_control.m"
    {
#line 973 "par_loop_control.m"
      transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14, &transform_hlds__par_loop_control__conv8_UseParentStack_10, &transform_hlds__par_loop_control__conv7_FixupGoalInfo_11);
    }
#line 973 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14));
#line 973 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv8_UseParentStack_10));
#line 973 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv7_FixupGoalInfo_11));
#line 973 "par_loop_control.m"
  }
#line 973 "par_loop_control.m"
}

#line 965 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
#line 965 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 965 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 965 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 965 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 965 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 965 "par_loop_control.m"
{
#line 965 "par_loop_control.m"
  {
#line 965 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 965 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117;
#line 965 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv5_UseParentStack_10;
#line 965 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv4_FixupGoalInfo_11;

#line 965 "par_loop_control.m"
    {
#line 965 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117, &transform_hlds__par_loop_control__conv5_UseParentStack_10, &transform_hlds__par_loop_control__conv4_FixupGoalInfo_11);
    }
#line 965 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117));
#line 965 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv5_UseParentStack_10));
#line 965 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv4_FixupGoalInfo_11));
#line 965 "par_loop_control.m"
  }
#line 965 "par_loop_control.m"
}

#line 948 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
#line 948 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 948 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 948 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 948 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 948 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 948 "par_loop_control.m"
{
#line 948 "par_loop_control.m"
  {
#line 948 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 948 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117;
#line 948 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_UseParentStack_10;
#line 948 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_FixupGoalInfo_11;

#line 948 "par_loop_control.m"
    {
#line 948 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117, &transform_hlds__par_loop_control__conv2_UseParentStack_10, &transform_hlds__par_loop_control__conv1_FixupGoalInfo_11);
    }
#line 948 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117));
#line 948 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv2_UseParentStack_10));
#line 948 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv1_FixupGoalInfo_11));
#line 948 "par_loop_control.m"
  }
#line 948 "par_loop_control.m"
}

#line 883 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
#line 883 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 883 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 883 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116,
#line 883 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117,
#line 883 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 883 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11)
#line 883 "par_loop_control.m"
{
#line 888 "par_loop_control.m"
  {
#line 888 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 888 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116, (MR_Integer) 0)));
#line 888 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116, (MR_Integer) 1)));

#line 923 "par_loop_control.m"
#line 923 "par_loop_control.m"
    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 923 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 923 "par_loop_control.m"
      case (MR_Integer) 0:
#line 933 "par_loop_control.m"
        {
#line 933 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 933 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 943 "par_loop_control.m"
#line 943 "par_loop_control.m"
          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 943 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 943 "par_loop_control.m"
            case (MR_Integer) 0:
#line 979 "par_loop_control.m"
              {
#line 979 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 979 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 980 "par_loop_control.m"
                {
#line 980 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                }
#line 982 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 979 "par_loop_control.m"
              }
#line 943 "par_loop_control.m"
              break;
#line 943 "par_loop_control.m"
            case (MR_Integer) 1:
#line 938 "par_loop_control.m"
              {
#line 939 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 941 "par_loop_control.m"
                *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 942 "par_loop_control.m"
                *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 938 "par_loop_control.m"
              }
#line 943 "par_loop_control.m"
              break;
#line 943 "par_loop_control.m"
            case (MR_Integer) 3:
#line 943 "par_loop_control.m"
#line 943 "par_loop_control.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 943 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 943 "par_loop_control.m"
                case (MR_Integer) 0:
#line 943 "par_loop_control.m"
                case (MR_Integer) 1:
#line 938 "par_loop_control.m"
                  {
#line 939 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 941 "par_loop_control.m"
                    *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 942 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 938 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 2:
#line 944 "par_loop_control.m"
                  {
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_133_133;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_135_135;
#line 945 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 945 "par_loop_control.m"
                    {
#line 945 "par_loop_control.m"
                      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                    }
#line 945 "par_loop_control.m"
                    transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 946 "par_loop_control.m"
                    {
#line 946 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                    }
#line 948 "par_loop_control.m"
                    {
#line 948 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 948 "par_loop_control.m"
                    }
#line 948 "par_loop_control.m"
                    {
#line 948 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                    }
#line 952 "par_loop_control.m"
                    {
#line 952 "par_loop_control.m"
                      transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 952 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 952 "par_loop_control.m"
                    }
#line 954 "par_loop_control.m"
                    {
#line 954 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 955 "par_loop_control.m"
                    {
#line 955 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                    }
#line 957 "par_loop_control.m"
                    {
#line 957 "par_loop_control.m"
                      transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 959 "par_loop_control.m"
                    {
#line 959 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 959 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "par_loop_control.m"
                    }
#line 959 "par_loop_control.m"
                    {
#line 959 "par_loop_control.m"
                      transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                    }
#line 960 "par_loop_control.m"
                    {
#line 960 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 960 "par_loop_control.m"
                    }
#line 944 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 3:
#line 962 "par_loop_control.m"
                  {
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_131_131;

#line 965 "par_loop_control.m"
                    {
#line 965 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 965 "par_loop_control.m"
                    }
#line 6921 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 965 "par_loop_control.m"
                    {
#line 965 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                    }
#line 968 "par_loop_control.m"
                    {
#line 968 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 969 "par_loop_control.m"
                    {
#line 969 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 970 "par_loop_control.m"
                    {
#line 970 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 970 "par_loop_control.m"
                    }
#line 962 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 4:
#line 972 "par_loop_control.m"
                  {
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases_96;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_130_130;

#line 973 "par_loop_control.m"
                    {
#line 973 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 973 "par_loop_control.m"
                    }
#line 6989 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 973 "par_loop_control.m"
                    {
#line 973 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                    }
#line 975 "par_loop_control.m"
                    {
#line 975 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 976 "par_loop_control.m"
                    {
#line 976 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 977 "par_loop_control.m"
                    {
#line 977 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 977 "par_loop_control.m"
                    }
#line 972 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 5:
#line 984 "par_loop_control.m"
                  {
#line 984 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 984 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 984 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 985 "par_loop_control.m"
                    {
#line 985 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 987 "par_loop_control.m"
                    {
#line 987 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 987 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 987 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 987 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 987 "par_loop_control.m"
                    }
#line 984 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 6:
#line 989 "par_loop_control.m"
                  {
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond_106;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then_109;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else_112;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_122_122;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_123_123;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_124_124;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_126_126;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_127_127;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_128_128;

#line 990 "par_loop_control.m"
                    {
#line 990 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                    }
#line 992 "par_loop_control.m"
                    {
#line 992 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                    }
#line 994 "par_loop_control.m"
                    {
#line 994 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "par_loop_control.m"
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 998 "par_loop_control.m"
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 998 "par_loop_control.m"
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 1000 "par_loop_control.m"
                    {
#line 1000 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 1000 "par_loop_control.m"
                    }
#line 989 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
              }
#line 943 "par_loop_control.m"
              break;
#line 943 "par_loop_control.m"
          }
#line 1002 "par_loop_control.m"
          {
#line 1002 "par_loop_control.m"
            transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1002 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1002 "par_loop_control.m"
          }
#line 1006 "par_loop_control.m"
#line 1006 "par_loop_control.m"
          switch (*transform_hlds__par_loop_control__FixupGoalInfo_11) {
#line 1006 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1006 "par_loop_control.m"
            case (MR_Integer) 1:
#line 1007 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1006 "par_loop_control.m"
              break;
#line 1006 "par_loop_control.m"
            case (MR_Integer) 0:
#line 1005 "par_loop_control.m"
              {
#line 1005 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1005 "par_loop_control.m"
                return;
              }
#line 1006 "par_loop_control.m"
              break;
#line 1006 "par_loop_control.m"
          }
#line 933 "par_loop_control.m"
        }
#line 923 "par_loop_control.m"
        break;
#line 923 "par_loop_control.m"
      case (MR_Integer) 1:
#line 933 "par_loop_control.m"
        {
#line 933 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 933 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 943 "par_loop_control.m"
#line 943 "par_loop_control.m"
          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 943 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 943 "par_loop_control.m"
            case (MR_Integer) 0:
#line 979 "par_loop_control.m"
              {
#line 979 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 979 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 980 "par_loop_control.m"
                {
#line 980 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                }
#line 982 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 979 "par_loop_control.m"
              }
#line 943 "par_loop_control.m"
              break;
#line 943 "par_loop_control.m"
            case (MR_Integer) 1:
#line 938 "par_loop_control.m"
              {
#line 939 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 941 "par_loop_control.m"
                *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 942 "par_loop_control.m"
                *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 938 "par_loop_control.m"
              }
#line 943 "par_loop_control.m"
              break;
#line 943 "par_loop_control.m"
            case (MR_Integer) 3:
#line 943 "par_loop_control.m"
#line 943 "par_loop_control.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 943 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 943 "par_loop_control.m"
                case (MR_Integer) 0:
#line 943 "par_loop_control.m"
                case (MR_Integer) 1:
#line 938 "par_loop_control.m"
                  {
#line 939 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 941 "par_loop_control.m"
                    *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 942 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 938 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 2:
#line 944 "par_loop_control.m"
                  {
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_133_133;
#line 944 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_135_135;
#line 945 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 945 "par_loop_control.m"
                    {
#line 945 "par_loop_control.m"
                      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                    }
#line 945 "par_loop_control.m"
                    transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 946 "par_loop_control.m"
                    {
#line 946 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                    }
#line 948 "par_loop_control.m"
                    {
#line 948 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 948 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 948 "par_loop_control.m"
                    }
#line 948 "par_loop_control.m"
                    {
#line 948 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                    }
#line 952 "par_loop_control.m"
                    {
#line 952 "par_loop_control.m"
                      transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 952 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 952 "par_loop_control.m"
                    }
#line 954 "par_loop_control.m"
                    {
#line 954 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 955 "par_loop_control.m"
                    {
#line 955 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                    }
#line 957 "par_loop_control.m"
                    {
#line 957 "par_loop_control.m"
                      transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 959 "par_loop_control.m"
                    {
#line 959 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 959 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "par_loop_control.m"
                    }
#line 959 "par_loop_control.m"
                    {
#line 959 "par_loop_control.m"
                      transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                    }
#line 960 "par_loop_control.m"
                    {
#line 960 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 960 "par_loop_control.m"
                    }
#line 944 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 3:
#line 962 "par_loop_control.m"
                  {
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 962 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_131_131;

#line 965 "par_loop_control.m"
                    {
#line 965 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 965 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 965 "par_loop_control.m"
                    }
#line 7480 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 965 "par_loop_control.m"
                    {
#line 965 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                    }
#line 968 "par_loop_control.m"
                    {
#line 968 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 969 "par_loop_control.m"
                    {
#line 969 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 970 "par_loop_control.m"
                    {
#line 970 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 970 "par_loop_control.m"
                    }
#line 962 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 4:
#line 972 "par_loop_control.m"
                  {
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases_96;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 972 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_130_130;

#line 973 "par_loop_control.m"
                    {
#line 973 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 973 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 973 "par_loop_control.m"
                    }
#line 7548 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 973 "par_loop_control.m"
                    {
#line 973 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                    }
#line 975 "par_loop_control.m"
                    {
#line 975 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 976 "par_loop_control.m"
                    {
#line 976 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 977 "par_loop_control.m"
                    {
#line 977 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 977 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 977 "par_loop_control.m"
                    }
#line 972 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 5:
#line 984 "par_loop_control.m"
                  {
#line 984 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 984 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 984 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 985 "par_loop_control.m"
                    {
#line 985 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 987 "par_loop_control.m"
                    {
#line 987 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 987 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 987 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 987 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 987 "par_loop_control.m"
                    }
#line 984 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 6:
#line 989 "par_loop_control.m"
                  {
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond_106;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then_109;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else_112;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_122_122;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_123_123;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_124_124;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_126_126;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_127_127;
#line 989 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_128_128;

#line 990 "par_loop_control.m"
                    {
#line 990 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                    }
#line 992 "par_loop_control.m"
                    {
#line 992 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                    }
#line 994 "par_loop_control.m"
                    {
#line 994 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 996 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 996 "par_loop_control.m"
                    }
#line 996 "par_loop_control.m"
                    {
#line 996 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "par_loop_control.m"
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 998 "par_loop_control.m"
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 998 "par_loop_control.m"
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 1000 "par_loop_control.m"
                    {
#line 1000 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 1000 "par_loop_control.m"
                    }
#line 989 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
              }
#line 943 "par_loop_control.m"
              break;
#line 943 "par_loop_control.m"
          }
#line 1002 "par_loop_control.m"
          {
#line 1002 "par_loop_control.m"
            transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1002 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1002 "par_loop_control.m"
          }
#line 1006 "par_loop_control.m"
#line 1006 "par_loop_control.m"
          switch (*transform_hlds__par_loop_control__FixupGoalInfo_11) {
#line 1006 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1006 "par_loop_control.m"
            case (MR_Integer) 1:
#line 1007 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1006 "par_loop_control.m"
              break;
#line 1006 "par_loop_control.m"
            case (MR_Integer) 0:
#line 1005 "par_loop_control.m"
              {
#line 1005 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1005 "par_loop_control.m"
                return;
              }
#line 1006 "par_loop_control.m"
              break;
#line 1006 "par_loop_control.m"
          }
#line 933 "par_loop_control.m"
        }
#line 923 "par_loop_control.m"
        break;
#line 923 "par_loop_control.m"
      case (MR_Integer) 2:
#line 892 "par_loop_control.m"
        {
#line 892 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__CallPredId0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)));
#line 892 "par_loop_control.m"
          MR_Integer transform_hlds__par_loop_control__CallProcId0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 892 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 892 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__Builtin_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 892 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__MaybeUnify_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 892 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__RecPredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 2)));
#line 891 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control___Name0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 5)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 0)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 1)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 3)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 4)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 5)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 6)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 7)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 8)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 9)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__RecPredProcId_20, (MR_Integer) 0)));
#line 894 "par_loop_control.m"
          MR_Integer transform_hlds__par_loop_control__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__RecPredProcId_20, (MR_Integer) 1)));

#line 894 "par_loop_control.m"
          {
#line 894 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__par_loop_control__CallPredId0_14, transform_hlds__par_loop_control__V_212_212);
          }
#line 894 "par_loop_control.m"
          if (transform_hlds__par_loop_control__succeeded)
#line 894 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CallProcId0_15 == transform_hlds__par_loop_control__V_213_213);
#line 919 "par_loop_control.m"
          if (transform_hlds__par_loop_control__succeeded)
#line 895 "par_loop_control.m"
            {
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__NewPredProcId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 3)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__CallPredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__NewPredProcId_21, (MR_Integer) 0)));
#line 895 "par_loop_control.m"
              MR_Integer transform_hlds__par_loop_control__CallProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__NewPredProcId_21, (MR_Integer) 1)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__LCVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 1)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Args_25;
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 4)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_27;
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__PreserveTailRecursion_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 5)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139;
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141;
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 0)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 2)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 6)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 7)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 8)));
#line 895 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 9)));

#line 898 "par_loop_control.m"
              {
#line 898 "par_loop_control.m"
                transform_hlds__par_loop_control__Args_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_25, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_24));
#line 898 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_25, 1) = ((MR_Box) (transform_hlds__par_loop_control__Args0_16));
#line 898 "par_loop_control.m"
              }
#line 900 "par_loop_control.m"
              {
#line 900 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 900 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__par_loop_control__CallPredId_22));
#line 900 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__CallProcId_23));
#line 900 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Args_25));
#line 900 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Builtin_17));
#line 900 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__MaybeUnify_18));
#line 900 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__par_loop_control__Name_26));
#line 900 "par_loop_control.m"
              }
#line 903 "par_loop_control.m"
              {
#line 903 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_27));
#line 903 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 903 "par_loop_control.m"
              }
#line 905 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__IsLastGoal_8 == (MR_Integer) 0);
#line 905 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 906 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__PreserveTailRecursion_28 == (MR_Integer) 0);
#line 911 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 910 "par_loop_control.m"
                {
#line 910 "par_loop_control.m"
                  *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 1;
#line 910 "par_loop_control.m"
                  transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139;
#line 910 "par_loop_control.m"
                }
#line 911 "par_loop_control.m"
              else
#line 912 "par_loop_control.m"
                {
#line 912 "par_loop_control.m"
                  *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 915 "par_loop_control.m"
                  {
#line 915 "par_loop_control.m"
                    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 22, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141);
                  }
#line 912 "par_loop_control.m"
                }
#line 917 "par_loop_control.m"
              {
#line 917 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
              }
#line 918 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 0;
#line 895 "par_loop_control.m"
            }
#line 919 "par_loop_control.m"
          else
#line 920 "par_loop_control.m"
            {
#line 920 "par_loop_control.m"
              *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 921 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 920 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116;
#line 920 "par_loop_control.m"
            }
#line 892 "par_loop_control.m"
        }
#line 923 "par_loop_control.m"
        break;
#line 923 "par_loop_control.m"
      case (MR_Integer) 3:
#line 923 "par_loop_control.m"
#line 923 "par_loop_control.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 923 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 923 "par_loop_control.m"
          case (MR_Integer) 0:
#line 923 "par_loop_control.m"
          case (MR_Integer) 1:
#line 923 "par_loop_control.m"
          case (MR_Integer) 2:
#line 923 "par_loop_control.m"
          case (MR_Integer) 3:
#line 923 "par_loop_control.m"
          case (MR_Integer) 4:
#line 923 "par_loop_control.m"
          case (MR_Integer) 5:
#line 923 "par_loop_control.m"
          case (MR_Integer) 6:
#line 933 "par_loop_control.m"
            {
#line 933 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 933 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 943 "par_loop_control.m"
#line 943 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 943 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 943 "par_loop_control.m"
                case (MR_Integer) 0:
#line 979 "par_loop_control.m"
                  {
#line 979 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 979 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 980 "par_loop_control.m"
                    {
#line 980 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 982 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 979 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 1:
#line 938 "par_loop_control.m"
                  {
#line 939 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 941 "par_loop_control.m"
                    *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 942 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 938 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
                case (MR_Integer) 3:
#line 943 "par_loop_control.m"
#line 943 "par_loop_control.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 943 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 943 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 943 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 938 "par_loop_control.m"
                      {
#line 939 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 941 "par_loop_control.m"
                        *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 942 "par_loop_control.m"
                        *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 938 "par_loop_control.m"
                      }
#line 943 "par_loop_control.m"
                      break;
#line 943 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 944 "par_loop_control.m"
                      {
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_133_133;
#line 944 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_135_135;
#line 945 "par_loop_control.m"
                        MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 945 "par_loop_control.m"
                        {
#line 945 "par_loop_control.m"
                          mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                        }
#line 945 "par_loop_control.m"
                        transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 946 "par_loop_control.m"
                        {
#line 946 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                        }
#line 948 "par_loop_control.m"
                        {
#line 948 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 948 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 948 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 948 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 948 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 948 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 948 "par_loop_control.m"
                        }
#line 948 "par_loop_control.m"
                        {
#line 948 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                        }
#line 952 "par_loop_control.m"
                        {
#line 952 "par_loop_control.m"
                          transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 952 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 952 "par_loop_control.m"
                        }
#line 954 "par_loop_control.m"
                        {
#line 954 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 955 "par_loop_control.m"
                        {
#line 955 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                        }
#line 957 "par_loop_control.m"
                        {
#line 957 "par_loop_control.m"
                          transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 959 "par_loop_control.m"
                        {
#line 959 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 959 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "par_loop_control.m"
                        }
#line 959 "par_loop_control.m"
                        {
#line 959 "par_loop_control.m"
                          transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                        }
#line 960 "par_loop_control.m"
                        {
#line 960 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 960 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 960 "par_loop_control.m"
                        }
#line 944 "par_loop_control.m"
                      }
#line 943 "par_loop_control.m"
                      break;
#line 943 "par_loop_control.m"
                    case (MR_Integer) 3:
#line 962 "par_loop_control.m"
                      {
#line 962 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 962 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 962 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 962 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 962 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 962 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_131_131;

#line 965 "par_loop_control.m"
                        {
#line 965 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 965 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 965 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 965 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 965 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 965 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 965 "par_loop_control.m"
                        }
#line 8237 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 965 "par_loop_control.m"
                        {
#line 965 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                        }
#line 968 "par_loop_control.m"
                        {
#line 968 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 969 "par_loop_control.m"
                        {
#line 969 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 970 "par_loop_control.m"
                        {
#line 970 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 970 "par_loop_control.m"
                        }
#line 962 "par_loop_control.m"
                      }
#line 943 "par_loop_control.m"
                      break;
#line 943 "par_loop_control.m"
                    case (MR_Integer) 4:
#line 972 "par_loop_control.m"
                      {
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases_96;
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 972 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_130_130;

#line 973 "par_loop_control.m"
                        {
#line 973 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 973 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 973 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 973 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 973 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 973 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 973 "par_loop_control.m"
                        }
#line 8305 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 973 "par_loop_control.m"
                        {
#line 973 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                        }
#line 975 "par_loop_control.m"
                        {
#line 975 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 976 "par_loop_control.m"
                        {
#line 976 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 977 "par_loop_control.m"
                        {
#line 977 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 977 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 977 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 977 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 977 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 977 "par_loop_control.m"
                        }
#line 972 "par_loop_control.m"
                      }
#line 943 "par_loop_control.m"
                      break;
#line 943 "par_loop_control.m"
                    case (MR_Integer) 5:
#line 984 "par_loop_control.m"
                      {
#line 984 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 984 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 984 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 985 "par_loop_control.m"
                        {
#line 985 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 987 "par_loop_control.m"
                        {
#line 987 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 987 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 987 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 987 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 987 "par_loop_control.m"
                        }
#line 984 "par_loop_control.m"
                      }
#line 943 "par_loop_control.m"
                      break;
#line 943 "par_loop_control.m"
                    case (MR_Integer) 6:
#line 989 "par_loop_control.m"
                      {
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cond_106;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then_109;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else_112;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_122_122;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_123_123;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_124_124;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_126_126;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_127_127;
#line 989 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_128_128;

#line 990 "par_loop_control.m"
                        {
#line 990 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                        }
#line 992 "par_loop_control.m"
                        {
#line 992 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                        }
#line 994 "par_loop_control.m"
                        {
#line 994 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                        }
#line 997 "par_loop_control.m"
                        {
#line 997 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 997 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "par_loop_control.m"
                        }
#line 996 "par_loop_control.m"
                        {
#line 996 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 996 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 996 "par_loop_control.m"
                        }
#line 996 "par_loop_control.m"
                        {
#line 996 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 996 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 996 "par_loop_control.m"
                        }
#line 996 "par_loop_control.m"
                        {
#line 996 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 999 "par_loop_control.m"
                        {
#line 999 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 999 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "par_loop_control.m"
                        }
#line 998 "par_loop_control.m"
                        {
#line 998 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 998 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 998 "par_loop_control.m"
                        }
#line 998 "par_loop_control.m"
                        {
#line 998 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 998 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 998 "par_loop_control.m"
                        }
#line 998 "par_loop_control.m"
                        {
#line 998 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 1000 "par_loop_control.m"
                        {
#line 1000 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 1000 "par_loop_control.m"
                        }
#line 989 "par_loop_control.m"
                      }
#line 943 "par_loop_control.m"
                      break;
#line 943 "par_loop_control.m"
                  }
#line 943 "par_loop_control.m"
                  break;
#line 943 "par_loop_control.m"
              }
#line 1002 "par_loop_control.m"
              {
#line 1002 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1002 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1002 "par_loop_control.m"
              }
#line 1006 "par_loop_control.m"
#line 1006 "par_loop_control.m"
              switch (*transform_hlds__par_loop_control__FixupGoalInfo_11) {
#line 1006 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1006 "par_loop_control.m"
                case (MR_Integer) 1:
#line 1007 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1006 "par_loop_control.m"
                  break;
#line 1006 "par_loop_control.m"
                case (MR_Integer) 0:
#line 1005 "par_loop_control.m"
                  {
#line 1005 "par_loop_control.m"
                    transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1005 "par_loop_control.m"
                    return;
                  }
#line 1006 "par_loop_control.m"
                  break;
#line 1006 "par_loop_control.m"
              }
#line 933 "par_loop_control.m"
            }
#line 923 "par_loop_control.m"
            break;
#line 923 "par_loop_control.m"
          case (MR_Integer) 7:
#line 1010 "par_loop_control.m"
            {
#line 1011 "par_loop_control.m"
              {
#line 1011 "par_loop_control.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_rewrite_recursive_call\'/6", (MR_String) "shorthand");
#line 1011 "par_loop_control.m"
                return;
              }
#line 1010 "par_loop_control.m"
            }
#line 923 "par_loop_control.m"
            break;
#line 923 "par_loop_control.m"
        }
#line 923 "par_loop_control.m"
        break;
#line 923 "par_loop_control.m"
    }
#line 888 "par_loop_control.m"
  }
#line 883 "par_loop_control.m"
}

#line 837 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_1,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__UseParentStack_2,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3,
#line 837 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_4,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5,
#line 837 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6,
#line 837 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7,
#line 837 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8)
#line 837 "par_loop_control.m"
{
#line 841 "par_loop_control.m"
  {
#line 841 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 841 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "par_loop_control.m"
      {
#line 841 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8 = transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7;
#line 841 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6 = transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5;
#line 841 "par_loop_control.m"
      }
#line 841 "par_loop_control.m"
    else
#line 843 "par_loop_control.m"
      {
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_64_64;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjuncts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 1)));
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__LCSVar_24;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__GetFreeSlotGoal_25;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__LCVar_26;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__JoinAndTerminateGoal_27;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0GoalInfo_28;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0Goals_29;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ConjunctGoals_30;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct_33;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalInfo_34;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalExpr_35;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoal_36;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TailGoals_37;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_44_44;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_49_49;
#line 843 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_52_52;
#line 850 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_53_53;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_54_54;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_55_55;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_56_56;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_57_57;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_58_58;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_59_59;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_60_60;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_61_61;
#line 863 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_62_62;

#line 845 "par_loop_control.m"
        {
#line 845 "par_loop_control.m"
          transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(transform_hlds__par_loop_control__Info_1, &transform_hlds__par_loop_control__LCSVar_24, &transform_hlds__par_loop_control__GetFreeSlotGoal_25, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43);
        }
#line 850 "par_loop_control.m"
        transform_hlds__par_loop_control__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Conjunct0_19, (MR_Integer) 0)));
#line 850 "par_loop_control.m"
        transform_hlds__par_loop_control__Conjunct0GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Conjunct0_19, (MR_Integer) 1)));
#line 851 "par_loop_control.m"
        {
#line 851 "par_loop_control.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__par_loop_control__Conjunct0_19, &transform_hlds__par_loop_control__Conjunct0Goals_29);
        }
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 0)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__LCVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 1)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 2)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 3)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 4)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 5)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 6)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 7)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 8)));
#line 863 "par_loop_control.m"
        transform_hlds__par_loop_control__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 9)));
#line 849 "par_loop_control.m"
        {
#line 849 "par_loop_control.m"
          transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(transform_hlds__par_loop_control__Info_1, transform_hlds__par_loop_control__LCVar_26, transform_hlds__par_loop_control__LCSVar_24, &transform_hlds__par_loop_control__JoinAndTerminateGoal_27);
        }
#line 852 "par_loop_control.m"
        {
#line 852 "par_loop_control.m"
          transform_hlds__par_loop_control__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_44_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__JoinAndTerminateGoal_27));
#line 852 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "par_loop_control.m"
        }
#line 852 "par_loop_control.m"
        {
#line 852 "par_loop_control.m"
          transform_hlds__par_loop_control__ConjunctGoals_30 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjunct0Goals_29, transform_hlds__par_loop_control__V_44_44);
        }
#line 854 "par_loop_control.m"
        {
#line 854 "par_loop_control.m"
          transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__Conjunct0GoalInfo_28);
        }
#line 8758 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 855 "par_loop_control.m"
        {
#line 855 "par_loop_control.m"
          parse_tree__set_of_var__insert_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_64_64, transform_hlds__par_loop_control__LCSVar_24, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47);
        }
#line 856 "par_loop_control.m"
        {
#line 856 "par_loop_control.m"
          parse_tree__set_of_var__insert_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_64_64, transform_hlds__par_loop_control__LCVar_26, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48);
        }
#line 857 "par_loop_control.m"
        {
#line 857 "par_loop_control.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48, transform_hlds__par_loop_control__Conjunct0GoalInfo_28, &transform_hlds__par_loop_control__ScopeGoalInfo_34);
        }
#line 860 "par_loop_control.m"
        {
#line 860 "par_loop_control.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__par_loop_control__ConjunctGoals_30, transform_hlds__par_loop_control__ScopeGoalInfo_34, &transform_hlds__par_loop_control__Conjunct_33);
        }
#line 866 "par_loop_control.m"
        {
#line 866 "par_loop_control.m"
          transform_hlds__par_loop_control__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_26));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 2) = ((MR_Box) (transform_hlds__par_loop_control__LCSVar_24));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 3) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStack_2));
#line 866 "par_loop_control.m"
        }
#line 865 "par_loop_control.m"
        {
#line 865 "par_loop_control.m"
          transform_hlds__par_loop_control__ScopeGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 865 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 865 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_49_49));
#line 865 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjunct_33));
#line 865 "par_loop_control.m"
        }
#line 867 "par_loop_control.m"
        {
#line 867 "par_loop_control.m"
          transform_hlds__par_loop_control__ScopeGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 867 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ScopeGoal_36, 0) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalExpr_35));
#line 867 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ScopeGoal_36, 1) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalInfo_34));
#line 867 "par_loop_control.m"
        }
#line 869 "par_loop_control.m"
        {
#line 869 "par_loop_control.m"
          transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(transform_hlds__par_loop_control__Info_1, transform_hlds__par_loop_control__UseParentStack_2, transform_hlds__par_loop_control__Conjuncts0_20, &transform_hlds__par_loop_control__TailGoals_37, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8);
        }
#line 871 "par_loop_control.m"
        {
#line 871 "par_loop_control.m"
          transform_hlds__par_loop_control__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_52_52, 0) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoal_36));
#line 871 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_52_52, 1) = ((MR_Box) (transform_hlds__par_loop_control__TailGoals_37));
#line 871 "par_loop_control.m"
        }
#line 871 "par_loop_control.m"
        {
#line 871 "par_loop_control.m"
          MR_Word base;
#line 871 "par_loop_control.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__4_4 = base;
#line 871 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GetFreeSlotGoal_25));
#line 871 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_52_52));
#line 871 "par_loop_control.m"
        }
#line 843 "par_loop_control.m"
      }
#line 841 "par_loop_control.m"
  }
#line 837 "par_loop_control.m"
}

#line 812 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjuncts0_11,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_12,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalInfo_13,
#line 812 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_14,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27,
#line 812 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28,
#line 812 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29,
#line 812 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30)
#line 812 "par_loop_control.m"
{
#line 817 "par_loop_control.m"
  {
#line 817 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__EarlierConjuncts0_17;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjunct0_18;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjunct_19;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__UseParentStack_20;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjGoals_22;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__EarlierConjuncts_23;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Conjuncts_24;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Goal0_25;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_42;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_43;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47;
#line 817 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49;
#line 818 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_LastConjunct0_18;
#line 820 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21;
#line 832 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_35_35;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_50_50;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_51_51;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_52_52;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_53_53;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_54_54;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_55_55;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_56_56;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_57_57;
#line 1316 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;

#line 818 "par_loop_control.m"
    {
#line 818 "par_loop_control.m"
      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_36_36, transform_hlds__par_loop_control__Conjuncts0_11, &transform_hlds__par_loop_control__EarlierConjuncts0_17, &transform_hlds__par_loop_control__conv0_LastConjunct0_18);
    }
#line 818 "par_loop_control.m"
    transform_hlds__par_loop_control__LastConjunct0_18 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConjunct0_18);
#line 820 "par_loop_control.m"
    {
#line 820 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_12, transform_hlds__par_loop_control__LastConjunct0_18, &transform_hlds__par_loop_control__LastConjunct_19, &transform_hlds__par_loop_control__UseParentStack_20, &transform_hlds__par_loop_control__V_21_21);
    }
#line 822 "par_loop_control.m"
    {
#line 822 "par_loop_control.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__par_loop_control__LastConjunct_19, &transform_hlds__par_loop_control__LastConjGoals_22);
    }
#line 825 "par_loop_control.m"
    {
#line 825 "par_loop_control.m"
      transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__UseParentStack_20, transform_hlds__par_loop_control__EarlierConjuncts0_17, &transform_hlds__par_loop_control__EarlierConjuncts_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30);
    }
#line 827 "par_loop_control.m"
    {
#line 827 "par_loop_control.m"
      transform_hlds__par_loop_control__Conjuncts_24 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_36_36, transform_hlds__par_loop_control__EarlierConjuncts_23, transform_hlds__par_loop_control__LastConjGoals_22);
    }
#line 831 "par_loop_control.m"
    {
#line 831 "par_loop_control.m"
      hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__par_loop_control__Conjuncts_24, (MR_Integer) 0, &transform_hlds__par_loop_control__Goal0_25);
    }
#line 832 "par_loop_control.m"
    transform_hlds__par_loop_control__GoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_25, (MR_Integer) 0)));
#line 832 "par_loop_control.m"
    transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_25, (MR_Integer) 1)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 0)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 1)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 2)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 3)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 4)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 5)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 6)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 7)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 8)));
#line 1316 "par_loop_control.m"
    transform_hlds__par_loop_control__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 9)));
#line 1317 "par_loop_control.m"
    {
#line 1317 "par_loop_control.m"
      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__GoalInfo_13);
    }
#line 1318 "par_loop_control.m"
    {
#line 1318 "par_loop_control.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__LCVar_43, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46);
    }
#line 1319 "par_loop_control.m"
    {
#line 1319 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46, transform_hlds__par_loop_control__GoalInfo_13, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47);
    }
#line 1321 "par_loop_control.m"
    {
#line 1321 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49);
    }
#line 1323 "par_loop_control.m"
    {
#line 1323 "par_loop_control.m"
      MR_Word base;
#line 1323 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_14 = base;
#line 1323 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_42));
#line 1323 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49));
#line 1323 "par_loop_control.m"
    }
#line 817 "par_loop_control.m"
  }
#line 812 "par_loop_control.m"
}

#line 711 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_11,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalPath0_12,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48,
#line 711 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50,
#line 711 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51,
#line 711 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52,
#line 711 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53)
#line 711 "par_loop_control.m"
{
#line 717 "par_loop_control.m"
  {
#line 717 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 717 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
#line 717 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
#line 803 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalPath_18;
#line 803 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Step_19;

#line 719 "par_loop_control.m"
    {
#line 719 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mdbcomp__goal_path__goal_path_remove_first_3_p_0(transform_hlds__par_loop_control__GoalPath0_12, &transform_hlds__par_loop_control__GoalPath_18, &transform_hlds__par_loop_control__Step_19);
    }
#line 803 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 721 "par_loop_control.m"
      {
#line 721 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
#line 721 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__ErrorString_20;
#line 721 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__GoalExpr_27;
#line 721 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_57_57;
#line 721 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89;
#line 721 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_122_122;
#line 721 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_128_128;
#line 721 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_129_129;

#line 720 "par_loop_control.m"
        {
#line 720 "par_loop_control.m"
          transform_hlds__par_loop_control__V_57_57 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
        }
#line 9096 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__V_128_128 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[0];
#line 720 "par_loop_control.m"
        {
#line 720 "par_loop_control.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_57_57, &transform_hlds__par_loop_control__V_122_122);
        }
#line 720 "par_loop_control.m"
        {
#line 720 "par_loop_control.m"
          transform_hlds__par_loop_control__V_129_129 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_122_122, (MR_String) "\"");
        }
#line 720 "par_loop_control.m"
        {
#line 720 "par_loop_control.m"
          transform_hlds__par_loop_control__ErrorString_20 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t follow goal path step: \"", transform_hlds__par_loop_control__V_129_129);
        }
#line 746 "par_loop_control.m"
#line 746 "par_loop_control.m"
        switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Step_19)) {
#line 746 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 746 "par_loop_control.m"
          case (MR_Integer) 0:
#line 746 "par_loop_control.m"
#line 746 "par_loop_control.m"
            switch (MR_unmkbody(transform_hlds__par_loop_control__Step_19)) {
#line 746 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 746 "par_loop_control.m"
              case (MR_Integer) 0:
#line 746 "par_loop_control.m"
              case (MR_Integer) 3:
#line 746 "par_loop_control.m"
              case (MR_Integer) 4:
#line 746 "par_loop_control.m"
              case (MR_Integer) 5:
#line 746 "par_loop_control.m"
              case (MR_Integer) 6:
#line 796 "par_loop_control.m"
                {
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_61_61;
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_65_65;
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_132_132;
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_139_139;

#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
                  }
#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_65_65, &transform_hlds__par_loop_control__V_132_132);
                  }
#line 798 "par_loop_control.m"
                  {
#line 798 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_139_139 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_132_132, (MR_String) "\"");
                  }
#line 798 "par_loop_control.m"
                  {
#line 798 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_139_139);
                  }
#line 797 "par_loop_control.m"
                  {
#line 797 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 797 "par_loop_control.m"
                    return;
                  }
#line 796 "par_loop_control.m"
                }
#line 746 "par_loop_control.m"
                break;
#line 746 "par_loop_control.m"
              case (MR_Integer) 1:
#line 767 "par_loop_control.m"
                {
#line 767 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Vars_36;
#line 767 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Cond_37;
#line 767 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Then0_38;
#line 767 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Else_39;

#line 763 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 763 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 763 "par_loop_control.m"
                    {
#line 763 "par_loop_control.m"
                      transform_hlds__par_loop_control__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 763 "par_loop_control.m"
                      transform_hlds__par_loop_control__Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 763 "par_loop_control.m"
                      transform_hlds__par_loop_control__Then0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 763 "par_loop_control.m"
                      transform_hlds__par_loop_control__Else_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 765 "par_loop_control.m"
                      {
#line 765 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then_40;

#line 764 "par_loop_control.m"
                        {
#line 764 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Then0_38, &transform_hlds__par_loop_control__Then_40, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 766 "par_loop_control.m"
                        {
#line 766 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 766 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 766 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_36));
#line 766 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_37));
#line 766 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_40));
#line 766 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_39));
#line 766 "par_loop_control.m"
                        }
#line 765 "par_loop_control.m"
                      }
#line 763 "par_loop_control.m"
                    }
#line 763 "par_loop_control.m"
                  else
#line 768 "par_loop_control.m"
                    {
#line 768 "par_loop_control.m"
                      {
#line 768 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 768 "par_loop_control.m"
                        return;
                      }
#line 768 "par_loop_control.m"
                    }
#line 767 "par_loop_control.m"
                }
#line 746 "par_loop_control.m"
                break;
#line 746 "par_loop_control.m"
              case (MR_Integer) 2:
#line 776 "par_loop_control.m"
                {
#line 776 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Else0_41;
#line 776 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Vars_100;
#line 776 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Cond_101;
#line 776 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Then_103;

#line 772 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 772 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 772 "par_loop_control.m"
                    {
#line 772 "par_loop_control.m"
                      transform_hlds__par_loop_control__Vars_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 772 "par_loop_control.m"
                      transform_hlds__par_loop_control__Cond_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 772 "par_loop_control.m"
                      transform_hlds__par_loop_control__Then_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 772 "par_loop_control.m"
                      transform_hlds__par_loop_control__Else0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 774 "par_loop_control.m"
                      {
#line 774 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else_99;

#line 773 "par_loop_control.m"
                        {
#line 773 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Else0_41, &transform_hlds__par_loop_control__Else_99, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 775 "par_loop_control.m"
                        {
#line 775 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 775 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 775 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_100));
#line 775 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_101));
#line 775 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_103));
#line 775 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_99));
#line 775 "par_loop_control.m"
                        }
#line 774 "par_loop_control.m"
                      }
#line 772 "par_loop_control.m"
                    }
#line 772 "par_loop_control.m"
                  else
#line 777 "par_loop_control.m"
                    {
#line 777 "par_loop_control.m"
                      {
#line 777 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 777 "par_loop_control.m"
                        return;
                      }
#line 777 "par_loop_control.m"
                    }
#line 776 "par_loop_control.m"
                }
#line 746 "par_loop_control.m"
                break;
#line 746 "par_loop_control.m"
            }
#line 746 "par_loop_control.m"
            break;
#line 746 "par_loop_control.m"
          case (MR_Integer) 1:
#line 723 "par_loop_control.m"
            {
#line 723 "par_loop_control.m"
              MR_Integer transform_hlds__par_loop_control__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)));
#line 743 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs0_22;
#line 743 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conj0_23;
#line 725 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__TypeCtorInfo_115_115;
#line 725 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_83_83;
#line 726 "par_loop_control.m"
              MR_Box transform_hlds__par_loop_control__conv0_Conj0_23;

#line 725 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 725 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 725 "par_loop_control.m"
                {
#line 725 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 725 "par_loop_control.m"
                  transform_hlds__par_loop_control__Conjs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 725 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_83_83 == (MR_Integer) 0);
#line 725 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 725 "par_loop_control.m"
                    {
#line 9362 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__TypeCtorInfo_115_115 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 726 "par_loop_control.m"
                      {
#line 726 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = mercury__list__index1_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_115_115, transform_hlds__par_loop_control__Conjs0_22, transform_hlds__par_loop_control__N_21, &transform_hlds__par_loop_control__conv0_Conj0_23);
                      }
#line 726 "par_loop_control.m"
                      if (transform_hlds__par_loop_control__succeeded)
#line 726 "par_loop_control.m"
                        {
#line 726 "par_loop_control.m"
                          transform_hlds__par_loop_control__Conj0_23 = ((MR_Word) transform_hlds__par_loop_control__conv0_Conj0_23);
#line 726 "par_loop_control.m"
                          transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 726 "par_loop_control.m"
                        }
#line 725 "par_loop_control.m"
                    }
#line 725 "par_loop_control.m"
                }
#line 743 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 738 "par_loop_control.m"
                {
#line 738 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__IsLastGoalConj_24;
#line 738 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Conj_25;
#line 738 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Conjs_26;

#line 735 "par_loop_control.m"
#line 735 "par_loop_control.m"
                  switch (transform_hlds__par_loop_control__IsLastGoal_11) {
#line 735 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 735 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 732 "par_loop_control.m"
                      {
#line 730 "par_loop_control.m"
                        MR_Integer transform_hlds__par_loop_control__V_120_120;

#line 730 "par_loop_control.m"
                        {
#line 730 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_120_120 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_22);
                        }
#line 730 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__N_21 == transform_hlds__par_loop_control__V_120_120);
#line 732 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 731 "par_loop_control.m"
                          transform_hlds__par_loop_control__IsLastGoalConj_24 = (MR_Integer) 0;
#line 732 "par_loop_control.m"
                        else
#line 733 "par_loop_control.m"
                          transform_hlds__par_loop_control__IsLastGoalConj_24 = (MR_Integer) 1;
#line 732 "par_loop_control.m"
                      }
#line 735 "par_loop_control.m"
                      break;
#line 735 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 737 "par_loop_control.m"
                      transform_hlds__par_loop_control__IsLastGoalConj_24 = transform_hlds__par_loop_control__IsLastGoal_11;
#line 735 "par_loop_control.m"
                      break;
#line 735 "par_loop_control.m"
                  }
#line 739 "par_loop_control.m"
                  {
#line 739 "par_loop_control.m"
                    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoalConj_24, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Conj0_23, &transform_hlds__par_loop_control__Conj_25, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                  }
#line 741 "par_loop_control.m"
                  {
#line 741 "par_loop_control.m"
                    mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_22, transform_hlds__par_loop_control__N_21, ((MR_Box) (transform_hlds__par_loop_control__Conj_25)), &transform_hlds__par_loop_control__Conjs_26);
                  }
#line 742 "par_loop_control.m"
                  {
#line 742 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 742 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 742 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 742 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_26));
#line 742 "par_loop_control.m"
                  }
#line 738 "par_loop_control.m"
                }
#line 743 "par_loop_control.m"
              else
#line 744 "par_loop_control.m"
                {
#line 744 "par_loop_control.m"
                  {
#line 744 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 744 "par_loop_control.m"
                    return;
                  }
#line 744 "par_loop_control.m"
                }
#line 723 "par_loop_control.m"
            }
#line 746 "par_loop_control.m"
            break;
#line 746 "par_loop_control.m"
          case (MR_Integer) 2:
#line 796 "par_loop_control.m"
            {
#line 796 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_61_61;
#line 796 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_65_65;
#line 796 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_132_132;
#line 796 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_139_139;

#line 799 "par_loop_control.m"
              {
#line 799 "par_loop_control.m"
                transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
              }
#line 799 "par_loop_control.m"
              {
#line 799 "par_loop_control.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_65_65, &transform_hlds__par_loop_control__V_132_132);
              }
#line 798 "par_loop_control.m"
              {
#line 798 "par_loop_control.m"
                transform_hlds__par_loop_control__V_139_139 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_132_132, (MR_String) "\"");
              }
#line 798 "par_loop_control.m"
              {
#line 798 "par_loop_control.m"
                transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_139_139);
              }
#line 797 "par_loop_control.m"
              {
#line 797 "par_loop_control.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 797 "par_loop_control.m"
                return;
              }
#line 796 "par_loop_control.m"
            }
#line 746 "par_loop_control.m"
            break;
#line 746 "par_loop_control.m"
          case (MR_Integer) 3:
#line 746 "par_loop_control.m"
#line 746 "par_loop_control.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)))) {
#line 746 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 746 "par_loop_control.m"
              case (MR_Integer) 0:
#line 747 "par_loop_control.m"
                {
#line 747 "par_loop_control.m"
                  MR_Integer transform_hlds__par_loop_control__N_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 1)));
#line 747 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 2)));
#line 758 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Var_29;
#line 758 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__CanFail_30;
#line 758 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Cases0_31;
#line 758 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Case0_32;
#line 749 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__TypeCtorInfo_118_118;
#line 750 "par_loop_control.m"
                  MR_Box transform_hlds__par_loop_control__conv1_Case0_32;

#line 749 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 749 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 749 "par_loop_control.m"
                    {
#line 749 "par_loop_control.m"
                      transform_hlds__par_loop_control__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 749 "par_loop_control.m"
                      transform_hlds__par_loop_control__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 749 "par_loop_control.m"
                      transform_hlds__par_loop_control__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 9558 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 750 "par_loop_control.m"
                      {
#line 750 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = mercury__list__index1_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_118_118, transform_hlds__par_loop_control__Cases0_31, transform_hlds__par_loop_control__N_98, &transform_hlds__par_loop_control__conv1_Case0_32);
                      }
#line 750 "par_loop_control.m"
                      if (transform_hlds__par_loop_control__succeeded)
#line 750 "par_loop_control.m"
                        {
#line 750 "par_loop_control.m"
                          transform_hlds__par_loop_control__Case0_32 = ((MR_Word) transform_hlds__par_loop_control__conv1_Case0_32);
#line 750 "par_loop_control.m"
                          transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 750 "par_loop_control.m"
                        }
#line 749 "par_loop_control.m"
                    }
#line 758 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 752 "par_loop_control.m"
                    {
#line 752 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Goal_13;
#line 752 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 2)));
#line 752 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Case_34;
#line 752 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Cases_35;
#line 752 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 0)));
#line 752 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 1)));
#line 755 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_111_111;
#line 755 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_112_112;
#line 755 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_113_113;

#line 753 "par_loop_control.m"
                      {
#line 753 "par_loop_control.m"
                        transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Goal0_33, &transform_hlds__par_loop_control__Goal_13, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                      }
#line 755 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 0)));
#line 755 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 1)));
#line 755 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 2)));
#line 755 "par_loop_control.m"
                      {
#line 755 "par_loop_control.m"
                        transform_hlds__par_loop_control__Case_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 755 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_111_111));
#line 755 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_112_112));
#line 755 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 2) = ((MR_Box) (transform_hlds__par_loop_control__Goal_13));
#line 755 "par_loop_control.m"
                      }
#line 756 "par_loop_control.m"
                      {
#line 756 "par_loop_control.m"
                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__par_loop_control__Cases0_31, transform_hlds__par_loop_control__N_98, ((MR_Box) (transform_hlds__par_loop_control__Case_34)), &transform_hlds__par_loop_control__Cases_35);
                      }
#line 757 "par_loop_control.m"
                      {
#line 757 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 757 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 757 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_29));
#line 757 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_30));
#line 757 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_35));
#line 757 "par_loop_control.m"
                      }
#line 752 "par_loop_control.m"
                    }
#line 758 "par_loop_control.m"
                  else
#line 759 "par_loop_control.m"
                    {
#line 759 "par_loop_control.m"
                      {
#line 759 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 759 "par_loop_control.m"
                        return;
                      }
#line 759 "par_loop_control.m"
                    }
#line 747 "par_loop_control.m"
                }
#line 746 "par_loop_control.m"
                break;
#line 746 "par_loop_control.m"
              case (MR_Integer) 1:
#line 785 "par_loop_control.m"
                {
#line 785 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Reason_43;
#line 785 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__SubGoal0_44;

#line 781 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 781 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 781 "par_loop_control.m"
                    {
#line 781 "par_loop_control.m"
                      transform_hlds__par_loop_control__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 781 "par_loop_control.m"
                      transform_hlds__par_loop_control__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 783 "par_loop_control.m"
                      {
#line 783 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_45;

#line 782 "par_loop_control.m"
                        {
#line 782 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__SubGoal0_44, &transform_hlds__par_loop_control__SubGoal_45, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 784 "par_loop_control.m"
                        {
#line 784 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 784 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 784 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_43));
#line 784 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_45));
#line 784 "par_loop_control.m"
                        }
#line 783 "par_loop_control.m"
                      }
#line 781 "par_loop_control.m"
                    }
#line 781 "par_loop_control.m"
                  else
#line 786 "par_loop_control.m"
                    {
#line 786 "par_loop_control.m"
                      {
#line 786 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 786 "par_loop_control.m"
                        return;
                      }
#line 786 "par_loop_control.m"
                    }
#line 785 "par_loop_control.m"
                }
#line 746 "par_loop_control.m"
                break;
#line 746 "par_loop_control.m"
              case (MR_Integer) 2:
#line 796 "par_loop_control.m"
                {
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_61_61;
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_65_65;
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_132_132;
#line 796 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_139_139;

#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
                  }
#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_65_65, &transform_hlds__par_loop_control__V_132_132);
                  }
#line 798 "par_loop_control.m"
                  {
#line 798 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_139_139 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_132_132, (MR_String) "\"");
                  }
#line 798 "par_loop_control.m"
                  {
#line 798 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_139_139);
                  }
#line 797 "par_loop_control.m"
                  {
#line 797 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 797 "par_loop_control.m"
                    return;
                  }
#line 796 "par_loop_control.m"
                }
#line 746 "par_loop_control.m"
                break;
#line 746 "par_loop_control.m"
            }
#line 746 "par_loop_control.m"
            break;
#line 746 "par_loop_control.m"
        }
#line 801 "par_loop_control.m"
        {
#line 801 "par_loop_control.m"
          transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_27));
#line 801 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_17));
#line 801 "par_loop_control.m"
        }
#line 802 "par_loop_control.m"
        {
#line 802 "par_loop_control.m"
          transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49);
#line 802 "par_loop_control.m"
          return;
        }
#line 721 "par_loop_control.m"
      }
#line 803 "par_loop_control.m"
    else
#line 807 "par_loop_control.m"
      {
#line 807 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs_108;
#line 804 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_91_91;

#line 804 "par_loop_control.m"
        transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 804 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 804 "par_loop_control.m"
          {
#line 804 "par_loop_control.m"
            transform_hlds__par_loop_control__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 804 "par_loop_control.m"
            transform_hlds__par_loop_control__Conjs_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 804 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_91_91 == (MR_Integer) 1);
#line 804 "par_loop_control.m"
          }
#line 807 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 805 "par_loop_control.m"
          {
#line 805 "par_loop_control.m"
            transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__Conjs_108, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalInfo_17, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
#line 805 "par_loop_control.m"
            return;
          }
#line 807 "par_loop_control.m"
        else
#line 808 "par_loop_control.m"
          {
#line 808 "par_loop_control.m"
            {
#line 808 "par_loop_control.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", (MR_String) "expected parallel conjunction");
#line 808 "par_loop_control.m"
              return;
            }
#line 808 "par_loop_control.m"
          }
#line 807 "par_loop_control.m"
      }
#line 717 "par_loop_control.m"
  }
#line 711 "par_loop_control.m"
}

#line 707 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 707 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 707 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_6,
#line 707 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_7)
#line 707 "par_loop_control.m"
{
#line 707 "par_loop_control.m"
  {
#line 707 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 707 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49;
#line 707 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51;
#line 707 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53;

#line 707 "par_loop_control.m"
    {
#line 707 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_4), &transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_6), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53);
    }
#line 707 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49));
#line 707 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_5 = ((MR_Box) (transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51));
#line 707 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_7 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53));
#line 707 "par_loop_control.m"
  }
#line 707 "par_loop_control.m"
}

#line 706 "par_loop_control.m"
static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
#line 706 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 706 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1)
#line 706 "par_loop_control.m"
{
#line 706 "par_loop_control.m"
  {
#line 706 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__wrapper_arg_2;
#line 706 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 706 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__3_3;

#line 706 "par_loop_control.m"
    {
#line 706 "par_loop_control.m"
      transform_hlds__par_loop_control__conv0_HeadVar__3_3 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1));
    }
#line 706 "par_loop_control.m"
    transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__3_3));
#line 706 "par_loop_control.m"
    return transform_hlds__par_loop_control__wrapper_arg_2;
#line 706 "par_loop_control.m"
  }
#line 706 "par_loop_control.m"
}

#line 700 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalIds_11,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17,
#line 700 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 700 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 700 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 700 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22)
#line 700 "par_loop_control.m"
{
#line 705 "par_loop_control.m"
  {
#line 705 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalPaths_16;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23;
#line 705 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24;
#line 707 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18;
#line 707 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20;
#line 707 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22;

#line 706 "par_loop_control.m"
    {
#line 706 "par_loop_control.m"
      transform_hlds__par_loop_control__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 706 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
#line 706 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1));
#line 706 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 706 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 3) = ((MR_Box) (transform_hlds__par_loop_control__ContainingGoalMap_12));
#line 706 "par_loop_control.m"
    }
#line 706 "par_loop_control.m"
    {
#line 706 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalPaths_16 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, transform_hlds__par_loop_control__TypeCtorInfo_30_30, transform_hlds__par_loop_control__V_23_23, transform_hlds__par_loop_control__GoalIds_11);
    }
#line 707 "par_loop_control.m"
    {
#line 707 "par_loop_control.m"
      transform_hlds__par_loop_control__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[0]));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_10));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 4) = ((MR_Box) ((MR_Integer) 0));
#line 707 "par_loop_control.m"
    }
#line 707 "par_loop_control.m"
    {
#line 707 "par_loop_control.m"
      mercury__list__foldl3_8_p_0(transform_hlds__par_loop_control__TypeCtorInfo_30_30, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__par_loop_control__V_24_24, transform_hlds__par_loop_control__GoalPaths_16, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17)), &transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19)), &transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21)), &transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22);
    }
#line 707 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18 = ((MR_Word) transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18);
#line 707 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20 = ((MR_Word) transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20);
#line 707 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22 = ((MR_Word) transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22);
#line 705 "par_loop_control.m"
  }
#line 700 "par_loop_control.m"
}

#line 659 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
#line 659 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 659 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PreserveTailRecursion_4)
#line 659 "par_loop_control.m"
{
#line 662 "par_loop_control.m"
  {
#line 662 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 662 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Globals_5;
#line 662 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PreserveTailRecursionBool_6;

#line 663 "par_loop_control.m"
    {
#line 663 "par_loop_control.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__par_loop_control__ModuleInfo_3, &transform_hlds__par_loop_control__Globals_5);
    }
#line 664 "par_loop_control.m"
    {
#line 664 "par_loop_control.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__par_loop_control__Globals_5, (MR_Integer) 678, &transform_hlds__par_loop_control__PreserveTailRecursionBool_6);
    }
#line 669 "par_loop_control.m"
#line 669 "par_loop_control.m"
    switch (transform_hlds__par_loop_control__PreserveTailRecursionBool_6) {
#line 669 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 669 "par_loop_control.m"
      case (MR_Integer) 0:
#line 671 "par_loop_control.m"
        *transform_hlds__par_loop_control__PreserveTailRecursion_4 = (MR_Integer) 1;
#line 669 "par_loop_control.m"
        break;
#line 669 "par_loop_control.m"
      case (MR_Integer) 1:
#line 668 "par_loop_control.m"
        *transform_hlds__par_loop_control__PreserveTailRecursion_4 = (MR_Integer) 0;
#line 669 "par_loop_control.m"
        break;
#line 669 "par_loop_control.m"
    }
#line 662 "par_loop_control.m"
  }
#line 659 "par_loop_control.m"
}

#line 560 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_9,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldPredProcId_10,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldProcInfo_11,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 560 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredProcId_13,
#line 560 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredSym_14,
#line 560 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55,
#line 560 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56)
#line 560 "par_loop_control.m"
{
#line 565 "par_loop_control.m"
  {
#line 565 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_102_102;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_103_103;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldPredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OldPredProcId_10, (MR_Integer) 0)));
#line 565 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__OldProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OldPredProcId_10, (MR_Integer) 1)));
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldPredInfo_18;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ModuleName_19;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredOrFunc_20;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredSym0_21;
#line 565 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__OldProcInt_22;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Context_23;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldOrigin_24;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Origin_25;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Markers_26;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeVarSet_27;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ExistQVars_28;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ClassConstraints_29;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgTypes0_30;
#line 565 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_35;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_37;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgModes0_38;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars0_39;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_40;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PreserveTailRecursion_41;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__WaitFreeSlotProc_42;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__JoinAndTerminateProc_43;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Info_44;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars_46;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgTypes_47;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgModes_50;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstVarSet_51;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarMaps_52;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_53;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ProcInfo_54;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;
#line 565 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_59_59;
#line 565 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_61_61;
#line 565 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_63_63;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_71_71;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_72_72;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_82_82;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_84_84;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_85_85;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_90_90;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_97_97;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98;
#line 565 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_99_99;
#line 637 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_45_45;

#line 567 "par_loop_control.m"
    {
#line 567 "par_loop_control.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, transform_hlds__par_loop_control__OldPredId_16, &transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 570 "par_loop_control.m"
    {
#line 570 "par_loop_control.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__ModuleName_19);
    }
#line 571 "par_loop_control.m"
    {
#line 571 "par_loop_control.m"
      transform_hlds__par_loop_control__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 572 "par_loop_control.m"
    {
#line 572 "par_loop_control.m"
      transform_hlds__par_loop_control__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_58_58, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredOrFunc_20));
#line 572 "par_loop_control.m"
    }
#line 573 "par_loop_control.m"
    {
#line 573 "par_loop_control.m"
      transform_hlds__par_loop_control__V_59_59 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 572 "par_loop_control.m"
    {
#line 572 "par_loop_control.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__par_loop_control__ModuleName_19, (MR_String) "LoopControl", transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__V_59_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredSym0_21);
    }
#line 580 "par_loop_control.m"
    {
#line 580 "par_loop_control.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__par_loop_control__OldProcId_17, &transform_hlds__par_loop_control__OldProcInt_22);
    }
#line 581 "par_loop_control.m"
    {
#line 581 "par_loop_control.m"
      transform_hlds__par_loop_control__V_63_63 = mercury__string__int_to_string_1_f_0(transform_hlds__par_loop_control__OldProcInt_22);
    }
#line 581 "par_loop_control.m"
    {
#line 581 "par_loop_control.m"
      transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__par_loop_control__V_63_63);
    }
#line 581 "par_loop_control.m"
    {
#line 581 "par_loop_control.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__par_loop_control__PredSym0_21, transform_hlds__par_loop_control__V_61_61, transform_hlds__par_loop_control__PredSym_14);
    }
#line 582 "par_loop_control.m"
    {
#line 582 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__Context_23);
    }
#line 583 "par_loop_control.m"
    {
#line 583 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__OldOrigin_24);
    }
#line 584 "par_loop_control.m"
    {
#line 584 "par_loop_control.m"
      transform_hlds__par_loop_control__Origin_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 584 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 584 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 1) = ((MR_Box) (transform_hlds__par_loop_control__OldOrigin_24));
#line 584 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 2) = ((MR_Box) (transform_hlds__par_loop_control__OldPredId_16));
#line 584 "par_loop_control.m"
    }
#line 587 "par_loop_control.m"
    {
#line 587 "par_loop_control.m"
      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65);
    }
#line 588 "par_loop_control.m"
    {
#line 588 "par_loop_control.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 12, transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65, &transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67);
    }
#line 589 "par_loop_control.m"
    {
#line 589 "par_loop_control.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67, &transform_hlds__par_loop_control__Markers_26);
    }
#line 592 "par_loop_control.m"
    {
#line 592 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__TypeVarSet_27);
    }
#line 593 "par_loop_control.m"
    {
#line 593 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ExistQVars_28);
    }
#line 594 "par_loop_control.m"
    {
#line 594 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ClassConstraints_29);
    }
#line 595 "par_loop_control.m"
    {
#line 595 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ArgTypes0_30);
    }
#line 602 "par_loop_control.m"
    {
#line 602 "par_loop_control.m"
      transform_hlds__par_loop_control__V_71_71 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0);
    }
#line 10334 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_102_102 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 10336 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_103_103 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 602 "par_loop_control.m"
    {
#line 602 "par_loop_control.m"
      transform_hlds__par_loop_control__V_72_72 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_102_102, transform_hlds__par_loop_control__TypeCtorInfo_103_103);
    }
#line 600 "par_loop_control.m"
    {
#line 600 "par_loop_control.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__par_loop_control__ModuleName_19, *transform_hlds__par_loop_control__PredSym_14, transform_hlds__par_loop_control__PredOrFunc_20, transform_hlds__par_loop_control__Context_23, transform_hlds__par_loop_control__Origin_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__par_loop_control__Markers_26, transform_hlds__par_loop_control__ArgTypes0_30, transform_hlds__par_loop_control__TypeVarSet_27, transform_hlds__par_loop_control__ExistQVars_28, transform_hlds__par_loop_control__ClassConstraints_29, transform_hlds__par_loop_control__V_71_71, transform_hlds__par_loop_control__V_72_72, transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__ProcId_35, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73);
    }
#line 607 "par_loop_control.m"
    {
#line 607 "par_loop_control.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74);
    }
#line 608 "par_loop_control.m"
    {
#line 608 "par_loop_control.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__par_loop_control__PredId_37, transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74, &transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75);
    }
#line 609 "par_loop_control.m"
    {
#line 609 "par_loop_control.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 611 "par_loop_control.m"
    {
#line 611 "par_loop_control.m"
      MR_Word base;
#line 611 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "par_loop_control.m"
      *transform_hlds__par_loop_control__PredProcId_13 = base;
#line 611 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_37));
#line 611 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_35));
#line 611 "par_loop_control.m"
    }
#line 616 "par_loop_control.m"
    {
#line 616 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__ArgModes0_38);
    }
#line 617 "par_loop_control.m"
    {
#line 617 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__HeadVars0_39);
    }
#line 618 "par_loop_control.m"
    {
#line 618 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77);
    }
#line 619 "par_loop_control.m"
    {
#line 619 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78);
    }
#line 620 "par_loop_control.m"
    {
#line 620 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79);
    }
#line 622 "par_loop_control.m"
    {
#line 622 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "LC", &transform_hlds__par_loop_control__LCVar_40, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81);
    }
#line 623 "par_loop_control.m"
    {
#line 623 "par_loop_control.m"
      transform_hlds__par_loop_control__V_82_82 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    }
#line 623 "par_loop_control.m"
    {
#line 623 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__LCVar_40, transform_hlds__par_loop_control__V_82_82, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83);
    }
#line 624 "par_loop_control.m"
    {
#line 624 "par_loop_control.m"
      transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__PreserveTailRecursion_41);
    }
#line 625 "par_loop_control.m"
    {
#line 625 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__WaitFreeSlotProc_42);
    }
#line 626 "par_loop_control.m"
    {
#line 626 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__JoinAndTerminateProc_43);
    }
#line 630 "par_loop_control.m"
    {
#line 630 "par_loop_control.m"
      transform_hlds__par_loop_control__V_84_84 = transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0();
    }
#line 631 "par_loop_control.m"
    {
#line 631 "par_loop_control.m"
      transform_hlds__par_loop_control__V_85_85 = transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0();
    }
#line 628 "par_loop_control.m"
    {
#line 628 "par_loop_control.m"
      transform_hlds__par_loop_control__Info_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_40));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 2) = ((MR_Box) (transform_hlds__par_loop_control__OldPredProcId_10));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 3) = ((MR_Box) (*transform_hlds__par_loop_control__PredProcId_13));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 4) = ((MR_Box) (*transform_hlds__par_loop_control__PredSym_14));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 5) = ((MR_Box) (transform_hlds__par_loop_control__PreserveTailRecursion_41));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 6) = ((MR_Box) (transform_hlds__par_loop_control__WaitFreeSlotProc_42));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 7) = ((MR_Box) (transform_hlds__par_loop_control__V_84_84));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 8) = ((MR_Box) (transform_hlds__par_loop_control__JoinAndTerminateProc_43));
#line 628 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 9) = ((MR_Box) (transform_hlds__par_loop_control__V_85_85));
#line 628 "par_loop_control.m"
    }
#line 632 "par_loop_control.m"
    {
#line 632 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(transform_hlds__par_loop_control__Info_44, transform_hlds__par_loop_control__RecParConjIds_9, transform_hlds__par_loop_control__ContainingGoalMap_12, transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88);
    }
#line 637 "par_loop_control.m"
    {
#line 637 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(transform_hlds__par_loop_control__Info_44, transform_hlds__par_loop_control__RecParConjIds_9, &transform_hlds__par_loop_control__V_45_45, transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89);
    }
#line 640 "par_loop_control.m"
    {
#line 640 "par_loop_control.m"
      transform_hlds__par_loop_control__HeadVars_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVars_46, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_40));
#line 640 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVars_46, 1) = ((MR_Box) (transform_hlds__par_loop_control__HeadVars0_39));
#line 640 "par_loop_control.m"
    }
#line 641 "par_loop_control.m"
    {
#line 641 "par_loop_control.m"
      transform_hlds__par_loop_control__V_90_90 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    }
#line 641 "par_loop_control.m"
    {
#line 641 "par_loop_control.m"
      transform_hlds__par_loop_control__ArgTypes_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgTypes_47, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_90_90));
#line 641 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgTypes_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ArgTypes0_30));
#line 641 "par_loop_control.m"
    }
#line 644 "par_loop_control.m"
    {
#line 644 "par_loop_control.m"
      transform_hlds__par_loop_control__ArgModes_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgModes_50, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[4]));
#line 644 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgModes_50, 1) = ((MR_Box) (transform_hlds__par_loop_control__ArgModes0_38));
#line 644 "par_loop_control.m"
    }
#line 646 "par_loop_control.m"
    {
#line 646 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__InstVarSet_51);
    }
#line 647 "par_loop_control.m"
    {
#line 647 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__RttiVarMaps_52);
    }
#line 648 "par_loop_control.m"
    {
#line 648 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__Detism_53);
    }
#line 651 "par_loop_control.m"
    {
#line 651 "par_loop_control.m"
      transform_hlds__par_loop_control__V_97_97 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_102_102, transform_hlds__par_loop_control__TypeCtorInfo_103_103);
    }
#line 649 "par_loop_control.m"
    {
#line 649 "par_loop_control.m"
      hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__par_loop_control__Context_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88, transform_hlds__par_loop_control__HeadVars_46, transform_hlds__par_loop_control__InstVarSet_51, transform_hlds__par_loop_control__ArgModes_50, (MR_Integer) 2, transform_hlds__par_loop_control__Detism_53, transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89, transform_hlds__par_loop_control__RttiVarMaps_52, (MR_Integer) 1, (MR_Integer) 0, transform_hlds__par_loop_control__V_97_97, &transform_hlds__par_loop_control__ProcInfo_54);
    }
#line 654 "par_loop_control.m"
    {
#line 654 "par_loop_control.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__par_loop_control__TypeVarSet_27, transform_hlds__par_loop_control__ExistQVars_28, transform_hlds__par_loop_control__ArgTypes_47, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98);
    }
#line 655 "par_loop_control.m"
    {
#line 655 "par_loop_control.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__par_loop_control__ProcId_35, transform_hlds__par_loop_control__ProcInfo_54, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_99_99);
    }
#line 656 "par_loop_control.m"
    {
#line 656 "par_loop_control.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__par_loop_control__PredId_37, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_99_99, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56);
#line 656 "par_loop_control.m"
      return;
    }
#line 565 "par_loop_control.m"
  }
#line 560 "par_loop_control.m"
}

#line 508 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
#line 508 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 508 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Seen0_2,
#line 508 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3)
#line 508 "par_loop_control.m"
{
#line 513 "par_loop_control.m"
  {
#line 513 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 513 "par_loop_control.m"
#line 513 "par_loop_control.m"
    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 513 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 513 "par_loop_control.m"
      case (MR_Integer) 0:
#line 513 "par_loop_control.m"
#line 513 "par_loop_control.m"
        switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 513 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 513 "par_loop_control.m"
          case (MR_Integer) 0:
#line 517 "par_loop_control.m"
#line 517 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Seen0_2)) {
#line 517 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 517 "par_loop_control.m"
              case (MR_Integer) 0:
#line 517 "par_loop_control.m"
#line 517 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__Seen0_2)) {
#line 517 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 517 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 516 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "par_loop_control.m"
                    break;
#line 517 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 517 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 521 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 517 "par_loop_control.m"
                    break;
#line 517 "par_loop_control.m"
                }
#line 517 "par_loop_control.m"
                break;
#line 517 "par_loop_control.m"
              case (MR_Integer) 1:
#line 524 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__Seen0_2;
#line 517 "par_loop_control.m"
                break;
#line 517 "par_loop_control.m"
            }
#line 513 "par_loop_control.m"
            break;
#line 513 "par_loop_control.m"
          case (MR_Integer) 1:
#line 531 "par_loop_control.m"
#line 531 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Seen0_2)) {
#line 531 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 531 "par_loop_control.m"
              case (MR_Integer) 0:
#line 531 "par_loop_control.m"
#line 531 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__Seen0_2)) {
#line 531 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 531 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 531 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 536 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 531 "par_loop_control.m"
                    break;
#line 531 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 530 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__Seen0_2;
#line 531 "par_loop_control.m"
                    break;
#line 531 "par_loop_control.m"
                }
#line 531 "par_loop_control.m"
                break;
#line 531 "par_loop_control.m"
              case (MR_Integer) 1:
#line 536 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 531 "par_loop_control.m"
                break;
#line 531 "par_loop_control.m"
            }
#line 513 "par_loop_control.m"
            break;
#line 513 "par_loop_control.m"
          case (MR_Integer) 2:
#line 539 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 513 "par_loop_control.m"
            break;
#line 513 "par_loop_control.m"
        }
#line 513 "par_loop_control.m"
        break;
#line 513 "par_loop_control.m"
      case (MR_Integer) 1:
#line 541 "par_loop_control.m"
        {
#line 541 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalIdsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));

#line 545 "par_loop_control.m"
#line 545 "par_loop_control.m"
          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Seen0_2)) {
#line 545 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 545 "par_loop_control.m"
            case (MR_Integer) 0:
#line 545 "par_loop_control.m"
#line 545 "par_loop_control.m"
              switch (MR_unmkbody(transform_hlds__par_loop_control__Seen0_2)) {
#line 545 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 545 "par_loop_control.m"
                case (MR_Integer) 0:
#line 544 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__HeadVar__1_1;
#line 545 "par_loop_control.m"
                  break;
#line 545 "par_loop_control.m"
                case (MR_Integer) 1:
#line 545 "par_loop_control.m"
                case (MR_Integer) 2:
#line 549 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 545 "par_loop_control.m"
                  break;
#line 545 "par_loop_control.m"
              }
#line 545 "par_loop_control.m"
              break;
#line 545 "par_loop_control.m"
            case (MR_Integer) 1:
#line 551 "par_loop_control.m"
              {
#line 551 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__GoalIdsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Seen0_2, (MR_Integer) 0)));
#line 551 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__GoalIds_15;

#line 554 "par_loop_control.m"
                {
#line 554 "par_loop_control.m"
                  transform_hlds__par_loop_control__GoalIds_15 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, transform_hlds__par_loop_control__GoalIdsA_11, transform_hlds__par_loop_control__GoalIdsB_14);
                }
#line 555 "par_loop_control.m"
                {
#line 555 "par_loop_control.m"
                  MR_Word base;
#line 555 "par_loop_control.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__3_3 = base;
#line 555 "par_loop_control.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalIds_15));
#line 555 "par_loop_control.m"
                }
#line 551 "par_loop_control.m"
              }
#line 545 "par_loop_control.m"
              break;
#line 545 "par_loop_control.m"
          }
#line 541 "par_loop_control.m"
        }
#line 513 "par_loop_control.m"
        break;
#line 513 "par_loop_control.m"
    }
#line 513 "par_loop_control.m"
  }
#line 508 "par_loop_control.m"
}

#line 459 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
#line 459 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_4,
#line 459 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 459 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 459 "par_loop_control.m"
{
#line 463 "par_loop_control.m"
  {
#line 463 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 463 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 462 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 462 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));

#line 464 "par_loop_control.m"
    {
#line 464 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Goal_7, transform_hlds__par_loop_control__SelfPredProcId_4, transform_hlds__par_loop_control__SeenUsableRecursion_8);
#line 464 "par_loop_control.m"
      return;
    }
#line 463 "par_loop_control.m"
  }
#line 459 "par_loop_control.m"
}

#line 437 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
#line 437 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 437 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_2,
#line 437 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3,
#line 437 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4)
#line 437 "par_loop_control.m"
{
#line 441 "par_loop_control.m"
  while (MR_TRUE)
#line 441 "par_loop_control.m"
    {
#line 441 "par_loop_control.m"
      /* tailcall optimized into a loop */
#line 441 "par_loop_control.m"
      {
#line 441 "par_loop_control.m"
        MR_bool transform_hlds__par_loop_control__succeeded;

#line 441 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "par_loop_control.m"
          *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3;
#line 441 "par_loop_control.m"
        else
#line 443 "par_loop_control.m"
          {
#line 443 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Conj_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 443 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Conjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 443 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__SeenUsableRecursionConj_13;

#line 444 "par_loop_control.m"
            {
#line 444 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Conj_9, transform_hlds__par_loop_control__SelfPredProcId_2, &transform_hlds__par_loop_control__SeenUsableRecursionConj_13);
            }
#line 10840 "transform_hlds.par_loop_control.c"
#line 10841 "transform_hlds.par_loop_control.c"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursionConj_13)) {
#line 10843 "transform_hlds.par_loop_control.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 10845 "transform_hlds.par_loop_control.c"
              case (MR_Integer) 0:
#line 10847 "transform_hlds.par_loop_control.c"
#line 10848 "transform_hlds.par_loop_control.c"
                switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursionConj_13)) {
#line 10850 "transform_hlds.par_loop_control.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 10852 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 0:
#line 455 "par_loop_control.m"
                    {
#line 455 "par_loop_control.m"
                      /* direct tailcall eliminated */
#line 455 "par_loop_control.m"
                      {
#line 455 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;

#line 455 "par_loop_control.m"
                        transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 455 "par_loop_control.m"
                      }
#line 455 "par_loop_control.m"
                      continue;
#line 455 "par_loop_control.m"
                    }
#line 10871 "transform_hlds.par_loop_control.c"
                    break;
#line 10873 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 1:
#line 10875 "transform_hlds.par_loop_control.c"
#line 10876 "transform_hlds.par_loop_control.c"
                    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10878 "transform_hlds.par_loop_control.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 10880 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 0:
#line 10882 "transform_hlds.par_loop_control.c"
#line 10883 "transform_hlds.par_loop_control.c"
                        switch (MR_unmkbody(transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10885 "transform_hlds.par_loop_control.c"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 10887 "transform_hlds.par_loop_control.c"
                          case (MR_Integer) 0:
#line 10889 "transform_hlds.par_loop_control.c"
                            {
#line 455 "par_loop_control.m"
                              /* direct tailcall eliminated */
#line 455 "par_loop_control.m"
                              {
#line 455 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;

#line 455 "par_loop_control.m"
                                transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 455 "par_loop_control.m"
                                transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 455 "par_loop_control.m"
                              }
#line 455 "par_loop_control.m"
                              continue;
#line 10906 "transform_hlds.par_loop_control.c"
                            }
#line 10908 "transform_hlds.par_loop_control.c"
                            break;
#line 10910 "transform_hlds.par_loop_control.c"
                          case (MR_Integer) 1:
#line 484 "par_loop_control.m"
                            *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10914 "transform_hlds.par_loop_control.c"
                            break;
#line 10916 "transform_hlds.par_loop_control.c"
                        }
#line 10918 "transform_hlds.par_loop_control.c"
                        break;
#line 10920 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 1:
#line 484 "par_loop_control.m"
                        *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10924 "transform_hlds.par_loop_control.c"
                        break;
#line 10926 "transform_hlds.par_loop_control.c"
                    }
#line 10928 "transform_hlds.par_loop_control.c"
                    break;
#line 10930 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 2:
#line 473 "par_loop_control.m"
                    *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10934 "transform_hlds.par_loop_control.c"
                    break;
#line 10936 "transform_hlds.par_loop_control.c"
                }
#line 10938 "transform_hlds.par_loop_control.c"
                break;
#line 10940 "transform_hlds.par_loop_control.c"
              case (MR_Integer) 1:
#line 10942 "transform_hlds.par_loop_control.c"
#line 10943 "transform_hlds.par_loop_control.c"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10945 "transform_hlds.par_loop_control.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 10947 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 0:
#line 10949 "transform_hlds.par_loop_control.c"
#line 10950 "transform_hlds.par_loop_control.c"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10952 "transform_hlds.par_loop_control.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 10954 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 0:
#line 455 "par_loop_control.m"
                        {
#line 455 "par_loop_control.m"
                          /* direct tailcall eliminated */
#line 455 "par_loop_control.m"
                          {
#line 455 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;
#line 455 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0__tmp_copy_3 = transform_hlds__par_loop_control__SeenUsableRecursionConj_13;

#line 455 "par_loop_control.m"
                            transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 = transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0__tmp_copy_3;
#line 455 "par_loop_control.m"
                            transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 455 "par_loop_control.m"
                          }
#line 455 "par_loop_control.m"
                          continue;
#line 455 "par_loop_control.m"
                        }
#line 10977 "transform_hlds.par_loop_control.c"
                        break;
#line 10979 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 1:
#line 496 "par_loop_control.m"
                        *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10983 "transform_hlds.par_loop_control.c"
                        break;
#line 10985 "transform_hlds.par_loop_control.c"
                    }
#line 10987 "transform_hlds.par_loop_control.c"
                    break;
#line 10989 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 1:
#line 496 "par_loop_control.m"
                    *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10993 "transform_hlds.par_loop_control.c"
                    break;
#line 10995 "transform_hlds.par_loop_control.c"
                }
#line 10997 "transform_hlds.par_loop_control.c"
                break;
#line 10999 "transform_hlds.par_loop_control.c"
            }
#line 443 "par_loop_control.m"
          }
#line 441 "par_loop_control.m"
      }
#line 441 "par_loop_control.m"
      break;
#line 441 "par_loop_control.m"
    }
#line 437 "par_loop_control.m"
}

#line 407 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
#line 407 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conj_5,
#line 407 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_6,
#line 407 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_7,
#line 407 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 407 "par_loop_control.m"
{
#line 411 "par_loop_control.m"
  while (MR_TRUE)
#line 411 "par_loop_control.m"
    {
#line 411 "par_loop_control.m"
      /* tailcall optimized into a loop */
#line 411 "par_loop_control.m"
      {
#line 411 "par_loop_control.m"
        MR_bool transform_hlds__par_loop_control__succeeded;
#line 411 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_9;

#line 412 "par_loop_control.m"
        {
#line 412 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Conj_5, transform_hlds__par_loop_control__SelfPredProcId_7, &transform_hlds__par_loop_control__SeenUsableRecursion0_9);
        }
#line 419 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__Conjs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "par_loop_control.m"
          *transform_hlds__par_loop_control__SeenUsableRecursion_8 = transform_hlds__par_loop_control__SeenUsableRecursion0_9;
#line 419 "par_loop_control.m"
        else
#line 420 "par_loop_control.m"
          {
#line 420 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Head_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_6, (MR_Integer) 0)));
#line 420 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_6, (MR_Integer) 1)));

#line 429 "par_loop_control.m"
#line 429 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_9)) {
#line 429 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 429 "par_loop_control.m"
              case (MR_Integer) 0:
#line 429 "par_loop_control.m"
#line 429 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_9)) {
#line 429 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 429 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 432 "par_loop_control.m"
                    {
#line 432 "par_loop_control.m"
                      /* direct tailcall eliminated */
#line 432 "par_loop_control.m"
                      {
#line 432 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conj__tmp_copy_5 = transform_hlds__par_loop_control__Head_10;
#line 432 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs__tmp_copy_6 = transform_hlds__par_loop_control__Tail_11;

#line 432 "par_loop_control.m"
                        transform_hlds__par_loop_control__Conjs_6 = transform_hlds__par_loop_control__Conjs__tmp_copy_6;
#line 432 "par_loop_control.m"
                        transform_hlds__par_loop_control__Conj_5 = transform_hlds__par_loop_control__Conj__tmp_copy_5;
#line 432 "par_loop_control.m"
                      }
#line 432 "par_loop_control.m"
                      continue;
#line 432 "par_loop_control.m"
                    }
#line 429 "par_loop_control.m"
                    break;
#line 429 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 429 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 428 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 429 "par_loop_control.m"
                    break;
#line 429 "par_loop_control.m"
                }
#line 429 "par_loop_control.m"
                break;
#line 429 "par_loop_control.m"
              case (MR_Integer) 1:
#line 428 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 429 "par_loop_control.m"
                break;
#line 429 "par_loop_control.m"
            }
#line 420 "par_loop_control.m"
          }
#line 411 "par_loop_control.m"
      }
#line 411 "par_loop_control.m"
      break;
#line 411 "par_loop_control.m"
    }
#line 407 "par_loop_control.m"
}

#line 381 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(
#line 381 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_5,
#line 381 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_6,
#line 381 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalId_7,
#line 381 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 381 "par_loop_control.m"
{
#line 387 "par_loop_control.m"
  {
#line 387 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 387 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__Conjs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "par_loop_control.m"
      {
#line 388 "par_loop_control.m"
        {
#line 388 "par_loop_control.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.par_conj_get_loop_control_par_conjs\'/4", (MR_String) "Empty parallel conjunction");
#line 388 "par_loop_control.m"
          return;
        }
#line 387 "par_loop_control.m"
      }
#line 387 "par_loop_control.m"
    else
#line 390 "par_loop_control.m"
      {
#line 390 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Head_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_5, (MR_Integer) 0)));
#line 390 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_5, (MR_Integer) 1)));
#line 390 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_11;

#line 391 "par_loop_control.m"
        {
#line 391 "par_loop_control.m"
          transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(transform_hlds__par_loop_control__Head_9, transform_hlds__par_loop_control__Tail_10, transform_hlds__par_loop_control__SelfPredProcId_6, &transform_hlds__par_loop_control__SeenUsableRecursion0_11);
        }
#line 396 "par_loop_control.m"
#line 396 "par_loop_control.m"
        switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_11)) {
#line 396 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 396 "par_loop_control.m"
          case (MR_Integer) 0:
#line 396 "par_loop_control.m"
#line 396 "par_loop_control.m"
            switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_11)) {
#line 396 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 396 "par_loop_control.m"
              case (MR_Integer) 0:
#line 395 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = transform_hlds__par_loop_control__SeenUsableRecursion0_11;
#line 396 "par_loop_control.m"
                break;
#line 396 "par_loop_control.m"
              case (MR_Integer) 1:
#line 397 "par_loop_control.m"
                {
#line 397 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_13_13;

#line 398 "par_loop_control.m"
                  {
#line 398 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalId_7));
#line 398 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "par_loop_control.m"
                  }
#line 398 "par_loop_control.m"
                  {
#line 398 "par_loop_control.m"
                    MR_Word base;
#line 398 "par_loop_control.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_8 = base;
#line 398 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_13_13));
#line 398 "par_loop_control.m"
                  }
#line 397 "par_loop_control.m"
                }
#line 396 "par_loop_control.m"
                break;
#line 396 "par_loop_control.m"
              case (MR_Integer) 2:
#line 403 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 396 "par_loop_control.m"
                break;
#line 396 "par_loop_control.m"
            }
#line 396 "par_loop_control.m"
            break;
#line 396 "par_loop_control.m"
          case (MR_Integer) 1:
#line 403 "par_loop_control.m"
            *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 396 "par_loop_control.m"
            break;
#line 396 "par_loop_control.m"
        }
#line 390 "par_loop_control.m"
      }
#line 387 "par_loop_control.m"
  }
#line 381 "par_loop_control.m"
}

#line 505 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
#line 505 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 505 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 505 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 505 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 505 "par_loop_control.m"
{
#line 505 "par_loop_control.m"
  {
#line 505 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 505 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_HeadVar__3_3;

#line 505 "par_loop_control.m"
    {
#line 505 "par_loop_control.m"
      transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv1_HeadVar__3_3);
    }
#line 505 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv1_HeadVar__3_3));
#line 505 "par_loop_control.m"
  }
#line 505 "par_loop_control.m"
}

#line 292 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
#line 292 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 292 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 292 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2)
#line 292 "par_loop_control.m"
{
#line 292 "par_loop_control.m"
  {
#line 292 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8;

#line 292 "par_loop_control.m"
    {
#line 292 "par_loop_control.m"
      transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8);
    }
#line 292 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8));
#line 292 "par_loop_control.m"
  }
#line 292 "par_loop_control.m"
}

#line 241 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
#line 241 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal_4,
#line 241 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_5,
#line 241 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_6)
#line 241 "par_loop_control.m"
{
#line 244 "par_loop_control.m"
  {
#line 244 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 244 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal_4, (MR_Integer) 0)));
#line 244 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal_4, (MR_Integer) 1)));
#line 244 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_9;
#line 244 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_10;

#line 246 "par_loop_control.m"
    {
#line 246 "par_loop_control.m"
      transform_hlds__par_loop_control__Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
    }
#line 247 "par_loop_control.m"
    {
#line 247 "par_loop_control.m"
      transform_hlds__par_loop_control__InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
    }
#line 248 "par_loop_control.m"
    {
#line 248 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__par_loop_control__InstmapDelta_10);
    }
#line 370 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 11350 "transform_hlds.par_loop_control.c"
#line 11351 "transform_hlds.par_loop_control.c"
      switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) {
#line 11353 "transform_hlds.par_loop_control.c"
        default: /*NOTREACHED*/ MR_assert(0);
#line 11355 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 0:
#line 11357 "transform_hlds.par_loop_control.c"
          {
#line 11359 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__SubGoal_43 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr_7), (MR_Integer) 0);
#line 11361 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_81;

#line 302 "par_loop_control.m"
            {
#line 302 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__SubGoal_43, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursion0_81);
            }
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_81)) {
#line 350 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
              case (MR_Integer) 0:
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_81)) {
#line 350 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 350 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 349 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 350 "par_loop_control.m"
                    break;
#line 350 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                    switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                      case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 359 "par_loop_control.m"
                        break;
#line 359 "par_loop_control.m"
                      case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                        break;
#line 359 "par_loop_control.m"
                    }
#line 350 "par_loop_control.m"
                    break;
#line 350 "par_loop_control.m"
                }
#line 350 "par_loop_control.m"
                break;
#line 350 "par_loop_control.m"
              case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                  case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 359 "par_loop_control.m"
                    break;
#line 359 "par_loop_control.m"
                  case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                    break;
#line 359 "par_loop_control.m"
                }
#line 350 "par_loop_control.m"
                break;
#line 350 "par_loop_control.m"
            }
#line 11465 "transform_hlds.par_loop_control.c"
          }
#line 11467 "transform_hlds.par_loop_control.c"
          break;
#line 11469 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 1:
#line 251 "par_loop_control.m"
          *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11473 "transform_hlds.par_loop_control.c"
          break;
#line 11475 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 2:
#line 11477 "transform_hlds.par_loop_control.c"
          {
#line 11479 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)));
#line 11481 "transform_hlds.par_loop_control.c"
            MR_Integer transform_hlds__par_loop_control__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 253 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 253 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 253 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 4)));
#line 253 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 5)));
#line 254 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Integer) 0)));
#line 254 "par_loop_control.m"
            MR_Integer transform_hlds__par_loop_control__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Integer) 1)));

#line 254 "par_loop_control.m"
            {
#line 254 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__par_loop_control__PredId_17, transform_hlds__par_loop_control__V_65_65);
            }
#line 254 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 254 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__ProcId_18 == transform_hlds__par_loop_control__V_66_66);
#line 11505 "transform_hlds.par_loop_control.c"
            if (transform_hlds__par_loop_control__succeeded)
#line 11507 "transform_hlds.par_loop_control.c"
              {
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                  case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 359 "par_loop_control.m"
                    break;
#line 359 "par_loop_control.m"
                  case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                    break;
#line 359 "par_loop_control.m"
                }
#line 11540 "transform_hlds.par_loop_control.c"
              }
#line 11542 "transform_hlds.par_loop_control.c"
            else
#line 258 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11546 "transform_hlds.par_loop_control.c"
          }
#line 11548 "transform_hlds.par_loop_control.c"
          break;
#line 11550 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 3:
#line 11552 "transform_hlds.par_loop_control.c"
#line 11553 "transform_hlds.par_loop_control.c"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) {
#line 11555 "transform_hlds.par_loop_control.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 11557 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 0:
#line 265 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11561 "transform_hlds.par_loop_control.c"
              break;
#line 11563 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 1:
#line 268 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11567 "transform_hlds.par_loop_control.c"
              break;
#line 11569 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 2:
#line 11571 "transform_hlds.par_loop_control.c"
              {
#line 11573 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 11575 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Conjs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 11577 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_77;

#line 275 "par_loop_control.m"
#line 275 "par_loop_control.m"
                switch (transform_hlds__par_loop_control__ConjType_35) {
#line 275 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 275 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 276 "par_loop_control.m"
                    {
#line 276 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__GoalId_37;

#line 277 "par_loop_control.m"
                      {
#line 277 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
                      }
#line 278 "par_loop_control.m"
                      {
#line 278 "par_loop_control.m"
                        transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(transform_hlds__par_loop_control__Conjs_36, transform_hlds__par_loop_control__SelfPredProcId_5, transform_hlds__par_loop_control__GoalId_37, &transform_hlds__par_loop_control__SeenUsableRecursion0_77);
                      }
#line 276 "par_loop_control.m"
                    }
#line 275 "par_loop_control.m"
                    break;
#line 275 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 272 "par_loop_control.m"
                    {
#line 273 "par_loop_control.m"
                      {
#line 273 "par_loop_control.m"
                        transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(transform_hlds__par_loop_control__Conjs_36, transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__SeenUsableRecursion0_77);
                      }
#line 272 "par_loop_control.m"
                    }
#line 275 "par_loop_control.m"
                    break;
#line 275 "par_loop_control.m"
                }
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_77)) {
#line 350 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_77)) {
#line 350 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 350 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 349 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 350 "par_loop_control.m"
                        break;
#line 350 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                        switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                          case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 359 "par_loop_control.m"
                            break;
#line 359 "par_loop_control.m"
                          case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                            break;
#line 359 "par_loop_control.m"
                        }
#line 350 "par_loop_control.m"
                        break;
#line 350 "par_loop_control.m"
                    }
#line 350 "par_loop_control.m"
                    break;
#line 350 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                    switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                      case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 359 "par_loop_control.m"
                        break;
#line 359 "par_loop_control.m"
                      case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                        break;
#line 359 "par_loop_control.m"
                    }
#line 350 "par_loop_control.m"
                    break;
#line 350 "par_loop_control.m"
                }
#line 11717 "transform_hlds.par_loop_control.c"
              }
#line 11719 "transform_hlds.par_loop_control.c"
              break;
#line 11721 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 3:
#line 11723 "transform_hlds.par_loop_control.c"
              {
#line 285 "par_loop_control.m"
                {
#line 285 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__par_loop_control__Goal_4, transform_hlds__par_loop_control__SelfPredProcId_5);
                }
#line 11730 "transform_hlds.par_loop_control.c"
                if (transform_hlds__par_loop_control__succeeded)
#line 286 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 11734 "transform_hlds.par_loop_control.c"
                else
#line 288 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11738 "transform_hlds.par_loop_control.c"
              }
#line 11740 "transform_hlds.par_loop_control.c"
              break;
#line 11742 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 4:
#line 11744 "transform_hlds.par_loop_control.c"
              {
#line 11746 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 11748 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursionCases_42;
#line 11750 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__V_58_58;
#line 291 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 291 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));

#line 292 "par_loop_control.m"
                {
#line 292 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 292 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[0]));
#line 292 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1));
#line 292 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 3) = ((MR_Box) (transform_hlds__par_loop_control__SelfPredProcId_5));
#line 292 "par_loop_control.m"
                }
#line 292 "par_loop_control.m"
                {
#line 292 "par_loop_control.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0, transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__Cases_41, &transform_hlds__par_loop_control__SeenUsableRecursionCases_42);
                }
#line 11776 "transform_hlds.par_loop_control.c"
                if ((transform_hlds__par_loop_control__SeenUsableRecursionCases_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11780 "transform_hlds.par_loop_control.c"
                else
#line 11782 "transform_hlds.par_loop_control.c"
                  {
#line 11784 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_10_76 = (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0;
#line 11786 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__Seen_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__SeenUsableRecursionCases_42, (MR_Integer) 0)));
#line 11788 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__Seens_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__SeenUsableRecursionCases_42, (MR_Integer) 1)));
#line 11790 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 505 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88;

#line 505 "par_loop_control.m"
                    {
#line 505 "par_loop_control.m"
                      mercury__list__foldl_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_10_76, transform_hlds__par_loop_control__TypeCtorInfo_10_76, (MR_Word) &transform_hlds__par_loop_control_scalar_common_2[2], transform_hlds__par_loop_control__Seens_70, ((MR_Box) (transform_hlds__par_loop_control__Seen_69)), &transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88);
                    }
#line 505 "par_loop_control.m"
                    transform_hlds__par_loop_control__SeenUsableRecursion0_88 = ((MR_Word) transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88);
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_88)) {
#line 350 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                        switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_88)) {
#line 350 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 350 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 349 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 350 "par_loop_control.m"
                            break;
#line 350 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                            switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                              case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                              case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                                *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 359 "par_loop_control.m"
                                break;
#line 359 "par_loop_control.m"
                              case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                              case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                              case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                              case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                              case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                              case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                                *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                                break;
#line 359 "par_loop_control.m"
                            }
#line 350 "par_loop_control.m"
                            break;
#line 350 "par_loop_control.m"
                        }
#line 350 "par_loop_control.m"
                        break;
#line 350 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                        switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                          case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 359 "par_loop_control.m"
                            break;
#line 359 "par_loop_control.m"
                          case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                            break;
#line 359 "par_loop_control.m"
                        }
#line 350 "par_loop_control.m"
                        break;
#line 350 "par_loop_control.m"
                    }
#line 11898 "transform_hlds.par_loop_control.c"
                  }
#line 11900 "transform_hlds.par_loop_control.c"
              }
#line 11902 "transform_hlds.par_loop_control.c"
              break;
#line 11904 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 5:
#line 11906 "transform_hlds.par_loop_control.c"
              {
#line 11908 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SubGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 11910 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 309 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));

#line 310 "par_loop_control.m"
                {
#line 310 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__SubGoal_60, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursion0_83);
                }
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_83)) {
#line 350 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_83)) {
#line 350 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 350 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 349 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 350 "par_loop_control.m"
                        break;
#line 350 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                        switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                          case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 359 "par_loop_control.m"
                            break;
#line 359 "par_loop_control.m"
                          case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                            break;
#line 359 "par_loop_control.m"
                        }
#line 350 "par_loop_control.m"
                        break;
#line 350 "par_loop_control.m"
                    }
#line 350 "par_loop_control.m"
                    break;
#line 350 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                    switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                      case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 359 "par_loop_control.m"
                        break;
#line 359 "par_loop_control.m"
                      case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                        break;
#line 359 "par_loop_control.m"
                    }
#line 350 "par_loop_control.m"
                    break;
#line 350 "par_loop_control.m"
                }
#line 12016 "transform_hlds.par_loop_control.c"
              }
#line 12018 "transform_hlds.par_loop_control.c"
              break;
#line 12020 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 6:
#line 12022 "transform_hlds.par_loop_control.c"
              {
#line 12024 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 12026 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 12028 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 4)));
#line 12030 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursionCond_49;
#line 315 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));

#line 316 "par_loop_control.m"
                {
#line 316 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Cond_46, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionCond_49);
                }
#line 12040 "transform_hlds.par_loop_control.c"
#line 12041 "transform_hlds.par_loop_control.c"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursionCond_49)) {
#line 12043 "transform_hlds.par_loop_control.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 12045 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 0:
#line 12047 "transform_hlds.par_loop_control.c"
#line 12048 "transform_hlds.par_loop_control.c"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursionCond_49)) {
#line 12050 "transform_hlds.par_loop_control.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 12052 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 0:
#line 12054 "transform_hlds.par_loop_control.c"
                        {
#line 12056 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursionThen_50;
#line 12058 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursionElse_51;
#line 12060 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_80;

#line 320 "par_loop_control.m"
                          {
#line 320 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Then_47, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionThen_50);
                          }
#line 322 "par_loop_control.m"
                          {
#line 322 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Else_48, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionElse_51);
                          }
#line 324 "par_loop_control.m"
                          {
#line 324 "par_loop_control.m"
                            transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(transform_hlds__par_loop_control__SeenUsableRecursionThen_50, transform_hlds__par_loop_control__SeenUsableRecursionElse_51, &transform_hlds__par_loop_control__SeenUsableRecursion0_80);
                          }
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_80)) {
#line 350 "par_loop_control.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                            case (MR_Integer) 0:
#line 350 "par_loop_control.m"
#line 350 "par_loop_control.m"
                              switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_80)) {
#line 350 "par_loop_control.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 350 "par_loop_control.m"
                                case (MR_Integer) 0:
#line 350 "par_loop_control.m"
                                case (MR_Integer) 2:
#line 349 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 350 "par_loop_control.m"
                                  break;
#line 350 "par_loop_control.m"
                                case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                                  switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 359 "par_loop_control.m"
                                      break;
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                                    case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                                      break;
#line 359 "par_loop_control.m"
                                  }
#line 350 "par_loop_control.m"
                                  break;
#line 350 "par_loop_control.m"
                              }
#line 350 "par_loop_control.m"
                              break;
#line 350 "par_loop_control.m"
                            case (MR_Integer) 1:
#line 359 "par_loop_control.m"
#line 359 "par_loop_control.m"
                              switch (transform_hlds__par_loop_control__Detism_9) {
#line 359 "par_loop_control.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 359 "par_loop_control.m"
                                case (MR_Integer) 4:
#line 359 "par_loop_control.m"
                                case (MR_Integer) 0:
#line 358 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 359 "par_loop_control.m"
                                  break;
#line 359 "par_loop_control.m"
                                case (MR_Integer) 5:
#line 359 "par_loop_control.m"
                                case (MR_Integer) 6:
#line 359 "par_loop_control.m"
                                case (MR_Integer) 7:
#line 359 "par_loop_control.m"
                                case (MR_Integer) 2:
#line 359 "par_loop_control.m"
                                case (MR_Integer) 3:
#line 359 "par_loop_control.m"
                                case (MR_Integer) 1:
#line 367 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "par_loop_control.m"
                                  break;
#line 359 "par_loop_control.m"
                              }
#line 350 "par_loop_control.m"
                              break;
#line 350 "par_loop_control.m"
                          }
#line 12174 "transform_hlds.par_loop_control.c"
                        }
#line 12176 "transform_hlds.par_loop_control.c"
                        break;
#line 12178 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 1:
#line 12180 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 2:
#line 336 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 12184 "transform_hlds.par_loop_control.c"
                        break;
#line 12186 "transform_hlds.par_loop_control.c"
                    }
#line 12188 "transform_hlds.par_loop_control.c"
                    break;
#line 12190 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 1:
#line 336 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 12194 "transform_hlds.par_loop_control.c"
                    break;
#line 12196 "transform_hlds.par_loop_control.c"
                }
#line 12198 "transform_hlds.par_loop_control.c"
              }
#line 12200 "transform_hlds.par_loop_control.c"
              break;
#line 12202 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 7:
#line 12204 "transform_hlds.par_loop_control.c"
              {
#line 340 "par_loop_control.m"
                {
#line 340 "par_loop_control.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_get_loop_control_par_conjs\'/3", (MR_String) "shorthand");
#line 340 "par_loop_control.m"
                  return;
                }
#line 12213 "transform_hlds.par_loop_control.c"
              }
#line 12215 "transform_hlds.par_loop_control.c"
              break;
#line 12217 "transform_hlds.par_loop_control.c"
          }
#line 12219 "transform_hlds.par_loop_control.c"
          break;
#line 12221 "transform_hlds.par_loop_control.c"
      }
#line 370 "par_loop_control.m"
    else
#line 372 "par_loop_control.m"
      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "par_loop_control.m"
  }
#line 241 "par_loop_control.m"
}

#line 136 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__DepInfo_7,
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_8,
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19,
#line 136 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20,
#line 136 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21,
#line 136 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22)
#line 136 "par_loop_control.m"
{
#line 165 "par_loop_control.m"
  {
#line 165 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_12_40;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HasParallelConj_29;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_30;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepGraph_33;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SelfKey_34;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepGraphWOSelfEdge_35;
#line 178 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_36;

#line 179 "par_loop_control.m"
    {
#line 179 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__HasParallelConj_29);
    }
#line 180 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HasParallelConj_29 == (MR_Integer) 0);
#line 178 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 178 "par_loop_control.m"
      {
#line 181 "par_loop_control.m"
        {
#line 181 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__Detism_30);
        }
#line 186 "par_loop_control.m"
#line 186 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__Detism_30) {
#line 186 "par_loop_control.m"
          default:
#line 186 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_FALSE;
#line 186 "par_loop_control.m"
            break;
#line 186 "par_loop_control.m"
          case (MR_Integer) 4:
#line 186 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 186 "par_loop_control.m"
            break;
#line 186 "par_loop_control.m"
          case (MR_Integer) 0:
#line 185 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 186 "par_loop_control.m"
            break;
#line 186 "par_loop_control.m"
        }
#line 178 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 178 "par_loop_control.m"
          {
#line 12311 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__TypeCtorInfo_12_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 194 "par_loop_control.m"
            {
#line 194 "par_loop_control.m"
              hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepInfo_7, &transform_hlds__par_loop_control__DepGraph_33);
            }
#line 197 "par_loop_control.m"
            {
#line 197 "par_loop_control.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepGraph_33, ((MR_Box) (transform_hlds__par_loop_control__PredProcId_8)), &transform_hlds__par_loop_control__SelfKey_34);
            }
#line 198 "par_loop_control.m"
            {
#line 198 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = mercury__digraph__is_edge_3_p_1(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepGraph_33, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__SelfKey_34);
            }
#line 178 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 178 "par_loop_control.m"
              {
#line 204 "par_loop_control.m"
                {
#line 204 "par_loop_control.m"
                  mercury__digraph__delete_edge_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__DepGraph_33, &transform_hlds__par_loop_control__DepGraphWOSelfEdge_35);
                }
#line 205 "par_loop_control.m"
                {
#line 205 "par_loop_control.m"
                  mercury__digraph__tc_2_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepGraphWOSelfEdge_35, &transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_36);
                }
#line 206 "par_loop_control.m"
                {
#line 206 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = mercury__digraph__is_edge_3_p_1(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_36, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__SelfKey_34);
                }
#line 206 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 178 "par_loop_control.m"
              }
#line 178 "par_loop_control.m"
          }
#line 178 "par_loop_control.m"
      }
#line 165 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 141 "par_loop_control.m"
      {
#line 141 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Body0_11;
#line 141 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__VarTypes_12;
#line 141 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ContainingGoalMap_13;
#line 141 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Body_14;
#line 141 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__RecursiveParConjIds_15;
#line 141 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;

#line 141 "par_loop_control.m"
        {
#line 141 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__Body0_11);
        }
#line 144 "par_loop_control.m"
        {
#line 144 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__VarTypes_12);
        }
#line 145 "par_loop_control.m"
        {
#line 145 "par_loop_control.m"
          hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__par_loop_control__VarTypes_12, &transform_hlds__par_loop_control__ContainingGoalMap_13, transform_hlds__par_loop_control__Body0_11, &transform_hlds__par_loop_control__Body_14);
        }
#line 147 "par_loop_control.m"
        {
#line 147 "par_loop_control.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__par_loop_control__Body_14, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 148 "par_loop_control.m"
        {
#line 148 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Body_14, transform_hlds__par_loop_control__PredProcId_8, &transform_hlds__par_loop_control__RecursiveParConjIds_15);
        }
#line 155 "par_loop_control.m"
#line 155 "par_loop_control.m"
        switch (MR_tag((MR_Word) transform_hlds__par_loop_control__RecursiveParConjIds_15)) {
#line 155 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 155 "par_loop_control.m"
          case (MR_Integer) 0:
#line 155 "par_loop_control.m"
#line 155 "par_loop_control.m"
            switch (MR_unmkbody(transform_hlds__par_loop_control__RecursiveParConjIds_15)) {
#line 155 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 155 "par_loop_control.m"
              case (MR_Integer) 0:
#line 151 "par_loop_control.m"
                {
#line 151 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 151 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 151 "par_loop_control.m"
                }
#line 155 "par_loop_control.m"
                break;
#line 155 "par_loop_control.m"
              case (MR_Integer) 1:
#line 152 "par_loop_control.m"
                {
#line 152 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 152 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 152 "par_loop_control.m"
                }
#line 155 "par_loop_control.m"
                break;
#line 155 "par_loop_control.m"
              case (MR_Integer) 2:
#line 153 "par_loop_control.m"
                {
#line 153 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 153 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 153 "par_loop_control.m"
                }
#line 155 "par_loop_control.m"
                break;
#line 155 "par_loop_control.m"
            }
#line 155 "par_loop_control.m"
            break;
#line 155 "par_loop_control.m"
          case (MR_Integer) 1:
#line 156 "par_loop_control.m"
            {
#line 156 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__RecursiveParConjIds_15, (MR_Integer) 0)));
#line 156 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__InnerPredProcId_17;
#line 156 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__InnerPredName_18;

#line 159 "par_loop_control.m"
              {
#line 159 "par_loop_control.m"
                transform_hlds__par_loop_control__create_inner_proc_8_p_0(transform_hlds__par_loop_control__GoalIds_16, transform_hlds__par_loop_control__PredProcId_8, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__par_loop_control__ContainingGoalMap_13, &transform_hlds__par_loop_control__InnerPredProcId_17, &transform_hlds__par_loop_control__InnerPredName_18, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22);
              }
#line 162 "par_loop_control.m"
              {
#line 162 "par_loop_control.m"
                transform_hlds__par_loop_control__update_outer_proc_6_p_0(transform_hlds__par_loop_control__PredProcId_8, transform_hlds__par_loop_control__InnerPredProcId_17, transform_hlds__par_loop_control__InnerPredName_18, *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20);
#line 162 "par_loop_control.m"
                return;
              }
#line 156 "par_loop_control.m"
            }
#line 155 "par_loop_control.m"
            break;
#line 155 "par_loop_control.m"
        }
#line 141 "par_loop_control.m"
      }
#line 165 "par_loop_control.m"
    else
#line 166 "par_loop_control.m"
      {
#line 166 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 166 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19;
#line 166 "par_loop_control.m"
      }
#line 165 "par_loop_control.m"
  }
#line 136 "par_loop_control.m"
}

#line 133 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 133 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 133 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 133 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5)
#line 133 "par_loop_control.m"
{
#line 133 "par_loop_control.m"
  {
#line 133 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 133 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20;
#line 133 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22;

#line 133 "par_loop_control.m"
    {
#line 133 "par_loop_control.m"
      transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_4), &transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22);
    }
#line 133 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20));
#line 133 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_5 = ((MR_Box) (transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22));
#line 133 "par_loop_control.m"
  }
#line 133 "par_loop_control.m"
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
#line 130 "par_loop_control.m"
  {
#line 130 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 130 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepInfo_4;
#line 130 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7;
#line 130 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_8_8;
#line 130 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_10_10;

#line 131 "par_loop_control.m"
    {
#line 131 "par_loop_control.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7, &transform_hlds__par_loop_control__DepInfo_4);
    }
#line 133 "par_loop_control.m"
    {
#line 133 "par_loop_control.m"
      transform_hlds__par_loop_control__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 133 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[0]));
#line 133 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 1) = ((MR_Box) (transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1));
#line 133 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 133 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 3) = ((MR_Box) (transform_hlds__par_loop_control__DepInfo_4));
#line 133 "par_loop_control.m"
    }
#line 133 "par_loop_control.m"
    {
#line 133 "par_loop_control.m"
      transform_hlds__par_loop_control__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 133 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_8_8, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_10_10));
#line 133 "par_loop_control.m"
    }
#line 132 "par_loop_control.m"
    {
#line 132 "par_loop_control.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__par_loop_control__V_8_8, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_6);
#line 132 "par_loop_control.m"
      return;
    }
#line 130 "par_loop_control.m"
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
