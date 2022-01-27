/*
** Automatically generated from `state_var.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module hlds.make_hlds.state_var. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__state_var__init
ENDINIT
*/

#include "hlds.make_hlds.state_var.mih"


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
#include "counter.mih"
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
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 150 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

#line 165 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2];

#line 168 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0;

#line 171 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1];

#line 174 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1];

#line 177 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1];

#line 180 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1];

#line 183 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0;

#line 186 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[1];

#line 189 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1];

#line 192 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1];

#line 195 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0;

#line 198 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1;

#line 201 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2;

#line 204 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[3];

#line 207 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3];

#line 210 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3];

#line 213 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3];

#line 216 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3];

#line 219 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0;

#line 222 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1];

#line 225 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1];

#line 228 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1];

#line 231 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1];

#line 234 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3];

#line 237 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3];

#line 240 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0;

#line 243 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1;

#line 246 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1];

#line 249 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1];

#line 252 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2];

#line 255 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2];

#line 258 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2];

#line 261 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1];

#line 264 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

#line 267 "hlds.make_hlds.state_var.c"
static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0;

#line 270 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0;

#line 273 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1];

#line 276 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1;

#line 279 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3];

#line 282 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2;

#line 285 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1];

#line 288 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3;

#line 291 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2];

#line 294 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4;

#line 297 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1];

#line 300 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1];

#line 303 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1];

#line 306 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2];

#line 309 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4];

#line 312 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5];

#line 315 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5];

#line 318 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 321 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 324 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3];

#line 327 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3];

#line 330 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0;

#line 333 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1];

#line 336 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1];

#line 339 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1];

#line 342 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1];

#line 345 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
#line 348 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 350 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 353 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
#line 356 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 358 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 360 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 363 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
#line 366 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 368 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 371 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
#line 374 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 376 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 378 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 381 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
#line 384 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 386 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 389 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
#line 392 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 394 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 396 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 399 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
#line 402 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 404 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 407 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
#line 410 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 412 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 414 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 417 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
#line 420 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 422 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 425 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
#line 428 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 430 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 432 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 435 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
#line 438 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 440 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 443 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
#line 446 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 448 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 450 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 453 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
#line 456 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 458 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 461 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
#line 464 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 466 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 468 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 471 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
#line 474 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 476 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 479 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
#line 482 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 484 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 486 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 489 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
#line 492 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 494 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 497 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
#line 500 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 502 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 504 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 315 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1);

#line 315 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 1277 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_p_0(
#line 1277 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_76,
#line 1277 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_78);

#line 1058 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_p_0(
#line 1058 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23,
#line 1058 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterArmStatus_25);

#line 948 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_p_0(
#line 948 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12);

#line 1194 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_p_0(
#line 1194 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1194 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41);

#line 1192 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_p_0(
#line 1192 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1192 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40);

#line 1190 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_p_0(
#line 1190 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1190 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39);

#line 318 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
#line 318 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3);

#line 318 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2);

#line 373 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
#line 373 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3);

#line 373 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_1,
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2);

#line 315 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
#line 315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1);

#line 315 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void);

#line 2042 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_1_p_0(
#line 2042 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1);

#line 2029 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
#line 2029 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_5,
#line 2029 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_6,
#line 2029 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 2029 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12);

#line 2014 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
#line 2014 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_7,
#line 2014 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_8,
#line 2014 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenMissing_9,
#line 2014 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenNotMissing_10,
#line 2014 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15,
#line 2014 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16);

#line 1985 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1985 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15);

#line 1972 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1972 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15);

#line 1958 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0(
#line 1958 "state_var.m"
  MR_String hlds__make_hlds__state_var__DorC_7,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_8,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_9,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_10,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
#line 1958 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17);

#line 1869 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__DelayedRenamingToAdd_8,
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal0_9,
#line 1869 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_10,
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21,
#line 1869 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22,
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23,
#line 1869 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);

#line 1859 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1(
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1859 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1859 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1859 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6);

#line 1846 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(
#line 1846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal_7,
#line 1846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Conjuncts_8,
#line 1846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16,
#line 1846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17,
#line 1846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18,
#line 1846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19);

#line 1774 "state_var.m"
static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
#line 1774 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_4,
#line 1774 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Status_5);

#line 1310 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_24,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVar_25,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_26,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterCond_27,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_28,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterElse_29,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StatusAfterITE_30,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88);

#line 1277 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
#line 1277 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1250 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_1,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__QuantStateVars_2,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_4,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_5,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_6,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_7,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25);

#line 1137 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
#line 1137 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FromVar_4,
#line 1137 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ToVar_5,
#line 1137 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__CopyGoal_6);

#line 1058 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
#line 1058 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1044 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_2,
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_3,
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_4,
#line 1044 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__5_5,
#line 1044 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__6_6,
#line 1044 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__7_7);

#line 997 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__4_4,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12);

#line 971 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_2,
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 971 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 971 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6);

#line 955 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 955 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 955 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6);

#line 948 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
#line 948 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 941 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
#line 941 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 941 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2,
#line 941 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3);

#line 881 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
#line 881 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 881 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_2,
#line 881 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3,
#line 881 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4);

#line 841 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4,
#line 841 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6,
#line 841 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7);

#line 813 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
#line 813 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10,
#line 813 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Status_11);

#line 753 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialStatusMap_2,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalStatusMap_3,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4,
#line 753 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6,
#line 753 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7);

#line 685 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_9,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals0_11,
#line 685 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_12,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40,
#line 685 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_41);

#line 620 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
#line 620 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 620 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 620 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__4_4);

#line 487 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Term0_11,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Term_12,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_48,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52);

#line 476 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10);

#line 454 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_clause_2_p_0(
#line 454 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ItemClause0_3,
#line 454 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ItemClause_4);

#line 442 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0_1(
#line 442 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 442 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 442 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);

#line 432 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0(
#line 432 "state_var.m"
  MR_Word hlds__make_hlds__state_var__IM0_3,
#line 432 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__IM_4);

#line 378 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_6,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NameSource_7,
#line 378 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Var_8,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13,
#line 378 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);

#line 1834 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1834 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1834 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1834 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6);

#line 1820 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
#line 1820 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1820 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1820 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1820 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1820 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4);

#line 1194 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3(
#line 1194 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1192 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2(
#line 1192 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1190 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1(
#line 1190 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 807 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
#line 807 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 807 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 807 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);

#line 654 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1(
#line 654 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 654 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1);

#line 428 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0_1(
#line 428 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 428 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 428 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[49][2];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][4];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[4][1];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10];




static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[49][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[4]))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "readonly."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not visible in this context."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "shadows old one."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the if-then-else defines"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but not this one."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: reference to uninitialized state variable"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: state variable"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: cannot use"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "here due to the surrounding"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "you may only refer to"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Here is the surrounding context that makes"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be a function result."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be a lambda argument."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Perhaps you meant"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: new state variable"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: clause head introduces"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "When the condition"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but when the condition"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Other disjuncts define"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__state_var__expand_bang_states_method_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "!"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "state variable"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1660 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1668 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1676 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1684 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1693 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1701 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1709 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1718 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
  }
};

#line 1727 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

#line 1733 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 = {
  (MR_String) "hlds_goal_svar_state",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0,
  NULL,
  NULL,
  NULL
};

#line 1748 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

#line 1753 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0
  }
};

#line 1762 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

#line 1767 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1] = {
  (MR_Integer) 0
};

#line 1772 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "hlds_goal_svar_state",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0
};

#line 1793 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 = {
  (MR_String) "roc_lambda",
  (MR_Integer) 0
};

#line 1799 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

#line 1804 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

#line 1809 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1] = {
  (MR_Integer) 0
};

#line 1814 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "readonly_context_kind",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0
};

#line 1835 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0 = {
  (MR_String) "name_initial",
  (MR_Integer) 0
};

#line 1841 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1 = {
  (MR_String) "name_middle",
  (MR_Integer) 1
};

#line 1847 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2 = {
  (MR_String) "name_final",
  (MR_Integer) 2
};

#line 1853 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2
};

#line 1860 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1
};

#line 1867 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1874 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "state_var_name_source",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0
};

#line 1895 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1916 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

#line 1923 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_String) "siasi_state_var",
  (MR_String) "siasi_di_var",
  (MR_String) "siasi_state_before"
};

#line 1930 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 = {
  (MR_String) "svar_inner_atomic_scope_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0,
  NULL,
  NULL
};

#line 1945 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

#line 1950 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0
  }
};

#line 1959 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

#line 1964 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1] = {
  (MR_Integer) 0
};

#line 1969 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_inner_atomic_scope_info",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0
};

#line 1990 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
};

#line 1997 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_String) "soasi_state_var",
  (MR_String) "soasi_before_status",
  (MR_String) "soasi_after_status"
};

#line 2004 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 = {
  (MR_String) "svar_outer_atomic_scope_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0,
  NULL,
  NULL
};

#line 2019 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 = {
  (MR_String) "no_svar_outer_atomic_scope_info",
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

#line 2034 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1
};

#line 2039 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

#line 2044 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1
  }
};

#line 2058 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

#line 2064 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2070 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_outer_atomic_scope_info",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0
};

#line 2091 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1] = {
  (MR_Integer) 0
};

#line 2096 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
  }
};

#line 2105 "hlds.make_hlds.state_var.c"
static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 = {
  (MR_String) "svar_state",
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
  (MR_String) "state_status_map"
};

#line 2112 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_state",
  {
    &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0
  },
  {
    &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0
};

#line 2133 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 = {
  (MR_String) "status_unknown",
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

#line 2148 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2153 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 = {
  (MR_String) "status_unknown_updated",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1,
  NULL,
  NULL,
  NULL
};

#line 2168 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2175 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 = {
  (MR_String) "status_known_ro",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2,
  NULL,
  NULL,
  NULL
};

#line 2190 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2195 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3 = {
  (MR_String) "status_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3,
  NULL,
  NULL,
  NULL
};

#line 2210 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2216 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4 = {
  (MR_String) "status_known_updated",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4,
  NULL,
  NULL,
  NULL
};

#line 2231 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0
};

#line 2236 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

#line 2241 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2
};

#line 2246 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4
};

#line 2252 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3
  }
};

#line 2276 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

#line 2285 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2294 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_status_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_status_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_status",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0
};

#line 2315 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2324 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2332 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2339 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3] = {
  (MR_String) "store_next_goal_id",
  (MR_String) "store_final_remap",
  (MR_String) "store_specs"
};

#line 2346 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 = {
  (MR_String) "svar_store",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0,
  NULL,
  NULL
};

#line 2361 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

#line 2366 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0
  }
};

#line 2375 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

#line 2380 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1] = {
  (MR_Integer) 0
};

#line 2385 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_store_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_store_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_store",
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0
  },
  {
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0
};

#line 2406 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
#line 2409 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2411 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2413 "hlds.make_hlds.state_var.c"
{
#line 2415 "hlds.make_hlds.state_var.c"
  {
#line 2417 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2420 "hlds.make_hlds.state_var.c"
    {
#line 2422 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2425 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2427 "hlds.make_hlds.state_var.c"
  }
#line 2429 "hlds.make_hlds.state_var.c"
}

#line 2432 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
#line 2435 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2437 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2439 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2441 "hlds.make_hlds.state_var.c"
{
#line 2443 "hlds.make_hlds.state_var.c"
  {
#line 2445 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2448 "hlds.make_hlds.state_var.c"
    {
#line 2450 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2453 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2455 "hlds.make_hlds.state_var.c"
  }
#line 2457 "hlds.make_hlds.state_var.c"
}

#line 2460 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
#line 2463 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2465 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2467 "hlds.make_hlds.state_var.c"
{
#line 2469 "hlds.make_hlds.state_var.c"
  {
#line 2471 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2474 "hlds.make_hlds.state_var.c"
    {
#line 2476 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0();
    }
#line 2479 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2481 "hlds.make_hlds.state_var.c"
  }
#line 2483 "hlds.make_hlds.state_var.c"
}

#line 2486 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
#line 2489 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2491 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2493 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2495 "hlds.make_hlds.state_var.c"
{
#line 2497 "hlds.make_hlds.state_var.c"
  {
#line 2499 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2502 "hlds.make_hlds.state_var.c"
    {
#line 2504 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1);
    }
#line 2507 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2509 "hlds.make_hlds.state_var.c"
  }
#line 2511 "hlds.make_hlds.state_var.c"
}

#line 2514 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
#line 2517 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2519 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2521 "hlds.make_hlds.state_var.c"
{
#line 2523 "hlds.make_hlds.state_var.c"
  {
#line 2525 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2528 "hlds.make_hlds.state_var.c"
    {
#line 2530 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2533 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2535 "hlds.make_hlds.state_var.c"
  }
#line 2537 "hlds.make_hlds.state_var.c"
}

#line 2540 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
#line 2543 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2545 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2547 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2549 "hlds.make_hlds.state_var.c"
{
#line 2551 "hlds.make_hlds.state_var.c"
  {
#line 2553 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2556 "hlds.make_hlds.state_var.c"
    {
#line 2558 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2561 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2563 "hlds.make_hlds.state_var.c"
  }
#line 2565 "hlds.make_hlds.state_var.c"
}

#line 2568 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
#line 2571 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2573 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2575 "hlds.make_hlds.state_var.c"
{
#line 2577 "hlds.make_hlds.state_var.c"
  {
#line 2579 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2582 "hlds.make_hlds.state_var.c"
    {
#line 2584 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2587 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2589 "hlds.make_hlds.state_var.c"
  }
#line 2591 "hlds.make_hlds.state_var.c"
}

#line 2594 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
#line 2597 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2599 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2601 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2603 "hlds.make_hlds.state_var.c"
{
#line 2605 "hlds.make_hlds.state_var.c"
  {
#line 2607 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2610 "hlds.make_hlds.state_var.c"
    {
#line 2612 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2615 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2617 "hlds.make_hlds.state_var.c"
  }
#line 2619 "hlds.make_hlds.state_var.c"
}

#line 2622 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
#line 2625 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2627 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2629 "hlds.make_hlds.state_var.c"
{
#line 2631 "hlds.make_hlds.state_var.c"
  {
#line 2633 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2636 "hlds.make_hlds.state_var.c"
    {
#line 2638 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2641 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2643 "hlds.make_hlds.state_var.c"
  }
#line 2645 "hlds.make_hlds.state_var.c"
}

#line 2648 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
#line 2651 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2653 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2655 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2657 "hlds.make_hlds.state_var.c"
{
#line 2659 "hlds.make_hlds.state_var.c"
  {
#line 2661 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2664 "hlds.make_hlds.state_var.c"
    {
#line 2666 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2669 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2671 "hlds.make_hlds.state_var.c"
  }
#line 2673 "hlds.make_hlds.state_var.c"
}

#line 2676 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
#line 2679 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2681 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2683 "hlds.make_hlds.state_var.c"
{
#line 2685 "hlds.make_hlds.state_var.c"
  {
#line 2687 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2690 "hlds.make_hlds.state_var.c"
    {
#line 2692 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2695 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2697 "hlds.make_hlds.state_var.c"
  }
#line 2699 "hlds.make_hlds.state_var.c"
}

#line 2702 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
#line 2705 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2707 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2709 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2711 "hlds.make_hlds.state_var.c"
{
#line 2713 "hlds.make_hlds.state_var.c"
  {
#line 2715 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2718 "hlds.make_hlds.state_var.c"
    {
#line 2720 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2723 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2725 "hlds.make_hlds.state_var.c"
  }
#line 2727 "hlds.make_hlds.state_var.c"
}

#line 2730 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
#line 2733 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2735 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2737 "hlds.make_hlds.state_var.c"
{
#line 2739 "hlds.make_hlds.state_var.c"
  {
#line 2741 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2744 "hlds.make_hlds.state_var.c"
    {
#line 2746 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2749 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2751 "hlds.make_hlds.state_var.c"
  }
#line 2753 "hlds.make_hlds.state_var.c"
}

#line 2756 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
#line 2759 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2761 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2763 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2765 "hlds.make_hlds.state_var.c"
{
#line 2767 "hlds.make_hlds.state_var.c"
  {
#line 2769 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2772 "hlds.make_hlds.state_var.c"
    {
#line 2774 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_state_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2777 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2779 "hlds.make_hlds.state_var.c"
  }
#line 2781 "hlds.make_hlds.state_var.c"
}

#line 2784 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
#line 2787 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2789 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2791 "hlds.make_hlds.state_var.c"
{
#line 2793 "hlds.make_hlds.state_var.c"
  {
#line 2795 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2798 "hlds.make_hlds.state_var.c"
    {
#line 2800 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2803 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2805 "hlds.make_hlds.state_var.c"
  }
#line 2807 "hlds.make_hlds.state_var.c"
}

#line 2810 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
#line 2813 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2815 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2817 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2819 "hlds.make_hlds.state_var.c"
{
#line 2821 "hlds.make_hlds.state_var.c"
  {
#line 2823 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2826 "hlds.make_hlds.state_var.c"
    {
#line 2828 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_status_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2831 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2833 "hlds.make_hlds.state_var.c"
  }
#line 2835 "hlds.make_hlds.state_var.c"
}

#line 2838 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
#line 2841 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2843 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2845 "hlds.make_hlds.state_var.c"
{
#line 2847 "hlds.make_hlds.state_var.c"
  {
#line 2849 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2852 "hlds.make_hlds.state_var.c"
    {
#line 2854 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2857 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2859 "hlds.make_hlds.state_var.c"
  }
#line 2861 "hlds.make_hlds.state_var.c"
}

#line 2864 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
#line 2867 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2869 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2871 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2873 "hlds.make_hlds.state_var.c"
{
#line 2875 "hlds.make_hlds.state_var.c"
  {
#line 2877 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2880 "hlds.make_hlds.state_var.c"
    {
#line 2882 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_store_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2885 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2887 "hlds.make_hlds.state_var.c"
  }
#line 2889 "hlds.make_hlds.state_var.c"
}

#line 315 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1)
#line 315 "state_var.m"
{
#line 315 "state_var.m"
  {
#line 315 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 315 "state_var.m"
    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 315 "state_var.m"
  }
#line 315 "state_var.m"
}

#line 315 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 315 "state_var.m"
{
#line 315 "state_var.m"
  {
#line 315 "state_var.m"
    return MR_TRUE;
#line 315 "state_var.m"
  }
#line 315 "state_var.m"
}

#line 204 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InnerScopeInfo_12,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InnerDIVar_13,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InnerUOVar_14,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_29,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33)
#line 204 "state_var.m"
{
#line 1655 "state_var.m"
  {
#line 1655 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InnerStateVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 0)));
#line 1655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_20;
#line 1655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Status_21;
#line 1659 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_Status_21;

#line 1656 "state_var.m"
    *hlds__make_hlds__state_var__InnerDIVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 1)));
#line 1656 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_State_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 2)));
#line 1658 "state_var.m"
    hlds__make_hlds__state_var__StatusMap0_20 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28;
#line 1659 "state_var.m"
    {
#line 1659 "state_var.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_20, ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_18)), &hlds__make_hlds__state_var__conv0_Status_21);
    }
#line 1659 "state_var.m"
    hlds__make_hlds__state_var__Status_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_21);
#line 1662 "state_var.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1661 "state_var.m"
      *hlds__make_hlds__state_var__InnerUOVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, (MR_Integer) 1)));
#line 1662 "state_var.m"
    else
#line 1667 "state_var.m"
      {
#line 1668 "state_var.m"
        {
#line 1668 "state_var.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
#line 1668 "state_var.m"
          return;
        }
#line 1667 "state_var.m"
      }
#line 1670 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32;
#line 1670 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30;
#line 1655 "state_var.m"
  }
#line 204 "state_var.m"
}

#line 191 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InnerStateVar_11,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InnerScopeInfo_12,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_21,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25)
#line 191 "state_var.m"
{
#line 1645 "state_var.m"
  {
#line 1645 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1645 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1645 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InnerDIVar_17;
#line 1645 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_18;
#line 1645 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap_19;
#line 1645 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1645 "state_var.m"
    MR_String hlds__make_hlds__state_var__SVarName_39;
#line 1645 "state_var.m"
    MR_String hlds__make_hlds__state_var__ProgVarName_40;
#line 1645 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_61_61;

#line 382 "state_var.m"
    {
#line 382 "state_var.m"
      hlds__make_hlds__state_var__SVarName_39 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_58, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__InnerStateVar_11);
    }
#line 3047 "hlds.make_hlds.state_var.c"
    {
#line 3049 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__V_61_61 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_39, (MR_String) "_0");
    }
#line 3052 "hlds.make_hlds.state_var.c"
    {
#line 3054 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__ProgVarName_40 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_61_61);
    }
#line 386 "state_var.m"
    {
#line 386 "state_var.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_58, hlds__make_hlds__state_var__ProgVarName_40, &hlds__make_hlds__state_var__InnerDIVar_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23);
    }
#line 1648 "state_var.m"
    hlds__make_hlds__state_var__StatusMap0_18 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20;
#line 1649 "state_var.m"
    {
#line 1649 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1649 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__state_var__InnerDIVar_17));
#line 1649 "state_var.m"
    }
#line 1649 "state_var.m"
    {
#line 1649 "state_var.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_28_28)), hlds__make_hlds__state_var__StatusMap0_18, &hlds__make_hlds__state_var__StatusMap_19);
    }
#line 1650 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_State_21 = (MR_Word) hlds__make_hlds__state_var__StatusMap_19;
#line 1651 "state_var.m"
    {
#line 1651 "state_var.m"
      MR_Word base;
#line 1651 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1651 "state_var.m"
      *hlds__make_hlds__state_var__InnerScopeInfo_12 = base;
#line 1651 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_11));
#line 1651 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__InnerDIVar_17));
#line 1651 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20));
#line 1651 "state_var.m"
    }
#line 1651 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24;
#line 1645 "state_var.m"
  }
#line 191 "state_var.m"
}

#line 136 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__DisjStates_11,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Disjs_12,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateBefore_14,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StateAfter_15,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_32)
#line 136 "state_var.m"
{
#line 917 "state_var.m"
  {
#line 917 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 917 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapBefore_17 = (MR_Word) hlds__make_hlds__state_var__StateBefore_14;

#line 919 "state_var.m"
    {
#line 919 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapBefore_17);
    }
#line 924 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 921 "state_var.m"
      {
#line 921 "state_var.m"
        MR_Word hlds__make_hlds__state_var__RevDisjs_18;

#line 921 "state_var.m"
        {
#line 921 "state_var.m"
          hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(hlds__make_hlds__state_var__DisjStates_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__RevDisjs_18);
        }
#line 922 "state_var.m"
        {
#line 922 "state_var.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__RevDisjs_18, hlds__make_hlds__state_var__Disjs_12);
        }
#line 923 "state_var.m"
        *hlds__make_hlds__state_var__StateAfter_15 = hlds__make_hlds__state_var__StateBefore_14;
#line 923 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Store_32 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31;
#line 921 "state_var.m"
      }
#line 924 "state_var.m"
    else
#line 925 "state_var.m"
      {
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_41_41 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_42_42 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusListBefore_19;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ChangedStatusMapAfter_20;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMapAfter_21;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ChangedStatusListAfter_22;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__NextGoalId0_23;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenamings0_24;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Specs0_25;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__NextGoalId_26;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenamings_27;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Specs_28;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_34_34;
#line 925 "state_var.m"
        MR_Word hlds__make_hlds__state_var__RevDisjs_37;

#line 925 "state_var.m"
        {
#line 925 "state_var.m"
          mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42, hlds__make_hlds__state_var__StatusMapBefore_17, &hlds__make_hlds__state_var__StatusListBefore_19);
        }
#line 926 "state_var.m"
        {
#line 926 "state_var.m"
          hlds__make_hlds__state_var__V_34_34 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42);
        }
#line 926 "state_var.m"
        {
#line 926 "state_var.m"
          hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(hlds__make_hlds__state_var__StatusListBefore_19, hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__V_34_34, &hlds__make_hlds__state_var__ChangedStatusMapAfter_20, hlds__make_hlds__state_var__StatusMapBefore_17, &hlds__make_hlds__state_var__StatusMapAfter_21);
        }
#line 928 "state_var.m"
        {
#line 928 "state_var.m"
          mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42, hlds__make_hlds__state_var__ChangedStatusMapAfter_20, &hlds__make_hlds__state_var__ChangedStatusListAfter_22);
        }
#line 930 "state_var.m"
        *hlds__make_hlds__state_var__StateAfter_15 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfter_21;
#line 932 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 0)));
#line 932 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenamings0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 1)));
#line 932 "state_var.m"
        hlds__make_hlds__state_var__Specs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 2)));
#line 933 "state_var.m"
        {
#line 933 "state_var.m"
          hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__StatusMapBefore_17, hlds__make_hlds__state_var__ChangedStatusListAfter_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__RevDisjs_37, hlds__make_hlds__state_var__NextGoalId0_23, &hlds__make_hlds__state_var__NextGoalId_26, hlds__make_hlds__state_var__DelayedRenamings0_24, &hlds__make_hlds__state_var__DelayedRenamings_27, hlds__make_hlds__state_var__Specs0_25, &hlds__make_hlds__state_var__Specs_28);
        }
#line 937 "state_var.m"
        {
#line 937 "state_var.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__RevDisjs_37, hlds__make_hlds__state_var__Disjs_12);
        }
#line 938 "state_var.m"
        {
#line 938 "state_var.m"
          MR_Word base;
#line 938 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 938 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_Store_32 = base;
#line 938 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_26));
#line 938 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamings_27));
#line 938 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_28));
#line 938 "state_var.m"
        }
#line 925 "state_var.m"
      }
#line 938 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29;
#line 917 "state_var.m"
  }
#line 136 "state_var.m"
}

#line 1277 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_p_0(
#line 1277 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_76,
#line 1277 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_78)
#line 1277 "state_var.m"
{
#line 1277 "state_var.m"
  {
#line 1277 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1277 "state_var.m"
    {
#line 1277 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterThen_78);
    }
#line 1277 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1277 "state_var.m"
  }
#line 1277 "state_var.m"
}

#line 1058 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_p_0(
#line 1058 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23,
#line 1058 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterArmStatus_25)
#line 1058 "state_var.m"
{
#line 1058 "state_var.m"
  {
#line 1058 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1058 "state_var.m"
    {
#line 1058 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__AfterArmStatus_25, hlds__make_hlds__state_var__AfterAllArmsStatus_23);
    }
#line 1058 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1058 "state_var.m"
  }
#line 1058 "state_var.m"
}

#line 948 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_p_0(
#line 948 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12)
#line 948 "state_var.m"
{
#line 948 "state_var.m"
  {
#line 948 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 948 "state_var.m"
    {
#line 948 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapAfterGoal_12);
    }
#line 948 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 948 "state_var.m"
  }
#line 948 "state_var.m"
}

#line 1194 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_p_0(
#line 1194 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1194 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41)
#line 1194 "state_var.m"
{
#line 1194 "state_var.m"
  {
#line 1194 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1194 "state_var.m"
    {
#line 1194 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38)), ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterElse_41)));
    }
#line 1194 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1194 "state_var.m"
  }
#line 1194 "state_var.m"
}

#line 1192 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_p_0(
#line 1192 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1192 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40)
#line 1192 "state_var.m"
{
#line 1192 "state_var.m"
  {
#line 1192 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1192 "state_var.m"
    {
#line 1192 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38)), ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterThen_40)));
    }
#line 1192 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1192 "state_var.m"
  }
#line 1192 "state_var.m"
}

#line 1190 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_p_0(
#line 1190 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1190 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39)
#line 1190 "state_var.m"
{
#line 1190 "state_var.m"
  {
#line 1190 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1190 "state_var.m"
    {
#line 1190 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__list__sublist_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__SVarsBefore_38, hlds__make_hlds__state_var__SVarsAfterCond_39);
    }
#line 1190 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1190 "state_var.m"
  }
#line 1190 "state_var.m"
}

#line 357 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0(
#line 357 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 357 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 357 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 357 "state_var.m"
{
#line 357 "state_var.m"
  {
#line 357 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 357 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 357 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_13 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 357 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_12 == hlds__make_hlds__state_var__CastY_13);
#line 357 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 3434 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "state_var.m"
    else
#line 357 "state_var.m"
      {
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_10_10;

#line 357 "state_var.m"
        {
#line 357 "state_var.m"
          mercury__counter____Compare____counter_0_0(&hlds__make_hlds__state_var__V_10_10, hlds__make_hlds__state_var__V_4_4, hlds__make_hlds__state_var__V_7_7);
        }
#line 3460 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_10_10 == (MR_Integer) 0);
#line 357 "state_var.m"
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 357 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 357 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_10_10;
#line 357 "state_var.m"
        else
#line 357 "state_var.m"
          {
#line 357 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_11_11;

#line 357 "state_var.m"
            {
#line 357 "state_var.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], &hlds__make_hlds__state_var__V_11_11, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_8_8)));
            }
#line 3480 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_11_11 == (MR_Integer) 0);
#line 357 "state_var.m"
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 357 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 357 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_11_11;
#line 357 "state_var.m"
            else
#line 357 "state_var.m"
              {
#line 357 "state_var.m"
                {
#line 357 "state_var.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[5], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_6_6)), ((MR_Box) (hlds__make_hlds__state_var__V_9_9)));
#line 357 "state_var.m"
                  return;
                }
#line 357 "state_var.m"
              }
#line 357 "state_var.m"
          }
#line 357 "state_var.m"
      }
#line 357 "state_var.m"
  }
#line 357 "state_var.m"
}

#line 357 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0(
#line 357 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 357 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 357 "state_var.m"
{
#line 357 "state_var.m"
  {
#line 357 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 357 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 357 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 357 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
#line 357 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 357 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 357 "state_var.m"
    else
#line 357 "state_var.m"
      {
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_12_12;
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_13_13;
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));

#line 3555 "hlds.make_hlds.state_var.c"
        {
#line 3557 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__succeeded = mercury__counter____Unify____counter_0_0(hlds__make_hlds__state_var__V_3_3, hlds__make_hlds__state_var__V_6_6);
        }
#line 357 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 357 "state_var.m"
          {
#line 3564 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeInfo_12_12 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1];
#line 3566 "hlds.make_hlds.state_var.c"
            {
#line 3568 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_12_12, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
            }
#line 357 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 357 "state_var.m"
              {
#line 3575 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[5];
#line 3577 "hlds.make_hlds.state_var.c"
                {
#line 3579 "hlds.make_hlds.state_var.c"
                  return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_8_8)));
                }
#line 357 "state_var.m"
              }
#line 357 "state_var.m"
          }
#line 357 "state_var.m"
      }
#line 357 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 357 "state_var.m"
  }
#line 357 "state_var.m"
}

#line 318 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
#line 318 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 318 "state_var.m"
{
#line 318 "state_var.m"
  {
#line 318 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 318 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_76 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 318 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_77 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 318 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_76 == hlds__make_hlds__state_var__CastY_77);
#line 318 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 3619 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 318 "state_var.m"
    else
#line 318 "state_var.m"
      if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 318 "state_var.m"
        else
#line 318 "state_var.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3633 "hlds.make_hlds.state_var.c"
            *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
          else
#line 318 "state_var.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3639 "hlds.make_hlds.state_var.c"
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
            else
#line 318 "state_var.m"
              if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3645 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
              else
#line 3649 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
      else
#line 318 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 318 "state_var.m"
          {
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

#line 318 "state_var.m"
            if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3664 "hlds.make_hlds.state_var.c"
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
            else
#line 318 "state_var.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 318 "state_var.m"
                {
#line 318 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 318 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 318 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_36_36;

#line 318 "state_var.m"
                  {
#line 318 "state_var.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_36_36, ((MR_Box) (hlds__make_hlds__state_var__V_87_87)), ((MR_Box) (hlds__make_hlds__state_var__V_33_33)));
                  }
#line 3684 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_36_36 == (MR_Integer) 0);
#line 318 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 318 "state_var.m"
                  if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_36_36;
#line 318 "state_var.m"
                  else
#line 318 "state_var.m"
                    {
#line 318 "state_var.m"
                      mercury__term____Compare____context_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_85_85, hlds__make_hlds__state_var__V_35_35);
#line 318 "state_var.m"
                      return;
                    }
#line 318 "state_var.m"
                }
#line 318 "state_var.m"
              else
#line 318 "state_var.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3707 "hlds.make_hlds.state_var.c"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                else
#line 318 "state_var.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3713 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
                  else
#line 3717 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
          }
#line 318 "state_var.m"
        else
#line 318 "state_var.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 318 "state_var.m"
            {
#line 318 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

#line 318 "state_var.m"
              if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3732 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
              else
#line 318 "state_var.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3738 "hlds.make_hlds.state_var.c"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
                else
#line 318 "state_var.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 318 "state_var.m"
                    {
#line 318 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));

#line 318 "state_var.m"
                      {
#line 318 "state_var.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_90_90)), ((MR_Box) (hlds__make_hlds__state_var__V_13_13)));
#line 318 "state_var.m"
                        return;
                      }
#line 318 "state_var.m"
                    }
#line 318 "state_var.m"
                  else
#line 318 "state_var.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3762 "hlds.make_hlds.state_var.c"
                      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
                    else
#line 3766 "hlds.make_hlds.state_var.c"
                      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
            }
#line 318 "state_var.m"
          else
#line 318 "state_var.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 318 "state_var.m"
              {
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

#line 318 "state_var.m"
                if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3781 "hlds.make_hlds.state_var.c"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                else
#line 318 "state_var.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3787 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                  else
#line 318 "state_var.m"
                    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3793 "hlds.make_hlds.state_var.c"
                      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                    else
#line 318 "state_var.m"
                      if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 318 "state_var.m"
                        {
#line 318 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));

#line 318 "state_var.m"
                          {
#line 318 "state_var.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_84_84)), ((MR_Box) (hlds__make_hlds__state_var__V_54_54)));
#line 318 "state_var.m"
                            return;
                          }
#line 318 "state_var.m"
                        }
#line 318 "state_var.m"
                      else
#line 3815 "hlds.make_hlds.state_var.c"
                        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "state_var.m"
              }
#line 318 "state_var.m"
            else
#line 318 "state_var.m"
              {
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

#line 318 "state_var.m"
                if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3830 "hlds.make_hlds.state_var.c"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                else
#line 318 "state_var.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3836 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                  else
#line 318 "state_var.m"
                    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3842 "hlds.make_hlds.state_var.c"
                      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                    else
#line 318 "state_var.m"
                      if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3848 "hlds.make_hlds.state_var.c"
                        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "state_var.m"
                      else
#line 318 "state_var.m"
                        {
#line 318 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 318 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 318 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_75_75;

#line 318 "state_var.m"
                          {
#line 318 "state_var.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_75_75, ((MR_Box) (hlds__make_hlds__state_var__V_89_89)), ((MR_Box) (hlds__make_hlds__state_var__V_73_73)));
                          }
#line 3866 "hlds.make_hlds.state_var.c"
                          hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_75_75 == (MR_Integer) 0);
#line 318 "state_var.m"
                          hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 318 "state_var.m"
                          if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
                            *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_75_75;
#line 318 "state_var.m"
                          else
#line 318 "state_var.m"
                            {
#line 318 "state_var.m"
                              {
#line 318 "state_var.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_88_88)), ((MR_Box) (hlds__make_hlds__state_var__V_74_74)));
#line 318 "state_var.m"
                                return;
                              }
#line 318 "state_var.m"
                            }
#line 318 "state_var.m"
                        }
#line 318 "state_var.m"
              }
