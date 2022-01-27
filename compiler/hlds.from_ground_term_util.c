/*
** Automatically generated from `from_ground_term_util.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module hlds.from_ground_term_util. */
/* :- implementation. */

/*
INIT mercury__hlds__from_ground_term_util__init
ENDINIT
*/

#include "hlds.from_ground_term_util.mih"


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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "hlds.from_ground_term_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 139 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 142 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0[2];

#line 145 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0;

#line 148 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[1];

#line 151 "hlds.from_ground_term_util.c"
static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[1];

#line 154 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[1];

#line 157 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[1];

#line 160 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct2 hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;

#line 166 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0;

#line 169 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1;

#line 172 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[2];

#line 175 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[2];

#line 178 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[2];

#line 181 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[3];

#line 187 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0;

#line 190 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[3];

#line 193 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1;

#line 196 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[1];

#line 199 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[1];

#line 202 "hlds.from_ground_term_util.c"
static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[2];

#line 205 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[2];

#line 208 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[2];

#line 211 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0;

#line 214 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1;

#line 217 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0[2];

#line 220 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0[2];

#line 223 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0[2];

#line 226 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0;

#line 229 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1;

#line 232 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[2];

#line 235 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[2];

#line 238 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0[2];

#line 241 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[2];

#line 244 "hlds.from_ground_term_util.c"
static const MR_ConstString hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[2];

#line 247 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0;

#line 250 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1;

#line 253 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[1];

#line 256 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[1];

#line 259 "hlds.from_ground_term_util.c"
static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[2];

#line 262 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[2];

#line 265 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[2];

#line 268 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001(
#line 271 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 273 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 276 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001(
#line 279 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 281 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 283 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 286 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001(
#line 289 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 291 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 294 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001(
#line 297 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 299 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 301 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 304 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001(
#line 307 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 309 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 312 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001(
#line 315 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 317 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 319 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 322 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001(
#line 325 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 327 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 330 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001(
#line 333 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 335 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 337 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 340 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0_10001(
#line 343 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 345 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 348 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0_10001(
#line 351 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 353 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 355 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 358 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001(
#line 361 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 363 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 366 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001(
#line 369 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 371 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 373 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 376 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001(
#line 379 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 381 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

#line 384 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001(
#line 387 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 389 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 391 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

#line 150 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(
#line 150 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3);

#line 150 "from_ground_term_util.m"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2);

#line 144 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0(
#line 144 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3);

#line 144 "from_ground_term_util.m"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0(
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2);

#line 348 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(
#line 348 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 348 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__GoalCord_4);

#line 297 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3,
#line 297 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_4,
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5,
#line 297 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_6);

#line 266 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2,
#line 266 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_3,
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4,
#line 266 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_Kept_5,
#line 266 "from_ground_term_util.m"
  MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6,
#line 266 "from_ground_term_util.m"
  MR_Integer * hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_7,
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8,
#line 266 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_9);

#line 219 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(
#line 219 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 219 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 219 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3,
#line 219 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_4);

#line 180 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1(
#line 180 "from_ground_term_util.m"
  MR_Box hlds__from_ground_term_util__closure_arg,
#line 180 "from_ground_term_util.m"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 180 "from_ground_term_util.m"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_2);


static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_1[0])),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_3[0])),
    ((MR_Box) (hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0)),
    ((MR_Box) (&hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
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



#line 574 "hlds.from_ground_term_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 582 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 590 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 596 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0 = {
  (MR_String) "fgt_build_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 611 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

#line 616 "hlds.from_ground_term_util.c"
static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0
  }
};

#line 625 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

#line 630 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[1] = {
  (MR_Integer) 0
};

#line 635 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_build_info",
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0
  },
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0
};

#line 656 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 664 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct2 hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0
  }
};

#line 673 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_build_info_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 694 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0 = {
  (MR_String) "fgt_invariants_kept",
  (MR_Integer) 0
};

#line 700 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1 = {
  (MR_String) "fgt_invariants_broken",
  (MR_Integer) 1
};

#line 706 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1
};

#line 712 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0
};

#line 718 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 724 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_invariants_status",
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0
  },
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0
};

#line 745 "hlds.from_ground_term_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 753 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 760 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0 = {
  (MR_String) "fgt_kept_goal",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0,
  NULL,
  NULL,
  NULL
};

#line 775 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 782 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1 = {
  (MR_String) "fgt_broken_goal",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1,
  NULL,
  NULL,
  NULL
};

#line 797 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

#line 802 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1
};

#line 807 "hlds.from_ground_term_util.c"
static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1
  }
};

#line 821 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

#line 827 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 833 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_marked_goal",
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0
  },
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0
};

#line 854 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0 = {
  (MR_String) "construct_bottom_up",
  (MR_Integer) 0
};

#line 860 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1 = {
  (MR_String) "deconstruct_top_down",
  (MR_Integer) 1
};

#line 866 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

#line 872 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

#line 878 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 884 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_goal_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____goal_order_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____goal_order_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "goal_order",
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0
  },
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0
};

#line 905 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0 = {
  (MR_String) "kept",
  (MR_Integer) 0
};

#line 911 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1 = {
  (MR_String) "broken",
  (MR_Integer) 1
};

#line 917 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1
};

#line 923 "hlds.from_ground_term_util.c"
static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0
};

#line 929 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 935 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "maybe_kept",
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0
  },
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0
};

#line 956 "hlds.from_ground_term_util.c"
static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0
};

#line 962 "hlds.from_ground_term_util.c"
static const MR_ConstString hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[2] = {
  (MR_String) "mkgi_size",
  (MR_String) "mkgi_old_goal_info"
};

#line 968 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0 = {
  (MR_String) "kept_old_gi",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0,
  NULL,
  NULL
};

#line 983 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1 = {
  (MR_String) "broken_no_gi",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 998 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1
};

#line 1003 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

#line 1008 "hlds.from_ground_term_util.c"
static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1
  }
};

#line 1022 "hlds.from_ground_term_util.c"
static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

#line 1028 "hlds.from_ground_term_util.c"
static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1034 "hlds.from_ground_term_util.c"
const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "maybe_kept_goal_info",
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0
  },
  {
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0
};

