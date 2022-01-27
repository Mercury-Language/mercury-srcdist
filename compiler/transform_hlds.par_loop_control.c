/*
** Automatically generated from `par_loop_control.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "parse_tree.status.mih"
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



#line 1183 "par_loop_control.m"
struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s {
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1;
#line 1187 "par_loop_control.m"
  MR_bool transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded;
#line 1190 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
#line 1192 "par_loop_control.m"
  jmp_buf transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0;
#line 1192 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15;
#line 1183 "par_loop_control.m"
};

#line 1067 "par_loop_control.m"
struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s {
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6;
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
#line 1072 "par_loop_control.m"
  MR_bool transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded;
#line 1088 "par_loop_control.m"
  jmp_buf transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0;
#line 1088 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112;
#line 1088 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206;
#line 1088 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207;
#line 1067 "par_loop_control.m"
};


#line 176 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 179 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 182 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 191 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 194 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 203 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0;

#line 206 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1;

#line 209 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0[2];

#line 212 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2];

#line 215 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2];

#line 218 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0;

#line 221 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1;

#line 224 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0[2];

#line 227 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2];

#line 230 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2];

#line 233 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10];

#line 236 "transform_hlds.par_loop_control.c"
static const MR_ConstString transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0[10];

#line 239 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0;

#line 242 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1];

#line 245 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1];

#line 248 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1];

#line 251 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1];

#line 254 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0;

#line 257 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1;

#line 260 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0[2];

#line 263 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2];

#line 266 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2];

#line 269 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0;

#line 272 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1;

#line 275 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2;

#line 278 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 281 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1];

#line 284 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3;

#line 287 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3];

#line 290 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1];

#line 293 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0[2];

#line 296 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4];

#line 299 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4];

#line 302 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
#line 305 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 307 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 310 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
#line 313 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 315 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 317 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 320 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
#line 323 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 325 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 328 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
#line 331 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 333 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 335 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 338 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
#line 341 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 343 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 346 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
#line 349 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 351 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 353 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 356 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
#line 359 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 361 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 364 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
#line 367 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 369 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 371 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 374 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
#line 377 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 379 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2);

#line 382 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
#line 385 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 387 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 389 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3);

#line 1439 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1439__1_4_p_0(
#line 1439 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1439 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_17,
#line 1439 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_18,
#line 1439 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_19);

#line 1348 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1348__1_3_p_0(
#line 1348 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_23,
#line 1348 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_114,
#line 1348 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_115);

#line 1117 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1117__1_2_p_0(
#line 1117 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecPredProcId_41,
#line 1117 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_98);

#line 1128 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1128__1_2_p_0(
#line 1128 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ConjType_48,
#line 1128 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_93);

#line 211 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
#line 211 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 211 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 689 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
#line 689 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 689 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 675 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
#line 675 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 675 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 697 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
#line 697 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 697 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 1304 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
#line 1304 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3);

#line 1304 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2);

#line 1513 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
#line 1513 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1513 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1508 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void);

#line 1482 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
#line 1482 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_4,
#line 1482 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredId_5,
#line 1482 "par_loop_control.m"
  MR_Integer * transform_hlds__par_loop_control__ProcId_6);

#line 1476 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void);

#line 1466 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
#line 1466 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1466 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1457 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void);

#line 1446 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void);

#line 1439 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
#line 1439 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1439 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1439 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1439 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 1433 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
#line 1433 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1433 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldInstmapDelta_5,
#line 1433 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13);

#line 1419 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVarSet_10,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVar_11,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__VarType_12,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18,
#line 1419 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20,
#line 1419 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22,
#line 1419 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23);

#line 1348 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
#line 1348 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1348 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1348 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2);

#line 1346 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3,
#line 1346 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_5,
#line 1346 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_6,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_7,
#line 1346 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_8);

#line 1329 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_7,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredProcId_8,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredName_9,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_10,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46,
#line 1329 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47);

#line 1310 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
#line 1310 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_4,
#line 1310 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal0_5,
#line 1310 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_6);

#line 1288 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
#line 1288 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_3,
#line 1288 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_4);

#line 1272 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
#line 1272 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_5,
#line 1272 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCVar_6,
#line 1272 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCSVar_7,
#line 1272 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_8);

#line 1255 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_9,
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__NumContextsVar_10,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCVar_11,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_12,
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);

#line 1234 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
#line 1234 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_8,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCSVar_9,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_10,
#line 1234 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22,
#line 1234 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24);

#line 1220 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
#line 1220 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1220 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1220 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11,
#line 1220 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_12,
#line 1220 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_9);

#line 1192 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
#line 1192 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1192 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
#line 1192 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1192 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
#line 1192 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1183 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1183 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3,
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__4_4,
#line 1183 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__5_5);

#line 1138 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
#line 1138 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1138 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1138 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 1138 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 1117 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
#line 1117 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg);

#line 1128 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
#line 1128 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg);

#line 1088 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
#line 1088 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1088 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
#line 1088 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1088 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
#line 1088 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg);

#line 1067 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1067 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_8,
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70,
#line 1067 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71);

#line 1046 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
#line 1046 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1046 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1046 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3);

#line 1038 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
#line 1038 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1038 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2);

#line 1028 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
#line 1028 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__List_3,
#line 1028 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Fixup_4);

#line 1015 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
#line 1015 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 1015 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 1015 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13,
#line 1015 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_14,
#line 1015 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 1015 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11);

#line 974 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
#line 974 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 974 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 974 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 974 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 974 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 966 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
#line 966 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 966 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 966 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 966 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 966 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 949 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
#line 949 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 949 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 949 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 949 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 949 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4);

#line 884 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
#line 884 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 884 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 884 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116,
#line 884 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117,
#line 884 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 884 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11);

#line 838 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_1,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__UseParentStack_2,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3,
#line 838 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_4,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5,
#line 838 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7,
#line 838 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8);

#line 813 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjuncts0_11,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_12,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalInfo_13,
#line 813 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_14,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27,
#line 813 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29,
#line 813 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30);

#line 712 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_11,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalPath0_12,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48,
#line 712 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50,
#line 712 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52,
#line 712 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);

#line 708 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 708 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 708 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_6,
#line 708 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_7);

#line 707 "par_loop_control.m"
static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1);

#line 701 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalIds_11,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17,
#line 701 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 701 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 701 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);

#line 660 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
#line 660 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 660 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PreserveTailRecursion_4);

#line 561 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_9,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldPredProcId_10,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldProcInfo_11,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 561 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredProcId_13,
#line 561 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredSym_14,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55,
#line 561 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56);

#line 509 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
#line 509 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 509 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Seen0_2,
#line 509 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3);

#line 460 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
#line 460 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_4,
#line 460 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 460 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 438 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
#line 438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_2,
#line 438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3,
#line 438 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4);

#line 408 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
#line 408 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conj_5,
#line 408 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_6,
#line 408 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_7,
#line 408 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 382 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(
#line 382 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_5,
#line 382 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_6,
#line 382 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalId_7,
#line 382 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8);

#line 506 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
#line 506 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 506 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 506 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 506 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3);

#line 293 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
#line 293 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 293 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 293 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2);

#line 242 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
#line 242 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal_4,
#line 242 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_5,
#line 242 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_6);

#line 137 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__DepInfo_7,
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_8,
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19,
#line 137 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20,
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21,
#line 137 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22);

#line 134 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 134 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 134 "par_loop_control.m"
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1482 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__hlds__hlds_module__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &hlds__hlds_module__hlds__hlds_module__type_ctor_info_dependency_info_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1490 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1499 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1507 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1515 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1524 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1532 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1540 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1549 "transform_hlds.par_loop_control.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1558 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0 = {
  (MR_String) "fixup_goal_info",
  (MR_Integer) 0
};

#line 1564 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1 = {
  (MR_String) "do_not_fixup_goal_info",
  (MR_Integer) 1
};

#line 1570 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1
};

#line 1576 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0
};

#line 1582 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1588 "transform_hlds.par_loop_control.c"
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

#line 1605 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0 = {
  (MR_String) "goal_is_last_goal_on_path",
  (MR_Integer) 0
};

#line 1611 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1 = {
  (MR_String) "goal_is_not_last_goal_on_path",
  (MR_Integer) 1
};

#line 1617 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

#line 1623 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

#line 1629 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1635 "transform_hlds.par_loop_control.c"
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

#line 1652 "transform_hlds.par_loop_control.c"
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

#line 1666 "transform_hlds.par_loop_control.c"
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

#line 1680 "transform_hlds.par_loop_control.c"
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

#line 1695 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

#line 1700 "transform_hlds.par_loop_control.c"
static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0
  }
};

#line 1709 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

#line 1714 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1] = {
  (MR_Integer) 0
};

#line 1719 "transform_hlds.par_loop_control.c"
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

#line 1736 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0 = {
  (MR_String) "preserve_tail_recursion",
  (MR_Integer) 0
};

#line 1742 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1 = {
  (MR_String) "do_not_preserve_tail_recursion",
  (MR_Integer) 1
};

#line 1748 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_value_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1
};

#line 1754 "transform_hlds.par_loop_control.c"
static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0
};

#line 1760 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1766 "transform_hlds.par_loop_control.c"
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

#line 1783 "transform_hlds.par_loop_control.c"
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

#line 1798 "transform_hlds.par_loop_control.c"
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

#line 1813 "transform_hlds.par_loop_control.c"
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

#line 1828 "transform_hlds.par_loop_control.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1836 "transform_hlds.par_loop_control.c"
static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1841 "transform_hlds.par_loop_control.c"
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

#line 1856 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2
};

#line 1863 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

#line 1868 "transform_hlds.par_loop_control.c"
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

#line 1882 "transform_hlds.par_loop_control.c"
static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

#line 1890 "transform_hlds.par_loop_control.c"
static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1898 "transform_hlds.par_loop_control.c"
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

#line 1915 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
#line 1918 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1920 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 1922 "transform_hlds.par_loop_control.c"
{
#line 1924 "transform_hlds.par_loop_control.c"
  {
#line 1926 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1929 "transform_hlds.par_loop_control.c"
    {
#line 1931 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 1934 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 1936 "transform_hlds.par_loop_control.c"
  }
#line 1938 "transform_hlds.par_loop_control.c"
}

#line 1941 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
#line 1944 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 1946 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1948 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 1950 "transform_hlds.par_loop_control.c"
{
#line 1952 "transform_hlds.par_loop_control.c"
  {
#line 1954 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 1957 "transform_hlds.par_loop_control.c"
    {
#line 1959 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 1962 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 1964 "transform_hlds.par_loop_control.c"
  }
#line 1966 "transform_hlds.par_loop_control.c"
}

#line 1969 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
#line 1972 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1974 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 1976 "transform_hlds.par_loop_control.c"
{
#line 1978 "transform_hlds.par_loop_control.c"
  {
#line 1980 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1983 "transform_hlds.par_loop_control.c"
    {
#line 1985 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 1988 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 1990 "transform_hlds.par_loop_control.c"
  }
#line 1992 "transform_hlds.par_loop_control.c"
}

#line 1995 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
#line 1998 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2000 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2002 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2004 "transform_hlds.par_loop_control.c"
{
#line 2006 "transform_hlds.par_loop_control.c"
  {
#line 2008 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2011 "transform_hlds.par_loop_control.c"
    {
#line 2013 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2016 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2018 "transform_hlds.par_loop_control.c"
  }
#line 2020 "transform_hlds.par_loop_control.c"
}

#line 2023 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
#line 2026 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2028 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2030 "transform_hlds.par_loop_control.c"
{
#line 2032 "transform_hlds.par_loop_control.c"
  {
#line 2034 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2037 "transform_hlds.par_loop_control.c"
    {
#line 2039 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____loop_control_info_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2042 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2044 "transform_hlds.par_loop_control.c"
  }
#line 2046 "transform_hlds.par_loop_control.c"
}

#line 2049 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
#line 2052 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2054 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2056 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2058 "transform_hlds.par_loop_control.c"
{
#line 2060 "transform_hlds.par_loop_control.c"
  {
#line 2062 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2065 "transform_hlds.par_loop_control.c"
    {
#line 2067 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____loop_control_info_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2070 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2072 "transform_hlds.par_loop_control.c"
  }
#line 2074 "transform_hlds.par_loop_control.c"
}

#line 2077 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
#line 2080 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2082 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2084 "transform_hlds.par_loop_control.c"
{
#line 2086 "transform_hlds.par_loop_control.c"
  {
#line 2088 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2091 "transform_hlds.par_loop_control.c"
    {
#line 2093 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2096 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2098 "transform_hlds.par_loop_control.c"
  }
#line 2100 "transform_hlds.par_loop_control.c"
}

#line 2103 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
#line 2106 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2108 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2110 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2112 "transform_hlds.par_loop_control.c"
{
#line 2114 "transform_hlds.par_loop_control.c"
  {
#line 2116 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2119 "transform_hlds.par_loop_control.c"
    {
#line 2121 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2124 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2126 "transform_hlds.par_loop_control.c"
  }
#line 2128 "transform_hlds.par_loop_control.c"
}

#line 2131 "transform_hlds.par_loop_control.c"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
#line 2134 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 2136 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2)
#line 2138 "transform_hlds.par_loop_control.c"
{
#line 2140 "transform_hlds.par_loop_control.c"
  {
#line 2142 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 2145 "transform_hlds.par_loop_control.c"
    {
#line 2147 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2));
    }
#line 2150 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2152 "transform_hlds.par_loop_control.c"
  }
#line 2154 "transform_hlds.par_loop_control.c"
}

#line 2157 "transform_hlds.par_loop_control.c"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
#line 2160 "transform_hlds.par_loop_control.c"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_1,
#line 2162 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 2164 "transform_hlds.par_loop_control.c"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3)
#line 2166 "transform_hlds.par_loop_control.c"
{
#line 2168 "transform_hlds.par_loop_control.c"
  {
#line 2170 "transform_hlds.par_loop_control.c"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__1_1;

#line 2173 "transform_hlds.par_loop_control.c"
    {
#line 2175 "transform_hlds.par_loop_control.c"
      transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(&transform_hlds__par_loop_control__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3));
    }
#line 2178 "transform_hlds.par_loop_control.c"
    *transform_hlds__par_loop_control__wrapper_arg_1 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__1_1));
#line 2180 "transform_hlds.par_loop_control.c"
  }
#line 2182 "transform_hlds.par_loop_control.c"
}

#line 1439 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1439__1_4_p_0(
#line 1439 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1439 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_17,
#line 1439 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_18,
#line 1439 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_19)
#line 1439 "par_loop_control.m"
{
#line 1439 "par_loop_control.m"
  {
#line 1439 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1439 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_24_24 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1439 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Var_12;
#line 1439 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_17, (MR_Integer) 0)));
#line 1439 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Inst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_17, (MR_Integer) 1)));
#line 1440 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_Var_12;

#line 1440 "par_loop_control.m"
    {
#line 1440 "par_loop_control.m"
      mercury__map__lookup_3_p_0(transform_hlds__par_loop_control__TypeInfo_24_24, transform_hlds__par_loop_control__TypeInfo_24_24, transform_hlds__par_loop_control__Remap_4, ((MR_Box) (transform_hlds__par_loop_control__OldVar_20)), &transform_hlds__par_loop_control__conv0_Var_12);
    }
#line 1440 "par_loop_control.m"
    transform_hlds__par_loop_control__Var_12 = ((MR_Word) transform_hlds__par_loop_control__conv0_Var_12);
#line 1441 "par_loop_control.m"
    {
#line 1441 "par_loop_control.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__par_loop_control__Var_12, transform_hlds__par_loop_control__Inst_21, transform_hlds__par_loop_control__HeadVar__3_18, transform_hlds__par_loop_control__HeadVar__4_19);
#line 1441 "par_loop_control.m"
      return;
    }
#line 1439 "par_loop_control.m"
  }
#line 1439 "par_loop_control.m"
}

#line 1348 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1348__1_3_p_0(
#line 1348 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_23,
#line 1348 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_114,
#line 1348 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_115)
#line 1348 "par_loop_control.m"
{
#line 1348 "par_loop_control.m"
  {
#line 1348 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1348 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_116_116 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1348 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_HeadVar__3_115;

#line 1348 "par_loop_control.m"
    {
#line 1348 "par_loop_control.m"
      mercury__map__lookup_3_p_0(transform_hlds__par_loop_control__TypeInfo_116_116, transform_hlds__par_loop_control__TypeInfo_116_116, transform_hlds__par_loop_control__Remap_23, ((MR_Box) (transform_hlds__par_loop_control__HeadVar__2_114)), &transform_hlds__par_loop_control__conv0_HeadVar__3_115);
    }
#line 1348 "par_loop_control.m"
    *transform_hlds__par_loop_control__HeadVar__3_115 = ((MR_Word) transform_hlds__par_loop_control__conv0_HeadVar__3_115);
#line 1348 "par_loop_control.m"
  }
#line 1348 "par_loop_control.m"
}

#line 1117 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1117__1_2_p_0(
#line 1117 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecPredProcId_41,
#line 1117 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_98)
#line 1117 "par_loop_control.m"
{
#line 1117 "par_loop_control.m"
  {
#line 1117 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1117 "par_loop_control.m"
    {
#line 1117 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__RecPredProcId_41, transform_hlds__par_loop_control__HeadVar__2_98);
    }
#line 1117 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1117 "par_loop_control.m"
  }
#line 1117 "par_loop_control.m"
}

#line 1128 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1128__1_2_p_0(
#line 1128 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ConjType_48,
#line 1128 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_93)
#line 1128 "par_loop_control.m"
{
#line 1128 "par_loop_control.m"
  {
#line 1128 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__ConjType_48 == transform_hlds__par_loop_control__HeadVar__2_93);

#line 1128 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1128 "par_loop_control.m"
  }
#line 1128 "par_loop_control.m"
}

#line 211 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
#line 211 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 211 "par_loop_control.m"
{
#line 211 "par_loop_control.m"
  {
#line 211 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 211 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_12 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 211 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_13 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 211 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_12 == transform_hlds__par_loop_control__CastY_13);
#line 211 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 2335 "transform_hlds.par_loop_control.c"
      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "par_loop_control.m"
    else
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
      switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__2_2)) {
#line 211 "par_loop_control.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
        case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
          switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__2_2)) {
#line 211 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
            case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
                  switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                  }
#line 211 "par_loop_control.m"
                  break;
#line 211 "par_loop_control.m"
                case (MR_Integer) 1:
#line 2389 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "par_loop_control.m"
                  break;
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
              break;
#line 211 "par_loop_control.m"
            case (MR_Integer) 1:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
                  switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                  }
#line 211 "par_loop_control.m"
                  break;
#line 211 "par_loop_control.m"
                case (MR_Integer) 1:
#line 2435 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "par_loop_control.m"
                  break;
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
              break;
#line 211 "par_loop_control.m"
            case (MR_Integer) 2:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
                  switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 211 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "par_loop_control.m"
                      break;
#line 211 "par_loop_control.m"
                  }
#line 211 "par_loop_control.m"
                  break;
#line 211 "par_loop_control.m"
                case (MR_Integer) 1:
#line 2481 "transform_hlds.par_loop_control.c"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "par_loop_control.m"
                  break;
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
              break;
#line 211 "par_loop_control.m"
          }
#line 211 "par_loop_control.m"
          break;
#line 211 "par_loop_control.m"
        case (MR_Integer) 1:
#line 211 "par_loop_control.m"
          {
#line 211 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));

#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
              case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__3_3)) {
#line 211 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 2514 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "par_loop_control.m"
                    break;
#line 211 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 2520 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "par_loop_control.m"
                    break;
#line 211 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 2526 "transform_hlds.par_loop_control.c"
                    *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "par_loop_control.m"
                    break;
#line 211 "par_loop_control.m"
                }
#line 211 "par_loop_control.m"
                break;
#line 211 "par_loop_control.m"
              case (MR_Integer) 1:
#line 211 "par_loop_control.m"
                {
#line 211 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));

#line 211 "par_loop_control.m"
                  {
#line 211 "par_loop_control.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_1[3], transform_hlds__par_loop_control__HeadVar__1_1, ((MR_Box) (transform_hlds__par_loop_control__V_15_15)), ((MR_Box) (transform_hlds__par_loop_control__V_11_11)));
#line 211 "par_loop_control.m"
                    return;
                  }
#line 211 "par_loop_control.m"
                }
#line 211 "par_loop_control.m"
                break;
#line 211 "par_loop_control.m"
            }
#line 211 "par_loop_control.m"
          }
#line 211 "par_loop_control.m"
          break;
#line 211 "par_loop_control.m"
      }
#line 211 "par_loop_control.m"
  }
#line 211 "par_loop_control.m"
}

#line 211 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 211 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 211 "par_loop_control.m"
{
#line 211 "par_loop_control.m"
  {
#line 211 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 211 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_11 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 211 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_12 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 211 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_11 == transform_hlds__par_loop_control__CastY_12);
#line 211 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 211 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 211 "par_loop_control.m"
    else
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
      switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 211 "par_loop_control.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
        case (MR_Integer) 0:
#line 211 "par_loop_control.m"
#line 211 "par_loop_control.m"
          switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 211 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 211 "par_loop_control.m"
            case (MR_Integer) 0:
#line 211 "par_loop_control.m"
              {
#line 211 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastX_3 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 211 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastY_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 211 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_4 == transform_hlds__par_loop_control__CastX_3);
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
              break;
#line 211 "par_loop_control.m"
            case (MR_Integer) 1:
#line 211 "par_loop_control.m"
              {
#line 211 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastX_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 211 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastY_6 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 211 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_6 == transform_hlds__par_loop_control__CastX_5);
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
              break;
#line 211 "par_loop_control.m"
            case (MR_Integer) 2:
#line 211 "par_loop_control.m"
              {
#line 211 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastX_7 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 211 "par_loop_control.m"
                MR_Integer transform_hlds__par_loop_control__CastY_8 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 211 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastY_8 == transform_hlds__par_loop_control__CastX_7);
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
              break;
#line 211 "par_loop_control.m"
          }
#line 211 "par_loop_control.m"
          break;
#line 211 "par_loop_control.m"
        case (MR_Integer) 1:
#line 211 "par_loop_control.m"
          {
#line 211 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__TypeInfo_13_13;
#line 211 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_10_10;

#line 211 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = ((MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 211 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 211 "par_loop_control.m"
              {
#line 211 "par_loop_control.m"
                transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 2671 "transform_hlds.par_loop_control.c"
                transform_hlds__par_loop_control__TypeInfo_13_13 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[3];
#line 2673 "transform_hlds.par_loop_control.c"
                {
#line 2675 "transform_hlds.par_loop_control.c"
                  return transform_hlds__par_loop_control__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__par_loop_control__TypeInfo_13_13, ((MR_Box) (transform_hlds__par_loop_control__V_9_9)), ((MR_Box) (transform_hlds__par_loop_control__V_10_10)));
                }
#line 211 "par_loop_control.m"
              }
#line 211 "par_loop_control.m"
          }
#line 211 "par_loop_control.m"
          break;
#line 211 "par_loop_control.m"
      }
#line 211 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 211 "par_loop_control.m"
  }
#line 211 "par_loop_control.m"
}

#line 689 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
#line 689 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 689 "par_loop_control.m"
{
#line 689 "par_loop_control.m"
  {
#line 689 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 689 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 689 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 689 "par_loop_control.m"
    {
#line 689 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 689 "par_loop_control.m"
      return;
    }
#line 689 "par_loop_control.m"
  }
#line 689 "par_loop_control.m"
}

#line 689 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 689 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 689 "par_loop_control.m"
{
#line 2734 "transform_hlds.par_loop_control.c"
  {
#line 2736 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 2739 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 2741 "transform_hlds.par_loop_control.c"
  }
#line 689 "par_loop_control.m"
}

#line 675 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
#line 675 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 675 "par_loop_control.m"
{
#line 675 "par_loop_control.m"
  {
#line 675 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 675 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_33 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 675 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_34 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 675 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_33 == transform_hlds__par_loop_control__CastY_34);
#line 675 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 2770 "transform_hlds.par_loop_control.c"
      *transform_hlds__par_loop_control__HeadVar__1_1 = (MR_Integer) 0;
#line 675 "par_loop_control.m"
    else
#line 675 "par_loop_control.m"
      {
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 3)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 4)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 5)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 6)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 7)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 8)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 9)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 1)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 2)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 3)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 4)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 5)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 6)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 7)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 8)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 9)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_24_24;

#line 675 "par_loop_control.m"
        {
#line 675 "par_loop_control.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__par_loop_control__V_24_24, transform_hlds__par_loop_control__V_4_4, transform_hlds__par_loop_control__V_14_14);
        }
#line 2824 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_24_24 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_24_24;
#line 675 "par_loop_control.m"
        else
#line 675 "par_loop_control.m"
          {
#line 675 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_25_25;

#line 675 "par_loop_control.m"
            {
#line 675 "par_loop_control.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0], &transform_hlds__par_loop_control__V_25_25, ((MR_Box) (transform_hlds__par_loop_control__V_5_5)), ((MR_Box) (transform_hlds__par_loop_control__V_15_15)));
            }
#line 2844 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_25_25 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
              *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_25_25;
#line 675 "par_loop_control.m"
            else
#line 675 "par_loop_control.m"
              {
#line 675 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_26_26;

#line 675 "par_loop_control.m"
                {
#line 675 "par_loop_control.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_26_26, transform_hlds__par_loop_control__V_6_6, transform_hlds__par_loop_control__V_16_16);
                }
#line 2864 "transform_hlds.par_loop_control.c"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_26_26 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_26_26;
#line 675 "par_loop_control.m"
                else
#line 675 "par_loop_control.m"
                  {
#line 675 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_27_27;

#line 675 "par_loop_control.m"
                    {
#line 675 "par_loop_control.m"
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_27_27, transform_hlds__par_loop_control__V_7_7, transform_hlds__par_loop_control__V_17_17);
                    }
#line 2884 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_27_27 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                    transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                      *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_27_27;
#line 675 "par_loop_control.m"
                    else
#line 675 "par_loop_control.m"
                      {
#line 675 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_28_28;

#line 675 "par_loop_control.m"
                        {
#line 675 "par_loop_control.m"
                          mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__par_loop_control__V_28_28, transform_hlds__par_loop_control__V_8_8, transform_hlds__par_loop_control__V_18_18);
                        }
#line 2904 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_28_28 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_28_28;
#line 675 "par_loop_control.m"
                        else
#line 675 "par_loop_control.m"
                          {
#line 675 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__V_29_29;
#line 675 "par_loop_control.m"
                            MR_Integer transform_hlds__par_loop_control__V_45_45 = (MR_Integer) transform_hlds__par_loop_control__V_9_9;
#line 675 "par_loop_control.m"
                            MR_Integer transform_hlds__par_loop_control__V_46_46 = (MR_Integer) transform_hlds__par_loop_control__V_19_19;

#line 675 "par_loop_control.m"
                            {
#line 675 "par_loop_control.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__par_loop_control__V_29_29, transform_hlds__par_loop_control__V_45_45, transform_hlds__par_loop_control__V_46_46);
                            }
#line 2928 "transform_hlds.par_loop_control.c"
                            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_29_29 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                            transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                            if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                              *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_29_29;
#line 675 "par_loop_control.m"
                            else
#line 675 "par_loop_control.m"
                              {
#line 675 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__V_30_30;

#line 675 "par_loop_control.m"
                                {
#line 675 "par_loop_control.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_30_30, transform_hlds__par_loop_control__V_10_10, transform_hlds__par_loop_control__V_20_20);
                                }
#line 2948 "transform_hlds.par_loop_control.c"
                                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_30_30 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                                if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_30_30;
#line 675 "par_loop_control.m"
                                else
#line 675 "par_loop_control.m"
                                  {
#line 675 "par_loop_control.m"
                                    MR_Word transform_hlds__par_loop_control__V_31_31;

#line 675 "par_loop_control.m"
                                    {
#line 675 "par_loop_control.m"
                                      mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__par_loop_control__V_31_31, transform_hlds__par_loop_control__V_11_11, transform_hlds__par_loop_control__V_21_21);
                                    }
#line 2968 "transform_hlds.par_loop_control.c"
                                    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_31_31 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                                    transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                                    if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_31_31;
#line 675 "par_loop_control.m"
                                    else
#line 675 "par_loop_control.m"
                                      {
#line 675 "par_loop_control.m"
                                        MR_Word transform_hlds__par_loop_control__V_32_32;

#line 675 "par_loop_control.m"
                                        {
#line 675 "par_loop_control.m"
                                          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__par_loop_control__V_32_32, transform_hlds__par_loop_control__V_12_12, transform_hlds__par_loop_control__V_22_22);
                                        }
#line 2988 "transform_hlds.par_loop_control.c"
                                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_32_32 == (MR_Integer) 0);
#line 675 "par_loop_control.m"
                                        transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 675 "par_loop_control.m"
                                        if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                                          *transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__V_32_32;
#line 675 "par_loop_control.m"
                                        else
#line 675 "par_loop_control.m"
                                          {
#line 675 "par_loop_control.m"
                                            mdbcomp__sym_name____Compare____sym_name_0_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__V_13_13, transform_hlds__par_loop_control__V_23_23);
#line 675 "par_loop_control.m"
                                            return;
                                          }
#line 675 "par_loop_control.m"
                                      }
#line 675 "par_loop_control.m"
                                  }
#line 675 "par_loop_control.m"
                              }
#line 675 "par_loop_control.m"
                          }
#line 675 "par_loop_control.m"
                      }
#line 675 "par_loop_control.m"
                  }
#line 675 "par_loop_control.m"
              }
#line 675 "par_loop_control.m"
          }
#line 675 "par_loop_control.m"
      }
#line 675 "par_loop_control.m"
  }
#line 675 "par_loop_control.m"
}

#line 675 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 675 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 675 "par_loop_control.m"
{
#line 675 "par_loop_control.m"
  {
#line 675 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 675 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastX_23 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__1_1;
#line 675 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__CastY_24 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;

#line 675 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CastX_23 == transform_hlds__par_loop_control__CastY_24);
#line 675 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 675 "par_loop_control.m"
    else
#line 675 "par_loop_control.m"
      {
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeInfo_26_26;
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 2)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 3)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 4)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 5)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 6)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 7)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 8)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 9)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 3)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 4)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 5)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 6)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 7)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 8)));
#line 675 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 9)));

#line 3099 "transform_hlds.par_loop_control.c"
        {
#line 3101 "transform_hlds.par_loop_control.c"
          transform_hlds__par_loop_control__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__par_loop_control__V_3_3, transform_hlds__par_loop_control__V_13_13);
        }
#line 675 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
          {
#line 3108 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__TypeInfo_26_26 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 3110 "transform_hlds.par_loop_control.c"
            {
#line 3112 "transform_hlds.par_loop_control.c"
              transform_hlds__par_loop_control__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__par_loop_control__TypeInfo_26_26, ((MR_Box) (transform_hlds__par_loop_control__V_4_4)), ((MR_Box) (transform_hlds__par_loop_control__V_14_14)));
            }
#line 675 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
              {
#line 3119 "transform_hlds.par_loop_control.c"
                {
#line 3121 "transform_hlds.par_loop_control.c"
                  transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_5_5, transform_hlds__par_loop_control__V_15_15);
                }
#line 675 "par_loop_control.m"
                if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                  {
#line 3128 "transform_hlds.par_loop_control.c"
                    {
#line 3130 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_6_6, transform_hlds__par_loop_control__V_16_16);
                    }
#line 675 "par_loop_control.m"
                    if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                      {
#line 3137 "transform_hlds.par_loop_control.c"
                        {
#line 3139 "transform_hlds.par_loop_control.c"
                          transform_hlds__par_loop_control__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_7_7, transform_hlds__par_loop_control__V_17_17);
                        }
#line 675 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                          {
#line 3146 "transform_hlds.par_loop_control.c"
                            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_8_8 == transform_hlds__par_loop_control__V_18_18);
#line 675 "par_loop_control.m"
                            if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                              {
#line 3152 "transform_hlds.par_loop_control.c"
                                {
#line 3154 "transform_hlds.par_loop_control.c"
                                  transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_9_9, transform_hlds__par_loop_control__V_19_19);
                                }
#line 675 "par_loop_control.m"
                                if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                                  {
#line 3161 "transform_hlds.par_loop_control.c"
                                    {
#line 3163 "transform_hlds.par_loop_control.c"
                                      transform_hlds__par_loop_control__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_10_10, transform_hlds__par_loop_control__V_20_20);
                                    }
#line 675 "par_loop_control.m"
                                    if (transform_hlds__par_loop_control__succeeded)
#line 675 "par_loop_control.m"
                                      {
#line 3170 "transform_hlds.par_loop_control.c"
                                        {
#line 3172 "transform_hlds.par_loop_control.c"
                                          transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__par_loop_control__V_11_11, transform_hlds__par_loop_control__V_21_21);
                                        }
#line 675 "par_loop_control.m"
                                        if (transform_hlds__par_loop_control__succeeded)
#line 3177 "transform_hlds.par_loop_control.c"
                                          {
#line 3179 "transform_hlds.par_loop_control.c"
                                            return transform_hlds__par_loop_control__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__par_loop_control__V_12_12, transform_hlds__par_loop_control__V_22_22);
                                          }
#line 675 "par_loop_control.m"
                                      }
#line 675 "par_loop_control.m"
                                  }
#line 675 "par_loop_control.m"
                              }
#line 675 "par_loop_control.m"
                          }
#line 675 "par_loop_control.m"
                      }
#line 675 "par_loop_control.m"
                  }
#line 675 "par_loop_control.m"
              }
#line 675 "par_loop_control.m"
          }
#line 675 "par_loop_control.m"
      }
#line 675 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 675 "par_loop_control.m"
  }
#line 675 "par_loop_control.m"
}

#line 697 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
#line 697 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 697 "par_loop_control.m"
{
#line 697 "par_loop_control.m"
  {
#line 697 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 697 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 697 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 697 "par_loop_control.m"
    {
#line 697 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 697 "par_loop_control.m"
      return;
    }
#line 697 "par_loop_control.m"
  }
#line 697 "par_loop_control.m"
}

#line 697 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 697 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 697 "par_loop_control.m"
{
#line 3248 "transform_hlds.par_loop_control.c"
  {
#line 3250 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 3253 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 3255 "transform_hlds.par_loop_control.c"
  }
#line 697 "par_loop_control.m"
}

#line 1304 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
#line 1304 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__1_1,
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3)
#line 1304 "par_loop_control.m"
{
#line 1304 "par_loop_control.m"
  {
#line 1304 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1304 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__2_2;
#line 1304 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__par_loop_control__HeadVar__3_3;

#line 1304 "par_loop_control.m"
    {
#line 1304 "par_loop_control.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__par_loop_control__HeadVar__1_1, transform_hlds__par_loop_control__Cast_HeadVar1_4, transform_hlds__par_loop_control__Cast_HeadVar2_5);
#line 1304 "par_loop_control.m"
      return;
    }
#line 1304 "par_loop_control.m"
  }
#line 1304 "par_loop_control.m"
}

#line 1304 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_1,
#line 1304 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2)
#line 1304 "par_loop_control.m"
{
#line 3301 "transform_hlds.par_loop_control.c"
  {
#line 3303 "transform_hlds.par_loop_control.c"
    MR_bool transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HeadVar__2_1 == transform_hlds__par_loop_control__HeadVar__2_2);

#line 3306 "transform_hlds.par_loop_control.c"
    return transform_hlds__par_loop_control__succeeded;
#line 3308 "transform_hlds.par_loop_control.c"
  }
#line 1304 "par_loop_control.m"
}

#line 1513 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
#line 1513 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1513 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1513 "par_loop_control.m"
{
#line 1516 "par_loop_control.m"
  {
#line 1516 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1516 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_4;
#line 1516 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_5;

#line 1542 "par_loop_control.m"
    {
#line 1542 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_3, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_join_and_terminate", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_4, &transform_hlds__par_loop_control__ProcId_5);
    }
#line 1516 "par_loop_control.m"
    {
#line 1516 "par_loop_control.m"
      MR_Word base;
#line 1516 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = base;
#line 1516 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_4));
#line 1516 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_5));
#line 1516 "par_loop_control.m"
    }
#line 1516 "par_loop_control.m"
  }
#line 1513 "par_loop_control.m"
}

#line 1508 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void)
#line 1508 "par_loop_control.m"
{
#line 1510 "par_loop_control.m"
  {
#line 1510 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1510 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[10]);
#line 1510 "par_loop_control.m"
  }
#line 1508 "par_loop_control.m"
}

#line 1482 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
#line 1482 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_4,
#line 1482 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredId_5,
#line 1482 "par_loop_control.m"
  MR_Integer * transform_hlds__par_loop_control__ProcId_6)
#line 1482 "par_loop_control.m"
{
#line 1485 "par_loop_control.m"
  {
#line 1485 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1542 "par_loop_control.m"
    {
#line 1542 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_4, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_default_num_contexts", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__par_loop_control__PredId_5, transform_hlds__par_loop_control__ProcId_6);
#line 1542 "par_loop_control.m"
      return;
    }
#line 1485 "par_loop_control.m"
  }
#line 1482 "par_loop_control.m"
}

#line 1476 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void)
#line 1476 "par_loop_control.m"
{
#line 1478 "par_loop_control.m"
  {
#line 1478 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1478 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[9]);
#line 1478 "par_loop_control.m"
  }
#line 1476 "par_loop_control.m"
}

#line 1466 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
#line 1466 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 1466 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1466 "par_loop_control.m"
{
#line 1468 "par_loop_control.m"
  {
#line 1468 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1468 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_4;
#line 1468 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_5;

#line 1542 "par_loop_control.m"
    {
#line 1542 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_3, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_wait_free_slot", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_4, &transform_hlds__par_loop_control__ProcId_5);
    }
#line 1468 "par_loop_control.m"
    {
#line 1468 "par_loop_control.m"
      MR_Word base;
#line 1468 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = base;
#line 1468 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_4));
#line 1468 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_5));
#line 1468 "par_loop_control.m"
    }
#line 1468 "par_loop_control.m"
  }
#line 1466 "par_loop_control.m"
}

#line 1457 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void)
#line 1457 "par_loop_control.m"
{
#line 1459 "par_loop_control.m"
  {
#line 1459 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1459 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[8]);
#line 1459 "par_loop_control.m"
  }
#line 1457 "par_loop_control.m"
}

#line 1446 "par_loop_control.m"
static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void)
#line 1446 "par_loop_control.m"
{
#line 1448 "par_loop_control.m"
  {
#line 1448 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1448 "par_loop_control.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]);
#line 1448 "par_loop_control.m"
  }
#line 1446 "par_loop_control.m"
}

#line 1439 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
#line 1439 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1439 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1439 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1439 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 1439 "par_loop_control.m"
{
#line 1439 "par_loop_control.m"
  {
#line 1439 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1439 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__4_19;

#line 1439 "par_loop_control.m"
    {
#line 1439 "par_loop_control.m"
      transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1439__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv0_HeadVar__4_19);
    }
#line 1439 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__4_19));
#line 1439 "par_loop_control.m"
  }
#line 1439 "par_loop_control.m"
}

#line 1433 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
#line 1433 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Remap_4,
#line 1433 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldInstmapDelta_5,
#line 1433 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13)
#line 1433 "par_loop_control.m"
{
#line 1436 "par_loop_control.m"
  {
#line 1436 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__VarInsts_7;
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14;
#line 1436 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_15_15;
#line 1439 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13;

#line 1437 "par_loop_control.m"
    {
#line 1437 "par_loop_control.m"
      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__par_loop_control__OldInstmapDelta_5, &transform_hlds__par_loop_control__VarInsts_7);
    }
#line 1438 "par_loop_control.m"
    {
#line 1438 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14);
    }
#line 1439 "par_loop_control.m"
    {
#line 1439 "par_loop_control.m"
      transform_hlds__par_loop_control__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_9[0]));
#line 1439 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 1) = ((MR_Box) (transform_hlds__par_loop_control__remap_instmap_3_p_0_1));
#line 1439 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1439 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_15_15, 3) = ((MR_Box) (transform_hlds__par_loop_control__Remap_4));
#line 1439 "par_loop_control.m"
    }
#line 1439 "par_loop_control.m"
    {
#line 1439 "par_loop_control.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__par_loop_control_scalar_common_2[1], (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, transform_hlds__par_loop_control__V_15_15, transform_hlds__par_loop_control__VarInsts_7, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_14_14)), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13);
    }
#line 1439 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_InstmapDelta_13 = ((MR_Word) transform_hlds__par_loop_control__conv1_STATE_VARIABLE_InstmapDelta_13);
#line 1436 "par_loop_control.m"
  }
#line 1433 "par_loop_control.m"
}

#line 1419 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVarSet_10,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldVar_11,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__VarType_12,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18,
#line 1419 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20,
#line 1419 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21,
#line 1419 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22,
#line 1419 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23)
#line 1419 "par_loop_control.m"
{
#line 1424 "par_loop_control.m"
  {
#line 1424 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1424 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_31_31;
#line 1424 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Var_17;
#line 1427 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__Name_16;

#line 1425 "par_loop_control.m"
    {
#line 1425 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__OldVarSet_10, transform_hlds__par_loop_control__OldVar_11, &transform_hlds__par_loop_control__Name_16);
    }
#line 1427 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 1426 "par_loop_control.m"
      {
#line 1426 "par_loop_control.m"
        {
#line 1426 "par_loop_control.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__Name_16, &transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19);
        }
#line 1426 "par_loop_control.m"
      }
#line 1427 "par_loop_control.m"
    else
#line 1428 "par_loop_control.m"
      {
#line 1428 "par_loop_control.m"
        {
#line 1428 "par_loop_control.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_18, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_19);
        }
#line 1428 "par_loop_control.m"
      }
#line 1430 "par_loop_control.m"
    {
#line 1430 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__Var_17, transform_hlds__par_loop_control__VarType_12, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_20, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_21);
    }
#line 3651 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_31_31 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1431 "par_loop_control.m"
    {
#line 1431 "par_loop_control.m"
      mercury__map__det_insert_4_p_0(transform_hlds__par_loop_control__TypeInfo_31_31, transform_hlds__par_loop_control__TypeInfo_31_31, ((MR_Box) (transform_hlds__par_loop_control__OldVar_11)), ((MR_Box) (transform_hlds__par_loop_control__Var_17)), transform_hlds__par_loop_control__STATE_VARIABLE_Remap_0_22, transform_hlds__par_loop_control__STATE_VARIABLE_Remap_23);
#line 1431 "par_loop_control.m"
      return;
    }
#line 1424 "par_loop_control.m"
  }
#line 1419 "par_loop_control.m"
}

#line 1348 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
#line 1348 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1348 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1348 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2)
#line 1348 "par_loop_control.m"
{
#line 1348 "par_loop_control.m"
  {
#line 1348 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1348 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv6_HeadVar__3_115;

#line 1348 "par_loop_control.m"
    {
#line 1348 "par_loop_control.m"
      transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1348__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv6_HeadVar__3_115);
    }
#line 1348 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv6_HeadVar__3_115));
#line 1348 "par_loop_control.m"
  }
#line 1348 "par_loop_control.m"
}

#line 1346 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_3,
#line 1346 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_5,
#line 1346 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_6,
#line 1346 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_7,
#line 1346 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_8)
#line 1346 "par_loop_control.m"
{
#line 1346 "par_loop_control.m"
  {
#line 1346 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1346 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19;
#line 1346 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21;
#line 1346 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23;

#line 1346 "par_loop_control.m"
    {
#line 1346 "par_loop_control.m"
      transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_3), &transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_5), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_7), &transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23);
    }
#line 1346 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_19));
#line 1346 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_6 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_21));
#line 1346 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_8 = ((MR_Box) (transform_hlds__par_loop_control__conv0_STATE_VARIABLE_Remap_23));
#line 1346 "par_loop_control.m"
  }
#line 1346 "par_loop_control.m"
}

#line 1329 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_7,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredProcId_8,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__InnerPredName_9,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_10,
#line 1329 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46,
#line 1329 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47)
#line 1329 "par_loop_control.m"
{
#line 1333 "par_loop_control.m"
  {
#line 1333 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_100_100;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_109_109;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_110_110;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_117_117;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__PredProcId_7, (MR_Integer) 0)));
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredInfo_14;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVarTypes_15;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars0_16;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_17;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigGoal_18;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigInstmapDelta_19;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldVarSet_22;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Remap_23;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars_24;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarmaps0_25;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarmaps_26;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NumContextsVar_27;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28;
#line 1333 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GetNumContextsGoalInfo_30;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GetNumContextsGoal_31;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_32;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCCreateGoal_33;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerCallArgs_34;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_35;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_36;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerProcCallGoalInfo_37;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerPredId_38;
#line 1333 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__InnerProcId_39;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InnerProcCallGoal_40;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ConjGoalInfo_41;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ConjGoal_42;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OrigPurity_43;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Body_44;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_48_48;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_51_51;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_54_54;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_55_55;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_57_57;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_65_65;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_66_66;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_69_69;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_71_71;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_76_76;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_80_80;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_83_83;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_85_85;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_87_87;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_88_88;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_89_89;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_91_91;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95;
#line 1333 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96;
#line 1334 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__PredProcId_7, (MR_Integer) 1)));
#line 1340 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_98_98;
#line 1346 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52;
#line 1346 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53;
#line 1346 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv3_Remap_23;
#line 1398 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_99_99;

#line 1335 "par_loop_control.m"
    {
#line 1335 "par_loop_control.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__par_loop_control__ModuleInfo_10, transform_hlds__par_loop_control__PredId_12, &transform_hlds__par_loop_control__PredInfo_14);
    }
#line 1336 "par_loop_control.m"
    {
#line 1336 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__par_loop_control__PredInfo_14, &transform_hlds__par_loop_control__HeadVarTypes_15);
    }
#line 1337 "par_loop_control.m"
    {
#line 1337 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__HeadVars0_16);
    }
#line 1338 "par_loop_control.m"
    {
#line 1338 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__Detism_17);
    }
#line 1339 "par_loop_control.m"
    {
#line 1339 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__OrigGoal_18);
    }
#line 1340 "par_loop_control.m"
    transform_hlds__par_loop_control__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 0)));
#line 1340 "par_loop_control.m"
    transform_hlds__par_loop_control__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 1)));
#line 1340 "par_loop_control.m"
    {
#line 1340 "par_loop_control.m"
      transform_hlds__par_loop_control__OrigInstmapDelta_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__par_loop_control__V_48_48);
    }
#line 3941 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1343 "par_loop_control.m"
    {
#line 1343 "par_loop_control.m"
      mercury__varset__init_1_p_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49);
    }
#line 1344 "par_loop_control.m"
    {
#line 1344 "par_loop_control.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50);
    }
#line 1345 "par_loop_control.m"
    {
#line 1345 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__OldVarSet_22);
    }
#line 1346 "par_loop_control.m"
    {
#line 1346 "par_loop_control.m"
      transform_hlds__par_loop_control__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[1]));
#line 1346 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_1));
#line 1346 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1346 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_51_51, 3) = ((MR_Box) (transform_hlds__par_loop_control__OldVarSet_22));
#line 1346 "par_loop_control.m"
    }
#line 3972 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_109_109 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 1347 "par_loop_control.m"
    {
#line 1347 "par_loop_control.m"
      transform_hlds__par_loop_control__V_54_54 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeInfo_109_109);
    }
#line 3979 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1346 "par_loop_control.m"
    {
#line 1346 "par_loop_control.m"
      mercury__list__foldl3_corresponding_9_p_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeCtorInfo_110_110, (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__par_loop_control_scalar_common_2[0], transform_hlds__par_loop_control__V_51_51, transform_hlds__par_loop_control__HeadVars0_16, transform_hlds__par_loop_control__HeadVarTypes_15, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_49_49)), &transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_50_50)), &transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53, ((MR_Box) (transform_hlds__par_loop_control__V_54_54)), &transform_hlds__par_loop_control__conv3_Remap_23);
    }
#line 1346 "par_loop_control.m"
    transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52 = ((MR_Word) transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_52_52);
#line 1346 "par_loop_control.m"
    transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53 = ((MR_Word) transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_53_53);
#line 1346 "par_loop_control.m"
    transform_hlds__par_loop_control__Remap_23 = ((MR_Word) transform_hlds__par_loop_control__conv3_Remap_23);
#line 1348 "par_loop_control.m"
    {
#line 1348 "par_loop_control.m"
      transform_hlds__par_loop_control__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[3]));
#line 1348 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_2));
#line 1348 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1348 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_55_55, 3) = ((MR_Box) (transform_hlds__par_loop_control__Remap_23));
#line 1348 "par_loop_control.m"
    }
#line 1348 "par_loop_control.m"
    {
#line 1348 "par_loop_control.m"
      mercury__list__map_3_p_0(transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__TypeInfo_109_109, transform_hlds__par_loop_control__V_55_55, transform_hlds__par_loop_control__HeadVars0_16, &transform_hlds__par_loop_control__HeadVars_24);
    }
#line 1349 "par_loop_control.m"
    {
#line 1349 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__par_loop_control__HeadVars_24, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_46, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56);
    }
#line 1352 "par_loop_control.m"
    {
#line 1352 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__par_loop_control__RttiVarmaps0_25);
    }
#line 4021 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_117_117 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[2];
#line 1353 "par_loop_control.m"
    {
#line 1353 "par_loop_control.m"
      transform_hlds__par_loop_control__V_57_57 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_117_117, transform_hlds__par_loop_control__TypeInfo_117_117);
    }
#line 1353 "par_loop_control.m"
    {
#line 1353 "par_loop_control.m"
      transform_hlds__par_loop_control__V_58_58 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_117_117, transform_hlds__par_loop_control__TypeCtorInfo_110_110);
    }
#line 1353 "par_loop_control.m"
    {
#line 1353 "par_loop_control.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__par_loop_control__V_57_57, transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__Remap_23, transform_hlds__par_loop_control__RttiVarmaps0_25, &transform_hlds__par_loop_control__RttiVarmaps_26);
    }
#line 1355 "par_loop_control.m"
    {
#line 1355 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__par_loop_control__RttiVarmaps_26, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59);
    }
#line 1361 "par_loop_control.m"
    {
#line 1361 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, (MR_String) "NumContexts", &transform_hlds__par_loop_control__NumContextsVar_27, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_52_52, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61);
    }
#line 1362 "par_loop_control.m"
    {
#line 1362 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__NumContextsVar_27, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_6[1]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63);
    }
#line 1364 "par_loop_control.m"
    {
#line 1364 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(transform_hlds__par_loop_control__ModuleInfo_10, &transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28, &transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29);
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      transform_hlds__par_loop_control__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_69_69, 0) = ((MR_Box) (transform_hlds__par_loop_control__NumContextsVar_27));
#line 1366 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "par_loop_control.m"
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      transform_hlds__par_loop_control__V_65_65 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__V_69_69);
    }
#line 1367 "par_loop_control.m"
    {
#line 1367 "par_loop_control.m"
      transform_hlds__par_loop_control__V_66_66 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__par_loop_control__NumContextsVar_27);
    }
#line 1366 "par_loop_control.m"
    {
#line 1366 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_65_65, transform_hlds__par_loop_control__V_66_66, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__par_loop_control__GetNumContextsGoalInfo_30);
    }
#line 1371 "par_loop_control.m"
    {
#line 1371 "par_loop_control.m"
      transform_hlds__par_loop_control__V_76_76 = transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0();
    }
#line 1369 "par_loop_control.m"
    {
#line 1369 "par_loop_control.m"
      transform_hlds__par_loop_control__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCDefaultNumContextsPredId_28));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCDefaultNumContextsProcId_29));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_69_69));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_71_71, 5) = ((MR_Box) (transform_hlds__par_loop_control__V_76_76));
#line 1369 "par_loop_control.m"
    }
#line 1369 "par_loop_control.m"
    {
#line 1369 "par_loop_control.m"
      transform_hlds__par_loop_control__GetNumContextsGoal_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__GetNumContextsGoal_31, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_71_71));
#line 1369 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__GetNumContextsGoal_31, 1) = ((MR_Box) (transform_hlds__par_loop_control__GetNumContextsGoalInfo_30));
#line 1369 "par_loop_control.m"
    }
#line 1375 "par_loop_control.m"
    {
#line 1375 "par_loop_control.m"
      transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(transform_hlds__par_loop_control__ModuleInfo_10, transform_hlds__par_loop_control__NumContextsVar_27, &transform_hlds__par_loop_control__LCVar_32, &transform_hlds__par_loop_control__LCCreateGoal_33, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_61_61, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78);
    }
#line 1379 "par_loop_control.m"
    {
#line 1379 "par_loop_control.m"
      transform_hlds__par_loop_control__InnerCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__InnerCallArgs_34, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_32));
#line 1379 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__InnerCallArgs_34, 1) = ((MR_Box) (transform_hlds__par_loop_control__HeadVars_24));
#line 1379 "par_loop_control.m"
    }
#line 1380 "par_loop_control.m"
    {
#line 1380 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__InnerCallArgs_34);
    }
#line 1383 "par_loop_control.m"
    {
#line 1383 "par_loop_control.m"
      transform_hlds__par_loop_control__remap_instmap_3_p_0(transform_hlds__par_loop_control__Remap_23, transform_hlds__par_loop_control__OrigInstmapDelta_19, &transform_hlds__par_loop_control__InstmapDelta_36);
    }
#line 1384 "par_loop_control.m"
    {
#line 1384 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__NonLocals_35, transform_hlds__par_loop_control__InstmapDelta_36, transform_hlds__par_loop_control__Detism_17, (MR_Integer) 2, &transform_hlds__par_loop_control__InnerProcCallGoalInfo_37);
    }
#line 1386 "par_loop_control.m"
    transform_hlds__par_loop_control__InnerPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerPredProcId_8, (MR_Integer) 0)));
#line 1386 "par_loop_control.m"
    transform_hlds__par_loop_control__InnerProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerPredProcId_8, (MR_Integer) 1)));
#line 1387 "par_loop_control.m"
    {
#line 1387 "par_loop_control.m"
      transform_hlds__par_loop_control__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredId_38));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcId_39));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 2) = ((MR_Box) (transform_hlds__par_loop_control__InnerCallArgs_34));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_80_80, 5) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredName_9));
#line 1387 "par_loop_control.m"
    }
#line 1387 "par_loop_control.m"
    {
#line 1387 "par_loop_control.m"
      transform_hlds__par_loop_control__InnerProcCallGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerProcCallGoal_40, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_80_80));
#line 1387 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__InnerProcCallGoal_40, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcCallGoalInfo_37));
#line 1387 "par_loop_control.m"
    }
#line 1392 "par_loop_control.m"
    {
#line 1392 "par_loop_control.m"
      transform_hlds__par_loop_control__V_83_83 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_100_100, transform_hlds__par_loop_control__HeadVars_24);
    }
#line 1392 "par_loop_control.m"
    {
#line 1392 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_83_83, transform_hlds__par_loop_control__InstmapDelta_36, transform_hlds__par_loop_control__Detism_17, (MR_Integer) 2, &transform_hlds__par_loop_control__ConjGoalInfo_41);
    }
#line 1395 "par_loop_control.m"
    {
#line 1395 "par_loop_control.m"
      transform_hlds__par_loop_control__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_89_89, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcCallGoal_40));
#line 1395 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "par_loop_control.m"
    }
#line 1395 "par_loop_control.m"
    {
#line 1395 "par_loop_control.m"
      transform_hlds__par_loop_control__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_88_88, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCCreateGoal_33));
#line 1395 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_88_88, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_89_89));
#line 1395 "par_loop_control.m"
    }
#line 1395 "par_loop_control.m"
    {
#line 1395 "par_loop_control.m"
      transform_hlds__par_loop_control__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_87_87, 0) = ((MR_Box) (transform_hlds__par_loop_control__GetNumContextsGoal_31));
#line 1395 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_87_87, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_88_88));
#line 1395 "par_loop_control.m"
    }
#line 1394 "par_loop_control.m"
    {
#line 1394 "par_loop_control.m"
      transform_hlds__par_loop_control__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_85_85, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_87_87));
#line 1394 "par_loop_control.m"
    }
#line 1394 "par_loop_control.m"
    {
#line 1394 "par_loop_control.m"
      transform_hlds__par_loop_control__ConjGoal_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ConjGoal_42, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_85_85));
#line 1394 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ConjGoal_42, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjGoalInfo_41));
#line 1394 "par_loop_control.m"
    }
#line 1398 "par_loop_control.m"
    transform_hlds__par_loop_control__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 0)));
#line 1398 "par_loop_control.m"
    transform_hlds__par_loop_control__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OrigGoal_18, (MR_Integer) 1)));
#line 1398 "par_loop_control.m"
    {
#line 1398 "par_loop_control.m"
      transform_hlds__par_loop_control__OrigPurity_43 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__par_loop_control__V_91_91);
    }
#line 1404 "par_loop_control.m"
#line 1404 "par_loop_control.m"
    switch (transform_hlds__par_loop_control__OrigPurity_43) {
#line 1404 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1404 "par_loop_control.m"
      case (MR_Integer) 2:
#line 1403 "par_loop_control.m"
        transform_hlds__par_loop_control__Body_44 = transform_hlds__par_loop_control__ConjGoal_42;
#line 1404 "par_loop_control.m"
        break;
#line 1404 "par_loop_control.m"
      case (MR_Integer) 0:
#line 1404 "par_loop_control.m"
      case (MR_Integer) 1:
#line 1407 "par_loop_control.m"
        {
#line 1407 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__ScopeGoalInfo_45;
#line 1407 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_93_93;
#line 1407 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_94_94;

#line 1409 "par_loop_control.m"
          {
#line 1409 "par_loop_control.m"
            hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, transform_hlds__par_loop_control__ConjGoalInfo_41, &transform_hlds__par_loop_control__ScopeGoalInfo_45);
          }
#line 1410 "par_loop_control.m"
          {
#line 1410 "par_loop_control.m"
            transform_hlds__par_loop_control__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "par_loop_control.m"
            MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__V_94_94, 0) = ((MR_Box) (transform_hlds__par_loop_control__OrigPurity_43));
#line 1410 "par_loop_control.m"
          }
#line 1410 "par_loop_control.m"
          {
#line 1410 "par_loop_control.m"
            transform_hlds__par_loop_control__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "par_loop_control.m"
            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1410 "par_loop_control.m"
            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_94_94));
#line 1410 "par_loop_control.m"
            MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_93_93, 2) = ((MR_Box) (transform_hlds__par_loop_control__ConjGoal_42));
#line 1410 "par_loop_control.m"
          }
#line 1410 "par_loop_control.m"
          {
#line 1410 "par_loop_control.m"
            transform_hlds__par_loop_control__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Body_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_93_93));
#line 1410 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Body_44, 1) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalInfo_45));
#line 1410 "par_loop_control.m"
          }
#line 1407 "par_loop_control.m"
        }
#line 1404 "par_loop_control.m"
        break;
#line 1404 "par_loop_control.m"
    }
#line 1414 "par_loop_control.m"
    {
#line 1414 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__par_loop_control__Body_44, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95);
    }
#line 1415 "par_loop_control.m"
    {
#line 1415 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_95_95, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96);
    }
#line 1416 "par_loop_control.m"
    {
#line 1416 "par_loop_control.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_47);
#line 1416 "par_loop_control.m"
      return;
    }
#line 1333 "par_loop_control.m"
  }
#line 1329 "par_loop_control.m"
}

#line 1310 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
#line 1310 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_4,
#line 1310 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal0_5,
#line 1310 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_6)
#line 1310 "par_loop_control.m"
{
#line 1315 "par_loop_control.m"
  {
#line 1315 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_5, (MR_Integer) 0)));
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 1)));
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_5, (MR_Integer) 1)));
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12;
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13;
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14;
#line 1315 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 0)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 2)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 3)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 4)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 5)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 6)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 7)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 8)));
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_4, (MR_Integer) 9)));

#line 1318 "par_loop_control.m"
    {
#line 1318 "par_loop_control.m"
      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11);
    }
#line 1319 "par_loop_control.m"
    {
#line 1319 "par_loop_control.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__LCVar_10, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_12, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13);
    }
#line 1320 "par_loop_control.m"
    {
#line 1320 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_13, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_11_11, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14);
    }
#line 1322 "par_loop_control.m"
    {
#line 1322 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_14, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 1324 "par_loop_control.m"
    {
#line 1324 "par_loop_control.m"
      MR_Word base;
#line 1324 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_6 = base;
#line 1324 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_9));
#line 1324 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_16));
#line 1324 "par_loop_control.m"
    }
#line 1315 "par_loop_control.m"
  }
#line 1310 "par_loop_control.m"
}

#line 1288 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
#line 1288 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_3,
#line 1288 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_4)
#line 1288 "par_loop_control.m"
{
#line 1291 "par_loop_control.m"
  {
#line 1291 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_5;
#line 1291 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_6;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_7;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_8;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_9;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_10;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_11;
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 0)));
#line 1291 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_13_13;
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 1)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 2)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 3)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 4)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 5)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 6)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 7)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 8)));
#line 1292 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 9)));
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_32_32;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_34_34;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_35_35;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_36_36;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_37_37;
#line 1293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_38_38;

#line 1542 "par_loop_control.m"
    {
#line 1542 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__V_12_12, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_finish", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredId_5, &transform_hlds__par_loop_control__ProcId_6);
    }
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 0)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 1)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 2)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 3)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 4)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 5)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 6)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 7)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 8)));
#line 1293 "par_loop_control.m"
    transform_hlds__par_loop_control__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_3, (MR_Integer) 9)));
#line 1295 "par_loop_control.m"
    {
#line 1295 "par_loop_control.m"
      transform_hlds__par_loop_control__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_7));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1295 "par_loop_control.m"
    }
#line 1295 "par_loop_control.m"
    {
#line 1295 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_5));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_6));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_13_13));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1295 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_8, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[7])));
#line 1295 "par_loop_control.m"
    }
#line 1297 "par_loop_control.m"
    {
#line 1297 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_13_13);
    }
#line 1298 "par_loop_control.m"
    {
#line 1298 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__InstmapDelta_10);
    }
#line 1299 "par_loop_control.m"
    {
#line 1299 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_11 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_9, transform_hlds__par_loop_control__InstmapDelta_10, (MR_Integer) 0);
    }
#line 1300 "par_loop_control.m"
    {
#line 1300 "par_loop_control.m"
      MR_Word base;
#line 1300 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_4 = base;
#line 1300 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_8));
#line 1300 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_11));
#line 1300 "par_loop_control.m"
    }
#line 1291 "par_loop_control.m"
  }
#line 1288 "par_loop_control.m"
}

#line 1272 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
#line 1272 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_5,
#line 1272 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCVar_6,
#line 1272 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__LCSVar_7,
#line 1272 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_8)
#line 1272 "par_loop_control.m"
{
#line 1275 "par_loop_control.m"
  {
#line 1275 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_9;
#line 1275 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_10;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 9)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_12;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_13;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_14;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_15;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 8)));
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17;
#line 1275 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18;
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 0)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 1)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 2)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 3)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 4)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 5)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 6)));
#line 1276 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_5, (MR_Integer) 7)));

#line 1276 "par_loop_control.m"
    transform_hlds__par_loop_control__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_16_16, (MR_Integer) 0)));
#line 1276 "par_loop_control.m"
    transform_hlds__par_loop_control__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_16_16, (MR_Integer) 1)));
#line 1279 "par_loop_control.m"
    {
#line 1279 "par_loop_control.m"
      transform_hlds__par_loop_control__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_18_18, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCSVar_7));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1279 "par_loop_control.m"
    }
#line 1279 "par_loop_control.m"
    {
#line 1279 "par_loop_control.m"
      transform_hlds__par_loop_control__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_17_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_6));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_17_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_18_18));
#line 1279 "par_loop_control.m"
    }
#line 1279 "par_loop_control.m"
    {
#line 1279 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_9));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_10));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_17_17));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1279 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_12, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_11));
#line 1279 "par_loop_control.m"
    }
#line 1281 "par_loop_control.m"
    {
#line 1281 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_17_17);
    }
#line 1282 "par_loop_control.m"
    {
#line 1282 "par_loop_control.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__par_loop_control__InstmapDelta_14);
    }
#line 1283 "par_loop_control.m"
    {
#line 1283 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_15 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_13, transform_hlds__par_loop_control__InstmapDelta_14, (MR_Integer) 0);
    }
#line 1284 "par_loop_control.m"
    {
#line 1284 "par_loop_control.m"
      MR_Word base;
#line 1284 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_8 = base;
#line 1284 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_12));
#line 1284 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_15));
#line 1284 "par_loop_control.m"
    }
#line 1275 "par_loop_control.m"
  }
#line 1272 "par_loop_control.m"
}

#line 1255 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_9,
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__NumContextsVar_10,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCVar_11,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_12,
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 1255 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 1255 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22)
#line 1255 "par_loop_control.m"
{
#line 1260 "par_loop_control.m"
  {
#line 1260 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCCreatePredId_15;
#line 1260 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__LCCreateProcId_16;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_17;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_18;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_27_27;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_28_28;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_33_33;
#line 1260 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_34_34;

#line 1261 "par_loop_control.m"
    {
#line 1261 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_40_40, (MR_String) "LC", transform_hlds__par_loop_control__LCVar_11, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20);
    }
#line 1262 "par_loop_control.m"
    {
#line 1262 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__par_loop_control__LCVar_11, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22);
    }
#line 1542 "par_loop_control.m"
    {
#line 1542 "par_loop_control.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__par_loop_control__ModuleInfo_9, (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[2], (MR_String) "lc_create", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__LCCreatePredId_15, &transform_hlds__par_loop_control__LCCreateProcId_16);
    }
#line 1265 "par_loop_control.m"
    {
#line 1265 "par_loop_control.m"
      transform_hlds__par_loop_control__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_28_28, 0) = ((MR_Box) (*transform_hlds__par_loop_control__LCVar_11));
#line 1265 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "par_loop_control.m"
    }
#line 1265 "par_loop_control.m"
    {
#line 1265 "par_loop_control.m"
      transform_hlds__par_loop_control__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_27_27, 0) = ((MR_Box) (transform_hlds__par_loop_control__NumContextsVar_10));
#line 1265 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_27_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_28_28));
#line 1265 "par_loop_control.m"
    }
#line 1264 "par_loop_control.m"
    {
#line 1264 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCCreatePredId_15));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCCreateProcId_16));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_27_27));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[6])));
#line 1264 "par_loop_control.m"
    }
#line 1266 "par_loop_control.m"
    {
#line 1266 "par_loop_control.m"
      transform_hlds__par_loop_control__V_33_33 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_40_40, transform_hlds__par_loop_control__V_27_27);
    }
#line 1267 "par_loop_control.m"
    {
#line 1267 "par_loop_control.m"
      transform_hlds__par_loop_control__V_34_34 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__par_loop_control__LCVar_11);
    }
#line 1266 "par_loop_control.m"
    {
#line 1266 "par_loop_control.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__par_loop_control__V_33_33, transform_hlds__par_loop_control__V_34_34, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__par_loop_control__GoalInfo_18);
    }
#line 1268 "par_loop_control.m"
    {
#line 1268 "par_loop_control.m"
      MR_Word base;
#line 1268 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_12 = base;
#line 1268 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_17));
#line 1268 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_18));
#line 1268 "par_loop_control.m"
    }
#line 1260 "par_loop_control.m"
  }
#line 1255 "par_loop_control.m"
}

#line 1234 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
#line 1234 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_8,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__LCSVar_9,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_10,
#line 1234 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22,
#line 1234 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23,
#line 1234 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24)
#line 1234 "par_loop_control.m"
{
#line 1239 "par_loop_control.m"
  {
#line 1239 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_13;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_14;
#line 1239 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_15;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SymName_16;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_17;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__NonLocals_18;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_19;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_20;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_30_30;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_31_31;
#line 1239 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_44_44;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_39_39;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_40_40;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_41_41;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_42_42;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_43_43;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_46_46;
#line 1242 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_47_47;

#line 1240 "par_loop_control.m"
    {
#line 1240 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_66_66, (MR_String) "LCS", transform_hlds__par_loop_control__LCSVar_9, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_22);
    }
#line 1241 "par_loop_control.m"
    {
#line 1241 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__par_loop_control__LCSVar_9, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_6[1]), transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_24);
    }
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 0)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 1)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 2)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 3)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 4)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 5)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 6)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 7)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 8)));
#line 1242 "par_loop_control.m"
    transform_hlds__par_loop_control__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_8, (MR_Integer) 9)));
#line 1243 "par_loop_control.m"
    transform_hlds__par_loop_control__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_44_44, (MR_Integer) 0)));
#line 1243 "par_loop_control.m"
    transform_hlds__par_loop_control__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_44_44, (MR_Integer) 1)));
#line 1246 "par_loop_control.m"
    {
#line 1246 "par_loop_control.m"
      transform_hlds__par_loop_control__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_31_31, 0) = ((MR_Box) (*transform_hlds__par_loop_control__LCSVar_9));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "par_loop_control.m"
    }
#line 1246 "par_loop_control.m"
    {
#line 1246 "par_loop_control.m"
      transform_hlds__par_loop_control__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_30_30, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_13));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_30_30, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_31_31));
#line 1246 "par_loop_control.m"
    }
#line 1246 "par_loop_control.m"
    {
#line 1246 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_14));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_15));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__par_loop_control__V_30_30));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_17, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_16));
#line 1246 "par_loop_control.m"
    }
#line 1248 "par_loop_control.m"
    {
#line 1248 "par_loop_control.m"
      transform_hlds__par_loop_control__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_66_66, transform_hlds__par_loop_control__V_30_30);
    }
#line 1249 "par_loop_control.m"
    {
#line 1249 "par_loop_control.m"
      transform_hlds__par_loop_control__InstmapDelta_19 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__par_loop_control__LCSVar_9);
    }
#line 1250 "par_loop_control.m"
    {
#line 1250 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalInfo_20 = hlds__hlds_goal__impure_init_goal_info_3_f_0(transform_hlds__par_loop_control__NonLocals_18, transform_hlds__par_loop_control__InstmapDelta_19, (MR_Integer) 0);
    }
#line 1251 "par_loop_control.m"
    {
#line 1251 "par_loop_control.m"
      MR_Word base;
#line 1251 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_10 = base;
#line 1251 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_17));
#line 1251 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_20));
#line 1251 "par_loop_control.m"
    }
#line 1239 "par_loop_control.m"
  }
#line 1234 "par_loop_control.m"
}

#line 1220 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
#line 1220 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1220 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1220 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11,
#line 1220 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_12,
#line 1220 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_9)
#line 1220 "par_loop_control.m"
{
#line 1226 "par_loop_control.m"
  {
#line 1226 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 2)));
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14;
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 0)));
#line 1226 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 1)));
#line 1229 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18;
#line 1229 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19;
#line 1229 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20;

#line 1227 "par_loop_control.m"
    {
#line 1227 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(transform_hlds__par_loop_control__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_9, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_13_13, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14);
    }
#line 1229 "par_loop_control.m"
    transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 0)));
#line 1229 "par_loop_control.m"
    transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 1)));
#line 1229 "par_loop_control.m"
    transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_11, (MR_Integer) 2)));
#line 1229 "par_loop_control.m"
    {
#line 1229 "par_loop_control.m"
      MR_Word base;
#line 1229 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "par_loop_control.m"
      *transform_hlds__par_loop_control__STATE_VARIABLE_Case_12 = base;
#line 1229 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_18_18));
#line 1229 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_19_19));
#line 1229 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_14_14));
#line 1229 "par_loop_control.m"
    }
#line 1226 "par_loop_control.m"
  }
#line 1220 "par_loop_control.m"
}

#line 1192 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
#line 1192 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1192 "par_loop_control.m"
{
#line 1192 "par_loop_control.m"
  {
#line 1192 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1192 "par_loop_control.m"
    MR_builtin_longjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
#line 1192 "par_loop_control.m"
  }
#line 1192 "par_loop_control.m"
}

#line 1192 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
#line 1192 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1192 "par_loop_control.m"
{
#line 1192 "par_loop_control.m"
  {
#line 1192 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1192 "par_loop_control.m"
    {
#line 1192 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__goal_util__goal_calls_2_p_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15);
    }
#line 1192 "par_loop_control.m"
    (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded);
#line 1192 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1192 "par_loop_control.m"
      {
#line 1192 "par_loop_control.m"
        transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(transform_hlds__par_loop_control__env_ptr);
#line 1192 "par_loop_control.m"
        return;
      }
#line 1192 "par_loop_control.m"
  }
#line 1192 "par_loop_control.m"
}

#line 1192 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
#line 1192 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1192 "par_loop_control.m"
{
#line 1192 "par_loop_control.m"
  {
#line 1192 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1192 "par_loop_control.m"
    if (MR_builtin_setjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
#line 1192 "par_loop_control.m"
      {
#line 1192 "par_loop_control.m"
        {
#line 1192 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 3)));
#line 1192 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 9)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 8)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 7)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 6)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 5)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 4)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 1198 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));

#line 1198 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = transform_hlds__par_loop_control__V_41_41;
#line 1198 "par_loop_control.m"
          {
#line 1198 "par_loop_control.m"
            transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(transform_hlds__par_loop_control__env_ptr);
          }
#line 1200 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = transform_hlds__par_loop_control__V_40_40;
#line 1200 "par_loop_control.m"
          {
#line 1200 "par_loop_control.m"
            transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(transform_hlds__par_loop_control__env_ptr);
          }
#line 1192 "par_loop_control.m"
        }
#line 1192 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
#line 1192 "par_loop_control.m"
      }
#line 1192 "par_loop_control.m"
    else
#line 1192 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
#line 1192 "par_loop_control.m"
  }
#line 1192 "par_loop_control.m"
}

#line 1183 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1183 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3,
#line 1183 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__4_4,
#line 1183 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__5_5)
#line 1183 "par_loop_control.m"
{
#line 1183 "par_loop_control.m"
  {
#line 1183 "par_loop_control.m"
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s transform_hlds__par_loop_control__env;

#line 1183 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1_1;
#line 1187 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1187 "par_loop_control.m"
      {
#line 1187 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1188 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1187 "par_loop_control.m"
      }
#line 1187 "par_loop_control.m"
    else
#line 1190 "par_loop_control.m"
      {
#line 1190 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs0_12;
#line 1190 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conj_13;
#line 1190 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs_14;

#line 1190 "par_loop_control.m"
        (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__4_4, (MR_Integer) 0)));
#line 1190 "par_loop_control.m"
        transform_hlds__par_loop_control__Conjs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__4_4, (MR_Integer) 1)));
#line 1192 "par_loop_control.m"
        {
#line 1192 "par_loop_control.m"
          transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(&transform_hlds__par_loop_control__env);
        }
#line 1208 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1205 "par_loop_control.m"
          {
#line 1205 "par_loop_control.m"
            transform_hlds__par_loop_control__Conj_13 = (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
#line 1206 "par_loop_control.m"
            {
#line 1206 "par_loop_control.m"
              transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, transform_hlds__par_loop_control__HeadVar__2_2, transform_hlds__par_loop_control__HeadVar__3_3, transform_hlds__par_loop_control__Conjs0_12, &transform_hlds__par_loop_control__Conjs_14);
            }
#line 1205 "par_loop_control.m"
          }
#line 1208 "par_loop_control.m"
        else
#line 1211 "par_loop_control.m"
          {
#line 1210 "par_loop_control.m"
            {
#line 1210 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, transform_hlds__par_loop_control__HeadVar__2_2, transform_hlds__par_loop_control__HeadVar__3_3, (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, &transform_hlds__par_loop_control__Conj_13);
            }
#line 1214 "par_loop_control.m"
            transform_hlds__par_loop_control__Conjs_14 = transform_hlds__par_loop_control__Conjs0_12;
#line 1211 "par_loop_control.m"
          }
#line 1190 "par_loop_control.m"
        {
#line 1190 "par_loop_control.m"
          MR_Word base;
#line 1190 "par_loop_control.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__5_5 = base;
#line 1190 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__Conj_13));
#line 1190 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_14));
#line 1190 "par_loop_control.m"
        }
#line 1190 "par_loop_control.m"
      }
#line 1183 "par_loop_control.m"
  }
#line 1183 "par_loop_control.m"
}

#line 1138 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
#line 1138 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 1138 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 1138 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 1138 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 1138 "par_loop_control.m"
{
#line 1138 "par_loop_control.m"
  {
#line 1138 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 1138 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12;
#line 1138 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_FixupGoalInfo_9;

#line 1138 "par_loop_control.m"
    {
#line 1138 "par_loop_control.m"
      transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12, &transform_hlds__par_loop_control__conv0_FixupGoalInfo_9);
    }
#line 1138 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_Case_12));
#line 1138 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv0_FixupGoalInfo_9));
#line 1138 "par_loop_control.m"
  }
#line 1138 "par_loop_control.m"
}

#line 1117 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
#line 1117 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg)
#line 1117 "par_loop_control.m"
{
#line 1117 "par_loop_control.m"
  {
#line 1117 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1117 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;

#line 1117 "par_loop_control.m"
    {
#line 1117 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1117__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))));
    }
#line 1117 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1117 "par_loop_control.m"
  }
#line 1117 "par_loop_control.m"
}

#line 1128 "par_loop_control.m"
static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
#line 1128 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg)
#line 1128 "par_loop_control.m"
{
#line 1128 "par_loop_control.m"
  {
#line 1128 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1128 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;

#line 1128 "par_loop_control.m"
    {
#line 1128 "par_loop_control.m"
      return transform_hlds__par_loop_control__succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1128__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))));
    }
#line 1128 "par_loop_control.m"
    return transform_hlds__par_loop_control__succeeded;
#line 1128 "par_loop_control.m"
  }
#line 1128 "par_loop_control.m"
}

#line 1088 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
#line 1088 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1088 "par_loop_control.m"
{
#line 1088 "par_loop_control.m"
  {
#line 1088 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1088 "par_loop_control.m"
    MR_builtin_longjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
#line 1088 "par_loop_control.m"
  }
#line 1088 "par_loop_control.m"
}

#line 1088 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
#line 1088 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1088 "par_loop_control.m"
{
#line 1088 "par_loop_control.m"
  {
#line 1088 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1088 "par_loop_control.m"
    {
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_200_200;
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_201_201;
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_202_202;
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_203_203;
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_204_204;
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_205_205;
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1090 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));

#line 1090 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1090 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1090 "par_loop_control.m"
      transform_hlds__par_loop_control__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1090 "par_loop_control.m"
      transform_hlds__par_loop_control__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1090 "par_loop_control.m"
      transform_hlds__par_loop_control__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1090 "par_loop_control.m"
      transform_hlds__par_loop_control__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1090 "par_loop_control.m"
      transform_hlds__par_loop_control__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1090 "par_loop_control.m"
      transform_hlds__par_loop_control__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1090 "par_loop_control.m"
      {
#line 1090 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_207_207);
      }
#line 1091 "par_loop_control.m"
      if (!((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded))
#line 1092 "par_loop_control.m"
        {
#line 1092 "par_loop_control.m"
          (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__V_206_206);
        }
#line 1091 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1091 "par_loop_control.m"
        {
#line 1091 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(transform_hlds__par_loop_control__env_ptr);
#line 1091 "par_loop_control.m"
          return;
        }
#line 1088 "par_loop_control.m"
    }
#line 1088 "par_loop_control.m"
  }
#line 1088 "par_loop_control.m"
}

#line 1088 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
#line 1088 "par_loop_control.m"
  void * transform_hlds__par_loop_control__env_ptr_arg)
#line 1088 "par_loop_control.m"
{
#line 1088 "par_loop_control.m"
  {
#line 1088 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * transform_hlds__par_loop_control__env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) transform_hlds__par_loop_control__env_ptr_arg;

#line 1088 "par_loop_control.m"
    if (MR_builtin_setjmp((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
#line 1088 "par_loop_control.m"
      {
#line 1088 "par_loop_control.m"
        {
#line 1088 "par_loop_control.m"
          hlds__goal_util__goal_calls_2_p_1((transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &(transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_112, transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2, transform_hlds__par_loop_control__env_ptr);
        }
#line 1088 "par_loop_control.m"
        (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
#line 1088 "par_loop_control.m"
      }
#line 1088 "par_loop_control.m"
    else
#line 1088 "par_loop_control.m"
      (transform_hlds__par_loop_control__env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
#line 1088 "par_loop_control.m"
  }
#line 1088 "par_loop_control.m"
}

#line 1067 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_6,
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_7,
#line 1067 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_8,
#line 1067 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70,
#line 1067 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71)
#line 1067 "par_loop_control.m"
{
#line 1067 "par_loop_control.m"
  {
#line 1067 "par_loop_control.m"
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s transform_hlds__par_loop_control__env;

#line 1067 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6 = transform_hlds__par_loop_control__Info_6;
#line 1067 "par_loop_control.m"
    (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_70;
#line 1072 "par_loop_control.m"
    {
#line 1072 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 1072 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__GoalId_11;
#line 1073 "par_loop_control.m"
      MR_Word transform_hlds__par_loop_control__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));

#line 1074 "par_loop_control.m"
      {
#line 1074 "par_loop_control.m"
        transform_hlds__par_loop_control__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__par_loop_control__GoalInfo0_10);
      }
#line 1082 "par_loop_control.m"
      {
#line 1082 "par_loop_control.m"
        (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (transform_hlds__par_loop_control__GoalId_11)), transform_hlds__par_loop_control__RecParConjIds_7);
      }
#line 1085 "par_loop_control.m"
      if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1084 "par_loop_control.m"
        {
#line 1084 "par_loop_control.m"
          *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 1;
#line 1084 "par_loop_control.m"
          *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
#line 1084 "par_loop_control.m"
        }
#line 1085 "par_loop_control.m"
      else
#line 1102 "par_loop_control.m"
        {
#line 1088 "par_loop_control.m"
          {
#line 1088 "par_loop_control.m"
            transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(&transform_hlds__par_loop_control__env);
          }
#line 1087 "par_loop_control.m"
          (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded);
#line 1102 "par_loop_control.m"
          if ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
#line 1096 "par_loop_control.m"
            {
#line 1096 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs0_13;
#line 1096 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__FinishLCGoal_14;
#line 1096 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs_15;
#line 1096 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_72_72;
#line 1096 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74;

#line 1096 "par_loop_control.m"
              {
#line 1096 "par_loop_control.m"
                hlds__hlds_goal__goal_to_conj_list_2_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &transform_hlds__par_loop_control__Conjs0_13);
              }
#line 1097 "par_loop_control.m"
              {
#line 1097 "par_loop_control.m"
                transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, &transform_hlds__par_loop_control__FinishLCGoal_14);
              }
#line 1098 "par_loop_control.m"
              {
#line 1098 "par_loop_control.m"
                transform_hlds__par_loop_control__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_72_72, 0) = ((MR_Box) (transform_hlds__par_loop_control__FinishLCGoal_14));
#line 1098 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1098 "par_loop_control.m"
              }
#line 1098 "par_loop_control.m"
              {
#line 1098 "par_loop_control.m"
                transform_hlds__par_loop_control__Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_13, transform_hlds__par_loop_control__V_72_72);
              }
#line 1099 "par_loop_control.m"
              {
#line 1099 "par_loop_control.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__par_loop_control__Conjs_15, transform_hlds__par_loop_control__GoalInfo0_10, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74);
              }
#line 1100 "par_loop_control.m"
              {
#line 1100 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_74_74, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71);
              }
#line 1101 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 0;
#line 1096 "par_loop_control.m"
            }
#line 1102 "par_loop_control.m"
          else
#line 1103 "par_loop_control.m"
            {
#line 1103 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));
#line 1103 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 1103 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_47;
#line 1103 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103;
#line 1103 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_175_175;

#line 1112 "par_loop_control.m"
#line 1112 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) {
#line 1112 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1112 "par_loop_control.m"
                case (MR_Integer) 0:
#line 1143 "par_loop_control.m"
                  {
#line 1144 "par_loop_control.m"
                    {
#line 1144 "par_loop_control.m"
                      mercury__require__sorry_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "negation");
#line 1144 "par_loop_control.m"
                      return;
                    }
#line 1143 "par_loop_control.m"
                  }
#line 1112 "par_loop_control.m"
                  break;
#line 1112 "par_loop_control.m"
                case (MR_Integer) 1:
#line 1108 "par_loop_control.m"
                  {
#line 1111 "par_loop_control.m"
                    {
#line 1111 "par_loop_control.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
#line 1111 "par_loop_control.m"
                      return;
                    }
#line 1108 "par_loop_control.m"
                  }
#line 1112 "par_loop_control.m"
                  break;
#line 1112 "par_loop_control.m"
                case (MR_Integer) 2:
#line 1114 "par_loop_control.m"
                  {
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__PredId_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)));
#line 1114 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Builtin_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__MaybeContext_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__RecPredProcId_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__InnerPredId_42;
#line 1114 "par_loop_control.m"
                    MR_Integer transform_hlds__par_loop_control__InnerProcId_43;
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LCVar_44;
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Args_45;
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SymName_46;
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_94_94;
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_98_98;
#line 1114 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_99_99;
#line 1113 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control___SymName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 5)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1116 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_147_147;
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_149_149;
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_151_151;
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_152_152;
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_153_153;
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_154_154;
#line 1119 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_155_155;

#line 1117 "par_loop_control.m"
                    {
#line 1117 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_98_98, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_35));
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_98_98, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_36));
#line 1117 "par_loop_control.m"
                    }
#line 1117 "par_loop_control.m"
                    {
#line 1117 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[1]));
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5));
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 3) = ((MR_Box) (transform_hlds__par_loop_control__RecPredProcId_41));
#line 1117 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_94_94, 4) = ((MR_Box) (transform_hlds__par_loop_control__V_98_98));
#line 1117 "par_loop_control.m"
                    }
#line 1117 "par_loop_control.m"
                    {
#line 1117 "par_loop_control.m"
                      mercury__require__expect_4_p_0(transform_hlds__par_loop_control__V_94_94, (MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Expected recursive call");
                    }
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__LCVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__SymName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__InnerPredId_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_99_99, (MR_Integer) 0)));
#line 1119 "par_loop_control.m"
                    transform_hlds__par_loop_control__InnerProcId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_99_99, (MR_Integer) 1)));
#line 1121 "par_loop_control.m"
                    {
#line 1121 "par_loop_control.m"
                      transform_hlds__par_loop_control__Args_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_45, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_44));
#line 1121 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_45, 1) = ((MR_Box) (transform_hlds__par_loop_control__Args0_37));
#line 1121 "par_loop_control.m"
                    }
#line 1123 "par_loop_control.m"
                    {
#line 1123 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (transform_hlds__par_loop_control__InnerPredId_42));
#line 1123 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__InnerProcId_43));
#line 1123 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Args_45));
#line 1123 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Builtin_38));
#line 1123 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 4) = ((MR_Box) (transform_hlds__par_loop_control__MaybeContext_39));
#line 1123 "par_loop_control.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_47, 5) = ((MR_Box) (transform_hlds__par_loop_control__SymName_46));
#line 1123 "par_loop_control.m"
                    }
#line 1125 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_8 = (MR_Integer) 0;
#line 1114 "par_loop_control.m"
                  }
#line 1112 "par_loop_control.m"
                  break;
#line 1112 "par_loop_control.m"
                case (MR_Integer) 3:
#line 1112 "par_loop_control.m"
#line 1112 "par_loop_control.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) {
#line 1112 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 1108 "par_loop_control.m"
                      {
#line 1111 "par_loop_control.m"
                        {
#line 1111 "par_loop_control.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
#line 1111 "par_loop_control.m"
                          return;
                        }
#line 1108 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 1127 "par_loop_control.m"
                      {
#line 1127 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__ConjType_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1127 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_89_89;
#line 1127 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1127 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs_114;

#line 1128 "par_loop_control.m"
                        {
#line 1128 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[0]));
#line 1128 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4));
#line 1128 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1128 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 3) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_48));
#line 1128 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_89_89, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1128 "par_loop_control.m"
                        }
#line 1128 "par_loop_control.m"
                        {
#line 1128 "par_loop_control.m"
                          mercury__require__expect_4_p_0(transform_hlds__par_loop_control__V_89_89, (MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "parallel conjunction");
                        }
#line 1130 "par_loop_control.m"
                        {
#line 1130 "par_loop_control.m"
                          transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_8, transform_hlds__par_loop_control__Conjs0_113, &transform_hlds__par_loop_control__Conjs_114);
                        }
#line 1132 "par_loop_control.m"
                        {
#line 1132 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1132 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_48));
#line 1132 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_114));
#line 1132 "par_loop_control.m"
                        }
#line 1127 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 3:
#line 1134 "par_loop_control.m"
                      {
#line 1135 "par_loop_control.m"
                        {
#line 1135 "par_loop_control.m"
                          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "disjunction");
#line 1135 "par_loop_control.m"
                          return;
                        }
#line 1134 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 4:
#line 1137 "par_loop_control.m"
                      {
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_195_195;
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__CanFail_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases_53;
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfos_54;
#line 1137 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_85_85;

#line 1138 "par_loop_control.m"
                        {
#line 1138 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[0]));
#line 1138 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6));
#line 1138 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1138 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 3) = ((MR_Box) ((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6));
#line 1138 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_85_85, 4) = ((MR_Box) (transform_hlds__par_loop_control__RecParConjIds_7));
#line 1138 "par_loop_control.m"
                        }
#line 5961 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_195_195 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1138 "par_loop_control.m"
                        {
#line 1138 "par_loop_control.m"
                          mercury__list__map2_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_195_195, transform_hlds__par_loop_control__TypeCtorInfo_195_195, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_85_85, transform_hlds__par_loop_control__Cases0_52, &transform_hlds__par_loop_control__Cases_53, &transform_hlds__par_loop_control__FixupGoalInfos_54);
                        }
#line 1140 "par_loop_control.m"
                        {
#line 1140 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfos_54, transform_hlds__par_loop_control__FixupGoalInfo_8);
                        }
#line 1141 "par_loop_control.m"
                        {
#line 1141 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1141 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_50));
#line 1141 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_51));
#line 1141 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_53));
#line 1141 "par_loop_control.m"
                        }
#line 1137 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 5:
#line 1146 "par_loop_control.m"
                      {
#line 1146 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1146 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1146 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_58;

#line 1147 "par_loop_control.m"
                        {
#line 1147 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, transform_hlds__par_loop_control__FixupGoalInfo_8, transform_hlds__par_loop_control__SubGoal0_57, &transform_hlds__par_loop_control__SubGoal_58);
                        }
#line 1149 "par_loop_control.m"
                        {
#line 1149 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1149 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_56));
#line 1149 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_58));
#line 1149 "par_loop_control.m"
                        }
#line 1146 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 6:
#line 1151 "par_loop_control.m"
                      {
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__ExistVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_63;
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then_64;
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_65;
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else_66;
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_79_79;
#line 1151 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_80_80;

#line 1154 "par_loop_control.m"
                        {
#line 1154 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, &transform_hlds__par_loop_control__FixupGoalInfoThen_63, transform_hlds__par_loop_control__Then0_61, &transform_hlds__par_loop_control__Then_64);
                        }
#line 1156 "par_loop_control.m"
                        {
#line 1156 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, transform_hlds__par_loop_control__RecParConjIds_7, &transform_hlds__par_loop_control__FixupGoalInfoElse_65, transform_hlds__par_loop_control__Else0_62, &transform_hlds__par_loop_control__Else_66);
                        }
#line 1158 "par_loop_control.m"
                        {
#line 1158 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_80_80, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_65));
#line 1158 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "par_loop_control.m"
                        }
#line 1158 "par_loop_control.m"
                        {
#line 1158 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_79_79, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_63));
#line 1158 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_79_79, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_80_80));
#line 1158 "par_loop_control.m"
                        }
#line 1158 "par_loop_control.m"
                        {
#line 1158 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_79_79, transform_hlds__par_loop_control__FixupGoalInfo_8);
                        }
#line 1160 "par_loop_control.m"
                        {
#line 1160 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1160 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ExistVars_59));
#line 1160 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_60));
#line 1160 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_64));
#line 1160 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_47, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_66));
#line 1160 "par_loop_control.m"
                        }
#line 1151 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                    case (MR_Integer) 7:
#line 1162 "par_loop_control.m"
                      {
#line 1163 "par_loop_control.m"
                        {
#line 1163 "par_loop_control.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "shorthand");
#line 1163 "par_loop_control.m"
                          return;
                        }
#line 1162 "par_loop_control.m"
                      }
#line 1112 "par_loop_control.m"
                      break;
#line 1112 "par_loop_control.m"
                  }
#line 1112 "par_loop_control.m"
                  break;
#line 1112 "par_loop_control.m"
              }
#line 1165 "par_loop_control.m"
              transform_hlds__par_loop_control__V_175_175 = transform_hlds__par_loop_control__V_17_17;
#line 1165 "par_loop_control.m"
              {
#line 1165 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_47));
#line 1165 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_175_175));
#line 1165 "par_loop_control.m"
              }
#line 1176 "par_loop_control.m"
#line 1176 "par_loop_control.m"
              switch (*transform_hlds__par_loop_control__FixupGoalInfo_8) {
#line 1176 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1176 "par_loop_control.m"
                case (MR_Integer) 1:
#line 1177 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103;
#line 1176 "par_loop_control.m"
                  break;
#line 1176 "par_loop_control.m"
                case (MR_Integer) 0:
#line 1169 "par_loop_control.m"
                  {
#line 1169 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105;
#line 1169 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_106_106;
#line 1169 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107;
#line 1169 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108;
#line 1169 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_177_177;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_178_178;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_179_179;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_180_180;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_181_181;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_182_182;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_183_183;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_184_184;
#line 1171 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_185_185;
#line 1174 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_186_186;
#line 1174 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_187_187;

#line 1170 "par_loop_control.m"
                    {
#line 1170 "par_loop_control.m"
                      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__V_175_175);
                    }
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8)));
#line 1171 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__par_loop_control__env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9)));
#line 1171 "par_loop_control.m"
                    {
#line 1171 "par_loop_control.m"
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__V_106_106, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_105_105, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107);
                    }
#line 1172 "par_loop_control.m"
                    {
#line 1172 "par_loop_control.m"
                      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_107_107, transform_hlds__par_loop_control__V_175_175, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108);
                    }
#line 1173 "par_loop_control.m"
                    {
#line 1173 "par_loop_control.m"
                      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_108_108, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110);
                    }
#line 1174 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, (MR_Integer) 0)));
#line 1174 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_103_103, (MR_Integer) 1)));
#line 1174 "par_loop_control.m"
                    {
#line 1174 "par_loop_control.m"
                      MR_Word base;
#line 1174 "par_loop_control.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "par_loop_control.m"
                      *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_71 = base;
#line 1174 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_186_186));
#line 1174 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_110_110));
#line 1174 "par_loop_control.m"
                    }
#line 1169 "par_loop_control.m"
                  }
#line 1176 "par_loop_control.m"
                  break;
#line 1176 "par_loop_control.m"
              }
#line 1103 "par_loop_control.m"
            }
#line 1102 "par_loop_control.m"
        }
#line 1072 "par_loop_control.m"
    }
#line 1067 "par_loop_control.m"
  }
#line 1067 "par_loop_control.m"
}

#line 1046 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
#line 1046 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1046 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 1046 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3)
#line 1046 "par_loop_control.m"
{
#line 1049 "par_loop_control.m"
  {
#line 1049 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1049 "par_loop_control.m"
#line 1049 "par_loop_control.m"
    switch (transform_hlds__par_loop_control__HeadVar__1_1) {
#line 1049 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "par_loop_control.m"
      case (MR_Integer) 1:
#line 1049 "par_loop_control.m"
#line 1049 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__HeadVar__2_2) {
#line 1049 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "par_loop_control.m"
          case (MR_Integer) 1:
#line 1056 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1049 "par_loop_control.m"
            break;
#line 1049 "par_loop_control.m"
          case (MR_Integer) 0:
#line 1054 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1049 "par_loop_control.m"
            break;
#line 1049 "par_loop_control.m"
        }
#line 1049 "par_loop_control.m"
        break;
#line 1049 "par_loop_control.m"
      case (MR_Integer) 0:
#line 1049 "par_loop_control.m"
#line 1049 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__HeadVar__2_2) {
#line 1049 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "par_loop_control.m"
          case (MR_Integer) 1:
#line 1052 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 1;
#line 1049 "par_loop_control.m"
            break;
#line 1049 "par_loop_control.m"
          case (MR_Integer) 0:
#line 1050 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Integer) 0;
#line 1049 "par_loop_control.m"
            break;
#line 1049 "par_loop_control.m"
        }
#line 1049 "par_loop_control.m"
        break;
#line 1049 "par_loop_control.m"
    }
#line 1049 "par_loop_control.m"
  }
#line 1046 "par_loop_control.m"
}

#line 1038 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
#line 1038 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 1038 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__2_2)
#line 1038 "par_loop_control.m"
{
#line 1041 "par_loop_control.m"
  {
#line 1041 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1041 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "par_loop_control.m"
      *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 0;
#line 1041 "par_loop_control.m"
    else
#line 1042 "par_loop_control.m"
      {
#line 1042 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__X_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 1042 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 1042 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__UseParentStack0_6;

#line 1043 "par_loop_control.m"
        {
#line 1043 "par_loop_control.m"
          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__Xs_4, &transform_hlds__par_loop_control__UseParentStack0_6);
        }
#line 1049 "par_loop_control.m"
#line 1049 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__X_3) {
#line 1049 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "par_loop_control.m"
          case (MR_Integer) 1:
#line 1049 "par_loop_control.m"
#line 1049 "par_loop_control.m"
            switch (transform_hlds__par_loop_control__UseParentStack0_6) {
#line 1049 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "par_loop_control.m"
              case (MR_Integer) 1:
#line 1056 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1049 "par_loop_control.m"
                break;
#line 1049 "par_loop_control.m"
              case (MR_Integer) 0:
#line 1054 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1049 "par_loop_control.m"
                break;
#line 1049 "par_loop_control.m"
            }
#line 1049 "par_loop_control.m"
            break;
#line 1049 "par_loop_control.m"
          case (MR_Integer) 0:
#line 1049 "par_loop_control.m"
#line 1049 "par_loop_control.m"
            switch (transform_hlds__par_loop_control__UseParentStack0_6) {
#line 1049 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "par_loop_control.m"
              case (MR_Integer) 1:
#line 1052 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 1;
#line 1049 "par_loop_control.m"
                break;
#line 1049 "par_loop_control.m"
              case (MR_Integer) 0:
#line 1050 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__2_2 = (MR_Integer) 0;
#line 1049 "par_loop_control.m"
                break;
#line 1049 "par_loop_control.m"
            }
#line 1049 "par_loop_control.m"
            break;
#line 1049 "par_loop_control.m"
        }
#line 1042 "par_loop_control.m"
      }
#line 1041 "par_loop_control.m"
  }
#line 1038 "par_loop_control.m"
}

#line 1028 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
#line 1028 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__List_3,
#line 1028 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Fixup_4)
#line 1028 "par_loop_control.m"
{
#line 1034 "par_loop_control.m"
  {
#line 1034 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 1032 "par_loop_control.m"
    {
#line 1032 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mercury__list__contains_2_p_0((MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__List_3, ((MR_Box) ((MR_Integer) 0)));
    }
#line 1034 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 1033 "par_loop_control.m"
      *transform_hlds__par_loop_control__Fixup_4 = (MR_Integer) 0;
#line 1034 "par_loop_control.m"
    else
#line 1035 "par_loop_control.m"
      *transform_hlds__par_loop_control__Fixup_4 = (MR_Integer) 1;
#line 1034 "par_loop_control.m"
  }
#line 1028 "par_loop_control.m"
}

#line 1015 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
#line 1015 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 1015 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 1015 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13,
#line 1015 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Case_14,
#line 1015 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 1015 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11)
#line 1015 "par_loop_control.m"
{
#line 1022 "par_loop_control.m"
  {
#line 1022 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 2)));
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16;
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 0)));
#line 1022 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 1)));
#line 1025 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_20_20;
#line 1025 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21;
#line 1025 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_22_22;

#line 1023 "par_loop_control.m"
    {
#line 1023 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_15_15, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
    }
#line 1025 "par_loop_control.m"
    transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 0)));
#line 1025 "par_loop_control.m"
    transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 1)));
#line 1025 "par_loop_control.m"
    transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Case_0_13, (MR_Integer) 2)));
#line 1025 "par_loop_control.m"
    {
#line 1025 "par_loop_control.m"
      MR_Word base;
#line 1025 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "par_loop_control.m"
      *transform_hlds__par_loop_control__STATE_VARIABLE_Case_14 = base;
#line 1025 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_20_20));
#line 1025 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_21_21));
#line 1025 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_16_16));
#line 1025 "par_loop_control.m"
    }
#line 1022 "par_loop_control.m"
  }
#line 1015 "par_loop_control.m"
}

#line 974 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
#line 974 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 974 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 974 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 974 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 974 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 974 "par_loop_control.m"
{
#line 974 "par_loop_control.m"
  {
#line 974 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 974 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14;
#line 974 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv8_UseParentStack_10;
#line 974 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv7_FixupGoalInfo_11;

#line 974 "par_loop_control.m"
    {
#line 974 "par_loop_control.m"
      transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14, &transform_hlds__par_loop_control__conv8_UseParentStack_10, &transform_hlds__par_loop_control__conv7_FixupGoalInfo_11);
    }
#line 974 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv9_STATE_VARIABLE_Case_14));
#line 974 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv8_UseParentStack_10));
#line 974 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv7_FixupGoalInfo_11));
#line 974 "par_loop_control.m"
  }
#line 974 "par_loop_control.m"
}

#line 966 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
#line 966 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 966 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 966 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 966 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 966 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 966 "par_loop_control.m"
{
#line 966 "par_loop_control.m"
  {
#line 966 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 966 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117;
#line 966 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv5_UseParentStack_10;
#line 966 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv4_FixupGoalInfo_11;

#line 966 "par_loop_control.m"
    {
#line 966 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117, &transform_hlds__par_loop_control__conv5_UseParentStack_10, &transform_hlds__par_loop_control__conv4_FixupGoalInfo_11);
    }
#line 966 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_117));
#line 966 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv5_UseParentStack_10));
#line 966 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv4_FixupGoalInfo_11));
#line 966 "par_loop_control.m"
  }
#line 966 "par_loop_control.m"
}

#line 949 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
#line 949 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 949 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 949 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2,
#line 949 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 949 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_4)
#line 949 "par_loop_control.m"
{
#line 949 "par_loop_control.m"
  {
#line 949 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 949 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117;
#line 949 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_UseParentStack_10;
#line 949 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_FixupGoalInfo_11;

#line 949 "par_loop_control.m"
    {
#line 949 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117, &transform_hlds__par_loop_control__conv2_UseParentStack_10, &transform_hlds__par_loop_control__conv1_FixupGoalInfo_11);
    }
#line 949 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_117));
#line 949 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv2_UseParentStack_10));
#line 949 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_4 = ((MR_Box) (transform_hlds__par_loop_control__conv1_FixupGoalInfo_11));
#line 949 "par_loop_control.m"
  }
#line 949 "par_loop_control.m"
}

#line 884 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
#line 884 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_7,
#line 884 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_8,
#line 884 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116,
#line 884 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117,
#line 884 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__UseParentStack_10,
#line 884 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__FixupGoalInfo_11)
#line 884 "par_loop_control.m"
{
#line 889 "par_loop_control.m"
  {
#line 889 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 889 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116, (MR_Integer) 0)));
#line 889 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116, (MR_Integer) 1)));

#line 924 "par_loop_control.m"
#line 924 "par_loop_control.m"
    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 924 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 924 "par_loop_control.m"
      case (MR_Integer) 0:
#line 934 "par_loop_control.m"
        {
#line 934 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 934 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 944 "par_loop_control.m"
#line 944 "par_loop_control.m"
          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 944 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 944 "par_loop_control.m"
            case (MR_Integer) 0:
#line 980 "par_loop_control.m"
              {
#line 980 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 980 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 981 "par_loop_control.m"
                {
#line 981 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                }
#line 983 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 980 "par_loop_control.m"
              }
#line 944 "par_loop_control.m"
              break;
#line 944 "par_loop_control.m"
            case (MR_Integer) 1:
#line 939 "par_loop_control.m"
              {
#line 940 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 942 "par_loop_control.m"
                *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 943 "par_loop_control.m"
                *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 939 "par_loop_control.m"
              }
#line 944 "par_loop_control.m"
              break;
#line 944 "par_loop_control.m"
            case (MR_Integer) 3:
#line 944 "par_loop_control.m"
#line 944 "par_loop_control.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 944 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 944 "par_loop_control.m"
                case (MR_Integer) 0:
#line 944 "par_loop_control.m"
                case (MR_Integer) 1:
#line 939 "par_loop_control.m"
                  {
#line 940 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 942 "par_loop_control.m"
                    *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 943 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 939 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 2:
#line 945 "par_loop_control.m"
                  {
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_133_133;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_135_135;
#line 946 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 946 "par_loop_control.m"
                    {
#line 946 "par_loop_control.m"
                      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                    }
#line 946 "par_loop_control.m"
                    transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 947 "par_loop_control.m"
                    {
#line 947 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                    }
#line 949 "par_loop_control.m"
                    {
#line 949 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 949 "par_loop_control.m"
                    }
#line 949 "par_loop_control.m"
                    {
#line 949 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                    }
#line 953 "par_loop_control.m"
                    {
#line 953 "par_loop_control.m"
                      transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 953 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 953 "par_loop_control.m"
                    }
#line 955 "par_loop_control.m"
                    {
#line 955 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 956 "par_loop_control.m"
                    {
#line 956 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                    }
#line 958 "par_loop_control.m"
                    {
#line 958 "par_loop_control.m"
                      transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 960 "par_loop_control.m"
                    {
#line 960 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "par_loop_control.m"
                    }
#line 960 "par_loop_control.m"
                    {
#line 960 "par_loop_control.m"
                      transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                    }
#line 961 "par_loop_control.m"
                    {
#line 961 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 961 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 961 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 961 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 961 "par_loop_control.m"
                    }
#line 945 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 3:
#line 963 "par_loop_control.m"
                  {
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_131_131;

#line 966 "par_loop_control.m"
                    {
#line 966 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 966 "par_loop_control.m"
                    }
#line 6916 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 966 "par_loop_control.m"
                    {
#line 966 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                    }
#line 969 "par_loop_control.m"
                    {
#line 969 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 970 "par_loop_control.m"
                    {
#line 970 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 971 "par_loop_control.m"
                    {
#line 971 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 971 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 971 "par_loop_control.m"
                    }
#line 963 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 4:
#line 973 "par_loop_control.m"
                  {
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases_96;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_130_130;

#line 974 "par_loop_control.m"
                    {
#line 974 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 974 "par_loop_control.m"
                    }
#line 6984 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 974 "par_loop_control.m"
                    {
#line 974 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                    }
#line 976 "par_loop_control.m"
                    {
#line 976 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 977 "par_loop_control.m"
                    {
#line 977 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 978 "par_loop_control.m"
                    {
#line 978 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 978 "par_loop_control.m"
                    }
#line 973 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 5:
#line 985 "par_loop_control.m"
                  {
#line 985 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 985 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 985 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 986 "par_loop_control.m"
                    {
#line 986 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 988 "par_loop_control.m"
                    {
#line 988 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 988 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 988 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 988 "par_loop_control.m"
                    }
#line 985 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 6:
#line 990 "par_loop_control.m"
                  {
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond_106;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then_109;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else_112;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_122_122;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_123_123;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_124_124;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_126_126;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_127_127;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_128_128;

#line 991 "par_loop_control.m"
                    {
#line 991 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                    }
#line 993 "par_loop_control.m"
                    {
#line 993 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                    }
#line 995 "par_loop_control.m"
                    {
#line 995 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "par_loop_control.m"
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 997 "par_loop_control.m"
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 997 "par_loop_control.m"
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 1000 "par_loop_control.m"
                    {
#line 1000 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "par_loop_control.m"
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 999 "par_loop_control.m"
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 999 "par_loop_control.m"
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 1001 "par_loop_control.m"
                    {
#line 1001 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 1001 "par_loop_control.m"
                    }
#line 990 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
              }
#line 944 "par_loop_control.m"
              break;
#line 944 "par_loop_control.m"
          }
#line 1003 "par_loop_control.m"
          {
#line 1003 "par_loop_control.m"
            transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1003 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1003 "par_loop_control.m"
          }
#line 1007 "par_loop_control.m"
#line 1007 "par_loop_control.m"
          switch (*transform_hlds__par_loop_control__FixupGoalInfo_11) {
#line 1007 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1007 "par_loop_control.m"
            case (MR_Integer) 1:
#line 1008 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1007 "par_loop_control.m"
              break;
#line 1007 "par_loop_control.m"
            case (MR_Integer) 0:
#line 1006 "par_loop_control.m"
              {
#line 1006 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1006 "par_loop_control.m"
                return;
              }
#line 1007 "par_loop_control.m"
              break;
#line 1007 "par_loop_control.m"
          }
#line 934 "par_loop_control.m"
        }
#line 924 "par_loop_control.m"
        break;
#line 924 "par_loop_control.m"
      case (MR_Integer) 1:
#line 934 "par_loop_control.m"
        {
#line 934 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 934 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 944 "par_loop_control.m"
#line 944 "par_loop_control.m"
          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 944 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 944 "par_loop_control.m"
            case (MR_Integer) 0:
#line 980 "par_loop_control.m"
              {
#line 980 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 980 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 981 "par_loop_control.m"
                {
#line 981 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                }
#line 983 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 980 "par_loop_control.m"
              }
#line 944 "par_loop_control.m"
              break;
#line 944 "par_loop_control.m"
            case (MR_Integer) 1:
#line 939 "par_loop_control.m"
              {
#line 940 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 942 "par_loop_control.m"
                *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 943 "par_loop_control.m"
                *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 939 "par_loop_control.m"
              }
#line 944 "par_loop_control.m"
              break;
#line 944 "par_loop_control.m"
            case (MR_Integer) 3:
#line 944 "par_loop_control.m"
#line 944 "par_loop_control.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 944 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 944 "par_loop_control.m"
                case (MR_Integer) 0:
#line 944 "par_loop_control.m"
                case (MR_Integer) 1:
#line 939 "par_loop_control.m"
                  {
#line 940 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 942 "par_loop_control.m"
                    *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 943 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 939 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 2:
#line 945 "par_loop_control.m"
                  {
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_133_133;
#line 945 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_135_135;
#line 946 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 946 "par_loop_control.m"
                    {
#line 946 "par_loop_control.m"
                      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                    }
#line 946 "par_loop_control.m"
                    transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 947 "par_loop_control.m"
                    {
#line 947 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                    }
#line 949 "par_loop_control.m"
                    {
#line 949 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 949 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 949 "par_loop_control.m"
                    }
#line 949 "par_loop_control.m"
                    {
#line 949 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                    }
#line 953 "par_loop_control.m"
                    {
#line 953 "par_loop_control.m"
                      transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 953 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 953 "par_loop_control.m"
                    }
#line 955 "par_loop_control.m"
                    {
#line 955 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 956 "par_loop_control.m"
                    {
#line 956 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                    }
#line 958 "par_loop_control.m"
                    {
#line 958 "par_loop_control.m"
                      transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 960 "par_loop_control.m"
                    {
#line 960 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 960 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "par_loop_control.m"
                    }
#line 960 "par_loop_control.m"
                    {
#line 960 "par_loop_control.m"
                      transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                    }
#line 961 "par_loop_control.m"
                    {
#line 961 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 961 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 961 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 961 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 961 "par_loop_control.m"
                    }
#line 945 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 3:
#line 963 "par_loop_control.m"
                  {
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 963 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_131_131;

#line 966 "par_loop_control.m"
                    {
#line 966 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 966 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 966 "par_loop_control.m"
                    }
#line 7475 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 966 "par_loop_control.m"
                    {
#line 966 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                    }
#line 969 "par_loop_control.m"
                    {
#line 969 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 970 "par_loop_control.m"
                    {
#line 970 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 971 "par_loop_control.m"
                    {
#line 971 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 971 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 971 "par_loop_control.m"
                    }
#line 963 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 4:
#line 973 "par_loop_control.m"
                  {
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cases_96;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 973 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_130_130;

#line 974 "par_loop_control.m"
                    {
#line 974 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 974 "par_loop_control.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 974 "par_loop_control.m"
                    }
#line 7543 "transform_hlds.par_loop_control.c"
                    transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 974 "par_loop_control.m"
                    {
#line 974 "par_loop_control.m"
                      mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                    }
#line 976 "par_loop_control.m"
                    {
#line 976 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 977 "par_loop_control.m"
                    {
#line 977 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 978 "par_loop_control.m"
                    {
#line 978 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 978 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 978 "par_loop_control.m"
                    }
#line 973 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 5:
#line 985 "par_loop_control.m"
                  {
#line 985 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 985 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 985 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 986 "par_loop_control.m"
                    {
#line 986 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 988 "par_loop_control.m"
                    {
#line 988 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 988 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 988 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 988 "par_loop_control.m"
                    }
#line 985 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 6:
#line 990 "par_loop_control.m"
                  {
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Cond_106;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Then_109;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__Else_112;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_122_122;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_123_123;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_124_124;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_126_126;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_127_127;
#line 990 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__V_128_128;

#line 991 "par_loop_control.m"
                    {
#line 991 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                    }
#line 993 "par_loop_control.m"
                    {
#line 993 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                    }
#line 995 "par_loop_control.m"
                    {
#line 995 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                    }
#line 998 "par_loop_control.m"
                    {
#line 998 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 998 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "par_loop_control.m"
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 997 "par_loop_control.m"
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 997 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 997 "par_loop_control.m"
                    }
#line 997 "par_loop_control.m"
                    {
#line 997 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 1000 "par_loop_control.m"
                    {
#line 1000 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 1000 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "par_loop_control.m"
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 999 "par_loop_control.m"
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 999 "par_loop_control.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 999 "par_loop_control.m"
                    }
#line 999 "par_loop_control.m"
                    {
#line 999 "par_loop_control.m"
                      transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                    }
#line 1001 "par_loop_control.m"
                    {
#line 1001 "par_loop_control.m"
                      transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 1001 "par_loop_control.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 1001 "par_loop_control.m"
                    }
#line 990 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
              }
#line 944 "par_loop_control.m"
              break;
#line 944 "par_loop_control.m"
          }
#line 1003 "par_loop_control.m"
          {
#line 1003 "par_loop_control.m"
            transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1003 "par_loop_control.m"
            MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1003 "par_loop_control.m"
          }
#line 1007 "par_loop_control.m"
#line 1007 "par_loop_control.m"
          switch (*transform_hlds__par_loop_control__FixupGoalInfo_11) {
#line 1007 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1007 "par_loop_control.m"
            case (MR_Integer) 1:
#line 1008 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1007 "par_loop_control.m"
              break;
#line 1007 "par_loop_control.m"
            case (MR_Integer) 0:
#line 1006 "par_loop_control.m"
              {
#line 1006 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1006 "par_loop_control.m"
                return;
              }
#line 1007 "par_loop_control.m"
              break;
#line 1007 "par_loop_control.m"
          }
#line 934 "par_loop_control.m"
        }
#line 924 "par_loop_control.m"
        break;
#line 924 "par_loop_control.m"
      case (MR_Integer) 2:
#line 893 "par_loop_control.m"
        {
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__CallPredId0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)));
#line 893 "par_loop_control.m"
          MR_Integer transform_hlds__par_loop_control__CallProcId0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__Builtin_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__MaybeUnify_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 893 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__RecPredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 2)));
#line 892 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control___Name0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 5)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 0)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 1)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 3)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 4)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 5)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 6)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 7)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 8)));
#line 894 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 9)));
#line 895 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__RecPredProcId_20, (MR_Integer) 0)));
#line 895 "par_loop_control.m"
          MR_Integer transform_hlds__par_loop_control__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__RecPredProcId_20, (MR_Integer) 1)));

#line 895 "par_loop_control.m"
          {
#line 895 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__par_loop_control__CallPredId0_14, transform_hlds__par_loop_control__V_212_212);
          }
#line 895 "par_loop_control.m"
          if (transform_hlds__par_loop_control__succeeded)
#line 895 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__CallProcId0_15 == transform_hlds__par_loop_control__V_213_213);
#line 920 "par_loop_control.m"
          if (transform_hlds__par_loop_control__succeeded)
#line 896 "par_loop_control.m"
            {
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__NewPredProcId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 3)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__CallPredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__NewPredProcId_21, (MR_Integer) 0)));
#line 896 "par_loop_control.m"
              MR_Integer transform_hlds__par_loop_control__CallProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__NewPredProcId_21, (MR_Integer) 1)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__LCVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 1)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Args_25;
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 4)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_27;
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__PreserveTailRecursion_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 5)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139;
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141;
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 0)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 2)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 6)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 7)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 8)));
#line 896 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_7, (MR_Integer) 9)));

#line 899 "par_loop_control.m"
              {
#line 899 "par_loop_control.m"
                transform_hlds__par_loop_control__Args_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_25, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_24));
#line 899 "par_loop_control.m"
                MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Args_25, 1) = ((MR_Box) (transform_hlds__par_loop_control__Args0_16));
#line 899 "par_loop_control.m"
              }
#line 901 "par_loop_control.m"
              {
#line 901 "par_loop_control.m"
                transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 901 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__par_loop_control__CallPredId_22));
#line 901 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__CallProcId_23));
#line 901 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Args_25));
#line 901 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Builtin_17));
#line 901 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__MaybeUnify_18));
#line 901 "par_loop_control.m"
                MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__par_loop_control__Name_26));
#line 901 "par_loop_control.m"
              }
#line 904 "par_loop_control.m"
              {
#line 904 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_27));
#line 904 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 904 "par_loop_control.m"
              }
#line 906 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__IsLastGoal_8 == (MR_Integer) 0);
#line 906 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 907 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__PreserveTailRecursion_28 == (MR_Integer) 0);
#line 912 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 911 "par_loop_control.m"
                {
#line 911 "par_loop_control.m"
                  *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 1;
#line 911 "par_loop_control.m"
                  transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139;
#line 911 "par_loop_control.m"
                }
#line 912 "par_loop_control.m"
              else
#line 913 "par_loop_control.m"
                {
#line 913 "par_loop_control.m"
                  *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 916 "par_loop_control.m"
                  {
#line 916 "par_loop_control.m"
                    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 22, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_139_139, &transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141);
                  }
#line 913 "par_loop_control.m"
                }
#line 918 "par_loop_control.m"
              {
#line 918 "par_loop_control.m"
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_141_141, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
              }
#line 919 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 0;
#line 896 "par_loop_control.m"
            }
#line 920 "par_loop_control.m"
          else
#line 921 "par_loop_control.m"
            {
#line 921 "par_loop_control.m"
              *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 922 "par_loop_control.m"
              *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 921 "par_loop_control.m"
              *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_116;
#line 921 "par_loop_control.m"
            }
#line 893 "par_loop_control.m"
        }
#line 924 "par_loop_control.m"
        break;
#line 924 "par_loop_control.m"
      case (MR_Integer) 3:
#line 924 "par_loop_control.m"
#line 924 "par_loop_control.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 924 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 924 "par_loop_control.m"
          case (MR_Integer) 0:
#line 924 "par_loop_control.m"
          case (MR_Integer) 1:
#line 924 "par_loop_control.m"
          case (MR_Integer) 2:
#line 924 "par_loop_control.m"
          case (MR_Integer) 3:
#line 924 "par_loop_control.m"
          case (MR_Integer) 4:
#line 924 "par_loop_control.m"
          case (MR_Integer) 5:
#line 924 "par_loop_control.m"
          case (MR_Integer) 6:
#line 934 "par_loop_control.m"
            {
#line 934 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 934 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalExpr_145;

#line 944 "par_loop_control.m"
#line 944 "par_loop_control.m"
              switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12)) {
#line 944 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 944 "par_loop_control.m"
                case (MR_Integer) 0:
#line 980 "par_loop_control.m"
                  {
#line 980 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr0_12), (MR_Integer) 0);
#line 980 "par_loop_control.m"
                    MR_Word transform_hlds__par_loop_control__SubGoal_100;

#line 981 "par_loop_control.m"
                    {
#line 981 "par_loop_control.m"
                      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_99, &transform_hlds__par_loop_control__SubGoal_100, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                    }
#line 983 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__par_loop_control__SubGoal_100);
#line 980 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 1:
#line 939 "par_loop_control.m"
                  {
#line 940 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 942 "par_loop_control.m"
                    *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 943 "par_loop_control.m"
                    *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 939 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
                case (MR_Integer) 3:
#line 944 "par_loop_control.m"
#line 944 "par_loop_control.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 0)))) {
#line 944 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 944 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 944 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 939 "par_loop_control.m"
                      {
#line 940 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_145 = transform_hlds__par_loop_control__GoalExpr0_12;
#line 942 "par_loop_control.m"
                        *transform_hlds__par_loop_control__UseParentStack_10 = (MR_Integer) 0;
#line 943 "par_loop_control.m"
                        *transform_hlds__par_loop_control__FixupGoalInfo_11 = (MR_Integer) 1;
#line 939 "par_loop_control.m"
                      }
#line 944 "par_loop_control.m"
                      break;
#line 944 "par_loop_control.m"
                    case (MR_Integer) 2:
#line 945 "par_loop_control.m"
                      {
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__ConjType_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__EarlierConjs0_78;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__LastConj0_79;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__LastConj_80;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackLastConj_81;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoLastConj_82;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__EarlierConjs_83;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackEarlierConjs_84;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoConjs_86;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStack0_87;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs_88;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_133_133;
#line 945 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_135_135;
#line 946 "par_loop_control.m"
                        MR_Box transform_hlds__par_loop_control__conv0_LastConj0_79;

#line 946 "par_loop_control.m"
                        {
#line 946 "par_loop_control.m"
                          mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__Conjs0_77, &transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__conv0_LastConj0_79);
                        }
#line 946 "par_loop_control.m"
                        transform_hlds__par_loop_control__LastConj0_79 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConj0_79);
#line 947 "par_loop_control.m"
                        {
#line 947 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__LastConj0_79, &transform_hlds__par_loop_control__LastConj_80, &transform_hlds__par_loop_control__UseParentStackLastConj_81, &transform_hlds__par_loop_control__FixupGoalInfoLastConj_82);
                        }
#line 949 "par_loop_control.m"
                        {
#line 949 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 949 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 949 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
#line 949 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 949 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_133_133, 4) = ((MR_Box) ((MR_Integer) 1));
#line 949 "par_loop_control.m"
                        }
#line 949 "par_loop_control.m"
                        {
#line 949 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__TypeCtorInfo_191_191, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_133_133, transform_hlds__par_loop_control__EarlierConjs0_78, &transform_hlds__par_loop_control__EarlierConjs_83, &transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85);
                        }
#line 953 "par_loop_control.m"
                        {
#line 953 "par_loop_control.m"
                          transform_hlds__par_loop_control__FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoLastConj_82));
#line 953 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__FixupGoalInfoConjs_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoEarlierConjs_85));
#line 953 "par_loop_control.m"
                        }
#line 955 "par_loop_control.m"
                        {
#line 955 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoConjs_86, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 956 "par_loop_control.m"
                        {
#line 956 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackEarlierConjs_84, &transform_hlds__par_loop_control__UseParentStack0_87);
                        }
#line 958 "par_loop_control.m"
                        {
#line 958 "par_loop_control.m"
                          transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(transform_hlds__par_loop_control__UseParentStackLastConj_81, transform_hlds__par_loop_control__UseParentStack0_87, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 960 "par_loop_control.m"
                        {
#line 960 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 0) = ((MR_Box) (transform_hlds__par_loop_control__LastConj_80));
#line 960 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "par_loop_control.m"
                        }
#line 960 "par_loop_control.m"
                        {
#line 960 "par_loop_control.m"
                          transform_hlds__par_loop_control__Conjs_88 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_191_191, transform_hlds__par_loop_control__EarlierConjs_83, transform_hlds__par_loop_control__V_135_135);
                        }
#line 961 "par_loop_control.m"
                        {
#line 961 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 961 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 961 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__ConjType_76));
#line 961 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_88));
#line 961 "par_loop_control.m"
                        }
#line 945 "par_loop_control.m"
                      }
#line 944 "par_loop_control.m"
                      break;
#line 944 "par_loop_control.m"
                    case (MR_Integer) 3:
#line 963 "par_loop_control.m"
                      {
#line 963 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_202_202;
#line 963 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Disjs0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 963 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Disjs_90;
#line 963 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackDisjs_91;
#line 963 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoDisjs_92;
#line 963 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_131_131;

#line 966 "par_loop_control.m"
                        {
#line 966 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 966 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[1]));
#line 966 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
#line 966 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 966 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 966 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_131_131, 4) = ((MR_Box) ((MR_Integer) 1));
#line 966 "par_loop_control.m"
                        }
#line 8232 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_202_202 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 966 "par_loop_control.m"
                        {
#line 966 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_202_202, transform_hlds__par_loop_control__TypeCtorInfo_202_202, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_131_131, transform_hlds__par_loop_control__Disjs0_89, &transform_hlds__par_loop_control__Disjs_90, &transform_hlds__par_loop_control__UseParentStackDisjs_91, &transform_hlds__par_loop_control__FixupGoalInfoDisjs_92);
                        }
#line 969 "par_loop_control.m"
                        {
#line 969 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackDisjs_91, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 970 "par_loop_control.m"
                        {
#line 970 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoDisjs_92, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 971 "par_loop_control.m"
                        {
#line 971 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 971 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Disjs_90));
#line 971 "par_loop_control.m"
                        }
#line 963 "par_loop_control.m"
                      }
#line 944 "par_loop_control.m"
                      break;
#line 944 "par_loop_control.m"
                    case (MR_Integer) 4:
#line 973 "par_loop_control.m"
                      {
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_209_209;
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__CanFail_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cases_96;
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackCases_97;
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoCases_98;
#line 973 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_130_130;

#line 974 "par_loop_control.m"
                        {
#line 974 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 974 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2]));
#line 974 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
#line 974 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 974 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_7));
#line 974 "par_loop_control.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_130_130, 4) = ((MR_Box) (transform_hlds__par_loop_control__IsLastGoal_8));
#line 974 "par_loop_control.m"
                        }
#line 8300 "transform_hlds.par_loop_control.c"
                        transform_hlds__par_loop_control__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 974 "par_loop_control.m"
                        {
#line 974 "par_loop_control.m"
                          mercury__list__map3_5_p_0(transform_hlds__par_loop_control__TypeCtorInfo_209_209, transform_hlds__par_loop_control__TypeCtorInfo_209_209, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0, transform_hlds__par_loop_control__V_130_130, transform_hlds__par_loop_control__Cases0_95, &transform_hlds__par_loop_control__Cases_96, &transform_hlds__par_loop_control__UseParentStackCases_97, &transform_hlds__par_loop_control__FixupGoalInfoCases_98);
                        }
#line 976 "par_loop_control.m"
                        {
#line 976 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__UseParentStackCases_97, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 977 "par_loop_control.m"
                        {
#line 977 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__FixupGoalInfoCases_98, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 978 "par_loop_control.m"
                        {
#line 978 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 978 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_93));
#line 978 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_94));
#line 978 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_96));
#line 978 "par_loop_control.m"
                        }
#line 973 "par_loop_control.m"
                      }
#line 944 "par_loop_control.m"
                      break;
#line 944 "par_loop_control.m"
                    case (MR_Integer) 5:
#line 985 "par_loop_control.m"
                      {
#line 985 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 985 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 985 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_144;

#line 986 "par_loop_control.m"
                        {
#line 986 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__SubGoal0_143, &transform_hlds__par_loop_control__SubGoal_144, transform_hlds__par_loop_control__UseParentStack_10, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 988 "par_loop_control.m"
                        {
#line 988 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 988 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_101));
#line 988 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_144));
#line 988 "par_loop_control.m"
                        }
#line 985 "par_loop_control.m"
                      }
#line 944 "par_loop_control.m"
                      break;
#line 944 "par_loop_control.m"
                    case (MR_Integer) 6:
#line 990 "par_loop_control.m"
                      {
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 1)));
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cond0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 2)));
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 3)));
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_12, (MR_Integer) 4)));
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Cond_106;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackCond_107;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoCond_108;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then_109;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackThen_110;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoThen_111;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else_112;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__UseParentStackElse_113;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__FixupGoalInfoElse_114;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_122_122;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_123_123;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_124_124;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_126_126;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_127_127;
#line 990 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__V_128_128;

#line 991 "par_loop_control.m"
                        {
#line 991 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, (MR_Integer) 0, transform_hlds__par_loop_control__Cond0_103, &transform_hlds__par_loop_control__Cond_106, &transform_hlds__par_loop_control__UseParentStackCond_107, &transform_hlds__par_loop_control__FixupGoalInfoCond_108);
                        }
#line 993 "par_loop_control.m"
                        {
#line 993 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Then0_104, &transform_hlds__par_loop_control__Then_109, &transform_hlds__par_loop_control__UseParentStackThen_110, &transform_hlds__par_loop_control__FixupGoalInfoThen_111);
                        }
#line 995 "par_loop_control.m"
                        {
#line 995 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__IsLastGoal_8, transform_hlds__par_loop_control__Else0_105, &transform_hlds__par_loop_control__Else_112, &transform_hlds__par_loop_control__UseParentStackElse_113, &transform_hlds__par_loop_control__FixupGoalInfoElse_114);
                        }
#line 998 "par_loop_control.m"
                        {
#line 998 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoElse_114));
#line 998 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "par_loop_control.m"
                        }
#line 997 "par_loop_control.m"
                        {
#line 997 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoThen_111));
#line 997 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_123_123, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_124_124));
#line 997 "par_loop_control.m"
                        }
#line 997 "par_loop_control.m"
                        {
#line 997 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 0) = ((MR_Box) (transform_hlds__par_loop_control__FixupGoalInfoCond_108));
#line 997 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_122_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_123_123));
#line 997 "par_loop_control.m"
                        }
#line 997 "par_loop_control.m"
                        {
#line 997 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(transform_hlds__par_loop_control__V_122_122, transform_hlds__par_loop_control__FixupGoalInfo_11);
                        }
#line 1000 "par_loop_control.m"
                        {
#line 1000 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackElse_113));
#line 1000 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "par_loop_control.m"
                        }
#line 999 "par_loop_control.m"
                        {
#line 999 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackThen_110));
#line 999 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_127_127, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_128_128));
#line 999 "par_loop_control.m"
                        }
#line 999 "par_loop_control.m"
                        {
#line 999 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 0) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStackCond_107));
#line 999 "par_loop_control.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_126_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_127_127));
#line 999 "par_loop_control.m"
                        }
#line 999 "par_loop_control.m"
                        {
#line 999 "par_loop_control.m"
                          transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(transform_hlds__par_loop_control__V_126_126, transform_hlds__par_loop_control__UseParentStack_10);
                        }
#line 1001 "par_loop_control.m"
                        {
#line 1001 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1001 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_102));
#line 1001 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_106));
#line 1001 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_109));
#line 1001 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_145, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_112));
#line 1001 "par_loop_control.m"
                        }
#line 990 "par_loop_control.m"
                      }
#line 944 "par_loop_control.m"
                      break;
#line 944 "par_loop_control.m"
                  }
#line 944 "par_loop_control.m"
                  break;
#line 944 "par_loop_control.m"
              }
#line 1003 "par_loop_control.m"
              {
#line 1003 "par_loop_control.m"
                transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_145));
#line 1003 "par_loop_control.m"
                MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_13));
#line 1003 "par_loop_control.m"
              }
#line 1007 "par_loop_control.m"
#line 1007 "par_loop_control.m"
              switch (*transform_hlds__par_loop_control__FixupGoalInfo_11) {
#line 1007 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1007 "par_loop_control.m"
                case (MR_Integer) 1:
#line 1008 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117 = transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137;
#line 1007 "par_loop_control.m"
                  break;
#line 1007 "par_loop_control.m"
                case (MR_Integer) 0:
#line 1006 "par_loop_control.m"
                  {
#line 1006 "par_loop_control.m"
                    transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_7, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_137_137, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_117);
#line 1006 "par_loop_control.m"
                    return;
                  }
#line 1007 "par_loop_control.m"
                  break;
#line 1007 "par_loop_control.m"
              }
#line 934 "par_loop_control.m"
            }
#line 924 "par_loop_control.m"
            break;
#line 924 "par_loop_control.m"
          case (MR_Integer) 7:
#line 1011 "par_loop_control.m"
            {
#line 1012 "par_loop_control.m"
              {
#line 1012 "par_loop_control.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_rewrite_recursive_call\'/6", (MR_String) "shorthand");
#line 1012 "par_loop_control.m"
                return;
              }
#line 1011 "par_loop_control.m"
            }
#line 924 "par_loop_control.m"
            break;
#line 924 "par_loop_control.m"
        }
#line 924 "par_loop_control.m"
        break;
#line 924 "par_loop_control.m"
    }
#line 889 "par_loop_control.m"
  }
#line 884 "par_loop_control.m"
}

#line 838 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_1,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__UseParentStack_2,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__3_3,
#line 838 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__4_4,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5,
#line 838 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6,
#line 838 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7,
#line 838 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8)
#line 838 "par_loop_control.m"
{
#line 842 "par_loop_control.m"
  {
#line 842 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 842 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 842 "par_loop_control.m"
      {
#line 842 "par_loop_control.m"
        *transform_hlds__par_loop_control__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8 = transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7;
#line 842 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6 = transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5;
#line 842 "par_loop_control.m"
      }
#line 842 "par_loop_control.m"
    else
#line 844 "par_loop_control.m"
      {
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_64_64;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 0)));
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjuncts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__3_3, (MR_Integer) 1)));
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__LCSVar_24;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__GetFreeSlotGoal_25;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__LCVar_26;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__JoinAndTerminateGoal_27;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0GoalInfo_28;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct0Goals_29;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ConjunctGoals_30;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjunct_33;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalInfo_34;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoalExpr_35;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ScopeGoal_36;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TailGoals_37;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_44_44;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_49_49;
#line 844 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_52_52;
#line 851 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_53_53;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_54_54;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_55_55;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_56_56;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_57_57;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_58_58;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_59_59;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_60_60;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_61_61;
#line 864 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_62_62;

#line 846 "par_loop_control.m"
        {
#line 846 "par_loop_control.m"
          transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(transform_hlds__par_loop_control__Info_1, &transform_hlds__par_loop_control__LCSVar_24, &transform_hlds__par_loop_control__GetFreeSlotGoal_25, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_5, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43);
        }
#line 851 "par_loop_control.m"
        transform_hlds__par_loop_control__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Conjunct0_19, (MR_Integer) 0)));
#line 851 "par_loop_control.m"
        transform_hlds__par_loop_control__Conjunct0GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Conjunct0_19, (MR_Integer) 1)));
#line 852 "par_loop_control.m"
        {
#line 852 "par_loop_control.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__par_loop_control__Conjunct0_19, &transform_hlds__par_loop_control__Conjunct0Goals_29);
        }
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 0)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__LCVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 1)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 2)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 3)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 4)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 5)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 6)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 7)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 8)));
#line 864 "par_loop_control.m"
        transform_hlds__par_loop_control__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_1, (MR_Integer) 9)));
#line 850 "par_loop_control.m"
        {
#line 850 "par_loop_control.m"
          transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(transform_hlds__par_loop_control__Info_1, transform_hlds__par_loop_control__LCVar_26, transform_hlds__par_loop_control__LCSVar_24, &transform_hlds__par_loop_control__JoinAndTerminateGoal_27);
        }
#line 853 "par_loop_control.m"
        {
#line 853 "par_loop_control.m"
          transform_hlds__par_loop_control__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_44_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__JoinAndTerminateGoal_27));
#line 853 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "par_loop_control.m"
        }
#line 853 "par_loop_control.m"
        {
#line 853 "par_loop_control.m"
          transform_hlds__par_loop_control__ConjunctGoals_30 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjunct0Goals_29, transform_hlds__par_loop_control__V_44_44);
        }
#line 855 "par_loop_control.m"
        {
#line 855 "par_loop_control.m"
          transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__Conjunct0GoalInfo_28);
        }
#line 8753 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 856 "par_loop_control.m"
        {
#line 856 "par_loop_control.m"
          parse_tree__set_of_var__insert_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_64_64, transform_hlds__par_loop_control__LCSVar_24, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_46_46, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47);
        }
#line 857 "par_loop_control.m"
        {
#line 857 "par_loop_control.m"
          parse_tree__set_of_var__insert_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_64_64, transform_hlds__par_loop_control__LCVar_26, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_47_47, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48);
        }
#line 858 "par_loop_control.m"
        {
#line 858 "par_loop_control.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_48_48, transform_hlds__par_loop_control__Conjunct0GoalInfo_28, &transform_hlds__par_loop_control__ScopeGoalInfo_34);
        }
#line 861 "par_loop_control.m"
        {
#line 861 "par_loop_control.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__par_loop_control__ConjunctGoals_30, transform_hlds__par_loop_control__ScopeGoalInfo_34, &transform_hlds__par_loop_control__Conjunct_33);
        }
#line 867 "par_loop_control.m"
        {
#line 867 "par_loop_control.m"
          transform_hlds__par_loop_control__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 867 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 867 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_26));
#line 867 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 2) = ((MR_Box) (transform_hlds__par_loop_control__LCSVar_24));
#line 867 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_49_49, 3) = ((MR_Box) (transform_hlds__par_loop_control__UseParentStack_2));
#line 867 "par_loop_control.m"
        }
#line 866 "par_loop_control.m"
        {
#line 866 "par_loop_control.m"
          transform_hlds__par_loop_control__ScopeGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_49_49));
#line 866 "par_loop_control.m"
          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__ScopeGoalExpr_35, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjunct_33));
#line 866 "par_loop_control.m"
        }
#line 868 "par_loop_control.m"
        {
#line 868 "par_loop_control.m"
          transform_hlds__par_loop_control__ScopeGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 868 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ScopeGoal_36, 0) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalExpr_35));
#line 868 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__ScopeGoal_36, 1) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoalInfo_34));
#line 868 "par_loop_control.m"
        }
#line 870 "par_loop_control.m"
        {
#line 870 "par_loop_control.m"
          transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(transform_hlds__par_loop_control__Info_1, transform_hlds__par_loop_control__UseParentStack_2, transform_hlds__par_loop_control__Conjuncts0_20, &transform_hlds__par_loop_control__TailGoals_37, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_42_42, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_6, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_43_43, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_8);
        }
#line 872 "par_loop_control.m"
        {
#line 872 "par_loop_control.m"
          transform_hlds__par_loop_control__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_52_52, 0) = ((MR_Box) (transform_hlds__par_loop_control__ScopeGoal_36));
#line 872 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_52_52, 1) = ((MR_Box) (transform_hlds__par_loop_control__TailGoals_37));
#line 872 "par_loop_control.m"
        }
#line 872 "par_loop_control.m"
        {
#line 872 "par_loop_control.m"
          MR_Word base;
#line 872 "par_loop_control.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "par_loop_control.m"
          *transform_hlds__par_loop_control__HeadVar__4_4 = base;
#line 872 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GetFreeSlotGoal_25));
#line 872 "par_loop_control.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_52_52));
#line 872 "par_loop_control.m"
        }
#line 844 "par_loop_control.m"
      }
#line 842 "par_loop_control.m"
  }
#line 838 "par_loop_control.m"
}

#line 813 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjuncts0_11,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_12,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalInfo_13,
#line 813 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__Goal_14,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27,
#line 813 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28,
#line 813 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29,
#line 813 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30)
#line 813 "par_loop_control.m"
{
#line 818 "par_loop_control.m"
  {
#line 818 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__EarlierConjuncts0_17;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjunct0_18;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjunct_19;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__UseParentStack_20;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LastConjGoals_22;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__EarlierConjuncts_23;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Conjuncts_24;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Goal0_25;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_42;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_43;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47;
#line 818 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49;
#line 819 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv0_LastConjunct0_18;
#line 821 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_21_21;
#line 833 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_35_35;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_50_50;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_51_51;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_52_52;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_53_53;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_54_54;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_55_55;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_56_56;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_57_57;
#line 1317 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;

#line 819 "par_loop_control.m"
    {
#line 819 "par_loop_control.m"
      mercury__list__det_split_last_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_36_36, transform_hlds__par_loop_control__Conjuncts0_11, &transform_hlds__par_loop_control__EarlierConjuncts0_17, &transform_hlds__par_loop_control__conv0_LastConjunct0_18);
    }
#line 819 "par_loop_control.m"
    transform_hlds__par_loop_control__LastConjunct0_18 = ((MR_Word) transform_hlds__par_loop_control__conv0_LastConjunct0_18);
#line 821 "par_loop_control.m"
    {
#line 821 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_12, transform_hlds__par_loop_control__LastConjunct0_18, &transform_hlds__par_loop_control__LastConjunct_19, &transform_hlds__par_loop_control__UseParentStack_20, &transform_hlds__par_loop_control__V_21_21);
    }
#line 823 "par_loop_control.m"
    {
#line 823 "par_loop_control.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__par_loop_control__LastConjunct_19, &transform_hlds__par_loop_control__LastConjGoals_22);
    }
#line 826 "par_loop_control.m"
    {
#line 826 "par_loop_control.m"
      transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__UseParentStack_20, transform_hlds__par_loop_control__EarlierConjuncts0_17, &transform_hlds__par_loop_control__EarlierConjuncts_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_27, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_28, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_29, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_30);
    }
#line 828 "par_loop_control.m"
    {
#line 828 "par_loop_control.m"
      transform_hlds__par_loop_control__Conjuncts_24 = mercury__list__f_43_43_2_f_0(transform_hlds__par_loop_control__TypeCtorInfo_36_36, transform_hlds__par_loop_control__EarlierConjuncts_23, transform_hlds__par_loop_control__LastConjGoals_22);
    }
#line 832 "par_loop_control.m"
    {
#line 832 "par_loop_control.m"
      hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__par_loop_control__Conjuncts_24, (MR_Integer) 0, &transform_hlds__par_loop_control__Goal0_25);
    }
#line 833 "par_loop_control.m"
    transform_hlds__par_loop_control__GoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_25, (MR_Integer) 0)));
#line 833 "par_loop_control.m"
    transform_hlds__par_loop_control__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal0_25, (MR_Integer) 1)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 0)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__LCVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 1)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 2)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 3)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 4)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 5)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 6)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 7)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 8)));
#line 1317 "par_loop_control.m"
    transform_hlds__par_loop_control__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_10, (MR_Integer) 9)));
#line 1318 "par_loop_control.m"
    {
#line 1318 "par_loop_control.m"
      transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__par_loop_control__GoalInfo_13);
    }
#line 1319 "par_loop_control.m"
    {
#line 1319 "par_loop_control.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__par_loop_control__LCVar_43, transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_12_45, &transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46);
    }
#line 1320 "par_loop_control.m"
    {
#line 1320 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_NonLocals_13_46, transform_hlds__par_loop_control__GoalInfo_13, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47);
    }
#line 1322 "par_loop_control.m"
    {
#line 1322 "par_loop_control.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_14_47, &transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49);
    }
#line 1324 "par_loop_control.m"
    {
#line 1324 "par_loop_control.m"
      MR_Word base;
#line 1324 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "par_loop_control.m"
      *transform_hlds__par_loop_control__Goal_14 = base;
#line 1324 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_42));
#line 1324 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_GoalInfo_16_49));
#line 1324 "par_loop_control.m"
    }
#line 818 "par_loop_control.m"
  }
#line 813 "par_loop_control.m"
}

#line 712 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__IsLastGoal_11,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalPath0_12,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48,
#line 712 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50,
#line 712 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51,
#line 712 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52,
#line 712 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53)
#line 712 "par_loop_control.m"
{
#line 718 "par_loop_control.m"
  {
#line 718 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 718 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
#line 718 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
#line 804 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalPath_18;
#line 804 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Step_19;

#line 720 "par_loop_control.m"
    {
#line 720 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = mdbcomp__goal_path__goal_path_remove_first_3_p_0(transform_hlds__par_loop_control__GoalPath0_12, &transform_hlds__par_loop_control__GoalPath_18, &transform_hlds__par_loop_control__Step_19);
    }
#line 804 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 722 "par_loop_control.m"
      {
#line 722 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
#line 722 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__ErrorString_20;
#line 722 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__GoalExpr_27;
#line 722 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_57_57;
#line 722 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89;
#line 722 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_122_122;
#line 722 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_128_128;
#line 722 "par_loop_control.m"
        MR_String transform_hlds__par_loop_control__V_129_129;

#line 721 "par_loop_control.m"
        {
#line 721 "par_loop_control.m"
          transform_hlds__par_loop_control__V_57_57 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
        }
#line 9091 "transform_hlds.par_loop_control.c"
        transform_hlds__par_loop_control__V_128_128 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_6[0];
#line 721 "par_loop_control.m"
        {
#line 721 "par_loop_control.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_57_57, &transform_hlds__par_loop_control__V_122_122);
        }
#line 721 "par_loop_control.m"
        {
#line 721 "par_loop_control.m"
          transform_hlds__par_loop_control__V_129_129 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_122_122, (MR_String) "\"");
        }
#line 721 "par_loop_control.m"
        {
#line 721 "par_loop_control.m"
          transform_hlds__par_loop_control__ErrorString_20 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t follow goal path step: \"", transform_hlds__par_loop_control__V_129_129);
        }
#line 747 "par_loop_control.m"
#line 747 "par_loop_control.m"
        switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Step_19)) {
#line 747 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 747 "par_loop_control.m"
          case (MR_Integer) 0:
#line 747 "par_loop_control.m"
#line 747 "par_loop_control.m"
            switch (MR_unmkbody(transform_hlds__par_loop_control__Step_19)) {
#line 747 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 747 "par_loop_control.m"
              case (MR_Integer) 0:
#line 747 "par_loop_control.m"
              case (MR_Integer) 3:
#line 747 "par_loop_control.m"
              case (MR_Integer) 4:
#line 747 "par_loop_control.m"
              case (MR_Integer) 5:
#line 747 "par_loop_control.m"
              case (MR_Integer) 6:
#line 797 "par_loop_control.m"
                {
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_61_61;
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_65_65;
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_132_132;
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_139_139;

#line 800 "par_loop_control.m"
                  {
#line 800 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
                  }
#line 800 "par_loop_control.m"
                  {
#line 800 "par_loop_control.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_65_65, &transform_hlds__par_loop_control__V_132_132);
                  }
#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_139_139 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_132_132, (MR_String) "\"");
                  }
#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_139_139);
                  }
#line 798 "par_loop_control.m"
                  {
#line 798 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 798 "par_loop_control.m"
                    return;
                  }
#line 797 "par_loop_control.m"
                }
#line 747 "par_loop_control.m"
                break;
#line 747 "par_loop_control.m"
              case (MR_Integer) 1:
#line 768 "par_loop_control.m"
                {
#line 768 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Vars_36;
#line 768 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Cond_37;
#line 768 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Then0_38;
#line 768 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Else_39;

#line 764 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 764 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 764 "par_loop_control.m"
                    {
#line 764 "par_loop_control.m"
                      transform_hlds__par_loop_control__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 764 "par_loop_control.m"
                      transform_hlds__par_loop_control__Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 764 "par_loop_control.m"
                      transform_hlds__par_loop_control__Then0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 764 "par_loop_control.m"
                      transform_hlds__par_loop_control__Else_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 766 "par_loop_control.m"
                      {
#line 766 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Then_40;

#line 765 "par_loop_control.m"
                        {
#line 765 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Then0_38, &transform_hlds__par_loop_control__Then_40, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 767 "par_loop_control.m"
                        {
#line 767 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 767 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 767 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_36));
#line 767 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_37));
#line 767 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_40));
#line 767 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_39));
#line 767 "par_loop_control.m"
                        }
#line 766 "par_loop_control.m"
                      }
#line 764 "par_loop_control.m"
                    }
#line 764 "par_loop_control.m"
                  else
#line 769 "par_loop_control.m"
                    {
#line 769 "par_loop_control.m"
                      {
#line 769 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 769 "par_loop_control.m"
                        return;
                      }
#line 769 "par_loop_control.m"
                    }
#line 768 "par_loop_control.m"
                }
#line 747 "par_loop_control.m"
                break;
#line 747 "par_loop_control.m"
              case (MR_Integer) 2:
#line 777 "par_loop_control.m"
                {
#line 777 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Else0_41;
#line 777 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Vars_100;
#line 777 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Cond_101;
#line 777 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Then_103;

#line 773 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 773 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 773 "par_loop_control.m"
                    {
#line 773 "par_loop_control.m"
                      transform_hlds__par_loop_control__Vars_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 773 "par_loop_control.m"
                      transform_hlds__par_loop_control__Cond_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 773 "par_loop_control.m"
                      transform_hlds__par_loop_control__Then_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 773 "par_loop_control.m"
                      transform_hlds__par_loop_control__Else0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 4)));
#line 775 "par_loop_control.m"
                      {
#line 775 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Else_99;

#line 774 "par_loop_control.m"
                        {
#line 774 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Else0_41, &transform_hlds__par_loop_control__Else_99, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 776 "par_loop_control.m"
                        {
#line 776 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 776 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 776 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Vars_100));
#line 776 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Cond_101));
#line 776 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Then_103));
#line 776 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 4) = ((MR_Box) (transform_hlds__par_loop_control__Else_99));
#line 776 "par_loop_control.m"
                        }
#line 775 "par_loop_control.m"
                      }
#line 773 "par_loop_control.m"
                    }
#line 773 "par_loop_control.m"
                  else
#line 778 "par_loop_control.m"
                    {
#line 778 "par_loop_control.m"
                      {
#line 778 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 778 "par_loop_control.m"
                        return;
                      }
#line 778 "par_loop_control.m"
                    }
#line 777 "par_loop_control.m"
                }
#line 747 "par_loop_control.m"
                break;
#line 747 "par_loop_control.m"
            }
#line 747 "par_loop_control.m"
            break;
#line 747 "par_loop_control.m"
          case (MR_Integer) 1:
#line 724 "par_loop_control.m"
            {
#line 724 "par_loop_control.m"
              MR_Integer transform_hlds__par_loop_control__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)));
#line 744 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conjs0_22;
#line 744 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__Conj0_23;
#line 726 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__TypeCtorInfo_115_115;
#line 726 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__V_83_83;
#line 727 "par_loop_control.m"
              MR_Box transform_hlds__par_loop_control__conv0_Conj0_23;

#line 726 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 726 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 726 "par_loop_control.m"
                {
#line 726 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 726 "par_loop_control.m"
                  transform_hlds__par_loop_control__Conjs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 726 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_83_83 == (MR_Integer) 0);
#line 726 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 726 "par_loop_control.m"
                    {
#line 9357 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__TypeCtorInfo_115_115 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 727 "par_loop_control.m"
                      {
#line 727 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = mercury__list__index1_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_115_115, transform_hlds__par_loop_control__Conjs0_22, transform_hlds__par_loop_control__N_21, &transform_hlds__par_loop_control__conv0_Conj0_23);
                      }
#line 727 "par_loop_control.m"
                      if (transform_hlds__par_loop_control__succeeded)
#line 727 "par_loop_control.m"
                        {
#line 727 "par_loop_control.m"
                          transform_hlds__par_loop_control__Conj0_23 = ((MR_Word) transform_hlds__par_loop_control__conv0_Conj0_23);
#line 727 "par_loop_control.m"
                          transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 727 "par_loop_control.m"
                        }
#line 726 "par_loop_control.m"
                    }
#line 726 "par_loop_control.m"
                }
#line 744 "par_loop_control.m"
              if (transform_hlds__par_loop_control__succeeded)
#line 739 "par_loop_control.m"
                {
#line 739 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__IsLastGoalConj_24;
#line 739 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Conj_25;
#line 739 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Conjs_26;

#line 736 "par_loop_control.m"
#line 736 "par_loop_control.m"
                  switch (transform_hlds__par_loop_control__IsLastGoal_11) {
#line 736 "par_loop_control.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 736 "par_loop_control.m"
                    case (MR_Integer) 0:
#line 733 "par_loop_control.m"
                      {
#line 731 "par_loop_control.m"
                        MR_Integer transform_hlds__par_loop_control__V_120_120;

#line 731 "par_loop_control.m"
                        {
#line 731 "par_loop_control.m"
                          transform_hlds__par_loop_control__V_120_120 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_22);
                        }
#line 731 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__N_21 == transform_hlds__par_loop_control__V_120_120);
#line 733 "par_loop_control.m"
                        if (transform_hlds__par_loop_control__succeeded)
#line 732 "par_loop_control.m"
                          transform_hlds__par_loop_control__IsLastGoalConj_24 = (MR_Integer) 0;
#line 733 "par_loop_control.m"
                        else
#line 734 "par_loop_control.m"
                          transform_hlds__par_loop_control__IsLastGoalConj_24 = (MR_Integer) 1;
#line 733 "par_loop_control.m"
                      }
#line 736 "par_loop_control.m"
                      break;
#line 736 "par_loop_control.m"
                    case (MR_Integer) 1:
#line 738 "par_loop_control.m"
                      transform_hlds__par_loop_control__IsLastGoalConj_24 = transform_hlds__par_loop_control__IsLastGoal_11;
#line 736 "par_loop_control.m"
                      break;
#line 736 "par_loop_control.m"
                  }
#line 740 "par_loop_control.m"
                  {
#line 740 "par_loop_control.m"
                    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoalConj_24, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Conj0_23, &transform_hlds__par_loop_control__Conj_25, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                  }
#line 742 "par_loop_control.m"
                  {
#line 742 "par_loop_control.m"
                    mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__par_loop_control__Conjs0_22, transform_hlds__par_loop_control__N_21, ((MR_Box) (transform_hlds__par_loop_control__Conj_25)), &transform_hlds__par_loop_control__Conjs_26);
                  }
#line 743 "par_loop_control.m"
                  {
#line 743 "par_loop_control.m"
                    transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 743 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 743 "par_loop_control.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__Conjs_26));
#line 743 "par_loop_control.m"
                  }
#line 739 "par_loop_control.m"
                }
#line 744 "par_loop_control.m"
              else
#line 745 "par_loop_control.m"
                {
#line 745 "par_loop_control.m"
                  {
#line 745 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 745 "par_loop_control.m"
                    return;
                  }
#line 745 "par_loop_control.m"
                }
#line 724 "par_loop_control.m"
            }
#line 747 "par_loop_control.m"
            break;
#line 747 "par_loop_control.m"
          case (MR_Integer) 2:
#line 797 "par_loop_control.m"
            {
#line 797 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_61_61;
#line 797 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_65_65;
#line 797 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_132_132;
#line 797 "par_loop_control.m"
              MR_String transform_hlds__par_loop_control__V_139_139;

#line 800 "par_loop_control.m"
              {
#line 800 "par_loop_control.m"
                transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
              }
#line 800 "par_loop_control.m"
              {
#line 800 "par_loop_control.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_65_65, &transform_hlds__par_loop_control__V_132_132);
              }
#line 799 "par_loop_control.m"
              {
#line 799 "par_loop_control.m"
                transform_hlds__par_loop_control__V_139_139 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_132_132, (MR_String) "\"");
              }
#line 799 "par_loop_control.m"
              {
#line 799 "par_loop_control.m"
                transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_139_139);
              }
#line 798 "par_loop_control.m"
              {
#line 798 "par_loop_control.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 798 "par_loop_control.m"
                return;
              }
#line 797 "par_loop_control.m"
            }
#line 747 "par_loop_control.m"
            break;
#line 747 "par_loop_control.m"
          case (MR_Integer) 3:
#line 747 "par_loop_control.m"
#line 747 "par_loop_control.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 0)))) {
#line 747 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 747 "par_loop_control.m"
              case (MR_Integer) 0:
#line 748 "par_loop_control.m"
                {
#line 748 "par_loop_control.m"
                  MR_Integer transform_hlds__par_loop_control__N_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 1)));
#line 748 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__Step_19, (MR_Integer) 2)));
#line 759 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Var_29;
#line 759 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__CanFail_30;
#line 759 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Cases0_31;
#line 759 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Case0_32;
#line 750 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__TypeCtorInfo_118_118;
#line 751 "par_loop_control.m"
                  MR_Box transform_hlds__par_loop_control__conv1_Case0_32;

#line 750 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 750 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 750 "par_loop_control.m"
                    {
#line 750 "par_loop_control.m"
                      transform_hlds__par_loop_control__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 750 "par_loop_control.m"
                      transform_hlds__par_loop_control__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 750 "par_loop_control.m"
                      transform_hlds__par_loop_control__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 3)));
#line 9553 "transform_hlds.par_loop_control.c"
                      transform_hlds__par_loop_control__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 751 "par_loop_control.m"
                      {
#line 751 "par_loop_control.m"
                        transform_hlds__par_loop_control__succeeded = mercury__list__index1_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_118_118, transform_hlds__par_loop_control__Cases0_31, transform_hlds__par_loop_control__N_98, &transform_hlds__par_loop_control__conv1_Case0_32);
                      }
#line 751 "par_loop_control.m"
                      if (transform_hlds__par_loop_control__succeeded)
#line 751 "par_loop_control.m"
                        {
#line 751 "par_loop_control.m"
                          transform_hlds__par_loop_control__Case0_32 = ((MR_Word) transform_hlds__par_loop_control__conv1_Case0_32);
#line 751 "par_loop_control.m"
                          transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 751 "par_loop_control.m"
                        }
#line 750 "par_loop_control.m"
                    }
#line 759 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 753 "par_loop_control.m"
                    {
#line 753 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Goal_13;
#line 753 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 2)));
#line 753 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Case_34;
#line 753 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__Cases_35;
#line 753 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 0)));
#line 753 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 1)));
#line 756 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_111_111;
#line 756 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_112_112;
#line 756 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__V_113_113;

#line 754 "par_loop_control.m"
                      {
#line 754 "par_loop_control.m"
                        transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__Goal0_33, &transform_hlds__par_loop_control__Goal_13, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                      }
#line 756 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 0)));
#line 756 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 1)));
#line 756 "par_loop_control.m"
                      transform_hlds__par_loop_control__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case0_32, (MR_Integer) 2)));
#line 756 "par_loop_control.m"
                      {
#line 756 "par_loop_control.m"
                        transform_hlds__par_loop_control__Case_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_111_111));
#line 756 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_112_112));
#line 756 "par_loop_control.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Case_34, 2) = ((MR_Box) (transform_hlds__par_loop_control__Goal_13));
#line 756 "par_loop_control.m"
                      }
#line 757 "par_loop_control.m"
                      {
#line 757 "par_loop_control.m"
                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__par_loop_control__Cases0_31, transform_hlds__par_loop_control__N_98, ((MR_Box) (transform_hlds__par_loop_control__Case_34)), &transform_hlds__par_loop_control__Cases_35);
                      }
#line 758 "par_loop_control.m"
                      {
#line 758 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 758 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 758 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Var_29));
#line 758 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__CanFail_30));
#line 758 "par_loop_control.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__par_loop_control__Cases_35));
#line 758 "par_loop_control.m"
                      }
#line 753 "par_loop_control.m"
                    }
#line 759 "par_loop_control.m"
                  else
#line 760 "par_loop_control.m"
                    {
#line 760 "par_loop_control.m"
                      {
#line 760 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 760 "par_loop_control.m"
                        return;
                      }
#line 760 "par_loop_control.m"
                    }
#line 748 "par_loop_control.m"
                }
#line 747 "par_loop_control.m"
                break;
#line 747 "par_loop_control.m"
              case (MR_Integer) 1:
#line 786 "par_loop_control.m"
                {
#line 786 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__Reason_43;
#line 786 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__SubGoal0_44;

#line 782 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 782 "par_loop_control.m"
                  if (transform_hlds__par_loop_control__succeeded)
#line 782 "par_loop_control.m"
                    {
#line 782 "par_loop_control.m"
                      transform_hlds__par_loop_control__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 782 "par_loop_control.m"
                      transform_hlds__par_loop_control__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 784 "par_loop_control.m"
                      {
#line 784 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__SubGoal_45;

#line 783 "par_loop_control.m"
                        {
#line 783 "par_loop_control.m"
                          transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalPath_18, transform_hlds__par_loop_control__SubGoal0_44, &transform_hlds__par_loop_control__SubGoal_45, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
                        }
#line 785 "par_loop_control.m"
                        {
#line 785 "par_loop_control.m"
                          transform_hlds__par_loop_control__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 785 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 785 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__par_loop_control__Reason_43));
#line 785 "par_loop_control.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__par_loop_control__SubGoal_45));
#line 785 "par_loop_control.m"
                        }
#line 784 "par_loop_control.m"
                      }
#line 782 "par_loop_control.m"
                    }
#line 782 "par_loop_control.m"
                  else
#line 787 "par_loop_control.m"
                    {
#line 787 "par_loop_control.m"
                      {
#line 787 "par_loop_control.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__ErrorString_20);
#line 787 "par_loop_control.m"
                        return;
                      }
#line 787 "par_loop_control.m"
                    }
#line 786 "par_loop_control.m"
                }
#line 747 "par_loop_control.m"
                break;
#line 747 "par_loop_control.m"
              case (MR_Integer) 2:
#line 797 "par_loop_control.m"
                {
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_61_61;
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_65_65;
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_132_132;
#line 797 "par_loop_control.m"
                  MR_String transform_hlds__par_loop_control__V_139_139;

#line 800 "par_loop_control.m"
                  {
#line 800 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_65_65 = mercury__string__string_1_f_0(transform_hlds__par_loop_control__TypeCtorInfo_114_114, ((MR_Box) (transform_hlds__par_loop_control__Step_19)));
                  }
#line 800 "par_loop_control.m"
                  {
#line 800 "par_loop_control.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__par_loop_control__V_128_128, transform_hlds__par_loop_control__V_65_65, &transform_hlds__par_loop_control__V_132_132);
                  }
#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_139_139 = mercury__string__f_43_43_2_f_0(transform_hlds__par_loop_control__V_132_132, (MR_String) "\"");
                  }
#line 799 "par_loop_control.m"
                  {
#line 799 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", transform_hlds__par_loop_control__V_139_139);
                  }
#line 798 "par_loop_control.m"
                  {
#line 798 "par_loop_control.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", transform_hlds__par_loop_control__V_61_61);
#line 798 "par_loop_control.m"
                    return;
                  }
#line 797 "par_loop_control.m"
                }
#line 747 "par_loop_control.m"
                break;
#line 747 "par_loop_control.m"
            }
#line 747 "par_loop_control.m"
            break;
#line 747 "par_loop_control.m"
        }
#line 802 "par_loop_control.m"
        {
#line 802 "par_loop_control.m"
          transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalExpr_27));
#line 802 "par_loop_control.m"
          MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__GoalInfo_17));
#line 802 "par_loop_control.m"
        }
#line 803 "par_loop_control.m"
        {
#line 803 "par_loop_control.m"
          transform_hlds__par_loop_control__fixup_goal_info_3_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_89_89, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49);
#line 803 "par_loop_control.m"
          return;
        }
#line 722 "par_loop_control.m"
      }
#line 804 "par_loop_control.m"
    else
#line 808 "par_loop_control.m"
      {
#line 808 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Conjs_108;
#line 805 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__V_91_91;

#line 805 "par_loop_control.m"
        transform_hlds__par_loop_control__succeeded = ((((MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 805 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 805 "par_loop_control.m"
          {
#line 805 "par_loop_control.m"
            transform_hlds__par_loop_control__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 1)));
#line 805 "par_loop_control.m"
            transform_hlds__par_loop_control__Conjs_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr0_16, (MR_Integer) 2)));
#line 805 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__V_91_91 == (MR_Integer) 1);
#line 805 "par_loop_control.m"
          }
#line 808 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 806 "par_loop_control.m"
          {
#line 806 "par_loop_control.m"
            transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(transform_hlds__par_loop_control__Info_10, transform_hlds__par_loop_control__Conjs_108, transform_hlds__par_loop_control__IsLastGoal_11, transform_hlds__par_loop_control__GoalInfo_17, transform_hlds__par_loop_control__STATE_VARIABLE_Goal_49, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_50, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_51, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_52, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_53);
#line 806 "par_loop_control.m"
            return;
          }
#line 808 "par_loop_control.m"
        else
#line 809 "par_loop_control.m"
          {
#line 809 "par_loop_control.m"
            {
#line 809 "par_loop_control.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", (MR_String) "expected parallel conjunction");
#line 809 "par_loop_control.m"
              return;
            }
#line 809 "par_loop_control.m"
          }
#line 808 "par_loop_control.m"
      }
#line 718 "par_loop_control.m"
  }
#line 712 "par_loop_control.m"
}

#line 708 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 708 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 708 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5,
#line 708 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_6,
#line 708 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_7)
#line 708 "par_loop_control.m"
{
#line 708 "par_loop_control.m"
  {
#line 708 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 708 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49;
#line 708 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51;
#line 708 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53;

#line 708 "par_loop_control.m"
    {
#line 708 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_4), &transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_6), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53);
    }
#line 708 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv3_STATE_VARIABLE_Goal_49));
#line 708 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_5 = ((MR_Box) (transform_hlds__par_loop_control__conv2_STATE_VARIABLE_VarSet_51));
#line 708 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_7 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_VarTypes_53));
#line 708 "par_loop_control.m"
  }
#line 708 "par_loop_control.m"
}

#line 707 "par_loop_control.m"
static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 707 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1)
#line 707 "par_loop_control.m"
{
#line 707 "par_loop_control.m"
  {
#line 707 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__wrapper_arg_2;
#line 707 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 707 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_HeadVar__3_3;

#line 707 "par_loop_control.m"
    {
#line 707 "par_loop_control.m"
      transform_hlds__par_loop_control__conv0_HeadVar__3_3 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1));
    }
#line 707 "par_loop_control.m"
    transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv0_HeadVar__3_3));
#line 707 "par_loop_control.m"
    return transform_hlds__par_loop_control__wrapper_arg_2;
#line 707 "par_loop_control.m"
  }
#line 707 "par_loop_control.m"
}

#line 701 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Info_10,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalIds_11,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17,
#line 701 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19,
#line 701 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20,
#line 701 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21,
#line 701 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22)
#line 701 "par_loop_control.m"
{
#line 706 "par_loop_control.m"
  {
#line 706 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 706 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
#line 706 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalPaths_16;
#line 706 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_23_23;
#line 706 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_24_24;
#line 708 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18;
#line 708 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20;
#line 708 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22;

#line 707 "par_loop_control.m"
    {
#line 707 "par_loop_control.m"
      transform_hlds__par_loop_control__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 707 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_23_23, 3) = ((MR_Box) (transform_hlds__par_loop_control__ContainingGoalMap_12));
#line 707 "par_loop_control.m"
    }
#line 707 "par_loop_control.m"
    {
#line 707 "par_loop_control.m"
      transform_hlds__par_loop_control__GoalPaths_16 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, transform_hlds__par_loop_control__TypeCtorInfo_30_30, transform_hlds__par_loop_control__V_23_23, transform_hlds__par_loop_control__GoalIds_11);
    }
#line 708 "par_loop_control.m"
    {
#line 708 "par_loop_control.m"
      transform_hlds__par_loop_control__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 708 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[0]));
#line 708 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2));
#line 708 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 708 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 3) = ((MR_Box) (transform_hlds__par_loop_control__Info_10));
#line 708 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_24_24, 4) = ((MR_Box) ((MR_Integer) 0));
#line 708 "par_loop_control.m"
    }
#line 708 "par_loop_control.m"
    {
#line 708 "par_loop_control.m"
      mercury__list__foldl3_8_p_0(transform_hlds__par_loop_control__TypeCtorInfo_30_30, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__par_loop_control__V_24_24, transform_hlds__par_loop_control__GoalPaths_16, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_Goal_0_17)), &transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_0_19)), &transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20, ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_0_21)), &transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22);
    }
#line 708 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_Goal_18 = ((MR_Word) transform_hlds__par_loop_control__conv6_STATE_VARIABLE_Goal_18);
#line 708 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_20 = ((MR_Word) transform_hlds__par_loop_control__conv5_STATE_VARIABLE_VarSet_20);
#line 708 "par_loop_control.m"
    *transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_22 = ((MR_Word) transform_hlds__par_loop_control__conv4_STATE_VARIABLE_VarTypes_22);
#line 706 "par_loop_control.m"
  }
#line 701 "par_loop_control.m"
}

#line 660 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
#line 660 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ModuleInfo_3,
#line 660 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PreserveTailRecursion_4)
#line 660 "par_loop_control.m"
{
#line 663 "par_loop_control.m"
  {
#line 663 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 663 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Globals_5;
#line 663 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PreserveTailRecursionBool_6;

#line 664 "par_loop_control.m"
    {
#line 664 "par_loop_control.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__par_loop_control__ModuleInfo_3, &transform_hlds__par_loop_control__Globals_5);
    }
#line 665 "par_loop_control.m"
    {
#line 665 "par_loop_control.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__par_loop_control__Globals_5, (MR_Integer) 678, &transform_hlds__par_loop_control__PreserveTailRecursionBool_6);
    }
#line 670 "par_loop_control.m"
#line 670 "par_loop_control.m"
    switch (transform_hlds__par_loop_control__PreserveTailRecursionBool_6) {
#line 670 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 670 "par_loop_control.m"
      case (MR_Integer) 0:
#line 672 "par_loop_control.m"
        *transform_hlds__par_loop_control__PreserveTailRecursion_4 = (MR_Integer) 1;
#line 670 "par_loop_control.m"
        break;
#line 670 "par_loop_control.m"
      case (MR_Integer) 1:
#line 669 "par_loop_control.m"
        *transform_hlds__par_loop_control__PreserveTailRecursion_4 = (MR_Integer) 0;
#line 670 "par_loop_control.m"
        break;
#line 670 "par_loop_control.m"
    }
#line 663 "par_loop_control.m"
  }
#line 660 "par_loop_control.m"
}

#line 561 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__RecParConjIds_9,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldPredProcId_10,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__OldProcInfo_11,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__ContainingGoalMap_12,
#line 561 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredProcId_13,
#line 561 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__PredSym_14,
#line 561 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55,
#line 561 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56)
#line 561 "par_loop_control.m"
{
#line 566 "par_loop_control.m"
  {
#line 566 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeInfo_102_102;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_103_103;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldPredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OldPredProcId_10, (MR_Integer) 0)));
#line 566 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__OldProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__OldPredProcId_10, (MR_Integer) 1)));
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldPredInfo_18;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ModuleName_19;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredOrFunc_20;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredSym0_21;
#line 566 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__OldProcInt_22;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Context_23;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__OldOrigin_24;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Origin_25;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Markers_26;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeVarSet_27;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ExistQVars_28;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ClassConstraints_29;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgTypes0_30;
#line 566 "par_loop_control.m"
    MR_Integer transform_hlds__par_loop_control__ProcId_35;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PredId_37;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgModes0_38;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars0_39;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__LCVar_40;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__PreserveTailRecursion_41;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__WaitFreeSlotProc_42;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__JoinAndTerminateProc_43;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Info_44;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HeadVars_46;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgTypes_47;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ArgModes_50;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstVarSet_51;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__RttiVarMaps_52;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_53;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__ProcInfo_54;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_58_58;
#line 566 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_59_59;
#line 566 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_61_61;
#line 566 "par_loop_control.m"
    MR_String transform_hlds__par_loop_control__V_63_63;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_71_71;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_72_72;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_82_82;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_84_84;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_85_85;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_90_90;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_97_97;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98;
#line 566 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_99_99;
#line 638 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_45_45;

#line 568 "par_loop_control.m"
    {
#line 568 "par_loop_control.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, transform_hlds__par_loop_control__OldPredId_16, &transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 571 "par_loop_control.m"
    {
#line 571 "par_loop_control.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__ModuleName_19);
    }
#line 572 "par_loop_control.m"
    {
#line 572 "par_loop_control.m"
      transform_hlds__par_loop_control__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 573 "par_loop_control.m"
    {
#line 573 "par_loop_control.m"
      transform_hlds__par_loop_control__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 573 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_58_58, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredOrFunc_20));
#line 573 "par_loop_control.m"
    }
#line 574 "par_loop_control.m"
    {
#line 574 "par_loop_control.m"
      transform_hlds__par_loop_control__V_59_59 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__par_loop_control__OldPredInfo_18);
    }
#line 573 "par_loop_control.m"
    {
#line 573 "par_loop_control.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__par_loop_control__ModuleName_19, (MR_String) "LoopControl", transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__V_59_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__PredSym0_21);
    }
#line 581 "par_loop_control.m"
    {
#line 581 "par_loop_control.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__par_loop_control__OldProcId_17, &transform_hlds__par_loop_control__OldProcInt_22);
    }
#line 582 "par_loop_control.m"
    {
#line 582 "par_loop_control.m"
      transform_hlds__par_loop_control__V_63_63 = mercury__string__int_to_string_1_f_0(transform_hlds__par_loop_control__OldProcInt_22);
    }
#line 582 "par_loop_control.m"
    {
#line 582 "par_loop_control.m"
      transform_hlds__par_loop_control__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__par_loop_control__V_63_63);
    }
#line 582 "par_loop_control.m"
    {
#line 582 "par_loop_control.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__par_loop_control__PredSym0_21, transform_hlds__par_loop_control__V_61_61, transform_hlds__par_loop_control__PredSym_14);
    }
#line 583 "par_loop_control.m"
    {
#line 583 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__Context_23);
    }
#line 584 "par_loop_control.m"
    {
#line 584 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__OldOrigin_24);
    }
#line 585 "par_loop_control.m"
    {
#line 585 "par_loop_control.m"
      transform_hlds__par_loop_control__Origin_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 585 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 1) = ((MR_Box) (transform_hlds__par_loop_control__OldOrigin_24));
#line 585 "par_loop_control.m"
      MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__Origin_25, 2) = ((MR_Box) (transform_hlds__par_loop_control__OldPredId_16));
#line 585 "par_loop_control.m"
    }
#line 588 "par_loop_control.m"
    {
#line 588 "par_loop_control.m"
      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65);
    }
#line 589 "par_loop_control.m"
    {
#line 589 "par_loop_control.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 12, transform_hlds__par_loop_control__STATE_VARIABLE_Markers_65_65, &transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67);
    }
#line 590 "par_loop_control.m"
    {
#line 590 "par_loop_control.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__par_loop_control__STATE_VARIABLE_Markers_67_67, &transform_hlds__par_loop_control__Markers_26);
    }
#line 593 "par_loop_control.m"
    {
#line 593 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__TypeVarSet_27);
    }
#line 594 "par_loop_control.m"
    {
#line 594 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ExistQVars_28);
    }
#line 595 "par_loop_control.m"
    {
#line 595 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ClassConstraints_29);
    }
#line 596 "par_loop_control.m"
    {
#line 596 "par_loop_control.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__par_loop_control__OldPredInfo_18, &transform_hlds__par_loop_control__ArgTypes0_30);
    }
#line 603 "par_loop_control.m"
    {
#line 603 "par_loop_control.m"
      transform_hlds__par_loop_control__V_71_71 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0);
    }
#line 10329 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeInfo_102_102 = (MR_Word) &transform_hlds__par_loop_control_scalar_common_1[0];
#line 10331 "transform_hlds.par_loop_control.c"
    transform_hlds__par_loop_control__TypeCtorInfo_103_103 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 603 "par_loop_control.m"
    {
#line 603 "par_loop_control.m"
      transform_hlds__par_loop_control__V_72_72 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_102_102, transform_hlds__par_loop_control__TypeCtorInfo_103_103);
    }
#line 601 "par_loop_control.m"
    {
#line 601 "par_loop_control.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__par_loop_control__ModuleName_19, *transform_hlds__par_loop_control__PredSym_14, transform_hlds__par_loop_control__PredOrFunc_20, transform_hlds__par_loop_control__Context_23, transform_hlds__par_loop_control__Origin_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__par_loop_control__Markers_26, transform_hlds__par_loop_control__ArgTypes0_30, transform_hlds__par_loop_control__TypeVarSet_27, transform_hlds__par_loop_control__ExistQVars_28, transform_hlds__par_loop_control__ClassConstraints_29, transform_hlds__par_loop_control__V_71_71, transform_hlds__par_loop_control__V_72_72, transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__ProcId_35, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73);
    }
#line 608 "par_loop_control.m"
    {
#line 608 "par_loop_control.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74);
    }
#line 609 "par_loop_control.m"
    {
#line 609 "par_loop_control.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__par_loop_control__PredId_37, transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_74_74, &transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75);
    }
#line 610 "par_loop_control.m"
    {
#line 610 "par_loop_control.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_PredTable_75_75, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 612 "par_loop_control.m"
    {
#line 612 "par_loop_control.m"
      MR_Word base;
#line 612 "par_loop_control.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "par_loop_control.m"
      *transform_hlds__par_loop_control__PredProcId_13 = base;
#line 612 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__PredId_37));
#line 612 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__par_loop_control__ProcId_35));
#line 612 "par_loop_control.m"
    }
#line 617 "par_loop_control.m"
    {
#line 617 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__ArgModes0_38);
    }
#line 618 "par_loop_control.m"
    {
#line 618 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__HeadVars0_39);
    }
#line 619 "par_loop_control.m"
    {
#line 619 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77);
    }
#line 620 "par_loop_control.m"
    {
#line 620 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78);
    }
#line 621 "par_loop_control.m"
    {
#line 621 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79);
    }
#line 623 "par_loop_control.m"
    {
#line 623 "par_loop_control.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "LC", &transform_hlds__par_loop_control__LCVar_40, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_77_77, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81);
    }
#line 624 "par_loop_control.m"
    {
#line 624 "par_loop_control.m"
      transform_hlds__par_loop_control__V_82_82 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    }
#line 624 "par_loop_control.m"
    {
#line 624 "par_loop_control.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__par_loop_control__LCVar_40, transform_hlds__par_loop_control__V_82_82, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83);
    }
#line 625 "par_loop_control.m"
    {
#line 625 "par_loop_control.m"
      transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__PreserveTailRecursion_41);
    }
#line 626 "par_loop_control.m"
    {
#line 626 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__WaitFreeSlotProc_42);
    }
#line 627 "par_loop_control.m"
    {
#line 627 "par_loop_control.m"
      transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, &transform_hlds__par_loop_control__JoinAndTerminateProc_43);
    }
#line 631 "par_loop_control.m"
    {
#line 631 "par_loop_control.m"
      transform_hlds__par_loop_control__V_84_84 = transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0();
    }
#line 632 "par_loop_control.m"
    {
#line 632 "par_loop_control.m"
      transform_hlds__par_loop_control__V_85_85 = transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0();
    }
#line 629 "par_loop_control.m"
    {
#line 629 "par_loop_control.m"
      transform_hlds__par_loop_control__Info_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 0) = ((MR_Box) (transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 1) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_40));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 2) = ((MR_Box) (transform_hlds__par_loop_control__OldPredProcId_10));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 3) = ((MR_Box) (*transform_hlds__par_loop_control__PredProcId_13));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 4) = ((MR_Box) (*transform_hlds__par_loop_control__PredSym_14));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 5) = ((MR_Box) (transform_hlds__par_loop_control__PreserveTailRecursion_41));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 6) = ((MR_Box) (transform_hlds__par_loop_control__WaitFreeSlotProc_42));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 7) = ((MR_Box) (transform_hlds__par_loop_control__V_84_84));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 8) = ((MR_Box) (transform_hlds__par_loop_control__JoinAndTerminateProc_43));
#line 629 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Info_44, 9) = ((MR_Box) (transform_hlds__par_loop_control__V_85_85));
#line 629 "par_loop_control.m"
    }
#line 633 "par_loop_control.m"
    {
#line 633 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(transform_hlds__par_loop_control__Info_44, transform_hlds__par_loop_control__RecParConjIds_9, transform_hlds__par_loop_control__ContainingGoalMap_12, transform_hlds__par_loop_control__STATE_VARIABLE_Body_79_79, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_81_81, &transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_83_83, &transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88);
    }
#line 638 "par_loop_control.m"
    {
#line 638 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(transform_hlds__par_loop_control__Info_44, transform_hlds__par_loop_control__RecParConjIds_9, &transform_hlds__par_loop_control__V_45_45, transform_hlds__par_loop_control__STATE_VARIABLE_Body_86_86, &transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89);
    }
#line 641 "par_loop_control.m"
    {
#line 641 "par_loop_control.m"
      transform_hlds__par_loop_control__HeadVars_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVars_46, 0) = ((MR_Box) (transform_hlds__par_loop_control__LCVar_40));
#line 641 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVars_46, 1) = ((MR_Box) (transform_hlds__par_loop_control__HeadVars0_39));
#line 641 "par_loop_control.m"
    }
#line 642 "par_loop_control.m"
    {
#line 642 "par_loop_control.m"
      transform_hlds__par_loop_control__V_90_90 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    }
#line 642 "par_loop_control.m"
    {
#line 642 "par_loop_control.m"
      transform_hlds__par_loop_control__ArgTypes_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgTypes_47, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_90_90));
#line 642 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgTypes_47, 1) = ((MR_Box) (transform_hlds__par_loop_control__ArgTypes0_30));
#line 642 "par_loop_control.m"
    }
#line 645 "par_loop_control.m"
    {
#line 645 "par_loop_control.m"
      transform_hlds__par_loop_control__ArgModes_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgModes_50, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[4]));
#line 645 "par_loop_control.m"
      MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__ArgModes_50, 1) = ((MR_Box) (transform_hlds__par_loop_control__ArgModes0_38));
#line 645 "par_loop_control.m"
    }
#line 647 "par_loop_control.m"
    {
#line 647 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__InstVarSet_51);
    }
#line 648 "par_loop_control.m"
    {
#line 648 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__RttiVarMaps_52);
    }
#line 649 "par_loop_control.m"
    {
#line 649 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__OldProcInfo_11, &transform_hlds__par_loop_control__Detism_53);
    }
#line 652 "par_loop_control.m"
    {
#line 652 "par_loop_control.m"
      transform_hlds__par_loop_control__V_97_97 = mercury__map__init_0_f_0(transform_hlds__par_loop_control__TypeInfo_102_102, transform_hlds__par_loop_control__TypeCtorInfo_103_103);
    }
#line 650 "par_loop_control.m"
    {
#line 650 "par_loop_control.m"
      hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__par_loop_control__Context_23, transform_hlds__par_loop_control__STATE_VARIABLE_VarSet_87_87, transform_hlds__par_loop_control__STATE_VARIABLE_VarTypes_88_88, transform_hlds__par_loop_control__HeadVars_46, transform_hlds__par_loop_control__InstVarSet_51, transform_hlds__par_loop_control__ArgModes_50, (MR_Integer) 2, transform_hlds__par_loop_control__Detism_53, transform_hlds__par_loop_control__STATE_VARIABLE_Body_89_89, transform_hlds__par_loop_control__RttiVarMaps_52, (MR_Integer) 1, (MR_Integer) 0, transform_hlds__par_loop_control__V_97_97, &transform_hlds__par_loop_control__ProcInfo_54);
    }
#line 655 "par_loop_control.m"
    {
#line 655 "par_loop_control.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__par_loop_control__TypeVarSet_27, transform_hlds__par_loop_control__ExistQVars_28, transform_hlds__par_loop_control__ArgTypes_47, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98);
    }
#line 656 "par_loop_control.m"
    {
#line 656 "par_loop_control.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__par_loop_control__ProcId_35, transform_hlds__par_loop_control__ProcInfo_54, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_98_98, &transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_99_99);
    }
#line 657 "par_loop_control.m"
    {
#line 657 "par_loop_control.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__par_loop_control__PredId_37, transform_hlds__par_loop_control__STATE_VARIABLE_PredInfo_99_99, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_76_76, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_56);
#line 657 "par_loop_control.m"
      return;
    }
#line 566 "par_loop_control.m"
  }
#line 561 "par_loop_control.m"
}

#line 509 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
#line 509 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 509 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Seen0_2,
#line 509 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__HeadVar__3_3)
#line 509 "par_loop_control.m"
{
#line 514 "par_loop_control.m"
  {
#line 514 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 514 "par_loop_control.m"
#line 514 "par_loop_control.m"
    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 514 "par_loop_control.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "par_loop_control.m"
      case (MR_Integer) 0:
#line 514 "par_loop_control.m"
#line 514 "par_loop_control.m"
        switch (MR_unmkbody(transform_hlds__par_loop_control__HeadVar__1_1)) {
#line 514 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "par_loop_control.m"
          case (MR_Integer) 0:
#line 518 "par_loop_control.m"
#line 518 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Seen0_2)) {
#line 518 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 518 "par_loop_control.m"
              case (MR_Integer) 0:
#line 518 "par_loop_control.m"
#line 518 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__Seen0_2)) {
#line 518 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 518 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 517 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "par_loop_control.m"
                    break;
#line 518 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 518 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 522 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 518 "par_loop_control.m"
                    break;
#line 518 "par_loop_control.m"
                }
#line 518 "par_loop_control.m"
                break;
#line 518 "par_loop_control.m"
              case (MR_Integer) 1:
#line 525 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__Seen0_2;
#line 518 "par_loop_control.m"
                break;
#line 518 "par_loop_control.m"
            }
#line 514 "par_loop_control.m"
            break;
#line 514 "par_loop_control.m"
          case (MR_Integer) 1:
#line 532 "par_loop_control.m"
#line 532 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Seen0_2)) {
#line 532 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 532 "par_loop_control.m"
              case (MR_Integer) 0:
#line 532 "par_loop_control.m"
#line 532 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__Seen0_2)) {
#line 532 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 532 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 532 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 537 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 532 "par_loop_control.m"
                    break;
#line 532 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 531 "par_loop_control.m"
                    *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__Seen0_2;
#line 532 "par_loop_control.m"
                    break;
#line 532 "par_loop_control.m"
                }
#line 532 "par_loop_control.m"
                break;
#line 532 "par_loop_control.m"
              case (MR_Integer) 1:
#line 537 "par_loop_control.m"
                *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 532 "par_loop_control.m"
                break;
#line 532 "par_loop_control.m"
            }
#line 514 "par_loop_control.m"
            break;
#line 514 "par_loop_control.m"
          case (MR_Integer) 2:
#line 540 "par_loop_control.m"
            *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 514 "par_loop_control.m"
            break;
#line 514 "par_loop_control.m"
        }
#line 514 "par_loop_control.m"
        break;
#line 514 "par_loop_control.m"
      case (MR_Integer) 1:
#line 542 "par_loop_control.m"
        {
#line 542 "par_loop_control.m"
          MR_Word transform_hlds__par_loop_control__GoalIdsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));

#line 546 "par_loop_control.m"
#line 546 "par_loop_control.m"
          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__Seen0_2)) {
#line 546 "par_loop_control.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 546 "par_loop_control.m"
            case (MR_Integer) 0:
#line 546 "par_loop_control.m"
#line 546 "par_loop_control.m"
              switch (MR_unmkbody(transform_hlds__par_loop_control__Seen0_2)) {
#line 546 "par_loop_control.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 546 "par_loop_control.m"
                case (MR_Integer) 0:
#line 545 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__3_3 = transform_hlds__par_loop_control__HeadVar__1_1;
#line 546 "par_loop_control.m"
                  break;
#line 546 "par_loop_control.m"
                case (MR_Integer) 1:
#line 546 "par_loop_control.m"
                case (MR_Integer) 2:
#line 550 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 546 "par_loop_control.m"
                  break;
#line 546 "par_loop_control.m"
              }
#line 546 "par_loop_control.m"
              break;
#line 546 "par_loop_control.m"
            case (MR_Integer) 1:
#line 552 "par_loop_control.m"
              {
#line 552 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__GoalIdsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Seen0_2, (MR_Integer) 0)));
#line 552 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__GoalIds_15;

#line 555 "par_loop_control.m"
                {
#line 555 "par_loop_control.m"
                  transform_hlds__par_loop_control__GoalIds_15 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, transform_hlds__par_loop_control__GoalIdsA_11, transform_hlds__par_loop_control__GoalIdsB_14);
                }
#line 556 "par_loop_control.m"
                {
#line 556 "par_loop_control.m"
                  MR_Word base;
#line 556 "par_loop_control.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "par_loop_control.m"
                  *transform_hlds__par_loop_control__HeadVar__3_3 = base;
#line 556 "par_loop_control.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalIds_15));
#line 556 "par_loop_control.m"
                }
#line 552 "par_loop_control.m"
              }
#line 546 "par_loop_control.m"
              break;
#line 546 "par_loop_control.m"
          }
#line 542 "par_loop_control.m"
        }
#line 514 "par_loop_control.m"
        break;
#line 514 "par_loop_control.m"
    }
#line 514 "par_loop_control.m"
  }
#line 509 "par_loop_control.m"
}

#line 460 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
#line 460 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_4,
#line 460 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__2_2,
#line 460 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 460 "par_loop_control.m"
{
#line 464 "par_loop_control.m"
  {
#line 464 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 464 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 2)));
#line 463 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 0)));
#line 463 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__HeadVar__2_2, (MR_Integer) 1)));

#line 465 "par_loop_control.m"
    {
#line 465 "par_loop_control.m"
      transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Goal_7, transform_hlds__par_loop_control__SelfPredProcId_4, transform_hlds__par_loop_control__SeenUsableRecursion_8);
#line 465 "par_loop_control.m"
      return;
    }
#line 464 "par_loop_control.m"
  }
#line 460 "par_loop_control.m"
}

#line 438 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
#line 438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__HeadVar__1_1,
#line 438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_2,
#line 438 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3,
#line 438 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4)
#line 438 "par_loop_control.m"
{
#line 442 "par_loop_control.m"
  while (MR_TRUE)
#line 442 "par_loop_control.m"
    {
#line 442 "par_loop_control.m"
      /* tailcall optimized into a loop */