#line 318 "state_var.m"
  }
#line 318 "state_var.m"
}

#line 318 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 318 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 318 "state_var.m"
{
#line 318 "state_var.m"
  {
#line 318 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 318 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_19 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 318 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_20 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 318 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_19 == hlds__make_hlds__state_var__CastY_20);
#line 318 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 318 "state_var.m"
    else
#line 318 "state_var.m"
      if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "state_var.m"
        {
#line 318 "state_var.m"
          MR_Integer hlds__make_hlds__state_var__CastX_3 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 318 "state_var.m"
          MR_Integer hlds__make_hlds__state_var__CastY_4 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 318 "state_var.m"
          hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastY_4 == hlds__make_hlds__state_var__CastX_3);
#line 318 "state_var.m"
        }
#line 318 "state_var.m"
      else
#line 318 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 318 "state_var.m"
          {
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_22_22;
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_10_10;
#line 318 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_12_12;

#line 318 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 318 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
              {
#line 318 "state_var.m"
                hlds__make_hlds__state_var__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "state_var.m"
                hlds__make_hlds__state_var__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 3962 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 3964 "hlds.make_hlds.state_var.c"
                {
#line 3966 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__state_var__V_7_7)), ((MR_Box) (hlds__make_hlds__state_var__V_10_10)));
                }
#line 318 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 3971 "hlds.make_hlds.state_var.c"
                  {
#line 3973 "hlds.make_hlds.state_var.c"
                    return hlds__make_hlds__state_var__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__state_var__V_9_9, hlds__make_hlds__state_var__V_12_12);
                  }
#line 318 "state_var.m"
              }
#line 318 "state_var.m"
          }
#line 318 "state_var.m"
        else
#line 318 "state_var.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 318 "state_var.m"
            {
#line 318 "state_var.m"
              MR_Word hlds__make_hlds__state_var__TypeInfo_26_26;
#line 318 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_6_6;

#line 318 "state_var.m"
              hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 318 "state_var.m"
              if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
                {
#line 318 "state_var.m"
                  hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 4001 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__TypeInfo_26_26 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4003 "hlds.make_hlds.state_var.c"
                  {
#line 4005 "hlds.make_hlds.state_var.c"
                    return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_26_26, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_6_6)));
                  }
#line 318 "state_var.m"
                }
#line 318 "state_var.m"
            }
#line 318 "state_var.m"
          else
#line 318 "state_var.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 318 "state_var.m"
              {
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_21_21;
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_14_14;

#line 318 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 318 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
                  {
#line 318 "state_var.m"
                    hlds__make_hlds__state_var__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 4033 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4035 "hlds.make_hlds.state_var.c"
                    {
#line 4037 "hlds.make_hlds.state_var.c"
                      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__state_var__V_13_13)), ((MR_Box) (hlds__make_hlds__state_var__V_14_14)));
                    }
#line 318 "state_var.m"
                  }
#line 318 "state_var.m"
              }
#line 318 "state_var.m"
            else
#line 318 "state_var.m"
              {
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_24_24;
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_25_25;
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_17_17;
#line 318 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_18_18;

#line 318 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 318 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
                  {
#line 318 "state_var.m"
                    hlds__make_hlds__state_var__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "state_var.m"
                    hlds__make_hlds__state_var__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 4071 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4073 "hlds.make_hlds.state_var.c"
                    {
#line 4075 "hlds.make_hlds.state_var.c"
                      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__state_var__V_15_15)), ((MR_Box) (hlds__make_hlds__state_var__V_17_17)));
                    }
#line 318 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 318 "state_var.m"
                      {
#line 4082 "hlds.make_hlds.state_var.c"
                        hlds__make_hlds__state_var__TypeInfo_25_25 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4084 "hlds.make_hlds.state_var.c"
                        {
#line 4086 "hlds.make_hlds.state_var.c"
                          return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_25_25, ((MR_Box) (hlds__make_hlds__state_var__V_16_16)), ((MR_Box) (hlds__make_hlds__state_var__V_18_18)));
                        }
#line 318 "state_var.m"
                      }
#line 318 "state_var.m"
                  }
#line 318 "state_var.m"
              }
#line 318 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 318 "state_var.m"
  }
#line 318 "state_var.m"
}

#line 352 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0(
#line 352 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 352 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 352 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 352 "state_var.m"
{
#line 352 "state_var.m"
  {
#line 352 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 352 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_6 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 352 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_7 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 352 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_6 == hlds__make_hlds__state_var__CastY_7);
#line 352 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4126 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 352 "state_var.m"
    else
#line 352 "state_var.m"
      {
#line 352 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = (MR_Word) hlds__make_hlds__state_var__HeadVar__2_2;
#line 352 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = (MR_Word) hlds__make_hlds__state_var__HeadVar__3_3;

#line 352 "state_var.m"
        {
#line 352 "state_var.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[2], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_5_5)));
#line 352 "state_var.m"
          return;
        }
#line 352 "state_var.m"
      }
#line 352 "state_var.m"
  }
#line 352 "state_var.m"
}

#line 352 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0(
#line 352 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 352 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 352 "state_var.m"
{
#line 352 "state_var.m"
  {
#line 352 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 352 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_5 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 352 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_6 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 352 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_5 == hlds__make_hlds__state_var__CastY_6);
#line 352 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 352 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 352 "state_var.m"
    else
#line 352 "state_var.m"
      {
#line 352 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = (MR_Word) hlds__make_hlds__state_var__HeadVar__1_1;
#line 352 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = (MR_Word) hlds__make_hlds__state_var__HeadVar__2_2;

#line 4184 "hlds.make_hlds.state_var.c"
        {
#line 4186 "hlds.make_hlds.state_var.c"
          return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[2], ((MR_Box) (hlds__make_hlds__state_var__V_3_3)), ((MR_Box) (hlds__make_hlds__state_var__V_4_4)));
        }
#line 352 "state_var.m"
      }
#line 352 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 352 "state_var.m"
  }
#line 352 "state_var.m"
}

#line 1566 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(
#line 1566 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 1566 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 1566 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 1566 "state_var.m"
{
#line 1566 "state_var.m"
  {
#line 1566 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1566 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_18 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 1566 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_19 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 1566 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_18 == hlds__make_hlds__state_var__CastY_19);
#line 1566 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4222 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 1566 "state_var.m"
    else
#line 1566 "state_var.m"
      if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 1566 "state_var.m"
        else
#line 4234 "hlds.make_hlds.state_var.c"
          *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 1566 "state_var.m"
      else
#line 1566 "state_var.m"
        {
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

#line 1566 "state_var.m"
          if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4249 "hlds.make_hlds.state_var.c"
            *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 1566 "state_var.m"
          else
#line 1566 "state_var.m"
            {
#line 1566 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 1566 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 1566 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 1566 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_10_10;

#line 1566 "state_var.m"
              {
#line 1566 "state_var.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_10_10, ((MR_Box) (hlds__make_hlds__state_var__V_25_25)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
              }
#line 4269 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_10_10 == (MR_Integer) 0);
#line 1566 "state_var.m"
              hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1566 "state_var.m"
              if (hlds__make_hlds__state_var__succeeded)
#line 1566 "state_var.m"
                *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_10_10;
#line 1566 "state_var.m"
              else
#line 1566 "state_var.m"
                {
#line 1566 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_11_11;

#line 1566 "state_var.m"
                  {
#line 1566 "state_var.m"
                    hlds__make_hlds__state_var____Compare____svar_status_0_0(&hlds__make_hlds__state_var__V_11_11, hlds__make_hlds__state_var__V_24_24, hlds__make_hlds__state_var__V_8_8);
                  }
#line 4289 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_11_11 == (MR_Integer) 0);
#line 1566 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1566 "state_var.m"
                  if (hlds__make_hlds__state_var__succeeded)
#line 1566 "state_var.m"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_11_11;
#line 1566 "state_var.m"
                  else
#line 1566 "state_var.m"
                    {
#line 1566 "state_var.m"
                      hlds__make_hlds__state_var____Compare____svar_status_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_23_23, hlds__make_hlds__state_var__V_9_9);
#line 1566 "state_var.m"
                      return;
                    }
#line 1566 "state_var.m"
                }
#line 1566 "state_var.m"
            }
#line 1566 "state_var.m"
        }
#line 1566 "state_var.m"
  }
#line 1566 "state_var.m"
}

#line 1566 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(
#line 1566 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1566 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 1566 "state_var.m"
{
#line 1566 "state_var.m"
  {
#line 1566 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1566 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_11 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 1566 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 1566 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_11 == hlds__make_hlds__state_var__CastY_12);
#line 1566 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1566 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1566 "state_var.m"
    else
#line 1566 "state_var.m"
      if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "state_var.m"
        {
#line 1566 "state_var.m"
          MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 1566 "state_var.m"
          MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 1566 "state_var.m"
          hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastY_10 == hlds__make_hlds__state_var__CastX_9);
#line 1566 "state_var.m"
        }
#line 1566 "state_var.m"
      else
#line 1566 "state_var.m"
        {
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__TypeInfo_13_13;
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_6_6;
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_7_7;
#line 1566 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_8_8;

#line 1566 "state_var.m"
          hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1566 "state_var.m"
          if (hlds__make_hlds__state_var__succeeded)
#line 1566 "state_var.m"
            {
#line 1566 "state_var.m"
              hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 1566 "state_var.m"
              hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1566 "state_var.m"
              hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 4387 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4389 "hlds.make_hlds.state_var.c"
              {
#line 4391 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__state_var__V_3_3)), ((MR_Box) (hlds__make_hlds__state_var__V_6_6)));
              }
#line 1566 "state_var.m"
              if (hlds__make_hlds__state_var__succeeded)
#line 1566 "state_var.m"
                {
#line 4398 "hlds.make_hlds.state_var.c"
                  {
#line 4400 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__V_4_4, hlds__make_hlds__state_var__V_7_7);
                  }
#line 1566 "state_var.m"
                  if (hlds__make_hlds__state_var__succeeded)
#line 4405 "hlds.make_hlds.state_var.c"
                    {
#line 4407 "hlds.make_hlds.state_var.c"
                      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__V_5_5, hlds__make_hlds__state_var__V_8_8);
                    }
#line 1566 "state_var.m"
                }
#line 1566 "state_var.m"
            }
#line 1566 "state_var.m"
        }
#line 1566 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1566 "state_var.m"
  }
#line 1566 "state_var.m"
}

#line 1637 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(
#line 1637 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 1637 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 1637 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 1637 "state_var.m"
{
#line 1637 "state_var.m"
  {
#line 1637 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1637 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 1637 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_13 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 1637 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_12 == hlds__make_hlds__state_var__CastY_13);
#line 1637 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4447 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 1637 "state_var.m"
    else
#line 1637 "state_var.m"
      {
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_10_10;

#line 1637 "state_var.m"
        {
#line 1637 "state_var.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_10_10, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
        }
#line 4473 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_10_10 == (MR_Integer) 0);
#line 1637 "state_var.m"
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1637 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1637 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_10_10;
#line 1637 "state_var.m"
        else
#line 1637 "state_var.m"
          {
#line 1637 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_11_11;

#line 1637 "state_var.m"
            {
#line 1637 "state_var.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_11_11, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_8_8)));
            }
#line 4493 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_11_11 == (MR_Integer) 0);
#line 1637 "state_var.m"
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1637 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1637 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_11_11;
#line 1637 "state_var.m"
            else
#line 1637 "state_var.m"
              {
#line 1637 "state_var.m"
                hlds__make_hlds__state_var____Compare____svar_state_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_6_6, hlds__make_hlds__state_var__V_9_9);
#line 1637 "state_var.m"
                return;
              }
#line 1637 "state_var.m"
          }
#line 1637 "state_var.m"
      }
#line 1637 "state_var.m"
  }
#line 1637 "state_var.m"
}

#line 1637 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(
#line 1637 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1637 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 1637 "state_var.m"
{
#line 1637 "state_var.m"
  {
#line 1637 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1637 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 1637 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 1637 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
#line 1637 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1637 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1637 "state_var.m"
    else
#line 1637 "state_var.m"
      {
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_12_12;
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1637 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));

#line 4562 "hlds.make_hlds.state_var.c"
        {
#line 4564 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__V_3_3)), ((MR_Box) (hlds__make_hlds__state_var__V_6_6)));
        }
#line 1637 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1637 "state_var.m"
          {
#line 4571 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeInfo_12_12 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4573 "hlds.make_hlds.state_var.c"
            {
#line 4575 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_12_12, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
            }
#line 1637 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 4580 "hlds.make_hlds.state_var.c"
              {
#line 4582 "hlds.make_hlds.state_var.c"
                return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(hlds__make_hlds__state_var__V_5_5, hlds__make_hlds__state_var__V_8_8);
              }
#line 1637 "state_var.m"
          }
#line 1637 "state_var.m"
      }
#line 1637 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1637 "state_var.m"
  }
#line 1637 "state_var.m"
}

#line 32 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0(
#line 32 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 32 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 32 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 32 "state_var.m"
{
#line 32 "state_var.m"
  {
#line 32 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 32 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar1_4 = hlds__make_hlds__state_var__HeadVar__2_2;
#line 32 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar2_5 = hlds__make_hlds__state_var__HeadVar__3_3;

#line 32 "state_var.m"
    {
#line 32 "state_var.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar2_5)));
#line 32 "state_var.m"
      return;
    }
#line 32 "state_var.m"
  }
#line 32 "state_var.m"
}

#line 32 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0(
#line 32 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 32 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 32 "state_var.m"
{
#line 32 "state_var.m"
  {
#line 32 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 32 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar1_3 = hlds__make_hlds__state_var__HeadVar__1_1;
#line 32 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar2_4 = hlds__make_hlds__state_var__HeadVar__2_2;

#line 32 "state_var.m"
    {
#line 32 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar1_3)), ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar2_4)));
    }
#line 32 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 32 "state_var.m"
  }
#line 32 "state_var.m"
}

#line 373 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
#line 373 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 373 "state_var.m"
{
#line 373 "state_var.m"
  {
#line 373 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 373 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 373 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 373 "state_var.m"
    {
#line 373 "state_var.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__Cast_HeadVar1_4, hlds__make_hlds__state_var__Cast_HeadVar2_5);
#line 373 "state_var.m"
      return;
    }
#line 373 "state_var.m"
  }
#line 373 "state_var.m"
}

#line 373 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_1,
#line 373 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 373 "state_var.m"
{
#line 4699 "hlds.make_hlds.state_var.c"
  {
#line 4701 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__HeadVar__2_1 == hlds__make_hlds__state_var__HeadVar__2_2);

#line 4704 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 4706 "hlds.make_hlds.state_var.c"
  }
#line 373 "state_var.m"
}

#line 315 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
#line 315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1)
#line 315 "state_var.m"
{
#line 315 "state_var.m"
  {
#line 315 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 315 "state_var.m"
    {
#line 315 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(hlds__make_hlds__state_var__HeadVar__1_1);
#line 315 "state_var.m"
      return;
    }
#line 315 "state_var.m"
  }
#line 315 "state_var.m"
}

#line 315 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void)
#line 315 "state_var.m"
{
#line 315 "state_var.m"
  {
#line 315 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 315 "state_var.m"
    {
#line 315 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 315 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 315 "state_var.m"
  }
#line 315 "state_var.m"
}

#line 37 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(
#line 37 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 37 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 37 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 37 "state_var.m"
{
#line 37 "state_var.m"
  {
#line 37 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 37 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 37 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 37 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
#line 37 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4781 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "state_var.m"
    else
#line 37 "state_var.m"
      {
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8;

#line 37 "state_var.m"
        {
#line 37 "state_var.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__make_hlds__state_var__V_8_8, hlds__make_hlds__state_var__V_4_4, hlds__make_hlds__state_var__V_6_6);
        }
#line 4803 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_8_8 == (MR_Integer) 0);
#line 37 "state_var.m"
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 37 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 37 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_8_8;
#line 37 "state_var.m"
        else
#line 37 "state_var.m"
          {
#line 37 "state_var.m"
            hlds__make_hlds__state_var____Compare____svar_state_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_5_5, hlds__make_hlds__state_var__V_7_7);
#line 37 "state_var.m"
            return;
          }
#line 37 "state_var.m"
      }
#line 37 "state_var.m"
  }
#line 37 "state_var.m"
}

#line 37 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(
#line 37 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 37 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 37 "state_var.m"
{
#line 37 "state_var.m"
  {
#line 37 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 37 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_7 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 37 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_8 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 37 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_7 == hlds__make_hlds__state_var__CastY_8);
#line 37 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 37 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 37 "state_var.m"
    else
#line 37 "state_var.m"
      {
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

#line 4864 "hlds.make_hlds.state_var.c"
        {
#line 4866 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__make_hlds__state_var__V_3_3, hlds__make_hlds__state_var__V_5_5);
        }
#line 37 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 4871 "hlds.make_hlds.state_var.c"
          {
#line 4873 "hlds.make_hlds.state_var.c"
            return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(hlds__make_hlds__state_var__V_4_4, hlds__make_hlds__state_var__V_6_6);
          }
#line 37 "state_var.m"
      }
#line 37 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 37 "state_var.m"
  }
#line 37 "state_var.m"
}

#line 2042 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_1_p_0(
#line 2042 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1)
#line 2042 "state_var.m"
{
#line 2044 "state_var.m"
  {
#line 2044 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2044 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 2044 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 2044 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));

#line 2044 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2044 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 2044 "state_var.m"
  }
#line 2042 "state_var.m"
}

#line 2029 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
#line 2029 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_5,
#line 2029 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_6,
#line 2029 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 2029 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12)
#line 2029 "state_var.m"
{
#line 2032 "state_var.m"
  {
#line 2032 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_8;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_9;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_10;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_17_17;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 2032 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;

#line 2034 "state_var.m"
    {
#line 2034 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = parse_tree__error_util__list_to_pieces_1_f_0(hlds__make_hlds__state_var__NextStateVars_6);
    }
#line 2033 "state_var.m"
    {
#line 2033 "state_var.m"
      hlds__make_hlds__state_var__V_17_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_36_36, hlds__make_hlds__state_var__V_18_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[27]));
    }
#line 2033 "state_var.m"
    {
#line 2033 "state_var.m"
      hlds__make_hlds__state_var__Pieces_8 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_36_36, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[48]), hlds__make_hlds__state_var__V_17_17);
    }
#line 2036 "state_var.m"
    {
#line 2036 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2036 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_8));
#line 2036 "state_var.m"
    }
#line 2036 "state_var.m"
    {
#line 2036 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_29_29));
#line 2036 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2036 "state_var.m"
    }
#line 2036 "state_var.m"
    {
#line 2036 "state_var.m"
      hlds__make_hlds__state_var__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2036 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_9, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_5));
#line 2036 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_9, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_28_28));
#line 2036 "state_var.m"
    }
#line 2037 "state_var.m"
    {
#line 2037 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_9));
#line 2037 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2037 "state_var.m"
    }
#line 2037 "state_var.m"
    {
#line 2037 "state_var.m"
      hlds__make_hlds__state_var__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2037 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2037 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2037 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 2037 "state_var.m"
    }
#line 2038 "state_var.m"
    {
#line 2038 "state_var.m"
      MR_Word base;
#line 2038 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12 = base;
#line 2038 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_10));
#line 2038 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11));
#line 2038 "state_var.m"
    }
#line 2032 "state_var.m"
  }
#line 2029 "state_var.m"
}

#line 2014 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
#line 2014 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_7,
#line 2014 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_8,
#line 2014 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenMissing_9,
#line 2014 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenNotMissing_10,
#line 2014 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15,
#line 2014 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16)
#line 2014 "state_var.m"
{
#line 2019 "state_var.m"
  {
#line 2019 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_12;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_13;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_14;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_17_17;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_21_21;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_37_37;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_48_48;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_49_49;
#line 2019 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_53_53;

#line 2020 "state_var.m"
    {
#line 2020 "state_var.m"
      hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2020 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__WhenNotMissing_10));
#line 2020 "state_var.m"
    }
#line 2020 "state_var.m"
    {
#line 2020 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 2020 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[21])));
#line 2020 "state_var.m"
    }
#line 2021 "state_var.m"
    {
#line 2021 "state_var.m"
      hlds__make_hlds__state_var__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[44])));
#line 2021 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 2021 "state_var.m"
    }
#line 2022 "state_var.m"
    {
#line 2022 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = parse_tree__error_util__list_to_pieces_1_f_0(hlds__make_hlds__state_var__NextStateVars_8);
    }
#line 2023 "state_var.m"
    {
#line 2023 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2023 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__state_var__WhenMissing_9));
#line 2023 "state_var.m"
    }
#line 2023 "state_var.m"
    {
#line 2023 "state_var.m"
      hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 2023 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[24])));
#line 2023 "state_var.m"
    }
#line 2022 "state_var.m"
    {
#line 2022 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2022 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[46])));
#line 2022 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_37_37));
#line 2022 "state_var.m"
    }
#line 2022 "state_var.m"
    {
#line 2022 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2022 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[45])));
#line 2022 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 2022 "state_var.m"
    }
#line 2021 "state_var.m"
    {
#line 2021 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_56_56, hlds__make_hlds__state_var__V_30_30, hlds__make_hlds__state_var__V_31_31);
    }
#line 2020 "state_var.m"
    {
#line 2020 "state_var.m"
      hlds__make_hlds__state_var__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_56_56, hlds__make_hlds__state_var__V_17_17, hlds__make_hlds__state_var__V_29_29);
    }
#line 2025 "state_var.m"
    {
#line 2025 "state_var.m"
      hlds__make_hlds__state_var__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_12));
#line 2025 "state_var.m"
    }
#line 2025 "state_var.m"
    {
#line 2025 "state_var.m"
      hlds__make_hlds__state_var__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_49_49));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2025 "state_var.m"
    }
#line 2025 "state_var.m"
    {
#line 2025 "state_var.m"
      hlds__make_hlds__state_var__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_7));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_48_48));
#line 2025 "state_var.m"
    }
#line 2026 "state_var.m"
    {
#line 2026 "state_var.m"
      hlds__make_hlds__state_var__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_13));
#line 2026 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2026 "state_var.m"
    }
#line 2026 "state_var.m"
    {
#line 2026 "state_var.m"
      hlds__make_hlds__state_var__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2026 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2026 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2026 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_53_53));
#line 2026 "state_var.m"
    }
#line 2027 "state_var.m"
    {
#line 2027 "state_var.m"
      MR_Word base;
#line 2027 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16 = base;
#line 2027 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_14));
#line 2027 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15));
#line 2027 "state_var.m"
    }
#line 2019 "state_var.m"
  }
#line 2014 "state_var.m"
}

#line 1985 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1985 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1985 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
#line 1985 "state_var.m"
{
#line 1988 "state_var.m"
  {
#line 1988 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1988 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_22_22;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 1988 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;

#line 1989 "state_var.m"
    {
#line 1989 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1991 "state_var.m"
    {
#line 1991 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_10));
#line 1991 "state_var.m"
    }
#line 1991 "state_var.m"
    {
#line 1991 "state_var.m"
      hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1991 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[15])));
#line 1991 "state_var.m"
    }
#line 1990 "state_var.m"
    {
#line 1990 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
#line 1990 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 1990 "state_var.m"
    }
#line 1990 "state_var.m"
    {
#line 1990 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[43])));
#line 1990 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1990 "state_var.m"
    }
#line 1992 "state_var.m"
    {
#line 1992 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1992 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1992 "state_var.m"
    }
#line 1992 "state_var.m"
    {
#line 1992 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_30_30));
#line 1992 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1992 "state_var.m"
    }
#line 1992 "state_var.m"
    {
#line 1992 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1992 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1992 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_29_29));
#line 1992 "state_var.m"
    }
#line 1993 "state_var.m"
    {
#line 1993 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1993 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1993 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1993 "state_var.m"
    }
#line 1993 "state_var.m"
    {
#line 1993 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1993 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1993 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1993 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 1993 "state_var.m"
    }
#line 1994 "state_var.m"
    {
#line 1994 "state_var.m"
      MR_Word base;
#line 1994 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1994 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1994 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1994 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1994 "state_var.m"
    }
#line 1988 "state_var.m"
  }
#line 1985 "state_var.m"
}

#line 1972 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1972 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1972 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
#line 1972 "state_var.m"
{
#line 1975 "state_var.m"
  {
#line 1975 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1975 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_19_19;
#line 1975 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_20_20;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 1975 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;

#line 1976 "state_var.m"
    {
#line 1976 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1978 "state_var.m"
    {
#line 1978 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
#line 1978 "state_var.m"
    {
#line 1978 "state_var.m"
      hlds__make_hlds__state_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1978 "state_var.m"
    }
#line 1977 "state_var.m"
    {
#line 1977 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_19_19));
#line 1977 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1977 "state_var.m"
    }
#line 1977 "state_var.m"
    {
#line 1977 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
#line 1977 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1977 "state_var.m"
    }
#line 1979 "state_var.m"
    {
#line 1979 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1979 "state_var.m"
    }
#line 1979 "state_var.m"
    {
#line 1979 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_29_29));
#line 1979 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1979 "state_var.m"
    }
#line 1979 "state_var.m"
    {
#line 1979 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1979 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_28_28));
#line 1979 "state_var.m"
    }
#line 1980 "state_var.m"
    {
#line 1980 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1980 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1980 "state_var.m"
    }
#line 1980 "state_var.m"
    {
#line 1980 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1980 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1980 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1980 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 1980 "state_var.m"
    }
#line 1981 "state_var.m"
    {
#line 1981 "state_var.m"
      MR_Word base;
#line 1981 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1981 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1981 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1981 "state_var.m"
    }
#line 1975 "state_var.m"
  }
#line 1972 "state_var.m"
}

#line 1958 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0(
#line 1958 "state_var.m"
  MR_String hlds__make_hlds__state_var__DorC_7,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_8,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_9,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_10,
#line 1958 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
#line 1958 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17)
#line 1958 "state_var.m"
{
#line 1962 "state_var.m"
  {
#line 1962 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1962 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_12;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_13;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_14;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_15;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1962 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_22_22;
#line 1962 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_24_24;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_32_32;
#line 1962 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_36_36;

#line 1963 "state_var.m"
    {
#line 1963 "state_var.m"
      hlds__make_hlds__state_var__Name_12 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_9, hlds__make_hlds__state_var__StateVar_10);
    }
#line 1964 "state_var.m"
    {
#line 1964 "state_var.m"
      hlds__make_hlds__state_var__V_24_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__DorC_7, hlds__make_hlds__state_var__Name_12);
    }
#line 1964 "state_var.m"
    {
#line 1964 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__V_24_24);
    }
#line 1964 "state_var.m"
    {
#line 1964 "state_var.m"
      hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1964 "state_var.m"
    }
#line 1964 "state_var.m"
    {
#line 1964 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 1964 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[13])));
#line 1964 "state_var.m"
    }
#line 1964 "state_var.m"
    {
#line 1964 "state_var.m"
      hlds__make_hlds__state_var__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[29])));
#line 1964 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_13, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1964 "state_var.m"
    }
#line 1966 "state_var.m"
    {
#line 1966 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_13));
#line 1966 "state_var.m"
    }
#line 1966 "state_var.m"
    {
#line 1966 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1966 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1966 "state_var.m"
    }
#line 1966 "state_var.m"
    {
#line 1966 "state_var.m"
      hlds__make_hlds__state_var__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_14, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_8));
#line 1966 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_14, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1966 "state_var.m"
    }
#line 1967 "state_var.m"
    {
#line 1967 "state_var.m"
      hlds__make_hlds__state_var__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_14));
#line 1967 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1967 "state_var.m"
    }
#line 1967 "state_var.m"
    {
#line 1967 "state_var.m"
      hlds__make_hlds__state_var__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1967 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1967 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1967 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_36_36));
#line 1967 "state_var.m"
    }
#line 1968 "state_var.m"
    {
#line 1968 "state_var.m"
      MR_Word base;
#line 1968 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1968 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17 = base;
#line 1968 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_15));
#line 1968 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16));
#line 1968 "state_var.m"
    }
#line 1962 "state_var.m"
  }
#line 1958 "state_var.m"
}

#line 1869 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__DelayedRenamingToAdd_8,
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal0_9,
#line 1869 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_10,
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21,
#line 1869 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22,
#line 1869 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23,
#line 1869 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24)
#line 1869 "state_var.m"
{
#line 1875 "state_var.m"
  {
#line 1875 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1875 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal0_9, (MR_Integer) 0)));
#line 1875 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal0_9, (MR_Integer) 1)));
#line 1875 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalId0_15;
#line 1883 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_16;
#line 1878 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_16;

#line 1877 "state_var.m"
    {
#line 1877 "state_var.m"
      hlds__make_hlds__state_var__GoalId0_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo0_14);
    }
#line 1878 "state_var.m"
    {
#line 1878 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, ((MR_Box) (hlds__make_hlds__state_var__GoalId0_15)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_16);
    }
#line 1878 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1878 "state_var.m"
      {
#line 1878 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenaming0_16 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_16);
#line 1878 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1878 "state_var.m"
      }
#line 1883 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1880 "state_var.m"
      {
#line 1880 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenaming_17;

#line 1880 "state_var.m"
        {
#line 1880 "state_var.m"
          hlds__make_hlds__state_var__DelayedRenaming_17 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenamingToAdd_8, hlds__make_hlds__state_var__DelayedRenaming0_16);
        }
#line 1881 "state_var.m"
        {
#line 1881 "state_var.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId0_15)), ((MR_Box) (hlds__make_hlds__state_var__DelayedRenaming_17)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);
        }
#line 1882 "state_var.m"
        *hlds__make_hlds__state_var__Goal_10 = hlds__make_hlds__state_var__Goal0_9;
#line 1882 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21;
#line 1880 "state_var.m"
      }
#line 1883 "state_var.m"
    else
#line 1888 "state_var.m"
      {
#line 1888 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_18;
#line 1888 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_19;
#line 1888 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalInfo_20;

#line 1888 "state_var.m"
        {
#line 1888 "state_var.m"
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_18, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22);
        }
#line 1889 "state_var.m"
        hlds__make_hlds__state_var__GoalId_19 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_18;
#line 1890 "state_var.m"
        {
#line 1890 "state_var.m"
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_19, hlds__make_hlds__state_var__GoalInfo0_14, &hlds__make_hlds__state_var__GoalInfo_20);
        }
#line 1891 "state_var.m"
        {
#line 1891 "state_var.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_19)), ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingToAdd_8)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);
        }
#line 1892 "state_var.m"
        {
#line 1892 "state_var.m"
          MR_Word base;
#line 1892 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1892 "state_var.m"
          *hlds__make_hlds__state_var__Goal_10 = base;
#line 1892 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr_13));
#line 1892 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_20));
#line 1892 "state_var.m"
        }
#line 1888 "state_var.m"
      }
#line 1875 "state_var.m"
  }
#line 1869 "state_var.m"
}

#line 1859 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1(
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1859 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1859 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1859 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1859 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6)
#line 1859 "state_var.m"
{
#line 1859 "state_var.m"
  {
#line 1859 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 1859 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv3_Goal_10;
#line 1859 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22;
#line 1859 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24;

#line 1859 "state_var.m"
    {
#line 1859 "state_var.m"
      hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv3_Goal_10, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_5), &hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24);
    }