#line 1055 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001(
#line 1058 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1060 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1062 "hlds.from_ground_term_util.c"
{
#line 1064 "hlds.from_ground_term_util.c"
  {
#line 1066 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1069 "hlds.from_ground_term_util.c"
    {
#line 1071 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_build_info_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1074 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1076 "hlds.from_ground_term_util.c"
  }
#line 1078 "hlds.from_ground_term_util.c"
}

#line 1081 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001(
#line 1084 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1086 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1088 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1090 "hlds.from_ground_term_util.c"
{
#line 1092 "hlds.from_ground_term_util.c"
  {
#line 1094 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1097 "hlds.from_ground_term_util.c"
    {
#line 1099 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____fgt_build_info_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1102 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1104 "hlds.from_ground_term_util.c"
  }
#line 1106 "hlds.from_ground_term_util.c"
}

#line 1109 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001(
#line 1112 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1114 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1116 "hlds.from_ground_term_util.c"
{
#line 1118 "hlds.from_ground_term_util.c"
  {
#line 1120 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1123 "hlds.from_ground_term_util.c"
    {
#line 1125 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1128 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1130 "hlds.from_ground_term_util.c"
  }
#line 1132 "hlds.from_ground_term_util.c"
}

#line 1135 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001(
#line 1138 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1140 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1142 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1144 "hlds.from_ground_term_util.c"
{
#line 1146 "hlds.from_ground_term_util.c"
  {
#line 1148 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1151 "hlds.from_ground_term_util.c"
    {
#line 1153 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1156 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1158 "hlds.from_ground_term_util.c"
  }
#line 1160 "hlds.from_ground_term_util.c"
}

#line 1163 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001(
#line 1166 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1168 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1170 "hlds.from_ground_term_util.c"
{
#line 1172 "hlds.from_ground_term_util.c"
  {
#line 1174 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1177 "hlds.from_ground_term_util.c"
    {
#line 1179 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1182 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1184 "hlds.from_ground_term_util.c"
  }
#line 1186 "hlds.from_ground_term_util.c"
}

#line 1189 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001(
#line 1192 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1194 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1196 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1198 "hlds.from_ground_term_util.c"
{
#line 1200 "hlds.from_ground_term_util.c"
  {
#line 1202 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1205 "hlds.from_ground_term_util.c"
    {
#line 1207 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1210 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1212 "hlds.from_ground_term_util.c"
  }
#line 1214 "hlds.from_ground_term_util.c"
}

#line 1217 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001(
#line 1220 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1222 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1224 "hlds.from_ground_term_util.c"
{
#line 1226 "hlds.from_ground_term_util.c"
  {
#line 1228 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1231 "hlds.from_ground_term_util.c"
    {
#line 1233 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1236 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1238 "hlds.from_ground_term_util.c"
  }
#line 1240 "hlds.from_ground_term_util.c"
}

#line 1243 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001(
#line 1246 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1248 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1250 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1252 "hlds.from_ground_term_util.c"
{
#line 1254 "hlds.from_ground_term_util.c"
  {
#line 1256 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1259 "hlds.from_ground_term_util.c"
    {
#line 1261 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1264 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1266 "hlds.from_ground_term_util.c"
  }
#line 1268 "hlds.from_ground_term_util.c"
}

#line 1271 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0_10001(
#line 1274 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1276 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1278 "hlds.from_ground_term_util.c"
{
#line 1280 "hlds.from_ground_term_util.c"
  {
#line 1282 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1285 "hlds.from_ground_term_util.c"
    {
#line 1287 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____goal_order_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1290 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1292 "hlds.from_ground_term_util.c"
  }
#line 1294 "hlds.from_ground_term_util.c"
}

#line 1297 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0_10001(
#line 1300 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1302 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1304 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1306 "hlds.from_ground_term_util.c"
{
#line 1308 "hlds.from_ground_term_util.c"
  {
#line 1310 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1313 "hlds.from_ground_term_util.c"
    {
#line 1315 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____goal_order_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1318 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1320 "hlds.from_ground_term_util.c"
  }
#line 1322 "hlds.from_ground_term_util.c"
}

#line 1325 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001(
#line 1328 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1330 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1332 "hlds.from_ground_term_util.c"
{
#line 1334 "hlds.from_ground_term_util.c"
  {
#line 1336 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1339 "hlds.from_ground_term_util.c"
    {
#line 1341 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____maybe_kept_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1344 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1346 "hlds.from_ground_term_util.c"
  }
#line 1348 "hlds.from_ground_term_util.c"
}

#line 1351 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001(
#line 1354 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1356 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1358 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1360 "hlds.from_ground_term_util.c"
{
#line 1362 "hlds.from_ground_term_util.c"
  {
#line 1364 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1367 "hlds.from_ground_term_util.c"
    {
#line 1369 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____maybe_kept_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1372 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1374 "hlds.from_ground_term_util.c"
  }
#line 1376 "hlds.from_ground_term_util.c"
}

#line 1379 "hlds.from_ground_term_util.c"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001(
#line 1382 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 1384 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
#line 1386 "hlds.from_ground_term_util.c"
{
#line 1388 "hlds.from_ground_term_util.c"
  {
#line 1390 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 1393 "hlds.from_ground_term_util.c"
    {
#line 1395 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
#line 1398 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1400 "hlds.from_ground_term_util.c"
  }
#line 1402 "hlds.from_ground_term_util.c"
}

#line 1405 "hlds.from_ground_term_util.c"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001(
#line 1408 "hlds.from_ground_term_util.c"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
#line 1410 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
#line 1412 "hlds.from_ground_term_util.c"
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
#line 1414 "hlds.from_ground_term_util.c"
{
#line 1416 "hlds.from_ground_term_util.c"
  {
#line 1418 "hlds.from_ground_term_util.c"
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

#line 1421 "hlds.from_ground_term_util.c"
    {
#line 1423 "hlds.from_ground_term_util.c"
      hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
#line 1426 "hlds.from_ground_term_util.c"
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
#line 1428 "hlds.from_ground_term_util.c"
  }
#line 1430 "hlds.from_ground_term_util.c"
}

#line 150 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(
#line 150 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 150 "from_ground_term_util.m"
{
#line 150 "from_ground_term_util.m"
  {
#line 150 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 150 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastX_13 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
#line 150 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastY_14 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

#line 150 "from_ground_term_util.m"
    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_13 == hlds__from_ground_term_util__CastY_14);
#line 150 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 1457 "hlds.from_ground_term_util.c"
      *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "from_ground_term_util.m"
    else
#line 150 "from_ground_term_util.m"
      if ((hlds__from_ground_term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "from_ground_term_util.m"
        if ((hlds__from_ground_term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "from_ground_term_util.m"
          *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "from_ground_term_util.m"
        else
#line 1469 "hlds.from_ground_term_util.c"
          *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "from_ground_term_util.m"
      else
#line 150 "from_ground_term_util.m"
        {
#line 150 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
          MR_Integer hlds__from_ground_term_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "from_ground_term_util.m"
          if ((hlds__from_ground_term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1482 "hlds.from_ground_term_util.c"
            *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "from_ground_term_util.m"
          else
#line 150 "from_ground_term_util.m"
            {
#line 150 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_8_8;

#line 150 "from_ground_term_util.m"
              {
#line 150 "from_ground_term_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__from_ground_term_util__V_8_8, hlds__from_ground_term_util__V_18_18, hlds__from_ground_term_util__V_6_6);
              }
#line 1500 "hlds.from_ground_term_util.c"
              hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_8_8 == (MR_Integer) 0);
#line 150 "from_ground_term_util.m"
              hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 150 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
                *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_8_8;
#line 150 "from_ground_term_util.m"
              else
#line 150 "from_ground_term_util.m"
                {
#line 150 "from_ground_term_util.m"
                  hlds__hlds_goal____Compare____hlds_goal_info_0_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__V_17_17, hlds__from_ground_term_util__V_7_7);
#line 150 "from_ground_term_util.m"
                  return;
                }
#line 150 "from_ground_term_util.m"
            }
#line 150 "from_ground_term_util.m"
        }
#line 150 "from_ground_term_util.m"
  }
#line 150 "from_ground_term_util.m"
}

#line 150 "from_ground_term_util.m"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 150 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 150 "from_ground_term_util.m"
{
#line 150 "from_ground_term_util.m"
  {
#line 150 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 150 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastX_9 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
#line 150 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastY_10 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

#line 150 "from_ground_term_util.m"
    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_9 == hlds__from_ground_term_util__CastY_10);
#line 150 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
      hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 150 "from_ground_term_util.m"
    else
#line 150 "from_ground_term_util.m"
      if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "from_ground_term_util.m"
        {
#line 150 "from_ground_term_util.m"
          MR_Integer hlds__from_ground_term_util__CastX_7 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
#line 150 "from_ground_term_util.m"
          MR_Integer hlds__from_ground_term_util__CastY_8 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

#line 150 "from_ground_term_util.m"
          hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastY_8 == hlds__from_ground_term_util__CastX_7);
#line 150 "from_ground_term_util.m"
        }
#line 150 "from_ground_term_util.m"
      else
#line 150 "from_ground_term_util.m"
        {
#line 150 "from_ground_term_util.m"
          MR_Integer hlds__from_ground_term_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
          MR_Integer hlds__from_ground_term_util__V_5_5;
#line 150 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_6_6;

#line 150 "from_ground_term_util.m"
          hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
          if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
            {
#line 150 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1588 "hlds.from_ground_term_util.c"
              hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_3_3 == hlds__from_ground_term_util__V_5_5);
#line 150 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 1592 "hlds.from_ground_term_util.c"
                {
#line 1594 "hlds.from_ground_term_util.c"
                  return hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(hlds__from_ground_term_util__V_4_4, hlds__from_ground_term_util__V_6_6);
                }
#line 150 "from_ground_term_util.m"
            }
#line 150 "from_ground_term_util.m"
        }
#line 150 "from_ground_term_util.m"
    return hlds__from_ground_term_util__succeeded;
#line 150 "from_ground_term_util.m"
  }
#line 150 "from_ground_term_util.m"
}

#line 144 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0(
#line 144 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 144 "from_ground_term_util.m"
{
#line 144 "from_ground_term_util.m"
  {
#line 144 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 144 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar1_4 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
#line 144 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar2_5 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

#line 144 "from_ground_term_util.m"
    {
#line 144 "from_ground_term_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__Cast_HeadVar1_4, hlds__from_ground_term_util__Cast_HeadVar2_5);
#line 144 "from_ground_term_util.m"
      return;
    }
#line 144 "from_ground_term_util.m"
  }
#line 144 "from_ground_term_util.m"
}

#line 144 "from_ground_term_util.m"
static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0(
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
#line 144 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 144 "from_ground_term_util.m"
{
#line 1649 "hlds.from_ground_term_util.c"
  {
#line 1651 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__HeadVar__2_1 == hlds__from_ground_term_util__HeadVar__2_2);

#line 1654 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1656 "hlds.from_ground_term_util.c"
  }
#line 144 "from_ground_term_util.m"
}

#line 91 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0(
#line 91 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 91 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 91 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 91 "from_ground_term_util.m"
{
#line 91 "from_ground_term_util.m"
  {
#line 91 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 91 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar1_4 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
#line 91 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar2_5 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

#line 91 "from_ground_term_util.m"
    {
#line 91 "from_ground_term_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__Cast_HeadVar1_4, hlds__from_ground_term_util__Cast_HeadVar2_5);
#line 91 "from_ground_term_util.m"
      return;
    }
#line 91 "from_ground_term_util.m"
  }
#line 91 "from_ground_term_util.m"
}

#line 91 "from_ground_term_util.m"
MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0(
#line 91 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
#line 91 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 91 "from_ground_term_util.m"
{
#line 1702 "hlds.from_ground_term_util.c"
  {
#line 1704 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__HeadVar__2_1 == hlds__from_ground_term_util__HeadVar__2_2);

#line 1707 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 1709 "hlds.from_ground_term_util.c"
  }
#line 91 "from_ground_term_util.m"
}

#line 53 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0(
#line 53 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 53 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 53 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 53 "from_ground_term_util.m"
{
#line 53 "from_ground_term_util.m"
  {
#line 53 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 53 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastX_32 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
#line 53 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastY_33 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

#line 53 "from_ground_term_util.m"
    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_32 == hlds__from_ground_term_util__CastY_33);
#line 53 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 1738 "hlds.from_ground_term_util.c"
      *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "from_ground_term_util.m"
    else
#line 53 "from_ground_term_util.m"
      if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 53 "from_ground_term_util.m"
        {
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 53 "from_ground_term_util.m"
          if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 53 "from_ground_term_util.m"
            {
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 2)));
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_30_30;

#line 53 "from_ground_term_util.m"
              {
#line 53 "from_ground_term_util.m"
                hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__from_ground_term_util__V_30_30, hlds__from_ground_term_util__V_42_42, hlds__from_ground_term_util__V_27_27);
              }
#line 1771 "hlds.from_ground_term_util.c"
              hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_30_30 == (MR_Integer) 0);
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 53 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_30_30;
#line 53 "from_ground_term_util.m"
              else
#line 53 "from_ground_term_util.m"
                {
#line 53 "from_ground_term_util.m"
                  MR_Word hlds__from_ground_term_util__V_31_31;

#line 53 "from_ground_term_util.m"
                  {
#line 53 "from_ground_term_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], &hlds__from_ground_term_util__V_31_31, ((MR_Box) (hlds__from_ground_term_util__V_41_41)), ((MR_Box) (hlds__from_ground_term_util__V_28_28)));
                  }
#line 1791 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_31_31 == (MR_Integer) 0);
#line 53 "from_ground_term_util.m"
                  hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 53 "from_ground_term_util.m"
                  if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                    *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_31_31;
#line 53 "from_ground_term_util.m"
                  else
#line 53 "from_ground_term_util.m"
                    {
#line 53 "from_ground_term_util.m"
                      {
#line 53 "from_ground_term_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[2], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__V_40_40)), ((MR_Box) (hlds__from_ground_term_util__V_29_29)));
#line 53 "from_ground_term_util.m"
                        return;
                      }
#line 53 "from_ground_term_util.m"
                    }
#line 53 "from_ground_term_util.m"
                }
#line 53 "from_ground_term_util.m"
            }
#line 53 "from_ground_term_util.m"
          else
#line 1818 "hlds.from_ground_term_util.c"
            *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 2;
#line 53 "from_ground_term_util.m"
        }
#line 53 "from_ground_term_util.m"
      else
#line 53 "from_ground_term_util.m"
        {
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 53 "from_ground_term_util.m"
          if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1835 "hlds.from_ground_term_util.c"
            *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "from_ground_term_util.m"
          else
#line 53 "from_ground_term_util.m"
            {
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 2)));
#line 53 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_10_10;

#line 53 "from_ground_term_util.m"
              {
#line 53 "from_ground_term_util.m"
                hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__from_ground_term_util__V_10_10, hlds__from_ground_term_util__V_45_45, hlds__from_ground_term_util__V_7_7);
              }
#line 1855 "hlds.from_ground_term_util.c"
              hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_10_10 == (MR_Integer) 0);
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 53 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_10_10;
#line 53 "from_ground_term_util.m"
              else
#line 53 "from_ground_term_util.m"
                {
#line 53 "from_ground_term_util.m"
                  MR_Word hlds__from_ground_term_util__V_11_11;

#line 53 "from_ground_term_util.m"
                  {
#line 53 "from_ground_term_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], &hlds__from_ground_term_util__V_11_11, ((MR_Box) (hlds__from_ground_term_util__V_44_44)), ((MR_Box) (hlds__from_ground_term_util__V_8_8)));
                  }
#line 1875 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_11_11 == (MR_Integer) 0);
#line 53 "from_ground_term_util.m"
                  hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 53 "from_ground_term_util.m"
                  if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                    *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_11_11;
#line 53 "from_ground_term_util.m"
                  else
#line 53 "from_ground_term_util.m"
                    {
#line 53 "from_ground_term_util.m"
                      {
#line 53 "from_ground_term_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[2], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__V_43_43)), ((MR_Box) (hlds__from_ground_term_util__V_9_9)));
#line 53 "from_ground_term_util.m"
                        return;
                      }
#line 53 "from_ground_term_util.m"
                    }
#line 53 "from_ground_term_util.m"
                }
#line 53 "from_ground_term_util.m"
            }
#line 53 "from_ground_term_util.m"
        }
#line 53 "from_ground_term_util.m"
  }
#line 53 "from_ground_term_util.m"
}

#line 53 "from_ground_term_util.m"
MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0(
#line 53 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 53 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 53 "from_ground_term_util.m"
{
#line 53 "from_ground_term_util.m"
  {
#line 53 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 53 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastX_15 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
#line 53 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastY_16 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

#line 53 "from_ground_term_util.m"
    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_15 == hlds__from_ground_term_util__CastY_16);
#line 53 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
      hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 53 "from_ground_term_util.m"
    else
#line 53 "from_ground_term_util.m"
      if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 53 "from_ground_term_util.m"
        {
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__TypeInfo_18_18;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__TypeInfo_19_19;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 2)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_12_12;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_13_13;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_14_14;

#line 53 "from_ground_term_util.m"
          hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
          if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
            {
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1966 "hlds.from_ground_term_util.c"
              {
#line 1968 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__from_ground_term_util__V_9_9, hlds__from_ground_term_util__V_12_12);
              }
#line 53 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                {
#line 1975 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__TypeInfo_18_18 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[0];
#line 1977 "hlds.from_ground_term_util.c"
                  {
#line 1979 "hlds.from_ground_term_util.c"
                    hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_18_18, ((MR_Box) (hlds__from_ground_term_util__V_10_10)), ((MR_Box) (hlds__from_ground_term_util__V_13_13)));
                  }
#line 53 "from_ground_term_util.m"
                  if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                    {
#line 1986 "hlds.from_ground_term_util.c"
                      hlds__from_ground_term_util__TypeInfo_19_19 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[2];
#line 1988 "hlds.from_ground_term_util.c"
                      {
#line 1990 "hlds.from_ground_term_util.c"
                        return hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_19_19, ((MR_Box) (hlds__from_ground_term_util__V_11_11)), ((MR_Box) (hlds__from_ground_term_util__V_14_14)));
                      }
#line 53 "from_ground_term_util.m"
                    }
#line 53 "from_ground_term_util.m"
                }
#line 53 "from_ground_term_util.m"
            }
#line 53 "from_ground_term_util.m"
        }
#line 53 "from_ground_term_util.m"
      else
#line 53 "from_ground_term_util.m"
        {
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__TypeInfo_21_21;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__TypeInfo_22_22;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 2)));
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_6_6;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_7_7;
#line 53 "from_ground_term_util.m"
          MR_Word hlds__from_ground_term_util__V_8_8;

#line 53 "from_ground_term_util.m"
          hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
          if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
            {
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 53 "from_ground_term_util.m"
              hlds__from_ground_term_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 2034 "hlds.from_ground_term_util.c"
              {
#line 2036 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__from_ground_term_util__V_3_3, hlds__from_ground_term_util__V_6_6);
              }
#line 53 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                {
#line 2043 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__TypeInfo_21_21 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[0];
#line 2045 "hlds.from_ground_term_util.c"
                  {
#line 2047 "hlds.from_ground_term_util.c"
                    hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_21_21, ((MR_Box) (hlds__from_ground_term_util__V_4_4)), ((MR_Box) (hlds__from_ground_term_util__V_7_7)));
                  }
#line 53 "from_ground_term_util.m"
                  if (hlds__from_ground_term_util__succeeded)
#line 53 "from_ground_term_util.m"
                    {
#line 2054 "hlds.from_ground_term_util.c"
                      hlds__from_ground_term_util__TypeInfo_22_22 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[2];
#line 2056 "hlds.from_ground_term_util.c"
                      {
#line 2058 "hlds.from_ground_term_util.c"
                        return hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_22_22, ((MR_Box) (hlds__from_ground_term_util__V_5_5)), ((MR_Box) (hlds__from_ground_term_util__V_8_8)));
                      }
#line 53 "from_ground_term_util.m"
                    }