#line 442 "par_loop_control.m"
      {
#line 442 "par_loop_control.m"
        MR_bool transform_hlds__par_loop_control__succeeded;

#line 442 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "par_loop_control.m"
          *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3;
#line 442 "par_loop_control.m"
        else
#line 444 "par_loop_control.m"
          {
#line 444 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Conj_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Conjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__SeenUsableRecursionConj_13;

#line 445 "par_loop_control.m"
            {
#line 445 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Conj_9, transform_hlds__par_loop_control__SelfPredProcId_2, &transform_hlds__par_loop_control__SeenUsableRecursionConj_13);
            }
#line 10835 "transform_hlds.par_loop_control.c"
#line 10836 "transform_hlds.par_loop_control.c"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursionConj_13)) {
#line 10838 "transform_hlds.par_loop_control.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 10840 "transform_hlds.par_loop_control.c"
              case (MR_Integer) 0:
#line 10842 "transform_hlds.par_loop_control.c"
#line 10843 "transform_hlds.par_loop_control.c"
                switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursionConj_13)) {
#line 10845 "transform_hlds.par_loop_control.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 10847 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 0:
#line 456 "par_loop_control.m"
                    {
#line 456 "par_loop_control.m"
                      /* direct tailcall eliminated */
#line 456 "par_loop_control.m"
                      {
#line 456 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;

#line 456 "par_loop_control.m"
                        transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 456 "par_loop_control.m"
                      }
#line 456 "par_loop_control.m"
                      continue;
#line 456 "par_loop_control.m"
                    }
#line 10866 "transform_hlds.par_loop_control.c"
                    break;
#line 10868 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 1:
#line 10870 "transform_hlds.par_loop_control.c"
#line 10871 "transform_hlds.par_loop_control.c"
                    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10873 "transform_hlds.par_loop_control.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 10875 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 0:
#line 10877 "transform_hlds.par_loop_control.c"
#line 10878 "transform_hlds.par_loop_control.c"
                        switch (MR_unmkbody(transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10880 "transform_hlds.par_loop_control.c"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 10882 "transform_hlds.par_loop_control.c"
                          case (MR_Integer) 0:
#line 10884 "transform_hlds.par_loop_control.c"
                            {
#line 456 "par_loop_control.m"
                              /* direct tailcall eliminated */
#line 456 "par_loop_control.m"
                              {
#line 456 "par_loop_control.m"
                                MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;

#line 456 "par_loop_control.m"
                                transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 456 "par_loop_control.m"
                                transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 456 "par_loop_control.m"
                              }
#line 456 "par_loop_control.m"
                              continue;
#line 10901 "transform_hlds.par_loop_control.c"
                            }
#line 10903 "transform_hlds.par_loop_control.c"
                            break;
#line 10905 "transform_hlds.par_loop_control.c"
                          case (MR_Integer) 1:
#line 485 "par_loop_control.m"
                            *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10909 "transform_hlds.par_loop_control.c"
                            break;
#line 10911 "transform_hlds.par_loop_control.c"
                        }
#line 10913 "transform_hlds.par_loop_control.c"
                        break;
#line 10915 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 1:
#line 485 "par_loop_control.m"
                        *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10919 "transform_hlds.par_loop_control.c"
                        break;
#line 10921 "transform_hlds.par_loop_control.c"
                    }
#line 10923 "transform_hlds.par_loop_control.c"
                    break;
#line 10925 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 2:
#line 474 "par_loop_control.m"
                    *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10929 "transform_hlds.par_loop_control.c"
                    break;
#line 10931 "transform_hlds.par_loop_control.c"
                }