#line 1859 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv3_Goal_10));
#line 1859 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22));
#line 1859 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24));
#line 1859 "state_var.m"
  }
#line 1859 "state_var.m"
}

#line 1846 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(
#line 1846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal_7,
#line 1846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Conjuncts_8,
#line 1846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16,
#line 1846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17,
#line 1846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18,
#line 1846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19)
#line 1846 "state_var.m"
{
#line 1852 "state_var.m"
  {
#line 1852 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1852 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_7, (MR_Integer) 0)));
#line 1852 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_7, (MR_Integer) 1)));
#line 1865 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Conjuncts0_13;
#line 1856 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;

#line 1856 "state_var.m"
    hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1856 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1856 "state_var.m"
      {
#line 1856 "state_var.m"
        hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 1)));
#line 1856 "state_var.m"
        hlds__make_hlds__state_var__Conjuncts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 2)));
#line 1856 "state_var.m"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_20_20 == (MR_Integer) 0);
#line 1856 "state_var.m"
      }
#line 1865 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1857 "state_var.m"
      {
#line 1857 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_14;
#line 1862 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalDelayedRenaming_15;
#line 1858 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15;

#line 1857 "state_var.m"
        {
#line 1857 "state_var.m"
          hlds__make_hlds__state_var__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo_12);
        }
#line 1858 "state_var.m"
        {
#line 1858 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18, ((MR_Box) (hlds__make_hlds__state_var__GoalId_14)), &hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
        }
#line 1858 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1858 "state_var.m"
          {
#line 1858 "state_var.m"
            hlds__make_hlds__state_var__GoalDelayedRenaming_15 = ((MR_Word) hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
#line 1858 "state_var.m"
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1858 "state_var.m"
          }
#line 1862 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1859 "state_var.m"
          {
#line 1859 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_33_33;
#line 1859 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1859 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17;
#line 1859 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19;

#line 1859 "state_var.m"
            {
#line 1859 "state_var.m"
              hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1859 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
#line 1859 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1));
#line 1859 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1859 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__state_var__GoalDelayedRenaming_15));
#line 1859 "state_var.m"
            }
#line 5969 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1859 "state_var.m"
            {
#line 1859 "state_var.m"
              mercury__list__map_foldl2_7_p_0(hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__TypeCtorInfo_33_33, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], hlds__make_hlds__state_var__V_21_21, hlds__make_hlds__state_var__Conjuncts0_13, hlds__make_hlds__state_var__Conjuncts_8, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16)), &hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18)), &hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19);
            }
#line 1859 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = ((MR_Word) hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17);
#line 1859 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = ((MR_Word) hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19);
#line 1859 "state_var.m"
          }
#line 1862 "state_var.m"
        else
#line 1863 "state_var.m"
          {
#line 1863 "state_var.m"
            *hlds__make_hlds__state_var__Conjuncts_8 = hlds__make_hlds__state_var__Conjuncts0_13;
#line 1863 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18;
#line 1863 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16;
#line 1863 "state_var.m"
          }
#line 1857 "state_var.m"
      }
#line 1865 "state_var.m"
    else
#line 1866 "state_var.m"
      {
#line 1866 "state_var.m"
        {
#line 1866 "state_var.m"
          MR_Word base;
#line 1866 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "state_var.m"
          *hlds__make_hlds__state_var__Conjuncts_8 = base;
#line 1866 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_7));
#line 1866 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1866 "state_var.m"
        }
#line 1866 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18;
#line 1866 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16;
#line 1866 "state_var.m"
      }
#line 1852 "state_var.m"
  }
#line 1846 "state_var.m"
}

#line 1774 "state_var.m"
static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
#line 1774 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_4,
#line 1774 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Status_5)
#line 1774 "state_var.m"
{
#line 1778 "state_var.m"
  {
#line 1778 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1778 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ProgVar_6;

#line 1778 "state_var.m"
    if ((hlds__make_hlds__state_var__LocKind_4 == (MR_Integer) 1))
#line 1793 "state_var.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) == (MR_mktag((MR_Integer) 1))))
#line 1796 "state_var.m"
        hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)));
#line 1793 "state_var.m"
      else
#line 1793 "state_var.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) == (MR_mktag((MR_Integer) 2)))) || ((hlds__make_hlds__state_var__Status_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 1800 "state_var.m"
          {
#line 1801 "state_var.m"
            {
#line 1801 "state_var.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
            }
#line 1800 "state_var.m"
          }
#line 1793 "state_var.m"
        else
#line 1793 "state_var.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1792 "state_var.m"
            hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));
#line 1793 "state_var.m"
          else
#line 1794 "state_var.m"
            {
#line 1794 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));

#line 1794 "state_var.m"
              hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 2)));
#line 1794 "state_var.m"
            }
#line 1778 "state_var.m"
    else
#line 1781 "state_var.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1780 "state_var.m"
        hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));
#line 1781 "state_var.m"
      else
#line 1786 "state_var.m"
        {
#line 1787 "state_var.m"
          {
#line 1787 "state_var.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
          }
#line 1786 "state_var.m"
        }
#line 1778 "state_var.m"
    return hlds__make_hlds__state_var__ProgVar_6;
#line 1778 "state_var.m"
  }
#line 1774 "state_var.m"
}

#line 1310 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_24,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVar_25,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_26,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterCond_27,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_28,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterElse_29,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StatusAfterITE_30,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86,
#line 1310 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87,
#line 1310 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88)
#line 1310 "state_var.m"
{
#line 1324 "state_var.m"
  {
#line 1324 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1356 "state_var.m"
    {
#line 1356 "state_var.m"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterCond_27, hlds__make_hlds__state_var__StatusBefore_26);
    }
#line 1448 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1400 "state_var.m"
      {
#line 1358 "state_var.m"
        {
#line 1358 "state_var.m"
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterThen_28, hlds__make_hlds__state_var__StatusAfterCond_27);
        }
#line 1400 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1363 "state_var.m"
          {
#line 1360 "state_var.m"
            {
#line 1360 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1363 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1362 "state_var.m"
              {
#line 1362 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1362 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1362 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1362 "state_var.m"
              }
#line 1363 "state_var.m"
            else
#line 1372 "state_var.m"
              if ((hlds__make_hlds__state_var__StatusBefore_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "state_var.m"
                {
#line 1373 "state_var.m"
                  MR_String hlds__make_hlds__state_var__SVarName_43;
#line 1373 "state_var.m"
                  MR_String hlds__make_hlds__state_var__V_114_114;

#line 1374 "state_var.m"
                  {
#line 1374 "state_var.m"
                    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_43);
                  }
#line 1376 "state_var.m"
                  {
#line 1376 "state_var.m"
                    hlds__make_hlds__state_var__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_43);
                  }
#line 1375 "state_var.m"
                  {
#line 1375 "state_var.m"
                    MR_Word base;
#line 1375 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = base;
#line 1375 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_114_114));
#line 1375 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85));
#line 1375 "state_var.m"
                  }
#line 1381 "state_var.m"
                  *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
#line 1381 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1373 "state_var.m"
                }
#line 1372 "state_var.m"
              else
#line 1372 "state_var.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 2))))
#line 1383 "state_var.m"
                  {
#line 1389 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1389 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1389 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1383 "state_var.m"
                  }
#line 1372 "state_var.m"
                else
#line 1372 "state_var.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1366 "state_var.m"
                    {
#line 1366 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__VarBefore_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
#line 1366 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__VarAfterElse_41;
#line 1366 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__CopyGoal_42;

#line 1367 "state_var.m"
                      {
#line 1367 "state_var.m"
                        hlds__make_hlds__state_var__VarAfterElse_41 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                      }
#line 1369 "state_var.m"
                      {
#line 1369 "state_var.m"
                        hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_40, hlds__make_hlds__state_var__VarAfterElse_41, &hlds__make_hlds__state_var__CopyGoal_42);
                      }
#line 1370 "state_var.m"
                      {
#line 1370 "state_var.m"
                        MR_Word base;
#line 1370 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = base;
#line 1370 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_42));
#line 1370 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77));
#line 1370 "state_var.m"
                      }
#line 1371 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
#line 1371 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1366 "state_var.m"
                    }
#line 1372 "state_var.m"
                  else
#line 1393 "state_var.m"
                    {
#line 1397 "state_var.m"
                      {
#line 1397 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 2)");
#line 1397 "state_var.m"
                        return;
                      }
#line 1393 "state_var.m"
                    }
#line 1397 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1397 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1397 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1363 "state_var.m"
          }
#line 1400 "state_var.m"
        else
#line 1438 "state_var.m"
          {
#line 1402 "state_var.m"
            {
#line 1402 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1438 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1411 "state_var.m"
              {
#line 1411 "state_var.m"
                if ((hlds__make_hlds__state_var__StatusBefore_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "state_var.m"
                  {
#line 1412 "state_var.m"
                    MR_String hlds__make_hlds__state_var__V_121_121;
#line 1412 "state_var.m"
                    MR_String hlds__make_hlds__state_var__SVarName_151;

#line 1413 "state_var.m"
                    {
#line 1413 "state_var.m"
                      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_151);
                    }
#line 1415 "state_var.m"
                    {
#line 1415 "state_var.m"
                      hlds__make_hlds__state_var__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_151);
                    }
#line 1414 "state_var.m"
                    {
#line 1414 "state_var.m"
                      MR_Word base;
#line 1414 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
#line 1414 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_121_121));
#line 1414 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
#line 1414 "state_var.m"
                    }
#line 1420 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1420 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1412 "state_var.m"
                  }
#line 1411 "state_var.m"
                else
#line 1411 "state_var.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 2))))
#line 1422 "state_var.m"
                    {
#line 1428 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1428 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1428 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1422 "state_var.m"
                    }
#line 1411 "state_var.m"
                  else
#line 1411 "state_var.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1405 "state_var.m"
                      {
#line 1405 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarAfterThen_50;
#line 1405 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarBefore_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
#line 1405 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__CopyGoal_150;

#line 1406 "state_var.m"
                        {
#line 1406 "state_var.m"
                          hlds__make_hlds__state_var__VarAfterThen_50 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                        }
#line 1408 "state_var.m"
                        {
#line 1408 "state_var.m"
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_149, hlds__make_hlds__state_var__VarAfterThen_50, &hlds__make_hlds__state_var__CopyGoal_150);
                        }
#line 1409 "state_var.m"
                        {
#line 1409 "state_var.m"
                          MR_Word base;
#line 1409 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
#line 1409 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_150));
#line 1409 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
#line 1409 "state_var.m"
                        }
#line 1410 "state_var.m"
                        *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1410 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1405 "state_var.m"
                      }
#line 1411 "state_var.m"
                    else
#line 1432 "state_var.m"
                      {
#line 1436 "state_var.m"
                        {
#line 1436 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 3)");
#line 1436 "state_var.m"
                          return;
                        }
#line 1432 "state_var.m"
                      }
#line 1436 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1411 "state_var.m"
              }
#line 1438 "state_var.m"
            else
#line 1441 "state_var.m"
              {
#line 1441 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_125_125;
#line 1441 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterElse_158;
#line 1441 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterThen_159;

#line 1440 "state_var.m"
                {
#line 1440 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterThen_159 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                }
#line 1442 "state_var.m"
                {
#line 1442 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterElse_158 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
#line 1444 "state_var.m"
                {
#line 1444 "state_var.m"
                  hlds__make_hlds__state_var__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterElse_158));
#line 1444 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterThen_159));
#line 1444 "state_var.m"
                }
#line 1444 "state_var.m"
                {
#line 1444 "state_var.m"
                  MR_Word base;
#line 1444 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = base;
#line 1444 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_125_125));
#line 1444 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83));
#line 1444 "state_var.m"
                }
#line 1445 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1445 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1445 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1441 "state_var.m"
              }
#line 1445 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1445 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1438 "state_var.m"
          }
#line 1445 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
#line 1445 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1400 "state_var.m"
      }
#line 1448 "state_var.m"
    else
#line 1509 "state_var.m"
      {
#line 1450 "state_var.m"
        {
#line 1450 "state_var.m"
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterThen_28, hlds__make_hlds__state_var__StatusAfterCond_27);
        }
#line 1509 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1499 "state_var.m"
          {
#line 1452 "state_var.m"
            {
#line 1452 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1499 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1466 "state_var.m"
              if ((hlds__make_hlds__state_var__StatusBefore_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "state_var.m"
                {
#line 1467 "state_var.m"
                  MR_String hlds__make_hlds__state_var__V_130_130;
#line 1467 "state_var.m"
                  MR_String hlds__make_hlds__state_var__SVarName_169;
#line 1467 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__FinalVar_170;
#line 1467 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__VarAfterCond_171;
#line 1467 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__NeckCopyGoal_172;

#line 1468 "state_var.m"
                  {
#line 1468 "state_var.m"
                    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_169);
                  }
#line 1470 "state_var.m"
                  {
#line 1470 "state_var.m"
                    hlds__make_hlds__state_var__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_169);
                  }
#line 1469 "state_var.m"
                  {
#line 1469 "state_var.m"
                    MR_Word base;
#line 1469 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
#line 1469 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_130_130));
#line 1469 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
#line 1469 "state_var.m"
                  }
#line 1475 "state_var.m"
                  {
#line 1475 "state_var.m"
                    hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__SVar_25, (MR_Integer) 1, &hlds__make_hlds__state_var__FinalVar_170, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74);
                  }
#line 1477 "state_var.m"
                  {
#line 1477 "state_var.m"
                    hlds__make_hlds__state_var__VarAfterCond_171 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                  }
#line 1479 "state_var.m"
                  {
#line 1479 "state_var.m"
                    hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_171, hlds__make_hlds__state_var__FinalVar_170, &hlds__make_hlds__state_var__NeckCopyGoal_172);
                  }
#line 1480 "state_var.m"
                  {
#line 1480 "state_var.m"
                    MR_Word base;
#line 1480 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
#line 1480 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NeckCopyGoal_172));
#line 1480 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
#line 1480 "state_var.m"
                  }
#line 1481 "state_var.m"
                  {
#line 1481 "state_var.m"
                    MR_Word base;
#line 1481 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = base;
#line 1481 "state_var.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1481 "state_var.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalVar_170));
#line 1481 "state_var.m"
                  }
#line 1481 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1467 "state_var.m"
                }
#line 1466 "state_var.m"
              else
#line 1466 "state_var.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 2))))
#line 1483 "state_var.m"
                  {
#line 1489 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1489 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1489 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
#line 1489 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1489 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1483 "state_var.m"
                  }
#line 1466 "state_var.m"
                else
#line 1466 "state_var.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1455 "state_var.m"
                    {
#line 1455 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__FinalVar_57;
#line 1455 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__VarAfterCond_58;
#line 1455 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__NeckCopyGoal_59;
#line 1455 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__ElseCopyGoal_60;
#line 1455 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__VarBefore_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));

#line 1456 "state_var.m"
                      {
#line 1456 "state_var.m"
                        hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__SVar_25, (MR_Integer) 1, &hlds__make_hlds__state_var__FinalVar_57, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74);
                      }
#line 1458 "state_var.m"
                      {
#line 1458 "state_var.m"
                        hlds__make_hlds__state_var__VarAfterCond_58 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                      }
#line 1461 "state_var.m"
                      {
#line 1461 "state_var.m"
                        hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_58, hlds__make_hlds__state_var__FinalVar_57, &hlds__make_hlds__state_var__NeckCopyGoal_59);
                      }
#line 1462 "state_var.m"
                      {
#line 1462 "state_var.m"
                        MR_Word base;
#line 1462 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
#line 1462 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NeckCopyGoal_59));
#line 1462 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
#line 1462 "state_var.m"
                      }
#line 1463 "state_var.m"
                      {
#line 1463 "state_var.m"
                        hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_168, hlds__make_hlds__state_var__FinalVar_57, &hlds__make_hlds__state_var__ElseCopyGoal_60);
                      }
#line 1464 "state_var.m"
                      {
#line 1464 "state_var.m"
                        MR_Word base;
#line 1464 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
#line 1464 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__ElseCopyGoal_60));
#line 1464 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
#line 1464 "state_var.m"
                      }
#line 1465 "state_var.m"
                      {
#line 1465 "state_var.m"
                        MR_Word base;
#line 1465 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "state_var.m"
                        *hlds__make_hlds__state_var__StatusAfterITE_30 = base;
#line 1465 "state_var.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1465 "state_var.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalVar_57));
#line 1465 "state_var.m"
                      }
#line 1465 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1455 "state_var.m"
                    }
#line 1466 "state_var.m"
                  else
#line 1493 "state_var.m"
                    {
#line 1497 "state_var.m"
                      {
#line 1497 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 5)");
#line 1497 "state_var.m"
                        return;
                      }
#line 1493 "state_var.m"
                    }
#line 1499 "state_var.m"
            else
#line 1502 "state_var.m"
              {
#line 1502 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterElse_175;
#line 1502 "state_var.m"
                MR_Word hlds__make_hlds__state_var__CopyGoal_176;
#line 1502 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterCond_177;

#line 1501 "state_var.m"
                {
#line 1501 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterCond_177 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                }
#line 1503 "state_var.m"
                {
#line 1503 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterElse_175 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
#line 1505 "state_var.m"
                {
#line 1505 "state_var.m"
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_177, hlds__make_hlds__state_var__VarAfterElse_175, &hlds__make_hlds__state_var__CopyGoal_176);
                }
#line 1506 "state_var.m"
                {
#line 1506 "state_var.m"
                  MR_Word base;
#line 1506 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
#line 1506 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_176));
#line 1506 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
#line 1506 "state_var.m"
                }
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1502 "state_var.m"
              }
#line 1507 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1499 "state_var.m"
          }
#line 1509 "state_var.m"
        else
#line 1548 "state_var.m"
          {
#line 1511 "state_var.m"
            {
#line 1511 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1548 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1520 "state_var.m"
              {
#line 1520 "state_var.m"
                if ((hlds__make_hlds__state_var__StatusBefore_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1521 "state_var.m"
                  {
#line 1521 "state_var.m"
                    MR_String hlds__make_hlds__state_var__V_144_144;
#line 1521 "state_var.m"
                    MR_String hlds__make_hlds__state_var__SVarName_189;

#line 1522 "state_var.m"
                    {
#line 1522 "state_var.m"
                      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_189);
                    }
#line 1524 "state_var.m"
                    {
#line 1524 "state_var.m"
                      hlds__make_hlds__state_var__V_144_144 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_189);
                    }
#line 1523 "state_var.m"
                    {
#line 1523 "state_var.m"
                      MR_Word base;
#line 1523 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1523 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
#line 1523 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_144_144));
#line 1523 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
#line 1523 "state_var.m"
                    }
#line 1529 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1529 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1521 "state_var.m"
                  }
#line 1520 "state_var.m"
                else
#line 1520 "state_var.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 2))))
#line 1531 "state_var.m"
                    {
#line 1537 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1537 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1537 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1531 "state_var.m"
                    }
#line 1520 "state_var.m"
                  else
#line 1520 "state_var.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1514 "state_var.m"
                      {
#line 1514 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarBefore_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
#line 1514 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__CopyGoal_187;
#line 1514 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarAfterThen_188;

#line 1515 "state_var.m"
                        {
#line 1515 "state_var.m"
                          hlds__make_hlds__state_var__VarAfterThen_188 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                        }
#line 1517 "state_var.m"
                        {
#line 1517 "state_var.m"
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_186, hlds__make_hlds__state_var__VarAfterThen_188, &hlds__make_hlds__state_var__CopyGoal_187);
                        }
#line 1518 "state_var.m"
                        {
#line 1518 "state_var.m"
                          MR_Word base;
#line 1518 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
#line 1518 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_187));
#line 1518 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
#line 1518 "state_var.m"
                        }
#line 1519 "state_var.m"
                        *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1519 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1514 "state_var.m"
                      }
#line 1520 "state_var.m"
                    else
#line 1541 "state_var.m"
                      {
#line 1546 "state_var.m"
                        {
#line 1546 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 7)");
#line 1546 "state_var.m"
                          return;
                        }
#line 1541 "state_var.m"
                      }
#line 1546 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1520 "state_var.m"
              }
#line 1548 "state_var.m"
            else
#line 1551 "state_var.m"
              {
#line 1551 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_148_148;
#line 1551 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterElse_198;
#line 1551 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterThen_199;

#line 1550 "state_var.m"
                {
#line 1550 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterThen_199 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                }
#line 1552 "state_var.m"
                {
#line 1552 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterElse_198 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
#line 1554 "state_var.m"
                {
#line 1554 "state_var.m"
                  hlds__make_hlds__state_var__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1554 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterElse_198));
#line 1554 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_148_148, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterThen_199));
#line 1554 "state_var.m"
                }
#line 1554 "state_var.m"
                {
#line 1554 "state_var.m"
                  MR_Word base;
#line 1554 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = base;
#line 1554 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_148_148));
#line 1554 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83));
#line 1554 "state_var.m"
                }
#line 1555 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1555 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1555 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1551 "state_var.m"
              }
#line 1555 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
#line 1555 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1548 "state_var.m"
          }
#line 1555 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1555 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1509 "state_var.m"
      }
#line 1555 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81;
#line 1324 "state_var.m"
  }
#line 1310 "state_var.m"
}

#line 1277 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
#line 1277 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1277 "state_var.m"
{
#line 1277 "state_var.m"
  {
#line 1277 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1277 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1277 "state_var.m"
    {
#line 1277 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1277 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1277 "state_var.m"
  }
#line 1277 "state_var.m"
}

#line 1250 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_1,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__QuantStateVars_2,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_4,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_5,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_6,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_7,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23,
#line 1250 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24,
#line 1250 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25)
#line 1250 "state_var.m"
{
#line 1263 "state_var.m"
  while (MR_TRUE)
#line 1263 "state_var.m"
    {
#line 1263 "state_var.m"
      /* tailcall optimized into a loop */
#line 1263 "state_var.m"
      {
#line 1263 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 1263 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "state_var.m"
          {
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10;
#line 1263 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8;
#line 1263 "state_var.m"
          }
#line 1263 "state_var.m"
        else
#line 1270 "state_var.m"
          {
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_130_130 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_131_131 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVars_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusBefore_76;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterCond_77;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterThen_78;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterElse_79;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterITE_80;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111;
#line 1270 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120;
#line 1271 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_StatusBefore_76;
#line 1272 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv1_StatusAfterCond_77;
#line 1273 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv2_StatusAfterThen_78;
#line 1274 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv3_StatusAfterElse_79;

#line 1271 "state_var.m"
            {
#line 1271 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapBefore_4, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv0_StatusBefore_76);
            }
#line 1271 "state_var.m"
            hlds__make_hlds__state_var__StatusBefore_76 = ((MR_Word) hlds__make_hlds__state_var__conv0_StatusBefore_76);
#line 1272 "state_var.m"
            {
#line 1272 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterCond_5, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv1_StatusAfterCond_77);
            }
#line 1272 "state_var.m"
            hlds__make_hlds__state_var__StatusAfterCond_77 = ((MR_Word) hlds__make_hlds__state_var__conv1_StatusAfterCond_77);
#line 1273 "state_var.m"
            {
#line 1273 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterThen_6, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv2_StatusAfterThen_78);
            }
#line 1273 "state_var.m"
            hlds__make_hlds__state_var__StatusAfterThen_78 = ((MR_Word) hlds__make_hlds__state_var__conv2_StatusAfterThen_78);
#line 1274 "state_var.m"
            {
#line 1274 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterElse_7, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv3_StatusAfterElse_79);
            }
#line 1274 "state_var.m"
            hlds__make_hlds__state_var__StatusAfterElse_79 = ((MR_Word) hlds__make_hlds__state_var__conv3_StatusAfterElse_79);
#line 1276 "state_var.m"
            {
#line 1276 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), hlds__make_hlds__state_var__QuantStateVars_2);
            }
#line 1289 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1278 "state_var.m"
              {
#line 1278 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_99_99;

#line 1277 "state_var.m"
                {
#line 1277 "state_var.m"
                  hlds__make_hlds__state_var__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1]));
#line 1277 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1));
#line 1277 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1277 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 3) = ((MR_Box) (hlds__make_hlds__state_var__StatusBefore_76));
#line 1277 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 4) = ((MR_Box) (hlds__make_hlds__state_var__StatusAfterThen_78));
#line 1277 "state_var.m"
                }
#line 1277 "state_var.m"
                {
#line 1277 "state_var.m"
                  mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_99_99, (MR_String) "hlds.make_hlds.state_var", (MR_String) "state var shadowed in if-then-else is nevertheless updated");
                }
#line 1285 "state_var.m"
                {
#line 1285 "state_var.m"
                  hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(hlds__make_hlds__state_var__LocKind_1, hlds__make_hlds__state_var__SVar_61, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterElse_79, &hlds__make_hlds__state_var__StatusAfterITE_80, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12, &hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105, hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106, hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107, hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108, hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109, hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110, hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111);
                }
#line 1278 "state_var.m"
              }
#line 1289 "state_var.m"
            else
#line 1298 "state_var.m"
              {
#line 1298 "state_var.m"
                hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(hlds__make_hlds__state_var__LocKind_1, hlds__make_hlds__state_var__SVar_61, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterCond_77, hlds__make_hlds__state_var__StatusAfterThen_78, hlds__make_hlds__state_var__StatusAfterElse_79, &hlds__make_hlds__state_var__StatusAfterITE_80, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12, &hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105, hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106, hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107, hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108, hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109, hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110, hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111);
              }
#line 1303 "state_var.m"
            {
#line 1303 "state_var.m"
              mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfterITE_80)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120);
            }
#line 1304 "state_var.m"
            /* direct tailcall eliminated */
#line 1304 "state_var.m"
            {
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3 = hlds__make_hlds__state_var__SVars_62;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0__tmp_copy_8 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0__tmp_copy_10 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0__tmp_copy_12 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0__tmp_copy_14 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0__tmp_copy_16 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0__tmp_copy_18 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0__tmp_copy_20 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0__tmp_copy_22 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110;
#line 1304 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0__tmp_copy_24 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111;

#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0__tmp_copy_24;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0__tmp_copy_22;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0__tmp_copy_20;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0__tmp_copy_18;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0__tmp_copy_16;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0__tmp_copy_14;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0__tmp_copy_12;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0__tmp_copy_10;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0__tmp_copy_8;
#line 1304 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__3_3 = hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3;
#line 1304 "state_var.m"
            }
#line 1304 "state_var.m"
            continue;
#line 1270 "state_var.m"
          }
#line 1263 "state_var.m"
      }
#line 1263 "state_var.m"
      break;
#line 1263 "state_var.m"
    }
#line 1250 "state_var.m"
}

#line 1137 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
#line 1137 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FromVar_4,
#line 1137 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ToVar_5,
#line 1137 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__CopyGoal_6)
#line 1137 "state_var.m"
{
#line 1139 "state_var.m"
  {
#line 1139 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1139 "state_var.m"
    MR_Word hlds__make_hlds__state_var__CopyGoal0_7;
#line 1139 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_8_8;
#line 1139 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_9_9;

#line 1158 "state_var.m"
    {
#line 1158 "state_var.m"
      hlds__make_hlds__state_var__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__state_var__FromVar_4));
#line 1158 "state_var.m"
    }
#line 1158 "state_var.m"
    {
#line 1158 "state_var.m"
      hlds__make_hlds__state_var__V_9_9 = mercury__term__context_init_0_f_0();
    }
#line 1158 "state_var.m"
    {
#line 1158 "state_var.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__state_var__ToVar_5, hlds__make_hlds__state_var__V_8_8, hlds__make_hlds__state_var__V_9_9, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_4[3]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoal0_7);
    }
#line 1160 "state_var.m"
    {
#line 1160 "state_var.m"
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, hlds__make_hlds__state_var__CopyGoal0_7, hlds__make_hlds__state_var__CopyGoal_6);
#line 1160 "state_var.m"
      return;
    }
#line 1139 "state_var.m"
  }
#line 1137 "state_var.m"
}

#line 1058 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
#line 1058 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1058 "state_var.m"
{
#line 1058 "state_var.m"
  {
#line 1058 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1058 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1058 "state_var.m"
    {
#line 1058 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1058 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1058 "state_var.m"
  }
#line 1058 "state_var.m"
}

#line 1044 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_2,
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_3,
#line 1044 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_4,
#line 1044 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__5_5,
#line 1044 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__6_6,
#line 1044 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__7_7)
#line 1044 "state_var.m"
{
#line 1049 "state_var.m"
  {
#line 1049 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1049 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "state_var.m"
      {
#line 1049 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "state_var.m"
      }
#line 1049 "state_var.m"
    else
#line 1051 "state_var.m"
      {
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_85_85;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_86_86;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Change_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Changes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__CopyGoalsTail_20;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__RenamesTail_21;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar_22;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__BeforeStatus_24;
#line 1051 "state_var.m"
        MR_Word hlds__make_hlds__state_var__AfterArmStatus_25;
#line 1055 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv0_BeforeStatus_24;
#line 1056 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv1_AfterArmStatus_25;

#line 1052 "state_var.m"
        {
#line 1052 "state_var.m"
          hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(hlds__make_hlds__state_var__Changes_12, hlds__make_hlds__state_var__StatusMapBefore_2, hlds__make_hlds__state_var__StatusMapAfterArm_3, hlds__make_hlds__state_var__VarSet_4, &hlds__make_hlds__state_var__UninitVarNamesTail_19, &hlds__make_hlds__state_var__CopyGoalsTail_20, &hlds__make_hlds__state_var__RenamesTail_21);
        }
#line 1054 "state_var.m"
        hlds__make_hlds__state_var__StateVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Change_11, (MR_Integer) 0)));
#line 1054 "state_var.m"
        hlds__make_hlds__state_var__AfterAllArmsStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Change_11, (MR_Integer) 1)));
#line 7433 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeInfo_85_85 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 7435 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeCtorInfo_86_86 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 1055 "state_var.m"
        {
#line 1055 "state_var.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_85_85, hlds__make_hlds__state_var__TypeCtorInfo_86_86, hlds__make_hlds__state_var__StatusMapBefore_2, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv0_BeforeStatus_24);
        }
#line 1055 "state_var.m"
        hlds__make_hlds__state_var__BeforeStatus_24 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeStatus_24);
#line 1056 "state_var.m"
        {
#line 1056 "state_var.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_85_85, hlds__make_hlds__state_var__TypeCtorInfo_86_86, hlds__make_hlds__state_var__StatusMapAfterArm_3, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv1_AfterArmStatus_25);
        }
#line 1056 "state_var.m"
        hlds__make_hlds__state_var__AfterArmStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv1_AfterArmStatus_25);
#line 1057 "state_var.m"
        {
#line 1057 "state_var.m"
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__AfterArmStatus_25, hlds__make_hlds__state_var__BeforeStatus_24);
        }
#line 1101 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1059 "state_var.m"
          {
#line 1059 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_55_55;

#line 1058 "state_var.m"
            {
#line 1058 "state_var.m"
              hlds__make_hlds__state_var__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1]));
#line 1058 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1));
#line 1058 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1058 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__state_var__AfterAllArmsStatus_23));
#line 1058 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 4) = ((MR_Box) (hlds__make_hlds__state_var__AfterArmStatus_25));
#line 1058 "state_var.m"
            }
#line 1058 "state_var.m"
            {
#line 1058 "state_var.m"
              mercury__require__expect_not_3_p_0(hlds__make_hlds__state_var__V_55_55, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = AfterAllArmsStatus");
            }
#line 1084 "state_var.m"
            if ((hlds__make_hlds__state_var__BeforeStatus_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "state_var.m"
              {
#line 1085 "state_var.m"
                MR_String hlds__make_hlds__state_var__Name_37;
#line 1085 "state_var.m"
                MR_String hlds__make_hlds__state_var__UninitVarName_38;

#line 1086 "state_var.m"
                {
#line 1086 "state_var.m"
                  mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_4, hlds__make_hlds__state_var__StateVar_22, &hlds__make_hlds__state_var__Name_37);
                }
#line 1087 "state_var.m"
                {
#line 1087 "state_var.m"
                  hlds__make_hlds__state_var__UninitVarName_38 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_37);
                }
#line 1088 "state_var.m"
                *hlds__make_hlds__state_var__HeadVar__6_6 = hlds__make_hlds__state_var__CopyGoalsTail_20;
#line 1089 "state_var.m"
                {
#line 1089 "state_var.m"
                  MR_Word base;
#line 1089 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__5_5 = base;
#line 1089 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__UninitVarName_38));
#line 1089 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__UninitVarNamesTail_19));
#line 1089 "state_var.m"
                }
#line 1090 "state_var.m"
                *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1085 "state_var.m"
              }
#line 1084 "state_var.m"
            else
#line 1084 "state_var.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_24)) == (MR_mktag((MR_Integer) 2))))
#line 1068 "state_var.m"
                {
#line 1068 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__BeforeVar_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 0)));
#line 1067 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 2)));

#line 1075 "state_var.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1070 "state_var.m"
                    {
#line 1070 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__AfterAllVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));
#line 1070 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__CopyGoal_90;

#line 1071 "state_var.m"
                      {
#line 1071 "state_var.m"
                        hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__BeforeVar_99, hlds__make_hlds__state_var__AfterAllVar_89, &hlds__make_hlds__state_var__CopyGoal_90);
                      }
#line 1072 "state_var.m"
                      {
#line 1072 "state_var.m"
                        MR_Word base;
#line 1072 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "state_var.m"
                        *hlds__make_hlds__state_var__HeadVar__6_6 = base;
#line 1072 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_90));
#line 1072 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoalsTail_20));
#line 1072 "state_var.m"
                      }
#line 1073 "state_var.m"
                      *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1074 "state_var.m"
                      *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1070 "state_var.m"
                    }
#line 1075 "state_var.m"
                  else
#line 1080 "state_var.m"
                    {
#line 1081 "state_var.m"
                      {
#line 1081 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1081 "state_var.m"
                        return;
                      }
#line 1080 "state_var.m"
                    }
#line 1068 "state_var.m"
                }