#line 53 "from_ground_term_util.m"
                }
#line 53 "from_ground_term_util.m"
            }
#line 53 "from_ground_term_util.m"
        }
#line 53 "from_ground_term_util.m"
    return hlds__from_ground_term_util__succeeded;
#line 53 "from_ground_term_util.m"
  }
#line 53 "from_ground_term_util.m"
}

#line 39 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0(
#line 39 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 39 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 39 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 39 "from_ground_term_util.m"
{
#line 39 "from_ground_term_util.m"
  {
#line 39 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 39 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar1_4 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
#line 39 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar2_5 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

#line 39 "from_ground_term_util.m"
    {
#line 39 "from_ground_term_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__Cast_HeadVar1_4, hlds__from_ground_term_util__Cast_HeadVar2_5);
#line 39 "from_ground_term_util.m"
      return;
    }
#line 39 "from_ground_term_util.m"
  }
#line 39 "from_ground_term_util.m"
}

#line 39 "from_ground_term_util.m"
MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0(
#line 39 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
#line 39 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 39 "from_ground_term_util.m"
{
#line 2117 "hlds.from_ground_term_util.c"
  {
#line 2119 "hlds.from_ground_term_util.c"
    MR_bool hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__HeadVar__2_1 == hlds__from_ground_term_util__HeadVar__2_2);

#line 2122 "hlds.from_ground_term_util.c"
    return hlds__from_ground_term_util__succeeded;
#line 2124 "hlds.from_ground_term_util.c"
  }
#line 39 "from_ground_term_util.m"
}