#line 10933 "transform_hlds.par_loop_control.c"
                break;
#line 10935 "transform_hlds.par_loop_control.c"
              case (MR_Integer) 1:
#line 10937 "transform_hlds.par_loop_control.c"
#line 10938 "transform_hlds.par_loop_control.c"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10940 "transform_hlds.par_loop_control.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 10942 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 0:
#line 10944 "transform_hlds.par_loop_control.c"
#line 10945 "transform_hlds.par_loop_control.c"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3)) {
#line 10947 "transform_hlds.par_loop_control.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 10949 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 0:
#line 456 "par_loop_control.m"
                        {
#line 456 "par_loop_control.m"
                          /* direct tailcall eliminated */
#line 456 "par_loop_control.m"
                          {
#line 456 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1 = transform_hlds__par_loop_control__Conjs_10;
#line 456 "par_loop_control.m"
                            MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0__tmp_copy_3 = transform_hlds__par_loop_control__SeenUsableRecursionConj_13;

#line 456 "par_loop_control.m"
                            transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0_3 = transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_0__tmp_copy_3;
#line 456 "par_loop_control.m"
                            transform_hlds__par_loop_control__HeadVar__1_1 = transform_hlds__par_loop_control__HeadVar__1__tmp_copy_1;
#line 456 "par_loop_control.m"
                          }
#line 456 "par_loop_control.m"
                          continue;
#line 456 "par_loop_control.m"
                        }