#line 1084 "state_var.m"
              else
#line 1084 "state_var.m"
                if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1068 "state_var.m"
                  {
#line 1068 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__BeforeVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 1)));

#line 1075 "state_var.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1070 "state_var.m"
                      {
#line 1070 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__AfterAllVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));
#line 1070 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__CopyGoal_30;

#line 1071 "state_var.m"
                        {
#line 1071 "state_var.m"
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__BeforeVar_26, hlds__make_hlds__state_var__AfterAllVar_29, &hlds__make_hlds__state_var__CopyGoal_30);
                        }
#line 1072 "state_var.m"
                        {
#line 1072 "state_var.m"
                          MR_Word base;
#line 1072 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "state_var.m"
                          *hlds__make_hlds__state_var__HeadVar__6_6 = base;
#line 1072 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_30));
#line 1072 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoalsTail_20));
#line 1072 "state_var.m"
                        }
#line 1073 "state_var.m"
                        *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1074 "state_var.m"
                        *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1070 "state_var.m"
                      }
#line 1075 "state_var.m"
                    else
#line 1080 "state_var.m"
                      {
#line 1081 "state_var.m"
                        {
#line 1081 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1081 "state_var.m"
                          return;
                        }
#line 1080 "state_var.m"
                      }
#line 1068 "state_var.m"
                  }
#line 1084 "state_var.m"
                else
#line 1094 "state_var.m"
                  {
#line 1099 "state_var.m"
                    {
#line 1099 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
#line 1099 "state_var.m"
                      return;
                    }
#line 1094 "state_var.m"
                  }
#line 1059 "state_var.m"
          }
#line 1101 "state_var.m"
        else
#line 1122 "state_var.m"
          if ((hlds__make_hlds__state_var__AfterArmStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1129 "state_var.m"
            {
#line 1130 "state_var.m"
              {
#line 1130 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
#line 1130 "state_var.m"
                return;
              }
#line 1129 "state_var.m"
            }
#line 1122 "state_var.m"
          else
#line 1122 "state_var.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__state_var__AfterArmStatus_25)) == (MR_mktag((MR_Integer) 2))))
#line 1123 "state_var.m"
              {
#line 1124 "state_var.m"
                {
#line 1124 "state_var.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_ro");
#line 1124 "state_var.m"
                  return;
                }
#line 1123 "state_var.m"
              }
#line 1122 "state_var.m"
            else
#line 1122 "state_var.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__state_var__AfterArmStatus_25)) == (MR_mktag((MR_Integer) 1))))
#line 1132 "state_var.m"
                {
#line 1133 "state_var.m"
                  {
#line 1133 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
#line 1133 "state_var.m"
                    return;
                  }
#line 1132 "state_var.m"
                }
#line 1122 "state_var.m"
              else
#line 1122 "state_var.m"
                if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__AfterArmStatus_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterArmStatus_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1103 "state_var.m"
                  {
#line 1103 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__AfterArmVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterArmStatus_25, (MR_Integer) 1)));

#line 1113 "state_var.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1105 "state_var.m"
                      {
#line 1105 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__AfterAllVar_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));

#line 1106 "state_var.m"
                        *hlds__make_hlds__state_var__HeadVar__6_6 = hlds__make_hlds__state_var__CopyGoalsTail_20;
#line 1107 "state_var.m"
                        *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1108 "state_var.m"
                        {
#line 1108 "state_var.m"
                          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__AfterArmVar_42)), ((MR_Box) (hlds__make_hlds__state_var__AfterAllVar_81)));
                        }
#line 1110 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1109 "state_var.m"
                          *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1110 "state_var.m"
                        else
#line 1111 "state_var.m"
                          {
#line 1111 "state_var.m"
                            MR_Word hlds__make_hlds__state_var__V_80_80;

#line 1111 "state_var.m"
                            {
#line 1111 "state_var.m"
                              hlds__make_hlds__state_var__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "state_var.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__state_var__AfterArmVar_42));
#line 1111 "state_var.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__state_var__AfterAllVar_81));
#line 1111 "state_var.m"
                            }
#line 1111 "state_var.m"
                            {
#line 1111 "state_var.m"
                              MR_Word base;
#line 1111 "state_var.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "state_var.m"
                              *hlds__make_hlds__state_var__HeadVar__7_7 = base;
#line 1111 "state_var.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_80_80));
#line 1111 "state_var.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__RenamesTail_21));
#line 1111 "state_var.m"
                            }
#line 1111 "state_var.m"
                          }
#line 1105 "state_var.m"
                      }
#line 1113 "state_var.m"
                    else
#line 1118 "state_var.m"
                      {
#line 1119 "state_var.m"
                        {
#line 1119 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
#line 1119 "state_var.m"
                          return;
                        }
#line 1118 "state_var.m"
                      }
#line 1103 "state_var.m"
                  }
#line 1122 "state_var.m"
                else
#line 1126 "state_var.m"
                  {
#line 1127 "state_var.m"
                    {
#line 1127 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_updated");
#line 1127 "state_var.m"
                      return;
                    }
#line 1126 "state_var.m"
                  }
#line 1051 "state_var.m"
      }
#line 1049 "state_var.m"
  }
#line 1044 "state_var.m"
}

#line 997 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__4_4,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10,
#line 997 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 997 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12)
#line 997 "state_var.m"
{
#line 1005 "state_var.m"
  while (MR_TRUE)
#line 1005 "state_var.m"
    {
#line 1005 "state_var.m"
      /* tailcall optimized into a loop */
#line 1005 "state_var.m"
      {
#line 1005 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 1005 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "state_var.m"
          {
#line 1005 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11;
#line 1005 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9;
#line 1005 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7;
#line 1005 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5;
#line 1005 "state_var.m"
          }
#line 1005 "state_var.m"
        else
#line 1009 "state_var.m"
          {
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmState_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmStates_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Arm0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_28, (MR_Integer) 0)));
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StateAfterArm_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_28, (MR_Integer) 1)));
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_39 = (MR_Word) hlds__make_hlds__state_var__StateAfterArm_38;
#line 1009 "state_var.m"
            MR_Integer hlds__make_hlds__state_var__ArmIdNum_40;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmId_41;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__UninitVarNames_42;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__CopyGoals_43;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmRenames_44;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmExpr0_45;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmInfo0_46;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmExpr_47;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmInfo_54;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Arm_55;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70;
#line 1009 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71;

#line 1012 "state_var.m"
            {
#line 1012 "state_var.m"
              mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ArmIdNum_40, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64);
            }
#line 1013 "state_var.m"
            hlds__make_hlds__state_var__ArmId_41 = (MR_Word) hlds__make_hlds__state_var__ArmIdNum_40;
#line 1014 "state_var.m"
            {
#line 1014 "state_var.m"
              hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(hlds__make_hlds__state_var__HeadVar__3_3, hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__StatusMapAfterArm_39, hlds__make_hlds__state_var__HeadVar__4_4, &hlds__make_hlds__state_var__UninitVarNames_42, &hlds__make_hlds__state_var__CopyGoals_43, &hlds__make_hlds__state_var__ArmRenames_44);
            }
#line 1016 "state_var.m"
            {
#line 1016 "state_var.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__ArmId_41)), ((MR_Box) (hlds__make_hlds__state_var__ArmRenames_44)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9, &hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65);
            }
#line 1017 "state_var.m"
            hlds__make_hlds__state_var__ArmExpr0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm0_37, (MR_Integer) 0)));
#line 1017 "state_var.m"
            hlds__make_hlds__state_var__ArmInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm0_37, (MR_Integer) 1)));
#line 1021 "state_var.m"
            if ((hlds__make_hlds__state_var__CopyGoals_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "state_var.m"
              {
#line 1020 "state_var.m"
                hlds__make_hlds__state_var__ArmExpr_47 = hlds__make_hlds__state_var__ArmExpr0_45;
#line 1020 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64;
#line 1020 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65;
#line 1019 "state_var.m"
              }
#line 1021 "state_var.m"
            else
#line 1022 "state_var.m"
              {
#line 1022 "state_var.m"
                MR_Word hlds__make_hlds__state_var__ArmGoals0_50;
#line 1022 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_69_69;

#line 1023 "state_var.m"
                {
#line 1023 "state_var.m"
                  hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(hlds__make_hlds__state_var__Arm0_37, &hlds__make_hlds__state_var__ArmGoals0_50, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64, &hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65, &hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67);
                }
#line 1025 "state_var.m"
                {
#line 1025 "state_var.m"
                  hlds__make_hlds__state_var__V_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__ArmGoals0_50, hlds__make_hlds__state_var__CopyGoals_43);
                }
#line 1025 "state_var.m"
                {
#line 1025 "state_var.m"
                  hlds__make_hlds__state_var__ArmExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1025 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1025 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_69_69));
#line 1025 "state_var.m"
                }
#line 1022 "state_var.m"
              }
#line 1029 "state_var.m"
            if ((hlds__make_hlds__state_var__UninitVarNames_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1028 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11;
#line 1029 "state_var.m"
            else
#line 1030 "state_var.m"
              {
#line 1030 "state_var.m"
                MR_Word hlds__make_hlds__state_var__ArmContext_53;

#line 1034 "state_var.m"
                {
#line 1034 "state_var.m"
                  hlds__make_hlds__state_var__ArmContext_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__state_var__ArmInfo0_46);
                }
#line 1035 "state_var.m"
                {
#line 1035 "state_var.m"
                  hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(hlds__make_hlds__state_var__ArmContext_53, hlds__make_hlds__state_var__UninitVarNames_42, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70);
                }
#line 1030 "state_var.m"
              }
#line 1037 "state_var.m"
            {
#line 1037 "state_var.m"
              hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__ArmId_41, hlds__make_hlds__state_var__ArmInfo0_46, &hlds__make_hlds__state_var__ArmInfo_54);
            }
#line 1038 "state_var.m"
            {
#line 1038 "state_var.m"
              hlds__make_hlds__state_var__Arm_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm_55, 0) = ((MR_Box) (hlds__make_hlds__state_var__ArmExpr_47));
#line 1038 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__ArmInfo_54));
#line 1038 "state_var.m"
            }
#line 1039 "state_var.m"
            {
#line 1039 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71, 0) = ((MR_Box) (hlds__make_hlds__state_var__Arm_55));
#line 1039 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5));
#line 1039 "state_var.m"
            }
#line 1040 "state_var.m"
            /* direct tailcall eliminated */
#line 1040 "state_var.m"
            {
#line 1040 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__ArmStates_29;
#line 1040 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0__tmp_copy_5 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71;
#line 1040 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0__tmp_copy_7 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66;
#line 1040 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0__tmp_copy_9 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67;
#line 1040 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70;

#line 1040 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_11;
#line 1040 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0__tmp_copy_9;
#line 1040 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0__tmp_copy_7;
#line 1040 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0__tmp_copy_5;
#line 1040 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 1040 "state_var.m"
            }
#line 1040 "state_var.m"
            continue;
#line 1009 "state_var.m"
          }
#line 1005 "state_var.m"
      }
#line 1005 "state_var.m"
      break;
#line 1005 "state_var.m"
    }
#line 997 "state_var.m"
}

#line 971 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_2,
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 971 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 971 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 971 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6)
#line 971 "state_var.m"
{
#line 976 "state_var.m"
  while (MR_TRUE)
#line 976 "state_var.m"
    {
#line 976 "state_var.m"
      /* tailcall optimized into a loop */
#line 976 "state_var.m"
      {
#line 976 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 976 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "state_var.m"
          {
#line 976 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 976 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 976 "state_var.m"
          }
#line 976 "state_var.m"
        else
#line 979 "state_var.m"
          {
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_31_31 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_32_32 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Before_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Befores_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Before_14, (MR_Integer) 0)));
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusBefore_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Before_14, (MR_Integer) 1)));
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfter_21;
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27;
#line 979 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28;
#line 981 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_StatusAfter_21;

#line 981 "state_var.m"
            {
#line 981 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__StatusMapAfterArm_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), &hlds__make_hlds__state_var__conv0_StatusAfter_21);
            }
#line 981 "state_var.m"
            hlds__make_hlds__state_var__StatusAfter_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_StatusAfter_21);
#line 982 "state_var.m"
            {
#line 982 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusBefore_20, hlds__make_hlds__state_var__StatusAfter_21);
            }
#line 984 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 983 "state_var.m"
              {
#line 983 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 983 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 983 "state_var.m"
              }
#line 984 "state_var.m"
            else
#line 987 "state_var.m"
              {
#line 985 "state_var.m"
                MR_Word hlds__make_hlds__state_var___AlreadyUpdated_22;
#line 985 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv1__AlreadyUpdated_22;

#line 985 "state_var.m"
                {
#line 985 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), &hlds__make_hlds__state_var__conv1__AlreadyUpdated_22);
                }
#line 985 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 985 "state_var.m"
                  {
#line 985 "state_var.m"
                    hlds__make_hlds__state_var___AlreadyUpdated_22 = ((MR_Word) hlds__make_hlds__state_var__conv1__AlreadyUpdated_22);
#line 985 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 985 "state_var.m"
                  }
#line 987 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 986 "state_var.m"
                  {
#line 986 "state_var.m"
                    hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 986 "state_var.m"
                    hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 986 "state_var.m"
                  }
#line 987 "state_var.m"
                else
#line 988 "state_var.m"
                  {
#line 988 "state_var.m"
                    {
#line 988 "state_var.m"
                      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfter_21)), hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27);
                    }
#line 989 "state_var.m"
                    {
#line 989 "state_var.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfter_21)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28);
                    }
#line 988 "state_var.m"
                  }
#line 987 "state_var.m"
              }
#line 992 "state_var.m"
            /* direct tailcall eliminated */
#line 992 "state_var.m"
            {
#line 992 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__Befores_15;
#line 992 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27;
#line 992 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28;

#line 992 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5;
#line 992 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3;
#line 992 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 992 "state_var.m"
            }
#line 992 "state_var.m"
            continue;
#line 979 "state_var.m"
          }
#line 976 "state_var.m"
      }
#line 976 "state_var.m"
      break;
#line 976 "state_var.m"
    }
#line 971 "state_var.m"
}

#line 955 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 955 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 955 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 955 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6)
#line 955 "state_var.m"
{
#line 960 "state_var.m"
  while (MR_TRUE)
#line 960 "state_var.m"
    {
#line 960 "state_var.m"
      /* tailcall optimized into a loop */
#line 960 "state_var.m"
      {
#line 960 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 960 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "state_var.m"
          {
#line 960 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 960 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 960 "state_var.m"
          }
#line 960 "state_var.m"
        else
#line 963 "state_var.m"
          {
#line 963 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmState_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 963 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmStates_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 963 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StateAfterArm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_15, (MR_Integer) 1)));
#line 963 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_21 = (MR_Word) hlds__make_hlds__state_var__StateAfterArm_20;
#line 963 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26;
#line 963 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27;
#line 964 "state_var.m"
            MR_Word hlds__make_hlds__state_var___Armunct_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_15, (MR_Integer) 0)));

#line 966 "state_var.m"
            {
#line 966 "state_var.m"
              hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__StatusMapAfterArm_21, hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27);
            }
#line 968 "state_var.m"
            /* direct tailcall eliminated */
#line 968 "state_var.m"
            {
#line 968 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__2__tmp_copy_2 = hlds__make_hlds__state_var__ArmStates_16;
#line 968 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26;
#line 968 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27;

#line 968 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5;
#line 968 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3;
#line 968 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__2_2 = hlds__make_hlds__state_var__HeadVar__2__tmp_copy_2;
#line 968 "state_var.m"
            }
#line 968 "state_var.m"
            continue;
#line 963 "state_var.m"
          }
#line 960 "state_var.m"
      }
#line 960 "state_var.m"
      break;
#line 960 "state_var.m"
    }
#line 955 "state_var.m"
}

#line 948 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
#line 948 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 948 "state_var.m"
{
#line 948 "state_var.m"
  {
#line 948 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 948 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 948 "state_var.m"
    {
#line 948 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))));
    }
#line 948 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 948 "state_var.m"
  }
#line 948 "state_var.m"
}

#line 941 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
#line 941 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 941 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2,
#line 941 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3)
#line 941 "state_var.m"
{
#line 944 "state_var.m"
  while (MR_TRUE)
#line 944 "state_var.m"
    {
#line 944 "state_var.m"
      /* tailcall optimized into a loop */
#line 944 "state_var.m"
      {
#line 944 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 944 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2;
#line 944 "state_var.m"
        else
#line 945 "state_var.m"
          {
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__GoalState_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__GoalStates_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__GoalState_7, (MR_Integer) 0)));
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__State_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__GoalState_7, (MR_Integer) 1)));
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12 = (MR_Word) hlds__make_hlds__state_var__State_11;
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_15_15;
#line 945 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18;

#line 948 "state_var.m"
            {
#line 948 "state_var.m"
              hlds__make_hlds__state_var__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 948 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[2]));
#line 948 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1));
#line 948 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 948 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 3) = ((MR_Box) (hlds__make_hlds__state_var__StatusMapAfterGoal_12));
#line 948 "state_var.m"
            }
#line 948 "state_var.m"
            {
#line 948 "state_var.m"
              mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_15_15, (MR_String) "hlds.make_hlds.state_var", (MR_String) "map after goal not empty");
            }
#line 950 "state_var.m"
            {
#line 950 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_10));
#line 950 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2));
#line 950 "state_var.m"
            }
#line 951 "state_var.m"
            /* direct tailcall eliminated */
#line 951 "state_var.m"
            {
#line 951 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__GoalStates_8;
#line 951 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0__tmp_copy_2 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18;

#line 951 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0__tmp_copy_2;
#line 951 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 951 "state_var.m"
            }
#line 951 "state_var.m"
            continue;
#line 945 "state_var.m"
          }
#line 944 "state_var.m"
      }
#line 944 "state_var.m"
      break;
#line 944 "state_var.m"
    }
#line 941 "state_var.m"
}

#line 881 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
#line 881 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 881 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_2,
#line 881 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3,
#line 881 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4)
#line 881 "state_var.m"
{
#line 884 "state_var.m"
  while (MR_TRUE)
#line 884 "state_var.m"
    {
#line 884 "state_var.m"
      /* tailcall optimized into a loop */
#line 884 "state_var.m"
      {
#line 884 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 884 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3;
#line 884 "state_var.m"
        else
#line 886 "state_var.m"
          {
#line 886 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 886 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 886 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17;
#line 893 "state_var.m"
            MR_Word hlds__make_hlds__state_var__BeforeOutsideStatus_13;
#line 887 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13;

#line 887 "state_var.m"
            {
#line 887 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapBeforeOutside_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), &hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13);
            }
#line 887 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 887 "state_var.m"
              {
#line 887 "state_var.m"
                hlds__make_hlds__state_var__BeforeOutsideStatus_13 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13);
#line 887 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 887 "state_var.m"
              }
#line 893 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 892 "state_var.m"
              {
#line 892 "state_var.m"
                {
#line 892 "state_var.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), ((MR_Box) (hlds__make_hlds__state_var__BeforeOutsideStatus_13)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17);
                }
#line 892 "state_var.m"
              }
#line 893 "state_var.m"
            else
#line 895 "state_var.m"
              {
#line 895 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_14_14;
#line 895 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv1_V_14_14;

#line 895 "state_var.m"
                {
#line 895 "state_var.m"
                  mercury__map__det_remove_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), &hlds__make_hlds__state_var__conv1_V_14_14, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17);
                }
#line 895 "state_var.m"
                hlds__make_hlds__state_var__V_14_14 = ((MR_Word) hlds__make_hlds__state_var__conv1_V_14_14);
#line 895 "state_var.m"
              }
#line 897 "state_var.m"
            /* direct tailcall eliminated */
#line 897 "state_var.m"
            {
#line 897 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__SVars_10;
#line 897 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0__tmp_copy_3 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17;

#line 897 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0__tmp_copy_3;
#line 897 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 897 "state_var.m"
            }
#line 897 "state_var.m"
            continue;
#line 886 "state_var.m"
          }
#line 884 "state_var.m"
      }
#line 884 "state_var.m"
      break;
#line 884 "state_var.m"
    }
#line 881 "state_var.m"
}

#line 841 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4,
#line 841 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5,
#line 841 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6,
#line 841 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7)
#line 841 "state_var.m"
{
#line 845 "state_var.m"
  while (MR_TRUE)
#line 845 "state_var.m"
    {
#line 845 "state_var.m"
      /* tailcall optimized into a loop */
#line 845 "state_var.m"
      {
#line 845 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 845 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "state_var.m"
          {
#line 845 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6;
#line 845 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4;
#line 845 "state_var.m"
          }
#line 845 "state_var.m"
        else
#line 847 "state_var.m"
          {
#line 847 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 847 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 847 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27;
#line 847 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29;
#line 848 "state_var.m"
            MR_Word hlds__make_hlds__state_var___OldStatus_22;
#line 848 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0__OldStatus_22;

#line 848 "state_var.m"
            {
#line 848 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), &hlds__make_hlds__state_var__conv0__OldStatus_22);
            }
#line 848 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 848 "state_var.m"
              {
#line 848 "state_var.m"
                hlds__make_hlds__state_var___OldStatus_22 = ((MR_Word) hlds__make_hlds__state_var__conv0__OldStatus_22);
#line 848 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 848 "state_var.m"
              }
#line 851 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 849 "state_var.m"
              {
#line 849 "state_var.m"
                MR_String hlds__make_hlds__state_var__Name_46;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Pieces_47;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Msg_48;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Spec_50;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_53_53;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_54_54;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_61_61;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_62_62;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_65_65;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_66_66;
#line 849 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_74_74;

#line 2002 "state_var.m"
                {
#line 2002 "state_var.m"
                  hlds__make_hlds__state_var__Name_46 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__SVar_18);
                }
#line 2003 "state_var.m"
                {
#line 2003 "state_var.m"
                  hlds__make_hlds__state_var__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_46));
#line 2003 "state_var.m"
                }
#line 2003 "state_var.m"
                {
#line 2003 "state_var.m"
                  hlds__make_hlds__state_var__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_54_54));
#line 2003 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[17])));
#line 2003 "state_var.m"
                }
#line 2003 "state_var.m"
                {
#line 2003 "state_var.m"
                  hlds__make_hlds__state_var__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[42])));
#line 2003 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_53_53));
#line 2003 "state_var.m"
                }
#line 2006 "state_var.m"
                {
#line 2006 "state_var.m"
                  hlds__make_hlds__state_var__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2006 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_47));
#line 2006 "state_var.m"
                }
#line 2005 "state_var.m"
                {
#line 2005 "state_var.m"
                  hlds__make_hlds__state_var__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_66_66));
#line 2005 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2005 "state_var.m"
                }
#line 2006 "state_var.m"
                {
#line 2006 "state_var.m"
                  hlds__make_hlds__state_var__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_62_62, 0) = ((MR_Box) (((MR_Integer) 40 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 2006 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 2006 "state_var.m"
                }
#line 2005 "state_var.m"
                {
#line 2005 "state_var.m"
                  hlds__make_hlds__state_var__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_62_62));
#line 2005 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2005 "state_var.m"
                }
#line 2005 "state_var.m"
                {
#line 2005 "state_var.m"
                  hlds__make_hlds__state_var__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2005 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__1_1));
#line 2005 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_61_61));
#line 2005 "state_var.m"
                }
#line 2009 "state_var.m"
                {
#line 2009 "state_var.m"
                  hlds__make_hlds__state_var__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2009 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_48));
#line 2009 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2009 "state_var.m"
                }
#line 2009 "state_var.m"
                {
#line 2009 "state_var.m"
                  hlds__make_hlds__state_var__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2009 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_3[0])));
#line 2009 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2009 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 2009 "state_var.m"
                }
#line 2010 "state_var.m"
                {
#line 2010 "state_var.m"
                  hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_50));
#line 2010 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6));
#line 2010 "state_var.m"
                }
#line 850 "state_var.m"
                {
#line 850 "state_var.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29);
                }
#line 849 "state_var.m"
              }
#line 851 "state_var.m"
            else
#line 852 "state_var.m"
              {
#line 852 "state_var.m"
                {
#line 852 "state_var.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29);
                }
#line 852 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6;
#line 852 "state_var.m"
              }
#line 854 "state_var.m"
            /* direct tailcall eliminated */
#line 854 "state_var.m"
            {
#line 854 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3 = hlds__make_hlds__state_var__SVars_19;
#line 854 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0__tmp_copy_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29;
#line 854 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27;

#line 854 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 854 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0__tmp_copy_4;
#line 854 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__3_3 = hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3;
#line 854 "state_var.m"
            }
#line 854 "state_var.m"
            continue;
#line 847 "state_var.m"
          }
#line 845 "state_var.m"
      }
#line 845 "state_var.m"
      break;
#line 845 "state_var.m"
    }
#line 841 "state_var.m"
}

#line 813 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
#line 813 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10,
#line 813 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Status_11)
#line 813 "state_var.m"
{
#line 817 "state_var.m"
  {
#line 817 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 817 "state_var.m"
    if ((hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
#line 817 "state_var.m"
    else
#line 817 "state_var.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10)) == (MR_mktag((MR_Integer) 2))))
#line 818 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
#line 817 "state_var.m"
      else
#line 817 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10)) == (MR_mktag((MR_Integer) 1))))
#line 822 "state_var.m"
          {
#line 822 "state_var.m"
            MR_Word hlds__make_hlds__state_var__NewProgVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 0)));

#line 823 "state_var.m"
            {
#line 823 "state_var.m"
              MR_Word base;
#line 823 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = base;
#line 823 "state_var.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 823 "state_var.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__NewProgVar_8));
#line 823 "state_var.m"
            }
#line 822 "state_var.m"
          }
#line 817 "state_var.m"
        else
#line 817 "state_var.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 819 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
#line 817 "state_var.m"
          else
#line 825 "state_var.m"
            {
#line 825 "state_var.m"
              MR_Word hlds__make_hlds__state_var__NewProgVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 2)));
#line 825 "state_var.m"
              MR_Word hlds__make_hlds__state_var___OldProgVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 1)));

#line 826 "state_var.m"
              {
#line 826 "state_var.m"
                MR_Word base;
#line 826 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = base;
#line 826 "state_var.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 826 "state_var.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__NewProgVar_14));
#line 826 "state_var.m"
              }
#line 825 "state_var.m"
            }
#line 817 "state_var.m"
  }
#line 813 "state_var.m"
}

#line 753 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialStatusMap_2,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalStatusMap_3,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4,
#line 753 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5,
#line 753 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6,
#line 753 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7)
#line 753 "state_var.m"
{
#line 758 "state_var.m"
  while (MR_TRUE)
#line 758 "state_var.m"
    {
#line 758 "state_var.m"
      /* tailcall optimized into a loop */
#line 758 "state_var.m"
      {
#line 758 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 758 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "state_var.m"
          {
#line 758 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
#line 758 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
#line 758 "state_var.m"
          }
#line 758 "state_var.m"
        else
#line 760 "state_var.m"
          {
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_49_49 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_50_50 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Head_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Tail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Head_16, (MR_Integer) 0)));
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__FinalHeadVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Head_16, (MR_Integer) 1)));
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__InitialStatus_24;
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__FinalStatus_25;
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44;
#line 760 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45;
#line 762 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_InitialStatus_24;
#line 763 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv1_FinalStatus_25;

#line 762 "state_var.m"
            {
#line 762 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__TypeCtorInfo_50_50, hlds__make_hlds__state_var__InitialStatusMap_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_22)), &hlds__make_hlds__state_var__conv0_InitialStatus_24);
            }
#line 762 "state_var.m"
            hlds__make_hlds__state_var__InitialStatus_24 = ((MR_Word) hlds__make_hlds__state_var__conv0_InitialStatus_24);
#line 763 "state_var.m"
            {
#line 763 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__TypeCtorInfo_50_50, hlds__make_hlds__state_var__FinalStatusMap_3, ((MR_Box) (hlds__make_hlds__state_var__SVar_22)), &hlds__make_hlds__state_var__conv1_FinalStatus_25);
            }
#line 763 "state_var.m"
            hlds__make_hlds__state_var__FinalStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv1_FinalStatus_25);
#line 777 "state_var.m"
            if ((hlds__make_hlds__state_var__FinalStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "state_var.m"
              {
#line 778 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
#line 778 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
#line 778 "state_var.m"
              }
#line 777 "state_var.m"
            else
#line 777 "state_var.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__state_var__FinalStatus_25)) == (MR_mktag((MR_Integer) 2))))
#line 782 "state_var.m"
                {
#line 783 "state_var.m"
                  {
#line 783 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "readonly status");
#line 783 "state_var.m"
                    return;
                  }
#line 782 "state_var.m"
                }
#line 777 "state_var.m"
              else
#line 777 "state_var.m"
                if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__FinalStatus_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__FinalStatus_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 765 "state_var.m"
                  {
#line 765 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__LastVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__FinalStatus_25, (MR_Integer) 1)));

#line 766 "state_var.m"
                    {
#line 766 "state_var.m"
                      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__FinalStatus_25, hlds__make_hlds__state_var__InitialStatus_24);
                    }
#line 774 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 772 "state_var.m"
                      {
#line 772 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__CopyGoal_27;
#line 772 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__CopyGoal0_54;
#line 772 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__V_55_55;
#line 772 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__V_56_56;

#line 1158 "state_var.m"
                        {
#line 1158 "state_var.m"
                          hlds__make_hlds__state_var__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "state_var.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__state_var__LastVar_26));
#line 1158 "state_var.m"
                        }
#line 1158 "state_var.m"
                        {
#line 1158 "state_var.m"
                          hlds__make_hlds__state_var__V_56_56 = mercury__term__context_init_0_f_0();
                        }
#line 1158 "state_var.m"
                        {
#line 1158 "state_var.m"
                          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__state_var__FinalHeadVar_23, hlds__make_hlds__state_var__V_55_55, hlds__make_hlds__state_var__V_56_56, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_4[3]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoal0_54);
                        }
#line 1160 "state_var.m"
                        {
#line 1160 "state_var.m"
                          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, hlds__make_hlds__state_var__CopyGoal0_54, &hlds__make_hlds__state_var__CopyGoal_27);
                        }
#line 773 "state_var.m"
                        {
#line 773 "state_var.m"
                          hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "state_var.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_27));
#line 773 "state_var.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6));
#line 773 "state_var.m"
                        }
#line 773 "state_var.m"
                        hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
#line 772 "state_var.m"
                      }
#line 774 "state_var.m"
                    else
#line 775 "state_var.m"
                      {
#line 775 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__V_46_46;

#line 775 "state_var.m"
                        {
#line 775 "state_var.m"
                          hlds__make_hlds__state_var__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "state_var.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__state_var__LastVar_26));
#line 775 "state_var.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalHeadVar_23));
#line 775 "state_var.m"
                        }
#line 775 "state_var.m"
                        {
#line 775 "state_var.m"
                          hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "state_var.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_46_46));
#line 775 "state_var.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4));
#line 775 "state_var.m"
                        }
#line 775 "state_var.m"
                        hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
#line 775 "state_var.m"
                      }
#line 765 "state_var.m"
                  }
#line 777 "state_var.m"
                else
#line 787 "state_var.m"
                  {
#line 788 "state_var.m"
                    {
#line 788 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
#line 788 "state_var.m"
                      return;
                    }
#line 787 "state_var.m"
                  }
#line 790 "state_var.m"
            /* direct tailcall eliminated */
#line 790 "state_var.m"
            {
#line 790 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__Tail_17;
#line 790 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0__tmp_copy_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45;
#line 790 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0__tmp_copy_6 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44;

#line 790 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0__tmp_copy_6;
#line 790 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0__tmp_copy_4;
#line 790 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 790 "state_var.m"
            }
#line 790 "state_var.m"
            continue;
#line 760 "state_var.m"
          }
#line 758 "state_var.m"
      }
#line 758 "state_var.m"
      break;
#line 758 "state_var.m"
    }
#line 753 "state_var.m"
}