#line 89 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0(
#line 89 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 89 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 89 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 89 "from_ground_term_util.m"
{
#line 89 "from_ground_term_util.m"
  {
#line 89 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 89 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__Cast_HeadVar1_4 = hlds__from_ground_term_util__HeadVar__2_2;
#line 89 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__Cast_HeadVar2_5 = hlds__from_ground_term_util__HeadVar__3_3;

#line 89 "from_ground_term_util.m"
    {
#line 89 "from_ground_term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_2[0], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar1_4)), ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar2_5)));
#line 89 "from_ground_term_util.m"
      return;
    }
#line 89 "from_ground_term_util.m"
  }
#line 89 "from_ground_term_util.m"
}

#line 89 "from_ground_term_util.m"
MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0(
#line 89 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 89 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 89 "from_ground_term_util.m"
{
#line 89 "from_ground_term_util.m"
  {
#line 89 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 89 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__Cast_HeadVar1_3 = hlds__from_ground_term_util__HeadVar__1_1;
#line 89 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__Cast_HeadVar2_4 = hlds__from_ground_term_util__HeadVar__2_2;

#line 89 "from_ground_term_util.m"
    {
#line 89 "from_ground_term_util.m"
      return hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_2[0], ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar1_3)), ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar2_4)));
    }
#line 89 "from_ground_term_util.m"
    return hlds__from_ground_term_util__succeeded;
#line 89 "from_ground_term_util.m"
  }
#line 89 "from_ground_term_util.m"
}

#line 167 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0(
#line 167 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
#line 167 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 167 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
#line 167 "from_ground_term_util.m"
{
#line 167 "from_ground_term_util.m"
  {
#line 167 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 167 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastX_9 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
#line 167 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastY_10 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

#line 167 "from_ground_term_util.m"
    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_9 == hlds__from_ground_term_util__CastY_10);
#line 167 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 2215 "hlds.from_ground_term_util.c"
      *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "from_ground_term_util.m"
    else
#line 167 "from_ground_term_util.m"
      {
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_8_8;
#line 150 "from_ground_term_util.m"
        MR_Integer hlds__from_ground_term_util__CastX_22 = (MR_Integer) hlds__from_ground_term_util__V_4_4;
#line 150 "from_ground_term_util.m"
        MR_Integer hlds__from_ground_term_util__CastY_23 = (MR_Integer) hlds__from_ground_term_util__V_6_6;

#line 150 "from_ground_term_util.m"
        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_22 == hlds__from_ground_term_util__CastY_23);
#line 150 "from_ground_term_util.m"
        if (hlds__from_ground_term_util__succeeded)
#line 2240 "hlds.from_ground_term_util.c"
          {
#line 2242 "hlds.from_ground_term_util.c"
            hlds__from_ground_term_util__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 167 "from_ground_term_util.m"
            hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 2246 "hlds.from_ground_term_util.c"
            if (hlds__from_ground_term_util__succeeded)
#line 2248 "hlds.from_ground_term_util.c"
              {
#line 2250 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__V_8_8 = (MR_Integer) 0;
#line 2252 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 2254 "hlds.from_ground_term_util.c"
              }
#line 2256 "hlds.from_ground_term_util.c"
          }
#line 150 "from_ground_term_util.m"
        else
#line 150 "from_ground_term_util.m"
          if ((hlds__from_ground_term_util__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "from_ground_term_util.m"
            if ((hlds__from_ground_term_util__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "from_ground_term_util.m"
              {
#line 2266 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 167 "from_ground_term_util.m"
                hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 150 "from_ground_term_util.m"
                if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
                  {
#line 150 "from_ground_term_util.m"
                    hlds__from_ground_term_util__V_8_8 = (MR_Integer) 0;
#line 150 "from_ground_term_util.m"
                    hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 150 "from_ground_term_util.m"
                  }
#line 150 "from_ground_term_util.m"
              }
#line 150 "from_ground_term_util.m"
            else
#line 2284 "hlds.from_ground_term_util.c"
              {
#line 2286 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__V_8_8 = (MR_Integer) 2;
#line 2288 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 2290 "hlds.from_ground_term_util.c"
              }
#line 150 "from_ground_term_util.m"
          else
#line 150 "from_ground_term_util.m"
            {
#line 150 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_4_4, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_4_4, (MR_Integer) 0)));

#line 150 "from_ground_term_util.m"
              if ((hlds__from_ground_term_util__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2303 "hlds.from_ground_term_util.c"
                {
#line 2305 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__V_8_8 = (MR_Integer) 1;
#line 2307 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 2309 "hlds.from_ground_term_util.c"
                }
#line 150 "from_ground_term_util.m"
              else
#line 150 "from_ground_term_util.m"
                {
#line 150 "from_ground_term_util.m"
                  MR_Integer hlds__from_ground_term_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_6_6, (MR_Integer) 0)));
#line 150 "from_ground_term_util.m"
                  MR_Word hlds__from_ground_term_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_6_6, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
                  MR_Word hlds__from_ground_term_util__V_17_17;

#line 150 "from_ground_term_util.m"
                  {
#line 150 "from_ground_term_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__from_ground_term_util__V_17_17, hlds__from_ground_term_util__V_27_27, hlds__from_ground_term_util__V_15_15);
                  }
#line 2327 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_17_17 == (MR_Integer) 0);
#line 150 "from_ground_term_util.m"
                  hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 150 "from_ground_term_util.m"
                  if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
                    {
#line 150 "from_ground_term_util.m"
                      hlds__from_ground_term_util__V_8_8 = hlds__from_ground_term_util__V_17_17;
#line 2337 "hlds.from_ground_term_util.c"
                      hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_8_8 == (MR_Integer) 0);
#line 167 "from_ground_term_util.m"
                      hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 150 "from_ground_term_util.m"
                    }
#line 150 "from_ground_term_util.m"
                  else
#line 150 "from_ground_term_util.m"
                    {
#line 150 "from_ground_term_util.m"
                      {
#line 150 "from_ground_term_util.m"
                        hlds__hlds_goal____Compare____hlds_goal_info_0_0(&hlds__from_ground_term_util__V_8_8, hlds__from_ground_term_util__V_26_26, hlds__from_ground_term_util__V_16_16);
                      }
#line 2352 "hlds.from_ground_term_util.c"
                      hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_8_8 == (MR_Integer) 0);
#line 167 "from_ground_term_util.m"
                      hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
#line 150 "from_ground_term_util.m"
                    }
#line 150 "from_ground_term_util.m"
                }
#line 150 "from_ground_term_util.m"
            }
#line 167 "from_ground_term_util.m"
        if (hlds__from_ground_term_util__succeeded)
#line 167 "from_ground_term_util.m"
          *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_8_8;
#line 167 "from_ground_term_util.m"
        else
#line 167 "from_ground_term_util.m"
          {
#line 167 "from_ground_term_util.m"
            {
#line 167 "from_ground_term_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[1], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__V_5_5)), ((MR_Box) (hlds__from_ground_term_util__V_7_7)));
#line 167 "from_ground_term_util.m"
              return;
            }
#line 167 "from_ground_term_util.m"
          }
#line 167 "from_ground_term_util.m"
      }
#line 167 "from_ground_term_util.m"
  }
#line 167 "from_ground_term_util.m"
}