#line 10972 "transform_hlds.par_loop_control.c"
                        break;
#line 10974 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 1:
#line 497 "par_loop_control.m"
                        *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10978 "transform_hlds.par_loop_control.c"
                        break;
#line 10980 "transform_hlds.par_loop_control.c"
                    }
#line 10982 "transform_hlds.par_loop_control.c"
                    break;
#line 10984 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 1:
#line 497 "par_loop_control.m"
                    *transform_hlds__par_loop_control__STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 10988 "transform_hlds.par_loop_control.c"
                    break;
#line 10990 "transform_hlds.par_loop_control.c"
                }
#line 10992 "transform_hlds.par_loop_control.c"
                break;
#line 10994 "transform_hlds.par_loop_control.c"
            }
#line 444 "par_loop_control.m"
          }
#line 442 "par_loop_control.m"
      }
#line 442 "par_loop_control.m"
      break;
#line 442 "par_loop_control.m"
    }
#line 438 "par_loop_control.m"
}

#line 408 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
#line 408 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conj_5,
#line 408 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_6,
#line 408 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_7,
#line 408 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 408 "par_loop_control.m"
{
#line 412 "par_loop_control.m"
  while (MR_TRUE)
#line 412 "par_loop_control.m"
    {
#line 412 "par_loop_control.m"
      /* tailcall optimized into a loop */
#line 412 "par_loop_control.m"
      {
#line 412 "par_loop_control.m"
        MR_bool transform_hlds__par_loop_control__succeeded;
#line 412 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_9;

#line 413 "par_loop_control.m"
        {
#line 413 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Conj_5, transform_hlds__par_loop_control__SelfPredProcId_7, &transform_hlds__par_loop_control__SeenUsableRecursion0_9);
        }
#line 420 "par_loop_control.m"
        if ((transform_hlds__par_loop_control__Conjs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "par_loop_control.m"
          *transform_hlds__par_loop_control__SeenUsableRecursion_8 = transform_hlds__par_loop_control__SeenUsableRecursion0_9;
#line 420 "par_loop_control.m"
        else
#line 421 "par_loop_control.m"
          {
#line 421 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Head_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_6, (MR_Integer) 0)));
#line 421 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_6, (MR_Integer) 1)));

#line 430 "par_loop_control.m"
#line 430 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_9)) {
#line 430 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 430 "par_loop_control.m"
              case (MR_Integer) 0:
#line 430 "par_loop_control.m"
#line 430 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_9)) {
#line 430 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 430 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 433 "par_loop_control.m"
                    {
#line 433 "par_loop_control.m"
                      /* direct tailcall eliminated */
#line 433 "par_loop_control.m"
                      {
#line 433 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conj__tmp_copy_5 = transform_hlds__par_loop_control__Head_10;
#line 433 "par_loop_control.m"
                        MR_Word transform_hlds__par_loop_control__Conjs__tmp_copy_6 = transform_hlds__par_loop_control__Tail_11;

#line 433 "par_loop_control.m"
                        transform_hlds__par_loop_control__Conjs_6 = transform_hlds__par_loop_control__Conjs__tmp_copy_6;
#line 433 "par_loop_control.m"
                        transform_hlds__par_loop_control__Conj_5 = transform_hlds__par_loop_control__Conj__tmp_copy_5;
#line 433 "par_loop_control.m"
                      }
#line 433 "par_loop_control.m"
                      continue;
#line 433 "par_loop_control.m"
                    }
#line 430 "par_loop_control.m"
                    break;
#line 430 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 430 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 429 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 430 "par_loop_control.m"
                    break;
#line 430 "par_loop_control.m"
                }
#line 430 "par_loop_control.m"
                break;
#line 430 "par_loop_control.m"
              case (MR_Integer) 1:
#line 429 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 430 "par_loop_control.m"
                break;
#line 430 "par_loop_control.m"
            }
#line 421 "par_loop_control.m"
          }
#line 412 "par_loop_control.m"
      }
#line 412 "par_loop_control.m"
      break;
#line 412 "par_loop_control.m"
    }
#line 408 "par_loop_control.m"
}