#line 685 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_9,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals0_11,
#line 685 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_12,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
#line 685 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40,
#line 685 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_41)
#line 685 "state_var.m"
{
#line 690 "state_var.m"
  {
#line 690 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_69_69 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalAssocList_16;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InitialSVarStatusMap_17;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarStatusMap_18;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarSubn_19;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__CopyGoals_20;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goals1_21;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goal1_24;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr1_25;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo1_26;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalId1_27;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId1_28;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap1_29;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_30;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_33;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId_34;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44;
#line 724 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_31;
#line 709 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_31;

#line 691 "state_var.m"
    {
#line 691 "state_var.m"
      mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_69_69, hlds__make_hlds__state_var__TypeInfo_69_69, hlds__make_hlds__state_var__FinalMap_10, &hlds__make_hlds__state_var__FinalAssocList_16);
    }
#line 692 "state_var.m"
    hlds__make_hlds__state_var__InitialSVarStatusMap_17 = (MR_Word) hlds__make_hlds__state_var__InitialSVarState_13;
#line 693 "state_var.m"
    hlds__make_hlds__state_var__FinalSVarStatusMap_18 = (MR_Word) hlds__make_hlds__state_var__FinalSVarState_14;
#line 694 "state_var.m"
    {
#line 694 "state_var.m"
      hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(hlds__make_hlds__state_var__FinalAssocList_16, hlds__make_hlds__state_var__InitialSVarStatusMap_17, hlds__make_hlds__state_var__FinalSVarStatusMap_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__FinalSVarSubn_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoals_20);
    }
#line 700 "state_var.m"
    if ((hlds__make_hlds__state_var__CopyGoals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "state_var.m"
      hlds__make_hlds__state_var__Goals1_21 = hlds__make_hlds__state_var__Goals0_11;
#line 700 "state_var.m"
    else
#line 701 "state_var.m"
      {
#line 702 "state_var.m"
        {
#line 702 "state_var.m"
          hlds__make_hlds__state_var__Goals1_21 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__Goals0_11, hlds__make_hlds__state_var__CopyGoals_20);
        }
#line 701 "state_var.m"
      }
#line 704 "state_var.m"
    {
#line 704 "state_var.m"
      hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(hlds__make_hlds__state_var__Context_9, hlds__make_hlds__state_var__Goals1_21, &hlds__make_hlds__state_var__Goal1_24, hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44);
    }
#line 706 "state_var.m"
    hlds__make_hlds__state_var__GoalExpr1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_24, (MR_Integer) 0)));
#line 706 "state_var.m"
    hlds__make_hlds__state_var__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_24, (MR_Integer) 1)));
#line 707 "state_var.m"
    {
#line 707 "state_var.m"
      hlds__make_hlds__state_var__GoalId1_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo1_26);
    }
#line 708 "state_var.m"
    hlds__make_hlds__state_var__NextGoalId1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 0)));
#line 708 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamingMap1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 1)));
#line 708 "state_var.m"
    hlds__make_hlds__state_var__Specs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 2)));
#line 709 "state_var.m"
    {
#line 709 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap1_29, ((MR_Box) (hlds__make_hlds__state_var__GoalId1_27)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_31);
    }
#line 709 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 709 "state_var.m"
      {
#line 709 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenaming0_31 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_31);
#line 709 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 709 "state_var.m"
      }
#line 724 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 718 "state_var.m"
      {
#line 718 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_56_56;

#line 720 "state_var.m"
        {
#line 720 "state_var.m"
          hlds__make_hlds__state_var__V_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenaming0_31, hlds__make_hlds__state_var__FinalSVarSubn_19);
        }
#line 720 "state_var.m"
        {
#line 720 "state_var.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId1_27)), ((MR_Box) (hlds__make_hlds__state_var__V_56_56)), hlds__make_hlds__state_var__DelayedRenamingMap1_29, &hlds__make_hlds__state_var__DelayedRenamingMap_33);
        }
#line 722 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId_34 = hlds__make_hlds__state_var__NextGoalId1_28;
#line 723 "state_var.m"
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_24;
#line 718 "state_var.m"
      }
#line 724 "state_var.m"
    else
#line 730 "state_var.m"
      if ((hlds__make_hlds__state_var__FinalSVarSubn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 726 "state_var.m"
        {
#line 727 "state_var.m"
          hlds__make_hlds__state_var__NextGoalId_34 = hlds__make_hlds__state_var__NextGoalId1_28;
#line 728 "state_var.m"
          hlds__make_hlds__state_var__DelayedRenamingMap_33 = hlds__make_hlds__state_var__DelayedRenamingMap1_29;
#line 729 "state_var.m"
          *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_24;
#line 726 "state_var.m"
        }
#line 730 "state_var.m"
      else
#line 731 "state_var.m"
        {
#line 731 "state_var.m"
          MR_Integer hlds__make_hlds__state_var__GoalIdNum_37;
#line 731 "state_var.m"
          MR_Word hlds__make_hlds__state_var__GoalId_38;
#line 731 "state_var.m"
          MR_Word hlds__make_hlds__state_var__GoalInfo_39;

#line 732 "state_var.m"
          {
#line 732 "state_var.m"
            mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_37, hlds__make_hlds__state_var__NextGoalId1_28, &hlds__make_hlds__state_var__NextGoalId_34);
          }
#line 733 "state_var.m"
          hlds__make_hlds__state_var__GoalId_38 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_37;
#line 745 "state_var.m"
          {
#line 745 "state_var.m"
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_38)), ((MR_Box) (hlds__make_hlds__state_var__FinalSVarSubn_19)), hlds__make_hlds__state_var__DelayedRenamingMap1_29, &hlds__make_hlds__state_var__DelayedRenamingMap_33);
          }
#line 747 "state_var.m"
          {
#line 747 "state_var.m"
            hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_38, hlds__make_hlds__state_var__GoalInfo1_26, &hlds__make_hlds__state_var__GoalInfo_39);
          }
#line 748 "state_var.m"
          {
#line 748 "state_var.m"
            MR_Word base;
#line 748 "state_var.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "state_var.m"
            *hlds__make_hlds__state_var__Goal_12 = base;
#line 748 "state_var.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr1_25));
#line 748 "state_var.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_39));
#line 748 "state_var.m"
          }
#line 731 "state_var.m"
        }
#line 751 "state_var.m"
    {
#line 751 "state_var.m"
      MR_Word base;
#line 751 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_41 = base;
#line 751 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_34));
#line 751 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_33));
#line 751 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_30));
#line 751 "state_var.m"
    }
#line 690 "state_var.m"
  }
#line 685 "state_var.m"
}

#line 620 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
#line 620 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 620 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 620 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__4_4)
#line 620 "state_var.m"
{
#line 624 "state_var.m"
  {
#line 624 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 624 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "state_var.m"
      *hlds__make_hlds__state_var__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "state_var.m"
    else
#line 625 "state_var.m"
      {
#line 625 "state_var.m"
        MR_Word hlds__make_hlds__state_var__SVar_9;
#line 625 "state_var.m"
        MR_Word hlds__make_hlds__state_var__CurStatus_10;
#line 625 "state_var.m"
        MR_Word hlds__make_hlds__state_var__CurTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 625 "state_var.m"
        MR_Word hlds__make_hlds__state_var__LambdaTail_13;
#line 625 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));

#line 625 "state_var.m"
        hlds__make_hlds__state_var__SVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, (MR_Integer) 0)));
#line 625 "state_var.m"
        hlds__make_hlds__state_var__CurStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, (MR_Integer) 1)));
#line 626 "state_var.m"
        {
#line 626 "state_var.m"
          hlds__make_hlds__state_var__make_svars_read_only_4_p_0(hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__CurTail_11, &hlds__make_hlds__state_var__LambdaTail_13);
        }
#line 632 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__CurStatus_10)) == (MR_mktag((MR_Integer) 2))))
#line 634 "state_var.m"
          {
#line 634 "state_var.m"
            MR_Word base;
#line 634 "state_var.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "state_var.m"
            *hlds__make_hlds__state_var__HeadVar__4_4 = base;
#line 634 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 634 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
#line 634 "state_var.m"
          }
#line 632 "state_var.m"
        else
#line 632 "state_var.m"
          if ((((hlds__make_hlds__state_var__CurStatus_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) hlds__make_hlds__state_var__CurStatus_10)) == (MR_mktag((MR_Integer) 1))))))
#line 631 "state_var.m"
            *hlds__make_hlds__state_var__HeadVar__4_4 = hlds__make_hlds__state_var__LambdaTail_13;
#line 632 "state_var.m"
          else
#line 632 "state_var.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__CurStatus_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 638 "state_var.m"
              {
#line 638 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 1)));
#line 638 "state_var.m"
                MR_Word hlds__make_hlds__state_var__LambdaStatus_20;
#line 638 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_22_22;

#line 639 "state_var.m"
                {
#line 639 "state_var.m"
                  hlds__make_hlds__state_var__LambdaStatus_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 639 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
#line 639 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 1) = NULL;
#line 639 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 2) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__2_2));
#line 639 "state_var.m"
                }
#line 640 "state_var.m"
                {
#line 640 "state_var.m"
                  hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__state_var__SVar_9));
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaStatus_20));
#line 640 "state_var.m"
                }
#line 640 "state_var.m"
                {
#line 640 "state_var.m"
                  MR_Word base;
#line 640 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__4_4 = base;
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
#line 640 "state_var.m"
                }
#line 638 "state_var.m"
              }
#line 632 "state_var.m"
            else
#line 638 "state_var.m"
              {
#line 638 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 1)));
#line 638 "state_var.m"
                MR_Word hlds__make_hlds__state_var__LambdaStatus_25;
#line 638 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_26_26;
#line 637 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 2)));

#line 639 "state_var.m"
                {
#line 639 "state_var.m"
                  hlds__make_hlds__state_var__LambdaStatus_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 639 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_24));
#line 639 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 1) = NULL;
#line 639 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 2) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__2_2));
#line 639 "state_var.m"
                }
#line 640 "state_var.m"
                {
#line 640 "state_var.m"
                  hlds__make_hlds__state_var__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__state_var__SVar_9));
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaStatus_25));
#line 640 "state_var.m"
                }
#line 640 "state_var.m"
                {
#line 640 "state_var.m"
                  MR_Word base;
#line 640 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__4_4 = base;
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_26_26));
#line 640 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
#line 640 "state_var.m"
                }
#line 638 "state_var.m"
              }
#line 625 "state_var.m"
      }
#line 624 "state_var.m"
  }
#line 620 "state_var.m"
}

#line 487 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Term0_11,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Term_12,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_48,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50,
#line 487 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51,
#line 487 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52)
#line 487 "state_var.m"
{
#line 495 "state_var.m"
  {
#line 495 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 495 "state_var.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Term0_11)) == (MR_mktag((MR_Integer) 0))))
#line 498 "state_var.m"
      {
#line 498 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Functor_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 0)));
#line 498 "state_var.m"
        MR_Word hlds__make_hlds__state_var__SubTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 1)));
#line 498 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 2)));
#line 542 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar_22;
#line 500 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_53_53;
#line 500 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_54_54;
#line 500 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_55_55;
#line 501 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_23_23;

#line 500 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Functor_19)) == (MR_mktag((MR_Integer) 0)));
#line 500 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 500 "state_var.m"
          {
#line 500 "state_var.m"
            hlds__make_hlds__state_var__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Functor_19, (MR_Integer) 0)));
#line 500 "state_var.m"
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_53_53, (MR_String) "!.") == 0);
#line 500 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 500 "state_var.m"
              {
#line 501 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__SubTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 501 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 501 "state_var.m"
                  {
#line 501 "state_var.m"
                    hlds__make_hlds__state_var__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 0)));
#line 501 "state_var.m"
                    hlds__make_hlds__state_var__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 1)));
#line 501 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 500 "state_var.m"
                      {
#line 501 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 501 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 501 "state_var.m"
                          {
#line 501 "state_var.m"
                            hlds__make_hlds__state_var__StateVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, (MR_Integer) 0)));
#line 501 "state_var.m"
                            hlds__make_hlds__state_var__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, (MR_Integer) 1)));
#line 501 "state_var.m"
                          }
#line 500 "state_var.m"
                      }
#line 501 "state_var.m"
                  }
#line 500 "state_var.m"
              }
#line 500 "state_var.m"
          }
#line 542 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 503 "state_var.m"
          {
#line 503 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap0_24 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47;
#line 503 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_28;
#line 535 "state_var.m"
            MR_Word hlds__make_hlds__state_var__OldStatus_25;
#line 504 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_OldStatus_25;

#line 504 "state_var.m"
            {
#line 504 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_24, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv0_OldStatus_25);
            }
#line 504 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 504 "state_var.m"
              {
#line 504 "state_var.m"
                hlds__make_hlds__state_var__OldStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv0_OldStatus_25);
#line 504 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 504 "state_var.m"
              }
#line 535 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 513 "state_var.m"
              if ((hlds__make_hlds__state_var__OldStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "state_var.m"
                {
#line 506 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_179 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 506 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__Var_26;
#line 506 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__Status_27;
#line 506 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_68_68;
#line 506 "state_var.m"
                  MR_String hlds__make_hlds__state_var__SVarName_160;
#line 506 "state_var.m"
                  MR_String hlds__make_hlds__state_var__ProgVarName_161;
#line 506 "state_var.m"
                  MR_String hlds__make_hlds__state_var__V_182_182;

#line 382 "state_var.m"
                  {
#line 382 "state_var.m"
                    hlds__make_hlds__state_var__SVarName_160 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__StateVar_22);
                  }
#line 9720 "hlds.make_hlds.state_var.c"
                  {
#line 9722 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__V_182_182 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_160, (MR_String) "_0");
                  }
#line 9725 "hlds.make_hlds.state_var.c"
                  {
#line 9727 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__ProgVarName_161 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_182_182);
                  }
#line 386 "state_var.m"
                  {
#line 386 "state_var.m"
                    mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__ProgVarName_161, &hlds__make_hlds__state_var__Var_26, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                  }
#line 510 "state_var.m"
                  {
#line 510 "state_var.m"
                    hlds__make_hlds__state_var__V_68_68 = mercury__term__context_init_0_f_0();
                  }
#line 510 "state_var.m"
                  {
#line 510 "state_var.m"
                    MR_Word base;
#line 510 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "state_var.m"
                    *hlds__make_hlds__state_var__Term_12 = base;
#line 510 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
#line 510 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_68_68));
#line 510 "state_var.m"
                  }
#line 511 "state_var.m"
                  {
#line 511 "state_var.m"
                    hlds__make_hlds__state_var__Status_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "state_var.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 511 "state_var.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
#line 511 "state_var.m"
                  }
#line 512 "state_var.m"
                  {
#line 512 "state_var.m"
                    mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_27)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                  }
#line 506 "state_var.m"
                }
#line 513 "state_var.m"
              else
#line 513 "state_var.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_25)) == (MR_mktag((MR_Integer) 2))))
#line 524 "state_var.m"
                  {
#line 524 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 524 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__V_58_58;
#line 524 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__Var_93;
#line 524 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__Status_94;
#line 524 "state_var.m"
                    MR_String hlds__make_hlds__state_var__SVarName_129;
#line 524 "state_var.m"
                    MR_String hlds__make_hlds__state_var__ProgVarName_130;
#line 524 "state_var.m"
                    MR_String hlds__make_hlds__state_var__V_151_151;

#line 382 "state_var.m"
                    {
#line 382 "state_var.m"
                      hlds__make_hlds__state_var__SVarName_129 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__StateVar_22);
                    }
#line 9797 "hlds.make_hlds.state_var.c"
                    {
#line 9799 "hlds.make_hlds.state_var.c"
                      hlds__make_hlds__state_var__V_151_151 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_129, (MR_String) "_0");
                    }
#line 9802 "hlds.make_hlds.state_var.c"
                    {
#line 9804 "hlds.make_hlds.state_var.c"
                      hlds__make_hlds__state_var__ProgVarName_130 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_151_151);
                    }
#line 386 "state_var.m"
                    {
#line 386 "state_var.m"
                      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__ProgVarName_130, &hlds__make_hlds__state_var__Var_93, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                    }
#line 531 "state_var.m"
                    {
#line 531 "state_var.m"
                      hlds__make_hlds__state_var__V_58_58 = mercury__term__context_init_0_f_0();
                    }
#line 531 "state_var.m"
                    {
#line 531 "state_var.m"
                      MR_Word base;
#line 531 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "state_var.m"
                      *hlds__make_hlds__state_var__Term_12 = base;
#line 531 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_93));
#line 531 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_58_58));
#line 531 "state_var.m"
                    }
#line 532 "state_var.m"
                    {
#line 532 "state_var.m"
                      hlds__make_hlds__state_var__Status_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "state_var.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 532 "state_var.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_94, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_93));
#line 532 "state_var.m"
                    }
#line 533 "state_var.m"
                    {
#line 533 "state_var.m"
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_94)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                    }
#line 524 "state_var.m"
                  }
#line 513 "state_var.m"
                else
#line 513 "state_var.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_25)) == (MR_mktag((MR_Integer) 1))))
#line 518 "state_var.m"
                    {
#line 519 "state_var.m"
                      {
#line 519 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !.");
#line 519 "state_var.m"
                        return;
                      }
#line 518 "state_var.m"
                    }
#line 513 "state_var.m"
                  else
#line 513 "state_var.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 514 "state_var.m"
                      {
#line 514 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__V_65_65;
#line 514 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_25, (MR_Integer) 1)));

#line 515 "state_var.m"
                        {
#line 515 "state_var.m"
                          hlds__make_hlds__state_var__V_65_65 = mercury__term__context_init_0_f_0();
                        }
#line 515 "state_var.m"
                        {
#line 515 "state_var.m"
                          MR_Word base;
#line 515 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "state_var.m"
                          *hlds__make_hlds__state_var__Term_12 = base;
#line 515 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_92));
#line 515 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 515 "state_var.m"
                        }
#line 516 "state_var.m"
                        hlds__make_hlds__state_var__StatusMap_28 = hlds__make_hlds__state_var__StatusMap0_24;
#line 516 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49;
#line 514 "state_var.m"
                      }
#line 513 "state_var.m"
                    else
#line 521 "state_var.m"
                      {
#line 522 "state_var.m"
                        {
#line 522 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !.");
#line 522 "state_var.m"
                          return;
                        }
#line 521 "state_var.m"
                      }
#line 535 "state_var.m"
            else
#line 536 "state_var.m"
              {
#line 536 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_210 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 536 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_71_71;
#line 536 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Var_95;
#line 536 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Status_96;
#line 536 "state_var.m"
                MR_String hlds__make_hlds__state_var__SVarName_191;
#line 536 "state_var.m"
                MR_String hlds__make_hlds__state_var__ProgVarName_192;
#line 536 "state_var.m"
                MR_String hlds__make_hlds__state_var__V_213_213;

#line 382 "state_var.m"
                {
#line 382 "state_var.m"
                  hlds__make_hlds__state_var__SVarName_191 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_210, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__StateVar_22);
                }
#line 9936 "hlds.make_hlds.state_var.c"
                {
#line 9938 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__V_213_213 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_191, (MR_String) "_0");
                }
#line 9941 "hlds.make_hlds.state_var.c"
                {
#line 9943 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__ProgVarName_192 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_213_213);
                }
#line 386 "state_var.m"
                {
#line 386 "state_var.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_210, hlds__make_hlds__state_var__ProgVarName_192, &hlds__make_hlds__state_var__Var_95, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                }
#line 537 "state_var.m"
                {
#line 537 "state_var.m"
                  hlds__make_hlds__state_var__V_71_71 = mercury__term__context_init_0_f_0();
                }
#line 537 "state_var.m"
                {
#line 537 "state_var.m"
                  MR_Word base;
#line 537 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "state_var.m"
                  *hlds__make_hlds__state_var__Term_12 = base;
#line 537 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_95));
#line 537 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_71_71));
#line 537 "state_var.m"
                }
#line 538 "state_var.m"
                {
#line 538 "state_var.m"
                  hlds__make_hlds__state_var__Status_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 538 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_96, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_95));
#line 538 "state_var.m"
                }
#line 539 "state_var.m"
                {
#line 539 "state_var.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_96)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                }
#line 536 "state_var.m"
              }
#line 541 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_48 = (MR_Word) hlds__make_hlds__state_var__StatusMap_28;
#line 541 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51;
#line 541 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45;
#line 503 "state_var.m"
          }
#line 542 "state_var.m"
        else
#line 587 "state_var.m"
          {
#line 587 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StateVar_103;
#line 543 "state_var.m"
            MR_String hlds__make_hlds__state_var__V_73_73;
#line 543 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_74_74;
#line 543 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_75_75;
#line 544 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_35_35;

#line 543 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Functor_19)) == (MR_mktag((MR_Integer) 0)));
#line 543 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 543 "state_var.m"
              {
#line 543 "state_var.m"
                hlds__make_hlds__state_var__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Functor_19, (MR_Integer) 0)));
#line 543 "state_var.m"
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_73_73, (MR_String) "!:") == 0);
#line 543 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 543 "state_var.m"
                  {
#line 544 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__SubTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 544 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 544 "state_var.m"
                      {
#line 544 "state_var.m"
                        hlds__make_hlds__state_var__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 0)));
#line 544 "state_var.m"
                        hlds__make_hlds__state_var__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 1)));
#line 544 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 543 "state_var.m"
                          {
#line 544 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 544 "state_var.m"
                            if (hlds__make_hlds__state_var__succeeded)
#line 544 "state_var.m"
                              {
#line 544 "state_var.m"
                                hlds__make_hlds__state_var__StateVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, (MR_Integer) 0)));
#line 544 "state_var.m"
                                hlds__make_hlds__state_var__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, (MR_Integer) 1)));
#line 544 "state_var.m"
                              }
#line 543 "state_var.m"
                          }
#line 544 "state_var.m"
                      }
#line 543 "state_var.m"
                  }
#line 543 "state_var.m"
              }
#line 587 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 546 "state_var.m"
              {
#line 546 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_78_78;
#line 546 "state_var.m"
                MR_Word hlds__make_hlds__state_var__StatusMap0_98;
#line 546 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Var_100;
#line 546 "state_var.m"
                MR_Word hlds__make_hlds__state_var__StatusMap_102;
#line 577 "state_var.m"
                MR_Word hlds__make_hlds__state_var__OldStatus_97;
#line 551 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv1_OldStatus_97;
#line 581 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_121_121;
#line 581 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_43_43;
#line 581 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv2_V_43_43;

#line 546 "state_var.m"
                {
#line 546 "state_var.m"
                  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_103, (MR_Integer) 2, &hlds__make_hlds__state_var__Var_100, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                }
#line 547 "state_var.m"
                {
#line 547 "state_var.m"
                  hlds__make_hlds__state_var__V_78_78 = mercury__term__context_init_0_f_0();
                }
#line 547 "state_var.m"
                {
#line 547 "state_var.m"
                  MR_Word base;
#line 547 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "state_var.m"
                  *hlds__make_hlds__state_var__Term_12 = base;
#line 547 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_100));
#line 547 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_78_78));
#line 547 "state_var.m"
                }
#line 550 "state_var.m"
                hlds__make_hlds__state_var__StatusMap0_98 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47;
#line 551 "state_var.m"
                {
#line 551 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_98, ((MR_Box) (hlds__make_hlds__state_var__StateVar_103)), &hlds__make_hlds__state_var__conv1_OldStatus_97);
                }
#line 551 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 551 "state_var.m"
                  {
#line 551 "state_var.m"
                    hlds__make_hlds__state_var__OldStatus_97 = ((MR_Word) hlds__make_hlds__state_var__conv1_OldStatus_97);
#line 551 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 551 "state_var.m"
                  }
#line 577 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 558 "state_var.m"
                  if ((hlds__make_hlds__state_var__OldStatus_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "state_var.m"
                    hlds__make_hlds__state_var__StatusMap_102 = hlds__make_hlds__state_var__StatusMap0_98;
#line 558 "state_var.m"
                  else
#line 558 "state_var.m"
                    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_97)) == (MR_mktag((MR_Integer) 2))))
#line 575 "state_var.m"
                      hlds__make_hlds__state_var__StatusMap_102 = hlds__make_hlds__state_var__StatusMap0_98;
#line 558 "state_var.m"
                    else
#line 558 "state_var.m"
                      if (((MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_97)) == (MR_mktag((MR_Integer) 1))))
#line 564 "state_var.m"
                        {
#line 565 "state_var.m"
                          {
#line 565 "state_var.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !:");
#line 565 "state_var.m"
                            return;
                          }
#line 564 "state_var.m"
                        }
#line 558 "state_var.m"
                      else
#line 558 "state_var.m"
                        if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_97)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_97, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 562 "state_var.m"
                          hlds__make_hlds__state_var__StatusMap_102 = hlds__make_hlds__state_var__StatusMap0_98;
#line 558 "state_var.m"
                        else
#line 567 "state_var.m"
                          {
#line 568 "state_var.m"
                            {
#line 568 "state_var.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !:");
#line 568 "state_var.m"
                              return;
                            }
#line 567 "state_var.m"
                          }
#line 577 "state_var.m"
                else
#line 578 "state_var.m"
                  {
#line 578 "state_var.m"
                    {
#line 578 "state_var.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_103)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__StatusMap0_98, &hlds__make_hlds__state_var__StatusMap_102);
                    }
#line 578 "state_var.m"
                  }
#line 580 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_48 = (MR_Word) hlds__make_hlds__state_var__StatusMap_102;
#line 10183 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_121_121 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 581 "state_var.m"
                {
#line 581 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0(hlds__make_hlds__state_var__TypeInfo_121_121, hlds__make_hlds__state_var__TypeInfo_121_121, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45, ((MR_Box) (hlds__make_hlds__state_var__StateVar_103)), &hlds__make_hlds__state_var__conv2_V_43_43);
                }
#line 581 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 581 "state_var.m"
                  {
#line 581 "state_var.m"
                    hlds__make_hlds__state_var__V_43_43 = ((MR_Word) hlds__make_hlds__state_var__conv2_V_43_43);
#line 581 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 581 "state_var.m"
                  }
#line 584 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 582 "state_var.m"
                  {
#line 582 "state_var.m"
                    {
#line 582 "state_var.m"
                      hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(hlds__make_hlds__state_var__Context_21, *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50, hlds__make_hlds__state_var__StateVar_103, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52);
                    }
#line 582 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45;
#line 582 "state_var.m"
                  }
#line 584 "state_var.m"
                else
#line 585 "state_var.m"
                  {
#line 585 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__TypeInfo_122_122 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];

#line 585 "state_var.m"
                    {
#line 585 "state_var.m"
                      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeInfo_122_122, ((MR_Box) (hlds__make_hlds__state_var__StateVar_103)), ((MR_Box) (hlds__make_hlds__state_var__Var_100)), hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46);
                    }
#line 585 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51;
#line 585 "state_var.m"
                  }
#line 546 "state_var.m"
              }
#line 587 "state_var.m"
            else
#line 589 "state_var.m"
              {
#line 589 "state_var.m"
                MR_Word hlds__make_hlds__state_var__SubTerms_44;

#line 588 "state_var.m"
                {
#line 588 "state_var.m"
                  hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__SubTerms0_20, &hlds__make_hlds__state_var__SubTerms_44, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47, hlds__make_hlds__state_var__STATE_VARIABLE_State_48, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52);
                }
#line 590 "state_var.m"
                {
#line 590 "state_var.m"
                  MR_Word base;
#line 590 "state_var.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 590 "state_var.m"
                  *hlds__make_hlds__state_var__Term_12 = base;
#line 590 "state_var.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Functor_19));
#line 590 "state_var.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__SubTerms_44));
#line 590 "state_var.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 590 "state_var.m"
                }
#line 589 "state_var.m"
              }
#line 587 "state_var.m"
          }
#line 498 "state_var.m"
      }
#line 495 "state_var.m"
    else
#line 495 "state_var.m"
      {
#line 496 "state_var.m"
        *hlds__make_hlds__state_var__Term_12 = hlds__make_hlds__state_var__Term0_11;
#line 496 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45;
#line 496 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_48 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47;
#line 496 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49;
#line 496 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51;
#line 495 "state_var.m"
      }
#line 495 "state_var.m"
  }
#line 487 "state_var.m"
}

#line 476 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8,
#line 476 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9,
#line 476 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10)
#line 476 "state_var.m"
{
#line 481 "state_var.m"
  {
#line 481 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 481 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "state_var.m"
      {
#line 481 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9;
#line 481 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7;
#line 481 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_6 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5;
#line 481 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3;
#line 481 "state_var.m"
      }
#line 481 "state_var.m"
    else
#line 483 "state_var.m"
      {
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Term0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Terms0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Term_25;
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Terms_26;
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39;
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40;
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41;
#line 483 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42;

#line 484 "state_var.m"
        {
#line 484 "state_var.m"
          hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(hlds__make_hlds__state_var__Term0_23, &hlds__make_hlds__state_var__Term_25, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42);
        }
#line 485 "state_var.m"
        {
#line 485 "state_var.m"
          hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Terms0_24, &hlds__make_hlds__state_var__Terms_26, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4, hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40, hlds__make_hlds__state_var__STATE_VARIABLE_State_6, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10);
        }
#line 483 "state_var.m"
        {
#line 483 "state_var.m"
          MR_Word base;
#line 483 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 483 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Term_25));
#line 483 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Terms_26));
#line 483 "state_var.m"
        }
#line 483 "state_var.m"
      }
#line 481 "state_var.m"
  }
#line 476 "state_var.m"
}

#line 454 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_clause_2_p_0(
#line 454 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ItemClause0_3,
#line 454 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ItemClause_4)
#line 454 "state_var.m"
{
#line 457 "state_var.m"
  {
#line 457 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Origin_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 0)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__VarSet_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 1)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 2)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 3)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 4)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 5)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 6)));
#line 457 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 7)));
#line 457 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Args_13;

#line 460 "state_var.m"
    {
#line 460 "state_var.m"
      hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__state_var__Args0_9, &hlds__make_hlds__state_var__Args_13);
    }
#line 461 "state_var.m"
    {
#line 461 "state_var.m"
      MR_Word base;
#line 461 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 461 "state_var.m"
      *hlds__make_hlds__state_var__ItemClause_4 = base;
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Origin_5));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarSet_6));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__PredOrFunc_7));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__state_var__SymName_8));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__state_var__Args_13));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__state_var__Body_10));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__state_var__Context_11));
#line 461 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__state_var__SeqNum_12));
#line 461 "state_var.m"
    }
#line 457 "state_var.m"
  }
#line 454 "state_var.m"
}

#line 442 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0_1(
#line 442 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 442 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 442 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
#line 442 "state_var.m"
{
#line 442 "state_var.m"
  {
#line 442 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 442 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_ItemClause_4;

#line 442 "state_var.m"
    {
#line 442 "state_var.m"
      hlds__make_hlds__state_var__expand_bang_states_clause_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_ItemClause_4);
    }
#line 442 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_ItemClause_4));
#line 442 "state_var.m"
  }
#line 442 "state_var.m"
}

#line 432 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0(
#line 432 "state_var.m"
  MR_Word hlds__make_hlds__state_var__IM0_3,
#line 432 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__IM_4)
#line 432 "state_var.m"
{
#line 435 "state_var.m"
  {
#line 435 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 435 "state_var.m"
    MR_Word hlds__make_hlds__state_var__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 0)));
#line 435 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Method_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 1)));
#line 435 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ProcDef0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 2)));
#line 435 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__Arity0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 3)));
#line 435 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Ctxt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 4)));

#line 440 "state_var.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__ProcDef0_7)) == (MR_mktag((MR_Integer) 1))))
#line 441 "state_var.m"
      {
#line 441 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0;
#line 441 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ItemClauses0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ProcDef0_7, (MR_Integer) 0)));
#line 441 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ItemClauses_12;
#line 441 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__Arity_16;
#line 441 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ProcDef_17;
#line 447 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ItemClause_13;
#line 444 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_14_14;

#line 442 "state_var.m"
        {
#line 442 "state_var.m"
          mercury__list__map_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_29_29, hlds__make_hlds__state_var__TypeCtorInfo_29_29, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[7], hlds__make_hlds__state_var__ItemClauses0_11, &hlds__make_hlds__state_var__ItemClauses_12);
        }
#line 444 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__ItemClauses_12)) == (MR_mktag((MR_Integer) 1)));
#line 444 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 444 "state_var.m"
          {
#line 444 "state_var.m"
            hlds__make_hlds__state_var__ItemClause_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ItemClauses_12, (MR_Integer) 0)));
#line 444 "state_var.m"
            hlds__make_hlds__state_var__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ItemClauses_12, (MR_Integer) 1)));
#line 445 "state_var.m"
            {
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 4)));
#line 445 "state_var.m"
              MR_Integer hlds__make_hlds__state_var__V_19_19;
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 0)));
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 1)));
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 2)));
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 3)));
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 5)));
#line 445 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 6)));
#line 445 "state_var.m"
              MR_Integer hlds__make_hlds__state_var__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 7)));

#line 446 "state_var.m"
              {
#line 446 "state_var.m"
                hlds__make_hlds__state_var__V_19_19 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[4], hlds__make_hlds__state_var__Args_15);
              }
#line 446 "state_var.m"
              {
#line 446 "state_var.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__state_var__PredOrFunc_5, &hlds__make_hlds__state_var__Arity_16, hlds__make_hlds__state_var__V_19_19);
              }
#line 445 "state_var.m"
            }
#line 444 "state_var.m"
          }
#line 444 "state_var.m"
        else
#line 448 "state_var.m"
          hlds__make_hlds__state_var__Arity_16 = hlds__make_hlds__state_var__Arity0_8;
#line 450 "state_var.m"
        {
#line 450 "state_var.m"
          hlds__make_hlds__state_var__ProcDef_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ProcDef_17, 0) = ((MR_Box) (hlds__make_hlds__state_var__ItemClauses_12));
#line 450 "state_var.m"
        }
#line 451 "state_var.m"
        {
#line 451 "state_var.m"
          MR_Word base;
#line 451 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 451 "state_var.m"
          *hlds__make_hlds__state_var__IM_4 = base;
#line 451 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__PredOrFunc_5));
#line 451 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Method_6));
#line 451 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__ProcDef_17));
#line 451 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__state_var__Arity_16));
#line 451 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_9));
#line 451 "state_var.m"
        }