#line 167 "from_ground_term_util.m"
MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0(
#line 167 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 167 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
#line 167 "from_ground_term_util.m"
{
#line 167 "from_ground_term_util.m"
  {
#line 167 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 167 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastX_7 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
#line 167 "from_ground_term_util.m"
    MR_Integer hlds__from_ground_term_util__CastY_8 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

#line 167 "from_ground_term_util.m"
    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_7 == hlds__from_ground_term_util__CastY_8);
#line 167 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 167 "from_ground_term_util.m"
      hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 167 "from_ground_term_util.m"
    else
#line 167 "from_ground_term_util.m"
      {
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__TypeInfo_9_9;
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
        MR_Integer hlds__from_ground_term_util__CastX_16 = (MR_Integer) hlds__from_ground_term_util__V_3_3;
#line 150 "from_ground_term_util.m"
        MR_Integer hlds__from_ground_term_util__CastY_17 = (MR_Integer) hlds__from_ground_term_util__V_5_5;

#line 150 "from_ground_term_util.m"
        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_16 == hlds__from_ground_term_util__CastY_17);
#line 150 "from_ground_term_util.m"
        if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
          hlds__from_ground_term_util__succeeded = MR_TRUE;
#line 150 "from_ground_term_util.m"
        else
#line 150 "from_ground_term_util.m"
          if ((hlds__from_ground_term_util__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "from_ground_term_util.m"
            {
#line 150 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__CastX_14 = (MR_Integer) hlds__from_ground_term_util__V_3_3;
#line 150 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__CastY_15 = (MR_Integer) hlds__from_ground_term_util__V_5_5;

#line 150 "from_ground_term_util.m"
              hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastY_15 == hlds__from_ground_term_util__CastX_14);
#line 150 "from_ground_term_util.m"
            }
#line 150 "from_ground_term_util.m"
          else
#line 150 "from_ground_term_util.m"
            {
#line 150 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_3_3, (MR_Integer) 0)));
#line 150 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_3_3, (MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__V_12_12;
#line 150 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__V_13_13;

#line 150 "from_ground_term_util.m"
              hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 150 "from_ground_term_util.m"
              if (hlds__from_ground_term_util__succeeded)
#line 150 "from_ground_term_util.m"
                {
#line 150 "from_ground_term_util.m"
                  hlds__from_ground_term_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_5_5, (MR_Integer) 0)));
#line 150 "from_ground_term_util.m"
                  hlds__from_ground_term_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_5_5, (MR_Integer) 1)));
#line 2473 "hlds.from_ground_term_util.c"
                  hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_10_10 == hlds__from_ground_term_util__V_12_12);
#line 150 "from_ground_term_util.m"
                  if (hlds__from_ground_term_util__succeeded)
#line 2477 "hlds.from_ground_term_util.c"
                    {
#line 2479 "hlds.from_ground_term_util.c"
                      hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(hlds__from_ground_term_util__V_11_11, hlds__from_ground_term_util__V_13_13);
                    }
#line 150 "from_ground_term_util.m"
                }
#line 150 "from_ground_term_util.m"
            }
#line 167 "from_ground_term_util.m"
        if (hlds__from_ground_term_util__succeeded)
#line 167 "from_ground_term_util.m"
          {
#line 2490 "hlds.from_ground_term_util.c"
            hlds__from_ground_term_util__TypeInfo_9_9 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[1];
#line 2492 "hlds.from_ground_term_util.c"
            {
#line 2494 "hlds.from_ground_term_util.c"
              return hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_9_9, ((MR_Box) (hlds__from_ground_term_util__V_4_4)), ((MR_Box) (hlds__from_ground_term_util__V_6_6)));
            }
#line 167 "from_ground_term_util.m"
          }
#line 167 "from_ground_term_util.m"
      }
#line 167 "from_ground_term_util.m"
    return hlds__from_ground_term_util__succeeded;
#line 167 "from_ground_term_util.m"
  }
#line 167 "from_ground_term_util.m"
}

#line 348 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(
#line 348 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 348 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__GoalCord_4)
#line 348 "from_ground_term_util.m"
{
#line 351 "from_ground_term_util.m"
  {
#line 351 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 351 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 351 "from_ground_term_util.m"
    *hlds__from_ground_term_util__GoalCord_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 351 "from_ground_term_util.m"
  }
#line 348 "from_ground_term_util.m"
}

#line 297 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3,
#line 297 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_4,
#line 297 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5,
#line 297 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_6)
#line 297 "from_ground_term_util.m"
{
#line 301 "from_ground_term_util.m"
  while (MR_TRUE)
#line 301 "from_ground_term_util.m"
    {
#line 301 "from_ground_term_util.m"
      /* tailcall optimized into a loop */
#line 301 "from_ground_term_util.m"
      {
#line 301 "from_ground_term_util.m"
        MR_bool hlds__from_ground_term_util__succeeded;

#line 301 "from_ground_term_util.m"
        if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "from_ground_term_util.m"
          {
#line 301 "from_ground_term_util.m"
            *hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_6 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5;
#line 301 "from_ground_term_util.m"
            *hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_4 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3;
#line 301 "from_ground_term_util.m"
          }
#line 301 "from_ground_term_util.m"
        else
#line 303 "from_ground_term_util.m"
          {
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__BuildInfo_19;
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__VarKept_20;
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__VarGoalCord0_21;
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__VarGoalCord_34;
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;
#line 303 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_45_45;
#line 304 "from_ground_term_util.m"
            MR_Box hlds__from_ground_term_util__conv0_BuildInfo_19;

#line 304 "from_ground_term_util.m"
            {
#line 304 "from_ground_term_util.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0, ((MR_Box) (hlds__from_ground_term_util__Var_14)), &hlds__from_ground_term_util__conv0_BuildInfo_19, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39);
            }
#line 304 "from_ground_term_util.m"
            hlds__from_ground_term_util__BuildInfo_19 = ((MR_Word) hlds__from_ground_term_util__conv0_BuildInfo_19);
#line 305 "from_ground_term_util.m"
            hlds__from_ground_term_util__VarKept_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_19, (MR_Integer) 0)));
#line 305 "from_ground_term_util.m"
            hlds__from_ground_term_util__VarGoalCord0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_19, (MR_Integer) 1)));
#line 336 "from_ground_term_util.m"
            if ((hlds__from_ground_term_util__VarKept_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "from_ground_term_util.m"
              hlds__from_ground_term_util__VarGoalCord_34 = hlds__from_ground_term_util__VarGoalCord0_21;
#line 336 "from_ground_term_util.m"
            else
#line 307 "from_ground_term_util.m"
              {
#line 307 "from_ground_term_util.m"
                MR_Integer hlds__from_ground_term_util__Size0_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_20, (MR_Integer) 0)));
#line 307 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_20, (MR_Integer) 1)));

#line 308 "from_ground_term_util.m"
                {
#line 308 "from_ground_term_util.m"
                  hlds__from_ground_term_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__VarGoalCord0_21);
                }
#line 310 "from_ground_term_util.m"
                if (hlds__from_ground_term_util__succeeded)
#line 309 "from_ground_term_util.m"
                  {
#line 309 "from_ground_term_util.m"
                    {
#line 309 "from_ground_term_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.from_ground_term_util", (MR_String) "predicate \140hlds.from_ground_term_util.lookup_and_remove_arg_vars_insert_fgt\'/6", (MR_String) "VarGoalCord0 is empty");
#line 309 "from_ground_term_util.m"
                      return;
                    }
#line 309 "from_ground_term_util.m"
                  }
#line 310 "from_ground_term_util.m"
                else
#line 311 "from_ground_term_util.m"
                  {
#line 311 "from_ground_term_util.m"
                    MR_Word hlds__from_ground_term_util__MaybeThreshold_24;
#line 313 "from_ground_term_util.m"
                    MR_Integer hlds__from_ground_term_util__Threshold_25;

#line 311 "from_ground_term_util.m"
                    {
#line 311 "from_ground_term_util.m"
                      hlds__from_ground_term_util__MaybeThreshold_24 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
                    }
#line 313 "from_ground_term_util.m"
                    hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__MaybeThreshold_24)) == (MR_mktag((MR_Integer) 1)));
#line 313 "from_ground_term_util.m"
                    if (hlds__from_ground_term_util__succeeded)
#line 313 "from_ground_term_util.m"
                      {
#line 313 "from_ground_term_util.m"
                        hlds__from_ground_term_util__Threshold_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__MaybeThreshold_24, (MR_Integer) 0)));
#line 314 "from_ground_term_util.m"
                        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__Size0_22 >= hlds__from_ground_term_util__Threshold_25);
#line 313 "from_ground_term_util.m"
                      }
#line 332 "from_ground_term_util.m"
                    if (hlds__from_ground_term_util__succeeded)
#line 317 "from_ground_term_util.m"
                      {
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__TypeCtorInfo_52_52;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__GoalInfo_26;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__VarGoals0_27;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__ConjGoalExpr_28;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__ConjGoal_29;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__Kind_30;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__Reason_31;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__ScopeGoalExpr_32;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__ScopeGoal_33;
#line 317 "from_ground_term_util.m"
                        MR_Word hlds__from_ground_term_util__V_43_43;

#line 316 "from_ground_term_util.m"
                        {
#line 316 "from_ground_term_util.m"
                          hlds__from_ground_term_util__V_43_43 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__from_ground_term_util__Var_14);
                        }
#line 316 "from_ground_term_util.m"
                        {
#line 316 "from_ground_term_util.m"
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__from_ground_term_util__V_43_43, hlds__from_ground_term_util__GoalInfo0_23, &hlds__from_ground_term_util__GoalInfo_26);
                        }
#line 2695 "hlds.from_ground_term_util.c"
                        hlds__from_ground_term_util__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 318 "from_ground_term_util.m"
                        {
#line 318 "from_ground_term_util.m"
                          hlds__from_ground_term_util__VarGoals0_27 = mercury__cord__list_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_52_52, hlds__from_ground_term_util__VarGoalCord0_21);
                        }
#line 319 "from_ground_term_util.m"
                        {
#line 319 "from_ground_term_util.m"
                          hlds__from_ground_term_util__ConjGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 319 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ConjGoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 319 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ConjGoalExpr_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 319 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ConjGoalExpr_28, 2) = ((MR_Box) (hlds__from_ground_term_util__VarGoals0_27));