#line 382 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(
#line 382 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Conjs_5,
#line 382 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_6,
#line 382 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__GoalId_7,
#line 382 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_8)
#line 382 "par_loop_control.m"
{
#line 388 "par_loop_control.m"
  {
#line 388 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;

#line 388 "par_loop_control.m"
    if ((transform_hlds__par_loop_control__Conjs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "par_loop_control.m"
      {
#line 389 "par_loop_control.m"
        {
#line 389 "par_loop_control.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.par_conj_get_loop_control_par_conjs\'/4", (MR_String) "Empty parallel conjunction");
#line 389 "par_loop_control.m"
          return;
        }
#line 388 "par_loop_control.m"
      }
#line 388 "par_loop_control.m"
    else
#line 391 "par_loop_control.m"
      {
#line 391 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Head_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_5, (MR_Integer) 0)));
#line 391 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__Conjs_5, (MR_Integer) 1)));
#line 391 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_11;

#line 392 "par_loop_control.m"
        {
#line 392 "par_loop_control.m"
          transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(transform_hlds__par_loop_control__Head_9, transform_hlds__par_loop_control__Tail_10, transform_hlds__par_loop_control__SelfPredProcId_6, &transform_hlds__par_loop_control__SeenUsableRecursion0_11);
        }
#line 397 "par_loop_control.m"
#line 397 "par_loop_control.m"
        switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_11)) {
#line 397 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 397 "par_loop_control.m"
          case (MR_Integer) 0:
#line 397 "par_loop_control.m"
#line 397 "par_loop_control.m"
            switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_11)) {
#line 397 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 397 "par_loop_control.m"
              case (MR_Integer) 0:
#line 396 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = transform_hlds__par_loop_control__SeenUsableRecursion0_11;
#line 397 "par_loop_control.m"
                break;
#line 397 "par_loop_control.m"
              case (MR_Integer) 1:
#line 398 "par_loop_control.m"
                {
#line 398 "par_loop_control.m"
                  MR_Word transform_hlds__par_loop_control__V_13_13;

#line 399 "par_loop_control.m"
                  {
#line 399 "par_loop_control.m"
                    transform_hlds__par_loop_control__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 0) = ((MR_Box) (transform_hlds__par_loop_control__GoalId_7));
#line 399 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "par_loop_control.m"
                  }
#line 399 "par_loop_control.m"
                  {
#line 399 "par_loop_control.m"
                    MR_Word base;
#line 399 "par_loop_control.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_8 = base;
#line 399 "par_loop_control.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__par_loop_control__V_13_13));
#line 399 "par_loop_control.m"
                  }
#line 398 "par_loop_control.m"
                }
#line 397 "par_loop_control.m"
                break;
#line 397 "par_loop_control.m"
              case (MR_Integer) 2:
#line 404 "par_loop_control.m"
                *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 397 "par_loop_control.m"
                break;
#line 397 "par_loop_control.m"
            }
#line 397 "par_loop_control.m"
            break;
#line 397 "par_loop_control.m"
          case (MR_Integer) 1:
#line 404 "par_loop_control.m"
            *transform_hlds__par_loop_control__SeenUsableRecursion_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 397 "par_loop_control.m"
            break;
#line 397 "par_loop_control.m"
        }