#line 441 "state_var.m"
      }
#line 440 "state_var.m"
    else
#line 439 "state_var.m"
      *hlds__make_hlds__state_var__IM_4 = hlds__make_hlds__state_var__IM0_3;
#line 435 "state_var.m"
  }
#line 432 "state_var.m"
}

#line 378 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_6,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NameSource_7,
#line 378 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Var_8,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13,
#line 378 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14)
#line 378 "state_var.m"
{
#line 381 "state_var.m"
  {
#line 381 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 381 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 381 "state_var.m"
    MR_String hlds__make_hlds__state_var__SVarName_10;

#line 382 "state_var.m"
    {
#line 382 "state_var.m"
      hlds__make_hlds__state_var__SVarName_10 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__StateVar_6);
    }
#line 387 "state_var.m"
    if ((hlds__make_hlds__state_var__NameSource_7 == (MR_Integer) 2))
#line 392 "state_var.m"
      {
#line 392 "state_var.m"
        MR_String hlds__make_hlds__state_var__ProgVarName_30;

#line 10654 "hlds.make_hlds.state_var.c"
        {
#line 10656 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__ProgVarName_30 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_10);
        }
#line 394 "state_var.m"
        {
#line 394 "state_var.m"
          mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarName_30, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
#line 394 "state_var.m"
          return;
        }
#line 392 "state_var.m"
      }
#line 387 "state_var.m"
    else
#line 387 "state_var.m"
      if ((hlds__make_hlds__state_var__NameSource_7 == (MR_Integer) 0))
#line 384 "state_var.m"
        {
#line 384 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarName_11;
#line 384 "state_var.m"
          MR_String hlds__make_hlds__state_var__V_34_34;

#line 10679 "hlds.make_hlds.state_var.c"
          {
#line 10681 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_10, (MR_String) "_0");
          }
#line 10684 "hlds.make_hlds.state_var.c"
          {
#line 10686 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__ProgVarName_11 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_34_34);
          }
#line 386 "state_var.m"
          {
#line 386 "state_var.m"
            mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarName_11, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
#line 386 "state_var.m"
            return;
          }
#line 384 "state_var.m"
        }
#line 387 "state_var.m"
      else
#line 388 "state_var.m"
        {
#line 388 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarBaseName_12;

#line 10705 "hlds.make_hlds.state_var.c"
          {
#line 10707 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__ProgVarBaseName_12 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_10);
          }
#line 390 "state_var.m"
          {
#line 390 "state_var.m"
            mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarBaseName_12, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
#line 390 "state_var.m"
            return;
          }
#line 388 "state_var.m"
        }
#line 381 "state_var.m"
  }
#line 378 "state_var.m"
}

#line 279 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(
#line 279 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 279 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 279 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 279 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 279 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
#line 279 "state_var.m"
{
#line 1946 "state_var.m"
  {
#line 1946 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1946 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_19_19;
#line 1946 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_20_20;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_22_22;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_27_27;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1946 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_32_32;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 1946 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_39_39;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_47_47;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_48_48;
#line 1946 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_52_52;

#line 1947 "state_var.m"
    {
#line 1947 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1948 "state_var.m"
    {
#line 1948 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_10);
    }
#line 1948 "state_var.m"
    {
#line 1948 "state_var.m"
      hlds__make_hlds__state_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1948 "state_var.m"
    }
#line 1950 "state_var.m"
    {
#line 1950 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
#line 1950 "state_var.m"
    {
#line 1950 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1950 "state_var.m"
    }
#line 1951 "state_var.m"
    {
#line 1951 "state_var.m"
      hlds__make_hlds__state_var__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_10);
    }
#line 1951 "state_var.m"
    {
#line 1951 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_39_39));
#line 1951 "state_var.m"
    }
#line 1951 "state_var.m"
    {
#line 1951 "state_var.m"
      hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 1951 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1951 "state_var.m"
    }
#line 1950 "state_var.m"
    {
#line 1950 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[39])));
#line 1950 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_37_37));
#line 1950 "state_var.m"
    }
#line 1950 "state_var.m"
    {
#line 1950 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1950 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 1950 "state_var.m"
    }
#line 1949 "state_var.m"
    {
#line 1949 "state_var.m"
      hlds__make_hlds__state_var__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[41])));
#line 1949 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_30_30));
#line 1949 "state_var.m"
    }
#line 1949 "state_var.m"
    {
#line 1949 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1949 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_27_27));
#line 1949 "state_var.m"
    }
#line 1948 "state_var.m"
    {
#line 1948 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[40])));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_25_25));
#line 1948 "state_var.m"
    }
#line 1948 "state_var.m"
    {
#line 1948 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_19_19));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1948 "state_var.m"
    }
#line 1948 "state_var.m"
    {
#line 1948 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[36])));
#line 1948 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1948 "state_var.m"
    }
#line 1952 "state_var.m"
    {
#line 1952 "state_var.m"
      hlds__make_hlds__state_var__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1952 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1952 "state_var.m"
    }
#line 1952 "state_var.m"
    {
#line 1952 "state_var.m"
      hlds__make_hlds__state_var__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_48_48));
#line 1952 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1952 "state_var.m"
    }
#line 1952 "state_var.m"
    {
#line 1952 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1952 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1952 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_47_47));
#line 1952 "state_var.m"
    }
#line 1953 "state_var.m"
    {
#line 1953 "state_var.m"
      hlds__make_hlds__state_var__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1953 "state_var.m"
    }
#line 1953 "state_var.m"
    {
#line 1953 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_52_52));
#line 1953 "state_var.m"
    }
#line 1954 "state_var.m"
    {
#line 1954 "state_var.m"
      MR_Word base;
#line 1954 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1954 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1954 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1954 "state_var.m"
    }
#line 1946 "state_var.m"
  }
#line 279 "state_var.m"
}

#line 276 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(
#line 276 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 276 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 276 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 276 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 276 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
#line 276 "state_var.m"
{
#line 1934 "state_var.m"
  {
#line 1934 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1934 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_19_19;
#line 1934 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_20_20;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_22_22;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_27_27;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1934 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_32_32;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 1934 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_39_39;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_47_47;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_48_48;
#line 1934 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_52_52;

#line 1935 "state_var.m"
    {
#line 1935 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1936 "state_var.m"
    {
#line 1936 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_10);
    }
#line 1936 "state_var.m"
    {
#line 1936 "state_var.m"
      hlds__make_hlds__state_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1936 "state_var.m"
    }
#line 1938 "state_var.m"
    {
#line 1938 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
#line 1938 "state_var.m"
    {
#line 1938 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1938 "state_var.m"
    }
#line 1939 "state_var.m"
    {
#line 1939 "state_var.m"
      hlds__make_hlds__state_var__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_10);
    }
#line 1939 "state_var.m"
    {
#line 1939 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_39_39));
#line 1939 "state_var.m"
    }
#line 1939 "state_var.m"
    {
#line 1939 "state_var.m"
      hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 1939 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1939 "state_var.m"
    }
#line 1938 "state_var.m"
    {
#line 1938 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[39])));
#line 1938 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_37_37));
#line 1938 "state_var.m"
    }
#line 1938 "state_var.m"
    {
#line 1938 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1938 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 1938 "state_var.m"
    }
#line 1937 "state_var.m"
    {
#line 1937 "state_var.m"
      hlds__make_hlds__state_var__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1937 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[38])));
#line 1937 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_30_30));
#line 1937 "state_var.m"
    }
#line 1937 "state_var.m"
    {
#line 1937 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1937 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1937 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_27_27));
#line 1937 "state_var.m"
    }
#line 1936 "state_var.m"
    {
#line 1936 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[37])));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_25_25));
#line 1936 "state_var.m"
    }
#line 1936 "state_var.m"
    {
#line 1936 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_19_19));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1936 "state_var.m"
    }
#line 1936 "state_var.m"
    {
#line 1936 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[36])));
#line 1936 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1936 "state_var.m"
    }
#line 1940 "state_var.m"
    {
#line 1940 "state_var.m"
      hlds__make_hlds__state_var__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1940 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1940 "state_var.m"
    }
#line 1940 "state_var.m"
    {
#line 1940 "state_var.m"
      hlds__make_hlds__state_var__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1940 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_48_48));
#line 1940 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1940 "state_var.m"
    }
#line 1940 "state_var.m"
    {
#line 1940 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1940 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1940 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_47_47));
#line 1940 "state_var.m"
    }
#line 1941 "state_var.m"
    {
#line 1941 "state_var.m"
      hlds__make_hlds__state_var__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1941 "state_var.m"
    }
#line 1941 "state_var.m"
    {
#line 1941 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_52_52));
#line 1941 "state_var.m"
    }
#line 1942 "state_var.m"
    {
#line 1942 "state_var.m"
      MR_Word base;
#line 1942 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1942 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1942 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1942 "state_var.m"
    }
#line 1934 "state_var.m"
  }
#line 276 "state_var.m"
}

#line 272 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(
#line 272 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_8,
#line 272 "state_var.m"
  MR_String hlds__make_hlds__state_var__RO_Construct_9,
#line 272 "state_var.m"
  MR_Word hlds__make_hlds__state_var__RO_Context_10,
#line 272 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_11,
#line 272 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_12,
#line 272 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_20,
#line 272 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_21)
#line 272 "state_var.m"
{
#line 1916 "state_var.m"
  {
#line 1916 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1916 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_14;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces1_15;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg1_16;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces2_17;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg2_18;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_19;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_24_24;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1916 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_26_26;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_32_32;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_36_36;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_39_39;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_40_40;
#line 1916 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_41_41;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_49_49;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_50_50;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_54_54;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_57_57;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_58_58;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_65_65;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_66_66;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_70_70;
#line 1916 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_71_71;

#line 1917 "state_var.m"
    {
#line 1917 "state_var.m"
      hlds__make_hlds__state_var__Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_11, hlds__make_hlds__state_var__StateVar_12);
    }
#line 1918 "state_var.m"
    {
#line 1918 "state_var.m"
      hlds__make_hlds__state_var__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_14);
    }
#line 1918 "state_var.m"
    {
#line 1918 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_26_26));
#line 1918 "state_var.m"
    }
#line 1919 "state_var.m"
    {
#line 1919 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__state_var__RO_Construct_9));
#line 1919 "state_var.m"
    }
#line 1920 "state_var.m"
    {
#line 1920 "state_var.m"
      hlds__make_hlds__state_var__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_14);
    }
#line 1920 "state_var.m"
    {
#line 1920 "state_var.m"
      hlds__make_hlds__state_var__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_41_41));
#line 1920 "state_var.m"
    }
#line 1920 "state_var.m"
    {
#line 1920 "state_var.m"
      hlds__make_hlds__state_var__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_40_40));
#line 1920 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1920 "state_var.m"
    }
#line 1919 "state_var.m"
    {
#line 1919 "state_var.m"
      hlds__make_hlds__state_var__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[33])));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_39_39));
#line 1919 "state_var.m"
    }
#line 1919 "state_var.m"
    {
#line 1919 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[32])));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_36_36));
#line 1919 "state_var.m"
    }
#line 1919 "state_var.m"
    {
#line 1919 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1919 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 1919 "state_var.m"
    }
#line 1918 "state_var.m"
    {
#line 1918 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[31])));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1918 "state_var.m"
    }
#line 1918 "state_var.m"
    {
#line 1918 "state_var.m"
      hlds__make_hlds__state_var__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_25_25));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_28_28));
#line 1918 "state_var.m"
    }
#line 1918 "state_var.m"
    {
#line 1918 "state_var.m"
      hlds__make_hlds__state_var__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[30])));
#line 1918 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces1_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_24_24));
#line 1918 "state_var.m"
    }
#line 1921 "state_var.m"
    {
#line 1921 "state_var.m"
      hlds__make_hlds__state_var__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1921 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces1_15));
#line 1921 "state_var.m"
    }
#line 1921 "state_var.m"
    {
#line 1921 "state_var.m"
      hlds__make_hlds__state_var__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1921 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_50_50));
#line 1921 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1921 "state_var.m"
    }
#line 1921 "state_var.m"
    {
#line 1921 "state_var.m"
      hlds__make_hlds__state_var__Msg1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1921 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg1_16, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_8));
#line 1921 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg1_16, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_49_49));
#line 1921 "state_var.m"
    }
#line 1923 "state_var.m"
    {
#line 1923 "state_var.m"
      hlds__make_hlds__state_var__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_14));
#line 1923 "state_var.m"
    }
#line 1923 "state_var.m"
    {
#line 1923 "state_var.m"
      hlds__make_hlds__state_var__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_58_58));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[11])));
#line 1923 "state_var.m"
    }
#line 1922 "state_var.m"
    {
#line 1922 "state_var.m"
      hlds__make_hlds__state_var__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1922 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
#line 1922 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_57_57));
#line 1922 "state_var.m"
    }
#line 1922 "state_var.m"
    {
#line 1922 "state_var.m"
      hlds__make_hlds__state_var__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1922 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[34])));
#line 1922 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces2_17, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_54_54));
#line 1922 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces2_17));
#line 1924 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_66_66));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1924 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__Msg2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg2_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__RO_Context_10));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg2_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 1924 "state_var.m"
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg2_18));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "state_var.m"
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg1_16));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_71_71));
#line 1925 "state_var.m"
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_70_70));
#line 1925 "state_var.m"
    }
#line 1926 "state_var.m"
    {
#line 1926 "state_var.m"
      MR_Word base;
#line 1926 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_21 = base;
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_19));
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_20));
#line 1926 "state_var.m"
    }
#line 1916 "state_var.m"
  }
#line 272 "state_var.m"
}

#line 267 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_p_0(
#line 267 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 267 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StateVar_5)
#line 267 "state_var.m"
{
#line 1903 "state_var.m"
  while (MR_TRUE)
#line 1903 "state_var.m"
    {
#line 1903 "state_var.m"
      /* tailcall optimized into a loop */
#line 1903 "state_var.m"
      {
#line 1903 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1903 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Arg_3;
#line 1903 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Args_4;
#line 1906 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar0_6;
#line 1904 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_9_9;
#line 1904 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_10_10;
#line 1904 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_11_11;
#line 1904 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_12_12;
#line 1904 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_13_13;
#line 1904 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8;
#line 1904 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7;

#line 1903 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1903 "state_var.m"
          {
#line 1903 "state_var.m"
            hlds__make_hlds__state_var__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1903 "state_var.m"
            hlds__make_hlds__state_var__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1904 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg_3)) == (MR_mktag((MR_Integer) 0)));
#line 1904 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1904 "state_var.m"
              {
#line 1904 "state_var.m"
                hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg_3, (MR_Integer) 0)));
#line 1904 "state_var.m"
                hlds__make_hlds__state_var__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg_3, (MR_Integer) 1)));
#line 1904 "state_var.m"
                hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg_3, (MR_Integer) 2)));
#line 1904 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 1904 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1904 "state_var.m"
                  {
#line 1904 "state_var.m"
                    hlds__make_hlds__state_var__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_9_9, (MR_Integer) 0)));
#line 1904 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_10_10, (MR_String) "!") == 0);
#line 1904 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1904 "state_var.m"
                      {
#line 1904 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1904 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1904 "state_var.m"
                          {
#line 1904 "state_var.m"
                            hlds__make_hlds__state_var__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 0)));
#line 1904 "state_var.m"
                            hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 1)));
#line 1904 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1904 "state_var.m"
                            if (hlds__make_hlds__state_var__succeeded)
#line 1904 "state_var.m"
                              {
#line 1904 "state_var.m"
                                hlds__make_hlds__state_var__StateVar0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 0)));
#line 1904 "state_var.m"
                                hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 1)));
#line 1904 "state_var.m"
                                hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1904 "state_var.m"
                              }
#line 1904 "state_var.m"
                          }
#line 1904 "state_var.m"
                      }
#line 1904 "state_var.m"
                  }
#line 1904 "state_var.m"
              }
#line 1906 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1905 "state_var.m"
              {
#line 1905 "state_var.m"
                *hlds__make_hlds__state_var__StateVar_5 = hlds__make_hlds__state_var__StateVar0_6;
#line 1905 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1905 "state_var.m"
              }
#line 1906 "state_var.m"
            else
#line 1907 "state_var.m"
              {
#line 1907 "state_var.m"
                /* direct tailcall eliminated */
#line 1907 "state_var.m"
                {
#line 1907 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__Args_4;

#line 1907 "state_var.m"
                  hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 1907 "state_var.m"
                }
#line 1907 "state_var.m"
                continue;
#line 1907 "state_var.m"
              }
#line 1903 "state_var.m"
          }
#line 1903 "state_var.m"
        return hlds__make_hlds__state_var__succeeded;
#line 1903 "state_var.m"
      }
#line 1903 "state_var.m"
      break;
#line 1903 "state_var.m"
    }
#line 267 "state_var.m"
}

#line 259 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(
#line 259 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 259 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Args_4,
#line 259 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StateVar_5)
#line 259 "state_var.m"
{
#line 1900 "state_var.m"
  {
#line 1900 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__HeadVar__1_1 == (MR_Integer) 1);
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_14_14;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_18_18;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_8_8;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_9_9;
#line 1900 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_10_10;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_11_11;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_12_12;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_13_13;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_15_15;
#line 1900 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_16_16;
#line 1901 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_V_8_8;
#line 1901 "state_var.m"
    MR_Word hlds__make_hlds__state_var___Ctxt_7;
#line 1901 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_6_6;

#line 1900 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1900 "state_var.m"
      {
#line 1901 "state_var.m"
        hlds__make_hlds__state_var__V_10_10 = (MR_String) "!";
#line 1901 "state_var.m"
        hlds__make_hlds__state_var__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11760 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeInfo_14_14 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[4];
#line 1901 "state_var.m"
        hlds__make_hlds__state_var__V_9_9 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_4[2];
#line 1901 "state_var.m"
        {
#line 1901 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__list__last_2_p_0(hlds__make_hlds__state_var__TypeInfo_14_14, hlds__make_hlds__state_var__Args_4, &hlds__make_hlds__state_var__conv0_V_8_8);
        }
#line 1901 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1901 "state_var.m"
          {
#line 1901 "state_var.m"
            hlds__make_hlds__state_var__V_8_8 = ((MR_Word) hlds__make_hlds__state_var__conv0_V_8_8);
#line 1901 "state_var.m"
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1901 "state_var.m"
          }
#line 1900 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1900 "state_var.m"
          {
#line 1901 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 1901 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1901 "state_var.m"
              {
#line 1901 "state_var.m"
                hlds__make_hlds__state_var__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, (MR_Integer) 0)));
#line 1901 "state_var.m"
                hlds__make_hlds__state_var__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, (MR_Integer) 1)));
#line 1901 "state_var.m"
                hlds__make_hlds__state_var___Ctxt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, (MR_Integer) 2)));
#line 1901 "state_var.m"
                {
#line 1901 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__term____Unify____const_0_0(hlds__make_hlds__state_var__V_9_9, hlds__make_hlds__state_var__V_15_15);
                }
#line 1900 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1900 "state_var.m"
                  {
#line 1901 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1901 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1901 "state_var.m"
                      {
#line 1901 "state_var.m"
                        hlds__make_hlds__state_var__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 0)));
#line 1901 "state_var.m"
                        hlds__make_hlds__state_var__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 1)));
#line 11814 "hlds.make_hlds.state_var.c"
                        hlds__make_hlds__state_var__TypeInfo_18_18 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[6];
#line 1901 "state_var.m"
                        {
#line 1901 "state_var.m"
                          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_18_18, ((MR_Box) (hlds__make_hlds__state_var__V_13_13)), ((MR_Box) (hlds__make_hlds__state_var__V_16_16)));
                        }
#line 1900 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1900 "state_var.m"
                          {
#line 1901 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1901 "state_var.m"
                            if (hlds__make_hlds__state_var__succeeded)
#line 1901 "state_var.m"
                              {
#line 1901 "state_var.m"
                                *hlds__make_hlds__state_var__StateVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 0)));
#line 1901 "state_var.m"
                                hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 1)));
#line 1901 "state_var.m"
                              }
#line 1900 "state_var.m"
                          }
#line 1901 "state_var.m"
                      }
#line 1900 "state_var.m"
                  }
#line 1901 "state_var.m"
              }
#line 1900 "state_var.m"
          }
#line 1900 "state_var.m"
      }
#line 1900 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1900 "state_var.m"
  }
#line 259 "state_var.m"
}

#line 1834 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1834 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1834 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1834 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1834 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6)
#line 1834 "state_var.m"
{
#line 1834 "state_var.m"
  {
#line 1834 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 1834 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv3_Goal_10;
#line 1834 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22;
#line 1834 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24;

#line 1834 "state_var.m"
    {
#line 1834 "state_var.m"
      hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv3_Goal_10, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_5), &hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24);
    }
#line 1834 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv3_Goal_10));
#line 1834 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22));
#line 1834 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24));
#line 1834 "state_var.m"
  }
#line 1834 "state_var.m"
}

#line 252 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(
#line 252 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal_5,
#line 252 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Conjuncts_6,
#line 252 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18,
#line 252 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_19)
#line 252 "state_var.m"
{
#line 1826 "state_var.m"
  {
#line 1826 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1826 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_5, (MR_Integer) 0)));
#line 1826 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_5, (MR_Integer) 1)));
#line 1842 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Conjuncts0_10;
#line 1830 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;

#line 1830 "state_var.m"
    hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1830 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1830 "state_var.m"
      {
#line 1830 "state_var.m"
        hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 1)));
#line 1830 "state_var.m"
        hlds__make_hlds__state_var__Conjuncts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 2)));
#line 1830 "state_var.m"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_20_20 == (MR_Integer) 0);
#line 1830 "state_var.m"
      }
#line 1842 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1831 "state_var.m"
      {
#line 1831 "state_var.m"
        MR_Word hlds__make_hlds__state_var__NextGoalId0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 0)));
#line 1831 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenamingMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 1)));
#line 1831 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Specs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 2)));
#line 1831 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_14;
#line 1839 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalDelayedRenaming_15;
#line 1833 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15;

#line 1832 "state_var.m"
        {
#line 1832 "state_var.m"
          hlds__make_hlds__state_var__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo_9);
        }
#line 1833 "state_var.m"
        {
#line 1833 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap0_12, ((MR_Box) (hlds__make_hlds__state_var__GoalId_14)), &hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
        }
#line 1833 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1833 "state_var.m"
          {
#line 1833 "state_var.m"
            hlds__make_hlds__state_var__GoalDelayedRenaming_15 = ((MR_Word) hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
#line 1833 "state_var.m"
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1833 "state_var.m"
          }
#line 1839 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1837 "state_var.m"
          {
#line 1837 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_32_32;
#line 1837 "state_var.m"
            MR_Word hlds__make_hlds__state_var__NextGoalId_16;
#line 1837 "state_var.m"
            MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_17;
#line 1837 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1834 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv5_NextGoalId_16;
#line 1834 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17;

#line 1834 "state_var.m"
            {
#line 1834 "state_var.m"
              hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1834 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
#line 1834 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1));
#line 1834 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1834 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__state_var__GoalDelayedRenaming_15));
#line 1834 "state_var.m"
            }
#line 12010 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1834 "state_var.m"
            {
#line 1834 "state_var.m"
              mercury__list__map_foldl2_7_p_0(hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_32_32, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], hlds__make_hlds__state_var__V_21_21, hlds__make_hlds__state_var__Conjuncts0_10, hlds__make_hlds__state_var__Conjuncts_6, ((MR_Box) (hlds__make_hlds__state_var__NextGoalId0_11)), &hlds__make_hlds__state_var__conv5_NextGoalId_16, ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap0_12)), &hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17);
            }
#line 1834 "state_var.m"
            hlds__make_hlds__state_var__NextGoalId_16 = ((MR_Word) hlds__make_hlds__state_var__conv5_NextGoalId_16);
#line 1834 "state_var.m"
            hlds__make_hlds__state_var__DelayedRenamingMap_17 = ((MR_Word) hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17);
#line 1838 "state_var.m"
            {
#line 1838 "state_var.m"
              MR_Word base;
#line 1838 "state_var.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1838 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = base;
#line 1838 "state_var.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_16));
#line 1838 "state_var.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_17));
#line 1838 "state_var.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_13));
#line 1838 "state_var.m"
            }
#line 1837 "state_var.m"
          }
#line 1839 "state_var.m"
        else
#line 1840 "state_var.m"
          {
#line 1840 "state_var.m"
            *hlds__make_hlds__state_var__Conjuncts_6 = hlds__make_hlds__state_var__Conjuncts0_10;
#line 1840 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18;
#line 1840 "state_var.m"
          }
#line 1831 "state_var.m"
      }
#line 1842 "state_var.m"
    else
#line 1843 "state_var.m"
      {
#line 1843 "state_var.m"
        {
#line 1843 "state_var.m"
          MR_Word base;
#line 1843 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "state_var.m"
          *hlds__make_hlds__state_var__Conjuncts_6 = base;
#line 1843 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_5));
#line 1843 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1843 "state_var.m"
        }
#line 1843 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18;
#line 1843 "state_var.m"
      }
#line 1826 "state_var.m"
  }
#line 252 "state_var.m"
}

#line 1820 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
#line 1820 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1820 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1820 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1820 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1820 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4)
#line 1820 "state_var.m"
{
#line 1820 "state_var.m"
  {
#line 1820 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 1820 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv1_Conjuncts_6;
#line 1820 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19;

#line 1820 "state_var.m"
    {
#line 1820 "state_var.m"
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv1_Conjuncts_6, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19);
    }
#line 1820 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv1_Conjuncts_6));
#line 1820 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19));
#line 1820 "state_var.m"
  }
#line 1820 "state_var.m"
}

#line 245 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(
#line 245 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 245 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals_7,
#line 245 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_8,
#line 245 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_14,
#line 245 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_15)
#line 245 "state_var.m"
{
#line 1819 "state_var.m"
  {
#line 1819 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1819 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1819 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalConjuncts_10;
#line 1819 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Conjuncts_11;
#line 1819 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_12;
#line 1819 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo_13;
#line 1820 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15;

#line 1820 "state_var.m"
    {
#line 1820 "state_var.m"
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__state_var__TypeCtorInfo_23_23, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[3], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[6], hlds__make_hlds__state_var__Goals_7, &hlds__make_hlds__state_var__GoalConjuncts_10, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_14)), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15);
    }
#line 1820 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Store_15 = ((MR_Word) hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15);
#line 1821 "state_var.m"
    {
#line 1821 "state_var.m"
      mercury__list__condense_2_p_0(hlds__make_hlds__state_var__TypeCtorInfo_23_23, hlds__make_hlds__state_var__GoalConjuncts_10, &hlds__make_hlds__state_var__Conjuncts_11);
    }
#line 1822 "state_var.m"
    {
#line 1822 "state_var.m"
      hlds__make_hlds__state_var__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1822 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1822 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 2) = ((MR_Box) (hlds__make_hlds__state_var__Conjuncts_11));
#line 1822 "state_var.m"
    }
#line 1823 "state_var.m"
    {
#line 1823 "state_var.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__state_var__Context_6, &hlds__make_hlds__state_var__GoalInfo_13);
    }
#line 1824 "state_var.m"
    {
#line 1824 "state_var.m"
      MR_Word base;
#line 1824 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1824 "state_var.m"
      *hlds__make_hlds__state_var__Goal_8 = base;
#line 1824 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr_12));
#line 1824 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_13));
#line 1824 "state_var.m"
    }
#line 1819 "state_var.m"
  }
#line 245 "state_var.m"
}

#line 236 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(
#line 236 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_10,
#line 236 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_11,
#line 236 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Var_12,
#line 236 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24,
#line 236 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25,
#line 236 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26,
#line 236 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_27,
#line 236 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28,
#line 236 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29)
#line 236 "state_var.m"
{
#line 1728 "state_var.m"
  {
#line 1728 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1728 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_16 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1761 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Status_17;
#line 1730 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_Status_17;

#line 1730 "state_var.m"
    {
#line 1730 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_16, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), &hlds__make_hlds__state_var__conv0_Status_17);
    }
#line 1730 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1730 "state_var.m"
      {
#line 1730 "state_var.m"
        hlds__make_hlds__state_var__Status_17 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_17);
#line 1730 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1730 "state_var.m"
      }
#line 1761 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1737 "state_var.m"
      if ((hlds__make_hlds__state_var__Status_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1732 "state_var.m"
        {
#line 1732 "state_var.m"
          MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_179 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1732 "state_var.m"
          MR_Word hlds__make_hlds__state_var__StatusMap_18;
#line 1732 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_41_41;
#line 1732 "state_var.m"
          MR_String hlds__make_hlds__state_var__SVarName_160;
#line 1732 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarBaseName_162;

#line 382 "state_var.m"
          {
#line 382 "state_var.m"
            hlds__make_hlds__state_var__SVarName_160 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
          }
#line 12267 "hlds.make_hlds.state_var.c"
          {
#line 12269 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__ProgVarBaseName_162 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_160);
          }
#line 390 "state_var.m"
          {
#line 390 "state_var.m"
            mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__ProgVarBaseName_162, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
          }
#line 1734 "state_var.m"
          {
#line 1734 "state_var.m"
            hlds__make_hlds__state_var__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1734 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_41_41, 0) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1734 "state_var.m"
          }
#line 1734 "state_var.m"
          {
#line 1734 "state_var.m"
            mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_41_41)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_18);
          }
#line 1736 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_18;
#line 1736 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1732 "state_var.m"
        }
#line 1737 "state_var.m"
      else
#line 1737 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) == (MR_mktag((MR_Integer) 2))))
#line 1744 "state_var.m"
          {
#line 1744 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_148;
#line 1744 "state_var.m"
            MR_Word hlds__make_hlds__state_var__RO_Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1744 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_33_33;
#line 1744 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_46;
#line 1744 "state_var.m"
            MR_Word hlds__make_hlds__state_var__OldVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1744 "state_var.m"
            MR_String hlds__make_hlds__state_var__SVarName_129;
#line 1744 "state_var.m"
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_131;

#line 1749 "state_var.m"
            {
#line 1749 "state_var.m"
              hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(hlds__make_hlds__state_var__Context_10, (MR_String) "lambda expression", hlds__make_hlds__state_var__RO_Context_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29);
            }
#line 12322 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_31_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
            {
#line 382 "state_var.m"
              hlds__make_hlds__state_var__SVarName_129 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
            }
#line 12329 "hlds.make_hlds.state_var.c"
            {
#line 12331 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__ProgVarBaseName_131 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_129);
            }
#line 390 "state_var.m"
            {
#line 390 "state_var.m"
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__ProgVarBaseName_131, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
            }
#line 1753 "state_var.m"
            {
#line 1753 "state_var.m"
              hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1753 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1753 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__state_var__OldVar_47));
#line 1753 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_33_33, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1753 "state_var.m"
            }
#line 1753 "state_var.m"
            {
#line 1753 "state_var.m"
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_33_33)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_46);
            }
#line 1755 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_46;
#line 1744 "state_var.m"
          }
#line 1737 "state_var.m"
        else
#line 1737 "state_var.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) == (MR_mktag((MR_Integer) 1))))
#line 1759 "state_var.m"
            {
#line 1759 "state_var.m"
              *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1759 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
#line 1759 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1759 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1759 "state_var.m"
            }
#line 1737 "state_var.m"
          else
#line 1737 "state_var.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1738 "state_var.m"
              {
#line 1738 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1738 "state_var.m"
                MR_Word hlds__make_hlds__state_var__OldVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
#line 1738 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1738 "state_var.m"
                MR_Word hlds__make_hlds__state_var__StatusMap_45;
#line 1738 "state_var.m"
                MR_String hlds__make_hlds__state_var__SVarName_98;
#line 1738 "state_var.m"
                MR_String hlds__make_hlds__state_var__ProgVarBaseName_100;

#line 382 "state_var.m"
                {
#line 382 "state_var.m"
                  hlds__make_hlds__state_var__SVarName_98 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
                }
#line 12400 "hlds.make_hlds.state_var.c"
                {
#line 12402 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__ProgVarBaseName_100 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_98);
                }
#line 390 "state_var.m"
                {
#line 390 "state_var.m"
                  mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__ProgVarBaseName_100, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
                }
#line 1740 "state_var.m"
                {
#line 1740 "state_var.m"
                  hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1740 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1740 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__state_var__OldVar_19));
#line 1740 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1740 "state_var.m"
                }
#line 1740 "state_var.m"
                {
#line 1740 "state_var.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_37_37)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_45);
                }
#line 1742 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_45;
#line 1742 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1738 "state_var.m"
              }
#line 1737 "state_var.m"
            else
#line 1757 "state_var.m"
              {
#line 1757 "state_var.m"
                MR_Word hlds__make_hlds__state_var___OldVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));

#line 1757 "state_var.m"
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1757 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
#line 1757 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1757 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1757 "state_var.m"
              }
#line 1761 "state_var.m"
    else
#line 1762 "state_var.m"
      {
#line 1762 "state_var.m"
        MR_String hlds__make_hlds__state_var__Name_66;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Pieces_67;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Msg_68;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Spec_69;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_72_72;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_73_73;
#line 1762 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_74_74;
#line 1762 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_76_76;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_83_83;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_84_84;
#line 1762 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_88_88;

#line 1963 "state_var.m"
        {
#line 1963 "state_var.m"
          hlds__make_hlds__state_var__Name_66 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
        }
#line 1964 "state_var.m"
        {
#line 1964 "state_var.m"
          hlds__make_hlds__state_var__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__make_hlds__state_var__Name_66);
        }