#line 319 "from_ground_term_util.m"
                        }
#line 320 "from_ground_term_util.m"
                        {
#line 320 "from_ground_term_util.m"
                          hlds__from_ground_term_util__ConjGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ConjGoal_29, 0) = ((MR_Box) (hlds__from_ground_term_util__ConjGoalExpr_28));
#line 320 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ConjGoal_29, 1) = ((MR_Box) (hlds__from_ground_term_util__GoalInfo_26));
#line 320 "from_ground_term_util.m"
                        }
#line 324 "from_ground_term_util.m"
                        if ((hlds__from_ground_term_util__HeadVar__2_2 == (MR_Integer) 0))
#line 326 "from_ground_term_util.m"
                          hlds__from_ground_term_util__Kind_30 = (MR_Integer) 1;
#line 324 "from_ground_term_util.m"
                        else
#line 323 "from_ground_term_util.m"
                          hlds__from_ground_term_util__Kind_30 = (MR_Integer) 0;
#line 328 "from_ground_term_util.m"
                        {
#line 328 "from_ground_term_util.m"
                          hlds__from_ground_term_util__Reason_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 328 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__Reason_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 328 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__Reason_31, 1) = ((MR_Box) (hlds__from_ground_term_util__Var_14));
#line 328 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__Reason_31, 2) = ((MR_Box) (hlds__from_ground_term_util__Kind_30));
#line 328 "from_ground_term_util.m"
                        }
#line 329 "from_ground_term_util.m"
                        {
#line 329 "from_ground_term_util.m"
                          hlds__from_ground_term_util__ScopeGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 329 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ScopeGoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 329 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ScopeGoalExpr_32, 1) = ((MR_Box) (hlds__from_ground_term_util__Reason_31));
#line 329 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ScopeGoalExpr_32, 2) = ((MR_Box) (hlds__from_ground_term_util__ConjGoal_29));
#line 329 "from_ground_term_util.m"
                        }
#line 330 "from_ground_term_util.m"
                        {
#line 330 "from_ground_term_util.m"
                          hlds__from_ground_term_util__ScopeGoal_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ScopeGoal_33, 0) = ((MR_Box) (hlds__from_ground_term_util__ScopeGoalExpr_32));
#line 330 "from_ground_term_util.m"
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ScopeGoal_33, 1) = ((MR_Box) (hlds__from_ground_term_util__GoalInfo_26));
#line 330 "from_ground_term_util.m"
                        }
#line 331 "from_ground_term_util.m"
                        {
#line 331 "from_ground_term_util.m"
                          hlds__from_ground_term_util__VarGoalCord_34 = mercury__cord__singleton_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_52_52, ((MR_Box) (hlds__from_ground_term_util__ScopeGoal_33)));
                        }
#line 317 "from_ground_term_util.m"
                      }
#line 332 "from_ground_term_util.m"
                    else
#line 333 "from_ground_term_util.m"
                      hlds__from_ground_term_util__VarGoalCord_34 = hlds__from_ground_term_util__VarGoalCord0_21;
#line 311 "from_ground_term_util.m"
                  }
#line 307 "from_ground_term_util.m"
              }
#line 340 "from_ground_term_util.m"
            {
#line 340 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_45_45 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3, hlds__from_ground_term_util__VarGoalCord_34);
            }
#line 341 "from_ground_term_util.m"
            /* direct tailcall eliminated */
#line 341 "from_ground_term_util.m"
            {
#line 341 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__HeadVar__1__tmp_copy_1 = hlds__from_ground_term_util__Vars_15;
#line 341 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_3 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_45_45;
#line 341 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_5 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;

#line 341 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_5;
#line 341 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_3;
#line 341 "from_ground_term_util.m"
              hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__HeadVar__1__tmp_copy_1;
#line 341 "from_ground_term_util.m"
            }
#line 341 "from_ground_term_util.m"
            continue;
#line 303 "from_ground_term_util.m"
          }
#line 301 "from_ground_term_util.m"
      }
#line 301 "from_ground_term_util.m"
      break;
#line 301 "from_ground_term_util.m"
    }
#line 297 "from_ground_term_util.m"
}

#line 266 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2,
#line 266 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_3,
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4,
#line 266 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_Kept_5,
#line 266 "from_ground_term_util.m"
  MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6,
#line 266 "from_ground_term_util.m"
  MR_Integer * hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_7,
#line 266 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8,
#line 266 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_9)
#line 266 "from_ground_term_util.m"
{
#line 271 "from_ground_term_util.m"
  while (MR_TRUE)
#line 271 "from_ground_term_util.m"
    {
#line 271 "from_ground_term_util.m"
      /* tailcall optimized into a loop */
#line 271 "from_ground_term_util.m"
      {
#line 271 "from_ground_term_util.m"
        MR_bool hlds__from_ground_term_util__succeeded;

#line 271 "from_ground_term_util.m"
        if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "from_ground_term_util.m"
          {
#line 271 "from_ground_term_util.m"
            *hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_9 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8;
#line 271 "from_ground_term_util.m"
            *hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_7 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6;
#line 271 "from_ground_term_util.m"
            *hlds__from_ground_term_util__STATE_VARIABLE_Kept_5 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4;
#line 271 "from_ground_term_util.m"
            *hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_3 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2;
#line 271 "from_ground_term_util.m"
          }
#line 271 "from_ground_term_util.m"
        else
#line 273 "from_ground_term_util.m"
          {
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__BuildInfo_28;
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__VarKept_29;
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__VarGoalCord_30;
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_41_41;
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42;
#line 273 "from_ground_term_util.m"
            MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43;
#line 273 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_44_44;
#line 274 "from_ground_term_util.m"
            MR_Box hlds__from_ground_term_util__conv0_BuildInfo_28;

#line 274 "from_ground_term_util.m"
            {
#line 274 "from_ground_term_util.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0, ((MR_Box) (hlds__from_ground_term_util__Var_22)), &hlds__from_ground_term_util__conv0_BuildInfo_28, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_41_41);
            }
#line 274 "from_ground_term_util.m"
            hlds__from_ground_term_util__BuildInfo_28 = ((MR_Word) hlds__from_ground_term_util__conv0_BuildInfo_28);
#line 275 "from_ground_term_util.m"
            hlds__from_ground_term_util__VarKept_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_28, (MR_Integer) 0)));
#line 275 "from_ground_term_util.m"
            hlds__from_ground_term_util__VarGoalCord_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_28, (MR_Integer) 1)));
#line 279 "from_ground_term_util.m"
            if ((hlds__from_ground_term_util__VarKept_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "from_ground_term_util.m"
              {
#line 283 "from_ground_term_util.m"
                hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42 = (MR_Integer) 1;
#line 280 "from_ground_term_util.m"
                hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6;
#line 280 "from_ground_term_util.m"
              }
#line 279 "from_ground_term_util.m"
            else
#line 277 "from_ground_term_util.m"
              {
#line 277 "from_ground_term_util.m"
                MR_Integer hlds__from_ground_term_util__Size_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_29, (MR_Integer) 0)));
#line 277 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_29, (MR_Integer) 1)));

#line 278 "from_ground_term_util.m"
                hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43 = (hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6 + hlds__from_ground_term_util__Size_31);
#line 277 "from_ground_term_util.m"
                hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4;
#line 277 "from_ground_term_util.m"
              }
#line 285 "from_ground_term_util.m"
            {
#line 285 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_44_44 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2, hlds__from_ground_term_util__VarGoalCord_30);
            }
#line 286 "from_ground_term_util.m"
            /* direct tailcall eliminated */
#line 286 "from_ground_term_util.m"
            {
#line 286 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__HeadVar__1__tmp_copy_1 = hlds__from_ground_term_util__Vars_23;
#line 286 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_2 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_44_44;
#line 286 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_0__tmp_copy_4 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42;
#line 286 "from_ground_term_util.m"
              MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0__tmp_copy_6 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43;
#line 286 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_8 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_41_41;

#line 286 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_8;
#line 286 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0__tmp_copy_6;
#line 286 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_0__tmp_copy_4;
#line 286 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_2;
#line 286 "from_ground_term_util.m"
              hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__HeadVar__1__tmp_copy_1;
#line 286 "from_ground_term_util.m"
            }
#line 286 "from_ground_term_util.m"
            continue;
#line 273 "from_ground_term_util.m"
          }
#line 271 "from_ground_term_util.m"
      }
#line 271 "from_ground_term_util.m"
      break;
#line 271 "from_ground_term_util.m"
    }
#line 266 "from_ground_term_util.m"
}