#line 391 "par_loop_control.m"
      }
#line 388 "par_loop_control.m"
  }
#line 382 "par_loop_control.m"
}

#line 506 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
#line 506 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 506 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 506 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 506 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3)
#line 506 "par_loop_control.m"
{
#line 506 "par_loop_control.m"
  {
#line 506 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 506 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_HeadVar__3_3;

#line 506 "par_loop_control.m"
    {
#line 506 "par_loop_control.m"
      transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv1_HeadVar__3_3);
    }
#line 506 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv1_HeadVar__3_3));
#line 506 "par_loop_control.m"
  }
#line 506 "par_loop_control.m"
}

#line 293 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
#line 293 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 293 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 293 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_2)
#line 293 "par_loop_control.m"
{
#line 293 "par_loop_control.m"
  {
#line 293 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 293 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8;

#line 293 "par_loop_control.m"
    {
#line 293 "par_loop_control.m"
      transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), &transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8);
    }
#line 293 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_2 = ((MR_Box) (transform_hlds__par_loop_control__conv0_SeenUsableRecursion_8));
#line 293 "par_loop_control.m"
  }
#line 293 "par_loop_control.m"
}

#line 242 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
#line 242 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__Goal_4,
#line 242 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__SelfPredProcId_5,
#line 242 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__SeenUsableRecursion_6)
#line 242 "par_loop_control.m"
{
#line 245 "par_loop_control.m"
  {
#line 245 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 245 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal_4, (MR_Integer) 0)));
#line 245 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__Goal_4, (MR_Integer) 1)));
#line 245 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_9;
#line 245 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__InstmapDelta_10;

#line 247 "par_loop_control.m"
    {
#line 247 "par_loop_control.m"
      transform_hlds__par_loop_control__Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
    }
#line 248 "par_loop_control.m"
    {
#line 248 "par_loop_control.m"
      transform_hlds__par_loop_control__InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
    }
#line 249 "par_loop_control.m"
    {
#line 249 "par_loop_control.m"
      transform_hlds__par_loop_control__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__par_loop_control__InstmapDelta_10);
    }
#line 371 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 11345 "transform_hlds.par_loop_control.c"
#line 11346 "transform_hlds.par_loop_control.c"
      switch (MR_tag((MR_Word) transform_hlds__par_loop_control__GoalExpr_7)) {
#line 11348 "transform_hlds.par_loop_control.c"
        default: /*NOTREACHED*/ MR_assert(0);
#line 11350 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 0:
#line 11352 "transform_hlds.par_loop_control.c"
          {
#line 11354 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__SubGoal_43 = (MR_Word) MR_body(((MR_Word) transform_hlds__par_loop_control__GoalExpr_7), (MR_Integer) 0);
#line 11356 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_81;

#line 303 "par_loop_control.m"
            {
#line 303 "par_loop_control.m"
              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__SubGoal_43, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursion0_81);
            }
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
            switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_81)) {
#line 351 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
              case (MR_Integer) 0:
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_81)) {
#line 351 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 351 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 350 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 351 "par_loop_control.m"
                    break;
#line 351 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                    switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                      case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 360 "par_loop_control.m"
                        break;
#line 360 "par_loop_control.m"
                      case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                        break;
#line 360 "par_loop_control.m"
                    }