#line 1964 "state_var.m"
        {
#line 1964 "state_var.m"
          hlds__make_hlds__state_var__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__V_76_76);
        }
#line 1964 "state_var.m"
        {
#line 1964 "state_var.m"
          hlds__make_hlds__state_var__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 1964 "state_var.m"
        }
#line 1964 "state_var.m"
        {
#line 1964 "state_var.m"
          hlds__make_hlds__state_var__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_73_73));
#line 1964 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[13])));
#line 1964 "state_var.m"
        }
#line 1964 "state_var.m"
        {
#line 1964 "state_var.m"
          hlds__make_hlds__state_var__Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[29])));
#line 1964 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_67, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_72_72));
#line 1964 "state_var.m"
        }
#line 1966 "state_var.m"
        {
#line 1966 "state_var.m"
          hlds__make_hlds__state_var__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_67));
#line 1966 "state_var.m"
        }
#line 1966 "state_var.m"
        {
#line 1966 "state_var.m"
          hlds__make_hlds__state_var__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_84_84));
#line 1966 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1966 "state_var.m"
        }
#line 1966 "state_var.m"
        {
#line 1966 "state_var.m"
          hlds__make_hlds__state_var__Msg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_68, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_10));
#line 1966 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_68, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_83_83));
#line 1966 "state_var.m"
        }
#line 1967 "state_var.m"
        {
#line 1967 "state_var.m"
          hlds__make_hlds__state_var__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_68));
#line 1967 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1967 "state_var.m"
        }
#line 1967 "state_var.m"
        {
#line 1967 "state_var.m"
          hlds__make_hlds__state_var__Spec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1967 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1967 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1967 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_88_88));
#line 1967 "state_var.m"
        }
#line 1968 "state_var.m"
        {
#line 1968 "state_var.m"
          MR_Word base;
#line 1968 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1968 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = base;
#line 1968 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_69));
#line 1968 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28));
#line 1968 "state_var.m"
        }
#line 1768 "state_var.m"
        *hlds__make_hlds__state_var__Var_12 = hlds__make_hlds__state_var__StateVar_11;
#line 1768 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1768 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
#line 1762 "state_var.m"
      }
#line 1728 "state_var.m"
  }
#line 236 "state_var.m"
}

#line 229 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(
#line 229 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_10,
#line 229 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_11,
#line 229 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Var_12,
#line 229 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23,
#line 229 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24,
#line 229 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25,
#line 229 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_26,
#line 229 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27,
#line 229 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28)
#line 229 "state_var.m"
{
#line 1695 "state_var.m"
  {
#line 1695 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_16 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1722 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Status_17;
#line 1697 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_Status_17;

#line 1697 "state_var.m"
    {
#line 1697 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_16, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), &hlds__make_hlds__state_var__conv0_Status_17);
    }
#line 1697 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1697 "state_var.m"
      {
#line 1697 "state_var.m"
        hlds__make_hlds__state_var__Status_17 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_17);
#line 1697 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1697 "state_var.m"
      }
#line 1722 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1707 "state_var.m"
      if ((hlds__make_hlds__state_var__Status_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1699 "state_var.m"
        {
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_107;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__StatusMap_18;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1699 "state_var.m"
          MR_String hlds__make_hlds__state_var__Name_57;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__Pieces_58;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__Msg_59;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__Spec_60;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_63_63;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_64_64;
#line 1699 "state_var.m"
          MR_String hlds__make_hlds__state_var__V_65_65;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_73_73;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_74_74;
#line 1699 "state_var.m"
          MR_Word hlds__make_hlds__state_var__V_78_78;
#line 1699 "state_var.m"
          MR_String hlds__make_hlds__state_var__SVarName_88;
#line 1699 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarBaseName_90;

#line 1976 "state_var.m"
          {
#line 1976 "state_var.m"
            hlds__make_hlds__state_var__Name_57 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
          }
#line 1978 "state_var.m"
          {
#line 1978 "state_var.m"
            hlds__make_hlds__state_var__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_57);
          }
#line 1978 "state_var.m"
          {
#line 1978 "state_var.m"
            hlds__make_hlds__state_var__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 1978 "state_var.m"
          }
#line 1977 "state_var.m"
          {
#line 1977 "state_var.m"
            hlds__make_hlds__state_var__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_64_64));
#line 1977 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1977 "state_var.m"
          }
#line 1977 "state_var.m"
          {
#line 1977 "state_var.m"
            hlds__make_hlds__state_var__Pieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
#line 1977 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_58, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_63_63));
#line 1977 "state_var.m"
          }
#line 1979 "state_var.m"
          {
#line 1979 "state_var.m"
            hlds__make_hlds__state_var__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "state_var.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_58));
#line 1979 "state_var.m"
          }
#line 1979 "state_var.m"
          {
#line 1979 "state_var.m"
            hlds__make_hlds__state_var__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 1979 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1979 "state_var.m"
          }
#line 1979 "state_var.m"
          {
#line 1979 "state_var.m"
            hlds__make_hlds__state_var__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "state_var.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_10));
#line 1979 "state_var.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_73_73));
#line 1979 "state_var.m"
          }
#line 1980 "state_var.m"
          {
#line 1980 "state_var.m"
            hlds__make_hlds__state_var__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_59));
#line 1980 "state_var.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1980 "state_var.m"
          }
#line 1980 "state_var.m"
          {
#line 1980 "state_var.m"
            hlds__make_hlds__state_var__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1980 "state_var.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1980 "state_var.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1980 "state_var.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_78_78));
#line 1980 "state_var.m"
          }
#line 1981 "state_var.m"
          {
#line 1981 "state_var.m"
            MR_Word base;
#line 1981 "state_var.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = base;
#line 1981 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_60));
#line 1981 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27));
#line 1981 "state_var.m"
          }
#line 12785 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__TypeCtorInfo_31_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
          {
#line 382 "state_var.m"
            hlds__make_hlds__state_var__SVarName_88 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_107, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
          }
#line 12792 "hlds.make_hlds.state_var.c"
          {
#line 12794 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__ProgVarBaseName_90 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_88);
          }
#line 390 "state_var.m"
          {
#line 390 "state_var.m"
            mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_107, hlds__make_hlds__state_var__ProgVarBaseName_90, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
          }
#line 1704 "state_var.m"
          {
#line 1704 "state_var.m"
            hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1704 "state_var.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1704 "state_var.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1704 "state_var.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1704 "state_var.m"
          }
#line 1704 "state_var.m"
          {
#line 1704 "state_var.m"
            mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_37_37)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_18);
          }
#line 1706 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_18;
#line 1699 "state_var.m"
        }
#line 1707 "state_var.m"
      else
#line 1707 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) == (MR_mktag((MR_Integer) 2))))
#line 1718 "state_var.m"
          {
#line 1718 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_21_21;

#line 1718 "state_var.m"
            *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1718 "state_var.m"
            hlds__make_hlds__state_var__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1718 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1718 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1718 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
#line 1718 "state_var.m"
          }
#line 1707 "state_var.m"
        else
#line 1707 "state_var.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) == (MR_mktag((MR_Integer) 1))))
#line 1708 "state_var.m"
            {
#line 1708 "state_var.m"
              MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_138;
#line 1708 "state_var.m"
              MR_Word hlds__make_hlds__state_var__NewVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1708 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_32_32;
#line 1708 "state_var.m"
              MR_Word hlds__make_hlds__state_var__StatusMap_42;
#line 1708 "state_var.m"
              MR_String hlds__make_hlds__state_var__SVarName_119;
#line 1708 "state_var.m"
              MR_String hlds__make_hlds__state_var__ProgVarBaseName_121;

#line 1709 "state_var.m"
              {
#line 1709 "state_var.m"
                hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28);
              }
#line 12868 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__TypeCtorInfo_31_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
              {
#line 382 "state_var.m"
                hlds__make_hlds__state_var__SVarName_119 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_138, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
              }
#line 12875 "hlds.make_hlds.state_var.c"
              {
#line 12877 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__ProgVarBaseName_121 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_119);
              }
#line 390 "state_var.m"
              {
#line 390 "state_var.m"
                mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_138, hlds__make_hlds__state_var__ProgVarBaseName_121, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
              }
#line 1713 "state_var.m"
              {
#line 1713 "state_var.m"
                hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "state_var.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1713 "state_var.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 1) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1713 "state_var.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 2) = ((MR_Box) (hlds__make_hlds__state_var__NewVar_19));
#line 1713 "state_var.m"
              }
#line 1713 "state_var.m"
              {
#line 1713 "state_var.m"
                mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_32_32)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_42);
              }
#line 1715 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_42;
#line 1708 "state_var.m"
            }
#line 1707 "state_var.m"
          else
#line 1707 "state_var.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1717 "state_var.m"
              {
#line 1717 "state_var.m"
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
#line 1717 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1717 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1717 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
#line 1717 "state_var.m"
              }
#line 1707 "state_var.m"
            else
#line 1719 "state_var.m"
              {
#line 1719 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_22_22;

#line 1719 "state_var.m"
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
#line 1719 "state_var.m"
                hlds__make_hlds__state_var__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1719 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1719 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1719 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
#line 1719 "state_var.m"
              }
#line 1722 "state_var.m"
    else
#line 1724 "state_var.m"
      {
#line 1723 "state_var.m"
        {
#line 1723 "state_var.m"
          hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0((MR_String) ".", hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28);
        }
#line 1725 "state_var.m"
        *hlds__make_hlds__state_var__Var_12 = hlds__make_hlds__state_var__StateVar_11;
#line 1725 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1725 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1724 "state_var.m"
      }
#line 1695 "state_var.m"
  }
#line 229 "state_var.m"
}

#line 222 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(
#line 222 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Arg0_9,
#line 222 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Arg_10,
#line 222 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19,
#line 222 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20,
#line 222 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21,
#line 222 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_22,
#line 222 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23,
#line 222 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24)
#line 222 "state_var.m"
{
#line 1687 "state_var.m"
  {
#line 1687 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg0_9)) == (MR_mktag((MR_Integer) 0)));
#line 1687 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StateVar_14;
#line 1687 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Context_16;
#line 1684 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1684 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_26_26;
#line 1684 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_27_27;
#line 1684 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1684 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 1684 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_15_15;

#line 1684 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1684 "state_var.m"
      {
#line 1684 "state_var.m"
        hlds__make_hlds__state_var__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 0)));
#line 1684 "state_var.m"
        hlds__make_hlds__state_var__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 1)));
#line 1684 "state_var.m"
        hlds__make_hlds__state_var__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 2)));
#line 1684 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1684 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1684 "state_var.m"
          {
#line 1684 "state_var.m"
            hlds__make_hlds__state_var__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_25_25, (MR_Integer) 0)));
#line 1684 "state_var.m"
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_26_26, (MR_String) "!.") == 0);
#line 1684 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1684 "state_var.m"
              {
#line 1684 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1684 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1684 "state_var.m"
                  {
#line 1684 "state_var.m"
                    hlds__make_hlds__state_var__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, (MR_Integer) 0)));
#line 1684 "state_var.m"
                    hlds__make_hlds__state_var__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, (MR_Integer) 1)));
#line 1684 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1684 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1684 "state_var.m"
                      {
#line 1684 "state_var.m"
                        hlds__make_hlds__state_var__StateVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, (MR_Integer) 0)));
#line 1684 "state_var.m"
                        hlds__make_hlds__state_var__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, (MR_Integer) 1)));
#line 1684 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1684 "state_var.m"
                      }
#line 1684 "state_var.m"
                  }
#line 1684 "state_var.m"
              }
#line 1684 "state_var.m"
          }
#line 1684 "state_var.m"
      }
#line 1687 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1685 "state_var.m"
      {
#line 1685 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Var_17;
#line 1685 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_33_33;

#line 1685 "state_var.m"
        {
#line 1685 "state_var.m"
          hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__state_var__Context_16, hlds__make_hlds__state_var__StateVar_14, &hlds__make_hlds__state_var__Var_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_State_22, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24);
        }
#line 1686 "state_var.m"
        {
#line 1686 "state_var.m"
          hlds__make_hlds__state_var__V_33_33 = mercury__term__context_init_0_f_0();
        }
#line 1686 "state_var.m"
        {
#line 1686 "state_var.m"
          MR_Word base;
#line 1686 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1686 "state_var.m"
          *hlds__make_hlds__state_var__Arg_10 = base;
#line 1686 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_17));
#line 1686 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 1686 "state_var.m"
        }
#line 1685 "state_var.m"
      }
#line 1687 "state_var.m"
    else
#line 1691 "state_var.m"
      {
#line 1691 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar_44;
#line 1691 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Context_45;
#line 1687 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_34_34;
#line 1687 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_35_35;
#line 1687 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_36_36;
#line 1687 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1687 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_38_38;
#line 1687 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_18_18;

#line 1687 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg0_9)) == (MR_mktag((MR_Integer) 0)));
#line 1687 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1687 "state_var.m"
          {
#line 1687 "state_var.m"
            hlds__make_hlds__state_var__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 0)));
#line 1687 "state_var.m"
            hlds__make_hlds__state_var__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 1)));
#line 1687 "state_var.m"
            hlds__make_hlds__state_var__Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 2)));
#line 1687 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 1687 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1687 "state_var.m"
              {
#line 1687 "state_var.m"
                hlds__make_hlds__state_var__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_34_34, (MR_Integer) 0)));
#line 1687 "state_var.m"
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_35_35, (MR_String) "!:") == 0);
#line 1687 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1687 "state_var.m"
                  {
#line 1687 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 1687 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1687 "state_var.m"
                      {
#line 1687 "state_var.m"
                        hlds__make_hlds__state_var__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, (MR_Integer) 0)));
#line 1687 "state_var.m"
                        hlds__make_hlds__state_var__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, (MR_Integer) 1)));
#line 1687 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 1687 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1687 "state_var.m"
                          {
#line 1687 "state_var.m"
                            hlds__make_hlds__state_var__StateVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, (MR_Integer) 0)));
#line 1687 "state_var.m"
                            hlds__make_hlds__state_var__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, (MR_Integer) 1)));
#line 1687 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1687 "state_var.m"
                          }
#line 1687 "state_var.m"
                      }
#line 1687 "state_var.m"
                  }
#line 1687 "state_var.m"
              }
#line 1687 "state_var.m"
          }
#line 1691 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1689 "state_var.m"
          {
#line 1689 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_42_42;
#line 1689 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Var_43;

#line 1688 "state_var.m"
            {
#line 1688 "state_var.m"
              hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(hlds__make_hlds__state_var__Context_45, hlds__make_hlds__state_var__StateVar_44, &hlds__make_hlds__state_var__Var_43, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_State_22, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24);
            }
#line 1690 "state_var.m"
            {
#line 1690 "state_var.m"
              hlds__make_hlds__state_var__V_42_42 = mercury__term__context_init_0_f_0();
            }
#line 1690 "state_var.m"
            {
#line 1690 "state_var.m"
              MR_Word base;
#line 1690 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1690 "state_var.m"
              *hlds__make_hlds__state_var__Arg_10 = base;
#line 1690 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_43));
#line 1690 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_42_42));
#line 1690 "state_var.m"
            }
#line 1689 "state_var.m"
          }
#line 1691 "state_var.m"
        else
#line 1692 "state_var.m"
          {
#line 1692 "state_var.m"
            *hlds__make_hlds__state_var__Arg_10 = hlds__make_hlds__state_var__Arg0_9;
#line 1692 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23;
#line 1692 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_22 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21;
#line 1692 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19;
#line 1692 "state_var.m"
          }
#line 1691 "state_var.m"
      }
#line 1687 "state_var.m"
  }
#line 222 "state_var.m"
}

#line 215 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(
#line 215 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 215 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
#line 215 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3,
#line 215 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4,
#line 215 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
#line 215 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
#line 215 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7,
#line 215 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8)
#line 215 "state_var.m"
{
#line 1677 "state_var.m"
  {
#line 1677 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1677 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1677 "state_var.m"
      {
#line 1677 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1677 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7;
#line 1677 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_6 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5;
#line 1677 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3;
#line 1677 "state_var.m"
      }
#line 1677 "state_var.m"
    else
#line 1679 "state_var.m"
      {
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Arg0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Arg_20;
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Args_21;
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31;
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32;
#line 1679 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33;

#line 1680 "state_var.m"
        {
#line 1680 "state_var.m"
          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__state_var__Arg0_18, &hlds__make_hlds__state_var__Arg_20, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33);
        }
#line 1681 "state_var.m"
        {
#line 1681 "state_var.m"
          hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__state_var__Args0_19, &hlds__make_hlds__state_var__Args_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4, hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_State_6, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8);
        }
#line 1679 "state_var.m"
        {
#line 1679 "state_var.m"
          MR_Word base;
#line 1679 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 1679 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Arg_20));
#line 1679 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Args_21));
#line 1679 "state_var.m"
        }
#line 1679 "state_var.m"
      }
#line 1677 "state_var.m"
  }
#line 215 "state_var.m"
}

#line 204 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var___Context_11,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InnerScopeInfo_12,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InnerDIVar_13,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InnerUOVar_14,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_29,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31,
#line 204 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32,
#line 204 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33)
#line 204 "state_var.m"
{
#line 1655 "state_var.m"
  {
#line 1655 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1655 "state_var.m"
    {
#line 1655 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(hlds__make_hlds__state_var__InnerScopeInfo_12, hlds__make_hlds__state_var__InnerDIVar_13, hlds__make_hlds__state_var__InnerUOVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28, hlds__make_hlds__state_var__STATE_VARIABLE_State_29, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33);
#line 1655 "state_var.m"
      return;
    }
#line 1655 "state_var.m"
  }
#line 204 "state_var.m"
}

#line 191 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var___Context_10,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InnerStateVar_11,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InnerScopeInfo_12,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_21,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23,
#line 191 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24,
#line 191 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25)
#line 191 "state_var.m"
{
#line 1645 "state_var.m"
  {
#line 1645 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1645 "state_var.m"
    {
#line 1645 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(hlds__make_hlds__state_var__InnerStateVar_11, hlds__make_hlds__state_var__InnerScopeInfo_12, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25);
#line 1645 "state_var.m"
      return;
    }
#line 1645 "state_var.m"
  }
#line 191 "state_var.m"
}

#line 182 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(
#line 182 "state_var.m"
  MR_Word hlds__make_hlds__state_var__OuterScopeInfo_4,
#line 182 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11,
#line 182 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_12)
#line 182 "state_var.m"
{
#line 1627 "state_var.m"
  {
#line 1627 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1627 "state_var.m"
    if ((hlds__make_hlds__state_var__OuterScopeInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1632 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_State_12 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11;
#line 1627 "state_var.m"
    else
#line 1627 "state_var.m"
      {
#line 1627 "state_var.m"
        MR_Word hlds__make_hlds__state_var__OuterStateVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 0)));
#line 1627 "state_var.m"
        MR_Word hlds__make_hlds__state_var__AfterStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 2)));
#line 1627 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap0_9 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11;
#line 1627 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap_10;
#line 1626 "state_var.m"
        MR_Word hlds__make_hlds__state_var___BeforeStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 1)));

#line 1629 "state_var.m"
        {
#line 1629 "state_var.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_6)), ((MR_Box) (hlds__make_hlds__state_var__AfterStatus_8)), hlds__make_hlds__state_var__StatusMap0_9, &hlds__make_hlds__state_var__StatusMap_10);
        }
#line 1630 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_12 = (MR_Word) hlds__make_hlds__state_var__StatusMap_10;
#line 1627 "state_var.m"
      }
#line 1627 "state_var.m"
  }
#line 182 "state_var.m"
}

#line 172 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(
#line 172 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_12,
#line 172 "state_var.m"
  MR_Word hlds__make_hlds__state_var__OuterStateVar_13,
#line 172 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__OuterDIVar_14,
#line 172 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__OuterUOVar_15,
#line 172 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__OuterScopeInfo_16,
#line 172 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29,
#line 172 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_30,
#line 172 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31,
#line 172 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32,
#line 172 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33,
#line 172 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34)
#line 172 "state_var.m"
{
#line 1575 "state_var.m"
  {
#line 1575 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1575 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_20 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29;
#line 1614 "state_var.m"
    MR_Word hlds__make_hlds__state_var__BeforeStatus_21;
#line 1614 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap_22;
#line 1577 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_BeforeStatus_21;

#line 1577 "state_var.m"
    {
#line 1577 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__remove_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13)), &hlds__make_hlds__state_var__conv0_BeforeStatus_21, hlds__make_hlds__state_var__StatusMap0_20, &hlds__make_hlds__state_var__StatusMap_22);
    }
#line 1577 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1577 "state_var.m"
      {
#line 1577 "state_var.m"
        hlds__make_hlds__state_var__BeforeStatus_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeStatus_21);
#line 1577 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1577 "state_var.m"
      }
#line 1614 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1578 "state_var.m"
      {
#line 1578 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_30 = (MR_Word) hlds__make_hlds__state_var__StatusMap_22;
#line 1589 "state_var.m"
        if ((hlds__make_hlds__state_var__BeforeStatus_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1580 "state_var.m"
          {
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_179;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_210;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48;
#line 1580 "state_var.m"
            MR_String hlds__make_hlds__state_var__Name_67;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Pieces_68;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Msg_69;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Spec_70;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_73_73;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_74_74;
#line 1580 "state_var.m"
            MR_String hlds__make_hlds__state_var__V_75_75;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_83_83;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_84_84;
#line 1580 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_88_88;
#line 1580 "state_var.m"
            MR_String hlds__make_hlds__state_var__SVarName_160;
#line 1580 "state_var.m"
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_162;
#line 1580 "state_var.m"
            MR_String hlds__make_hlds__state_var__SVarName_191;
#line 1580 "state_var.m"
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_193;

#line 1976 "state_var.m"
            {
#line 1976 "state_var.m"
              hlds__make_hlds__state_var__Name_67 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
            }
#line 1978 "state_var.m"
            {
#line 1978 "state_var.m"
              hlds__make_hlds__state_var__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_67);
            }
#line 1978 "state_var.m"
            {
#line 1978 "state_var.m"
              hlds__make_hlds__state_var__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_75_75));
#line 1978 "state_var.m"
            }
#line 1977 "state_var.m"
            {
#line 1977 "state_var.m"
              hlds__make_hlds__state_var__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 1977 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1977 "state_var.m"
            }
#line 1977 "state_var.m"
            {
#line 1977 "state_var.m"
              hlds__make_hlds__state_var__Pieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
#line 1977 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_68, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_73_73));
#line 1977 "state_var.m"
            }
#line 1979 "state_var.m"
            {
#line 1979 "state_var.m"
              hlds__make_hlds__state_var__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_68));
#line 1979 "state_var.m"
            }
#line 1979 "state_var.m"
            {
#line 1979 "state_var.m"
              hlds__make_hlds__state_var__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_84_84));
#line 1979 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1979 "state_var.m"
            }
#line 1979 "state_var.m"
            {
#line 1979 "state_var.m"
              hlds__make_hlds__state_var__Msg_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_69, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_12));
#line 1979 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_69, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_83_83));
#line 1979 "state_var.m"
            }
#line 1980 "state_var.m"
            {
#line 1980 "state_var.m"
              hlds__make_hlds__state_var__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_69));
#line 1980 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1980 "state_var.m"
            }
#line 1980 "state_var.m"
            {
#line 1980 "state_var.m"
              hlds__make_hlds__state_var__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1980 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1980 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1980 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_88_88));
#line 1980 "state_var.m"
            }
#line 1981 "state_var.m"
            {
#line 1981 "state_var.m"
              MR_Word base;
#line 1981 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34 = base;
#line 1981 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_70));
#line 1981 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33));
#line 1981 "state_var.m"
            }
#line 13654 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_31_179 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
            {
#line 382 "state_var.m"
              hlds__make_hlds__state_var__SVarName_160 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
            }
#line 13661 "hlds.make_hlds.state_var.c"
            {
#line 13663 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__ProgVarBaseName_162 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_160);
            }
#line 390 "state_var.m"
            {
#line 390 "state_var.m"
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__ProgVarBaseName_162, hlds__make_hlds__state_var__OuterDIVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48);
            }
#line 13671 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_31_210 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
            {
#line 382 "state_var.m"
              hlds__make_hlds__state_var__SVarName_191 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_210, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__state_var__OuterStateVar_13);
            }
#line 13678 "hlds.make_hlds.state_var.c"
            {
#line 13680 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__ProgVarBaseName_193 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_191);
            }
#line 390 "state_var.m"
            {
#line 390 "state_var.m"
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_210, hlds__make_hlds__state_var__ProgVarBaseName_193, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
            }
#line 1587 "state_var.m"
            {
#line 1587 "state_var.m"
              MR_Word base;
#line 1587 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "state_var.m"
              *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
#line 1587 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
#line 1587 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1587 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1587 "state_var.m"
            }
#line 1580 "state_var.m"
          }
#line 1589 "state_var.m"
        else
#line 1589 "state_var.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_21)) == (MR_mktag((MR_Integer) 2))))
#line 1591 "state_var.m"
            {
#line 1591 "state_var.m"
              MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_148;
#line 1591 "state_var.m"
              MR_Word hlds__make_hlds__state_var__RO_Context_24;
#line 1591 "state_var.m"
              MR_String hlds__make_hlds__state_var__SVarName_129;
#line 1591 "state_var.m"
              MR_String hlds__make_hlds__state_var__ProgVarBaseName_131;

#line 1590 "state_var.m"
              *hlds__make_hlds__state_var__OuterDIVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 0)));
#line 1590 "state_var.m"
              hlds__make_hlds__state_var__RO_Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 2)));
#line 1592 "state_var.m"
              {
#line 1592 "state_var.m"
                hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(hlds__make_hlds__state_var__Context_12, (MR_String) "lambda expression", hlds__make_hlds__state_var__RO_Context_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34);
              }
#line 13730 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__TypeCtorInfo_31_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
              {
#line 382 "state_var.m"
                hlds__make_hlds__state_var__SVarName_129 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
              }
#line 13737 "hlds.make_hlds.state_var.c"
              {
#line 13739 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__ProgVarBaseName_131 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_129);
              }
#line 390 "state_var.m"
              {
#line 390 "state_var.m"
                mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__ProgVarBaseName_131, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
              }
#line 1597 "state_var.m"
              {
#line 1597 "state_var.m"
                MR_Word base;
#line 1597 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "state_var.m"
                *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
#line 1597 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
#line 1597 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1597 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1597 "state_var.m"
              }
#line 1591 "state_var.m"
            }
#line 1589 "state_var.m"
          else
#line 1589 "state_var.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1600 "state_var.m"
              {
#line 1600 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_117;
#line 1600 "state_var.m"
                MR_Word hlds__make_hlds__state_var__AfterStatus_25;
#line 1600 "state_var.m"
                MR_String hlds__make_hlds__state_var__SVarName_98;
#line 1600 "state_var.m"
                MR_String hlds__make_hlds__state_var__ProgVarBaseName_100;

#line 1600 "state_var.m"
                *hlds__make_hlds__state_var__OuterDIVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 1)));
#line 13782 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeCtorInfo_31_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 382 "state_var.m"
                {
#line 382 "state_var.m"
                  hlds__make_hlds__state_var__SVarName_98 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
                }
#line 13789 "hlds.make_hlds.state_var.c"
                {
#line 13791 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__ProgVarBaseName_100 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_98);
                }
#line 390 "state_var.m"
                {
#line 390 "state_var.m"
                  mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__ProgVarBaseName_100, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
                }
#line 1603 "state_var.m"
                {
#line 1603 "state_var.m"
                  hlds__make_hlds__state_var__AfterStatus_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1603 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterStatus_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1603 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterStatus_25, 1) = ((MR_Box) (*hlds__make_hlds__state_var__OuterUOVar_15));
#line 1603 "state_var.m"
                }
#line 1604 "state_var.m"
                {
#line 1604 "state_var.m"
                  MR_Word base;
#line 1604 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "state_var.m"
                  *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
#line 1604 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
#line 1604 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1604 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__AfterStatus_25));
#line 1604 "state_var.m"
                }
#line 1604 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33;
#line 1600 "state_var.m"
              }
#line 1589 "state_var.m"
            else
#line 1609 "state_var.m"
              {
#line 1612 "state_var.m"
                {
#line 1612 "state_var.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
#line 1612 "state_var.m"
                  return;
                }
#line 1609 "state_var.m"
              }
#line 1578 "state_var.m"
      }
#line 1614 "state_var.m"
    else
#line 1616 "state_var.m"
      {
#line 1616 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55;

#line 1615 "state_var.m"
        {
#line 1615 "state_var.m"
          hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0((MR_String) "", hlds__make_hlds__state_var__Context_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34);
        }
#line 1617 "state_var.m"
        {
#line 1617 "state_var.m"
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterDIVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55);
        }
#line 1619 "state_var.m"
        {
#line 1619 "state_var.m"
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
        }
#line 1621 "state_var.m"
        *hlds__make_hlds__state_var__OuterScopeInfo_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1621 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_30 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29;
#line 1616 "state_var.m"
      }
#line 1575 "state_var.m"
  }
#line 172 "state_var.m"
}

#line 1194 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3(
#line 1194 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1194 "state_var.m"
{
#line 1194 "state_var.m"
  {
#line 1194 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1194 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1194 "state_var.m"
    {
#line 1194 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1194 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1194 "state_var.m"
  }
#line 1194 "state_var.m"
}

#line 1192 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2(
#line 1192 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1192 "state_var.m"
{
#line 1192 "state_var.m"
  {
#line 1192 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1192 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1192 "state_var.m"
    {
#line 1192 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1192 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1192 "state_var.m"
  }
#line 1192 "state_var.m"
}

#line 1190 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1(
#line 1190 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1190 "state_var.m"
{
#line 1190 "state_var.m"
  {
#line 1190 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1190 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1190 "state_var.m"
    {
#line 1190 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1190 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1190 "state_var.m"
  }
#line 1190 "state_var.m"
}

#line 149 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_19,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_20,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__QuantStateVars_21,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ThenGoal0_22,
#line 149 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ThenGoal_23,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ElseGoal0_24,
#line 149 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ElseGoal_25,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateBefore_26,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateAfterCond_27,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateAfterThen_28,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateAfterElse_29,
#line 149 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StateAfterITE_30,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_78,
#line 149 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_79,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80,
#line 149 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_81,
#line 149 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_82,
#line 149 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_83)
#line 149 "state_var.m"
{
#line 1181 "state_var.m"
  {
#line 1181 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_122_122 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_123_123 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_127_127;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_128_128;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_129_129;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_33;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapBefore_34 = (MR_Word) hlds__make_hlds__state_var__StateBefore_26;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_35 = (MR_Word) hlds__make_hlds__state_var__StateAfterCond_27;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_36 = (MR_Word) hlds__make_hlds__state_var__StateAfterThen_28;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_37 = (MR_Word) hlds__make_hlds__state_var__StateAfterElse_29;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsBefore_38;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterITE_42;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NeckCopyGoals_43;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenEndCopyGoals_44;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseEndCopyGoals_45;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenRenames_46;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseRenames_47;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenMissingInits_48;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseMissingInits_49;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoals0_58;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoals0_59;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoals_60;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoals_61;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenInfo0_63;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseInfo0_65;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoal1_66;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoal1_67;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId0_68;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings0_69;
#line 1181 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__ThenGoalIdNum_70;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId1_71;
#line 1181 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__ElseGoalIdNum_72;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId_73;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoalId_74;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoalId_75;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings1_76;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings_77;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_84_84;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_87_87;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_90_90;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_93_93;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109;
#line 1181 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_110_110;
#line 1232 "state_var.m"
    MR_Word hlds__make_hlds__state_var___ThenExpr0_62;
#line 1233 "state_var.m"
    MR_Word hlds__make_hlds__state_var___ElseExpr0_64;

#line 1186 "state_var.m"
    {
#line 1186 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapBefore_34, &hlds__make_hlds__state_var__SVarsBefore_38);
    }
#line 1187 "state_var.m"
    {
#line 1187 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterCond_35, &hlds__make_hlds__state_var__SVarsAfterCond_39);
    }
#line 1188 "state_var.m"
    {
#line 1188 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterThen_36, &hlds__make_hlds__state_var__SVarsAfterThen_40);
    }
#line 1189 "state_var.m"
    {
#line 1189 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterElse_37, &hlds__make_hlds__state_var__SVarsAfterElse_41);
    }
#line 1190 "state_var.m"
    {
#line 1190 "state_var.m"
      hlds__make_hlds__state_var__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
#line 1190 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1));
#line 1190 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1190 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
#line 1190 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterCond_39));
#line 1190 "state_var.m"
    }
#line 1190 "state_var.m"
    {
#line 1190 "state_var.m"
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_84_84, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before not sublist of Cond");
    }
#line 1192 "state_var.m"
    {
#line 1192 "state_var.m"
      hlds__make_hlds__state_var__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
#line 1192 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2));
#line 1192 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1192 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
#line 1192 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterThen_40));
#line 1192 "state_var.m"
    }
#line 1192 "state_var.m"
    {
#line 1192 "state_var.m"
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_87_87, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before != AfterThen");
    }
#line 1194 "state_var.m"
    {
#line 1194 "state_var.m"
      hlds__make_hlds__state_var__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
#line 1194 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3));
#line 1194 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1194 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
#line 1194 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterElse_41));
#line 1194 "state_var.m"
    }
#line 1194 "state_var.m"
    {
#line 1194 "state_var.m"
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_90_90, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before != AfterElse");
    }
#line 1197 "state_var.m"
    {
#line 1197 "state_var.m"
      hlds__make_hlds__state_var__V_93_93 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123);
    }
#line 1197 "state_var.m"
    {
#line 1197 "state_var.m"
      hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(hlds__make_hlds__state_var__LocKind_19, hlds__make_hlds__state_var__QuantStateVars_21, hlds__make_hlds__state_var__SVarsBefore_38, hlds__make_hlds__state_var__StatusMapBefore_34, hlds__make_hlds__state_var__StatusMapAfterCond_35, hlds__make_hlds__state_var__StatusMapAfterThen_36, hlds__make_hlds__state_var__StatusMapAfterElse_37, hlds__make_hlds__state_var__V_93_93, &hlds__make_hlds__state_var__StatusMapAfterITE_42, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_78, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__NeckCopyGoals_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenEndCopyGoals_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseEndCopyGoals_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenRenames_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseRenames_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenMissingInits_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseMissingInits_49);
    }
#line 1204 "state_var.m"
    *hlds__make_hlds__state_var__StateAfterITE_30 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfterITE_42;
#line 1211 "state_var.m"
    if ((hlds__make_hlds__state_var__ThenMissingInits_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1210 "state_var.m"
      hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80;
#line 1211 "state_var.m"
    else
#line 1212 "state_var.m"
      {
#line 1212 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ThenSpecs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 2)));
#line 1212 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ThenSpecs_53;
#line 1213 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 0)));
#line 1213 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 1)));
#line 1216 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_114_114;
#line 1216 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_115_115;
#line 1216 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_116_116;

#line 1214 "state_var.m"
        {
#line 1214 "state_var.m"
          hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(hlds__make_hlds__state_var__Context_20, hlds__make_hlds__state_var__ThenMissingInits_48, (MR_String) "succeeds", (MR_String) "fails", hlds__make_hlds__state_var__ThenSpecs0_52, &hlds__make_hlds__state_var__ThenSpecs_53);
        }
#line 1216 "state_var.m"
        hlds__make_hlds__state_var__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 0)));
#line 1216 "state_var.m"
        hlds__make_hlds__state_var__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 1)));
#line 1216 "state_var.m"
        hlds__make_hlds__state_var__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 2)));