#line 219 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(
#line 219 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
#line 219 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
#line 219 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3,
#line 219 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_4)
#line 219 "from_ground_term_util.m"
{
#line 222 "from_ground_term_util.m"
  while (MR_TRUE)
#line 222 "from_ground_term_util.m"
    {
#line 222 "from_ground_term_util.m"
      /* tailcall optimized into a loop */
#line 222 "from_ground_term_util.m"
      {
#line 222 "from_ground_term_util.m"
        MR_bool hlds__from_ground_term_util__succeeded;

#line 222 "from_ground_term_util.m"
        if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "from_ground_term_util.m"
          *hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_4 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3;
#line 222 "from_ground_term_util.m"
        else
#line 224 "from_ground_term_util.m"
          {
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__RevMarkedGoal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__RevMarkedGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__Goal_13;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__Var_14;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__ArgsGoalCord_20;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__KeptGI_24;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__GoalCord_25;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__VarBuildInfo_26;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37;
#line 224 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;

#line 243 "from_ground_term_util.m"
            if (((MR_tag((MR_Word) hlds__from_ground_term_util__RevMarkedGoal_9)) == (MR_mktag((MR_Integer) 1))))
#line 244 "from_ground_term_util.m"
              {
#line 244 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__V_29_29;
#line 244 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__ArgVars_41;

#line 244 "from_ground_term_util.m"
                hlds__from_ground_term_util__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 0)));
#line 244 "from_ground_term_util.m"
                hlds__from_ground_term_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 1)));
#line 244 "from_ground_term_util.m"
                hlds__from_ground_term_util__ArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 2)));
#line 246 "from_ground_term_util.m"
                {
#line 246 "from_ground_term_util.m"
                  hlds__from_ground_term_util__V_29_29 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                }
#line 245 "from_ground_term_util.m"
                {
#line 245 "from_ground_term_util.m"
                  hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(hlds__from_ground_term_util__ArgVars_41, hlds__from_ground_term_util__HeadVar__2_2, hlds__from_ground_term_util__V_29_29, &hlds__from_ground_term_util__ArgsGoalCord_20, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37);
                }
#line 247 "from_ground_term_util.m"
                hlds__from_ground_term_util__KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "from_ground_term_util.m"
              }
#line 243 "from_ground_term_util.m"
            else
#line 226 "from_ground_term_util.m"
              {
#line 226 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__TypeCtorInfo_42_42;
#line 226 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__ArgVars_15;
#line 226 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__ArgsGoalCord0_17;
#line 226 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__Kept_18;
#line 226 "from_ground_term_util.m"
                MR_Integer hlds__from_ground_term_util__TotalArgSize_19;
#line 226 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__V_31_31;
#line 226 "from_ground_term_util.m"
                MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_34_34;

#line 226 "from_ground_term_util.m"
                hlds__from_ground_term_util__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 0)));
#line 226 "from_ground_term_util.m"
                hlds__from_ground_term_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 1)));
#line 226 "from_ground_term_util.m"
                hlds__from_ground_term_util__ArgVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 2)));
#line 3079 "hlds.from_ground_term_util.c"
                hlds__from_ground_term_util__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 228 "from_ground_term_util.m"
                {
#line 228 "from_ground_term_util.m"
                  hlds__from_ground_term_util__V_31_31 = mercury__cord__init_0_f_0(hlds__from_ground_term_util__TypeCtorInfo_42_42);
                }
#line 228 "from_ground_term_util.m"
                {
#line 228 "from_ground_term_util.m"
                  hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(hlds__from_ground_term_util__ArgVars_15, hlds__from_ground_term_util__V_31_31, &hlds__from_ground_term_util__ArgsGoalCord0_17, (MR_Integer) 0, &hlds__from_ground_term_util__Kept_18, (MR_Integer) 0, &hlds__from_ground_term_util__TotalArgSize_19, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_34_34);
                }
#line 236 "from_ground_term_util.m"
                if ((hlds__from_ground_term_util__Kept_18 == (MR_Integer) 1))
#line 237 "from_ground_term_util.m"
                  {
#line 237 "from_ground_term_util.m"
                    MR_Word hlds__from_ground_term_util__V_36_36;

#line 240 "from_ground_term_util.m"
                    {
#line 240 "from_ground_term_util.m"
                      hlds__from_ground_term_util__V_36_36 = mercury__cord__init_0_f_0(hlds__from_ground_term_util__TypeCtorInfo_42_42);
                    }
#line 239 "from_ground_term_util.m"
                    {
#line 239 "from_ground_term_util.m"
                      hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(hlds__from_ground_term_util__ArgVars_15, hlds__from_ground_term_util__HeadVar__2_2, hlds__from_ground_term_util__V_36_36, &hlds__from_ground_term_util__ArgsGoalCord_20, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37);
                    }
#line 241 "from_ground_term_util.m"
                    hlds__from_ground_term_util__KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "from_ground_term_util.m"
                  }
#line 236 "from_ground_term_util.m"
                else
#line 231 "from_ground_term_util.m"
                  {
#line 231 "from_ground_term_util.m"
                    MR_Word hlds__from_ground_term_util__OldGoalInfo_22;
#line 231 "from_ground_term_util.m"
                    MR_Integer hlds__from_ground_term_util__TotalSize_23;
#line 233 "from_ground_term_util.m"
                    MR_Word hlds__from_ground_term_util__V_21_21;

#line 232 "from_ground_term_util.m"
                    hlds__from_ground_term_util__ArgsGoalCord_20 = hlds__from_ground_term_util__ArgsGoalCord0_17;
#line 233 "from_ground_term_util.m"
                    hlds__from_ground_term_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__Goal_13, (MR_Integer) 0)));
#line 233 "from_ground_term_util.m"
                    hlds__from_ground_term_util__OldGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__Goal_13, (MR_Integer) 1)));
#line 234 "from_ground_term_util.m"
                    hlds__from_ground_term_util__TotalSize_23 = (hlds__from_ground_term_util__TotalArgSize_19 + (MR_Integer) 1);
#line 235 "from_ground_term_util.m"
                    {
#line 235 "from_ground_term_util.m"
                      hlds__from_ground_term_util__KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "from_ground_term_util.m"
                      MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__KeptGI_24, 0) = ((MR_Box) (hlds__from_ground_term_util__TotalSize_23));
#line 235 "from_ground_term_util.m"
                      MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__KeptGI_24, 1) = ((MR_Box) (hlds__from_ground_term_util__OldGoalInfo_22));
#line 235 "from_ground_term_util.m"
                    }
#line 231 "from_ground_term_util.m"
                    hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_34_34;
#line 231 "from_ground_term_util.m"
                  }
#line 226 "from_ground_term_util.m"
              }
#line 252 "from_ground_term_util.m"
            if ((hlds__from_ground_term_util__HeadVar__2_2 == (MR_Integer) 0))
#line 250 "from_ground_term_util.m"
              {
#line 251 "from_ground_term_util.m"
                {
#line 251 "from_ground_term_util.m"
                  hlds__from_ground_term_util__GoalCord_25 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__ArgsGoalCord_20, ((MR_Box) (hlds__from_ground_term_util__Goal_13)));
                }
#line 250 "from_ground_term_util.m"
              }
#line 252 "from_ground_term_util.m"
            else
#line 253 "from_ground_term_util.m"
              {
#line 254 "from_ground_term_util.m"
                {
#line 254 "from_ground_term_util.m"
                  hlds__from_ground_term_util__GoalCord_25 = mercury__cord__cons_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__from_ground_term_util__Goal_13)), hlds__from_ground_term_util__ArgsGoalCord_20);
                }
#line 253 "from_ground_term_util.m"
              }
#line 256 "from_ground_term_util.m"
            {
#line 256 "from_ground_term_util.m"
              hlds__from_ground_term_util__VarBuildInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__VarBuildInfo_26, 0) = ((MR_Box) (hlds__from_ground_term_util__KeptGI_24));
#line 256 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__VarBuildInfo_26, 1) = ((MR_Box) (hlds__from_ground_term_util__GoalCord_25));
#line 256 "from_ground_term_util.m"
            }
#line 257 "from_ground_term_util.m"
            {
#line 257 "from_ground_term_util.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0, ((MR_Box) (hlds__from_ground_term_util__Var_14)), ((MR_Box) (hlds__from_ground_term_util__VarBuildInfo_26)), hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39);
            }
#line 258 "from_ground_term_util.m"
            /* direct tailcall eliminated */
#line 258 "from_ground_term_util.m"
            {
#line 258 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__HeadVar__1__tmp_copy_1 = hlds__from_ground_term_util__RevMarkedGoals_10;
#line 258 "from_ground_term_util.m"
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_3 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;

#line 258 "from_ground_term_util.m"
              hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_3;
#line 258 "from_ground_term_util.m"
              hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__HeadVar__1__tmp_copy_1;
#line 258 "from_ground_term_util.m"
            }
#line 258 "from_ground_term_util.m"
            continue;
#line 224 "from_ground_term_util.m"
          }
#line 222 "from_ground_term_util.m"
      }
#line 222 "from_ground_term_util.m"
      break;
#line 222 "from_ground_term_util.m"
    }
#line 219 "from_ground_term_util.m"
}

#line 180 "from_ground_term_util.m"
static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1(
#line 180 "from_ground_term_util.m"
  MR_Box hlds__from_ground_term_util__closure_arg,
#line 180 "from_ground_term_util.m"
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
#line 180 "from_ground_term_util.m"
  MR_Box * hlds__from_ground_term_util__wrapper_arg_2)