#line 351 "par_loop_control.m"
                    break;
#line 351 "par_loop_control.m"
                }
#line 351 "par_loop_control.m"
                break;
#line 351 "par_loop_control.m"
              case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                  case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_81;
#line 360 "par_loop_control.m"
                    break;
#line 360 "par_loop_control.m"
                  case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                    break;
#line 360 "par_loop_control.m"
                }
#line 351 "par_loop_control.m"
                break;
#line 351 "par_loop_control.m"
            }
#line 11460 "transform_hlds.par_loop_control.c"
          }
#line 11462 "transform_hlds.par_loop_control.c"
          break;
#line 11464 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 1:
#line 252 "par_loop_control.m"
          *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11468 "transform_hlds.par_loop_control.c"
          break;
#line 11470 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 2:
#line 11472 "transform_hlds.par_loop_control.c"
          {
#line 11474 "transform_hlds.par_loop_control.c"
            MR_Word transform_hlds__par_loop_control__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)));
#line 11476 "transform_hlds.par_loop_control.c"
            MR_Integer transform_hlds__par_loop_control__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 254 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 254 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 254 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 4)));
#line 254 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 5)));
#line 255 "par_loop_control.m"
            MR_Word transform_hlds__par_loop_control__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Integer) 0)));
#line 255 "par_loop_control.m"
            MR_Integer transform_hlds__par_loop_control__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Integer) 1)));