#line 1216 "state_var.m"
        {
#line 1216 "state_var.m"
          hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_114_114));
#line 1216 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_115_115));
#line 1216 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 2) = ((MR_Box) (hlds__make_hlds__state_var__ThenSpecs_53));
#line 1216 "state_var.m"
        }
#line 1212 "state_var.m"
      }
#line 1220 "state_var.m"
    if ((hlds__make_hlds__state_var__ElseMissingInits_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1219 "state_var.m"
      hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104;
#line 1220 "state_var.m"
    else
#line 1221 "state_var.m"
      {
#line 1221 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ElseSpecs0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 2)));
#line 1221 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ElseSpecs_57;
#line 1222 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 0)));
#line 1222 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 1)));
#line 1225 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_119_119;
#line 1225 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_120_120;
#line 1225 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_121_121;

#line 1223 "state_var.m"
        {
#line 1223 "state_var.m"
          hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(hlds__make_hlds__state_var__Context_20, hlds__make_hlds__state_var__ThenMissingInits_48, (MR_String) "fails", (MR_String) "succeeds", hlds__make_hlds__state_var__ElseSpecs0_56, &hlds__make_hlds__state_var__ElseSpecs_57);
        }
#line 1225 "state_var.m"
        hlds__make_hlds__state_var__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 0)));
#line 1225 "state_var.m"
        hlds__make_hlds__state_var__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 1)));
#line 1225 "state_var.m"
        hlds__make_hlds__state_var__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 2)));
#line 1225 "state_var.m"
        {
#line 1225 "state_var.m"
          hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_119_119));
#line 1225 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_120_120));
#line 1225 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 2) = ((MR_Box) (hlds__make_hlds__state_var__ElseSpecs_57));
#line 1225 "state_var.m"
        }
#line 1221 "state_var.m"
      }
#line 1228 "state_var.m"
    {
#line 1228 "state_var.m"
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__state_var__ThenGoal0_22, &hlds__make_hlds__state_var__ThenGoals0_58, hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108);
    }
#line 1229 "state_var.m"
    {
#line 1229 "state_var.m"
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__state_var__ElseGoal0_24, &hlds__make_hlds__state_var__ElseGoals0_59, hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109);
    }
#line 14304 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1230 "state_var.m"
    {
#line 1230 "state_var.m"
      hlds__make_hlds__state_var__V_110_110 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__ThenGoals0_58, hlds__make_hlds__state_var__ThenEndCopyGoals_44);
    }
#line 1230 "state_var.m"
    {
#line 1230 "state_var.m"
      hlds__make_hlds__state_var__ThenGoals_60 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__NeckCopyGoals_43, hlds__make_hlds__state_var__V_110_110);
    }
#line 1231 "state_var.m"
    {
#line 1231 "state_var.m"
      hlds__make_hlds__state_var__ElseGoals_61 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__ElseGoals0_59, hlds__make_hlds__state_var__ElseEndCopyGoals_45);
    }
#line 1232 "state_var.m"
    hlds__make_hlds__state_var___ThenExpr0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ThenGoal0_22, (MR_Integer) 0)));
#line 1232 "state_var.m"
    hlds__make_hlds__state_var__ThenInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ThenGoal0_22, (MR_Integer) 1)));
#line 1233 "state_var.m"
    hlds__make_hlds__state_var___ElseExpr0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ElseGoal0_24, (MR_Integer) 0)));
#line 1233 "state_var.m"
    hlds__make_hlds__state_var__ElseInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ElseGoal0_24, (MR_Integer) 1)));
#line 1234 "state_var.m"
    {
#line 1234 "state_var.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__state_var__ThenGoals_60, hlds__make_hlds__state_var__ThenInfo0_63, &hlds__make_hlds__state_var__ThenGoal1_66);
    }
#line 1235 "state_var.m"
    {
#line 1235 "state_var.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__state_var__ElseGoals_61, hlds__make_hlds__state_var__ElseInfo0_65, &hlds__make_hlds__state_var__ElseGoal1_67);
    }
#line 1237 "state_var.m"
    hlds__make_hlds__state_var__NextGoalId0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 0)));
#line 1237 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamings0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 1)));
#line 1237 "state_var.m"
    hlds__make_hlds__state_var__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 2)));
#line 1238 "state_var.m"
    {
#line 1238 "state_var.m"
      mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ThenGoalIdNum_70, hlds__make_hlds__state_var__NextGoalId0_68, &hlds__make_hlds__state_var__NextGoalId1_71);
    }
#line 1239 "state_var.m"
    {
#line 1239 "state_var.m"
      mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ElseGoalIdNum_72, hlds__make_hlds__state_var__NextGoalId1_71, &hlds__make_hlds__state_var__NextGoalId_73);
    }
#line 1240 "state_var.m"
    hlds__make_hlds__state_var__ThenGoalId_74 = (MR_Word) hlds__make_hlds__state_var__ThenGoalIdNum_70;
#line 1241 "state_var.m"
    hlds__make_hlds__state_var__ElseGoalId_75 = (MR_Word) hlds__make_hlds__state_var__ElseGoalIdNum_72;
#line 1242 "state_var.m"
    {
#line 1242 "state_var.m"
      hlds__hlds_goal__goal_set_goal_id_3_p_0(hlds__make_hlds__state_var__ThenGoalId_74, hlds__make_hlds__state_var__ThenGoal1_66, hlds__make_hlds__state_var__ThenGoal_23);
    }
#line 1243 "state_var.m"
    {
#line 1243 "state_var.m"
      hlds__hlds_goal__goal_set_goal_id_3_p_0(hlds__make_hlds__state_var__ElseGoalId_75, hlds__make_hlds__state_var__ElseGoal1_67, hlds__make_hlds__state_var__ElseGoal_25);
    }
#line 14369 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeCtorInfo_128_128 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 14371 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeInfo_129_129 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1];
#line 1244 "state_var.m"
    {
#line 1244 "state_var.m"
      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_128_128, hlds__make_hlds__state_var__TypeInfo_129_129, ((MR_Box) (hlds__make_hlds__state_var__ThenGoalId_74)), ((MR_Box) (hlds__make_hlds__state_var__ThenRenames_46)), hlds__make_hlds__state_var__DelayedRenamings0_69, &hlds__make_hlds__state_var__DelayedRenamings1_76);
    }
#line 1246 "state_var.m"
    {
#line 1246 "state_var.m"
      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_128_128, hlds__make_hlds__state_var__TypeInfo_129_129, ((MR_Box) (hlds__make_hlds__state_var__ElseGoalId_75)), ((MR_Box) (hlds__make_hlds__state_var__ElseRenames_47)), hlds__make_hlds__state_var__DelayedRenamings1_76, &hlds__make_hlds__state_var__DelayedRenamings_77);
    }
#line 1248 "state_var.m"
    {
#line 1248 "state_var.m"
      MR_Word base;
#line 1248 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_81 = base;
#line 1248 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_73));
#line 1248 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamings_77));
#line 1248 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_33));
#line 1248 "state_var.m"
    }
#line 1248 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_83 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_82;
#line 1181 "state_var.m"
  }
#line 149 "state_var.m"
}

#line 136 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var___Context_10,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__DisjStates_11,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Disjs_12,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateBefore_14,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StateAfter_15,
#line 136 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31,
#line 136 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_32)
#line 136 "state_var.m"
{
#line 917 "state_var.m"
  {
#line 917 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 917 "state_var.m"
    {
#line 917 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_p_0(hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__Disjs_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30, hlds__make_hlds__state_var__StateBefore_14, hlds__make_hlds__state_var__StateAfter_15, hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_Store_32);
#line 917 "state_var.m"
      return;
    }
#line 917 "state_var.m"
  }
#line 136 "state_var.m"
}

#line 128 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(
#line 128 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVars_5,
#line 128 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateBeforeOutside_6,
#line 128 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateAfterInside_7,
#line 128 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StateAfterOutside_8)
#line 128 "state_var.m"
{
#line 857 "state_var.m"
  {
#line 857 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 857 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_9 = (MR_Word) hlds__make_hlds__state_var__StateBeforeOutside_6;
#line 857 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterOutside0_14 = (MR_Word) hlds__make_hlds__state_var__StateAfterInside_7;
#line 857 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterOutside_15;

#line 877 "state_var.m"
    {
#line 877 "state_var.m"
      hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(hlds__make_hlds__state_var__StateVars_5, hlds__make_hlds__state_var__StatusMapBeforeOutside_9, hlds__make_hlds__state_var__StatusMapAfterOutside0_14, &hlds__make_hlds__state_var__StatusMapAfterOutside_15);
    }
#line 879 "state_var.m"
    *hlds__make_hlds__state_var__StateAfterOutside_8 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfterOutside_15;
#line 857 "state_var.m"
  }
#line 128 "state_var.m"
}

#line 122 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(
#line 122 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_8,
#line 122 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_9,
#line 122 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVars_10,
#line 122 "state_var.m"
  MR_Word hlds__make_hlds__state_var__OutsideState_11,
#line 122 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InsideState_12,
#line 122 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
#line 122 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17)
#line 122 "state_var.m"
{
#line 835 "state_var.m"
  {
#line 835 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 835 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapOutside_14 = (MR_Word) hlds__make_hlds__state_var__OutsideState_11;
#line 835 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapInside_15;

#line 837 "state_var.m"
    {
#line 837 "state_var.m"
      hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(hlds__make_hlds__state_var__Context_8, hlds__make_hlds__state_var__VarSet_9, hlds__make_hlds__state_var__StateVars_10, hlds__make_hlds__state_var__StatusMapOutside_14, &hlds__make_hlds__state_var__StatusMapInside_15, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17);
    }
#line 839 "state_var.m"
    *hlds__make_hlds__state_var__InsideState_12 = (MR_Word) hlds__make_hlds__state_var__StatusMapInside_15;
#line 835 "state_var.m"
  }
#line 122 "state_var.m"
}

#line 807 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
#line 807 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 807 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 807 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
#line 807 "state_var.m"
{
#line 807 "state_var.m"
  {
#line 807 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 807 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11;

#line 807 "state_var.m"
    {
#line 807 "state_var.m"
      hlds__make_hlds__state_var__reset_updated_status_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11);
    }
#line 807 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11));
#line 807 "state_var.m"
  }
#line 807 "state_var.m"
}

#line 115 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(
#line 115 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Loc_4,
#line 115 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8,
#line 115 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_9)
#line 115 "state_var.m"
{
#line 805 "state_var.m"
  {
#line 805 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 805 "state_var.m"
    if ((hlds__make_hlds__state_var__Loc_4 == (MR_Integer) 1))
#line 810 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_State_9 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8;
#line 805 "state_var.m"
    else
#line 805 "state_var.m"
      {
#line 805 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_14_14 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 805 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap0_6 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8;
#line 805 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap_7;

#line 807 "state_var.m"
        {
#line 807 "state_var.m"
          mercury__map__map_values_only_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_14_14, hlds__make_hlds__state_var__TypeCtorInfo_14_14, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[5], hlds__make_hlds__state_var__StatusMap0_6, &hlds__make_hlds__state_var__StatusMap_7);
        }
#line 808 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_9 = (MR_Word) hlds__make_hlds__state_var__StatusMap_7;
#line 805 "state_var.m"
      }
#line 805 "state_var.m"
  }
#line 115 "state_var.m"
}

#line 104 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(
#line 104 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_9,
#line 104 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
#line 104 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals0_11,
#line 104 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_12,
#line 104 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
#line 104 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
#line 104 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_16,
#line 104 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_17)
#line 104 "state_var.m"
{
#line 690 "state_var.m"
  {
#line 690 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_69_79 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalAssocList_28;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InitialSVarStatusMap_29;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarStatusMap_30;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarSubn_31;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__CopyGoals_32;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goals1_33;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goal1_36;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr1_37;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo1_38;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalId1_39;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId1_40;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap1_41;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_42;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_45;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId_46;
#line 690 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54;
#line 724 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_43;
#line 709 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_43;

#line 691 "state_var.m"
    {
#line 691 "state_var.m"
      mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_69_79, hlds__make_hlds__state_var__TypeInfo_69_79, hlds__make_hlds__state_var__FinalMap_10, &hlds__make_hlds__state_var__FinalAssocList_28);
    }
#line 692 "state_var.m"
    hlds__make_hlds__state_var__InitialSVarStatusMap_29 = (MR_Word) hlds__make_hlds__state_var__InitialSVarState_13;
#line 693 "state_var.m"
    hlds__make_hlds__state_var__FinalSVarStatusMap_30 = (MR_Word) hlds__make_hlds__state_var__FinalSVarState_14;
#line 694 "state_var.m"
    {
#line 694 "state_var.m"
      hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(hlds__make_hlds__state_var__FinalAssocList_28, hlds__make_hlds__state_var__InitialSVarStatusMap_29, hlds__make_hlds__state_var__FinalSVarStatusMap_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__FinalSVarSubn_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoals_32);
    }
#line 700 "state_var.m"
    if ((hlds__make_hlds__state_var__CopyGoals_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "state_var.m"
      hlds__make_hlds__state_var__Goals1_33 = hlds__make_hlds__state_var__Goals0_11;
#line 700 "state_var.m"
    else
#line 701 "state_var.m"
      {
#line 702 "state_var.m"
        {
#line 702 "state_var.m"
          hlds__make_hlds__state_var__Goals1_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__Goals0_11, hlds__make_hlds__state_var__CopyGoals_32);
        }
#line 701 "state_var.m"
      }
#line 704 "state_var.m"
    {
#line 704 "state_var.m"
      hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(hlds__make_hlds__state_var__Context_9, hlds__make_hlds__state_var__Goals1_33, &hlds__make_hlds__state_var__Goal1_36, hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54);
    }
#line 706 "state_var.m"
    hlds__make_hlds__state_var__GoalExpr1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_36, (MR_Integer) 0)));
#line 706 "state_var.m"
    hlds__make_hlds__state_var__GoalInfo1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_36, (MR_Integer) 1)));
#line 707 "state_var.m"
    {
#line 707 "state_var.m"
      hlds__make_hlds__state_var__GoalId1_39 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo1_38);
    }
#line 708 "state_var.m"
    hlds__make_hlds__state_var__NextGoalId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 0)));
#line 708 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamingMap1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 1)));
#line 708 "state_var.m"
    hlds__make_hlds__state_var__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 2)));
#line 709 "state_var.m"
    {
#line 709 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap1_41, ((MR_Box) (hlds__make_hlds__state_var__GoalId1_39)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_43);
    }
#line 709 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 709 "state_var.m"
      {
#line 709 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenaming0_43 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_43);
#line 709 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 709 "state_var.m"
      }
#line 724 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 718 "state_var.m"
      {
#line 718 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_66_66;

#line 720 "state_var.m"
        {
#line 720 "state_var.m"
          hlds__make_hlds__state_var__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenaming0_43, hlds__make_hlds__state_var__FinalSVarSubn_31);
        }
#line 720 "state_var.m"
        {
#line 720 "state_var.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId1_39)), ((MR_Box) (hlds__make_hlds__state_var__V_66_66)), hlds__make_hlds__state_var__DelayedRenamingMap1_41, &hlds__make_hlds__state_var__DelayedRenamingMap_45);
        }
#line 722 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId_46 = hlds__make_hlds__state_var__NextGoalId1_40;
#line 723 "state_var.m"
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_36;
#line 718 "state_var.m"
      }
#line 724 "state_var.m"
    else
#line 730 "state_var.m"
      if ((hlds__make_hlds__state_var__FinalSVarSubn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 726 "state_var.m"
        {
#line 727 "state_var.m"
          hlds__make_hlds__state_var__NextGoalId_46 = hlds__make_hlds__state_var__NextGoalId1_40;
#line 728 "state_var.m"
          hlds__make_hlds__state_var__DelayedRenamingMap_45 = hlds__make_hlds__state_var__DelayedRenamingMap1_41;
#line 729 "state_var.m"
          *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_36;
#line 726 "state_var.m"
        }
#line 730 "state_var.m"
      else
#line 731 "state_var.m"
        {
#line 731 "state_var.m"
          MR_Integer hlds__make_hlds__state_var__GoalIdNum_49;
#line 731 "state_var.m"
          MR_Word hlds__make_hlds__state_var__GoalId_50;
#line 731 "state_var.m"
          MR_Word hlds__make_hlds__state_var__GoalInfo_51;

#line 732 "state_var.m"
          {
#line 732 "state_var.m"
            mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_49, hlds__make_hlds__state_var__NextGoalId1_40, &hlds__make_hlds__state_var__NextGoalId_46);
          }
#line 733 "state_var.m"
          hlds__make_hlds__state_var__GoalId_50 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_49;
#line 745 "state_var.m"
          {
#line 745 "state_var.m"
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_50)), ((MR_Box) (hlds__make_hlds__state_var__FinalSVarSubn_31)), hlds__make_hlds__state_var__DelayedRenamingMap1_41, &hlds__make_hlds__state_var__DelayedRenamingMap_45);
          }
#line 747 "state_var.m"
          {
#line 747 "state_var.m"
            hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_50, hlds__make_hlds__state_var__GoalInfo1_38, &hlds__make_hlds__state_var__GoalInfo_51);
          }
#line 748 "state_var.m"
          {
#line 748 "state_var.m"
            MR_Word base;
#line 748 "state_var.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "state_var.m"
            *hlds__make_hlds__state_var__Goal_12 = base;
#line 748 "state_var.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr1_37));
#line 748 "state_var.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_51));
#line 748 "state_var.m"
          }
#line 731 "state_var.m"
        }
#line 751 "state_var.m"
    {
#line 751 "state_var.m"
      MR_Word base;
#line 751 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_17 = base;
#line 751 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_46));
#line 751 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_45));
#line 751 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_42));
#line 751 "state_var.m"
    }
#line 690 "state_var.m"
  }
#line 104 "state_var.m"
}

#line 96 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(
#line 96 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_11,
#line 96 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Args0_12,
#line 96 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Args_13,
#line 96 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__FinalMap_14,
#line 96 "state_var.m"
  MR_Word hlds__make_hlds__state_var__OutsideState_15,
#line 96 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InsideState_16,
#line 96 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24,
#line 96 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25,
#line 96 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_26,
#line 96 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27)
#line 96 "state_var.m"
{
#line 600 "state_var.m"
  {
#line 600 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_32_32 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_33_33 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__OutsideStatusMap_19 = (MR_Word) hlds__make_hlds__state_var__OutsideState_15;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__OutsideStatusList_20;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InsideStatusList_21;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InsideStatusMap_22;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InsideState0_23;
#line 600 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;

#line 609 "state_var.m"
    {
#line 609 "state_var.m"
      mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__OutsideStatusMap_19, &hlds__make_hlds__state_var__OutsideStatusList_20);
    }
#line 610 "state_var.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 610 "state_var.m"
    {
#line 610 "state_var.m"
      hlds__make_hlds__state_var__make_svars_read_only_4_p_0(hlds__make_hlds__state_var__Context_11, hlds__make_hlds__state_var__OutsideStatusList_20, &hlds__make_hlds__state_var__InsideStatusList_21);
    }
#line 612 "state_var.m"
    {
#line 612 "state_var.m"
      mercury__map__from_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__InsideStatusList_21, &hlds__make_hlds__state_var__InsideStatusMap_22);
    }
#line 613 "state_var.m"
    hlds__make_hlds__state_var__InsideState0_23 = (MR_Word) hlds__make_hlds__state_var__InsideStatusMap_22;
#line 617 "state_var.m"
    {
#line 617 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeInfo_32_32);
    }
#line 617 "state_var.m"
    {
#line 617 "state_var.m"
      hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Args0_12, hlds__make_hlds__state_var__Args_13, hlds__make_hlds__state_var__V_29_29, hlds__make_hlds__state_var__FinalMap_14, hlds__make_hlds__state_var__InsideState0_23, hlds__make_hlds__state_var__InsideState_16, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27);
#line 617 "state_var.m"
      return;
    }
#line 600 "state_var.m"
  }
#line 96 "state_var.m"
}

#line 654 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1(
#line 654 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 654 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1)
#line 654 "state_var.m"
{
#line 654 "state_var.m"
  {
#line 654 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 654 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 654 "state_var.m"
    {
#line 654 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__severity_is_error_1_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1));
    }
#line 654 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 654 "state_var.m"
  }
#line 654 "state_var.m"
}

#line 84 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(
#line 84 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_10,
#line 84 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalMap_11,
#line 84 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals0_12,
#line 84 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_13,
#line 84 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialSVarState_14,
#line 84 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalSVarState_15,
#line 84 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_26,
#line 84 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__WarningSpecs_17,
#line 84 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ErrorSpecs_18)
#line 84 "state_var.m"
{
#line 650 "state_var.m"
  {
#line 650 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goal1_19;
#line 650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings_21;
#line 650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_22;
#line 650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27;
#line 653 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;
#line 656 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_47_47;
#line 656 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_48_48;
#line 656 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_49_49;

#line 651 "state_var.m"
    {
#line 651 "state_var.m"
      hlds__make_hlds__state_var__svar_finish_body_8_p_0(hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__FinalMap_11, hlds__make_hlds__state_var__Goals0_12, &hlds__make_hlds__state_var__Goal1_19, hlds__make_hlds__state_var__InitialSVarState_14, hlds__make_hlds__state_var__FinalSVarState_15, hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_26, &hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27);
    }
#line 653 "state_var.m"
    hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 0)));
#line 653 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamings_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 1)));
#line 653 "state_var.m"
    hlds__make_hlds__state_var__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 2)));
#line 654 "state_var.m"
    {
#line 654 "state_var.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[4], hlds__make_hlds__state_var__Specs_22, hlds__make_hlds__state_var__ErrorSpecs_18, hlds__make_hlds__state_var__WarningSpecs_17);
    }
#line 14997 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeInfo_47_47 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 656 "state_var.m"
    {
#line 656 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__state_var__TypeInfo_47_47, hlds__make_hlds__state_var__TypeInfo_47_47, hlds__make_hlds__state_var__FinalMap_11);
    }
#line 656 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 656 "state_var.m"
      {
#line 15008 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 15010 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeInfo_49_49 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1];
#line 657 "state_var.m"
        {
#line 657 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__state_var__TypeCtorInfo_48_48, hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__DelayedRenamings_21);
        }
#line 656 "state_var.m"
      }
#line 660 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 659 "state_var.m"
      *hlds__make_hlds__state_var__Goal_13 = hlds__make_hlds__state_var__Goal1_19;
#line 660 "state_var.m"
    else
#line 675 "state_var.m"
      {
#line 675 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 675 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_42_42;

#line 676 "state_var.m"
        {
#line 676 "state_var.m"
          hlds__make_hlds__state_var__V_42_42 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_55_55, hlds__make_hlds__state_var__TypeInfo_55_55);
        }
#line 676 "state_var.m"
        {
#line 676 "state_var.m"
          hlds__hlds_goal__incremental_rename_vars_in_goal_4_p_0(hlds__make_hlds__state_var__V_42_42, hlds__make_hlds__state_var__DelayedRenamings_21, hlds__make_hlds__state_var__Goal1_19, hlds__make_hlds__state_var__Goal_13);
#line 676 "state_var.m"
          return;
        }
#line 675 "state_var.m"
      }
#line 650 "state_var.m"
  }
#line 84 "state_var.m"
}

#line 76 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(
#line 76 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Args0_10,
#line 76 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Args_11,
#line 76 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_17,
#line 76 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_18,
#line 76 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__FinalMap_13,
#line 76 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_19,
#line 76 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_20,
#line 76 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_21,
#line 76 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_22)
#line 76 "state_var.m"
{
#line 470 "state_var.m"
  {
#line 470 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 470 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_29_29;
#line 470 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23;
#line 470 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 470 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 470 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;
#line 470 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_35_35;

#line 370 "state_var.m"
    {
#line 370 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
    }
#line 370 "state_var.m"
    hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23 = (MR_Word) hlds__make_hlds__state_var__V_30_30;
#line 371 "state_var.m"
    {
#line 371 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 371 "state_var.m"
    {
#line 371 "state_var.m"
      hlds__make_hlds__state_var__V_35_35 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1]);
    }
#line 371 "state_var.m"
    {
#line 371 "state_var.m"
      MR_Word base;
#line 371 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 371 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_20 = base;
#line 371 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 371 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_35_35));
#line 371 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "state_var.m"
    }
#line 15124 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeInfo_29_29 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 473 "state_var.m"
    {
#line 473 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_29_29, hlds__make_hlds__state_var__TypeInfo_29_29);
    }
#line 473 "state_var.m"
    {
#line 473 "state_var.m"
      hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Args0_10, hlds__make_hlds__state_var__Args_11, hlds__make_hlds__state_var__V_25_25, hlds__make_hlds__state_var__FinalMap_13, hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23, hlds__make_hlds__state_var__STATE_VARIABLE_State_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_18, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_22);
#line 473 "state_var.m"
      return;
    }
#line 470 "state_var.m"
  }
#line 76 "state_var.m"
}

#line 428 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0_1(
#line 428 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 428 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 428 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
#line 428 "state_var.m"
{
#line 428 "state_var.m"
  {
#line 428 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 428 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_IM_4;

#line 428 "state_var.m"
    {
#line 428 "state_var.m"
      hlds__make_hlds__state_var__expand_bang_states_method_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_IM_4);
    }
#line 428 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_IM_4));
#line 428 "state_var.m"
  }
#line 428 "state_var.m"
}

#line 58 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0(
#line 58 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InstanceBody0_3,
#line 58 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__InstanceBody_4)
#line 58 "state_var.m"
{
#line 424 "state_var.m"
  {
#line 424 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 424 "state_var.m"
    if ((hlds__make_hlds__state_var__InstanceBody0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "state_var.m"
      *hlds__make_hlds__state_var__InstanceBody_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "state_var.m"
    else
#line 427 "state_var.m"
      {
#line 427 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0;
#line 427 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Methods0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__InstanceBody0_3, (MR_Integer) 0)));
#line 427 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Methods_6;

#line 428 "state_var.m"
        {
#line 428 "state_var.m"
          mercury__list__map_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_10_10, hlds__make_hlds__state_var__TypeCtorInfo_10_10, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[3], hlds__make_hlds__state_var__Methods0_5, &hlds__make_hlds__state_var__Methods_6);
        }
#line 429 "state_var.m"
        {
#line 429 "state_var.m"
          MR_Word base;
#line 429 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 429 "state_var.m"
          *hlds__make_hlds__state_var__InstanceBody_4 = base;
#line 429 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Methods_6));
#line 429 "state_var.m"
        }
#line 427 "state_var.m"
      }
#line 424 "state_var.m"
  }
#line 58 "state_var.m"
}

#line 57 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_2_p_0(
#line 57 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 57 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2)
#line 57 "state_var.m"
{
#line 402 "state_var.m"
  {
#line 402 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 402 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "state_var.m"
      *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 402 "state_var.m"
    else
#line 403 "state_var.m"
      {
#line 403 "state_var.m"
        MR_Word hlds__make_hlds__state_var__HeadArg0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TailArgs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TailArgs_6;

#line 404 "state_var.m"
        {
#line 404 "state_var.m"
          hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__state_var__TailArgs0_4, &hlds__make_hlds__state_var__TailArgs_6);
        }
#line 408 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadArg0_3)) == (MR_mktag((MR_Integer) 0))))
#line 409 "state_var.m"
          {
#line 409 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Const_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 0)));
#line 409 "state_var.m"
            MR_Word hlds__make_hlds__state_var__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 1)));
#line 409 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Ctxt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 2)));
#line 411 "state_var.m"
            MR_String hlds__make_hlds__state_var__V_16_16;
#line 411 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_17_17;
#line 411 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_18_18;
#line 412 "state_var.m"
            MR_Word hlds__make_hlds__state_var___StateVar_12;
#line 412 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_13_13;

#line 411 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Const_9)) == (MR_mktag((MR_Integer) 0)));
#line 411 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 411 "state_var.m"
              {
#line 411 "state_var.m"
                hlds__make_hlds__state_var__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Const_9, (MR_Integer) 0)));
#line 411 "state_var.m"
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_16_16, (MR_String) "!") == 0);
#line 411 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 411 "state_var.m"
                  {
#line 412 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 412 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 412 "state_var.m"
                      {
#line 412 "state_var.m"
                        hlds__make_hlds__state_var__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__FunctorArgs_10, (MR_Integer) 0)));
#line 412 "state_var.m"
                        hlds__make_hlds__state_var__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__FunctorArgs_10, (MR_Integer) 1)));
#line 412 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 412 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 412 "state_var.m"
                          {
#line 412 "state_var.m"
                            hlds__make_hlds__state_var___StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, (MR_Integer) 0)));
#line 412 "state_var.m"
                            hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, (MR_Integer) 1)));
#line 412 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "state_var.m"
                          }
#line 412 "state_var.m"
                      }
#line 411 "state_var.m"
                  }
#line 411 "state_var.m"
              }
#line 417 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 414 "state_var.m"
              {
#line 414 "state_var.m"
                MR_Word hlds__make_hlds__state_var__HeadArg1_14;
#line 414 "state_var.m"
                MR_Word hlds__make_hlds__state_var__HeadArg2_15;
#line 414 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_23_23;

#line 414 "state_var.m"
                {
#line 414 "state_var.m"
                  hlds__make_hlds__state_var__HeadArg1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[0]));
#line 414 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 1) = ((MR_Box) (hlds__make_hlds__state_var__FunctorArgs_10));
#line 414 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 2) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_11));
#line 414 "state_var.m"
                }
#line 415 "state_var.m"
                {
#line 415 "state_var.m"
                  hlds__make_hlds__state_var__HeadArg2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 415 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[1]));
#line 415 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__FunctorArgs_10));
#line 415 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 2) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_11));
#line 415 "state_var.m"
                }
#line 416 "state_var.m"
                {
#line 416 "state_var.m"
                  hlds__make_hlds__state_var__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg2_15));
#line 416 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
#line 416 "state_var.m"
                }
#line 416 "state_var.m"
                {
#line 416 "state_var.m"
                  MR_Word base;
#line 416 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 416 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg1_14));
#line 416 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_23_23));
#line 416 "state_var.m"
                }
#line 414 "state_var.m"
              }
#line 417 "state_var.m"
            else
#line 418 "state_var.m"
              {
#line 418 "state_var.m"
                MR_Word base;
#line 418 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "state_var.m"
                *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 418 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg0_3));
#line 418 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
#line 418 "state_var.m"
              }
#line 409 "state_var.m"
          }
#line 408 "state_var.m"
        else
#line 407 "state_var.m"
          {
#line 407 "state_var.m"
            MR_Word base;
#line 407 "state_var.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "state_var.m"
            *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 407 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg0_3));
#line 407 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
#line 407 "state_var.m"
          }
#line 403 "state_var.m"
      }
#line 402 "state_var.m"
  }
#line 57 "state_var.m"
}

void mercury__hlds__make_hlds__state_var__init(void)
{
}

void mercury__hlds__make_hlds__state_var__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0);
}

void mercury__hlds__make_hlds__state_var__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.state_var. */