#line 180 "from_ground_term_util.m"
{
#line 180 "from_ground_term_util.m"
  {
#line 180 "from_ground_term_util.m"
    MR_Box hlds__from_ground_term_util__closure = hlds__from_ground_term_util__closure_arg;
#line 180 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__conv0_GoalCord_4;

#line 180 "from_ground_term_util.m"
    {
#line 180 "from_ground_term_util.m"
      hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), &hlds__from_ground_term_util__conv0_GoalCord_4);
    }
#line 180 "from_ground_term_util.m"
    *hlds__from_ground_term_util__wrapper_arg_2 = ((MR_Box) (hlds__from_ground_term_util__conv0_GoalCord_4));
#line 180 "from_ground_term_util.m"
  }
#line 180 "from_ground_term_util.m"
}

#line 123 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(
#line 123 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__GoalInfo0_6,
#line 123 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__SubGoalInfo0_7,
#line 123 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__RevMarkedSubGoals_8,
#line 123 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__Order_9,
#line 123 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__SubGoal_10)
#line 123 "from_ground_term_util.m"
{
#line 176 "from_ground_term_util.m"
  {
#line 176 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__TypeInfo_34_34 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[0];
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__TypeCtorInfo_35_35 = (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__TypeCtorInfo_39_39;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__BuildInfoMap_11;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__BuildInfos_12;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__BuildGoalCords_13;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__BuildGoalCord_14;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__BuildGoals_15;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__SubGoal1_16;
#line 176 "from_ground_term_util.m"
    MR_Word hlds__from_ground_term_util__V_21_21;

#line 178 "from_ground_term_util.m"
    {
#line 178 "from_ground_term_util.m"
      hlds__from_ground_term_util__V_21_21 = mercury__map__init_0_f_0(hlds__from_ground_term_util__TypeInfo_34_34, hlds__from_ground_term_util__TypeCtorInfo_35_35);
    }
#line 177 "from_ground_term_util.m"
    {
#line 177 "from_ground_term_util.m"
      hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(hlds__from_ground_term_util__RevMarkedSubGoals_8, hlds__from_ground_term_util__Order_9, hlds__from_ground_term_util__V_21_21, &hlds__from_ground_term_util__BuildInfoMap_11);
    }
#line 179 "from_ground_term_util.m"
    {
#line 179 "from_ground_term_util.m"
      mercury__map__values_2_p_0(hlds__from_ground_term_util__TypeInfo_34_34, hlds__from_ground_term_util__TypeCtorInfo_35_35, hlds__from_ground_term_util__BuildInfoMap_11, &hlds__from_ground_term_util__BuildInfos_12);
    }
#line 180 "from_ground_term_util.m"
    {
#line 180 "from_ground_term_util.m"
      mercury__list__map_3_p_0(hlds__from_ground_term_util__TypeCtorInfo_35_35, (MR_Word) &hlds__from_ground_term_util_scalar_common_1[1], (MR_Word) &hlds__from_ground_term_util_scalar_common_2[1], hlds__from_ground_term_util__BuildInfos_12, &hlds__from_ground_term_util__BuildGoalCords_13);
    }
#line 3302 "hlds.from_ground_term_util.c"
    hlds__from_ground_term_util__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 181 "from_ground_term_util.m"
    {
#line 181 "from_ground_term_util.m"
      hlds__from_ground_term_util__BuildGoalCord_14 = mercury__cord__cord_list_to_cord_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_39_39, hlds__from_ground_term_util__BuildGoalCords_13);
    }
#line 182 "from_ground_term_util.m"
    {
#line 182 "from_ground_term_util.m"
      hlds__from_ground_term_util__BuildGoals_15 = mercury__cord__list_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_39_39, hlds__from_ground_term_util__BuildGoalCord_14);
    }
#line 186 "from_ground_term_util.m"
    if ((hlds__from_ground_term_util__BuildGoals_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "from_ground_term_util.m"
      {
#line 185 "from_ground_term_util.m"
        {
#line 185 "from_ground_term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.from_ground_term_util", (MR_String) "predicate \140hlds.from_ground_term_util.introduce_partial_fgt_scopes\'/5", (MR_String) "BuildGoals = []");
#line 185 "from_ground_term_util.m"
          return;
        }
#line 184 "from_ground_term_util.m"
      }
#line 186 "from_ground_term_util.m"
    else
#line 186 "from_ground_term_util.m"
      {
#line 186 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__BuildGoals_15, (MR_Integer) 1)));
#line 186 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__BuildGoals_15, (MR_Integer) 0)));

#line 186 "from_ground_term_util.m"
        if ((hlds__from_ground_term_util__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "from_ground_term_util.m"
          hlds__from_ground_term_util__SubGoal1_16 = hlds__from_ground_term_util__V_41_41;
#line 186 "from_ground_term_util.m"
        else
#line 189 "from_ground_term_util.m"
          {
#line 189 "from_ground_term_util.m"
            MR_Word hlds__from_ground_term_util__SubGoalExpr1_20;

#line 190 "from_ground_term_util.m"
            {
#line 190 "from_ground_term_util.m"
              hlds__from_ground_term_util__SubGoalExpr1_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 190 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__SubGoalExpr1_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 190 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__SubGoalExpr1_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 190 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__SubGoalExpr1_20, 2) = ((MR_Box) (hlds__from_ground_term_util__BuildGoals_15));
#line 190 "from_ground_term_util.m"
            }
#line 191 "from_ground_term_util.m"
            {
#line 191 "from_ground_term_util.m"
              hlds__from_ground_term_util__SubGoal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__SubGoal1_16, 0) = ((MR_Box) (hlds__from_ground_term_util__SubGoalExpr1_20));
#line 191 "from_ground_term_util.m"
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__SubGoal1_16, 1) = ((MR_Box) (hlds__from_ground_term_util__SubGoalInfo0_7));
#line 191 "from_ground_term_util.m"
            }
#line 189 "from_ground_term_util.m"
          }
#line 186 "from_ground_term_util.m"
      }
#line 193 "from_ground_term_util.m"
    {
#line 193 "from_ground_term_util.m"
      hlds__from_ground_term_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__from_ground_term_util__GoalInfo0_6, (MR_Integer) 1);
    }
#line 196 "from_ground_term_util.m"
    if (hlds__from_ground_term_util__succeeded)
#line 194 "from_ground_term_util.m"
      {
#line 194 "from_ground_term_util.m"
        {
#line 194 "from_ground_term_util.m"
          hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__from_ground_term_util_scalar_common_1[3]), (MR_Integer) 0, hlds__from_ground_term_util__SubGoal1_16, hlds__from_ground_term_util__SubGoal_10);
#line 194 "from_ground_term_util.m"
          return;
        }
#line 194 "from_ground_term_util.m"
      }
#line 196 "from_ground_term_util.m"
    else
#line 197 "from_ground_term_util.m"
      *hlds__from_ground_term_util__SubGoal_10 = hlds__from_ground_term_util__SubGoal1_16;
#line 176 "from_ground_term_util.m"
  }
#line 123 "from_ground_term_util.m"
}

#line 82 "from_ground_term_util.m"
void MR_CALL 
hlds__from_ground_term_util__project_kept_goal_2_p_0(
#line 82 "from_ground_term_util.m"
  MR_Word hlds__from_ground_term_util__MarkedGoal_3,
#line 82 "from_ground_term_util.m"
  MR_Word * hlds__from_ground_term_util__Goal_4)
#line 82 "from_ground_term_util.m"
{
#line 357 "from_ground_term_util.m"
  {
#line 357 "from_ground_term_util.m"
    MR_bool hlds__from_ground_term_util__succeeded;

#line 357 "from_ground_term_util.m"
    if (((MR_tag((MR_Word) hlds__from_ground_term_util__MarkedGoal_3)) == (MR_mktag((MR_Integer) 1))))
#line 359 "from_ground_term_util.m"
      {
#line 360 "from_ground_term_util.m"
        {
#line 360 "from_ground_term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.from_ground_term_util", (MR_String) "predicate \140hlds.from_ground_term_util.project_kept_goal\'/2", (MR_String) "broken goal");
#line 360 "from_ground_term_util.m"
          return;
        }
#line 359 "from_ground_term_util.m"
      }
#line 357 "from_ground_term_util.m"
    else
#line 357 "from_ground_term_util.m"
      {
#line 357 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_5_5;
#line 357 "from_ground_term_util.m"
        MR_Word hlds__from_ground_term_util__V_6_6;

#line 357 "from_ground_term_util.m"
        *hlds__from_ground_term_util__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__MarkedGoal_3, (MR_Integer) 0)));
#line 357 "from_ground_term_util.m"
        hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__MarkedGoal_3, (MR_Integer) 1)));
#line 357 "from_ground_term_util.m"
        hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__MarkedGoal_3, (MR_Integer) 2)));
#line 357 "from_ground_term_util.m"
      }
#line 357 "from_ground_term_util.m"
  }
#line 82 "from_ground_term_util.m"
}

void mercury__hlds__from_ground_term_util__init(void)
{
}

void mercury__hlds__from_ground_term_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_goal_order_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0);
}

void mercury__hlds__from_ground_term_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.from_ground_term_util. */