#line 255 "par_loop_control.m"
            {
#line 255 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__par_loop_control__PredId_17, transform_hlds__par_loop_control__V_65_65);
            }
#line 255 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 255 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__ProcId_18 == transform_hlds__par_loop_control__V_66_66);
#line 11500 "transform_hlds.par_loop_control.c"
            if (transform_hlds__par_loop_control__succeeded)
#line 11502 "transform_hlds.par_loop_control.c"
              {
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                  case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 360 "par_loop_control.m"
                    break;
#line 360 "par_loop_control.m"
                  case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                    break;
#line 360 "par_loop_control.m"
                }
#line 11535 "transform_hlds.par_loop_control.c"
              }
#line 11537 "transform_hlds.par_loop_control.c"
            else
#line 259 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11541 "transform_hlds.par_loop_control.c"
          }
#line 11543 "transform_hlds.par_loop_control.c"
          break;
#line 11545 "transform_hlds.par_loop_control.c"
        case (MR_Integer) 3:
#line 11547 "transform_hlds.par_loop_control.c"
#line 11548 "transform_hlds.par_loop_control.c"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 0)))) {
#line 11550 "transform_hlds.par_loop_control.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 11552 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 0:
#line 266 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11556 "transform_hlds.par_loop_control.c"
              break;
#line 11558 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 1:
#line 269 "par_loop_control.m"
              *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11562 "transform_hlds.par_loop_control.c"
              break;
#line 11564 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 2:
#line 11566 "transform_hlds.par_loop_control.c"
              {
#line 11568 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 11570 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Conjs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 11572 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_77;

#line 276 "par_loop_control.m"
#line 276 "par_loop_control.m"
                switch (transform_hlds__par_loop_control__ConjType_35) {
#line 276 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 276 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 277 "par_loop_control.m"
                    {
#line 277 "par_loop_control.m"
                      MR_Word transform_hlds__par_loop_control__GoalId_37;

#line 278 "par_loop_control.m"
                      {
#line 278 "par_loop_control.m"
                        transform_hlds__par_loop_control__GoalId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__par_loop_control__GoalInfo_8);
                      }
#line 279 "par_loop_control.m"
                      {
#line 279 "par_loop_control.m"
                        transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_4_p_0(transform_hlds__par_loop_control__Conjs_36, transform_hlds__par_loop_control__SelfPredProcId_5, transform_hlds__par_loop_control__GoalId_37, &transform_hlds__par_loop_control__SeenUsableRecursion0_77);
                      }
#line 277 "par_loop_control.m"
                    }
#line 276 "par_loop_control.m"
                    break;
#line 276 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 273 "par_loop_control.m"
                    {
#line 274 "par_loop_control.m"
                      {
#line 274 "par_loop_control.m"
                        transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(transform_hlds__par_loop_control__Conjs_36, transform_hlds__par_loop_control__SelfPredProcId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__par_loop_control__SeenUsableRecursion0_77);
                      }
#line 273 "par_loop_control.m"
                    }
#line 276 "par_loop_control.m"
                    break;
#line 276 "par_loop_control.m"
                }
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_77)) {
#line 351 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_77)) {
#line 351 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 351 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 350 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 351 "par_loop_control.m"
                        break;
#line 351 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                        switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                          case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 360 "par_loop_control.m"
                            break;
#line 360 "par_loop_control.m"
                          case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                            break;
#line 360 "par_loop_control.m"
                        }
#line 351 "par_loop_control.m"
                        break;
#line 351 "par_loop_control.m"
                    }
#line 351 "par_loop_control.m"
                    break;
#line 351 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                    switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                      case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_77;
#line 360 "par_loop_control.m"
                        break;
#line 360 "par_loop_control.m"
                      case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                        break;
#line 360 "par_loop_control.m"
                    }
#line 351 "par_loop_control.m"
                    break;
#line 351 "par_loop_control.m"
                }
#line 11712 "transform_hlds.par_loop_control.c"
              }
#line 11714 "transform_hlds.par_loop_control.c"
              break;
#line 11716 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 3:
#line 11718 "transform_hlds.par_loop_control.c"
              {
#line 286 "par_loop_control.m"
                {
#line 286 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__par_loop_control__Goal_4, transform_hlds__par_loop_control__SelfPredProcId_5);
                }
#line 11725 "transform_hlds.par_loop_control.c"
                if (transform_hlds__par_loop_control__succeeded)
#line 287 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 11729 "transform_hlds.par_loop_control.c"
                else
#line 289 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11733 "transform_hlds.par_loop_control.c"
              }
#line 11735 "transform_hlds.par_loop_control.c"
              break;
#line 11737 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 4:
#line 11739 "transform_hlds.par_loop_control.c"
              {
#line 11741 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 11743 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursionCases_42;
#line 11745 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__V_58_58;
#line 292 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));
#line 292 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));

#line 293 "par_loop_control.m"
                {
#line 293 "par_loop_control.m"
                  transform_hlds__par_loop_control__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 293 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[0]));
#line 293 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1));
#line 293 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 293 "par_loop_control.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_58_58, 3) = ((MR_Box) (transform_hlds__par_loop_control__SelfPredProcId_5));
#line 293 "par_loop_control.m"
                }
#line 293 "par_loop_control.m"
                {
#line 293 "par_loop_control.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0, transform_hlds__par_loop_control__V_58_58, transform_hlds__par_loop_control__Cases_41, &transform_hlds__par_loop_control__SeenUsableRecursionCases_42);
                }
#line 11771 "transform_hlds.par_loop_control.c"
                if ((transform_hlds__par_loop_control__SeenUsableRecursionCases_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "par_loop_control.m"
                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11775 "transform_hlds.par_loop_control.c"
                else
#line 11777 "transform_hlds.par_loop_control.c"
                  {
#line 11779 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_10_76 = (MR_Word) &transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0;
#line 11781 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__Seen_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__SeenUsableRecursionCases_42, (MR_Integer) 0)));
#line 11783 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__Seens_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__SeenUsableRecursionCases_42, (MR_Integer) 1)));
#line 11785 "transform_hlds.par_loop_control.c"
                    MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 506 "par_loop_control.m"
                    MR_Box transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88;

#line 506 "par_loop_control.m"
                    {
#line 506 "par_loop_control.m"
                      mercury__list__foldl_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_10_76, transform_hlds__par_loop_control__TypeCtorInfo_10_76, (MR_Word) &transform_hlds__par_loop_control_scalar_common_2[2], transform_hlds__par_loop_control__Seens_70, ((MR_Box) (transform_hlds__par_loop_control__Seen_69)), &transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88);
                    }
#line 506 "par_loop_control.m"
                    transform_hlds__par_loop_control__SeenUsableRecursion0_88 = ((MR_Word) transform_hlds__par_loop_control__conv2_SeenUsableRecursion0_88);
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                    switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_88)) {
#line 351 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                        switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_88)) {
#line 351 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 351 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 350 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 351 "par_loop_control.m"
                            break;
#line 351 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                            switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                              case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                              case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                                *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 360 "par_loop_control.m"
                                break;
#line 360 "par_loop_control.m"
                              case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                              case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                              case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                              case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                              case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                              case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                                *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                                break;
#line 360 "par_loop_control.m"
                            }
#line 351 "par_loop_control.m"
                            break;
#line 351 "par_loop_control.m"
                        }
#line 351 "par_loop_control.m"
                        break;
#line 351 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                        switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                          case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_88;
#line 360 "par_loop_control.m"
                            break;
#line 360 "par_loop_control.m"
                          case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                            break;
#line 360 "par_loop_control.m"
                        }
#line 351 "par_loop_control.m"
                        break;
#line 351 "par_loop_control.m"
                    }
#line 11893 "transform_hlds.par_loop_control.c"
                  }
#line 11895 "transform_hlds.par_loop_control.c"
              }
#line 11897 "transform_hlds.par_loop_control.c"
              break;
#line 11899 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 5:
#line 11901 "transform_hlds.par_loop_control.c"
              {
#line 11903 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SubGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 11905 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 310 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));

#line 311 "par_loop_control.m"
                {
#line 311 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__SubGoal_60, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursion0_83);
                }
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_83)) {
#line 351 "par_loop_control.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                  case (MR_Integer) 0:
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_83)) {
#line 351 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 351 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 350 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 351 "par_loop_control.m"
                        break;
#line 351 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                        switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                          case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 360 "par_loop_control.m"
                            break;
#line 360 "par_loop_control.m"
                          case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                          case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                            *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                            break;
#line 360 "par_loop_control.m"
                        }
#line 351 "par_loop_control.m"
                        break;
#line 351 "par_loop_control.m"
                    }
#line 351 "par_loop_control.m"
                    break;
#line 351 "par_loop_control.m"
                  case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                    switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                      case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_83;
#line 360 "par_loop_control.m"
                        break;
#line 360 "par_loop_control.m"
                      case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                      case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                        break;
#line 360 "par_loop_control.m"
                    }
#line 351 "par_loop_control.m"
                    break;
#line 351 "par_loop_control.m"
                }
#line 12011 "transform_hlds.par_loop_control.c"
              }
#line 12013 "transform_hlds.par_loop_control.c"
              break;
#line 12015 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 6:
#line 12017 "transform_hlds.par_loop_control.c"
              {
#line 12019 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 2)));
#line 12021 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 3)));
#line 12023 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 4)));
#line 12025 "transform_hlds.par_loop_control.c"
                MR_Word transform_hlds__par_loop_control__SeenUsableRecursionCond_49;
#line 316 "par_loop_control.m"
                MR_Word transform_hlds__par_loop_control__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__GoalExpr_7, (MR_Integer) 1)));

#line 317 "par_loop_control.m"
                {
#line 317 "par_loop_control.m"
                  transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Cond_46, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionCond_49);
                }
#line 12035 "transform_hlds.par_loop_control.c"
#line 12036 "transform_hlds.par_loop_control.c"
                switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursionCond_49)) {
#line 12038 "transform_hlds.par_loop_control.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 12040 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 0:
#line 12042 "transform_hlds.par_loop_control.c"
#line 12043 "transform_hlds.par_loop_control.c"
                    switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursionCond_49)) {
#line 12045 "transform_hlds.par_loop_control.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 12047 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 0:
#line 12049 "transform_hlds.par_loop_control.c"
                        {
#line 12051 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursionThen_50;
#line 12053 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursionElse_51;
#line 12055 "transform_hlds.par_loop_control.c"
                          MR_Word transform_hlds__par_loop_control__SeenUsableRecursion0_80;

#line 321 "par_loop_control.m"
                          {
#line 321 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Then_47, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionThen_50);
                          }
#line 323 "par_loop_control.m"
                          {
#line 323 "par_loop_control.m"
                            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Else_48, transform_hlds__par_loop_control__SelfPredProcId_5, &transform_hlds__par_loop_control__SeenUsableRecursionElse_51);
                          }
#line 325 "par_loop_control.m"
                          {
#line 325 "par_loop_control.m"
                            transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(transform_hlds__par_loop_control__SeenUsableRecursionThen_50, transform_hlds__par_loop_control__SeenUsableRecursionElse_51, &transform_hlds__par_loop_control__SeenUsableRecursion0_80);
                          }
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                          switch (MR_tag((MR_Word) transform_hlds__par_loop_control__SeenUsableRecursion0_80)) {
#line 351 "par_loop_control.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                            case (MR_Integer) 0:
#line 351 "par_loop_control.m"
#line 351 "par_loop_control.m"
                              switch (MR_unmkbody(transform_hlds__par_loop_control__SeenUsableRecursion0_80)) {
#line 351 "par_loop_control.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 351 "par_loop_control.m"
                                case (MR_Integer) 0:
#line 351 "par_loop_control.m"
                                case (MR_Integer) 2:
#line 350 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 351 "par_loop_control.m"
                                  break;
#line 351 "par_loop_control.m"
                                case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                                  switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 360 "par_loop_control.m"
                                      break;
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                                    case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                                      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                                      break;
#line 360 "par_loop_control.m"
                                  }
#line 351 "par_loop_control.m"
                                  break;
#line 351 "par_loop_control.m"
                              }
#line 351 "par_loop_control.m"
                              break;
#line 351 "par_loop_control.m"
                            case (MR_Integer) 1:
#line 360 "par_loop_control.m"
#line 360 "par_loop_control.m"
                              switch (transform_hlds__par_loop_control__Detism_9) {
#line 360 "par_loop_control.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 360 "par_loop_control.m"
                                case (MR_Integer) 4:
#line 360 "par_loop_control.m"
                                case (MR_Integer) 0:
#line 359 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = transform_hlds__par_loop_control__SeenUsableRecursion0_80;
#line 360 "par_loop_control.m"
                                  break;
#line 360 "par_loop_control.m"
                                case (MR_Integer) 5:
#line 360 "par_loop_control.m"
                                case (MR_Integer) 6:
#line 360 "par_loop_control.m"
                                case (MR_Integer) 7:
#line 360 "par_loop_control.m"
                                case (MR_Integer) 2:
#line 360 "par_loop_control.m"
                                case (MR_Integer) 3:
#line 360 "par_loop_control.m"
                                case (MR_Integer) 1:
#line 368 "par_loop_control.m"
                                  *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 360 "par_loop_control.m"
                                  break;
#line 360 "par_loop_control.m"
                              }
#line 351 "par_loop_control.m"
                              break;
#line 351 "par_loop_control.m"
                          }
#line 12169 "transform_hlds.par_loop_control.c"
                        }
#line 12171 "transform_hlds.par_loop_control.c"
                        break;
#line 12173 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 1:
#line 12175 "transform_hlds.par_loop_control.c"
                      case (MR_Integer) 2:
#line 337 "par_loop_control.m"
                        *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 12179 "transform_hlds.par_loop_control.c"
                        break;
#line 12181 "transform_hlds.par_loop_control.c"
                    }
#line 12183 "transform_hlds.par_loop_control.c"
                    break;
#line 12185 "transform_hlds.par_loop_control.c"
                  case (MR_Integer) 1:
#line 337 "par_loop_control.m"
                    *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 12189 "transform_hlds.par_loop_control.c"
                    break;
#line 12191 "transform_hlds.par_loop_control.c"
                }
#line 12193 "transform_hlds.par_loop_control.c"
              }
#line 12195 "transform_hlds.par_loop_control.c"
              break;
#line 12197 "transform_hlds.par_loop_control.c"
            case (MR_Integer) 7:
#line 12199 "transform_hlds.par_loop_control.c"
              {
#line 341 "par_loop_control.m"
                {
#line 341 "par_loop_control.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.par_loop_control", (MR_String) "predicate \140transform_hlds.par_loop_control.goal_get_loop_control_par_conjs\'/3", (MR_String) "shorthand");
#line 341 "par_loop_control.m"
                  return;
                }
#line 12208 "transform_hlds.par_loop_control.c"
              }
#line 12210 "transform_hlds.par_loop_control.c"
              break;
#line 12212 "transform_hlds.par_loop_control.c"
          }
#line 12214 "transform_hlds.par_loop_control.c"
          break;
#line 12216 "transform_hlds.par_loop_control.c"
      }
#line 371 "par_loop_control.m"
    else
#line 373 "par_loop_control.m"
      *transform_hlds__par_loop_control__SeenUsableRecursion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 245 "par_loop_control.m"
  }
#line 242 "par_loop_control.m"
}

#line 137 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__DepInfo_7,
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__PredProcId_8,
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19,
#line 137 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20,
#line 137 "par_loop_control.m"
  MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21,
#line 137 "par_loop_control.m"
  MR_Word * transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22)
#line 137 "par_loop_control.m"
{
#line 166 "par_loop_control.m"
  {
#line 166 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TypeCtorInfo_12_40;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__HasParallelConj_29;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__Detism_30;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepGraph_33;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__SelfKey_34;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepGraphWOSelfEdge_35;
#line 179 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_36;

#line 180 "par_loop_control.m"
    {
#line 180 "par_loop_control.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__HasParallelConj_29);
    }
#line 181 "par_loop_control.m"
    transform_hlds__par_loop_control__succeeded = (transform_hlds__par_loop_control__HasParallelConj_29 == (MR_Integer) 0);
#line 179 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 179 "par_loop_control.m"
      {
#line 182 "par_loop_control.m"
        {
#line 182 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__Detism_30);
        }
#line 187 "par_loop_control.m"
#line 187 "par_loop_control.m"
        switch (transform_hlds__par_loop_control__Detism_30) {
#line 187 "par_loop_control.m"
          default:
#line 187 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_FALSE;
#line 187 "par_loop_control.m"
            break;
#line 187 "par_loop_control.m"
          case (MR_Integer) 4:
#line 187 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 187 "par_loop_control.m"
            break;
#line 187 "par_loop_control.m"
          case (MR_Integer) 0:
#line 186 "par_loop_control.m"
            transform_hlds__par_loop_control__succeeded = MR_TRUE;
#line 187 "par_loop_control.m"
            break;
#line 187 "par_loop_control.m"
        }
#line 179 "par_loop_control.m"
        if (transform_hlds__par_loop_control__succeeded)
#line 179 "par_loop_control.m"
          {
#line 12306 "transform_hlds.par_loop_control.c"
            transform_hlds__par_loop_control__TypeCtorInfo_12_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 195 "par_loop_control.m"
            {
#line 195 "par_loop_control.m"
              hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepInfo_7, &transform_hlds__par_loop_control__DepGraph_33);
            }
#line 198 "par_loop_control.m"
            {
#line 198 "par_loop_control.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepGraph_33, ((MR_Box) (transform_hlds__par_loop_control__PredProcId_8)), &transform_hlds__par_loop_control__SelfKey_34);
            }
#line 199 "par_loop_control.m"
            {
#line 199 "par_loop_control.m"
              transform_hlds__par_loop_control__succeeded = mercury__digraph__is_edge_3_p_1(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepGraph_33, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__SelfKey_34);
            }
#line 179 "par_loop_control.m"
            if (transform_hlds__par_loop_control__succeeded)
#line 179 "par_loop_control.m"
              {
#line 205 "par_loop_control.m"
                {
#line 205 "par_loop_control.m"
                  mercury__digraph__delete_edge_4_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__DepGraph_33, &transform_hlds__par_loop_control__DepGraphWOSelfEdge_35);
                }
#line 206 "par_loop_control.m"
                {
#line 206 "par_loop_control.m"
                  mercury__digraph__tc_2_p_0(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__DepGraphWOSelfEdge_35, &transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_36);
                }
#line 207 "par_loop_control.m"
                {
#line 207 "par_loop_control.m"
                  transform_hlds__par_loop_control__succeeded = mercury__digraph__is_edge_3_p_1(transform_hlds__par_loop_control__TypeCtorInfo_12_40, transform_hlds__par_loop_control__TCDepGraphWOSelfEdge_36, transform_hlds__par_loop_control__SelfKey_34, transform_hlds__par_loop_control__SelfKey_34);
                }
#line 207 "par_loop_control.m"
                transform_hlds__par_loop_control__succeeded = !(transform_hlds__par_loop_control__succeeded);
#line 179 "par_loop_control.m"
              }
#line 179 "par_loop_control.m"
          }
#line 179 "par_loop_control.m"
      }
#line 166 "par_loop_control.m"
    if (transform_hlds__par_loop_control__succeeded)
#line 142 "par_loop_control.m"
      {
#line 142 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Body0_11;
#line 142 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__VarTypes_12;
#line 142 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__ContainingGoalMap_13;
#line 142 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__Body_14;
#line 142 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__RecursiveParConjIds_15;
#line 142 "par_loop_control.m"
        MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;

#line 142 "par_loop_control.m"
        {
#line 142 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__Body0_11);
        }
#line 145 "par_loop_control.m"
        {
#line 145 "par_loop_control.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__VarTypes_12);
        }
#line 146 "par_loop_control.m"
        {
#line 146 "par_loop_control.m"
          hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__par_loop_control__VarTypes_12, &transform_hlds__par_loop_control__ContainingGoalMap_13, transform_hlds__par_loop_control__Body0_11, &transform_hlds__par_loop_control__Body_14);
        }
#line 148 "par_loop_control.m"
        {
#line 148 "par_loop_control.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__par_loop_control__Body_14, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 149 "par_loop_control.m"
        {
#line 149 "par_loop_control.m"
          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(transform_hlds__par_loop_control__Body_14, transform_hlds__par_loop_control__PredProcId_8, &transform_hlds__par_loop_control__RecursiveParConjIds_15);
        }
#line 156 "par_loop_control.m"
#line 156 "par_loop_control.m"
        switch (MR_tag((MR_Word) transform_hlds__par_loop_control__RecursiveParConjIds_15)) {
#line 156 "par_loop_control.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 156 "par_loop_control.m"
          case (MR_Integer) 0:
#line 156 "par_loop_control.m"
#line 156 "par_loop_control.m"
            switch (MR_unmkbody(transform_hlds__par_loop_control__RecursiveParConjIds_15)) {
#line 156 "par_loop_control.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 156 "par_loop_control.m"
              case (MR_Integer) 0:
#line 152 "par_loop_control.m"
                {
#line 152 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 152 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 152 "par_loop_control.m"
                }
#line 156 "par_loop_control.m"
                break;
#line 156 "par_loop_control.m"
              case (MR_Integer) 1:
#line 153 "par_loop_control.m"
                {
#line 153 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 153 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 153 "par_loop_control.m"
                }
#line 156 "par_loop_control.m"
                break;
#line 156 "par_loop_control.m"
              case (MR_Integer) 2:
#line 154 "par_loop_control.m"
                {
#line 154 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23;
#line 154 "par_loop_control.m"
                  *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 154 "par_loop_control.m"
                }
#line 156 "par_loop_control.m"
                break;
#line 156 "par_loop_control.m"
            }
#line 156 "par_loop_control.m"
            break;
#line 156 "par_loop_control.m"
          case (MR_Integer) 1:
#line 157 "par_loop_control.m"
            {
#line 157 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__GoalIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__par_loop_control__RecursiveParConjIds_15, (MR_Integer) 0)));
#line 157 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__InnerPredProcId_17;
#line 157 "par_loop_control.m"
              MR_Word transform_hlds__par_loop_control__InnerPredName_18;

#line 160 "par_loop_control.m"
              {
#line 160 "par_loop_control.m"
                transform_hlds__par_loop_control__create_inner_proc_8_p_0(transform_hlds__par_loop_control__GoalIds_16, transform_hlds__par_loop_control__PredProcId_8, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__par_loop_control__ContainingGoalMap_13, &transform_hlds__par_loop_control__InnerPredProcId_17, &transform_hlds__par_loop_control__InnerPredName_18, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22);
              }
#line 163 "par_loop_control.m"
              {
#line 163 "par_loop_control.m"
                transform_hlds__par_loop_control__update_outer_proc_6_p_0(transform_hlds__par_loop_control__PredProcId_8, transform_hlds__par_loop_control__InnerPredProcId_17, transform_hlds__par_loop_control__InnerPredName_18, *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20);
#line 163 "par_loop_control.m"
                return;
              }
#line 157 "par_loop_control.m"
            }
#line 156 "par_loop_control.m"
            break;
#line 156 "par_loop_control.m"
        }
#line 142 "par_loop_control.m"
      }
#line 166 "par_loop_control.m"
    else
#line 167 "par_loop_control.m"
      {
#line 167 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_21;
#line 167 "par_loop_control.m"
        *transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_20 = transform_hlds__par_loop_control__STATE_VARIABLE_ProcInfo_0_19;
#line 167 "par_loop_control.m"
      }
#line 166 "par_loop_control.m"
  }
#line 137 "par_loop_control.m"
}

#line 134 "par_loop_control.m"
static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__closure_arg,
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_1,
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_2,
#line 134 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_3,
#line 134 "par_loop_control.m"
  MR_Box transform_hlds__par_loop_control__wrapper_arg_4,
#line 134 "par_loop_control.m"
  MR_Box * transform_hlds__par_loop_control__wrapper_arg_5)
#line 134 "par_loop_control.m"
{
#line 134 "par_loop_control.m"
  {
#line 134 "par_loop_control.m"
    MR_Box transform_hlds__par_loop_control__closure = transform_hlds__par_loop_control__closure_arg;
#line 134 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20;
#line 134 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22;

#line 134 "par_loop_control.m"
    {
#line 134 "par_loop_control.m"
      transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_1), ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_2), &transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20, ((MR_Word) transform_hlds__par_loop_control__wrapper_arg_4), &transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22);
    }
#line 134 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_3 = ((MR_Box) (transform_hlds__par_loop_control__conv1_STATE_VARIABLE_ProcInfo_20));
#line 134 "par_loop_control.m"
    *transform_hlds__par_loop_control__wrapper_arg_5 = ((MR_Box) (transform_hlds__par_loop_control__conv0_STATE_VARIABLE_ModuleInfo_22));
#line 134 "par_loop_control.m"
  }
#line 134 "par_loop_control.m"
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
#line 131 "par_loop_control.m"
  {
#line 131 "par_loop_control.m"
    MR_bool transform_hlds__par_loop_control__succeeded;
#line 131 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__DepInfo_4;
#line 131 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7;
#line 131 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_8_8;
#line 131 "par_loop_control.m"
    MR_Word transform_hlds__par_loop_control__V_10_10;

#line 132 "par_loop_control.m"
    {
#line 132 "par_loop_control.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7, &transform_hlds__par_loop_control__DepInfo_4);
    }
#line 134 "par_loop_control.m"
    {
#line 134 "par_loop_control.m"
      transform_hlds__par_loop_control__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[0]));
#line 134 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 1) = ((MR_Box) (transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1));
#line 134 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "par_loop_control.m"
      MR_hl_field(MR_mktag(0), transform_hlds__par_loop_control__V_10_10, 3) = ((MR_Box) (transform_hlds__par_loop_control__DepInfo_4));
#line 134 "par_loop_control.m"
    }
#line 134 "par_loop_control.m"
    {
#line 134 "par_loop_control.m"
      transform_hlds__par_loop_control__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 134 "par_loop_control.m"
      MR_hl_field(MR_mktag(3), transform_hlds__par_loop_control__V_8_8, 1) = ((MR_Box) (transform_hlds__par_loop_control__V_10_10));
#line 134 "par_loop_control.m"
    }
#line 133 "par_loop_control.m"
    {
#line 133 "par_loop_control.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__par_loop_control__V_8_8, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_7_7, transform_hlds__par_loop_control__STATE_VARIABLE_ModuleInfo_6);
#line 133 "par_loop_control.m"
      return;
    }
#line 131 "par_loop_control.m"
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
