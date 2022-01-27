/*
** Automatically generated from `state_var.m'
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
#include "cord.mih"
#include "counter.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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




#line 152 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 161 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

#line 176 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2];

#line 179 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0;

#line 182 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1];

#line 185 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1];

#line 188 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1];

#line 191 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1];

#line 194 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0;

#line 197 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[1];

#line 200 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1];

#line 203 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1];

#line 206 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0;

#line 209 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1;

#line 212 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2;

#line 215 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[3];

#line 218 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3];

#line 221 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3];

#line 224 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3];

#line 227 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3];

#line 230 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0;

#line 233 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1];

#line 236 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1];

#line 239 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1];

#line 242 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1];

#line 245 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3];

#line 248 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3];

#line 251 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0;

#line 254 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1;

#line 257 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1];

#line 260 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1];

#line 263 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2];

#line 266 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2];

#line 269 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2];

#line 272 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1];

#line 275 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

#line 278 "hlds.make_hlds.state_var.c"
static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0;

#line 281 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0;

#line 284 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1];

#line 287 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1;

#line 290 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3];

#line 293 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2;

#line 296 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1];

#line 299 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3;

#line 302 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2];

#line 305 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4;

#line 308 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1];

#line 311 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1];

#line 314 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1];

#line 317 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2];

#line 320 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4];

#line 323 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5];

#line 326 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5];

#line 329 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 332 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 335 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3];

#line 338 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3];

#line 341 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0;

#line 344 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1];

#line 347 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1];

#line 350 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1];

#line 353 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1];

#line 356 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
#line 359 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 361 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 364 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
#line 367 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 369 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 371 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 374 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
#line 377 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 379 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 382 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
#line 385 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 387 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 389 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 392 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
#line 395 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 397 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 400 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
#line 403 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 405 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 407 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 410 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
#line 413 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 415 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 418 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
#line 421 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 423 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 425 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 428 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
#line 431 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 433 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 436 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
#line 439 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 441 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 443 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 446 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
#line 449 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 451 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 454 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
#line 457 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 459 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 461 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 464 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
#line 467 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 469 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 472 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
#line 475 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 477 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 479 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 482 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
#line 485 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 487 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 490 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
#line 493 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 495 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 497 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 500 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
#line 503 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 505 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

#line 508 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
#line 511 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 513 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 515 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

#line 320 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 320 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1);

#line 320 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 1282 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1282__1_2_p_0(
#line 1282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_76,
#line 1282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_78);

#line 1063 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1063__1_2_p_0(
#line 1063 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23,
#line 1063 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterArmStatus_25);

#line 953 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__953__1_1_p_0(
#line 953 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12);

#line 1199 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1199__1_2_p_0(
#line 1199 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1199 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41);

#line 1197 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1197__1_2_p_0(
#line 1197 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1197 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40);

#line 1195 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1195__1_2_p_0(
#line 1195 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1195 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39);

#line 323 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
#line 323 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3);

#line 323 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2);

#line 378 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
#line 378 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3);

#line 378 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_1,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2);

#line 320 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
#line 320 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1);

#line 320 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void);

#line 2080 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_1_p_0(
#line 2080 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1);

#line 2034 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
#line 2034 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_5,
#line 2034 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_6,
#line 2034 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 2034 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12);

#line 2019 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
#line 2019 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_7,
#line 2019 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_8,
#line 2019 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenMissing_9,
#line 2019 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenNotMissing_10,
#line 2019 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15,
#line 2019 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16);

#line 1990 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1990 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15);

#line 1977 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1977 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15);

#line 1963 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0(
#line 1963 "state_var.m"
  MR_String hlds__make_hlds__state_var__DorC_7,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_8,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_9,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_10,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
#line 1963 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17);

#line 1874 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__DelayedRenamingToAdd_8,
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal0_9,
#line 1874 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_10,
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21,
#line 1874 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22,
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23,
#line 1874 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);

#line 1865 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1(
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1865 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1865 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1865 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6);

#line 1851 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(
#line 1851 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal_7,
#line 1851 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Conjuncts_8,
#line 1851 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16,
#line 1851 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17,
#line 1851 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18,
#line 1851 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19);

#line 1779 "state_var.m"
static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
#line 1779 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_4,
#line 1779 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Status_5);

#line 1315 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_24,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVar_25,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_26,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterCond_27,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_28,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterElse_29,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StatusAfterITE_30,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88);

#line 1282 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
#line 1282 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1255 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_1,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__QuantStateVars_2,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_4,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_5,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_6,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_7,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25);

#line 1142 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
#line 1142 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FromVar_4,
#line 1142 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ToVar_5,
#line 1142 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__CopyGoal_6);

#line 1063 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
#line 1063 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1049 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_2,
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_3,
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_4,
#line 1049 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__5_5,
#line 1049 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__6_6,
#line 1049 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__7_7);

#line 1002 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__4_4,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12);

#line 976 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_2,
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 976 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 976 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6);

#line 960 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 960 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 960 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6);

#line 953 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
#line 953 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 946 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
#line 946 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 946 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2,
#line 946 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3);

#line 886 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
#line 886 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 886 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_2,
#line 886 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3,
#line 886 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4);

#line 846 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4,
#line 846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6,
#line 846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7);

#line 818 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
#line 818 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10,
#line 818 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Status_11);

#line 758 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialStatusMap_2,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalStatusMap_3,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4,
#line 758 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6,
#line 758 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7);

#line 690 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_9,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals0_11,
#line 690 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_12,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40,
#line 690 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_41);

#line 625 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
#line 625 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 625 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 625 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__4_4);

#line 492 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Term0_11,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Term_12,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_48,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52);

#line 481 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10);

#line 459 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_clause_2_p_0(
#line 459 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ItemClause0_3,
#line 459 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ItemClause_4);

#line 447 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0_1(
#line 447 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 447 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 447 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);

#line 437 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0(
#line 437 "state_var.m"
  MR_Word hlds__make_hlds__state_var__IM0_3,
#line 437 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__IM_4);

#line 383 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
#line 383 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_6,
#line 383 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NameSource_7,
#line 383 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Var_8,
#line 383 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13,
#line 383 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);

#line 1840 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1840 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1840 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1840 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6);

#line 1825 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
#line 1825 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1825 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1825 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1825 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1825 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4);

#line 1199 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3(
#line 1199 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1197 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2(
#line 1197 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 1195 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1(
#line 1195 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg);

#line 812 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
#line 812 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 812 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 812 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);

#line 659 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1(
#line 659 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 659 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1);

#line 433 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0_1(
#line 433 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 433 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 433 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[52][2];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][4];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[5][1];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10];




static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[52][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "readonly."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not visible in this context."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "shadows old one."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[7])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the if-then-else defines"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: reference to uninitialized state variable"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: state variable"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cannot use"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "here due to the surrounding"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "you may only refer to"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the surrounding context that makes"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be a function result."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be a lambda argument."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Perhaps you meant"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: new state variable"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: clause head introduces"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "When the condition"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but when the condition"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Other disjuncts define"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[50]))),
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
    ((MR_Box) ((MR_Integer) 41)),
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

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[5][1] = {
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 4 */
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1684 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1692 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1700 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1708 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1717 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1725 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1733 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1742 "hlds.make_hlds.state_var.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
  }
};

#line 1751 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

#line 1757 "hlds.make_hlds.state_var.c"
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

#line 1772 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

#line 1777 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0
  }
};

#line 1786 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

#line 1791 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1] = {
  (MR_Integer) 0
};

#line 1796 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "hlds_goal_svar_state",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0
};

#line 1813 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 = {
  (MR_String) "roc_lambda",
  (MR_Integer) 0
};

#line 1819 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

#line 1824 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

#line 1829 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1] = {
  (MR_Integer) 0
};

#line 1834 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "readonly_context_kind",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0
};

#line 1851 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0 = {
  (MR_String) "name_initial",
  (MR_Integer) 0
};

#line 1857 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1 = {
  (MR_String) "name_middle",
  (MR_Integer) 1
};

#line 1863 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2 = {
  (MR_String) "name_final",
  (MR_Integer) 2
};

#line 1869 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2
};

#line 1876 "hlds.make_hlds.state_var.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1
};

#line 1883 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1890 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "state_var_name_source",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0
};

#line 1907 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1924 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

#line 1931 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_String) "siasi_state_var",
  (MR_String) "siasi_di_var",
  (MR_String) "siasi_state_before"
};

#line 1938 "hlds.make_hlds.state_var.c"
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

#line 1953 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

#line 1958 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0
  }
};

#line 1967 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

#line 1972 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1] = {
  (MR_Integer) 0
};

#line 1977 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_inner_atomic_scope_info",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0
};

#line 1994 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
};

#line 2001 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_String) "soasi_state_var",
  (MR_String) "soasi_before_status",
  (MR_String) "soasi_after_status"
};

#line 2008 "hlds.make_hlds.state_var.c"
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

#line 2023 "hlds.make_hlds.state_var.c"
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

#line 2038 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1
};

#line 2043 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

#line 2048 "hlds.make_hlds.state_var.c"
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

#line 2062 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

#line 2068 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2074 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_outer_atomic_scope_info",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0 },
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
  {     &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  {     &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0
};

#line 2129 "hlds.make_hlds.state_var.c"
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

#line 2144 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2149 "hlds.make_hlds.state_var.c"
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

#line 2164 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2171 "hlds.make_hlds.state_var.c"
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

#line 2186 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2191 "hlds.make_hlds.state_var.c"
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

#line 2206 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2212 "hlds.make_hlds.state_var.c"
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

#line 2227 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0
};

#line 2232 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

#line 2237 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2
};

#line 2242 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4
};

#line 2248 "hlds.make_hlds.state_var.c"
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

#line 2272 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

#line 2281 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2290 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_status_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_status_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_status",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0
};

#line 2307 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2316 "hlds.make_hlds.state_var.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2324 "hlds.make_hlds.state_var.c"
static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2331 "hlds.make_hlds.state_var.c"
static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3] = {
  (MR_String) "store_next_goal_id",
  (MR_String) "store_final_remap",
  (MR_String) "store_specs"
};

#line 2338 "hlds.make_hlds.state_var.c"
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

#line 2353 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

#line 2358 "hlds.make_hlds.state_var.c"
static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0
  }
};

#line 2367 "hlds.make_hlds.state_var.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

#line 2372 "hlds.make_hlds.state_var.c"
static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1] = {
  (MR_Integer) 0
};

#line 2377 "hlds.make_hlds.state_var.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_store_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_store_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_store",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0
};

#line 2394 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
#line 2397 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2399 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2401 "hlds.make_hlds.state_var.c"
{
#line 2403 "hlds.make_hlds.state_var.c"
  {
#line 2405 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2408 "hlds.make_hlds.state_var.c"
    {
#line 2410 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2413 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2415 "hlds.make_hlds.state_var.c"
  }
#line 2417 "hlds.make_hlds.state_var.c"
}

#line 2420 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
#line 2423 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2425 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2427 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2429 "hlds.make_hlds.state_var.c"
{
#line 2431 "hlds.make_hlds.state_var.c"
  {
#line 2433 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2436 "hlds.make_hlds.state_var.c"
    {
#line 2438 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2441 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2443 "hlds.make_hlds.state_var.c"
  }
#line 2445 "hlds.make_hlds.state_var.c"
}

#line 2448 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
#line 2451 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2453 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2455 "hlds.make_hlds.state_var.c"
{
#line 2457 "hlds.make_hlds.state_var.c"
  {
#line 2459 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2462 "hlds.make_hlds.state_var.c"
    {
#line 2464 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0();
    }
#line 2467 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2469 "hlds.make_hlds.state_var.c"
  }
#line 2471 "hlds.make_hlds.state_var.c"
}

#line 2474 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
#line 2477 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2479 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2481 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2483 "hlds.make_hlds.state_var.c"
{
#line 2485 "hlds.make_hlds.state_var.c"
  {
#line 2487 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2490 "hlds.make_hlds.state_var.c"
    {
#line 2492 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1);
    }
#line 2495 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2497 "hlds.make_hlds.state_var.c"
  }
#line 2499 "hlds.make_hlds.state_var.c"
}

#line 2502 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
#line 2505 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2507 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2509 "hlds.make_hlds.state_var.c"
{
#line 2511 "hlds.make_hlds.state_var.c"
  {
#line 2513 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2516 "hlds.make_hlds.state_var.c"
    {
#line 2518 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2521 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2523 "hlds.make_hlds.state_var.c"
  }
#line 2525 "hlds.make_hlds.state_var.c"
}

#line 2528 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
#line 2531 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2533 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2535 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2537 "hlds.make_hlds.state_var.c"
{
#line 2539 "hlds.make_hlds.state_var.c"
  {
#line 2541 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2544 "hlds.make_hlds.state_var.c"
    {
#line 2546 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2549 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2551 "hlds.make_hlds.state_var.c"
  }
#line 2553 "hlds.make_hlds.state_var.c"
}

#line 2556 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
#line 2559 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2561 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2563 "hlds.make_hlds.state_var.c"
{
#line 2565 "hlds.make_hlds.state_var.c"
  {
#line 2567 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2570 "hlds.make_hlds.state_var.c"
    {
#line 2572 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2575 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2577 "hlds.make_hlds.state_var.c"
  }
#line 2579 "hlds.make_hlds.state_var.c"
}

#line 2582 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
#line 2585 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2587 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2589 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2591 "hlds.make_hlds.state_var.c"
{
#line 2593 "hlds.make_hlds.state_var.c"
  {
#line 2595 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2598 "hlds.make_hlds.state_var.c"
    {
#line 2600 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2603 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2605 "hlds.make_hlds.state_var.c"
  }
#line 2607 "hlds.make_hlds.state_var.c"
}

#line 2610 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
#line 2613 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2615 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2617 "hlds.make_hlds.state_var.c"
{
#line 2619 "hlds.make_hlds.state_var.c"
  {
#line 2621 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2624 "hlds.make_hlds.state_var.c"
    {
#line 2626 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2629 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2631 "hlds.make_hlds.state_var.c"
  }
#line 2633 "hlds.make_hlds.state_var.c"
}

#line 2636 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
#line 2639 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2641 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2643 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2645 "hlds.make_hlds.state_var.c"
{
#line 2647 "hlds.make_hlds.state_var.c"
  {
#line 2649 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2652 "hlds.make_hlds.state_var.c"
    {
#line 2654 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2657 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2659 "hlds.make_hlds.state_var.c"
  }
#line 2661 "hlds.make_hlds.state_var.c"
}

#line 2664 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
#line 2667 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2669 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2671 "hlds.make_hlds.state_var.c"
{
#line 2673 "hlds.make_hlds.state_var.c"
  {
#line 2675 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2678 "hlds.make_hlds.state_var.c"
    {
#line 2680 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2683 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2685 "hlds.make_hlds.state_var.c"
  }
#line 2687 "hlds.make_hlds.state_var.c"
}

#line 2690 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
#line 2693 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2695 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2697 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2699 "hlds.make_hlds.state_var.c"
{
#line 2701 "hlds.make_hlds.state_var.c"
  {
#line 2703 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2706 "hlds.make_hlds.state_var.c"
    {
#line 2708 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2711 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2713 "hlds.make_hlds.state_var.c"
  }
#line 2715 "hlds.make_hlds.state_var.c"
}

#line 2718 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
#line 2721 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2723 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2725 "hlds.make_hlds.state_var.c"
{
#line 2727 "hlds.make_hlds.state_var.c"
  {
#line 2729 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2732 "hlds.make_hlds.state_var.c"
    {
#line 2734 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2737 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2739 "hlds.make_hlds.state_var.c"
  }
#line 2741 "hlds.make_hlds.state_var.c"
}

#line 2744 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
#line 2747 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2749 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2751 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2753 "hlds.make_hlds.state_var.c"
{
#line 2755 "hlds.make_hlds.state_var.c"
  {
#line 2757 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2760 "hlds.make_hlds.state_var.c"
    {
#line 2762 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_state_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2765 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2767 "hlds.make_hlds.state_var.c"
  }
#line 2769 "hlds.make_hlds.state_var.c"
}

#line 2772 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
#line 2775 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2777 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2779 "hlds.make_hlds.state_var.c"
{
#line 2781 "hlds.make_hlds.state_var.c"
  {
#line 2783 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2786 "hlds.make_hlds.state_var.c"
    {
#line 2788 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2791 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2793 "hlds.make_hlds.state_var.c"
  }
#line 2795 "hlds.make_hlds.state_var.c"
}

#line 2798 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
#line 2801 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2803 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2805 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2807 "hlds.make_hlds.state_var.c"
{
#line 2809 "hlds.make_hlds.state_var.c"
  {
#line 2811 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2814 "hlds.make_hlds.state_var.c"
    {
#line 2816 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_status_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2819 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2821 "hlds.make_hlds.state_var.c"
  }
#line 2823 "hlds.make_hlds.state_var.c"
}

#line 2826 "hlds.make_hlds.state_var.c"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
#line 2829 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 2831 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
#line 2833 "hlds.make_hlds.state_var.c"
{
#line 2835 "hlds.make_hlds.state_var.c"
  {
#line 2837 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 2840 "hlds.make_hlds.state_var.c"
    {
#line 2842 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
#line 2845 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 2847 "hlds.make_hlds.state_var.c"
  }
#line 2849 "hlds.make_hlds.state_var.c"
}

#line 2852 "hlds.make_hlds.state_var.c"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
#line 2855 "hlds.make_hlds.state_var.c"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
#line 2857 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
#line 2859 "hlds.make_hlds.state_var.c"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
#line 2861 "hlds.make_hlds.state_var.c"
{
#line 2863 "hlds.make_hlds.state_var.c"
  {
#line 2865 "hlds.make_hlds.state_var.c"
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

#line 2868 "hlds.make_hlds.state_var.c"
    {
#line 2870 "hlds.make_hlds.state_var.c"
      hlds__make_hlds__state_var____Compare____svar_store_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
#line 2873 "hlds.make_hlds.state_var.c"
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
#line 2875 "hlds.make_hlds.state_var.c"
  }
#line 2877 "hlds.make_hlds.state_var.c"
}

#line 320 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 320 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1)
#line 320 "state_var.m"
{
#line 320 "state_var.m"
  {
#line 320 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 320 "state_var.m"
    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 320 "state_var.m"
  }
#line 320 "state_var.m"
}

#line 320 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 320 "state_var.m"
{
#line 320 "state_var.m"
  {
#line 320 "state_var.m"
    return MR_TRUE;
#line 320 "state_var.m"
  }
#line 320 "state_var.m"
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
#line 1660 "state_var.m"
  {
#line 1660 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1660 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InnerStateVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 0)));
#line 1660 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_20;
#line 1660 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Status_21;
#line 1664 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_Status_21;

#line 1661 "state_var.m"
    *hlds__make_hlds__state_var__InnerDIVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 1)));
#line 1661 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_State_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 2)));
#line 1663 "state_var.m"
    hlds__make_hlds__state_var__StatusMap0_20 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28;
#line 1664 "state_var.m"
    {
#line 1664 "state_var.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_20, ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_18)), &hlds__make_hlds__state_var__conv0_Status_21);
    }
#line 1664 "state_var.m"
    hlds__make_hlds__state_var__Status_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_21);
#line 1667 "state_var.m"
#line 1667 "state_var.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_21)) {
#line 1667 "state_var.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1667 "state_var.m"
      case (MR_Integer) 0:
#line 1672 "state_var.m"
        {
#line 1673 "state_var.m"
          {
#line 1673 "state_var.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
#line 1673 "state_var.m"
            return;
          }
#line 1672 "state_var.m"
        }
#line 1667 "state_var.m"
        break;
#line 1667 "state_var.m"
      case (MR_Integer) 1:
#line 1667 "state_var.m"
      case (MR_Integer) 2:
#line 1672 "state_var.m"
        {
#line 1673 "state_var.m"
          {
#line 1673 "state_var.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
#line 1673 "state_var.m"
            return;
          }
#line 1672 "state_var.m"
        }
#line 1667 "state_var.m"
        break;
#line 1667 "state_var.m"
      case (MR_Integer) 3:
#line 1667 "state_var.m"
#line 1667 "state_var.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, (MR_Integer) 0)))) {
#line 1667 "state_var.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1667 "state_var.m"
          case (MR_Integer) 0:
#line 1666 "state_var.m"
            *hlds__make_hlds__state_var__InnerUOVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, (MR_Integer) 1)));
#line 1667 "state_var.m"
            break;
#line 1667 "state_var.m"
          case (MR_Integer) 1:
#line 1672 "state_var.m"
            {
#line 1673 "state_var.m"
              {
#line 1673 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
#line 1673 "state_var.m"
                return;
              }
#line 1672 "state_var.m"
            }
#line 1667 "state_var.m"
            break;
#line 1667 "state_var.m"
        }
#line 1667 "state_var.m"
        break;
#line 1667 "state_var.m"
    }
#line 1660 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32;
#line 1660 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30;
#line 1660 "state_var.m"
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
#line 1650 "state_var.m"
  {
#line 1650 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InnerDIVar_17;
#line 1650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_18;
#line 1650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap_19;
#line 1650 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;

#line 1652 "state_var.m"
    {
#line 1652 "state_var.m"
      hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__InnerStateVar_11, (MR_Integer) 0, &hlds__make_hlds__state_var__InnerDIVar_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23);
    }
#line 1653 "state_var.m"
    hlds__make_hlds__state_var__StatusMap0_18 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20;
#line 1654 "state_var.m"
    {
#line 1654 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1654 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__state_var__InnerDIVar_17));
#line 1654 "state_var.m"
    }
#line 1654 "state_var.m"
    {
#line 1654 "state_var.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_28_28)), hlds__make_hlds__state_var__StatusMap0_18, &hlds__make_hlds__state_var__StatusMap_19);
    }
#line 1655 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_State_21 = (MR_Word) hlds__make_hlds__state_var__StatusMap_19;
#line 1656 "state_var.m"
    {
#line 1656 "state_var.m"
      MR_Word base;
#line 1656 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "state_var.m"
      *hlds__make_hlds__state_var__InnerScopeInfo_12 = base;
#line 1656 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_11));
#line 1656 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__InnerDIVar_17));
#line 1656 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20));
#line 1656 "state_var.m"
    }
#line 1650 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24;
#line 1650 "state_var.m"
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
#line 922 "state_var.m"
  {
#line 922 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 922 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapBefore_17 = (MR_Word) hlds__make_hlds__state_var__StateBefore_14;

#line 924 "state_var.m"
    {
#line 924 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapBefore_17);
    }
#line 929 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 926 "state_var.m"
      {
#line 926 "state_var.m"
        MR_Word hlds__make_hlds__state_var__RevDisjs_18;

#line 926 "state_var.m"
        {
#line 926 "state_var.m"
          hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(hlds__make_hlds__state_var__DisjStates_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__RevDisjs_18);
        }
#line 927 "state_var.m"
        {
#line 927 "state_var.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__RevDisjs_18, hlds__make_hlds__state_var__Disjs_12);
        }
#line 928 "state_var.m"
        *hlds__make_hlds__state_var__StateAfter_15 = hlds__make_hlds__state_var__StateBefore_14;
#line 926 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Store_32 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31;
#line 926 "state_var.m"
      }
#line 929 "state_var.m"
    else
#line 930 "state_var.m"
      {
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_41_41 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_42_42 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusListBefore_19;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ChangedStatusMapAfter_20;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMapAfter_21;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ChangedStatusListAfter_22;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__NextGoalId0_23;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenamings0_24;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Specs0_25;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__NextGoalId_26;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenamings_27;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Specs_28;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_34_34;
#line 930 "state_var.m"
        MR_Word hlds__make_hlds__state_var__RevDisjs_37;

#line 930 "state_var.m"
        {
#line 930 "state_var.m"
          mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42, hlds__make_hlds__state_var__StatusMapBefore_17, &hlds__make_hlds__state_var__StatusListBefore_19);
        }
#line 932 "state_var.m"
        {
#line 932 "state_var.m"
          hlds__make_hlds__state_var__V_34_34 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42);
        }
#line 931 "state_var.m"
        {
#line 931 "state_var.m"
          hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(hlds__make_hlds__state_var__StatusListBefore_19, hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__V_34_34, &hlds__make_hlds__state_var__ChangedStatusMapAfter_20, hlds__make_hlds__state_var__StatusMapBefore_17, &hlds__make_hlds__state_var__StatusMapAfter_21);
        }
#line 933 "state_var.m"
        {
#line 933 "state_var.m"
          mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42, hlds__make_hlds__state_var__ChangedStatusMapAfter_20, &hlds__make_hlds__state_var__ChangedStatusListAfter_22);
        }
#line 935 "state_var.m"
        *hlds__make_hlds__state_var__StateAfter_15 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfter_21;
#line 937 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 0)));
#line 937 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenamings0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 1)));
#line 937 "state_var.m"
        hlds__make_hlds__state_var__Specs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 2)));
#line 938 "state_var.m"
        {
#line 938 "state_var.m"
          hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__StatusMapBefore_17, hlds__make_hlds__state_var__ChangedStatusListAfter_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__RevDisjs_37, hlds__make_hlds__state_var__NextGoalId0_23, &hlds__make_hlds__state_var__NextGoalId_26, hlds__make_hlds__state_var__DelayedRenamings0_24, &hlds__make_hlds__state_var__DelayedRenamings_27, hlds__make_hlds__state_var__Specs0_25, &hlds__make_hlds__state_var__Specs_28);
        }
#line 942 "state_var.m"
        {
#line 942 "state_var.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__RevDisjs_37, hlds__make_hlds__state_var__Disjs_12);
        }
#line 943 "state_var.m"
        {
#line 943 "state_var.m"
          MR_Word base;
#line 943 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 943 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_Store_32 = base;
#line 943 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_26));
#line 943 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamings_27));
#line 943 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_28));
#line 943 "state_var.m"
        }
#line 930 "state_var.m"
      }
#line 922 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29;
#line 922 "state_var.m"
  }
#line 136 "state_var.m"
}

#line 1282 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1282__1_2_p_0(
#line 1282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_76,
#line 1282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_78)
#line 1282 "state_var.m"
{
#line 1282 "state_var.m"
  {
#line 1282 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1282 "state_var.m"
    {
#line 1282 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterThen_78);
    }
#line 1282 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1282 "state_var.m"
  }
#line 1282 "state_var.m"
}

#line 1063 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1063__1_2_p_0(
#line 1063 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23,
#line 1063 "state_var.m"
  MR_Word hlds__make_hlds__state_var__AfterArmStatus_25)
#line 1063 "state_var.m"
{
#line 1063 "state_var.m"
  {
#line 1063 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1063 "state_var.m"
    {
#line 1063 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__AfterArmStatus_25, hlds__make_hlds__state_var__AfterAllArmsStatus_23);
    }
#line 1063 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1063 "state_var.m"
  }
#line 1063 "state_var.m"
}

#line 953 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__953__1_1_p_0(
#line 953 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12)
#line 953 "state_var.m"
{
#line 953 "state_var.m"
  {
#line 953 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 953 "state_var.m"
    {
#line 953 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapAfterGoal_12);
    }
#line 953 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 953 "state_var.m"
  }
#line 953 "state_var.m"
}

#line 1199 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1199__1_2_p_0(
#line 1199 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1199 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41)
#line 1199 "state_var.m"
{
#line 1199 "state_var.m"
  {
#line 1199 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1199 "state_var.m"
    {
#line 1199 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38)), ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterElse_41)));
    }
#line 1199 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1199 "state_var.m"
  }
#line 1199 "state_var.m"
}

#line 1197 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1197__1_2_p_0(
#line 1197 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1197 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40)
#line 1197 "state_var.m"
{
#line 1197 "state_var.m"
  {
#line 1197 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1197 "state_var.m"
    {
#line 1197 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38)), ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterThen_40)));
    }
#line 1197 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1197 "state_var.m"
  }
#line 1197 "state_var.m"
}

#line 1195 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1195__1_2_p_0(
#line 1195 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
#line 1195 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39)
#line 1195 "state_var.m"
{
#line 1195 "state_var.m"
  {
#line 1195 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1195 "state_var.m"
    {
#line 1195 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = mercury__list__sublist_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__SVarsBefore_38, hlds__make_hlds__state_var__SVarsAfterCond_39);
    }
#line 1195 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1195 "state_var.m"
  }
#line 1195 "state_var.m"
}

#line 362 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0(
#line 362 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 362 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 362 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 362 "state_var.m"
{
#line 362 "state_var.m"
  {
#line 362 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 362 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 362 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_13 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 362 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_12 == hlds__make_hlds__state_var__CastY_13);
#line 362 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 3453 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 362 "state_var.m"
    else
#line 362 "state_var.m"
      {
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_10_10;

#line 362 "state_var.m"
        {
#line 362 "state_var.m"
          mercury__counter____Compare____counter_0_0(&hlds__make_hlds__state_var__V_10_10, hlds__make_hlds__state_var__V_4_4, hlds__make_hlds__state_var__V_7_7);
        }
#line 3479 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_10_10 == (MR_Integer) 0);
#line 362 "state_var.m"
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 362 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 362 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_10_10;
#line 362 "state_var.m"
        else
#line 362 "state_var.m"
          {
#line 362 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_11_11;

#line 362 "state_var.m"
            {
#line 362 "state_var.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], &hlds__make_hlds__state_var__V_11_11, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_8_8)));
            }
#line 3499 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_11_11 == (MR_Integer) 0);
#line 362 "state_var.m"
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 362 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 362 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_11_11;
#line 362 "state_var.m"
            else
#line 362 "state_var.m"
              {
#line 362 "state_var.m"
                {
#line 362 "state_var.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[5], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_6_6)), ((MR_Box) (hlds__make_hlds__state_var__V_9_9)));
#line 362 "state_var.m"
                  return;
                }
#line 362 "state_var.m"
              }
#line 362 "state_var.m"
          }
#line 362 "state_var.m"
      }
#line 362 "state_var.m"
  }
#line 362 "state_var.m"
}

#line 362 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0(
#line 362 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 362 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 362 "state_var.m"
{
#line 362 "state_var.m"
  {
#line 362 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 362 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 362 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 362 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
#line 362 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 362 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 362 "state_var.m"
    else
#line 362 "state_var.m"
      {
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_12_12;
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_13_13;
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));

#line 3574 "hlds.make_hlds.state_var.c"
        {
#line 3576 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__succeeded = mercury__counter____Unify____counter_0_0(hlds__make_hlds__state_var__V_3_3, hlds__make_hlds__state_var__V_6_6);
        }
#line 362 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 362 "state_var.m"
          {
#line 3583 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeInfo_12_12 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1];
#line 3585 "hlds.make_hlds.state_var.c"
            {
#line 3587 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_12_12, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
            }
#line 362 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 362 "state_var.m"
              {
#line 3594 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[5];
#line 3596 "hlds.make_hlds.state_var.c"
                {
#line 3598 "hlds.make_hlds.state_var.c"
                  return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_8_8)));
                }
#line 362 "state_var.m"
              }
#line 362 "state_var.m"
          }
#line 362 "state_var.m"
      }
#line 362 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 362 "state_var.m"
  }
#line 362 "state_var.m"
}

#line 323 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
#line 323 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 323 "state_var.m"
{
#line 323 "state_var.m"
  {
#line 323 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 323 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_76 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 323 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_77 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 323 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_76 == hlds__make_hlds__state_var__CastY_77);
#line 323 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 3638 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "state_var.m"
    else
#line 323 "state_var.m"
#line 323 "state_var.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) {
#line 323 "state_var.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
        case (MR_Integer) 0:
#line 323 "state_var.m"
#line 323 "state_var.m"
          switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
#line 323 "state_var.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
            case (MR_Integer) 0:
#line 323 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
            case (MR_Integer) 1:
#line 3662 "hlds.make_hlds.state_var.c"
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
            case (MR_Integer) 2:
#line 3668 "hlds.make_hlds.state_var.c"
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
            case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
#line 323 "state_var.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                case (MR_Integer) 0:
#line 3681 "hlds.make_hlds.state_var.c"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                  break;
#line 323 "state_var.m"
                case (MR_Integer) 1:
#line 3687 "hlds.make_hlds.state_var.c"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                  break;
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
        case (MR_Integer) 1:
#line 323 "state_var.m"
          {
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

#line 323 "state_var.m"
#line 323 "state_var.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
#line 323 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
              case (MR_Integer) 0:
#line 3713 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
              case (MR_Integer) 1:
#line 323 "state_var.m"
                {
#line 323 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));

#line 323 "state_var.m"
                  {
#line 323 "state_var.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_90_90)), ((MR_Box) (hlds__make_hlds__state_var__V_13_13)));
#line 323 "state_var.m"
                    return;
                  }
#line 323 "state_var.m"
                }
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
              case (MR_Integer) 2:
#line 3737 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
              case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
#line 323 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                  case (MR_Integer) 0:
#line 3750 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 1:
#line 3756 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                }
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
            }
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
        case (MR_Integer) 2:
#line 323 "state_var.m"
          {
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

#line 323 "state_var.m"
#line 323 "state_var.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
#line 323 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
              case (MR_Integer) 0:
#line 3786 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
              case (MR_Integer) 1:
#line 3792 "hlds.make_hlds.state_var.c"
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
              case (MR_Integer) 2:
#line 323 "state_var.m"
                {
#line 323 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 323 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 323 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_36_36;

#line 323 "state_var.m"
                  {
#line 323 "state_var.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_36_36, ((MR_Box) (hlds__make_hlds__state_var__V_87_87)), ((MR_Box) (hlds__make_hlds__state_var__V_33_33)));
                  }
#line 3812 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_36_36 == (MR_Integer) 0);
#line 323 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 323 "state_var.m"
                  if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_36_36;
#line 323 "state_var.m"
                  else
#line 323 "state_var.m"
                    {
#line 323 "state_var.m"
                      mercury__term____Compare____context_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_85_85, hlds__make_hlds__state_var__V_35_35);
#line 323 "state_var.m"
                      return;
                    }
#line 323 "state_var.m"
                }
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
              case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
#line 323 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                  case (MR_Integer) 0:
#line 3842 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 1:
#line 3848 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                }
#line 323 "state_var.m"
                break;
#line 323 "state_var.m"
            }
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
        case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) {
#line 323 "state_var.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
            case (MR_Integer) 0:
#line 323 "state_var.m"
              {
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

#line 323 "state_var.m"
#line 323 "state_var.m"
                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
#line 323 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                  case (MR_Integer) 0:
#line 3883 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 1:
#line 3889 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 2:
#line 3895 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
#line 323 "state_var.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                      case (MR_Integer) 0:
#line 323 "state_var.m"
                        {
#line 323 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));

#line 323 "state_var.m"
                          {
#line 323 "state_var.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_84_84)), ((MR_Box) (hlds__make_hlds__state_var__V_54_54)));
#line 323 "state_var.m"
                            return;
                          }
#line 323 "state_var.m"
                        }
#line 323 "state_var.m"
                        break;
#line 323 "state_var.m"
                      case (MR_Integer) 1:
#line 3926 "hlds.make_hlds.state_var.c"
                        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "state_var.m"
                        break;
#line 323 "state_var.m"
                    }
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                }
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
            case (MR_Integer) 1:
#line 323 "state_var.m"
              {
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

#line 323 "state_var.m"
#line 323 "state_var.m"
                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
#line 323 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                  case (MR_Integer) 0:
#line 3956 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 1:
#line 3962 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 2:
#line 3968 "hlds.make_hlds.state_var.c"
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                  case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
#line 323 "state_var.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
                      case (MR_Integer) 0:
#line 3981 "hlds.make_hlds.state_var.c"
                        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "state_var.m"
                        break;
#line 323 "state_var.m"
                      case (MR_Integer) 1:
#line 323 "state_var.m"
                        {
#line 323 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 323 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 323 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_75_75;

#line 323 "state_var.m"
                          {
#line 323 "state_var.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_75_75, ((MR_Box) (hlds__make_hlds__state_var__V_89_89)), ((MR_Box) (hlds__make_hlds__state_var__V_73_73)));
                          }
#line 4001 "hlds.make_hlds.state_var.c"
                          hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_75_75 == (MR_Integer) 0);
#line 323 "state_var.m"
                          hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 323 "state_var.m"
                          if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
                            *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_75_75;
#line 323 "state_var.m"
                          else
#line 323 "state_var.m"
                            {
#line 323 "state_var.m"
                              {
#line 323 "state_var.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_88_88)), ((MR_Box) (hlds__make_hlds__state_var__V_74_74)));
#line 323 "state_var.m"
                                return;
                              }
#line 323 "state_var.m"
                            }
#line 323 "state_var.m"
                        }
#line 323 "state_var.m"
                        break;
#line 323 "state_var.m"
                    }
#line 323 "state_var.m"
                    break;
#line 323 "state_var.m"
                }
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
      }
#line 323 "state_var.m"
  }
#line 323 "state_var.m"
}

#line 323 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 323 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 323 "state_var.m"
{
#line 323 "state_var.m"
  {
#line 323 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 323 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_19 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 323 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_20 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 323 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_19 == hlds__make_hlds__state_var__CastY_20);
#line 323 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 323 "state_var.m"
    else
#line 323 "state_var.m"
#line 323 "state_var.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) {
#line 323 "state_var.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
        case (MR_Integer) 0:
#line 323 "state_var.m"
          {
#line 323 "state_var.m"
            MR_Integer hlds__make_hlds__state_var__CastX_3 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 323 "state_var.m"
            MR_Integer hlds__make_hlds__state_var__CastY_4 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 323 "state_var.m"
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastY_4 == hlds__make_hlds__state_var__CastX_3);
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
        case (MR_Integer) 1:
#line 323 "state_var.m"
          {
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_26_26;
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_6_6;

#line 323 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 323 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
              {
#line 323 "state_var.m"
                hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 4112 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_26_26 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4114 "hlds.make_hlds.state_var.c"
                {
#line 4116 "hlds.make_hlds.state_var.c"
                  return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_26_26, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_6_6)));
                }
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
        case (MR_Integer) 2:
#line 323 "state_var.m"
          {
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_22_22;
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_10_10;
#line 323 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_12_12;

#line 323 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 323 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
              {
#line 323 "state_var.m"
                hlds__make_hlds__state_var__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "state_var.m"
                hlds__make_hlds__state_var__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 4150 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4152 "hlds.make_hlds.state_var.c"
                {
#line 4154 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__state_var__V_7_7)), ((MR_Box) (hlds__make_hlds__state_var__V_10_10)));
                }
#line 323 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 4159 "hlds.make_hlds.state_var.c"
                  {
#line 4161 "hlds.make_hlds.state_var.c"
                    return hlds__make_hlds__state_var__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__state_var__V_9_9, hlds__make_hlds__state_var__V_12_12);
                  }
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
        case (MR_Integer) 3:
#line 323 "state_var.m"
#line 323 "state_var.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)))) {
#line 323 "state_var.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 323 "state_var.m"
            case (MR_Integer) 0:
#line 323 "state_var.m"
              {
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_21_21;
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_14_14;

#line 323 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 323 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
                  {
#line 323 "state_var.m"
                    hlds__make_hlds__state_var__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 4196 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4198 "hlds.make_hlds.state_var.c"
                    {
#line 4200 "hlds.make_hlds.state_var.c"
                      return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__state_var__V_13_13)), ((MR_Box) (hlds__make_hlds__state_var__V_14_14)));
                    }
#line 323 "state_var.m"
                  }
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
            case (MR_Integer) 1:
#line 323 "state_var.m"
              {
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_24_24;
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_25_25;
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_17_17;
#line 323 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_18_18;

#line 323 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 323 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
                  {
#line 323 "state_var.m"
                    hlds__make_hlds__state_var__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "state_var.m"
                    hlds__make_hlds__state_var__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 4236 "hlds.make_hlds.state_var.c"
                    hlds__make_hlds__state_var__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4238 "hlds.make_hlds.state_var.c"
                    {
#line 4240 "hlds.make_hlds.state_var.c"
                      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__state_var__V_15_15)), ((MR_Box) (hlds__make_hlds__state_var__V_17_17)));
                    }
#line 323 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 323 "state_var.m"
                      {
#line 4247 "hlds.make_hlds.state_var.c"
                        hlds__make_hlds__state_var__TypeInfo_25_25 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4249 "hlds.make_hlds.state_var.c"
                        {
#line 4251 "hlds.make_hlds.state_var.c"
                          return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_25_25, ((MR_Box) (hlds__make_hlds__state_var__V_16_16)), ((MR_Box) (hlds__make_hlds__state_var__V_18_18)));
                        }
#line 323 "state_var.m"
                      }
#line 323 "state_var.m"
                  }
#line 323 "state_var.m"
              }
#line 323 "state_var.m"
              break;
#line 323 "state_var.m"
          }
#line 323 "state_var.m"
          break;
#line 323 "state_var.m"
      }
#line 323 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 323 "state_var.m"
  }
#line 323 "state_var.m"
}

#line 357 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0(
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
    MR_Integer hlds__make_hlds__state_var__CastX_6 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 357 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_7 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 357 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_6 == hlds__make_hlds__state_var__CastY_7);
#line 357 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4299 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "state_var.m"
    else
#line 357 "state_var.m"
      {
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = (MR_Word) hlds__make_hlds__state_var__HeadVar__2_2;
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = (MR_Word) hlds__make_hlds__state_var__HeadVar__3_3;

#line 357 "state_var.m"
        {
#line 357 "state_var.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[2], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_5_5)));
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
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0(
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
    MR_Integer hlds__make_hlds__state_var__CastX_5 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 357 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_6 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 357 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_5 == hlds__make_hlds__state_var__CastY_6);
#line 357 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 357 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 357 "state_var.m"
    else
#line 357 "state_var.m"
      {
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = (MR_Word) hlds__make_hlds__state_var__HeadVar__1_1;
#line 357 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = (MR_Word) hlds__make_hlds__state_var__HeadVar__2_2;

#line 4357 "hlds.make_hlds.state_var.c"
        {
#line 4359 "hlds.make_hlds.state_var.c"
          return hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[2], ((MR_Box) (hlds__make_hlds__state_var__V_3_3)), ((MR_Box) (hlds__make_hlds__state_var__V_4_4)));
        }
#line 357 "state_var.m"
      }
#line 357 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 357 "state_var.m"
  }
#line 357 "state_var.m"
}

#line 1571 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(
#line 1571 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 1571 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 1571 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 1571 "state_var.m"
{
#line 1571 "state_var.m"
  {
#line 1571 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1571 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_18 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 1571 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_19 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 1571 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_18 == hlds__make_hlds__state_var__CastY_19);
#line 1571 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4395 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 1571 "state_var.m"
    else
#line 1571 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "state_var.m"
      if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 1571 "state_var.m"
      else
#line 4407 "hlds.make_hlds.state_var.c"
        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
#line 1571 "state_var.m"
    else
#line 1571 "state_var.m"
      {
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

#line 1571 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4422 "hlds.make_hlds.state_var.c"
          *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
#line 1571 "state_var.m"
        else
#line 1571 "state_var.m"
          {
#line 1571 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 1571 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 1571 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 1571 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_10_10;

#line 1571 "state_var.m"
            {
#line 1571 "state_var.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_10_10, ((MR_Box) (hlds__make_hlds__state_var__V_25_25)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
            }
#line 4442 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_10_10 == (MR_Integer) 0);
#line 1571 "state_var.m"
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1571 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1571 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_10_10;
#line 1571 "state_var.m"
            else
#line 1571 "state_var.m"
              {
#line 1571 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_11_11;

#line 1571 "state_var.m"
                {
#line 1571 "state_var.m"
                  hlds__make_hlds__state_var____Compare____svar_status_0_0(&hlds__make_hlds__state_var__V_11_11, hlds__make_hlds__state_var__V_24_24, hlds__make_hlds__state_var__V_8_8);
                }
#line 4462 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_11_11 == (MR_Integer) 0);
#line 1571 "state_var.m"
                hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1571 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1571 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_11_11;
#line 1571 "state_var.m"
                else
#line 1571 "state_var.m"
                  {
#line 1571 "state_var.m"
                    hlds__make_hlds__state_var____Compare____svar_status_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_23_23, hlds__make_hlds__state_var__V_9_9);
#line 1571 "state_var.m"
                    return;
                  }
#line 1571 "state_var.m"
              }
#line 1571 "state_var.m"
          }
#line 1571 "state_var.m"
      }
#line 1571 "state_var.m"
  }
#line 1571 "state_var.m"
}

#line 1571 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(
#line 1571 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1571 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 1571 "state_var.m"
{
#line 1571 "state_var.m"
  {
#line 1571 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1571 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_11 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 1571 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 1571 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_11 == hlds__make_hlds__state_var__CastY_12);
#line 1571 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1571 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1571 "state_var.m"
    else
#line 1571 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "state_var.m"
      {
#line 1571 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 1571 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 1571 "state_var.m"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastY_10 == hlds__make_hlds__state_var__CastX_9);
#line 1571 "state_var.m"
      }
#line 1571 "state_var.m"
    else
#line 1571 "state_var.m"
      {
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_13_13;
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6;
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7;
#line 1571 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8;

#line 1571 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1571 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1571 "state_var.m"
          {
#line 1571 "state_var.m"
            hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 1571 "state_var.m"
            hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1571 "state_var.m"
            hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 4560 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4562 "hlds.make_hlds.state_var.c"
            {
#line 4564 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__state_var__V_3_3)), ((MR_Box) (hlds__make_hlds__state_var__V_6_6)));
            }
#line 1571 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1571 "state_var.m"
              {
#line 4571 "hlds.make_hlds.state_var.c"
                {
#line 4573 "hlds.make_hlds.state_var.c"
                  hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__V_4_4, hlds__make_hlds__state_var__V_7_7);
                }
#line 1571 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 4578 "hlds.make_hlds.state_var.c"
                  {
#line 4580 "hlds.make_hlds.state_var.c"
                    return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__V_5_5, hlds__make_hlds__state_var__V_8_8);
                  }
#line 1571 "state_var.m"
              }
#line 1571 "state_var.m"
          }
#line 1571 "state_var.m"
      }
#line 1571 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1571 "state_var.m"
  }
#line 1571 "state_var.m"
}

#line 1642 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(
#line 1642 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 1642 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 1642 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 1642 "state_var.m"
{
#line 1642 "state_var.m"
  {
#line 1642 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1642 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 1642 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_13 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 1642 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_12 == hlds__make_hlds__state_var__CastY_13);
#line 1642 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 4620 "hlds.make_hlds.state_var.c"
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
#line 1642 "state_var.m"
    else
#line 1642 "state_var.m"
      {
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_10_10;

#line 1642 "state_var.m"
        {
#line 1642 "state_var.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_10_10, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
        }
#line 4646 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_10_10 == (MR_Integer) 0);
#line 1642 "state_var.m"
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1642 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1642 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_10_10;
#line 1642 "state_var.m"
        else
#line 1642 "state_var.m"
          {
#line 1642 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_11_11;

#line 1642 "state_var.m"
            {
#line 1642 "state_var.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__V_11_11, ((MR_Box) (hlds__make_hlds__state_var__V_5_5)), ((MR_Box) (hlds__make_hlds__state_var__V_8_8)));
            }
#line 4666 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_11_11 == (MR_Integer) 0);
#line 1642 "state_var.m"
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 1642 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1642 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__V_11_11;
#line 1642 "state_var.m"
            else
#line 1642 "state_var.m"
              {
#line 1642 "state_var.m"
                hlds__make_hlds__state_var____Compare____svar_state_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__V_6_6, hlds__make_hlds__state_var__V_9_9);
#line 1642 "state_var.m"
                return;
              }
#line 1642 "state_var.m"
          }
#line 1642 "state_var.m"
      }
#line 1642 "state_var.m"
  }
#line 1642 "state_var.m"
}

#line 1642 "state_var.m"
MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(
#line 1642 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1642 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 1642 "state_var.m"
{
#line 1642 "state_var.m"
  {
#line 1642 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1642 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
#line 1642 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

#line 1642 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
#line 1642 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1642 "state_var.m"
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1642 "state_var.m"
    else
#line 1642 "state_var.m"
      {
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_12_12;
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 1642 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));

#line 4735 "hlds.make_hlds.state_var.c"
        {
#line 4737 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__V_3_3)), ((MR_Box) (hlds__make_hlds__state_var__V_6_6)));
        }
#line 1642 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1642 "state_var.m"
          {
#line 4744 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeInfo_12_12 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 4746 "hlds.make_hlds.state_var.c"
            {
#line 4748 "hlds.make_hlds.state_var.c"
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_12_12, ((MR_Box) (hlds__make_hlds__state_var__V_4_4)), ((MR_Box) (hlds__make_hlds__state_var__V_7_7)));
            }
#line 1642 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 4753 "hlds.make_hlds.state_var.c"
              {
#line 4755 "hlds.make_hlds.state_var.c"
                return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(hlds__make_hlds__state_var__V_5_5, hlds__make_hlds__state_var__V_8_8);
              }
#line 1642 "state_var.m"
          }
#line 1642 "state_var.m"
      }
#line 1642 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1642 "state_var.m"
  }
#line 1642 "state_var.m"
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

#line 378 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
#line 378 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
#line 378 "state_var.m"
{
#line 378 "state_var.m"
  {
#line 378 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 378 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
#line 378 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

#line 378 "state_var.m"
    {
#line 378 "state_var.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__Cast_HeadVar1_4, hlds__make_hlds__state_var__Cast_HeadVar2_5);
#line 378 "state_var.m"
      return;
    }
#line 378 "state_var.m"
  }
#line 378 "state_var.m"
}

#line 378 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_1,
#line 378 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
#line 378 "state_var.m"
{
#line 4872 "hlds.make_hlds.state_var.c"
  {
#line 4874 "hlds.make_hlds.state_var.c"
    MR_bool hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__HeadVar__2_1 == hlds__make_hlds__state_var__HeadVar__2_2);

#line 4877 "hlds.make_hlds.state_var.c"
    return hlds__make_hlds__state_var__succeeded;
#line 4879 "hlds.make_hlds.state_var.c"
  }
#line 378 "state_var.m"
}

#line 320 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
#line 320 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1)
#line 320 "state_var.m"
{
#line 320 "state_var.m"
  {
#line 320 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 320 "state_var.m"
    {
#line 320 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(hlds__make_hlds__state_var__HeadVar__1_1);
#line 320 "state_var.m"
      return;
    }
#line 320 "state_var.m"
  }
#line 320 "state_var.m"
}

#line 320 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void)
#line 320 "state_var.m"
{
#line 320 "state_var.m"
  {
#line 320 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 320 "state_var.m"
    {
#line 320 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 320 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 320 "state_var.m"
  }
#line 320 "state_var.m"
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
#line 4954 "hlds.make_hlds.state_var.c"
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
#line 4976 "hlds.make_hlds.state_var.c"
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

#line 5037 "hlds.make_hlds.state_var.c"
        {
#line 5039 "hlds.make_hlds.state_var.c"
          hlds__make_hlds__state_var__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__make_hlds__state_var__V_3_3, hlds__make_hlds__state_var__V_5_5);
        }
#line 37 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 5044 "hlds.make_hlds.state_var.c"
          {
#line 5046 "hlds.make_hlds.state_var.c"
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

#line 2080 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_1_p_0(
#line 2080 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1)
#line 2080 "state_var.m"
{
#line 2082 "state_var.m"
  {
#line 2082 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2082 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 2082 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 2082 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));

#line 2082 "state_var.m"
    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2082 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 2082 "state_var.m"
  }
#line 2080 "state_var.m"
}

#line 2034 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
#line 2034 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_5,
#line 2034 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_6,
#line 2034 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 2034 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12)
#line 2034 "state_var.m"
{
#line 2037 "state_var.m"
  {
#line 2037 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_8;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_9;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_10;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_17_17;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 2037 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;

#line 2039 "state_var.m"
    {
#line 2039 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = parse_tree__error_util__list_to_pieces_1_f_0(hlds__make_hlds__state_var__NextStateVars_6);
    }
#line 2039 "state_var.m"
    {
#line 2039 "state_var.m"
      hlds__make_hlds__state_var__V_17_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_36_36, hlds__make_hlds__state_var__V_18_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[27]));
    }
#line 2038 "state_var.m"
    {
#line 2038 "state_var.m"
      hlds__make_hlds__state_var__Pieces_8 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_36_36, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[51]), hlds__make_hlds__state_var__V_17_17);
    }
#line 2041 "state_var.m"
    {
#line 2041 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2041 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_8));
#line 2041 "state_var.m"
    }
#line 2041 "state_var.m"
    {
#line 2041 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_29_29));
#line 2041 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2041 "state_var.m"
    }
#line 2041 "state_var.m"
    {
#line 2041 "state_var.m"
      hlds__make_hlds__state_var__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2041 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_9, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_5));
#line 2041 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_9, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_28_28));
#line 2041 "state_var.m"
    }
#line 2042 "state_var.m"
    {
#line 2042 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_9));
#line 2042 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2042 "state_var.m"
    }
#line 2042 "state_var.m"
    {
#line 2042 "state_var.m"
      hlds__make_hlds__state_var__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2042 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2042 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2042 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 2042 "state_var.m"
    }
#line 2043 "state_var.m"
    {
#line 2043 "state_var.m"
      MR_Word base;
#line 2043 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12 = base;
#line 2043 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_10));
#line 2043 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11));
#line 2043 "state_var.m"
    }
#line 2037 "state_var.m"
  }
#line 2034 "state_var.m"
}

#line 2019 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
#line 2019 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_7,
#line 2019 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NextStateVars_8,
#line 2019 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenMissing_9,
#line 2019 "state_var.m"
  MR_String hlds__make_hlds__state_var__WhenNotMissing_10,
#line 2019 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15,
#line 2019 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16)
#line 2019 "state_var.m"
{
#line 2024 "state_var.m"
  {
#line 2024 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_12;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_13;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_14;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_17_17;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_21_21;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_37_37;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_48_48;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_49_49;
#line 2024 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_53_53;

#line 2025 "state_var.m"
    {
#line 2025 "state_var.m"
      hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__WhenNotMissing_10));
#line 2025 "state_var.m"
    }
#line 2025 "state_var.m"
    {
#line 2025 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[21])));
#line 2025 "state_var.m"
    }
#line 2025 "state_var.m"
    {
#line 2025 "state_var.m"
      hlds__make_hlds__state_var__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[47])));
#line 2025 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 2025 "state_var.m"
    }
#line 2027 "state_var.m"
    {
#line 2027 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = parse_tree__error_util__list_to_pieces_1_f_0(hlds__make_hlds__state_var__NextStateVars_8);
    }
#line 2028 "state_var.m"
    {
#line 2028 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2028 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__state_var__WhenMissing_9));
#line 2028 "state_var.m"
    }
#line 2028 "state_var.m"
    {
#line 2028 "state_var.m"
      hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 2028 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[24])));
#line 2028 "state_var.m"
    }
#line 2028 "state_var.m"
    {
#line 2028 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[49])));
#line 2028 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_37_37));
#line 2028 "state_var.m"
    }
#line 2027 "state_var.m"
    {
#line 2027 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[48])));
#line 2027 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 2027 "state_var.m"
    }
#line 2027 "state_var.m"
    {
#line 2027 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_56_56, hlds__make_hlds__state_var__V_30_30, hlds__make_hlds__state_var__V_31_31);
    }
#line 2026 "state_var.m"
    {
#line 2026 "state_var.m"
      hlds__make_hlds__state_var__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_56_56, hlds__make_hlds__state_var__V_17_17, hlds__make_hlds__state_var__V_29_29);
    }
#line 2030 "state_var.m"
    {
#line 2030 "state_var.m"
      hlds__make_hlds__state_var__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_12));
#line 2030 "state_var.m"
    }
#line 2030 "state_var.m"
    {
#line 2030 "state_var.m"
      hlds__make_hlds__state_var__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_49_49));
#line 2030 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2030 "state_var.m"
    }
#line 2030 "state_var.m"
    {
#line 2030 "state_var.m"
      hlds__make_hlds__state_var__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_7));
#line 2030 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_48_48));
#line 2030 "state_var.m"
    }
#line 2031 "state_var.m"
    {
#line 2031 "state_var.m"
      hlds__make_hlds__state_var__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_13));
#line 2031 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2031 "state_var.m"
    }
#line 2031 "state_var.m"
    {
#line 2031 "state_var.m"
      hlds__make_hlds__state_var__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2031 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2031 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2031 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_53_53));
#line 2031 "state_var.m"
    }
#line 2032 "state_var.m"
    {
#line 2032 "state_var.m"
      MR_Word base;
#line 2032 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2032 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16 = base;
#line 2032 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_14));
#line 2032 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15));
#line 2032 "state_var.m"
    }
#line 2024 "state_var.m"
  }
#line 2019 "state_var.m"
}

#line 1990 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1990 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1990 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
#line 1990 "state_var.m"
{
#line 1993 "state_var.m"
  {
#line 1993 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1993 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_22_22;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 1993 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;

#line 1994 "state_var.m"
    {
#line 1994 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1996 "state_var.m"
    {
#line 1996 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_10));
#line 1996 "state_var.m"
    }
#line 1996 "state_var.m"
    {
#line 1996 "state_var.m"
      hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1996 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[15])));
#line 1996 "state_var.m"
    }
#line 1996 "state_var.m"
    {
#line 1996 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
#line 1996 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 1996 "state_var.m"
    }
#line 1995 "state_var.m"
    {
#line 1995 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[46])));
#line 1995 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1995 "state_var.m"
    }
#line 1997 "state_var.m"
    {
#line 1997 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1997 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1997 "state_var.m"
    }
#line 1997 "state_var.m"
    {
#line 1997 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1997 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_30_30));
#line 1997 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1997 "state_var.m"
    }
#line 1997 "state_var.m"
    {
#line 1997 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1997 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1997 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_29_29));
#line 1997 "state_var.m"
    }
#line 1998 "state_var.m"
    {
#line 1998 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1998 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1998 "state_var.m"
    }
#line 1998 "state_var.m"
    {
#line 1998 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1998 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1998 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1998 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 1998 "state_var.m"
    }
#line 1999 "state_var.m"
    {
#line 1999 "state_var.m"
      MR_Word base;
#line 1999 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1999 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1999 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1999 "state_var.m"
    }
#line 1993 "state_var.m"
  }
#line 1990 "state_var.m"
}

#line 1977 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_6,
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_7,
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_8,
#line 1977 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
#line 1977 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
#line 1977 "state_var.m"
{
#line 1980 "state_var.m"
  {
#line 1980 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1980 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_19_19;
#line 1980 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_20_20;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 1980 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;

#line 1981 "state_var.m"
    {
#line 1981 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1983 "state_var.m"
    {
#line 1983 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
#line 1983 "state_var.m"
    {
#line 1983 "state_var.m"
      hlds__make_hlds__state_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1983 "state_var.m"
    }
#line 1983 "state_var.m"
    {
#line 1983 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_19_19));
#line 1983 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1983 "state_var.m"
    }
#line 1982 "state_var.m"
    {
#line 1982 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
#line 1982 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1982 "state_var.m"
    }
#line 1984 "state_var.m"
    {
#line 1984 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1984 "state_var.m"
    }
#line 1984 "state_var.m"
    {
#line 1984 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_29_29));
#line 1984 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1984 "state_var.m"
    }
#line 1984 "state_var.m"
    {
#line 1984 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1984 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_28_28));
#line 1984 "state_var.m"
    }
#line 1985 "state_var.m"
    {
#line 1985 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1985 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1985 "state_var.m"
    }
#line 1985 "state_var.m"
    {
#line 1985 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1985 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1985 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1985 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 1985 "state_var.m"
    }
#line 1986 "state_var.m"
    {
#line 1986 "state_var.m"
      MR_Word base;
#line 1986 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1986 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1986 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1986 "state_var.m"
    }
#line 1980 "state_var.m"
  }
#line 1977 "state_var.m"
}

#line 1963 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0(
#line 1963 "state_var.m"
  MR_String hlds__make_hlds__state_var__DorC_7,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_8,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_9,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_10,
#line 1963 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
#line 1963 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17)
#line 1963 "state_var.m"
{
#line 1967 "state_var.m"
  {
#line 1967 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1967 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_12;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_13;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_14;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_15;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1967 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_22_22;
#line 1967 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_24_24;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_32_32;
#line 1967 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_36_36;

#line 1968 "state_var.m"
    {
#line 1968 "state_var.m"
      hlds__make_hlds__state_var__Name_12 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_9, hlds__make_hlds__state_var__StateVar_10);
    }
#line 1969 "state_var.m"
    {
#line 1969 "state_var.m"
      hlds__make_hlds__state_var__V_24_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__DorC_7, hlds__make_hlds__state_var__Name_12);
    }
#line 1969 "state_var.m"
    {
#line 1969 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__V_24_24);
    }
#line 1969 "state_var.m"
    {
#line 1969 "state_var.m"
      hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1969 "state_var.m"
    }
#line 1969 "state_var.m"
    {
#line 1969 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 1969 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[13])));
#line 1969 "state_var.m"
    }
#line 1969 "state_var.m"
    {
#line 1969 "state_var.m"
      hlds__make_hlds__state_var__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[29])));
#line 1969 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_13, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1969 "state_var.m"
    }
#line 1971 "state_var.m"
    {
#line 1971 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_13));
#line 1971 "state_var.m"
    }
#line 1971 "state_var.m"
    {
#line 1971 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1971 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1971 "state_var.m"
    }
#line 1971 "state_var.m"
    {
#line 1971 "state_var.m"
      hlds__make_hlds__state_var__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_14, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_8));
#line 1971 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_14, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1971 "state_var.m"
    }
#line 1972 "state_var.m"
    {
#line 1972 "state_var.m"
      hlds__make_hlds__state_var__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_14));
#line 1972 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1972 "state_var.m"
    }
#line 1972 "state_var.m"
    {
#line 1972 "state_var.m"
      hlds__make_hlds__state_var__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1972 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1972 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1972 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_36_36));
#line 1972 "state_var.m"
    }
#line 1973 "state_var.m"
    {
#line 1973 "state_var.m"
      MR_Word base;
#line 1973 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17 = base;
#line 1973 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_15));
#line 1973 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16));
#line 1973 "state_var.m"
    }
#line 1967 "state_var.m"
  }
#line 1963 "state_var.m"
}

#line 1874 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__DelayedRenamingToAdd_8,
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal0_9,
#line 1874 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_10,
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21,
#line 1874 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22,
#line 1874 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23,
#line 1874 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24)
#line 1874 "state_var.m"
{
#line 1880 "state_var.m"
  {
#line 1880 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1880 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal0_9, (MR_Integer) 0)));
#line 1880 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal0_9, (MR_Integer) 1)));
#line 1880 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalId0_15;
#line 1888 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_16;
#line 1883 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_16;

#line 1882 "state_var.m"
    {
#line 1882 "state_var.m"
      hlds__make_hlds__state_var__GoalId0_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo0_14);
    }
#line 1883 "state_var.m"
    {
#line 1883 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, ((MR_Box) (hlds__make_hlds__state_var__GoalId0_15)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_16);
    }
#line 1883 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1883 "state_var.m"
      {
#line 1883 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenaming0_16 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_16);
#line 1883 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1883 "state_var.m"
      }
#line 1888 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1885 "state_var.m"
      {
#line 1885 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenaming_17;

#line 1885 "state_var.m"
        {
#line 1885 "state_var.m"
          hlds__make_hlds__state_var__DelayedRenaming_17 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenamingToAdd_8, hlds__make_hlds__state_var__DelayedRenaming0_16);
        }
#line 1886 "state_var.m"
        {
#line 1886 "state_var.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId0_15)), ((MR_Box) (hlds__make_hlds__state_var__DelayedRenaming_17)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);
        }
#line 1887 "state_var.m"
        *hlds__make_hlds__state_var__Goal_10 = hlds__make_hlds__state_var__Goal0_9;
#line 1885 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21;
#line 1885 "state_var.m"
      }
#line 1888 "state_var.m"
    else
#line 1893 "state_var.m"
      {
#line 1893 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_18;
#line 1893 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_19;
#line 1893 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalInfo_20;

#line 1893 "state_var.m"
        {
#line 1893 "state_var.m"
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_18, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22);
        }
#line 1894 "state_var.m"
        hlds__make_hlds__state_var__GoalId_19 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_18;
#line 1895 "state_var.m"
        {
#line 1895 "state_var.m"
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_19, hlds__make_hlds__state_var__GoalInfo0_14, &hlds__make_hlds__state_var__GoalInfo_20);
        }
#line 1896 "state_var.m"
        {
#line 1896 "state_var.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_19)), ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingToAdd_8)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);
        }
#line 1897 "state_var.m"
        {
#line 1897 "state_var.m"
          MR_Word base;
#line 1897 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1897 "state_var.m"
          *hlds__make_hlds__state_var__Goal_10 = base;
#line 1897 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr_13));
#line 1897 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_20));
#line 1897 "state_var.m"
        }
#line 1893 "state_var.m"
      }
#line 1880 "state_var.m"
  }
#line 1874 "state_var.m"
}

#line 1865 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1(
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1865 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1865 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1865 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1865 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6)
#line 1865 "state_var.m"
{
#line 1865 "state_var.m"
  {
#line 1865 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 1865 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv3_Goal_10;
#line 1865 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22;
#line 1865 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24;

#line 1865 "state_var.m"
    {
#line 1865 "state_var.m"
      hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv3_Goal_10, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_5), &hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24);
    }
#line 1865 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv3_Goal_10));
#line 1865 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22));
#line 1865 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24));
#line 1865 "state_var.m"
  }
#line 1865 "state_var.m"
}

#line 1851 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(
#line 1851 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goal_7,
#line 1851 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Conjuncts_8,
#line 1851 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16,
#line 1851 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17,
#line 1851 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18,
#line 1851 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19)
#line 1851 "state_var.m"
{
#line 1857 "state_var.m"
  {
#line 1857 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1857 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_7, (MR_Integer) 0)));
#line 1857 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_7, (MR_Integer) 1)));
#line 1870 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Conjuncts0_13;
#line 1861 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;

#line 1861 "state_var.m"
    hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1861 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1861 "state_var.m"
      {
#line 1861 "state_var.m"
        hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 1)));
#line 1861 "state_var.m"
        hlds__make_hlds__state_var__Conjuncts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 2)));
#line 1861 "state_var.m"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_20_20 == (MR_Integer) 0);
#line 1861 "state_var.m"
      }
#line 1870 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1862 "state_var.m"
      {
#line 1862 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_14;
#line 1867 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalDelayedRenaming_15;
#line 1863 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15;

#line 1862 "state_var.m"
        {
#line 1862 "state_var.m"
          hlds__make_hlds__state_var__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo_12);
        }
#line 1863 "state_var.m"
        {
#line 1863 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18, ((MR_Box) (hlds__make_hlds__state_var__GoalId_14)), &hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
        }
#line 1863 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1863 "state_var.m"
          {
#line 1863 "state_var.m"
            hlds__make_hlds__state_var__GoalDelayedRenaming_15 = ((MR_Word) hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
#line 1863 "state_var.m"
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1863 "state_var.m"
          }
#line 1867 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1864 "state_var.m"
          {
#line 1864 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_33_33;
#line 1864 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1864 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17;
#line 1864 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19;

#line 1865 "state_var.m"
            {
#line 1865 "state_var.m"
              hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1865 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
#line 1865 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1));
#line 1865 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1865 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__state_var__GoalDelayedRenaming_15));
#line 1865 "state_var.m"
            }
#line 6142 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1864 "state_var.m"
            {
#line 1864 "state_var.m"
              mercury__list__map_foldl2_7_p_0(hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__TypeCtorInfo_33_33, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], hlds__make_hlds__state_var__V_21_21, hlds__make_hlds__state_var__Conjuncts0_13, hlds__make_hlds__state_var__Conjuncts_8, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16)), &hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18)), &hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19);
            }
#line 1864 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = ((MR_Word) hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17);
#line 1864 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = ((MR_Word) hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19);
#line 1864 "state_var.m"
          }
#line 1867 "state_var.m"
        else
#line 1868 "state_var.m"
          {
#line 1868 "state_var.m"
            *hlds__make_hlds__state_var__Conjuncts_8 = hlds__make_hlds__state_var__Conjuncts0_13;
#line 1868 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18;
#line 1868 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16;
#line 1868 "state_var.m"
          }
#line 1862 "state_var.m"
      }
#line 1870 "state_var.m"
    else
#line 1871 "state_var.m"
      {
#line 1871 "state_var.m"
        {
#line 1871 "state_var.m"
          MR_Word base;
#line 1871 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "state_var.m"
          *hlds__make_hlds__state_var__Conjuncts_8 = base;
#line 1871 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_7));
#line 1871 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1871 "state_var.m"
        }
#line 1871 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18;
#line 1871 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16;
#line 1871 "state_var.m"
      }
#line 1857 "state_var.m"
  }
#line 1851 "state_var.m"
}

#line 1779 "state_var.m"
static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
#line 1779 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_4,
#line 1779 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Status_5)
#line 1779 "state_var.m"
{
#line 1783 "state_var.m"
  {
#line 1783 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1783 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ProgVar_6;

#line 1783 "state_var.m"
#line 1783 "state_var.m"
    switch (hlds__make_hlds__state_var__LocKind_4) {
#line 1783 "state_var.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1783 "state_var.m"
      case (MR_Integer) 1:
#line 1798 "state_var.m"
#line 1798 "state_var.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) {
#line 1798 "state_var.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1798 "state_var.m"
          case (MR_Integer) 0:
#line 1805 "state_var.m"
            {
#line 1806 "state_var.m"
              {
#line 1806 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
              }
#line 1805 "state_var.m"
            }
#line 1798 "state_var.m"
            break;
#line 1798 "state_var.m"
          case (MR_Integer) 1:
#line 1801 "state_var.m"
            hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)));
#line 1798 "state_var.m"
            break;
#line 1798 "state_var.m"
          case (MR_Integer) 2:
#line 1805 "state_var.m"
            {
#line 1806 "state_var.m"
              {
#line 1806 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
              }
#line 1805 "state_var.m"
            }
#line 1798 "state_var.m"
            break;
#line 1798 "state_var.m"
          case (MR_Integer) 3:
#line 1798 "state_var.m"
#line 1798 "state_var.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)))) {
#line 1798 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1798 "state_var.m"
              case (MR_Integer) 0:
#line 1797 "state_var.m"
                hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));
#line 1798 "state_var.m"
                break;
#line 1798 "state_var.m"
              case (MR_Integer) 1:
#line 1799 "state_var.m"
                {
#line 1799 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));

#line 1799 "state_var.m"
                  hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 2)));
#line 1799 "state_var.m"
                }
#line 1798 "state_var.m"
                break;
#line 1798 "state_var.m"
            }
#line 1798 "state_var.m"
            break;
#line 1798 "state_var.m"
        }
#line 1783 "state_var.m"
        break;
#line 1783 "state_var.m"
      case (MR_Integer) 0:
#line 1786 "state_var.m"
#line 1786 "state_var.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) {
#line 1786 "state_var.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1786 "state_var.m"
          case (MR_Integer) 0:
#line 1791 "state_var.m"
            {
#line 1792 "state_var.m"
              {
#line 1792 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
              }
#line 1791 "state_var.m"
            }
#line 1786 "state_var.m"
            break;
#line 1786 "state_var.m"
          case (MR_Integer) 1:
#line 1786 "state_var.m"
          case (MR_Integer) 2:
#line 1791 "state_var.m"
            {
#line 1792 "state_var.m"
              {
#line 1792 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
              }
#line 1791 "state_var.m"
            }
#line 1786 "state_var.m"
            break;
#line 1786 "state_var.m"
          case (MR_Integer) 3:
#line 1786 "state_var.m"
#line 1786 "state_var.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)))) {
#line 1786 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1786 "state_var.m"
              case (MR_Integer) 0:
#line 1785 "state_var.m"
                hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));
#line 1786 "state_var.m"
                break;
#line 1786 "state_var.m"
              case (MR_Integer) 1:
#line 1791 "state_var.m"
                {
#line 1792 "state_var.m"
                  {
#line 1792 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
                  }
#line 1791 "state_var.m"
                }
#line 1786 "state_var.m"
                break;
#line 1786 "state_var.m"
            }
#line 1786 "state_var.m"
            break;
#line 1786 "state_var.m"
        }
#line 1783 "state_var.m"
        break;
#line 1783 "state_var.m"
    }
#line 1783 "state_var.m"
    return hlds__make_hlds__state_var__ProgVar_6;
#line 1783 "state_var.m"
  }
#line 1779 "state_var.m"
}

#line 1315 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_24,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__SVar_25,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusBefore_26,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterCond_27,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_28,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusAfterElse_29,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__StatusAfterITE_30,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86,
#line 1315 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87,
#line 1315 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88)
#line 1315 "state_var.m"
{
#line 1329 "state_var.m"
  {
#line 1329 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1361 "state_var.m"
    {
#line 1361 "state_var.m"
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterCond_27, hlds__make_hlds__state_var__StatusBefore_26);
    }
#line 1453 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1405 "state_var.m"
      {
#line 1363 "state_var.m"
        {
#line 1363 "state_var.m"
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterThen_28, hlds__make_hlds__state_var__StatusAfterCond_27);
        }
#line 1405 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1368 "state_var.m"
          {
#line 1365 "state_var.m"
            {
#line 1365 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1368 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1367 "state_var.m"
              {
#line 1367 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1367 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1367 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1367 "state_var.m"
              }
#line 1368 "state_var.m"
            else
#line 1377 "state_var.m"
#line 1377 "state_var.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
#line 1377 "state_var.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1377 "state_var.m"
                case (MR_Integer) 0:
#line 1378 "state_var.m"
                  {
#line 1378 "state_var.m"
                    MR_String hlds__make_hlds__state_var__SVarName_43;
#line 1378 "state_var.m"
                    MR_String hlds__make_hlds__state_var__V_114_114;

#line 1379 "state_var.m"
                    {
#line 1379 "state_var.m"
                      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_43);
                    }
#line 1381 "state_var.m"
                    {
#line 1381 "state_var.m"
                      hlds__make_hlds__state_var__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_43);
                    }
#line 1381 "state_var.m"
                    {
#line 1381 "state_var.m"
                      MR_Word base;
#line 1381 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = base;
#line 1381 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_114_114));
#line 1381 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85));
#line 1381 "state_var.m"
                    }
#line 1386 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
#line 1378 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1378 "state_var.m"
                  }
#line 1377 "state_var.m"
                  break;
#line 1377 "state_var.m"
                case (MR_Integer) 1:
#line 1398 "state_var.m"
                  {
#line 1402 "state_var.m"
                    {
#line 1402 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 2)");
#line 1402 "state_var.m"
                      return;
                    }
#line 1398 "state_var.m"
                  }
#line 1377 "state_var.m"
                  break;
#line 1377 "state_var.m"
                case (MR_Integer) 2:
#line 1388 "state_var.m"
                  {
#line 1394 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1388 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1388 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1388 "state_var.m"
                  }
#line 1377 "state_var.m"
                  break;
#line 1377 "state_var.m"
                case (MR_Integer) 3:
#line 1377 "state_var.m"
#line 1377 "state_var.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
#line 1377 "state_var.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1377 "state_var.m"
                    case (MR_Integer) 0:
#line 1371 "state_var.m"
                      {
#line 1371 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarBefore_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
#line 1371 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarAfterElse_41;
#line 1371 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__CopyGoal_42;

#line 1372 "state_var.m"
                        {
#line 1372 "state_var.m"
                          hlds__make_hlds__state_var__VarAfterElse_41 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                        }
#line 1374 "state_var.m"
                        {
#line 1374 "state_var.m"
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_40, hlds__make_hlds__state_var__VarAfterElse_41, &hlds__make_hlds__state_var__CopyGoal_42);
                        }
#line 1375 "state_var.m"
                        {
#line 1375 "state_var.m"
                          MR_Word base;
#line 1375 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = base;
#line 1375 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_42));
#line 1375 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77));
#line 1375 "state_var.m"
                        }
#line 1376 "state_var.m"
                        *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
#line 1371 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1371 "state_var.m"
                      }
#line 1377 "state_var.m"
                      break;
#line 1377 "state_var.m"
                    case (MR_Integer) 1:
#line 1398 "state_var.m"
                      {
#line 1402 "state_var.m"
                        {
#line 1402 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 2)");
#line 1402 "state_var.m"
                          return;
                        }
#line 1398 "state_var.m"
                      }
#line 1377 "state_var.m"
                      break;
#line 1377 "state_var.m"
                  }
#line 1377 "state_var.m"
                  break;
#line 1377 "state_var.m"
              }
#line 1368 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1368 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1368 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1368 "state_var.m"
          }
#line 1405 "state_var.m"
        else
#line 1443 "state_var.m"
          {
#line 1407 "state_var.m"
            {
#line 1407 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1443 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1416 "state_var.m"
              {
#line 1416 "state_var.m"
#line 1416 "state_var.m"
                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
#line 1416 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1416 "state_var.m"
                  case (MR_Integer) 0:
#line 1417 "state_var.m"
                    {
#line 1417 "state_var.m"
                      MR_String hlds__make_hlds__state_var__V_121_121;
#line 1417 "state_var.m"
                      MR_String hlds__make_hlds__state_var__SVarName_151;

#line 1418 "state_var.m"
                      {
#line 1418 "state_var.m"
                        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_151);
                      }
#line 1420 "state_var.m"
                      {
#line 1420 "state_var.m"
                        hlds__make_hlds__state_var__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_151);
                      }
#line 1420 "state_var.m"
                      {
#line 1420 "state_var.m"
                        MR_Word base;
#line 1420 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
#line 1420 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_121_121));
#line 1420 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
#line 1420 "state_var.m"
                      }
#line 1425 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1417 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1417 "state_var.m"
                    }
#line 1416 "state_var.m"
                    break;
#line 1416 "state_var.m"
                  case (MR_Integer) 1:
#line 1437 "state_var.m"
                    {
#line 1441 "state_var.m"
                      {
#line 1441 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 3)");
#line 1441 "state_var.m"
                        return;
                      }
#line 1437 "state_var.m"
                    }
#line 1416 "state_var.m"
                    break;
#line 1416 "state_var.m"
                  case (MR_Integer) 2:
#line 1427 "state_var.m"
                    {
#line 1433 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1427 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1427 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1427 "state_var.m"
                    }
#line 1416 "state_var.m"
                    break;
#line 1416 "state_var.m"
                  case (MR_Integer) 3:
#line 1416 "state_var.m"
#line 1416 "state_var.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
#line 1416 "state_var.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1416 "state_var.m"
                      case (MR_Integer) 0:
#line 1410 "state_var.m"
                        {
#line 1410 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__VarAfterThen_50;
#line 1410 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__VarBefore_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
#line 1410 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__CopyGoal_150;

#line 1411 "state_var.m"
                          {
#line 1411 "state_var.m"
                            hlds__make_hlds__state_var__VarAfterThen_50 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                          }
#line 1413 "state_var.m"
                          {
#line 1413 "state_var.m"
                            hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_149, hlds__make_hlds__state_var__VarAfterThen_50, &hlds__make_hlds__state_var__CopyGoal_150);
                          }
#line 1414 "state_var.m"
                          {
#line 1414 "state_var.m"
                            MR_Word base;
#line 1414 "state_var.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "state_var.m"
                            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
#line 1414 "state_var.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_150));
#line 1414 "state_var.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
#line 1414 "state_var.m"
                          }
#line 1415 "state_var.m"
                          *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1410 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1410 "state_var.m"
                        }
#line 1416 "state_var.m"
                        break;
#line 1416 "state_var.m"
                      case (MR_Integer) 1:
#line 1437 "state_var.m"
                        {
#line 1441 "state_var.m"
                          {
#line 1441 "state_var.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 3)");
#line 1441 "state_var.m"
                            return;
                          }
#line 1437 "state_var.m"
                        }
#line 1416 "state_var.m"
                        break;
#line 1416 "state_var.m"
                    }
#line 1416 "state_var.m"
                    break;
#line 1416 "state_var.m"
                }
#line 1416 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1416 "state_var.m"
              }
#line 1443 "state_var.m"
            else
#line 1446 "state_var.m"
              {
#line 1446 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_125_125;
#line 1446 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterElse_158;
#line 1446 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterThen_159;

#line 1445 "state_var.m"
                {
#line 1445 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterThen_159 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                }
#line 1447 "state_var.m"
                {
#line 1447 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterElse_158 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
#line 1449 "state_var.m"
                {
#line 1449 "state_var.m"
                  hlds__make_hlds__state_var__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1449 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterElse_158));
#line 1449 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterThen_159));
#line 1449 "state_var.m"
                }
#line 1449 "state_var.m"
                {
#line 1449 "state_var.m"
                  MR_Word base;
#line 1449 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = base;
#line 1449 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_125_125));
#line 1449 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83));
#line 1449 "state_var.m"
                }
#line 1450 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1446 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1446 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1446 "state_var.m"
              }
#line 1443 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1443 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1443 "state_var.m"
          }
#line 1405 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
#line 1405 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1405 "state_var.m"
      }
#line 1453 "state_var.m"
    else
#line 1514 "state_var.m"
      {
#line 1455 "state_var.m"
        {
#line 1455 "state_var.m"
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterThen_28, hlds__make_hlds__state_var__StatusAfterCond_27);
        }
#line 1514 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1504 "state_var.m"
          {
#line 1457 "state_var.m"
            {
#line 1457 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1504 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1471 "state_var.m"
#line 1471 "state_var.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
#line 1471 "state_var.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1471 "state_var.m"
                case (MR_Integer) 0:
#line 1472 "state_var.m"
                  {
#line 1472 "state_var.m"
                    MR_String hlds__make_hlds__state_var__V_130_130;
#line 1472 "state_var.m"
                    MR_String hlds__make_hlds__state_var__SVarName_169;
#line 1472 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__FinalVar_170;
#line 1472 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__VarAfterCond_171;
#line 1472 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__NeckCopyGoal_172;

#line 1473 "state_var.m"
                    {
#line 1473 "state_var.m"
                      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_169);
                    }
#line 1475 "state_var.m"
                    {
#line 1475 "state_var.m"
                      hlds__make_hlds__state_var__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_169);
                    }
#line 1475 "state_var.m"
                    {
#line 1475 "state_var.m"
                      MR_Word base;
#line 1475 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
#line 1475 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_130_130));
#line 1475 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
#line 1475 "state_var.m"
                    }
#line 1480 "state_var.m"
                    {
#line 1480 "state_var.m"
                      hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__SVar_25, (MR_Integer) 1, &hlds__make_hlds__state_var__FinalVar_170, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74);
                    }
#line 1482 "state_var.m"
                    {
#line 1482 "state_var.m"
                      hlds__make_hlds__state_var__VarAfterCond_171 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                    }
#line 1484 "state_var.m"
                    {
#line 1484 "state_var.m"
                      hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_171, hlds__make_hlds__state_var__FinalVar_170, &hlds__make_hlds__state_var__NeckCopyGoal_172);
                    }
#line 1485 "state_var.m"
                    {
#line 1485 "state_var.m"
                      MR_Word base;
#line 1485 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
#line 1485 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NeckCopyGoal_172));
#line 1485 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
#line 1485 "state_var.m"
                    }
#line 1486 "state_var.m"
                    {
#line 1486 "state_var.m"
                      MR_Word base;
#line 1486 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = base;
#line 1486 "state_var.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1486 "state_var.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalVar_170));
#line 1486 "state_var.m"
                    }
#line 1472 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1472 "state_var.m"
                  }
#line 1471 "state_var.m"
                  break;
#line 1471 "state_var.m"
                case (MR_Integer) 1:
#line 1498 "state_var.m"
                  {
#line 1502 "state_var.m"
                    {
#line 1502 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 5)");
#line 1502 "state_var.m"
                      return;
                    }
#line 1498 "state_var.m"
                  }
#line 1471 "state_var.m"
                  break;
#line 1471 "state_var.m"
                case (MR_Integer) 2:
#line 1488 "state_var.m"
                  {
#line 1494 "state_var.m"
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1488 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1488 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
#line 1488 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1488 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1488 "state_var.m"
                  }
#line 1471 "state_var.m"
                  break;
#line 1471 "state_var.m"
                case (MR_Integer) 3:
#line 1471 "state_var.m"
#line 1471 "state_var.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
#line 1471 "state_var.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1471 "state_var.m"
                    case (MR_Integer) 0:
#line 1460 "state_var.m"
                      {
#line 1460 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__FinalVar_57;
#line 1460 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarAfterCond_58;
#line 1460 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__NeckCopyGoal_59;
#line 1460 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__ElseCopyGoal_60;
#line 1460 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__VarBefore_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));

#line 1461 "state_var.m"
                        {
#line 1461 "state_var.m"
                          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__SVar_25, (MR_Integer) 1, &hlds__make_hlds__state_var__FinalVar_57, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74);
                        }
#line 1463 "state_var.m"
                        {
#line 1463 "state_var.m"
                          hlds__make_hlds__state_var__VarAfterCond_58 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                        }
#line 1466 "state_var.m"
                        {
#line 1466 "state_var.m"
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_58, hlds__make_hlds__state_var__FinalVar_57, &hlds__make_hlds__state_var__NeckCopyGoal_59);
                        }
#line 1467 "state_var.m"
                        {
#line 1467 "state_var.m"
                          MR_Word base;
#line 1467 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
#line 1467 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NeckCopyGoal_59));
#line 1467 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
#line 1467 "state_var.m"
                        }
#line 1468 "state_var.m"
                        {
#line 1468 "state_var.m"
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_168, hlds__make_hlds__state_var__FinalVar_57, &hlds__make_hlds__state_var__ElseCopyGoal_60);
                        }
#line 1469 "state_var.m"
                        {
#line 1469 "state_var.m"
                          MR_Word base;
#line 1469 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
#line 1469 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__ElseCopyGoal_60));
#line 1469 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
#line 1469 "state_var.m"
                        }
#line 1470 "state_var.m"
                        {
#line 1470 "state_var.m"
                          MR_Word base;
#line 1470 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "state_var.m"
                          *hlds__make_hlds__state_var__StatusAfterITE_30 = base;
#line 1470 "state_var.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1470 "state_var.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalVar_57));
#line 1470 "state_var.m"
                        }
#line 1460 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1460 "state_var.m"
                      }
#line 1471 "state_var.m"
                      break;
#line 1471 "state_var.m"
                    case (MR_Integer) 1:
#line 1498 "state_var.m"
                      {
#line 1502 "state_var.m"
                        {
#line 1502 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 5)");
#line 1502 "state_var.m"
                          return;
                        }
#line 1498 "state_var.m"
                      }
#line 1471 "state_var.m"
                      break;
#line 1471 "state_var.m"
                  }
#line 1471 "state_var.m"
                  break;
#line 1471 "state_var.m"
              }
#line 1504 "state_var.m"
            else
#line 1507 "state_var.m"
              {
#line 1507 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterElse_175;
#line 1507 "state_var.m"
                MR_Word hlds__make_hlds__state_var__CopyGoal_176;
#line 1507 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterCond_177;

#line 1506 "state_var.m"
                {
#line 1506 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterCond_177 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                }
#line 1508 "state_var.m"
                {
#line 1508 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterElse_175 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
#line 1510 "state_var.m"
                {
#line 1510 "state_var.m"
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_177, hlds__make_hlds__state_var__VarAfterElse_175, &hlds__make_hlds__state_var__CopyGoal_176);
                }
#line 1511 "state_var.m"
                {
#line 1511 "state_var.m"
                  MR_Word base;
#line 1511 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
#line 1511 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_176));
#line 1511 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
#line 1511 "state_var.m"
                }
#line 1512 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1507 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1507 "state_var.m"
              }
#line 1504 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1504 "state_var.m"
          }
#line 1514 "state_var.m"
        else
#line 1553 "state_var.m"
          {
#line 1516 "state_var.m"
            {
#line 1516 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
#line 1553 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1525 "state_var.m"
              {
#line 1525 "state_var.m"
#line 1525 "state_var.m"
                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
#line 1525 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1525 "state_var.m"
                  case (MR_Integer) 0:
#line 1526 "state_var.m"
                    {
#line 1526 "state_var.m"
                      MR_String hlds__make_hlds__state_var__V_144_144;
#line 1526 "state_var.m"
                      MR_String hlds__make_hlds__state_var__SVarName_189;

#line 1527 "state_var.m"
                      {
#line 1527 "state_var.m"
                        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_189);
                      }
#line 1529 "state_var.m"
                      {
#line 1529 "state_var.m"
                        hlds__make_hlds__state_var__V_144_144 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_189);
                      }
#line 1529 "state_var.m"
                      {
#line 1529 "state_var.m"
                        MR_Word base;
#line 1529 "state_var.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
#line 1529 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_144_144));
#line 1529 "state_var.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
#line 1529 "state_var.m"
                      }
#line 1534 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1526 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1526 "state_var.m"
                    }
#line 1525 "state_var.m"
                    break;
#line 1525 "state_var.m"
                  case (MR_Integer) 1:
#line 1546 "state_var.m"
                    {
#line 1551 "state_var.m"
                      {
#line 1551 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 7)");
#line 1551 "state_var.m"
                        return;
                      }
#line 1546 "state_var.m"
                    }
#line 1525 "state_var.m"
                    break;
#line 1525 "state_var.m"
                  case (MR_Integer) 2:
#line 1536 "state_var.m"
                    {
#line 1542 "state_var.m"
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
#line 1536 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1536 "state_var.m"
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1536 "state_var.m"
                    }
#line 1525 "state_var.m"
                    break;
#line 1525 "state_var.m"
                  case (MR_Integer) 3:
#line 1525 "state_var.m"
#line 1525 "state_var.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
#line 1525 "state_var.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1525 "state_var.m"
                      case (MR_Integer) 0:
#line 1519 "state_var.m"
                        {
#line 1519 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__VarBefore_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
#line 1519 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__CopyGoal_187;
#line 1519 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__VarAfterThen_188;

#line 1520 "state_var.m"
                          {
#line 1520 "state_var.m"
                            hlds__make_hlds__state_var__VarAfterThen_188 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                          }
#line 1522 "state_var.m"
                          {
#line 1522 "state_var.m"
                            hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_186, hlds__make_hlds__state_var__VarAfterThen_188, &hlds__make_hlds__state_var__CopyGoal_187);
                          }
#line 1523 "state_var.m"
                          {
#line 1523 "state_var.m"
                            MR_Word base;
#line 1523 "state_var.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1523 "state_var.m"
                            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
#line 1523 "state_var.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_187));
#line 1523 "state_var.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
#line 1523 "state_var.m"
                          }
#line 1524 "state_var.m"
                          *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1519 "state_var.m"
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1519 "state_var.m"
                        }
#line 1525 "state_var.m"
                        break;
#line 1525 "state_var.m"
                      case (MR_Integer) 1:
#line 1546 "state_var.m"
                        {
#line 1551 "state_var.m"
                          {
#line 1551 "state_var.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 7)");
#line 1551 "state_var.m"
                            return;
                          }
#line 1546 "state_var.m"
                        }
#line 1525 "state_var.m"
                        break;
#line 1525 "state_var.m"
                    }
#line 1525 "state_var.m"
                    break;
#line 1525 "state_var.m"
                }
#line 1525 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
#line 1525 "state_var.m"
              }
#line 1553 "state_var.m"
            else
#line 1556 "state_var.m"
              {
#line 1556 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_148_148;
#line 1556 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterElse_198;
#line 1556 "state_var.m"
                MR_Word hlds__make_hlds__state_var__VarAfterThen_199;

#line 1555 "state_var.m"
                {
#line 1555 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterThen_199 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                }
#line 1557 "state_var.m"
                {
#line 1557 "state_var.m"
                  hlds__make_hlds__state_var__VarAfterElse_198 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
#line 1559 "state_var.m"
                {
#line 1559 "state_var.m"
                  hlds__make_hlds__state_var__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterElse_198));
#line 1559 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_148_148, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterThen_199));
#line 1559 "state_var.m"
                }
#line 1559 "state_var.m"
                {
#line 1559 "state_var.m"
                  MR_Word base;
#line 1559 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = base;
#line 1559 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_148_148));
#line 1559 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83));
#line 1559 "state_var.m"
                }
#line 1560 "state_var.m"
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
#line 1556 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
#line 1556 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
#line 1556 "state_var.m"
              }
#line 1553 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
#line 1553 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
#line 1553 "state_var.m"
          }
#line 1514 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
#line 1514 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
#line 1514 "state_var.m"
      }
#line 1329 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81;
#line 1329 "state_var.m"
  }
#line 1315 "state_var.m"
}

#line 1282 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
#line 1282 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1282 "state_var.m"
{
#line 1282 "state_var.m"
  {
#line 1282 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1282 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1282 "state_var.m"
    {
#line 1282 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1282__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1282 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1282 "state_var.m"
  }
#line 1282 "state_var.m"
}

#line 1255 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__LocKind_1,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__QuantStateVars_2,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_4,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_5,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_6,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_7,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23,
#line 1255 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24,
#line 1255 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25)
#line 1255 "state_var.m"
{
#line 1268 "state_var.m"
  while (MR_TRUE)
#line 1268 "state_var.m"
    {
#line 1268 "state_var.m"
      /* tailcall optimized into a loop */
#line 1268 "state_var.m"
      {
#line 1268 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 1268 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1268 "state_var.m"
          {
#line 1270 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24;
#line 1270 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22;
#line 1270 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20;
#line 1270 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18;
#line 1269 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16;
#line 1269 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14;
#line 1269 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12;
#line 1269 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10;
#line 1268 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8;
#line 1268 "state_var.m"
          }
#line 1268 "state_var.m"
        else
#line 1275 "state_var.m"
          {
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_130_130 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_131_131 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVars_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusBefore_76;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterCond_77;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterThen_78;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterElse_79;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfterITE_80;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111;
#line 1275 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120;
#line 1276 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_StatusBefore_76;
#line 1277 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv1_StatusAfterCond_77;
#line 1278 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv2_StatusAfterThen_78;
#line 1279 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv3_StatusAfterElse_79;

#line 1276 "state_var.m"
            {
#line 1276 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapBefore_4, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv0_StatusBefore_76);
            }
#line 1276 "state_var.m"
            hlds__make_hlds__state_var__StatusBefore_76 = ((MR_Word) hlds__make_hlds__state_var__conv0_StatusBefore_76);
#line 1277 "state_var.m"
            {
#line 1277 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterCond_5, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv1_StatusAfterCond_77);
            }
#line 1277 "state_var.m"
            hlds__make_hlds__state_var__StatusAfterCond_77 = ((MR_Word) hlds__make_hlds__state_var__conv1_StatusAfterCond_77);
#line 1278 "state_var.m"
            {
#line 1278 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterThen_6, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv2_StatusAfterThen_78);
            }
#line 1278 "state_var.m"
            hlds__make_hlds__state_var__StatusAfterThen_78 = ((MR_Word) hlds__make_hlds__state_var__conv2_StatusAfterThen_78);
#line 1279 "state_var.m"
            {
#line 1279 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterElse_7, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv3_StatusAfterElse_79);
            }
#line 1279 "state_var.m"
            hlds__make_hlds__state_var__StatusAfterElse_79 = ((MR_Word) hlds__make_hlds__state_var__conv3_StatusAfterElse_79);
#line 1281 "state_var.m"
            {
#line 1281 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), hlds__make_hlds__state_var__QuantStateVars_2);
            }
#line 1294 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1283 "state_var.m"
              {
#line 1283 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_99_99;

#line 1282 "state_var.m"
                {
#line 1282 "state_var.m"
                  hlds__make_hlds__state_var__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1]));
#line 1282 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1));
#line 1282 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1282 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 3) = ((MR_Box) (hlds__make_hlds__state_var__StatusBefore_76));
#line 1282 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_99_99, 4) = ((MR_Box) (hlds__make_hlds__state_var__StatusAfterThen_78));
#line 1282 "state_var.m"
                }
#line 1282 "state_var.m"
                {
#line 1282 "state_var.m"
                  mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_99_99, (MR_String) "hlds.make_hlds.state_var", (MR_String) "state var shadowed in if-then-else is nevertheless updated");
                }
#line 1290 "state_var.m"
                {
#line 1290 "state_var.m"
                  hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(hlds__make_hlds__state_var__LocKind_1, hlds__make_hlds__state_var__SVar_61, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterElse_79, &hlds__make_hlds__state_var__StatusAfterITE_80, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12, &hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105, hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106, hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107, hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108, hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109, hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110, hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111);
                }
#line 1283 "state_var.m"
              }
#line 1294 "state_var.m"
            else
#line 1303 "state_var.m"
              {
#line 1303 "state_var.m"
                hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(hlds__make_hlds__state_var__LocKind_1, hlds__make_hlds__state_var__SVar_61, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterCond_77, hlds__make_hlds__state_var__StatusAfterThen_78, hlds__make_hlds__state_var__StatusAfterElse_79, &hlds__make_hlds__state_var__StatusAfterITE_80, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12, &hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105, hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106, hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107, hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108, hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109, hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110, hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111);
              }
#line 1308 "state_var.m"
            {
#line 1308 "state_var.m"
              mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfterITE_80)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120);
            }
#line 1309 "state_var.m"
            /* direct tailcall eliminated */
#line 1309 "state_var.m"
            {
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3 = hlds__make_hlds__state_var__SVars_62;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0__tmp_copy_8 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0__tmp_copy_10 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0__tmp_copy_12 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0__tmp_copy_14 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0__tmp_copy_16 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0__tmp_copy_18 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0__tmp_copy_20 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0__tmp_copy_22 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110;
#line 1309 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0__tmp_copy_24 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111;

#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0__tmp_copy_24;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0__tmp_copy_22;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0__tmp_copy_20;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0__tmp_copy_18;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0__tmp_copy_16;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0__tmp_copy_14;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0__tmp_copy_12;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0__tmp_copy_10;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0__tmp_copy_8;
#line 1309 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__3_3 = hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3;
#line 1309 "state_var.m"
            }
#line 1309 "state_var.m"
            continue;
#line 1275 "state_var.m"
          }
#line 1268 "state_var.m"
      }
#line 1268 "state_var.m"
      break;
#line 1268 "state_var.m"
    }
#line 1255 "state_var.m"
}

#line 1142 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
#line 1142 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FromVar_4,
#line 1142 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ToVar_5,
#line 1142 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__CopyGoal_6)
#line 1142 "state_var.m"
{
#line 1144 "state_var.m"
  {
#line 1144 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1144 "state_var.m"
    MR_Word hlds__make_hlds__state_var__CopyGoal0_7;
#line 1144 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_8_8;
#line 1144 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_9_9;

#line 1163 "state_var.m"
    {
#line 1163 "state_var.m"
      hlds__make_hlds__state_var__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__state_var__FromVar_4));
#line 1163 "state_var.m"
    }
#line 1164 "state_var.m"
    {
#line 1164 "state_var.m"
      hlds__make_hlds__state_var__V_9_9 = mercury__term__context_init_0_f_0();
    }
#line 1163 "state_var.m"
    {
#line 1163 "state_var.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__state_var__ToVar_5, hlds__make_hlds__state_var__V_8_8, hlds__make_hlds__state_var__V_9_9, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_4[4]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoal0_7);
    }
#line 1165 "state_var.m"
    {
#line 1165 "state_var.m"
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, hlds__make_hlds__state_var__CopyGoal0_7, hlds__make_hlds__state_var__CopyGoal_6);
#line 1165 "state_var.m"
      return;
    }
#line 1144 "state_var.m"
  }
#line 1142 "state_var.m"
}

#line 1063 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
#line 1063 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1063 "state_var.m"
{
#line 1063 "state_var.m"
  {
#line 1063 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1063 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1063 "state_var.m"
    {
#line 1063 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1063__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1063 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1063 "state_var.m"
  }
#line 1063 "state_var.m"
}

#line 1049 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_2,
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_3,
#line 1049 "state_var.m"
  MR_Word hlds__make_hlds__state_var__VarSet_4,
#line 1049 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__5_5,
#line 1049 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__6_6,
#line 1049 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__7_7)
#line 1049 "state_var.m"
{
#line 1054 "state_var.m"
  {
#line 1054 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1054 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "state_var.m"
      {
#line 1054 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "state_var.m"
      }
#line 1054 "state_var.m"
    else
#line 1056 "state_var.m"
      {
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_85_85;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_86_86;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Change_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Changes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__CopyGoalsTail_20;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__RenamesTail_21;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar_22;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__BeforeStatus_24;
#line 1056 "state_var.m"
        MR_Word hlds__make_hlds__state_var__AfterArmStatus_25;
#line 1060 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv0_BeforeStatus_24;
#line 1061 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv1_AfterArmStatus_25;

#line 1057 "state_var.m"
        {
#line 1057 "state_var.m"
          hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(hlds__make_hlds__state_var__Changes_12, hlds__make_hlds__state_var__StatusMapBefore_2, hlds__make_hlds__state_var__StatusMapAfterArm_3, hlds__make_hlds__state_var__VarSet_4, &hlds__make_hlds__state_var__UninitVarNamesTail_19, &hlds__make_hlds__state_var__CopyGoalsTail_20, &hlds__make_hlds__state_var__RenamesTail_21);
        }
#line 1059 "state_var.m"
        hlds__make_hlds__state_var__StateVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Change_11, (MR_Integer) 0)));
#line 1059 "state_var.m"
        hlds__make_hlds__state_var__AfterAllArmsStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Change_11, (MR_Integer) 1)));
#line 7850 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeInfo_85_85 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 7852 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeCtorInfo_86_86 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 1060 "state_var.m"
        {
#line 1060 "state_var.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_85_85, hlds__make_hlds__state_var__TypeCtorInfo_86_86, hlds__make_hlds__state_var__StatusMapBefore_2, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv0_BeforeStatus_24);
        }
#line 1060 "state_var.m"
        hlds__make_hlds__state_var__BeforeStatus_24 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeStatus_24);
#line 1061 "state_var.m"
        {
#line 1061 "state_var.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_85_85, hlds__make_hlds__state_var__TypeCtorInfo_86_86, hlds__make_hlds__state_var__StatusMapAfterArm_3, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv1_AfterArmStatus_25);
        }
#line 1061 "state_var.m"
        hlds__make_hlds__state_var__AfterArmStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv1_AfterArmStatus_25);
#line 1062 "state_var.m"
        {
#line 1062 "state_var.m"
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__AfterArmStatus_25, hlds__make_hlds__state_var__BeforeStatus_24);
        }
#line 1106 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1064 "state_var.m"
          {
#line 1064 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_55_55;

#line 1063 "state_var.m"
            {
#line 1063 "state_var.m"
              hlds__make_hlds__state_var__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1]));
#line 1063 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1));
#line 1063 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1063 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__state_var__AfterAllArmsStatus_23));
#line 1063 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 4) = ((MR_Box) (hlds__make_hlds__state_var__AfterArmStatus_25));
#line 1063 "state_var.m"
            }
#line 1063 "state_var.m"
            {
#line 1063 "state_var.m"
              mercury__require__expect_not_3_p_0(hlds__make_hlds__state_var__V_55_55, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = AfterAllArmsStatus");
            }
#line 1089 "state_var.m"
#line 1089 "state_var.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_24)) {
#line 1089 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1089 "state_var.m"
              case (MR_Integer) 0:
#line 1090 "state_var.m"
                {
#line 1090 "state_var.m"
                  MR_String hlds__make_hlds__state_var__Name_37;
#line 1090 "state_var.m"
                  MR_String hlds__make_hlds__state_var__UninitVarName_38;

#line 1091 "state_var.m"
                  {
#line 1091 "state_var.m"
                    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_4, hlds__make_hlds__state_var__StateVar_22, &hlds__make_hlds__state_var__Name_37);
                  }
#line 1092 "state_var.m"
                  {
#line 1092 "state_var.m"
                    hlds__make_hlds__state_var__UninitVarName_38 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_37);
                  }
#line 1093 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__6_6 = hlds__make_hlds__state_var__CopyGoalsTail_20;
#line 1094 "state_var.m"
                  {
#line 1094 "state_var.m"
                    MR_Word base;
#line 1094 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "state_var.m"
                    *hlds__make_hlds__state_var__HeadVar__5_5 = base;
#line 1094 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__UninitVarName_38));
#line 1094 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__UninitVarNamesTail_19));
#line 1094 "state_var.m"
                  }
#line 1095 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1090 "state_var.m"
                }
#line 1089 "state_var.m"
                break;
#line 1089 "state_var.m"
              case (MR_Integer) 1:
#line 1099 "state_var.m"
                {
#line 1104 "state_var.m"
                  {
#line 1104 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
#line 1104 "state_var.m"
                    return;
                  }
#line 1099 "state_var.m"
                }
#line 1089 "state_var.m"
                break;
#line 1089 "state_var.m"
              case (MR_Integer) 2:
#line 1073 "state_var.m"
                {
#line 1073 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__BeforeVar_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 0)));
#line 1072 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 2)));

#line 1080 "state_var.m"
#line 1080 "state_var.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) {
#line 1080 "state_var.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "state_var.m"
                    case (MR_Integer) 0:
#line 1085 "state_var.m"
                      {
#line 1086 "state_var.m"
                        {
#line 1086 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1086 "state_var.m"
                          return;
                        }
#line 1085 "state_var.m"
                      }
#line 1080 "state_var.m"
                      break;
#line 1080 "state_var.m"
                    case (MR_Integer) 1:
#line 1080 "state_var.m"
                    case (MR_Integer) 2:
#line 1085 "state_var.m"
                      {
#line 1086 "state_var.m"
                        {
#line 1086 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1086 "state_var.m"
                          return;
                        }
#line 1085 "state_var.m"
                      }
#line 1080 "state_var.m"
                      break;
#line 1080 "state_var.m"
                    case (MR_Integer) 3:
#line 1080 "state_var.m"
#line 1080 "state_var.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) {
#line 1080 "state_var.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "state_var.m"
                        case (MR_Integer) 0:
#line 1075 "state_var.m"
                          {
#line 1075 "state_var.m"
                            MR_Word hlds__make_hlds__state_var__AfterAllVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));
#line 1075 "state_var.m"
                            MR_Word hlds__make_hlds__state_var__CopyGoal_90;

#line 1076 "state_var.m"
                            {
#line 1076 "state_var.m"
                              hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__BeforeVar_99, hlds__make_hlds__state_var__AfterAllVar_89, &hlds__make_hlds__state_var__CopyGoal_90);
                            }
#line 1077 "state_var.m"
                            {
#line 1077 "state_var.m"
                              MR_Word base;
#line 1077 "state_var.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "state_var.m"
                              *hlds__make_hlds__state_var__HeadVar__6_6 = base;
#line 1077 "state_var.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_90));
#line 1077 "state_var.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoalsTail_20));
#line 1077 "state_var.m"
                            }
#line 1078 "state_var.m"
                            *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1079 "state_var.m"
                            *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1075 "state_var.m"
                          }
#line 1080 "state_var.m"
                          break;
#line 1080 "state_var.m"
                        case (MR_Integer) 1:
#line 1085 "state_var.m"
                          {
#line 1086 "state_var.m"
                            {
#line 1086 "state_var.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1086 "state_var.m"
                              return;
                            }
#line 1085 "state_var.m"
                          }
#line 1080 "state_var.m"
                          break;
#line 1080 "state_var.m"
                      }
#line 1080 "state_var.m"
                      break;
#line 1080 "state_var.m"
                  }
#line 1073 "state_var.m"
                }
#line 1089 "state_var.m"
                break;
#line 1089 "state_var.m"
              case (MR_Integer) 3:
#line 1089 "state_var.m"
#line 1089 "state_var.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 0)))) {
#line 1089 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1089 "state_var.m"
                  case (MR_Integer) 0:
#line 1073 "state_var.m"
                    {
#line 1073 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__BeforeVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 1)));

#line 1080 "state_var.m"
#line 1080 "state_var.m"
                      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) {
#line 1080 "state_var.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "state_var.m"
                        case (MR_Integer) 0:
#line 1085 "state_var.m"
                          {
#line 1086 "state_var.m"
                            {
#line 1086 "state_var.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1086 "state_var.m"
                              return;
                            }
#line 1085 "state_var.m"
                          }
#line 1080 "state_var.m"
                          break;
#line 1080 "state_var.m"
                        case (MR_Integer) 1:
#line 1080 "state_var.m"
                        case (MR_Integer) 2:
#line 1085 "state_var.m"
                          {
#line 1086 "state_var.m"
                            {
#line 1086 "state_var.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1086 "state_var.m"
                              return;
                            }
#line 1085 "state_var.m"
                          }
#line 1080 "state_var.m"
                          break;
#line 1080 "state_var.m"
                        case (MR_Integer) 3:
#line 1080 "state_var.m"
#line 1080 "state_var.m"
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) {
#line 1080 "state_var.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "state_var.m"
                            case (MR_Integer) 0:
#line 1075 "state_var.m"
                              {
#line 1075 "state_var.m"
                                MR_Word hlds__make_hlds__state_var__AfterAllVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));
#line 1075 "state_var.m"
                                MR_Word hlds__make_hlds__state_var__CopyGoal_30;

#line 1076 "state_var.m"
                                {
#line 1076 "state_var.m"
                                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__BeforeVar_26, hlds__make_hlds__state_var__AfterAllVar_29, &hlds__make_hlds__state_var__CopyGoal_30);
                                }
#line 1077 "state_var.m"
                                {
#line 1077 "state_var.m"
                                  MR_Word base;
#line 1077 "state_var.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "state_var.m"
                                  *hlds__make_hlds__state_var__HeadVar__6_6 = base;
#line 1077 "state_var.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_30));
#line 1077 "state_var.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoalsTail_20));
#line 1077 "state_var.m"
                                }
#line 1078 "state_var.m"
                                *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1079 "state_var.m"
                                *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1075 "state_var.m"
                              }
#line 1080 "state_var.m"
                              break;
#line 1080 "state_var.m"
                            case (MR_Integer) 1:
#line 1085 "state_var.m"
                              {
#line 1086 "state_var.m"
                                {
#line 1086 "state_var.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
#line 1086 "state_var.m"
                                  return;
                                }
#line 1085 "state_var.m"
                              }
#line 1080 "state_var.m"
                              break;
#line 1080 "state_var.m"
                          }
#line 1080 "state_var.m"
                          break;
#line 1080 "state_var.m"
                      }
#line 1073 "state_var.m"
                    }
#line 1089 "state_var.m"
                    break;
#line 1089 "state_var.m"
                  case (MR_Integer) 1:
#line 1099 "state_var.m"
                    {
#line 1104 "state_var.m"
                      {
#line 1104 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
#line 1104 "state_var.m"
                        return;
                      }
#line 1099 "state_var.m"
                    }
#line 1089 "state_var.m"
                    break;
#line 1089 "state_var.m"
                }
#line 1089 "state_var.m"
                break;
#line 1089 "state_var.m"
            }
#line 1064 "state_var.m"
          }
#line 1106 "state_var.m"
        else
#line 1127 "state_var.m"
#line 1127 "state_var.m"
          switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterArmStatus_25)) {
#line 1127 "state_var.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1127 "state_var.m"
            case (MR_Integer) 0:
#line 1134 "state_var.m"
              {
#line 1135 "state_var.m"
                {
#line 1135 "state_var.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
#line 1135 "state_var.m"
                  return;
                }
#line 1134 "state_var.m"
              }
#line 1127 "state_var.m"
              break;
#line 1127 "state_var.m"
            case (MR_Integer) 1:
#line 1137 "state_var.m"
              {
#line 1138 "state_var.m"
                {
#line 1138 "state_var.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
#line 1138 "state_var.m"
                  return;
                }
#line 1137 "state_var.m"
              }
#line 1127 "state_var.m"
              break;
#line 1127 "state_var.m"
            case (MR_Integer) 2:
#line 1128 "state_var.m"
              {
#line 1129 "state_var.m"
                {
#line 1129 "state_var.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_ro");
#line 1129 "state_var.m"
                  return;
                }
#line 1128 "state_var.m"
              }
#line 1127 "state_var.m"
              break;
#line 1127 "state_var.m"
            case (MR_Integer) 3:
#line 1127 "state_var.m"
#line 1127 "state_var.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterArmStatus_25, (MR_Integer) 0)))) {
#line 1127 "state_var.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1127 "state_var.m"
                case (MR_Integer) 0:
#line 1108 "state_var.m"
                  {
#line 1108 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__AfterArmVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterArmStatus_25, (MR_Integer) 1)));

#line 1118 "state_var.m"
#line 1118 "state_var.m"
                    switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) {
#line 1118 "state_var.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "state_var.m"
                      case (MR_Integer) 0:
#line 1123 "state_var.m"
                        {
#line 1124 "state_var.m"
                          {
#line 1124 "state_var.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
#line 1124 "state_var.m"
                            return;
                          }
#line 1123 "state_var.m"
                        }
#line 1118 "state_var.m"
                        break;
#line 1118 "state_var.m"
                      case (MR_Integer) 1:
#line 1118 "state_var.m"
                      case (MR_Integer) 2:
#line 1123 "state_var.m"
                        {
#line 1124 "state_var.m"
                          {
#line 1124 "state_var.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
#line 1124 "state_var.m"
                            return;
                          }
#line 1123 "state_var.m"
                        }
#line 1118 "state_var.m"
                        break;
#line 1118 "state_var.m"
                      case (MR_Integer) 3:
#line 1118 "state_var.m"
#line 1118 "state_var.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) {
#line 1118 "state_var.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "state_var.m"
                          case (MR_Integer) 0:
#line 1110 "state_var.m"
                            {
#line 1110 "state_var.m"
                              MR_Word hlds__make_hlds__state_var__AfterAllVar_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));

#line 1111 "state_var.m"
                              *hlds__make_hlds__state_var__HeadVar__6_6 = hlds__make_hlds__state_var__CopyGoalsTail_20;
#line 1112 "state_var.m"
                              *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
#line 1113 "state_var.m"
                              {
#line 1113 "state_var.m"
                                hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__AfterArmVar_42)), ((MR_Box) (hlds__make_hlds__state_var__AfterAllVar_81)));
                              }
#line 1115 "state_var.m"
                              if (hlds__make_hlds__state_var__succeeded)
#line 1114 "state_var.m"
                                *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
#line 1115 "state_var.m"
                              else
#line 1116 "state_var.m"
                                {
#line 1116 "state_var.m"
                                  MR_Word hlds__make_hlds__state_var__V_80_80;

#line 1116 "state_var.m"
                                  {
#line 1116 "state_var.m"
                                    hlds__make_hlds__state_var__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "state_var.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__state_var__AfterArmVar_42));
#line 1116 "state_var.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__state_var__AfterAllVar_81));
#line 1116 "state_var.m"
                                  }
#line 1116 "state_var.m"
                                  {
#line 1116 "state_var.m"
                                    MR_Word base;
#line 1116 "state_var.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "state_var.m"
                                    *hlds__make_hlds__state_var__HeadVar__7_7 = base;
#line 1116 "state_var.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_80_80));
#line 1116 "state_var.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__RenamesTail_21));
#line 1116 "state_var.m"
                                  }
#line 1116 "state_var.m"
                                }
#line 1110 "state_var.m"
                            }
#line 1118 "state_var.m"
                            break;
#line 1118 "state_var.m"
                          case (MR_Integer) 1:
#line 1123 "state_var.m"
                            {
#line 1124 "state_var.m"
                              {
#line 1124 "state_var.m"
                                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
#line 1124 "state_var.m"
                                return;
                              }
#line 1123 "state_var.m"
                            }
#line 1118 "state_var.m"
                            break;
#line 1118 "state_var.m"
                        }
#line 1118 "state_var.m"
                        break;
#line 1118 "state_var.m"
                    }
#line 1108 "state_var.m"
                  }
#line 1127 "state_var.m"
                  break;
#line 1127 "state_var.m"
                case (MR_Integer) 1:
#line 1131 "state_var.m"
                  {
#line 1132 "state_var.m"
                    {
#line 1132 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_updated");
#line 1132 "state_var.m"
                      return;
                    }
#line 1131 "state_var.m"
                  }
#line 1127 "state_var.m"
                  break;
#line 1127 "state_var.m"
              }
#line 1127 "state_var.m"
              break;
#line 1127 "state_var.m"
          }
#line 1056 "state_var.m"
      }
#line 1054 "state_var.m"
  }
#line 1049 "state_var.m"
}

#line 1002 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__4_4,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10,
#line 1002 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
#line 1002 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12)
#line 1002 "state_var.m"
{
#line 1010 "state_var.m"
  while (MR_TRUE)
#line 1010 "state_var.m"
    {
#line 1010 "state_var.m"
      /* tailcall optimized into a loop */
#line 1010 "state_var.m"
      {
#line 1010 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 1010 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "state_var.m"
          {
#line 1011 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11;
#line 1011 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9;
#line 1011 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7;
#line 1011 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5;
#line 1010 "state_var.m"
          }
#line 1010 "state_var.m"
        else
#line 1014 "state_var.m"
          {
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmState_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmStates_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Arm0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_28, (MR_Integer) 0)));
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StateAfterArm_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_28, (MR_Integer) 1)));
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_39 = (MR_Word) hlds__make_hlds__state_var__StateAfterArm_38;
#line 1014 "state_var.m"
            MR_Integer hlds__make_hlds__state_var__ArmIdNum_40;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmId_41;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__UninitVarNames_42;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__CopyGoals_43;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmRenames_44;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmExpr0_45;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmInfo0_46;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmExpr_47;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmInfo_54;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Arm_55;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70;
#line 1014 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71;

#line 1017 "state_var.m"
            {
#line 1017 "state_var.m"
              mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ArmIdNum_40, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64);
            }
#line 1018 "state_var.m"
            hlds__make_hlds__state_var__ArmId_41 = (MR_Word) hlds__make_hlds__state_var__ArmIdNum_40;
#line 1019 "state_var.m"
            {
#line 1019 "state_var.m"
              hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(hlds__make_hlds__state_var__HeadVar__3_3, hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__StatusMapAfterArm_39, hlds__make_hlds__state_var__HeadVar__4_4, &hlds__make_hlds__state_var__UninitVarNames_42, &hlds__make_hlds__state_var__CopyGoals_43, &hlds__make_hlds__state_var__ArmRenames_44);
            }
#line 1021 "state_var.m"
            {
#line 1021 "state_var.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__ArmId_41)), ((MR_Box) (hlds__make_hlds__state_var__ArmRenames_44)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9, &hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65);
            }
#line 1022 "state_var.m"
            hlds__make_hlds__state_var__ArmExpr0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm0_37, (MR_Integer) 0)));
#line 1022 "state_var.m"
            hlds__make_hlds__state_var__ArmInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm0_37, (MR_Integer) 1)));
#line 1026 "state_var.m"
            if ((hlds__make_hlds__state_var__CopyGoals_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1024 "state_var.m"
              {
#line 1025 "state_var.m"
                hlds__make_hlds__state_var__ArmExpr_47 = hlds__make_hlds__state_var__ArmExpr0_45;
#line 1024 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64;
#line 1024 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65;
#line 1024 "state_var.m"
              }
#line 1026 "state_var.m"
            else
#line 1027 "state_var.m"
              {
#line 1027 "state_var.m"
                MR_Word hlds__make_hlds__state_var__ArmGoals0_50;
#line 1027 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_69_69;

#line 1028 "state_var.m"
                {
#line 1028 "state_var.m"
                  hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(hlds__make_hlds__state_var__Arm0_37, &hlds__make_hlds__state_var__ArmGoals0_50, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64, &hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65, &hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67);
                }
#line 1030 "state_var.m"
                {
#line 1030 "state_var.m"
                  hlds__make_hlds__state_var__V_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__ArmGoals0_50, hlds__make_hlds__state_var__CopyGoals_43);
                }
#line 1030 "state_var.m"
                {
#line 1030 "state_var.m"
                  hlds__make_hlds__state_var__ArmExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1030 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1030 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_69_69));
#line 1030 "state_var.m"
                }
#line 1027 "state_var.m"
              }
#line 1034 "state_var.m"
            if ((hlds__make_hlds__state_var__UninitVarNames_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1033 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11;
#line 1034 "state_var.m"
            else
#line 1035 "state_var.m"
              {
#line 1035 "state_var.m"
                MR_Word hlds__make_hlds__state_var__ArmContext_53;

#line 1039 "state_var.m"
                {
#line 1039 "state_var.m"
                  hlds__make_hlds__state_var__ArmContext_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__state_var__ArmInfo0_46);
                }
#line 1040 "state_var.m"
                {
#line 1040 "state_var.m"
                  hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(hlds__make_hlds__state_var__ArmContext_53, hlds__make_hlds__state_var__UninitVarNames_42, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70);
                }
#line 1035 "state_var.m"
              }
#line 1042 "state_var.m"
            {
#line 1042 "state_var.m"
              hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__ArmId_41, hlds__make_hlds__state_var__ArmInfo0_46, &hlds__make_hlds__state_var__ArmInfo_54);
            }
#line 1043 "state_var.m"
            {
#line 1043 "state_var.m"
              hlds__make_hlds__state_var__Arm_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm_55, 0) = ((MR_Box) (hlds__make_hlds__state_var__ArmExpr_47));
#line 1043 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__ArmInfo_54));
#line 1043 "state_var.m"
            }
#line 1044 "state_var.m"
            {
#line 1044 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71, 0) = ((MR_Box) (hlds__make_hlds__state_var__Arm_55));
#line 1044 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5));
#line 1044 "state_var.m"
            }
#line 1045 "state_var.m"
            /* direct tailcall eliminated */
#line 1045 "state_var.m"
            {
#line 1045 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__ArmStates_29;
#line 1045 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0__tmp_copy_5 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71;
#line 1045 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0__tmp_copy_7 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66;
#line 1045 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0__tmp_copy_9 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67;
#line 1045 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70;

#line 1045 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_11;
#line 1045 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0__tmp_copy_9;
#line 1045 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0__tmp_copy_7;
#line 1045 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0__tmp_copy_5;
#line 1045 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 1045 "state_var.m"
            }
#line 1045 "state_var.m"
            continue;
#line 1014 "state_var.m"
          }
#line 1010 "state_var.m"
      }
#line 1010 "state_var.m"
      break;
#line 1010 "state_var.m"
    }
#line 1002 "state_var.m"
}

#line 976 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_2,
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 976 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 976 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 976 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6)
#line 976 "state_var.m"
{
#line 981 "state_var.m"
  while (MR_TRUE)
#line 981 "state_var.m"
    {
#line 981 "state_var.m"
      /* tailcall optimized into a loop */
#line 981 "state_var.m"
      {
#line 981 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 981 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "state_var.m"
          {
#line 982 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 982 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 981 "state_var.m"
          }
#line 981 "state_var.m"
        else
#line 984 "state_var.m"
          {
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_31_31 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_32_32 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Before_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Befores_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Before_14, (MR_Integer) 0)));
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusBefore_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Before_14, (MR_Integer) 1)));
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusAfter_21;
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27;
#line 984 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28;
#line 986 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_StatusAfter_21;

#line 986 "state_var.m"
            {
#line 986 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__StatusMapAfterArm_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), &hlds__make_hlds__state_var__conv0_StatusAfter_21);
            }
#line 986 "state_var.m"
            hlds__make_hlds__state_var__StatusAfter_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_StatusAfter_21);
#line 987 "state_var.m"
            {
#line 987 "state_var.m"
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusBefore_20, hlds__make_hlds__state_var__StatusAfter_21);
            }
#line 989 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 988 "state_var.m"
              {
#line 988 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 988 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 988 "state_var.m"
              }
#line 989 "state_var.m"
            else
#line 992 "state_var.m"
              {
#line 990 "state_var.m"
                MR_Word hlds__make_hlds__state_var___AlreadyUpdated_22;
#line 990 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv1__AlreadyUpdated_22;

#line 990 "state_var.m"
                {
#line 990 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), &hlds__make_hlds__state_var__conv1__AlreadyUpdated_22);
                }
#line 990 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 990 "state_var.m"
                  {
#line 990 "state_var.m"
                    hlds__make_hlds__state_var___AlreadyUpdated_22 = ((MR_Word) hlds__make_hlds__state_var__conv1__AlreadyUpdated_22);
#line 990 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 990 "state_var.m"
                  }
#line 992 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 991 "state_var.m"
                  {
#line 991 "state_var.m"
                    hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 991 "state_var.m"
                    hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 991 "state_var.m"
                  }
#line 992 "state_var.m"
                else
#line 993 "state_var.m"
                  {
#line 993 "state_var.m"
                    {
#line 993 "state_var.m"
                      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfter_21)), hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27);
                    }
#line 994 "state_var.m"
                    {
#line 994 "state_var.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfter_21)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28);
                    }
#line 993 "state_var.m"
                  }
#line 992 "state_var.m"
              }
#line 997 "state_var.m"
            /* direct tailcall eliminated */
#line 997 "state_var.m"
            {
#line 997 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__Befores_15;
#line 997 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27;
#line 997 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28;

#line 997 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5;
#line 997 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3;
#line 997 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 997 "state_var.m"
            }
#line 997 "state_var.m"
            continue;
#line 984 "state_var.m"
          }
#line 981 "state_var.m"
      }
#line 981 "state_var.m"
      break;
#line 981 "state_var.m"
    }
#line 976 "state_var.m"
}

#line 960 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
#line 960 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
#line 960 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
#line 960 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6)
#line 960 "state_var.m"
{
#line 965 "state_var.m"
  while (MR_TRUE)
#line 965 "state_var.m"
    {
#line 965 "state_var.m"
      /* tailcall optimized into a loop */
#line 965 "state_var.m"
      {
#line 965 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 965 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "state_var.m"
          {
#line 966 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
#line 966 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
#line 965 "state_var.m"
          }
#line 965 "state_var.m"
        else
#line 968 "state_var.m"
          {
#line 968 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmState_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
#line 968 "state_var.m"
            MR_Word hlds__make_hlds__state_var__ArmStates_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
#line 968 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StateAfterArm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_15, (MR_Integer) 1)));
#line 968 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_21 = (MR_Word) hlds__make_hlds__state_var__StateAfterArm_20;
#line 968 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26;
#line 968 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27;
#line 969 "state_var.m"
            MR_Word hlds__make_hlds__state_var___Armunct_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_15, (MR_Integer) 0)));

#line 971 "state_var.m"
            {
#line 971 "state_var.m"
              hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__StatusMapAfterArm_21, hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27);
            }
#line 973 "state_var.m"
            /* direct tailcall eliminated */
#line 973 "state_var.m"
            {
#line 973 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__2__tmp_copy_2 = hlds__make_hlds__state_var__ArmStates_16;
#line 973 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26;
#line 973 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27;

#line 973 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0__tmp_copy_5;
#line 973 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0__tmp_copy_3;
#line 973 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__2_2 = hlds__make_hlds__state_var__HeadVar__2__tmp_copy_2;
#line 973 "state_var.m"
            }
#line 973 "state_var.m"
            continue;
#line 968 "state_var.m"
          }
#line 965 "state_var.m"
      }
#line 965 "state_var.m"
      break;
#line 965 "state_var.m"
    }
#line 960 "state_var.m"
}

#line 953 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
#line 953 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 953 "state_var.m"
{
#line 953 "state_var.m"
  {
#line 953 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 953 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 953 "state_var.m"
    {
#line 953 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__953__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))));
    }
#line 953 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 953 "state_var.m"
  }
#line 953 "state_var.m"
}

#line 946 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
#line 946 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 946 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2,
#line 946 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3)
#line 946 "state_var.m"
{
#line 949 "state_var.m"
  while (MR_TRUE)
#line 949 "state_var.m"
    {
#line 949 "state_var.m"
      /* tailcall optimized into a loop */
#line 949 "state_var.m"
      {
#line 949 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 949 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2;
#line 949 "state_var.m"
        else
#line 950 "state_var.m"
          {
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__GoalState_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__GoalStates_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__GoalState_7, (MR_Integer) 0)));
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__State_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__GoalState_7, (MR_Integer) 1)));
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12 = (MR_Word) hlds__make_hlds__state_var__State_11;
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_15_15;
#line 950 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18;

#line 953 "state_var.m"
            {
#line 953 "state_var.m"
              hlds__make_hlds__state_var__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 953 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[2]));
#line 953 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1));
#line 953 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 953 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_15_15, 3) = ((MR_Box) (hlds__make_hlds__state_var__StatusMapAfterGoal_12));
#line 953 "state_var.m"
            }
#line 953 "state_var.m"
            {
#line 953 "state_var.m"
              mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_15_15, (MR_String) "hlds.make_hlds.state_var", (MR_String) "map after goal not empty");
            }
#line 955 "state_var.m"
            {
#line 955 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_10));
#line 955 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2));
#line 955 "state_var.m"
            }
#line 956 "state_var.m"
            /* direct tailcall eliminated */
#line 956 "state_var.m"
            {
#line 956 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__GoalStates_8;
#line 956 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0__tmp_copy_2 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18;

#line 956 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0__tmp_copy_2;
#line 956 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 956 "state_var.m"
            }
#line 956 "state_var.m"
            continue;
#line 950 "state_var.m"
          }
#line 949 "state_var.m"
      }
#line 949 "state_var.m"
      break;
#line 949 "state_var.m"
    }
#line 946 "state_var.m"
}

#line 886 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
#line 886 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 886 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_2,
#line 886 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3,
#line 886 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4)
#line 886 "state_var.m"
{
#line 889 "state_var.m"
  while (MR_TRUE)
#line 889 "state_var.m"
    {
#line 889 "state_var.m"
      /* tailcall optimized into a loop */
#line 889 "state_var.m"
      {
#line 889 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 889 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3;
#line 889 "state_var.m"
        else
#line 891 "state_var.m"
          {
#line 891 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 891 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17;
#line 898 "state_var.m"
            MR_Word hlds__make_hlds__state_var__BeforeOutsideStatus_13;
#line 892 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13;

#line 892 "state_var.m"
            {
#line 892 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapBeforeOutside_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), &hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13);
            }
#line 892 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 892 "state_var.m"
              {
#line 892 "state_var.m"
                hlds__make_hlds__state_var__BeforeOutsideStatus_13 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13);
#line 892 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 892 "state_var.m"
              }
#line 898 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 897 "state_var.m"
              {
#line 897 "state_var.m"
                {
#line 897 "state_var.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), ((MR_Box) (hlds__make_hlds__state_var__BeforeOutsideStatus_13)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17);
                }
#line 897 "state_var.m"
              }
#line 898 "state_var.m"
            else
#line 900 "state_var.m"
              {
#line 900 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_14_14;
#line 900 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv1_V_14_14;

#line 900 "state_var.m"
                {
#line 900 "state_var.m"
                  mercury__map__det_remove_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), &hlds__make_hlds__state_var__conv1_V_14_14, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17);
                }
#line 900 "state_var.m"
                hlds__make_hlds__state_var__V_14_14 = ((MR_Word) hlds__make_hlds__state_var__conv1_V_14_14);
#line 900 "state_var.m"
              }
#line 902 "state_var.m"
            /* direct tailcall eliminated */
#line 902 "state_var.m"
            {
#line 902 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__SVars_10;
#line 902 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0__tmp_copy_3 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17;

#line 902 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0__tmp_copy_3;
#line 902 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 902 "state_var.m"
            }
#line 902 "state_var.m"
            continue;
#line 891 "state_var.m"
          }
#line 889 "state_var.m"
      }
#line 889 "state_var.m"
      break;
#line 889 "state_var.m"
    }
#line 886 "state_var.m"
}

#line 846 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4,
#line 846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5,
#line 846 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6,
#line 846 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7)
#line 846 "state_var.m"
{
#line 850 "state_var.m"
  while (MR_TRUE)
#line 850 "state_var.m"
    {
#line 850 "state_var.m"
      /* tailcall optimized into a loop */
#line 850 "state_var.m"
      {
#line 850 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 850 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "state_var.m"
          {
#line 850 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6;
#line 850 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4;
#line 850 "state_var.m"
          }
#line 850 "state_var.m"
        else
#line 852 "state_var.m"
          {
#line 852 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
#line 852 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 852 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27;
#line 852 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29;
#line 853 "state_var.m"
            MR_Word hlds__make_hlds__state_var___OldStatus_22;
#line 853 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0__OldStatus_22;

#line 853 "state_var.m"
            {
#line 853 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), &hlds__make_hlds__state_var__conv0__OldStatus_22);
            }
#line 853 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 853 "state_var.m"
              {
#line 853 "state_var.m"
                hlds__make_hlds__state_var___OldStatus_22 = ((MR_Word) hlds__make_hlds__state_var__conv0__OldStatus_22);
#line 853 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 853 "state_var.m"
              }
#line 856 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 854 "state_var.m"
              {
#line 854 "state_var.m"
                MR_String hlds__make_hlds__state_var__Name_46;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Pieces_47;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Msg_48;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Spec_50;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_53_53;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_54_54;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_61_61;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_62_62;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_65_65;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_66_66;
#line 854 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_74_74;

#line 2007 "state_var.m"
                {
#line 2007 "state_var.m"
                  hlds__make_hlds__state_var__Name_46 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__SVar_18);
                }
#line 2008 "state_var.m"
                {
#line 2008 "state_var.m"
                  hlds__make_hlds__state_var__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "state_var.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_46));
#line 2008 "state_var.m"
                }
#line 2008 "state_var.m"
                {
#line 2008 "state_var.m"
                  hlds__make_hlds__state_var__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_54_54));
#line 2008 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[17])));
#line 2008 "state_var.m"
                }
#line 2008 "state_var.m"
                {
#line 2008 "state_var.m"
                  hlds__make_hlds__state_var__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[45])));
#line 2008 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_53_53));
#line 2008 "state_var.m"
                }
#line 2011 "state_var.m"
                {
#line 2011 "state_var.m"
                  hlds__make_hlds__state_var__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2011 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_47));
#line 2011 "state_var.m"
                }
#line 2011 "state_var.m"
                {
#line 2011 "state_var.m"
                  hlds__make_hlds__state_var__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_66_66));
#line 2011 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2011 "state_var.m"
                }
#line 2010 "state_var.m"
                {
#line 2010 "state_var.m"
                  hlds__make_hlds__state_var__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_62_62, 0) = ((MR_Box) (((MR_Integer) 41 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 2010 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 2010 "state_var.m"
                }
#line 2011 "state_var.m"
                {
#line 2011 "state_var.m"
                  hlds__make_hlds__state_var__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_62_62));
#line 2011 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2011 "state_var.m"
                }
#line 2010 "state_var.m"
                {
#line 2010 "state_var.m"
                  hlds__make_hlds__state_var__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2010 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__1_1));
#line 2010 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_61_61));
#line 2010 "state_var.m"
                }
#line 2014 "state_var.m"
                {
#line 2014 "state_var.m"
                  hlds__make_hlds__state_var__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2014 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_48));
#line 2014 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2014 "state_var.m"
                }
#line 2014 "state_var.m"
                {
#line 2014 "state_var.m"
                  hlds__make_hlds__state_var__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2014 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_3[0])));
#line 2014 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2014 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 2014 "state_var.m"
                }
#line 2015 "state_var.m"
                {
#line 2015 "state_var.m"
                  hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_50));
#line 2015 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6));
#line 2015 "state_var.m"
                }
#line 855 "state_var.m"
                {
#line 855 "state_var.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29);
                }
#line 854 "state_var.m"
              }
#line 856 "state_var.m"
            else
#line 857 "state_var.m"
              {
#line 857 "state_var.m"
                {
#line 857 "state_var.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29);
                }
#line 857 "state_var.m"
                hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6;
#line 857 "state_var.m"
              }
#line 859 "state_var.m"
            /* direct tailcall eliminated */
#line 859 "state_var.m"
            {
#line 859 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3 = hlds__make_hlds__state_var__SVars_19;
#line 859 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0__tmp_copy_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29;
#line 859 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27;

#line 859 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 859 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0__tmp_copy_4;
#line 859 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__3_3 = hlds__make_hlds__state_var__HeadVar__3__tmp_copy_3;
#line 859 "state_var.m"
            }
#line 859 "state_var.m"
            continue;
#line 852 "state_var.m"
          }
#line 850 "state_var.m"
      }
#line 850 "state_var.m"
      break;
#line 850 "state_var.m"
    }
#line 846 "state_var.m"
}

#line 818 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
#line 818 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10,
#line 818 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Status_11)
#line 818 "state_var.m"
{
#line 822 "state_var.m"
  {
#line 822 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 822 "state_var.m"
#line 822 "state_var.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10)) {
#line 822 "state_var.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 822 "state_var.m"
      case (MR_Integer) 0:
#line 822 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
#line 822 "state_var.m"
        break;
#line 822 "state_var.m"
      case (MR_Integer) 1:
#line 827 "state_var.m"
        {
#line 827 "state_var.m"
          MR_Word hlds__make_hlds__state_var__NewProgVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 0)));

#line 828 "state_var.m"
          {
#line 828 "state_var.m"
            MR_Word base;
#line 828 "state_var.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = base;
#line 828 "state_var.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 828 "state_var.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__NewProgVar_8));
#line 828 "state_var.m"
          }
#line 827 "state_var.m"
        }
#line 822 "state_var.m"
        break;
#line 822 "state_var.m"
      case (MR_Integer) 2:
#line 823 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
#line 822 "state_var.m"
        break;
#line 822 "state_var.m"
      case (MR_Integer) 3:
#line 822 "state_var.m"
#line 822 "state_var.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 0)))) {
#line 822 "state_var.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 822 "state_var.m"
          case (MR_Integer) 0:
#line 824 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
#line 822 "state_var.m"
            break;
#line 822 "state_var.m"
          case (MR_Integer) 1:
#line 830 "state_var.m"
            {
#line 830 "state_var.m"
              MR_Word hlds__make_hlds__state_var__NewProgVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 2)));
#line 830 "state_var.m"
              MR_Word hlds__make_hlds__state_var___OldProgVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 1)));

#line 831 "state_var.m"
              {
#line 831 "state_var.m"
                MR_Word base;
#line 831 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = base;
#line 831 "state_var.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 831 "state_var.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__NewProgVar_14));
#line 831 "state_var.m"
              }
#line 830 "state_var.m"
            }
#line 822 "state_var.m"
            break;
#line 822 "state_var.m"
        }
#line 822 "state_var.m"
        break;
#line 822 "state_var.m"
    }
#line 822 "state_var.m"
  }
#line 818 "state_var.m"
}

#line 758 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialStatusMap_2,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalStatusMap_3,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4,
#line 758 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5,
#line 758 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6,
#line 758 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7)
#line 758 "state_var.m"
{
#line 763 "state_var.m"
  while (MR_TRUE)
#line 763 "state_var.m"
    {
#line 763 "state_var.m"
      /* tailcall optimized into a loop */
#line 763 "state_var.m"
      {
#line 763 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded;

#line 763 "state_var.m"
        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "state_var.m"
          {
#line 763 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
#line 763 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
#line 763 "state_var.m"
          }
#line 763 "state_var.m"
        else
#line 765 "state_var.m"
          {
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeInfo_49_49 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_50_50 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Head_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Tail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__SVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Head_16, (MR_Integer) 0)));
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__FinalHeadVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Head_16, (MR_Integer) 1)));
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__InitialStatus_24;
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__FinalStatus_25;
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44;
#line 765 "state_var.m"
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45;
#line 767 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_InitialStatus_24;
#line 768 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv1_FinalStatus_25;

#line 767 "state_var.m"
            {
#line 767 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__TypeCtorInfo_50_50, hlds__make_hlds__state_var__InitialStatusMap_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_22)), &hlds__make_hlds__state_var__conv0_InitialStatus_24);
            }
#line 767 "state_var.m"
            hlds__make_hlds__state_var__InitialStatus_24 = ((MR_Word) hlds__make_hlds__state_var__conv0_InitialStatus_24);
#line 768 "state_var.m"
            {
#line 768 "state_var.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__TypeCtorInfo_50_50, hlds__make_hlds__state_var__FinalStatusMap_3, ((MR_Box) (hlds__make_hlds__state_var__SVar_22)), &hlds__make_hlds__state_var__conv1_FinalStatus_25);
            }
#line 768 "state_var.m"
            hlds__make_hlds__state_var__FinalStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv1_FinalStatus_25);
#line 782 "state_var.m"
#line 782 "state_var.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__FinalStatus_25)) {
#line 782 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 782 "state_var.m"
              case (MR_Integer) 0:
#line 783 "state_var.m"
                {
#line 783 "state_var.m"
                  hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
#line 783 "state_var.m"
                  hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
#line 783 "state_var.m"
                }
#line 782 "state_var.m"
                break;
#line 782 "state_var.m"
              case (MR_Integer) 1:
#line 792 "state_var.m"
                {
#line 793 "state_var.m"
                  {
#line 793 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
#line 793 "state_var.m"
                    return;
                  }
#line 792 "state_var.m"
                }
#line 782 "state_var.m"
                break;
#line 782 "state_var.m"
              case (MR_Integer) 2:
#line 787 "state_var.m"
                {
#line 788 "state_var.m"
                  {
#line 788 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "readonly status");
#line 788 "state_var.m"
                    return;
                  }
#line 787 "state_var.m"
                }
#line 782 "state_var.m"
                break;
#line 782 "state_var.m"
              case (MR_Integer) 3:
#line 782 "state_var.m"
#line 782 "state_var.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__FinalStatus_25, (MR_Integer) 0)))) {
#line 782 "state_var.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 782 "state_var.m"
                  case (MR_Integer) 0:
#line 770 "state_var.m"
                    {
#line 770 "state_var.m"
                      MR_Word hlds__make_hlds__state_var__LastVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__FinalStatus_25, (MR_Integer) 1)));

#line 771 "state_var.m"
                      {
#line 771 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__FinalStatus_25, hlds__make_hlds__state_var__InitialStatus_24);
                      }
#line 779 "state_var.m"
                      if (hlds__make_hlds__state_var__succeeded)
#line 777 "state_var.m"
                        {
#line 777 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__CopyGoal_27;
#line 777 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__CopyGoal0_54;
#line 777 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_55_55;
#line 777 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_56_56;

#line 1163 "state_var.m"
                          {
#line 1163 "state_var.m"
                            hlds__make_hlds__state_var__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "state_var.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__state_var__LastVar_26));
#line 1163 "state_var.m"
                          }
#line 1164 "state_var.m"
                          {
#line 1164 "state_var.m"
                            hlds__make_hlds__state_var__V_56_56 = mercury__term__context_init_0_f_0();
                          }
#line 1163 "state_var.m"
                          {
#line 1163 "state_var.m"
                            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__state_var__FinalHeadVar_23, hlds__make_hlds__state_var__V_55_55, hlds__make_hlds__state_var__V_56_56, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_4[4]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoal0_54);
                          }
#line 1165 "state_var.m"
                          {
#line 1165 "state_var.m"
                            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, hlds__make_hlds__state_var__CopyGoal0_54, &hlds__make_hlds__state_var__CopyGoal_27);
                          }
#line 778 "state_var.m"
                          {
#line 778 "state_var.m"
                            hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "state_var.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_27));
#line 778 "state_var.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6));
#line 778 "state_var.m"
                          }
#line 777 "state_var.m"
                          hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
#line 777 "state_var.m"
                        }
#line 779 "state_var.m"
                      else
#line 780 "state_var.m"
                        {
#line 780 "state_var.m"
                          MR_Word hlds__make_hlds__state_var__V_46_46;

#line 780 "state_var.m"
                          {
#line 780 "state_var.m"
                            hlds__make_hlds__state_var__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "state_var.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__state_var__LastVar_26));
#line 780 "state_var.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalHeadVar_23));
#line 780 "state_var.m"
                          }
#line 780 "state_var.m"
                          {
#line 780 "state_var.m"
                            hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "state_var.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_46_46));
#line 780 "state_var.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4));
#line 780 "state_var.m"
                          }
#line 780 "state_var.m"
                          hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
#line 780 "state_var.m"
                        }
#line 770 "state_var.m"
                    }
#line 782 "state_var.m"
                    break;
#line 782 "state_var.m"
                  case (MR_Integer) 1:
#line 792 "state_var.m"
                    {
#line 793 "state_var.m"
                      {
#line 793 "state_var.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
#line 793 "state_var.m"
                        return;
                      }
#line 792 "state_var.m"
                    }
#line 782 "state_var.m"
                    break;
#line 782 "state_var.m"
                }
#line 782 "state_var.m"
                break;
#line 782 "state_var.m"
            }
#line 795 "state_var.m"
            /* direct tailcall eliminated */
#line 795 "state_var.m"
            {
#line 795 "state_var.m"
              MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__Tail_17;
#line 795 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0__tmp_copy_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45;
#line 795 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0__tmp_copy_6 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44;

#line 795 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0__tmp_copy_6;
#line 795 "state_var.m"
              hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0__tmp_copy_4;
#line 795 "state_var.m"
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 795 "state_var.m"
            }
#line 795 "state_var.m"
            continue;
#line 765 "state_var.m"
          }
#line 763 "state_var.m"
      }
#line 763 "state_var.m"
      break;
#line 763 "state_var.m"
    }
#line 758 "state_var.m"
}

#line 690 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_9,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Goals0_11,
#line 690 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Goal_12,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
#line 690 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40,
#line 690 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_41)
#line 690 "state_var.m"
{
#line 695 "state_var.m"
  {
#line 695 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_69_69 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalAssocList_16;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InitialSVarStatusMap_17;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarStatusMap_18;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarSubn_19;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__CopyGoals_20;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goals1_21;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goal1_24;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr1_25;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo1_26;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalId1_27;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId1_28;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap1_29;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_30;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_33;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId_34;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44;
#line 729 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_31;
#line 714 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_31;

#line 696 "state_var.m"
    {
#line 696 "state_var.m"
      mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_69_69, hlds__make_hlds__state_var__TypeInfo_69_69, hlds__make_hlds__state_var__FinalMap_10, &hlds__make_hlds__state_var__FinalAssocList_16);
    }
#line 697 "state_var.m"
    hlds__make_hlds__state_var__InitialSVarStatusMap_17 = (MR_Word) hlds__make_hlds__state_var__InitialSVarState_13;
#line 698 "state_var.m"
    hlds__make_hlds__state_var__FinalSVarStatusMap_18 = (MR_Word) hlds__make_hlds__state_var__FinalSVarState_14;
#line 699 "state_var.m"
    {
#line 699 "state_var.m"
      hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(hlds__make_hlds__state_var__FinalAssocList_16, hlds__make_hlds__state_var__InitialSVarStatusMap_17, hlds__make_hlds__state_var__FinalSVarStatusMap_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__FinalSVarSubn_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoals_20);
    }
#line 705 "state_var.m"
    if ((hlds__make_hlds__state_var__CopyGoals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "state_var.m"
      hlds__make_hlds__state_var__Goals1_21 = hlds__make_hlds__state_var__Goals0_11;
#line 705 "state_var.m"
    else
#line 706 "state_var.m"
      {
#line 707 "state_var.m"
        {
#line 707 "state_var.m"
          hlds__make_hlds__state_var__Goals1_21 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__Goals0_11, hlds__make_hlds__state_var__CopyGoals_20);
        }
#line 706 "state_var.m"
      }
#line 709 "state_var.m"
    {
#line 709 "state_var.m"
      hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(hlds__make_hlds__state_var__Context_9, hlds__make_hlds__state_var__Goals1_21, &hlds__make_hlds__state_var__Goal1_24, hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44);
    }
#line 711 "state_var.m"
    hlds__make_hlds__state_var__GoalExpr1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_24, (MR_Integer) 0)));
#line 711 "state_var.m"
    hlds__make_hlds__state_var__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_24, (MR_Integer) 1)));
#line 712 "state_var.m"
    {
#line 712 "state_var.m"
      hlds__make_hlds__state_var__GoalId1_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo1_26);
    }
#line 713 "state_var.m"
    hlds__make_hlds__state_var__NextGoalId1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 0)));
#line 713 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamingMap1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 1)));
#line 713 "state_var.m"
    hlds__make_hlds__state_var__Specs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 2)));
#line 714 "state_var.m"
    {
#line 714 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap1_29, ((MR_Box) (hlds__make_hlds__state_var__GoalId1_27)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_31);
    }
#line 714 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 714 "state_var.m"
      {
#line 714 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenaming0_31 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_31);
#line 714 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 714 "state_var.m"
      }
#line 729 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 723 "state_var.m"
      {
#line 723 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_56_56;

#line 725 "state_var.m"
        {
#line 725 "state_var.m"
          hlds__make_hlds__state_var__V_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenaming0_31, hlds__make_hlds__state_var__FinalSVarSubn_19);
        }
#line 725 "state_var.m"
        {
#line 725 "state_var.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId1_27)), ((MR_Box) (hlds__make_hlds__state_var__V_56_56)), hlds__make_hlds__state_var__DelayedRenamingMap1_29, &hlds__make_hlds__state_var__DelayedRenamingMap_33);
        }
#line 727 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId_34 = hlds__make_hlds__state_var__NextGoalId1_28;
#line 728 "state_var.m"
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_24;
#line 723 "state_var.m"
      }
#line 729 "state_var.m"
    else
#line 735 "state_var.m"
    if ((hlds__make_hlds__state_var__FinalSVarSubn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "state_var.m"
      {
#line 732 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId_34 = hlds__make_hlds__state_var__NextGoalId1_28;
#line 733 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenamingMap_33 = hlds__make_hlds__state_var__DelayedRenamingMap1_29;
#line 734 "state_var.m"
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_24;
#line 731 "state_var.m"
      }
#line 735 "state_var.m"
    else
#line 736 "state_var.m"
      {
#line 736 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_37;
#line 736 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_38;
#line 736 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalInfo_39;

#line 737 "state_var.m"
        {
#line 737 "state_var.m"
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_37, hlds__make_hlds__state_var__NextGoalId1_28, &hlds__make_hlds__state_var__NextGoalId_34);
        }
#line 738 "state_var.m"
        hlds__make_hlds__state_var__GoalId_38 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_37;
#line 750 "state_var.m"
        {
#line 750 "state_var.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_38)), ((MR_Box) (hlds__make_hlds__state_var__FinalSVarSubn_19)), hlds__make_hlds__state_var__DelayedRenamingMap1_29, &hlds__make_hlds__state_var__DelayedRenamingMap_33);
        }
#line 752 "state_var.m"
        {
#line 752 "state_var.m"
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_38, hlds__make_hlds__state_var__GoalInfo1_26, &hlds__make_hlds__state_var__GoalInfo_39);
        }
#line 753 "state_var.m"
        {
#line 753 "state_var.m"
          MR_Word base;
#line 753 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 753 "state_var.m"
          *hlds__make_hlds__state_var__Goal_12 = base;
#line 753 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr1_25));
#line 753 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_39));
#line 753 "state_var.m"
        }
#line 736 "state_var.m"
      }
#line 756 "state_var.m"
    {
#line 756 "state_var.m"
      MR_Word base;
#line 756 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_41 = base;
#line 756 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_34));
#line 756 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_33));
#line 756 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_30));
#line 756 "state_var.m"
    }
#line 695 "state_var.m"
  }
#line 690 "state_var.m"
}

#line 625 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
#line 625 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
#line 625 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
#line 625 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__4_4)
#line 625 "state_var.m"
{
#line 629 "state_var.m"
  {
#line 629 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 629 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "state_var.m"
      *hlds__make_hlds__state_var__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "state_var.m"
    else
#line 630 "state_var.m"
      {
#line 630 "state_var.m"
        MR_Word hlds__make_hlds__state_var__SVar_9;
#line 630 "state_var.m"
        MR_Word hlds__make_hlds__state_var__CurStatus_10;
#line 630 "state_var.m"
        MR_Word hlds__make_hlds__state_var__CurTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
#line 630 "state_var.m"
        MR_Word hlds__make_hlds__state_var__LambdaTail_13;
#line 630 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));

#line 630 "state_var.m"
        hlds__make_hlds__state_var__SVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, (MR_Integer) 0)));
#line 630 "state_var.m"
        hlds__make_hlds__state_var__CurStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, (MR_Integer) 1)));
#line 631 "state_var.m"
        {
#line 631 "state_var.m"
          hlds__make_hlds__state_var__make_svars_read_only_4_p_0(hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__CurTail_11, &hlds__make_hlds__state_var__LambdaTail_13);
        }
#line 637 "state_var.m"
#line 637 "state_var.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__CurStatus_10)) {
#line 637 "state_var.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 637 "state_var.m"
          case (MR_Integer) 0:
#line 636 "state_var.m"
            *hlds__make_hlds__state_var__HeadVar__4_4 = hlds__make_hlds__state_var__LambdaTail_13;
#line 637 "state_var.m"
            break;
#line 637 "state_var.m"
          case (MR_Integer) 1:
#line 636 "state_var.m"
            *hlds__make_hlds__state_var__HeadVar__4_4 = hlds__make_hlds__state_var__LambdaTail_13;
#line 637 "state_var.m"
            break;
#line 637 "state_var.m"
          case (MR_Integer) 2:
#line 639 "state_var.m"
            {
#line 639 "state_var.m"
              MR_Word base;
#line 639 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "state_var.m"
              *hlds__make_hlds__state_var__HeadVar__4_4 = base;
#line 639 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_21_21));
#line 639 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
#line 639 "state_var.m"
            }
#line 637 "state_var.m"
            break;
#line 637 "state_var.m"
          case (MR_Integer) 3:
#line 637 "state_var.m"
#line 637 "state_var.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 0)))) {
#line 637 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 637 "state_var.m"
              case (MR_Integer) 0:
#line 643 "state_var.m"
                {
#line 643 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 1)));
#line 643 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__LambdaStatus_20;
#line 643 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_22_22;

#line 644 "state_var.m"
                  {
#line 644 "state_var.m"
                    hlds__make_hlds__state_var__LambdaStatus_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 644 "state_var.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
#line 644 "state_var.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 1) = NULL;
#line 644 "state_var.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 2) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__2_2));
#line 644 "state_var.m"
                  }
#line 645 "state_var.m"
                  {
#line 645 "state_var.m"
                    hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__state_var__SVar_9));
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaStatus_20));
#line 645 "state_var.m"
                  }
#line 645 "state_var.m"
                  {
#line 645 "state_var.m"
                    MR_Word base;
#line 645 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "state_var.m"
                    *hlds__make_hlds__state_var__HeadVar__4_4 = base;
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
#line 645 "state_var.m"
                  }
#line 643 "state_var.m"
                }
#line 637 "state_var.m"
                break;
#line 637 "state_var.m"
              case (MR_Integer) 1:
#line 643 "state_var.m"
                {
#line 643 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 1)));
#line 643 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__LambdaStatus_25;
#line 643 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_26_26;
#line 642 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 2)));

#line 644 "state_var.m"
                  {
#line 644 "state_var.m"
                    hlds__make_hlds__state_var__LambdaStatus_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 644 "state_var.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_24));
#line 644 "state_var.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 1) = NULL;
#line 644 "state_var.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 2) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__2_2));
#line 644 "state_var.m"
                  }
#line 645 "state_var.m"
                  {
#line 645 "state_var.m"
                    hlds__make_hlds__state_var__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__state_var__SVar_9));
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaStatus_25));
#line 645 "state_var.m"
                  }
#line 645 "state_var.m"
                  {
#line 645 "state_var.m"
                    MR_Word base;
#line 645 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "state_var.m"
                    *hlds__make_hlds__state_var__HeadVar__4_4 = base;
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_26_26));
#line 645 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
#line 645 "state_var.m"
                  }
#line 643 "state_var.m"
                }
#line 637 "state_var.m"
                break;
#line 637 "state_var.m"
            }
#line 637 "state_var.m"
            break;
#line 637 "state_var.m"
        }
#line 630 "state_var.m"
      }
#line 629 "state_var.m"
  }
#line 625 "state_var.m"
}

#line 492 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Term0_11,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Term_12,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_48,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50,
#line 492 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51,
#line 492 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52)
#line 492 "state_var.m"
{
#line 500 "state_var.m"
  {
#line 500 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 500 "state_var.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Term0_11)) == (MR_mktag((MR_Integer) 0))))
#line 503 "state_var.m"
      {
#line 503 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Functor_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 0)));
#line 503 "state_var.m"
        MR_Word hlds__make_hlds__state_var__SubTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 1)));
#line 503 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 2)));
#line 547 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar_22;
#line 505 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_53_53;
#line 505 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_54_54;
#line 505 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_55_55;
#line 506 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_23_23;

#line 505 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Functor_19)) == (MR_mktag((MR_Integer) 0)));
#line 505 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 505 "state_var.m"
          {
#line 505 "state_var.m"
            hlds__make_hlds__state_var__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Functor_19, (MR_Integer) 0)));
#line 505 "state_var.m"
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_53_53, (MR_String) "!.") == 0);
#line 505 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 505 "state_var.m"
              {
#line 506 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__SubTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 506 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 506 "state_var.m"
                  {
#line 506 "state_var.m"
                    hlds__make_hlds__state_var__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 0)));
#line 506 "state_var.m"
                    hlds__make_hlds__state_var__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 1)));
#line 506 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 505 "state_var.m"
                      {
#line 506 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 506 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 506 "state_var.m"
                          {
#line 506 "state_var.m"
                            hlds__make_hlds__state_var__StateVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, (MR_Integer) 0)));
#line 506 "state_var.m"
                            hlds__make_hlds__state_var__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, (MR_Integer) 1)));
#line 506 "state_var.m"
                          }
#line 505 "state_var.m"
                      }
#line 506 "state_var.m"
                  }
#line 505 "state_var.m"
              }
#line 505 "state_var.m"
          }
#line 547 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 508 "state_var.m"
          {
#line 508 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap0_24 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47;
#line 508 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_28;
#line 540 "state_var.m"
            MR_Word hlds__make_hlds__state_var__OldStatus_25;
#line 509 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv0_OldStatus_25;

#line 509 "state_var.m"
            {
#line 509 "state_var.m"
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_24, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv0_OldStatus_25);
            }
#line 509 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 509 "state_var.m"
              {
#line 509 "state_var.m"
                hlds__make_hlds__state_var__OldStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv0_OldStatus_25);
#line 509 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 509 "state_var.m"
              }
#line 540 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 518 "state_var.m"
#line 518 "state_var.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_25)) {
#line 518 "state_var.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 518 "state_var.m"
                case (MR_Integer) 0:
#line 511 "state_var.m"
                  {
#line 511 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__Var_26;
#line 511 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__Status_27;

#line 513 "state_var.m"
                    {
#line 513 "state_var.m"
                      hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_22, (MR_Integer) 0, &hlds__make_hlds__state_var__Var_26, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
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
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
#line 515 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 515 "state_var.m"
                    }
#line 516 "state_var.m"
                    {
#line 516 "state_var.m"
                      hlds__make_hlds__state_var__Status_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "state_var.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 516 "state_var.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
#line 516 "state_var.m"
                    }
#line 517 "state_var.m"
                    {
#line 517 "state_var.m"
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_27)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                    }
#line 511 "state_var.m"
                  }
#line 518 "state_var.m"
                  break;
#line 518 "state_var.m"
                case (MR_Integer) 1:
#line 523 "state_var.m"
                  {
#line 524 "state_var.m"
                    {
#line 524 "state_var.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !.");
#line 524 "state_var.m"
                      return;
                    }
#line 523 "state_var.m"
                  }
#line 518 "state_var.m"
                  break;
#line 518 "state_var.m"
                case (MR_Integer) 2:
#line 529 "state_var.m"
                  {
#line 529 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__Var_88;
#line 529 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__Status_89;

#line 534 "state_var.m"
                    {
#line 534 "state_var.m"
                      hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_22, (MR_Integer) 0, &hlds__make_hlds__state_var__Var_88, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                    }
#line 536 "state_var.m"
                    {
#line 536 "state_var.m"
                      MR_Word base;
#line 536 "state_var.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "state_var.m"
                      *hlds__make_hlds__state_var__Term_12 = base;
#line 536 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_88));
#line 536 "state_var.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 536 "state_var.m"
                    }
#line 537 "state_var.m"
                    {
#line 537 "state_var.m"
                      hlds__make_hlds__state_var__Status_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "state_var.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 537 "state_var.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_89, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_88));
#line 537 "state_var.m"
                    }
#line 538 "state_var.m"
                    {
#line 538 "state_var.m"
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_89)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                    }
#line 529 "state_var.m"
                  }
#line 518 "state_var.m"
                  break;
#line 518 "state_var.m"
                case (MR_Integer) 3:
#line 518 "state_var.m"
#line 518 "state_var.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_25, (MR_Integer) 0)))) {
#line 518 "state_var.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 518 "state_var.m"
                    case (MR_Integer) 0:
#line 519 "state_var.m"
                      {
#line 519 "state_var.m"
                        MR_Word hlds__make_hlds__state_var__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_25, (MR_Integer) 1)));

#line 520 "state_var.m"
                        {
#line 520 "state_var.m"
                          MR_Word base;
#line 520 "state_var.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "state_var.m"
                          *hlds__make_hlds__state_var__Term_12 = base;
#line 520 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_87));
#line 520 "state_var.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 520 "state_var.m"
                        }
#line 521 "state_var.m"
                        hlds__make_hlds__state_var__StatusMap_28 = hlds__make_hlds__state_var__StatusMap0_24;
#line 519 "state_var.m"
                        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49;
#line 519 "state_var.m"
                      }
#line 518 "state_var.m"
                      break;
#line 518 "state_var.m"
                    case (MR_Integer) 1:
#line 526 "state_var.m"
                      {
#line 527 "state_var.m"
                        {
#line 527 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !.");
#line 527 "state_var.m"
                          return;
                        }
#line 526 "state_var.m"
                      }
#line 518 "state_var.m"
                      break;
#line 518 "state_var.m"
                  }
#line 518 "state_var.m"
                  break;
#line 518 "state_var.m"
              }
#line 540 "state_var.m"
            else
#line 541 "state_var.m"
              {
#line 541 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Var_90;
#line 541 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Status_91;

#line 541 "state_var.m"
                {
#line 541 "state_var.m"
                  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_22, (MR_Integer) 0, &hlds__make_hlds__state_var__Var_90, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                }
#line 542 "state_var.m"
                {
#line 542 "state_var.m"
                  MR_Word base;
#line 542 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "state_var.m"
                  *hlds__make_hlds__state_var__Term_12 = base;
#line 542 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_90));
#line 542 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 542 "state_var.m"
                }
#line 543 "state_var.m"
                {
#line 543 "state_var.m"
                  hlds__make_hlds__state_var__Status_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 543 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_91, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_90));
#line 543 "state_var.m"
                }
#line 544 "state_var.m"
                {
#line 544 "state_var.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_91)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                }
#line 541 "state_var.m"
              }
#line 546 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_48 = (MR_Word) hlds__make_hlds__state_var__StatusMap_28;
#line 508 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51;
#line 508 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45;
#line 508 "state_var.m"
          }
#line 547 "state_var.m"
        else
#line 592 "state_var.m"
          {
#line 592 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StateVar_98;
#line 548 "state_var.m"
            MR_String hlds__make_hlds__state_var__V_69_69;
#line 548 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_70_70;
#line 548 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_71_71;
#line 549 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_35_35;

#line 548 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Functor_19)) == (MR_mktag((MR_Integer) 0)));
#line 548 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 548 "state_var.m"
              {
#line 548 "state_var.m"
                hlds__make_hlds__state_var__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Functor_19, (MR_Integer) 0)));
#line 548 "state_var.m"
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_69_69, (MR_String) "!:") == 0);
#line 548 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 548 "state_var.m"
                  {
#line 549 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__SubTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 549 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 549 "state_var.m"
                      {
#line 549 "state_var.m"
                        hlds__make_hlds__state_var__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 0)));
#line 549 "state_var.m"
                        hlds__make_hlds__state_var__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 1)));
#line 549 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 548 "state_var.m"
                          {
#line 549 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 549 "state_var.m"
                            if (hlds__make_hlds__state_var__succeeded)
#line 549 "state_var.m"
                              {
#line 549 "state_var.m"
                                hlds__make_hlds__state_var__StateVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_70_70, (MR_Integer) 0)));
#line 549 "state_var.m"
                                hlds__make_hlds__state_var__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_70_70, (MR_Integer) 1)));
#line 549 "state_var.m"
                              }
#line 548 "state_var.m"
                          }
#line 549 "state_var.m"
                      }
#line 548 "state_var.m"
                  }
#line 548 "state_var.m"
              }
#line 592 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 551 "state_var.m"
              {
#line 551 "state_var.m"
                MR_Word hlds__make_hlds__state_var__StatusMap0_93;
#line 551 "state_var.m"
                MR_Word hlds__make_hlds__state_var__Var_95;
#line 551 "state_var.m"
                MR_Word hlds__make_hlds__state_var__StatusMap_97;
#line 582 "state_var.m"
                MR_Word hlds__make_hlds__state_var__OldStatus_92;
#line 556 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv1_OldStatus_92;
#line 586 "state_var.m"
                MR_Word hlds__make_hlds__state_var__TypeInfo_116_116;
#line 586 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_43_43;
#line 586 "state_var.m"
                MR_Box hlds__make_hlds__state_var__conv2_V_43_43;

#line 551 "state_var.m"
                {
#line 551 "state_var.m"
                  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_98, (MR_Integer) 2, &hlds__make_hlds__state_var__Var_95, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50);
                }
#line 552 "state_var.m"
                {
#line 552 "state_var.m"
                  MR_Word base;
#line 552 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "state_var.m"
                  *hlds__make_hlds__state_var__Term_12 = base;
#line 552 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_95));
#line 552 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 552 "state_var.m"
                }
#line 555 "state_var.m"
                hlds__make_hlds__state_var__StatusMap0_93 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47;
#line 556 "state_var.m"
                {
#line 556 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_93, ((MR_Box) (hlds__make_hlds__state_var__StateVar_98)), &hlds__make_hlds__state_var__conv1_OldStatus_92);
                }
#line 556 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 556 "state_var.m"
                  {
#line 556 "state_var.m"
                    hlds__make_hlds__state_var__OldStatus_92 = ((MR_Word) hlds__make_hlds__state_var__conv1_OldStatus_92);
#line 556 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 556 "state_var.m"
                  }
#line 582 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 563 "state_var.m"
#line 563 "state_var.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_92)) {
#line 563 "state_var.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 563 "state_var.m"
                    case (MR_Integer) 0:
#line 562 "state_var.m"
                      hlds__make_hlds__state_var__StatusMap_97 = hlds__make_hlds__state_var__StatusMap0_93;
#line 563 "state_var.m"
                      break;
#line 563 "state_var.m"
                    case (MR_Integer) 1:
#line 569 "state_var.m"
                      {
#line 570 "state_var.m"
                        {
#line 570 "state_var.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !:");
#line 570 "state_var.m"
                          return;
                        }
#line 569 "state_var.m"
                      }
#line 563 "state_var.m"
                      break;
#line 563 "state_var.m"
                    case (MR_Integer) 2:
#line 580 "state_var.m"
                      hlds__make_hlds__state_var__StatusMap_97 = hlds__make_hlds__state_var__StatusMap0_93;
#line 563 "state_var.m"
                      break;
#line 563 "state_var.m"
                    case (MR_Integer) 3:
#line 563 "state_var.m"
#line 563 "state_var.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_92, (MR_Integer) 0)))) {
#line 563 "state_var.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 563 "state_var.m"
                        case (MR_Integer) 0:
#line 567 "state_var.m"
                          hlds__make_hlds__state_var__StatusMap_97 = hlds__make_hlds__state_var__StatusMap0_93;
#line 563 "state_var.m"
                          break;
#line 563 "state_var.m"
                        case (MR_Integer) 1:
#line 572 "state_var.m"
                          {
#line 573 "state_var.m"
                            {
#line 573 "state_var.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !:");
#line 573 "state_var.m"
                              return;
                            }
#line 572 "state_var.m"
                          }
#line 563 "state_var.m"
                          break;
#line 563 "state_var.m"
                      }
#line 563 "state_var.m"
                      break;
#line 563 "state_var.m"
                  }
#line 582 "state_var.m"
                else
#line 583 "state_var.m"
                  {
#line 583 "state_var.m"
                    {
#line 583 "state_var.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_98)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__StatusMap0_93, &hlds__make_hlds__state_var__StatusMap_97);
                    }
#line 583 "state_var.m"
                  }
#line 585 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_48 = (MR_Word) hlds__make_hlds__state_var__StatusMap_97;
#line 10848 "hlds.make_hlds.state_var.c"
                hlds__make_hlds__state_var__TypeInfo_116_116 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 586 "state_var.m"
                {
#line 586 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0(hlds__make_hlds__state_var__TypeInfo_116_116, hlds__make_hlds__state_var__TypeInfo_116_116, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45, ((MR_Box) (hlds__make_hlds__state_var__StateVar_98)), &hlds__make_hlds__state_var__conv2_V_43_43);
                }
#line 586 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 586 "state_var.m"
                  {
#line 586 "state_var.m"
                    hlds__make_hlds__state_var__V_43_43 = ((MR_Word) hlds__make_hlds__state_var__conv2_V_43_43);
#line 586 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 586 "state_var.m"
                  }
#line 589 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 587 "state_var.m"
                  {
#line 587 "state_var.m"
                    {
#line 587 "state_var.m"
                      hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(hlds__make_hlds__state_var__Context_21, *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50, hlds__make_hlds__state_var__StateVar_98, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52);
                    }
#line 587 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45;
#line 587 "state_var.m"
                  }
#line 589 "state_var.m"
                else
#line 590 "state_var.m"
                  {
#line 590 "state_var.m"
                    MR_Word hlds__make_hlds__state_var__TypeInfo_117_117 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];

#line 590 "state_var.m"
                    {
#line 590 "state_var.m"
                      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_117_117, hlds__make_hlds__state_var__TypeInfo_117_117, ((MR_Box) (hlds__make_hlds__state_var__StateVar_98)), ((MR_Box) (hlds__make_hlds__state_var__Var_95)), hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46);
                    }
#line 590 "state_var.m"
                    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51;
#line 590 "state_var.m"
                  }
#line 551 "state_var.m"
              }
#line 592 "state_var.m"
            else
#line 594 "state_var.m"
              {
#line 594 "state_var.m"
                MR_Word hlds__make_hlds__state_var__SubTerms_44;

#line 593 "state_var.m"
                {
#line 593 "state_var.m"
                  hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__SubTerms0_20, &hlds__make_hlds__state_var__SubTerms_44, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47, hlds__make_hlds__state_var__STATE_VARIABLE_State_48, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52);
                }
#line 595 "state_var.m"
                {
#line 595 "state_var.m"
                  MR_Word base;
#line 595 "state_var.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 595 "state_var.m"
                  *hlds__make_hlds__state_var__Term_12 = base;
#line 595 "state_var.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Functor_19));
#line 595 "state_var.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__SubTerms_44));
#line 595 "state_var.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
#line 595 "state_var.m"
                }
#line 594 "state_var.m"
              }
#line 592 "state_var.m"
          }
#line 503 "state_var.m"
      }
#line 500 "state_var.m"
    else
#line 500 "state_var.m"
      {
#line 501 "state_var.m"
        *hlds__make_hlds__state_var__Term_12 = hlds__make_hlds__state_var__Term0_11;
#line 500 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_46 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_45;
#line 500 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_48 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_47;
#line 500 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_50 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_49;
#line 500 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_52 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_51;
#line 500 "state_var.m"
      }
#line 500 "state_var.m"
  }
#line 492 "state_var.m"
}

#line 481 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8,
#line 481 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9,
#line 481 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10)
#line 481 "state_var.m"
{
#line 486 "state_var.m"
  {
#line 486 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 486 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "state_var.m"
      {
#line 486 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9;
#line 486 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7;
#line 486 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_6 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5;
#line 486 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3;
#line 486 "state_var.m"
      }
#line 486 "state_var.m"
    else
#line 488 "state_var.m"
      {
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Term0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Terms0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Term_25;
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Terms_26;
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39;
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40;
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41;
#line 488 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42;

#line 489 "state_var.m"
        {
#line 489 "state_var.m"
          hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(hlds__make_hlds__state_var__Term0_23, &hlds__make_hlds__state_var__Term_25, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42);
        }
#line 490 "state_var.m"
        {
#line 490 "state_var.m"
          hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Terms0_24, &hlds__make_hlds__state_var__Terms_26, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4, hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40, hlds__make_hlds__state_var__STATE_VARIABLE_State_6, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10);
        }
#line 487 "state_var.m"
        {
#line 487 "state_var.m"
          MR_Word base;
#line 487 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 487 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Term_25));
#line 487 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Terms_26));
#line 487 "state_var.m"
        }
#line 488 "state_var.m"
      }
#line 486 "state_var.m"
  }
#line 481 "state_var.m"
}

#line 459 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_clause_2_p_0(
#line 459 "state_var.m"
  MR_Word hlds__make_hlds__state_var__ItemClause0_3,
#line 459 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__ItemClause_4)
#line 459 "state_var.m"
{
#line 462 "state_var.m"
  {
#line 462 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 0)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 1)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 2)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Origin_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 3)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 4)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 5)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 6)));
#line 462 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 7)));
#line 462 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Args_13;

#line 465 "state_var.m"
    {
#line 465 "state_var.m"
      hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__state_var__Args0_7, &hlds__make_hlds__state_var__Args_13);
    }
#line 466 "state_var.m"
    {
#line 466 "state_var.m"
      MR_Word base;
#line 466 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 466 "state_var.m"
      *hlds__make_hlds__state_var__ItemClause_4 = base;
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__SymName_5));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__PredOrFunc_6));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Args_13));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__state_var__Origin_8));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__state_var__VarSet_9));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__state_var__Body_10));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__state_var__Context_11));
#line 466 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__state_var__SeqNum_12));
#line 466 "state_var.m"
    }
#line 462 "state_var.m"
  }
#line 459 "state_var.m"
}

#line 447 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0_1(
#line 447 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 447 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 447 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
#line 447 "state_var.m"
{
#line 447 "state_var.m"
  {
#line 447 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 447 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_ItemClause_4;

#line 447 "state_var.m"
    {
#line 447 "state_var.m"
      hlds__make_hlds__state_var__expand_bang_states_clause_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_ItemClause_4);
    }
#line 447 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_ItemClause_4));
#line 447 "state_var.m"
  }
#line 447 "state_var.m"
}

#line 437 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_method_2_p_0(
#line 437 "state_var.m"
  MR_Word hlds__make_hlds__state_var__IM0_3,
#line 437 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__IM_4)
#line 437 "state_var.m"
{
#line 440 "state_var.m"
  {
#line 440 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 440 "state_var.m"
    MR_Word hlds__make_hlds__state_var__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 0)));
#line 440 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Method_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 1)));
#line 440 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ProcDef0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 2)));
#line 440 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__Arity0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 3)));
#line 440 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Ctxt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 4)));

#line 445 "state_var.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__ProcDef0_7)) == (MR_mktag((MR_Integer) 1))))
#line 446 "state_var.m"
      {
#line 446 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0;
#line 446 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ItemClauses0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ProcDef0_7, (MR_Integer) 0)));
#line 446 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ItemClauses_12;
#line 446 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__Arity_16;
#line 446 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ProcDef_17;
#line 452 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ItemClause_13;
#line 449 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_14_14;

#line 447 "state_var.m"
        {
#line 447 "state_var.m"
          mercury__list__map_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_29_29, hlds__make_hlds__state_var__TypeCtorInfo_29_29, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[7], hlds__make_hlds__state_var__ItemClauses0_11, &hlds__make_hlds__state_var__ItemClauses_12);
        }
#line 449 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__ItemClauses_12)) == (MR_mktag((MR_Integer) 1)));
#line 449 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 449 "state_var.m"
          {
#line 449 "state_var.m"
            hlds__make_hlds__state_var__ItemClause_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ItemClauses_12, (MR_Integer) 0)));
#line 449 "state_var.m"
            hlds__make_hlds__state_var__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ItemClauses_12, (MR_Integer) 1)));
#line 450 "state_var.m"
            {
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 2)));
#line 450 "state_var.m"
              MR_Integer hlds__make_hlds__state_var__V_19_19;
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 0)));
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 1)));
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 3)));
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 4)));
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 5)));
#line 450 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 6)));
#line 450 "state_var.m"
              MR_Integer hlds__make_hlds__state_var__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 7)));

#line 451 "state_var.m"
              {
#line 451 "state_var.m"
                hlds__make_hlds__state_var__V_19_19 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[4], hlds__make_hlds__state_var__Args_15);
              }
#line 451 "state_var.m"
              {
#line 451 "state_var.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__state_var__PredOrFunc_5, &hlds__make_hlds__state_var__Arity_16, hlds__make_hlds__state_var__V_19_19);
              }
#line 450 "state_var.m"
            }
#line 449 "state_var.m"
          }
#line 449 "state_var.m"
        else
#line 453 "state_var.m"
          hlds__make_hlds__state_var__Arity_16 = hlds__make_hlds__state_var__Arity0_8;
#line 455 "state_var.m"
        {
#line 455 "state_var.m"
          hlds__make_hlds__state_var__ProcDef_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 455 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ProcDef_17, 0) = ((MR_Box) (hlds__make_hlds__state_var__ItemClauses_12));
#line 455 "state_var.m"
        }
#line 456 "state_var.m"
        {
#line 456 "state_var.m"
          MR_Word base;
#line 456 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 456 "state_var.m"
          *hlds__make_hlds__state_var__IM_4 = base;
#line 456 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__PredOrFunc_5));
#line 456 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Method_6));
#line 456 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__ProcDef_17));
#line 456 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__state_var__Arity_16));
#line 456 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_9));
#line 456 "state_var.m"
        }
#line 446 "state_var.m"
      }
#line 445 "state_var.m"
    else
#line 444 "state_var.m"
      *hlds__make_hlds__state_var__IM_4 = hlds__make_hlds__state_var__IM0_3;
#line 440 "state_var.m"
  }
#line 437 "state_var.m"
}

#line 383 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
#line 383 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_6,
#line 383 "state_var.m"
  MR_Word hlds__make_hlds__state_var__NameSource_7,
#line 383 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__Var_8,
#line 383 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13,
#line 383 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14)
#line 383 "state_var.m"
{
#line 386 "state_var.m"
  {
#line 386 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 386 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 386 "state_var.m"
    MR_String hlds__make_hlds__state_var__SVarName_10;

#line 387 "state_var.m"
    {
#line 387 "state_var.m"
      hlds__make_hlds__state_var__SVarName_10 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__StateVar_6);
    }
#line 392 "state_var.m"
#line 392 "state_var.m"
    switch (hlds__make_hlds__state_var__NameSource_7) {
#line 392 "state_var.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 392 "state_var.m"
      case (MR_Integer) 2:
#line 397 "state_var.m"
        {
#line 397 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarName_30;
#line 397 "state_var.m"
          MR_String hlds__make_hlds__state_var__V_50_50;

#line 398 "state_var.m"
          {
#line 398 "state_var.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_4[3], hlds__make_hlds__state_var__SVarName_10, &hlds__make_hlds__state_var__V_50_50);
          }
#line 398 "state_var.m"
          {
#line 398 "state_var.m"
            hlds__make_hlds__state_var__ProgVarName_30 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_50_50);
          }
#line 399 "state_var.m"
          {
#line 399 "state_var.m"
            mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarName_30, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
#line 399 "state_var.m"
            return;
          }
#line 397 "state_var.m"
        }
#line 392 "state_var.m"
        break;
#line 392 "state_var.m"
      case (MR_Integer) 0:
#line 389 "state_var.m"
        {
#line 389 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarName_11;
#line 389 "state_var.m"
          MR_String hlds__make_hlds__state_var__V_41_41;
#line 389 "state_var.m"
          MR_String hlds__make_hlds__state_var__V_48_48;

#line 390 "state_var.m"
          {
#line 390 "state_var.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_4[3], hlds__make_hlds__state_var__SVarName_10, &hlds__make_hlds__state_var__V_41_41);
          }
#line 390 "state_var.m"
          {
#line 390 "state_var.m"
            hlds__make_hlds__state_var__V_48_48 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__V_41_41, (MR_String) "_0");
          }
#line 390 "state_var.m"
          {
#line 390 "state_var.m"
            hlds__make_hlds__state_var__ProgVarName_11 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_48_48);
          }
#line 391 "state_var.m"
          {
#line 391 "state_var.m"
            mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarName_11, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
#line 391 "state_var.m"
            return;
          }
#line 389 "state_var.m"
        }
#line 392 "state_var.m"
        break;
#line 392 "state_var.m"
      case (MR_Integer) 1:
#line 393 "state_var.m"
        {
#line 393 "state_var.m"
          MR_String hlds__make_hlds__state_var__ProgVarBaseName_12;
#line 393 "state_var.m"
          MR_String hlds__make_hlds__state_var__V_32_32;

#line 394 "state_var.m"
          {
#line 394 "state_var.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_4[3], hlds__make_hlds__state_var__SVarName_10, &hlds__make_hlds__state_var__V_32_32);
          }
#line 394 "state_var.m"
          {
#line 394 "state_var.m"
            hlds__make_hlds__state_var__ProgVarBaseName_12 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__V_32_32);
          }
#line 395 "state_var.m"
          {
#line 395 "state_var.m"
            mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarBaseName_12, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
#line 395 "state_var.m"
            return;
          }
#line 393 "state_var.m"
        }
#line 392 "state_var.m"
        break;
#line 392 "state_var.m"
    }
#line 386 "state_var.m"
  }
#line 383 "state_var.m"
}

#line 282 "state_var.m"
void MR_CALL 
hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(
#line 282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__Context_9,
#line 282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__StateVar_10,
#line 282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23,
#line 282 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24,
#line 282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25,
#line 282 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_26,
#line 282 "state_var.m"
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27,
#line 282 "state_var.m"
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28)
#line 282 "state_var.m"
{
#line 2047 "state_var.m"
  {
#line 2047 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 2047 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_14;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_15;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_16;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_17;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_18;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_32_32;
#line 2047 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_33_33;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_35_35;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_40_40;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_43_43;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_44_44;
#line 2047 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_45_45;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_47_47;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_50_50;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_51_51;
#line 2047 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_52_52;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_58_58;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_59_59;
#line 2047 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_63_63;
#line 2066 "state_var.m"
    MR_Word hlds__make_hlds__state_var__OldStatus_19;
#line 2066 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_OldStatus_19;

#line 2048 "state_var.m"
    {
#line 2048 "state_var.m"
      hlds__make_hlds__state_var__Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_10);
    }
#line 2049 "state_var.m"
    {
#line 2049 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_14);
    }
#line 2049 "state_var.m"
    {
#line 2049 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 2049 "state_var.m"
    }
#line 2051 "state_var.m"
    {
#line 2051 "state_var.m"
      hlds__make_hlds__state_var__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_14);
    }
#line 2051 "state_var.m"
    {
#line 2051 "state_var.m"
      hlds__make_hlds__state_var__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_45_45));
#line 2051 "state_var.m"
    }
#line 2052 "state_var.m"
    {
#line 2052 "state_var.m"
      hlds__make_hlds__state_var__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_14);
    }
#line 2052 "state_var.m"
    {
#line 2052 "state_var.m"
      hlds__make_hlds__state_var__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_52_52));
#line 2052 "state_var.m"
    }
#line 2052 "state_var.m"
    {
#line 2052 "state_var.m"
      hlds__make_hlds__state_var__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_51_51));
#line 2052 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[44])));
#line 2052 "state_var.m"
    }
#line 2052 "state_var.m"
    {
#line 2052 "state_var.m"
      hlds__make_hlds__state_var__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[39])));
#line 2052 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_50_50));
#line 2052 "state_var.m"
    }
#line 2051 "state_var.m"
    {
#line 2051 "state_var.m"
      hlds__make_hlds__state_var__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_44_44));
#line 2051 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_47_47));
#line 2051 "state_var.m"
    }
#line 2051 "state_var.m"
    {
#line 2051 "state_var.m"
      hlds__make_hlds__state_var__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[38])));
#line 2051 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_43_43));
#line 2051 "state_var.m"
    }
#line 2050 "state_var.m"
    {
#line 2050 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2050 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_40_40));
#line 2050 "state_var.m"
    }
#line 2050 "state_var.m"
    {
#line 2050 "state_var.m"
      hlds__make_hlds__state_var__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[42])));
#line 2050 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 2050 "state_var.m"
    }
#line 2049 "state_var.m"
    {
#line 2049 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 2049 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_35_35));
#line 2049 "state_var.m"
    }
#line 2049 "state_var.m"
    {
#line 2049 "state_var.m"
      hlds__make_hlds__state_var__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[36])));
#line 2049 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 2049 "state_var.m"
    }
#line 2053 "state_var.m"
    {
#line 2053 "state_var.m"
      hlds__make_hlds__state_var__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2053 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_15));
#line 2053 "state_var.m"
    }
#line 2053 "state_var.m"
    {
#line 2053 "state_var.m"
      hlds__make_hlds__state_var__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_59_59));
#line 2053 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2053 "state_var.m"
    }
#line 2053 "state_var.m"
    {
#line 2053 "state_var.m"
      hlds__make_hlds__state_var__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2053 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_9));
#line 2053 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_58_58));
#line 2053 "state_var.m"
    }
#line 2054 "state_var.m"
    {
#line 2054 "state_var.m"
      hlds__make_hlds__state_var__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2054 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_16));
#line 2054 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2054 "state_var.m"
    }
#line 2054 "state_var.m"
    {
#line 2054 "state_var.m"
      hlds__make_hlds__state_var__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2054 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2054 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2054 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_63_63));
#line 2054 "state_var.m"
    }
#line 2055 "state_var.m"
    {
#line 2055 "state_var.m"
      MR_Word base;
#line 2055 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = base;
#line 2055 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_17));
#line 2055 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27));
#line 2055 "state_var.m"
    }
#line 2056 "state_var.m"
    hlds__make_hlds__state_var__StatusMap0_18 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 2066 "state_var.m"
    {
#line 2066 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_18, ((MR_Box) (hlds__make_hlds__state_var__StateVar_10)), &hlds__make_hlds__state_var__conv0_OldStatus_19);
    }
#line 2066 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 2066 "state_var.m"
      {
#line 2066 "state_var.m"
        hlds__make_hlds__state_var__OldStatus_19 = ((MR_Word) hlds__make_hlds__state_var__conv0_OldStatus_19);
#line 2066 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 2066 "state_var.m"
      }
#line 2066 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 2066 "state_var.m"
      {
#line 2067 "state_var.m"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__OldStatus_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2067 "state_var.m"
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
#line 2066 "state_var.m"
      }
#line 2071 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 2070 "state_var.m"
      {
#line 2070 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 2070 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 2070 "state_var.m"
      }
#line 2071 "state_var.m"
    else
#line 2072 "state_var.m"
      {
#line 2072 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Var_20;
#line 2072 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Status_21;
#line 2072 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap_22;

#line 2072 "state_var.m"
        {
#line 2072 "state_var.m"
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_10, (MR_Integer) 0, &hlds__make_hlds__state_var__Var_20, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
        }
#line 2073 "state_var.m"
        {
#line 2073 "state_var.m"
          hlds__make_hlds__state_var__Status_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2073 "state_var.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2073 "state_var.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
#line 2073 "state_var.m"
        }
#line 2074 "state_var.m"
        {
#line 2074 "state_var.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_10)), ((MR_Box) (hlds__make_hlds__state_var__Status_21)), hlds__make_hlds__state_var__StatusMap0_18, &hlds__make_hlds__state_var__StatusMap_22);
        }
#line 2075 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_22;
#line 2072 "state_var.m"
      }
#line 2047 "state_var.m"
  }
#line 282 "state_var.m"
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
#line 1951 "state_var.m"
  {
#line 1951 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1951 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_19_19;
#line 1951 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_20_20;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_22_22;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_27_27;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1951 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_32_32;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 1951 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_39_39;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_47_47;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_48_48;
#line 1951 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_52_52;

#line 1952 "state_var.m"
    {
#line 1952 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1953 "state_var.m"
    {
#line 1953 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_10);
    }
#line 1953 "state_var.m"
    {
#line 1953 "state_var.m"
      hlds__make_hlds__state_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1953 "state_var.m"
    }
#line 1955 "state_var.m"
    {
#line 1955 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
#line 1955 "state_var.m"
    {
#line 1955 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1955 "state_var.m"
    }
#line 1956 "state_var.m"
    {
#line 1956 "state_var.m"
      hlds__make_hlds__state_var__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_10);
    }
#line 1956 "state_var.m"
    {
#line 1956 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_39_39));
#line 1956 "state_var.m"
    }
#line 1956 "state_var.m"
    {
#line 1956 "state_var.m"
      hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 1956 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1956 "state_var.m"
    }
#line 1956 "state_var.m"
    {
#line 1956 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[39])));
#line 1956 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_37_37));
#line 1956 "state_var.m"
    }
#line 1955 "state_var.m"
    {
#line 1955 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1955 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 1955 "state_var.m"
    }
#line 1955 "state_var.m"
    {
#line 1955 "state_var.m"
      hlds__make_hlds__state_var__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[41])));
#line 1955 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_30_30));
#line 1955 "state_var.m"
    }
#line 1954 "state_var.m"
    {
#line 1954 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1954 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_27_27));
#line 1954 "state_var.m"
    }
#line 1954 "state_var.m"
    {
#line 1954 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[40])));
#line 1954 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_25_25));
#line 1954 "state_var.m"
    }
#line 1953 "state_var.m"
    {
#line 1953 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_19_19));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1953 "state_var.m"
    }
#line 1953 "state_var.m"
    {
#line 1953 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[36])));
#line 1953 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1953 "state_var.m"
    }
#line 1957 "state_var.m"
    {
#line 1957 "state_var.m"
      hlds__make_hlds__state_var__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1957 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1957 "state_var.m"
    }
#line 1957 "state_var.m"
    {
#line 1957 "state_var.m"
      hlds__make_hlds__state_var__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_48_48));
#line 1957 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1957 "state_var.m"
    }
#line 1957 "state_var.m"
    {
#line 1957 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1957 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1957 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_47_47));
#line 1957 "state_var.m"
    }
#line 1958 "state_var.m"
    {
#line 1958 "state_var.m"
      hlds__make_hlds__state_var__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1958 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1958 "state_var.m"
    }
#line 1958 "state_var.m"
    {
#line 1958 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1958 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1958 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1958 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_52_52));
#line 1958 "state_var.m"
    }
#line 1959 "state_var.m"
    {
#line 1959 "state_var.m"
      MR_Word base;
#line 1959 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1959 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1959 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1959 "state_var.m"
    }
#line 1951 "state_var.m"
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
#line 1939 "state_var.m"
  {
#line 1939 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1939 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_10;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces_11;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg_12;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_13;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_18_18;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_19_19;
#line 1939 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_20_20;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_22_22;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_27_27;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1939 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_32_32;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_34_34;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_38_38;
#line 1939 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_39_39;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_47_47;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_48_48;
#line 1939 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_52_52;

#line 1940 "state_var.m"
    {
#line 1940 "state_var.m"
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
#line 1941 "state_var.m"
    {
#line 1941 "state_var.m"
      hlds__make_hlds__state_var__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_10);
    }
#line 1941 "state_var.m"
    {
#line 1941 "state_var.m"
      hlds__make_hlds__state_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_20_20));
#line 1941 "state_var.m"
    }
#line 1943 "state_var.m"
    {
#line 1943 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
#line 1943 "state_var.m"
    {
#line 1943 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1943 "state_var.m"
    }
#line 1944 "state_var.m"
    {
#line 1944 "state_var.m"
      hlds__make_hlds__state_var__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_10);
    }
#line 1944 "state_var.m"
    {
#line 1944 "state_var.m"
      hlds__make_hlds__state_var__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1944 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_39_39));
#line 1944 "state_var.m"
    }
#line 1944 "state_var.m"
    {
#line 1944 "state_var.m"
      hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1944 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_38_38));
#line 1944 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1944 "state_var.m"
    }
#line 1944 "state_var.m"
    {
#line 1944 "state_var.m"
      hlds__make_hlds__state_var__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1944 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[39])));
#line 1944 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_37_37));
#line 1944 "state_var.m"
    }
#line 1943 "state_var.m"
    {
#line 1943 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1943 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_34_34));
#line 1943 "state_var.m"
    }
#line 1943 "state_var.m"
    {
#line 1943 "state_var.m"
      hlds__make_hlds__state_var__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[38])));
#line 1943 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_30_30));
#line 1943 "state_var.m"
    }
#line 1942 "state_var.m"
    {
#line 1942 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1942 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_27_27));
#line 1942 "state_var.m"
    }
#line 1942 "state_var.m"
    {
#line 1942 "state_var.m"
      hlds__make_hlds__state_var__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[37])));
#line 1942 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_25_25));
#line 1942 "state_var.m"
    }
#line 1941 "state_var.m"
    {
#line 1941 "state_var.m"
      hlds__make_hlds__state_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_19_19));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_22_22));
#line 1941 "state_var.m"
    }
#line 1941 "state_var.m"
    {
#line 1941 "state_var.m"
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[36])));
#line 1941 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_18_18));
#line 1941 "state_var.m"
    }
#line 1945 "state_var.m"
    {
#line 1945 "state_var.m"
      hlds__make_hlds__state_var__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1945 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
#line 1945 "state_var.m"
    }
#line 1945 "state_var.m"
    {
#line 1945 "state_var.m"
      hlds__make_hlds__state_var__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1945 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_48_48));
#line 1945 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1945 "state_var.m"
    }
#line 1945 "state_var.m"
    {
#line 1945 "state_var.m"
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1945 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
#line 1945 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_47_47));
#line 1945 "state_var.m"
    }
#line 1946 "state_var.m"
    {
#line 1946 "state_var.m"
      hlds__make_hlds__state_var__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
#line 1946 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1946 "state_var.m"
    }
#line 1946 "state_var.m"
    {
#line 1946 "state_var.m"
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1946 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1946 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1946 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_52_52));
#line 1946 "state_var.m"
    }
#line 1947 "state_var.m"
    {
#line 1947 "state_var.m"
      MR_Word base;
#line 1947 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1947 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
#line 1947 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
#line 1947 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
#line 1947 "state_var.m"
    }
#line 1939 "state_var.m"
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
#line 1921 "state_var.m"
  {
#line 1921 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1921 "state_var.m"
    MR_String hlds__make_hlds__state_var__Name_14;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces1_15;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg1_16;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Pieces2_17;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Msg2_18;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Spec_19;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_24_24;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1921 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_26_26;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_31_31;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_32_32;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_36_36;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_39_39;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_40_40;
#line 1921 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_41_41;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_49_49;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_50_50;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_54_54;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_57_57;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_58_58;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_65_65;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_66_66;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_70_70;
#line 1921 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_71_71;

#line 1922 "state_var.m"
    {
#line 1922 "state_var.m"
      hlds__make_hlds__state_var__Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_11, hlds__make_hlds__state_var__StateVar_12);
    }
#line 1923 "state_var.m"
    {
#line 1923 "state_var.m"
      hlds__make_hlds__state_var__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_14);
    }
#line 1923 "state_var.m"
    {
#line 1923 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_26_26));
#line 1923 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__state_var__RO_Construct_9));
#line 1924 "state_var.m"
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_14);
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_41_41));
#line 1925 "state_var.m"
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_40_40));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1925 "state_var.m"
    }
#line 1925 "state_var.m"
    {
#line 1925 "state_var.m"
      hlds__make_hlds__state_var__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[33])));
#line 1925 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_39_39));
#line 1925 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[32])));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_36_36));
#line 1924 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_32_32));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 1924 "state_var.m"
    }
#line 1924 "state_var.m"
    {
#line 1924 "state_var.m"
      hlds__make_hlds__state_var__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[31])));
#line 1924 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_31_31));
#line 1924 "state_var.m"
    }
#line 1923 "state_var.m"
    {
#line 1923 "state_var.m"
      hlds__make_hlds__state_var__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_25_25));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_28_28));
#line 1923 "state_var.m"
    }
#line 1923 "state_var.m"
    {
#line 1923 "state_var.m"
      hlds__make_hlds__state_var__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[30])));
#line 1923 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces1_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_24_24));
#line 1923 "state_var.m"
    }
#line 1926 "state_var.m"
    {
#line 1926 "state_var.m"
      hlds__make_hlds__state_var__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces1_15));
#line 1926 "state_var.m"
    }
#line 1926 "state_var.m"
    {
#line 1926 "state_var.m"
      hlds__make_hlds__state_var__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_50_50));
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1926 "state_var.m"
    }
#line 1926 "state_var.m"
    {
#line 1926 "state_var.m"
      hlds__make_hlds__state_var__Msg1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg1_16, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_8));
#line 1926 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg1_16, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_49_49));
#line 1926 "state_var.m"
    }
#line 1928 "state_var.m"
    {
#line 1928 "state_var.m"
      hlds__make_hlds__state_var__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "state_var.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_14));
#line 1928 "state_var.m"
    }
#line 1928 "state_var.m"
    {
#line 1928 "state_var.m"
      hlds__make_hlds__state_var__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_58_58));
#line 1928 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[11])));
#line 1928 "state_var.m"
    }
#line 1928 "state_var.m"
    {
#line 1928 "state_var.m"
      hlds__make_hlds__state_var__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
#line 1928 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_57_57));
#line 1928 "state_var.m"
    }
#line 1927 "state_var.m"
    {
#line 1927 "state_var.m"
      hlds__make_hlds__state_var__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[34])));
#line 1927 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces2_17, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_54_54));
#line 1927 "state_var.m"
    }
#line 1929 "state_var.m"
    {
#line 1929 "state_var.m"
      hlds__make_hlds__state_var__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1929 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces2_17));
#line 1929 "state_var.m"
    }
#line 1929 "state_var.m"
    {
#line 1929 "state_var.m"
      hlds__make_hlds__state_var__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_66_66));
#line 1929 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1929 "state_var.m"
    }
#line 1929 "state_var.m"
    {
#line 1929 "state_var.m"
      hlds__make_hlds__state_var__Msg2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1929 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg2_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__RO_Context_10));
#line 1929 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg2_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 1929 "state_var.m"
    }
#line 1930 "state_var.m"
    {
#line 1930 "state_var.m"
      hlds__make_hlds__state_var__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg2_18));
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1930 "state_var.m"
    }
#line 1930 "state_var.m"
    {
#line 1930 "state_var.m"
      hlds__make_hlds__state_var__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg1_16));
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_71_71));
#line 1930 "state_var.m"
    }
#line 1930 "state_var.m"
    {
#line 1930 "state_var.m"
      hlds__make_hlds__state_var__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1930 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_70_70));
#line 1930 "state_var.m"
    }
#line 1931 "state_var.m"
    {
#line 1931 "state_var.m"
      MR_Word base;
#line 1931 "state_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_21 = base;
#line 1931 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_19));
#line 1931 "state_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_20));
#line 1931 "state_var.m"
    }
#line 1921 "state_var.m"
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
#line 1908 "state_var.m"
  while (MR_TRUE)
#line 1908 "state_var.m"
    {
#line 1908 "state_var.m"
      /* tailcall optimized into a loop */
#line 1908 "state_var.m"
      {
#line 1908 "state_var.m"
        MR_bool hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1908 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Arg_3;
#line 1908 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Args_4;
#line 1911 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar0_6;
#line 1909 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_9_9;
#line 1909 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_10_10;
#line 1909 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_11_11;
#line 1909 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_12_12;
#line 1909 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_13_13;
#line 1909 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_8_8;
#line 1909 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_7_7;

#line 1908 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1908 "state_var.m"
          {
#line 1908 "state_var.m"
            hlds__make_hlds__state_var__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1908 "state_var.m"
            hlds__make_hlds__state_var__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1909 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg_3)) == (MR_mktag((MR_Integer) 0)));
#line 1909 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1909 "state_var.m"
              {
#line 1909 "state_var.m"
                hlds__make_hlds__state_var__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg_3, (MR_Integer) 0)));
#line 1909 "state_var.m"
                hlds__make_hlds__state_var__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg_3, (MR_Integer) 1)));
#line 1909 "state_var.m"
                hlds__make_hlds__state_var__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg_3, (MR_Integer) 2)));
#line 1909 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 1909 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1909 "state_var.m"
                  {
#line 1909 "state_var.m"
                    hlds__make_hlds__state_var__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_9_9, (MR_Integer) 0)));
#line 1909 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_10_10, (MR_String) "!") == 0);
#line 1909 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1909 "state_var.m"
                      {
#line 1909 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1909 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1909 "state_var.m"
                          {
#line 1909 "state_var.m"
                            hlds__make_hlds__state_var__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 0)));
#line 1909 "state_var.m"
                            hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 1)));
#line 1909 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1909 "state_var.m"
                            if (hlds__make_hlds__state_var__succeeded)
#line 1909 "state_var.m"
                              {
#line 1909 "state_var.m"
                                hlds__make_hlds__state_var__StateVar0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 0)));
#line 1909 "state_var.m"
                                hlds__make_hlds__state_var__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 1)));
#line 1909 "state_var.m"
                                hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1909 "state_var.m"
                              }
#line 1909 "state_var.m"
                          }
#line 1909 "state_var.m"
                      }
#line 1909 "state_var.m"
                  }
#line 1909 "state_var.m"
              }
#line 1911 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1910 "state_var.m"
              {
#line 1910 "state_var.m"
                *hlds__make_hlds__state_var__StateVar_5 = hlds__make_hlds__state_var__StateVar0_6;
#line 1910 "state_var.m"
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1910 "state_var.m"
              }
#line 1911 "state_var.m"
            else
#line 1912 "state_var.m"
              {
#line 1912 "state_var.m"
                /* direct tailcall eliminated */
#line 1912 "state_var.m"
                {
#line 1912 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1 = hlds__make_hlds__state_var__Args_4;

#line 1912 "state_var.m"
                  hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__HeadVar__1__tmp_copy_1;
#line 1912 "state_var.m"
                }
#line 1912 "state_var.m"
                continue;
#line 1912 "state_var.m"
              }
#line 1908 "state_var.m"
          }
#line 1908 "state_var.m"
        return hlds__make_hlds__state_var__succeeded;
#line 1908 "state_var.m"
      }
#line 1908 "state_var.m"
      break;
#line 1908 "state_var.m"
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
#line 1905 "state_var.m"
  {
#line 1905 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__HeadVar__1_1 == (MR_Integer) 1);
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_14_14;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_18_18;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_8_8;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_9_9;
#line 1905 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_10_10;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_11_11;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_12_12;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_13_13;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_15_15;
#line 1905 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_16_16;
#line 1906 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_V_8_8;
#line 1906 "state_var.m"
    MR_Word hlds__make_hlds__state_var___Ctxt_7;
#line 1906 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_6_6;

#line 1905 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1905 "state_var.m"
      {
#line 1906 "state_var.m"
        hlds__make_hlds__state_var__V_10_10 = (MR_String) "!";
#line 1906 "state_var.m"
        hlds__make_hlds__state_var__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12794 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeInfo_14_14 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[4];
#line 1906 "state_var.m"
        hlds__make_hlds__state_var__V_9_9 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_4[2];
#line 1906 "state_var.m"
        {
#line 1906 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__list__last_2_p_0(hlds__make_hlds__state_var__TypeInfo_14_14, hlds__make_hlds__state_var__Args_4, &hlds__make_hlds__state_var__conv0_V_8_8);
        }
#line 1906 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1906 "state_var.m"
          {
#line 1906 "state_var.m"
            hlds__make_hlds__state_var__V_8_8 = ((MR_Word) hlds__make_hlds__state_var__conv0_V_8_8);
#line 1906 "state_var.m"
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1906 "state_var.m"
          }
#line 1905 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1905 "state_var.m"
          {
#line 1906 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 1906 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1906 "state_var.m"
              {
#line 1906 "state_var.m"
                hlds__make_hlds__state_var__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, (MR_Integer) 0)));
#line 1906 "state_var.m"
                hlds__make_hlds__state_var__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, (MR_Integer) 1)));
#line 1906 "state_var.m"
                hlds__make_hlds__state_var___Ctxt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_8_8, (MR_Integer) 2)));
#line 1906 "state_var.m"
                {
#line 1906 "state_var.m"
                  hlds__make_hlds__state_var__succeeded = mercury__term____Unify____const_0_0(hlds__make_hlds__state_var__V_9_9, hlds__make_hlds__state_var__V_15_15);
                }
#line 1905 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1905 "state_var.m"
                  {
#line 1906 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1906 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1906 "state_var.m"
                      {
#line 1906 "state_var.m"
                        hlds__make_hlds__state_var__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 0)));
#line 1906 "state_var.m"
                        hlds__make_hlds__state_var__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_11_11, (MR_Integer) 1)));
#line 12848 "hlds.make_hlds.state_var.c"
                        hlds__make_hlds__state_var__TypeInfo_18_18 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[6];
#line 1906 "state_var.m"
                        {
#line 1906 "state_var.m"
                          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_18_18, ((MR_Box) (hlds__make_hlds__state_var__V_13_13)), ((MR_Box) (hlds__make_hlds__state_var__V_16_16)));
                        }
#line 1905 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1905 "state_var.m"
                          {
#line 1906 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1906 "state_var.m"
                            if (hlds__make_hlds__state_var__succeeded)
#line 1906 "state_var.m"
                              {
#line 1906 "state_var.m"
                                *hlds__make_hlds__state_var__StateVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 0)));
#line 1906 "state_var.m"
                                hlds__make_hlds__state_var__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_12_12, (MR_Integer) 1)));
#line 1906 "state_var.m"
                              }
#line 1905 "state_var.m"
                          }
#line 1906 "state_var.m"
                      }
#line 1905 "state_var.m"
                  }
#line 1906 "state_var.m"
              }
#line 1905 "state_var.m"
          }
#line 1905 "state_var.m"
      }
#line 1905 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1905 "state_var.m"
  }
#line 259 "state_var.m"
}

#line 1840 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1840 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1840 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
#line 1840 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
#line 1840 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6)
#line 1840 "state_var.m"
{
#line 1840 "state_var.m"
  {
#line 1840 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 1840 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv3_Goal_10;
#line 1840 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22;
#line 1840 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24;

#line 1840 "state_var.m"
    {
#line 1840 "state_var.m"
      hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv3_Goal_10, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_5), &hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24);
    }
#line 1840 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv3_Goal_10));
#line 1840 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22));
#line 1840 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24));
#line 1840 "state_var.m"
  }
#line 1840 "state_var.m"
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
#line 1831 "state_var.m"
  {
#line 1831 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1831 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_5, (MR_Integer) 0)));
#line 1831 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_5, (MR_Integer) 1)));
#line 1847 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Conjuncts0_10;
#line 1835 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;

#line 1835 "state_var.m"
    hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1835 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1835 "state_var.m"
      {
#line 1835 "state_var.m"
        hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 1)));
#line 1835 "state_var.m"
        hlds__make_hlds__state_var__Conjuncts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 2)));
#line 1835 "state_var.m"
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_20_20 == (MR_Integer) 0);
#line 1835 "state_var.m"
      }
#line 1847 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1836 "state_var.m"
      {
#line 1836 "state_var.m"
        MR_Word hlds__make_hlds__state_var__NextGoalId0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 0)));
#line 1836 "state_var.m"
        MR_Word hlds__make_hlds__state_var__DelayedRenamingMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 1)));
#line 1836 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Specs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 2)));
#line 1836 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_14;
#line 1844 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalDelayedRenaming_15;
#line 1838 "state_var.m"
        MR_Box hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15;

#line 1837 "state_var.m"
        {
#line 1837 "state_var.m"
          hlds__make_hlds__state_var__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo_9);
        }
#line 1838 "state_var.m"
        {
#line 1838 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap0_12, ((MR_Box) (hlds__make_hlds__state_var__GoalId_14)), &hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
        }
#line 1838 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1838 "state_var.m"
          {
#line 1838 "state_var.m"
            hlds__make_hlds__state_var__GoalDelayedRenaming_15 = ((MR_Word) hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
#line 1838 "state_var.m"
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1838 "state_var.m"
          }
#line 1844 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1842 "state_var.m"
          {
#line 1842 "state_var.m"
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_32_32;
#line 1842 "state_var.m"
            MR_Word hlds__make_hlds__state_var__NextGoalId_16;
#line 1842 "state_var.m"
            MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_17;
#line 1842 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_21_21;
#line 1839 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv5_NextGoalId_16;
#line 1839 "state_var.m"
            MR_Box hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17;

#line 1840 "state_var.m"
            {
#line 1840 "state_var.m"
              hlds__make_hlds__state_var__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1840 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
#line 1840 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1));
#line 1840 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1840 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__state_var__GoalDelayedRenaming_15));
#line 1840 "state_var.m"
            }
#line 13044 "hlds.make_hlds.state_var.c"
            hlds__make_hlds__state_var__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1839 "state_var.m"
            {
#line 1839 "state_var.m"
              mercury__list__map_foldl2_7_p_0(hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_32_32, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], hlds__make_hlds__state_var__V_21_21, hlds__make_hlds__state_var__Conjuncts0_10, hlds__make_hlds__state_var__Conjuncts_6, ((MR_Box) (hlds__make_hlds__state_var__NextGoalId0_11)), &hlds__make_hlds__state_var__conv5_NextGoalId_16, ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap0_12)), &hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17);
            }
#line 1839 "state_var.m"
            hlds__make_hlds__state_var__NextGoalId_16 = ((MR_Word) hlds__make_hlds__state_var__conv5_NextGoalId_16);
#line 1839 "state_var.m"
            hlds__make_hlds__state_var__DelayedRenamingMap_17 = ((MR_Word) hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17);
#line 1843 "state_var.m"
            {
#line 1843 "state_var.m"
              MR_Word base;
#line 1843 "state_var.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1843 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = base;
#line 1843 "state_var.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_16));
#line 1843 "state_var.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_17));
#line 1843 "state_var.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_13));
#line 1843 "state_var.m"
            }
#line 1842 "state_var.m"
          }
#line 1844 "state_var.m"
        else
#line 1845 "state_var.m"
          {
#line 1845 "state_var.m"
            *hlds__make_hlds__state_var__Conjuncts_6 = hlds__make_hlds__state_var__Conjuncts0_10;
#line 1845 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18;
#line 1845 "state_var.m"
          }
#line 1836 "state_var.m"
      }
#line 1847 "state_var.m"
    else
#line 1848 "state_var.m"
      {
#line 1848 "state_var.m"
        {
#line 1848 "state_var.m"
          MR_Word base;
#line 1848 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "state_var.m"
          *hlds__make_hlds__state_var__Conjuncts_6 = base;
#line 1848 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_5));
#line 1848 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1848 "state_var.m"
        }
#line 1848 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18;
#line 1848 "state_var.m"
      }
#line 1831 "state_var.m"
  }
#line 252 "state_var.m"
}

#line 1825 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
#line 1825 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 1825 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 1825 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
#line 1825 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
#line 1825 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4)
#line 1825 "state_var.m"
{
#line 1825 "state_var.m"
  {
#line 1825 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 1825 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv1_Conjuncts_6;
#line 1825 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19;

#line 1825 "state_var.m"
    {
#line 1825 "state_var.m"
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv1_Conjuncts_6, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19);
    }
#line 1825 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv1_Conjuncts_6));
#line 1825 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19));
#line 1825 "state_var.m"
  }
#line 1825 "state_var.m"
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
#line 1824 "state_var.m"
  {
#line 1824 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1824 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1824 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalConjuncts_10;
#line 1824 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Conjuncts_11;
#line 1824 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr_12;
#line 1824 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo_13;
#line 1825 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15;

#line 1825 "state_var.m"
    {
#line 1825 "state_var.m"
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__state_var__TypeCtorInfo_23_23, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[3], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[6], hlds__make_hlds__state_var__Goals_7, &hlds__make_hlds__state_var__GoalConjuncts_10, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_14)), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15);
    }
#line 1825 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Store_15 = ((MR_Word) hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15);
#line 1826 "state_var.m"
    {
#line 1826 "state_var.m"
      mercury__list__condense_2_p_0(hlds__make_hlds__state_var__TypeCtorInfo_23_23, hlds__make_hlds__state_var__GoalConjuncts_10, &hlds__make_hlds__state_var__Conjuncts_11);
    }
#line 1827 "state_var.m"
    {
#line 1827 "state_var.m"
      hlds__make_hlds__state_var__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1827 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1827 "state_var.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 2) = ((MR_Box) (hlds__make_hlds__state_var__Conjuncts_11));
#line 1827 "state_var.m"
    }
#line 1828 "state_var.m"
    {
#line 1828 "state_var.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__state_var__Context_6, &hlds__make_hlds__state_var__GoalInfo_13);
    }
#line 1829 "state_var.m"
    {
#line 1829 "state_var.m"
      MR_Word base;
#line 1829 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1829 "state_var.m"
      *hlds__make_hlds__state_var__Goal_8 = base;
#line 1829 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr_12));
#line 1829 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_13));
#line 1829 "state_var.m"
    }
#line 1824 "state_var.m"
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
#line 1733 "state_var.m"
  {
#line 1733 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1733 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_16 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1766 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Status_17;
#line 1735 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_Status_17;

#line 1735 "state_var.m"
    {
#line 1735 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_16, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), &hlds__make_hlds__state_var__conv0_Status_17);
    }
#line 1735 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1735 "state_var.m"
      {
#line 1735 "state_var.m"
        hlds__make_hlds__state_var__Status_17 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_17);
#line 1735 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1735 "state_var.m"
      }
#line 1766 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1742 "state_var.m"
#line 1742 "state_var.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) {
#line 1742 "state_var.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1742 "state_var.m"
        case (MR_Integer) 0:
#line 1737 "state_var.m"
          {
#line 1737 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_18;
#line 1737 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_41_41;

#line 1738 "state_var.m"
            {
#line 1738 "state_var.m"
              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_11, (MR_Integer) 1, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
            }
#line 1739 "state_var.m"
            {
#line 1739 "state_var.m"
              hlds__make_hlds__state_var__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1739 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_41_41, 0) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1739 "state_var.m"
            }
#line 1739 "state_var.m"
            {
#line 1739 "state_var.m"
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_41_41)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_18);
            }
#line 1741 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_18;
#line 1737 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1737 "state_var.m"
          }
#line 1742 "state_var.m"
          break;
#line 1742 "state_var.m"
        case (MR_Integer) 1:
#line 1764 "state_var.m"
          {
#line 1764 "state_var.m"
            *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1764 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
#line 1764 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1764 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1764 "state_var.m"
          }
#line 1742 "state_var.m"
          break;
#line 1742 "state_var.m"
        case (MR_Integer) 2:
#line 1749 "state_var.m"
          {
#line 1749 "state_var.m"
            MR_Word hlds__make_hlds__state_var__RO_Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1749 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_33_33;
#line 1749 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_46;
#line 1749 "state_var.m"
            MR_Word hlds__make_hlds__state_var__OldVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));

#line 1754 "state_var.m"
            {
#line 1754 "state_var.m"
              hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(hlds__make_hlds__state_var__Context_10, (MR_String) "lambda expression", hlds__make_hlds__state_var__RO_Context_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29);
            }
#line 1757 "state_var.m"
            {
#line 1757 "state_var.m"
              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_11, (MR_Integer) 1, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
            }
#line 1758 "state_var.m"
            {
#line 1758 "state_var.m"
              hlds__make_hlds__state_var__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1758 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1758 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__state_var__OldVar_47));
#line 1758 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_33_33, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1758 "state_var.m"
            }
#line 1758 "state_var.m"
            {
#line 1758 "state_var.m"
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_33_33)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_46);
            }
#line 1760 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_46;
#line 1749 "state_var.m"
          }
#line 1742 "state_var.m"
          break;
#line 1742 "state_var.m"
        case (MR_Integer) 3:
#line 1742 "state_var.m"
#line 1742 "state_var.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)))) {
#line 1742 "state_var.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1742 "state_var.m"
            case (MR_Integer) 0:
#line 1743 "state_var.m"
              {
#line 1743 "state_var.m"
                MR_Word hlds__make_hlds__state_var__OldVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
#line 1743 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1743 "state_var.m"
                MR_Word hlds__make_hlds__state_var__StatusMap_45;

#line 1744 "state_var.m"
                {
#line 1744 "state_var.m"
                  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_11, (MR_Integer) 1, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
                }
#line 1745 "state_var.m"
                {
#line 1745 "state_var.m"
                  hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1745 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1745 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__state_var__OldVar_19));
#line 1745 "state_var.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1745 "state_var.m"
                }
#line 1745 "state_var.m"
                {
#line 1745 "state_var.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_37_37)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_45);
                }
#line 1747 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_45;
#line 1743 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1743 "state_var.m"
              }
#line 1742 "state_var.m"
              break;
#line 1742 "state_var.m"
            case (MR_Integer) 1:
#line 1762 "state_var.m"
              {
#line 1762 "state_var.m"
                MR_Word hlds__make_hlds__state_var___OldVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));

#line 1762 "state_var.m"
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1762 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
#line 1762 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1762 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
#line 1762 "state_var.m"
              }
#line 1742 "state_var.m"
              break;
#line 1742 "state_var.m"
          }
#line 1742 "state_var.m"
          break;
#line 1742 "state_var.m"
      }
#line 1766 "state_var.m"
    else
#line 1767 "state_var.m"
      {
#line 1767 "state_var.m"
        MR_String hlds__make_hlds__state_var__Name_66;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Pieces_67;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Msg_68;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Spec_69;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_72_72;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_73_73;
#line 1767 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_74_74;
#line 1767 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_76_76;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_83_83;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_84_84;
#line 1767 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_88_88;

#line 1968 "state_var.m"
        {
#line 1968 "state_var.m"
          hlds__make_hlds__state_var__Name_66 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
        }
#line 1969 "state_var.m"
        {
#line 1969 "state_var.m"
          hlds__make_hlds__state_var__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__make_hlds__state_var__Name_66);
        }
#line 1969 "state_var.m"
        {
#line 1969 "state_var.m"
          hlds__make_hlds__state_var__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__V_76_76);
        }
#line 1969 "state_var.m"
        {
#line 1969 "state_var.m"
          hlds__make_hlds__state_var__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "state_var.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 1969 "state_var.m"
        }
#line 1969 "state_var.m"
        {
#line 1969 "state_var.m"
          hlds__make_hlds__state_var__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_73_73));
#line 1969 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[13])));
#line 1969 "state_var.m"
        }
#line 1969 "state_var.m"
        {
#line 1969 "state_var.m"
          hlds__make_hlds__state_var__Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[29])));
#line 1969 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_67, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_72_72));
#line 1969 "state_var.m"
        }
#line 1971 "state_var.m"
        {
#line 1971 "state_var.m"
          hlds__make_hlds__state_var__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_67));
#line 1971 "state_var.m"
        }
#line 1971 "state_var.m"
        {
#line 1971 "state_var.m"
          hlds__make_hlds__state_var__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_84_84));
#line 1971 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1971 "state_var.m"
        }
#line 1971 "state_var.m"
        {
#line 1971 "state_var.m"
          hlds__make_hlds__state_var__Msg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_68, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_10));
#line 1971 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_68, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_83_83));
#line 1971 "state_var.m"
        }
#line 1972 "state_var.m"
        {
#line 1972 "state_var.m"
          hlds__make_hlds__state_var__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_68));
#line 1972 "state_var.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1972 "state_var.m"
        }
#line 1972 "state_var.m"
        {
#line 1972 "state_var.m"
          hlds__make_hlds__state_var__Spec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1972 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1972 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1972 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_88_88));
#line 1972 "state_var.m"
        }
#line 1973 "state_var.m"
        {
#line 1973 "state_var.m"
          MR_Word base;
#line 1973 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = base;
#line 1973 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_69));
#line 1973 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28));
#line 1973 "state_var.m"
        }
#line 1773 "state_var.m"
        *hlds__make_hlds__state_var__Var_12 = hlds__make_hlds__state_var__StateVar_11;
#line 1767 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
#line 1767 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
#line 1767 "state_var.m"
      }
#line 1733 "state_var.m"
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
#line 1700 "state_var.m"
  {
#line 1700 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1700 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_16 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1727 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Status_17;
#line 1702 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_Status_17;

#line 1702 "state_var.m"
    {
#line 1702 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_16, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), &hlds__make_hlds__state_var__conv0_Status_17);
    }
#line 1702 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1702 "state_var.m"
      {
#line 1702 "state_var.m"
        hlds__make_hlds__state_var__Status_17 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_17);
#line 1702 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1702 "state_var.m"
      }
#line 1727 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1712 "state_var.m"
#line 1712 "state_var.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) {
#line 1712 "state_var.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1712 "state_var.m"
        case (MR_Integer) 0:
#line 1704 "state_var.m"
          {
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_18;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1704 "state_var.m"
            MR_String hlds__make_hlds__state_var__Name_57;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Pieces_58;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Msg_59;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Spec_60;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_63_63;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_64_64;
#line 1704 "state_var.m"
            MR_String hlds__make_hlds__state_var__V_65_65;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_73_73;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_74_74;
#line 1704 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_78_78;

#line 1981 "state_var.m"
            {
#line 1981 "state_var.m"
              hlds__make_hlds__state_var__Name_57 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
            }
#line 1983 "state_var.m"
            {
#line 1983 "state_var.m"
              hlds__make_hlds__state_var__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_57);
            }
#line 1983 "state_var.m"
            {
#line 1983 "state_var.m"
              hlds__make_hlds__state_var__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "state_var.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_65_65));
#line 1983 "state_var.m"
            }
#line 1983 "state_var.m"
            {
#line 1983 "state_var.m"
              hlds__make_hlds__state_var__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_64_64));
#line 1983 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1983 "state_var.m"
            }
#line 1982 "state_var.m"
            {
#line 1982 "state_var.m"
              hlds__make_hlds__state_var__Pieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
#line 1982 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_58, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_63_63));
#line 1982 "state_var.m"
            }
#line 1984 "state_var.m"
            {
#line 1984 "state_var.m"
              hlds__make_hlds__state_var__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_58));
#line 1984 "state_var.m"
            }
#line 1984 "state_var.m"
            {
#line 1984 "state_var.m"
              hlds__make_hlds__state_var__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 1984 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1984 "state_var.m"
            }
#line 1984 "state_var.m"
            {
#line 1984 "state_var.m"
              hlds__make_hlds__state_var__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_10));
#line 1984 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_73_73));
#line 1984 "state_var.m"
            }
#line 1985 "state_var.m"
            {
#line 1985 "state_var.m"
              hlds__make_hlds__state_var__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_59));
#line 1985 "state_var.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1985 "state_var.m"
            }
#line 1985 "state_var.m"
            {
#line 1985 "state_var.m"
              hlds__make_hlds__state_var__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1985 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1985 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1985 "state_var.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_78_78));
#line 1985 "state_var.m"
            }
#line 1986 "state_var.m"
            {
#line 1986 "state_var.m"
              MR_Word base;
#line 1986 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "state_var.m"
              *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = base;
#line 1986 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_60));
#line 1986 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27));
#line 1986 "state_var.m"
            }
#line 1708 "state_var.m"
            {
#line 1708 "state_var.m"
              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_11, (MR_Integer) 1, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
            }
#line 1709 "state_var.m"
            {
#line 1709 "state_var.m"
              hlds__make_hlds__state_var__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1709 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1709 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 1) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1709 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_37_37, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1709 "state_var.m"
            }
#line 1709 "state_var.m"
            {
#line 1709 "state_var.m"
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_37_37)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_18);
            }
#line 1711 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_18;
#line 1704 "state_var.m"
          }
#line 1712 "state_var.m"
          break;
#line 1712 "state_var.m"
        case (MR_Integer) 1:
#line 1713 "state_var.m"
          {
#line 1713 "state_var.m"
            MR_Word hlds__make_hlds__state_var__NewVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1713 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_32_32;
#line 1713 "state_var.m"
            MR_Word hlds__make_hlds__state_var__StatusMap_42;

#line 1714 "state_var.m"
            {
#line 1714 "state_var.m"
              hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28);
            }
#line 1717 "state_var.m"
            {
#line 1717 "state_var.m"
              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_11, (MR_Integer) 1, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
            }
#line 1718 "state_var.m"
            {
#line 1718 "state_var.m"
              hlds__make_hlds__state_var__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1718 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 1) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
#line 1718 "state_var.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__V_32_32, 2) = ((MR_Box) (hlds__make_hlds__state_var__NewVar_19));
#line 1718 "state_var.m"
            }
#line 1718 "state_var.m"
            {
#line 1718 "state_var.m"
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__V_32_32)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_42);
            }
#line 1720 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_42;
#line 1713 "state_var.m"
          }
#line 1712 "state_var.m"
          break;
#line 1712 "state_var.m"
        case (MR_Integer) 2:
#line 1723 "state_var.m"
          {
#line 1723 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_21_21;

#line 1723 "state_var.m"
            *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
#line 1723 "state_var.m"
            hlds__make_hlds__state_var__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1723 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1723 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1723 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
#line 1723 "state_var.m"
          }
#line 1712 "state_var.m"
          break;
#line 1712 "state_var.m"
        case (MR_Integer) 3:
#line 1712 "state_var.m"
#line 1712 "state_var.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)))) {
#line 1712 "state_var.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1712 "state_var.m"
            case (MR_Integer) 0:
#line 1722 "state_var.m"
              {
#line 1722 "state_var.m"
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
#line 1722 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1722 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1722 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
#line 1722 "state_var.m"
              }
#line 1712 "state_var.m"
              break;
#line 1712 "state_var.m"
            case (MR_Integer) 1:
#line 1724 "state_var.m"
              {
#line 1724 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_22_22;

#line 1724 "state_var.m"
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
#line 1724 "state_var.m"
                hlds__make_hlds__state_var__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
#line 1724 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1724 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1724 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
#line 1724 "state_var.m"
              }
#line 1712 "state_var.m"
              break;
#line 1712 "state_var.m"
          }
#line 1712 "state_var.m"
          break;
#line 1712 "state_var.m"
      }
#line 1727 "state_var.m"
    else
#line 1729 "state_var.m"
      {
#line 1728 "state_var.m"
        {
#line 1728 "state_var.m"
          hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0((MR_String) ".", hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28);
        }
#line 1730 "state_var.m"
        *hlds__make_hlds__state_var__Var_12 = hlds__make_hlds__state_var__StateVar_11;
#line 1729 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
#line 1729 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
#line 1729 "state_var.m"
      }
#line 1700 "state_var.m"
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
#line 1692 "state_var.m"
  {
#line 1692 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg0_9)) == (MR_mktag((MR_Integer) 0)));
#line 1692 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StateVar_14;
#line 1692 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Context_16;
#line 1689 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 1689 "state_var.m"
    MR_String hlds__make_hlds__state_var__V_26_26;
#line 1689 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_27_27;
#line 1689 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_28_28;
#line 1689 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;
#line 1689 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_15_15;

#line 1689 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1689 "state_var.m"
      {
#line 1689 "state_var.m"
        hlds__make_hlds__state_var__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 0)));
#line 1689 "state_var.m"
        hlds__make_hlds__state_var__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 1)));
#line 1689 "state_var.m"
        hlds__make_hlds__state_var__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 2)));
#line 1689 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1689 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1689 "state_var.m"
          {
#line 1689 "state_var.m"
            hlds__make_hlds__state_var__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_25_25, (MR_Integer) 0)));
#line 1689 "state_var.m"
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_26_26, (MR_String) "!.") == 0);
#line 1689 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1689 "state_var.m"
              {
#line 1689 "state_var.m"
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1689 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1689 "state_var.m"
                  {
#line 1689 "state_var.m"
                    hlds__make_hlds__state_var__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, (MR_Integer) 0)));
#line 1689 "state_var.m"
                    hlds__make_hlds__state_var__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_27_27, (MR_Integer) 1)));
#line 1689 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1689 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1689 "state_var.m"
                      {
#line 1689 "state_var.m"
                        hlds__make_hlds__state_var__StateVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, (MR_Integer) 0)));
#line 1689 "state_var.m"
                        hlds__make_hlds__state_var__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_28_28, (MR_Integer) 1)));
#line 1689 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1689 "state_var.m"
                      }
#line 1689 "state_var.m"
                  }
#line 1689 "state_var.m"
              }
#line 1689 "state_var.m"
          }
#line 1689 "state_var.m"
      }
#line 1692 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1690 "state_var.m"
      {
#line 1690 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Var_17;
#line 1690 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_33_33;

#line 1690 "state_var.m"
        {
#line 1690 "state_var.m"
          hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__state_var__Context_16, hlds__make_hlds__state_var__StateVar_14, &hlds__make_hlds__state_var__Var_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_State_22, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24);
        }
#line 1691 "state_var.m"
        {
#line 1691 "state_var.m"
          hlds__make_hlds__state_var__V_33_33 = mercury__term__context_init_0_f_0();
        }
#line 1691 "state_var.m"
        {
#line 1691 "state_var.m"
          MR_Word base;
#line 1691 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "state_var.m"
          *hlds__make_hlds__state_var__Arg_10 = base;
#line 1691 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_17));
#line 1691 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 1691 "state_var.m"
        }
#line 1690 "state_var.m"
      }
#line 1692 "state_var.m"
    else
#line 1696 "state_var.m"
      {
#line 1696 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StateVar_44;
#line 1696 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Context_45;
#line 1692 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_34_34;
#line 1692 "state_var.m"
        MR_String hlds__make_hlds__state_var__V_35_35;
#line 1692 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_36_36;
#line 1692 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_37_37;
#line 1692 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_38_38;
#line 1692 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_18_18;

#line 1692 "state_var.m"
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg0_9)) == (MR_mktag((MR_Integer) 0)));
#line 1692 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1692 "state_var.m"
          {
#line 1692 "state_var.m"
            hlds__make_hlds__state_var__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 0)));
#line 1692 "state_var.m"
            hlds__make_hlds__state_var__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 1)));
#line 1692 "state_var.m"
            hlds__make_hlds__state_var__Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 2)));
#line 1692 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 1692 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 1692 "state_var.m"
              {
#line 1692 "state_var.m"
                hlds__make_hlds__state_var__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_34_34, (MR_Integer) 0)));
#line 1692 "state_var.m"
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_35_35, (MR_String) "!:") == 0);
#line 1692 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 1692 "state_var.m"
                  {
#line 1692 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 1692 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 1692 "state_var.m"
                      {
#line 1692 "state_var.m"
                        hlds__make_hlds__state_var__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, (MR_Integer) 0)));
#line 1692 "state_var.m"
                        hlds__make_hlds__state_var__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_36_36, (MR_Integer) 1)));
#line 1692 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 1692 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 1692 "state_var.m"
                          {
#line 1692 "state_var.m"
                            hlds__make_hlds__state_var__StateVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, (MR_Integer) 0)));
#line 1692 "state_var.m"
                            hlds__make_hlds__state_var__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_37_37, (MR_Integer) 1)));
#line 1692 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1692 "state_var.m"
                          }
#line 1692 "state_var.m"
                      }
#line 1692 "state_var.m"
                  }
#line 1692 "state_var.m"
              }
#line 1692 "state_var.m"
          }
#line 1696 "state_var.m"
        if (hlds__make_hlds__state_var__succeeded)
#line 1694 "state_var.m"
          {
#line 1694 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_42_42;
#line 1694 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Var_43;

#line 1693 "state_var.m"
            {
#line 1693 "state_var.m"
              hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(hlds__make_hlds__state_var__Context_45, hlds__make_hlds__state_var__StateVar_44, &hlds__make_hlds__state_var__Var_43, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_State_22, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24);
            }
#line 1695 "state_var.m"
            {
#line 1695 "state_var.m"
              hlds__make_hlds__state_var__V_42_42 = mercury__term__context_init_0_f_0();
            }
#line 1695 "state_var.m"
            {
#line 1695 "state_var.m"
              MR_Word base;
#line 1695 "state_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "state_var.m"
              *hlds__make_hlds__state_var__Arg_10 = base;
#line 1695 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_43));
#line 1695 "state_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_42_42));
#line 1695 "state_var.m"
            }
#line 1694 "state_var.m"
          }
#line 1696 "state_var.m"
        else
#line 1697 "state_var.m"
          {
#line 1697 "state_var.m"
            *hlds__make_hlds__state_var__Arg_10 = hlds__make_hlds__state_var__Arg0_9;
#line 1697 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23;
#line 1697 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_22 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21;
#line 1697 "state_var.m"
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19;
#line 1697 "state_var.m"
          }
#line 1696 "state_var.m"
      }
#line 1692 "state_var.m"
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
#line 1682 "state_var.m"
  {
#line 1682 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1682 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1682 "state_var.m"
      {
#line 1682 "state_var.m"
        *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1682 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7;
#line 1682 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_6 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5;
#line 1682 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3;
#line 1682 "state_var.m"
      }
#line 1682 "state_var.m"
    else
#line 1684 "state_var.m"
      {
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Arg0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Arg_20;
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Args_21;
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31;
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32;
#line 1684 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33;

#line 1685 "state_var.m"
        {
#line 1685 "state_var.m"
          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__state_var__Arg0_18, &hlds__make_hlds__state_var__Arg_20, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33);
        }
#line 1686 "state_var.m"
        {
#line 1686 "state_var.m"
          hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__state_var__Args0_19, &hlds__make_hlds__state_var__Args_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4, hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_State_6, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8);
        }
#line 1683 "state_var.m"
        {
#line 1683 "state_var.m"
          MR_Word base;
#line 1683 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "state_var.m"
          *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 1683 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Arg_20));
#line 1683 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Args_21));
#line 1683 "state_var.m"
        }
#line 1684 "state_var.m"
      }
#line 1682 "state_var.m"
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
#line 1660 "state_var.m"
  {
#line 1660 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1660 "state_var.m"
    {
#line 1660 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(hlds__make_hlds__state_var__InnerScopeInfo_12, hlds__make_hlds__state_var__InnerDIVar_13, hlds__make_hlds__state_var__InnerUOVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28, hlds__make_hlds__state_var__STATE_VARIABLE_State_29, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33);
#line 1660 "state_var.m"
      return;
    }
#line 1660 "state_var.m"
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
#line 1650 "state_var.m"
  {
#line 1650 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1650 "state_var.m"
    {
#line 1650 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(hlds__make_hlds__state_var__InnerStateVar_11, hlds__make_hlds__state_var__InnerScopeInfo_12, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25);
#line 1650 "state_var.m"
      return;
    }
#line 1650 "state_var.m"
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
#line 1632 "state_var.m"
  {
#line 1632 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 1632 "state_var.m"
    if ((hlds__make_hlds__state_var__OuterScopeInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1637 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_State_12 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11;
#line 1632 "state_var.m"
    else
#line 1632 "state_var.m"
      {
#line 1632 "state_var.m"
        MR_Word hlds__make_hlds__state_var__OuterStateVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 0)));
#line 1632 "state_var.m"
        MR_Word hlds__make_hlds__state_var__AfterStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 2)));
#line 1632 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap0_9 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11;
#line 1632 "state_var.m"
        MR_Word hlds__make_hlds__state_var__StatusMap_10;
#line 1631 "state_var.m"
        MR_Word hlds__make_hlds__state_var___BeforeStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 1)));

#line 1634 "state_var.m"
        {
#line 1634 "state_var.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_6)), ((MR_Box) (hlds__make_hlds__state_var__AfterStatus_8)), hlds__make_hlds__state_var__StatusMap0_9, &hlds__make_hlds__state_var__StatusMap_10);
        }
#line 1635 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_12 = (MR_Word) hlds__make_hlds__state_var__StatusMap_10;
#line 1632 "state_var.m"
      }
#line 1632 "state_var.m"
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
#line 1580 "state_var.m"
  {
#line 1580 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1580 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap0_20 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29;
#line 1619 "state_var.m"
    MR_Word hlds__make_hlds__state_var__BeforeStatus_21;
#line 1619 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMap_22;
#line 1582 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_BeforeStatus_21;

#line 1582 "state_var.m"
    {
#line 1582 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__remove_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13)), &hlds__make_hlds__state_var__conv0_BeforeStatus_21, hlds__make_hlds__state_var__StatusMap0_20, &hlds__make_hlds__state_var__StatusMap_22);
    }
#line 1582 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1582 "state_var.m"
      {
#line 1582 "state_var.m"
        hlds__make_hlds__state_var__BeforeStatus_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeStatus_21);
#line 1582 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 1582 "state_var.m"
      }
#line 1619 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 1583 "state_var.m"
      {
#line 1583 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_30 = (MR_Word) hlds__make_hlds__state_var__StatusMap_22;
#line 1594 "state_var.m"
#line 1594 "state_var.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_21)) {
#line 1594 "state_var.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1594 "state_var.m"
          case (MR_Integer) 0:
#line 1585 "state_var.m"
            {
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48;
#line 1585 "state_var.m"
              MR_String hlds__make_hlds__state_var__Name_67;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__Pieces_68;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__Msg_69;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__Spec_70;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_73_73;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_74_74;
#line 1585 "state_var.m"
              MR_String hlds__make_hlds__state_var__V_75_75;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_83_83;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_84_84;
#line 1585 "state_var.m"
              MR_Word hlds__make_hlds__state_var__V_88_88;

#line 1981 "state_var.m"
              {
#line 1981 "state_var.m"
                hlds__make_hlds__state_var__Name_67 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
              }
#line 1983 "state_var.m"
              {
#line 1983 "state_var.m"
                hlds__make_hlds__state_var__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_67);
              }
#line 1983 "state_var.m"
              {
#line 1983 "state_var.m"
                hlds__make_hlds__state_var__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "state_var.m"
                MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_75_75));
#line 1983 "state_var.m"
              }
#line 1983 "state_var.m"
              {
#line 1983 "state_var.m"
                hlds__make_hlds__state_var__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_74_74));
#line 1983 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[9])));
#line 1983 "state_var.m"
              }
#line 1982 "state_var.m"
              {
#line 1982 "state_var.m"
                hlds__make_hlds__state_var__Pieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
#line 1982 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_68, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_73_73));
#line 1982 "state_var.m"
              }
#line 1984 "state_var.m"
              {
#line 1984 "state_var.m"
                hlds__make_hlds__state_var__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "state_var.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_68));
#line 1984 "state_var.m"
              }
#line 1984 "state_var.m"
              {
#line 1984 "state_var.m"
                hlds__make_hlds__state_var__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_84_84));
#line 1984 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1984 "state_var.m"
              }
#line 1984 "state_var.m"
              {
#line 1984 "state_var.m"
                hlds__make_hlds__state_var__Msg_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "state_var.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_69, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_12));
#line 1984 "state_var.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_69, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_83_83));
#line 1984 "state_var.m"
              }
#line 1985 "state_var.m"
              {
#line 1985 "state_var.m"
                hlds__make_hlds__state_var__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_69));
#line 1985 "state_var.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1985 "state_var.m"
              }
#line 1985 "state_var.m"
              {
#line 1985 "state_var.m"
                hlds__make_hlds__state_var__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1985 "state_var.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1985 "state_var.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1985 "state_var.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 2) = ((MR_Box) (hlds__make_hlds__state_var__V_88_88));
#line 1985 "state_var.m"
              }
#line 1986 "state_var.m"
              {
#line 1986 "state_var.m"
                MR_Word base;
#line 1986 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "state_var.m"
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34 = base;
#line 1986 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_70));
#line 1986 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33));
#line 1986 "state_var.m"
              }
#line 1588 "state_var.m"
              {
#line 1588 "state_var.m"
                hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterDIVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48);
              }
#line 1590 "state_var.m"
              {
#line 1590 "state_var.m"
                hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
              }
#line 1592 "state_var.m"
              {
#line 1592 "state_var.m"
                MR_Word base;
#line 1592 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "state_var.m"
                *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
#line 1592 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
#line 1592 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1592 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1592 "state_var.m"
              }
#line 1585 "state_var.m"
            }
#line 1594 "state_var.m"
            break;
#line 1594 "state_var.m"
          case (MR_Integer) 1:
#line 1614 "state_var.m"
            {
#line 1617 "state_var.m"
              {
#line 1617 "state_var.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
#line 1617 "state_var.m"
                return;
              }
#line 1614 "state_var.m"
            }
#line 1594 "state_var.m"
            break;
#line 1594 "state_var.m"
          case (MR_Integer) 2:
#line 1596 "state_var.m"
            {
#line 1596 "state_var.m"
              MR_Word hlds__make_hlds__state_var__RO_Context_24;

#line 1595 "state_var.m"
              *hlds__make_hlds__state_var__OuterDIVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 0)));
#line 1595 "state_var.m"
              hlds__make_hlds__state_var__RO_Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 2)));
#line 1597 "state_var.m"
              {
#line 1597 "state_var.m"
                hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(hlds__make_hlds__state_var__Context_12, (MR_String) "lambda expression", hlds__make_hlds__state_var__RO_Context_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34);
              }
#line 1600 "state_var.m"
              {
#line 1600 "state_var.m"
                hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
              }
#line 1602 "state_var.m"
              {
#line 1602 "state_var.m"
                MR_Word base;
#line 1602 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1602 "state_var.m"
                *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
#line 1602 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
#line 1602 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1602 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1602 "state_var.m"
              }
#line 1596 "state_var.m"
            }
#line 1594 "state_var.m"
            break;
#line 1594 "state_var.m"
          case (MR_Integer) 3:
#line 1594 "state_var.m"
#line 1594 "state_var.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 0)))) {
#line 1594 "state_var.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1594 "state_var.m"
              case (MR_Integer) 0:
#line 1605 "state_var.m"
                {
#line 1605 "state_var.m"
                  MR_Word hlds__make_hlds__state_var__AfterStatus_25;

#line 1605 "state_var.m"
                  *hlds__make_hlds__state_var__OuterDIVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 1)));
#line 1606 "state_var.m"
                  {
#line 1606 "state_var.m"
                    hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
                  }
#line 1608 "state_var.m"
                  {
#line 1608 "state_var.m"
                    hlds__make_hlds__state_var__AfterStatus_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "state_var.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterStatus_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1608 "state_var.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterStatus_25, 1) = ((MR_Box) (*hlds__make_hlds__state_var__OuterUOVar_15));
#line 1608 "state_var.m"
                  }
#line 1609 "state_var.m"
                  {
#line 1609 "state_var.m"
                    MR_Word base;
#line 1609 "state_var.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "state_var.m"
                    *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
#line 1609 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
#line 1609 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
#line 1609 "state_var.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__AfterStatus_25));
#line 1609 "state_var.m"
                  }
#line 1605 "state_var.m"
                  *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33;
#line 1605 "state_var.m"
                }
#line 1594 "state_var.m"
                break;
#line 1594 "state_var.m"
              case (MR_Integer) 1:
#line 1614 "state_var.m"
                {
#line 1617 "state_var.m"
                  {
#line 1617 "state_var.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
#line 1617 "state_var.m"
                    return;
                  }
#line 1614 "state_var.m"
                }
#line 1594 "state_var.m"
                break;
#line 1594 "state_var.m"
            }
#line 1594 "state_var.m"
            break;
#line 1594 "state_var.m"
        }
#line 1583 "state_var.m"
      }
#line 1619 "state_var.m"
    else
#line 1621 "state_var.m"
      {
#line 1621 "state_var.m"
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55;

#line 1620 "state_var.m"
        {
#line 1620 "state_var.m"
          hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0((MR_String) "", hlds__make_hlds__state_var__Context_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34);
        }
#line 1622 "state_var.m"
        {
#line 1622 "state_var.m"
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterDIVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55);
        }
#line 1624 "state_var.m"
        {
#line 1624 "state_var.m"
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
        }
#line 1626 "state_var.m"
        *hlds__make_hlds__state_var__OuterScopeInfo_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1621 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_30 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29;
#line 1621 "state_var.m"
      }
#line 1580 "state_var.m"
  }
#line 172 "state_var.m"
}

#line 1199 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3(
#line 1199 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1199 "state_var.m"
{
#line 1199 "state_var.m"
  {
#line 1199 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1199 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1199 "state_var.m"
    {
#line 1199 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1199__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1199 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1199 "state_var.m"
  }
#line 1199 "state_var.m"
}

#line 1197 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2(
#line 1197 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1197 "state_var.m"
{
#line 1197 "state_var.m"
  {
#line 1197 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1197 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1197 "state_var.m"
    {
#line 1197 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1197__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1197 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1197 "state_var.m"
  }
#line 1197 "state_var.m"
}

#line 1195 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1(
#line 1195 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg)
#line 1195 "state_var.m"
{
#line 1195 "state_var.m"
  {
#line 1195 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1195 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 1195 "state_var.m"
    {
#line 1195 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1195__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
#line 1195 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 1195 "state_var.m"
  }
#line 1195 "state_var.m"
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
#line 1186 "state_var.m"
  {
#line 1186 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_122_122 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_123_123 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_127_127;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_128_128;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_129_129;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_33;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapBefore_34 = (MR_Word) hlds__make_hlds__state_var__StateBefore_26;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_35 = (MR_Word) hlds__make_hlds__state_var__StateAfterCond_27;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_36 = (MR_Word) hlds__make_hlds__state_var__StateAfterThen_28;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_37 = (MR_Word) hlds__make_hlds__state_var__StateAfterElse_29;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsBefore_38;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterITE_42;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NeckCopyGoals_43;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenEndCopyGoals_44;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseEndCopyGoals_45;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenRenames_46;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseRenames_47;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenMissingInits_48;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseMissingInits_49;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoals0_58;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoals0_59;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoals_60;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoals_61;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenInfo0_63;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseInfo0_65;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoal1_66;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoal1_67;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId0_68;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings0_69;
#line 1186 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__ThenGoalIdNum_70;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId1_71;
#line 1186 "state_var.m"
    MR_Integer hlds__make_hlds__state_var__ElseGoalIdNum_72;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId_73;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ThenGoalId_74;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__ElseGoalId_75;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings1_76;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings_77;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_84_84;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_87_87;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_90_90;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_93_93;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109;
#line 1186 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_110_110;
#line 1237 "state_var.m"
    MR_Word hlds__make_hlds__state_var___ThenExpr0_62;
#line 1238 "state_var.m"
    MR_Word hlds__make_hlds__state_var___ElseExpr0_64;

#line 1191 "state_var.m"
    {
#line 1191 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapBefore_34, &hlds__make_hlds__state_var__SVarsBefore_38);
    }
#line 1192 "state_var.m"
    {
#line 1192 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterCond_35, &hlds__make_hlds__state_var__SVarsAfterCond_39);
    }
#line 1193 "state_var.m"
    {
#line 1193 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterThen_36, &hlds__make_hlds__state_var__SVarsAfterThen_40);
    }
#line 1194 "state_var.m"
    {
#line 1194 "state_var.m"
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterElse_37, &hlds__make_hlds__state_var__SVarsAfterElse_41);
    }
#line 1195 "state_var.m"
    {
#line 1195 "state_var.m"
      hlds__make_hlds__state_var__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
#line 1195 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1));
#line 1195 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1195 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
#line 1195 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_84_84, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterCond_39));
#line 1195 "state_var.m"
    }
#line 1195 "state_var.m"
    {
#line 1195 "state_var.m"
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_84_84, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before not sublist of Cond");
    }
#line 1197 "state_var.m"
    {
#line 1197 "state_var.m"
      hlds__make_hlds__state_var__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
#line 1197 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2));
#line 1197 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1197 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
#line 1197 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_87_87, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterThen_40));
#line 1197 "state_var.m"
    }
#line 1197 "state_var.m"
    {
#line 1197 "state_var.m"
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_87_87, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before != AfterThen");
    }
#line 1199 "state_var.m"
    {
#line 1199 "state_var.m"
      hlds__make_hlds__state_var__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
#line 1199 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3));
#line 1199 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1199 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
#line 1199 "state_var.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterElse_41));
#line 1199 "state_var.m"
    }
#line 1199 "state_var.m"
    {
#line 1199 "state_var.m"
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__V_90_90, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before != AfterElse");
    }
#line 1205 "state_var.m"
    {
#line 1205 "state_var.m"
      hlds__make_hlds__state_var__V_93_93 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123);
    }
#line 1202 "state_var.m"
    {
#line 1202 "state_var.m"
      hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(hlds__make_hlds__state_var__LocKind_19, hlds__make_hlds__state_var__QuantStateVars_21, hlds__make_hlds__state_var__SVarsBefore_38, hlds__make_hlds__state_var__StatusMapBefore_34, hlds__make_hlds__state_var__StatusMapAfterCond_35, hlds__make_hlds__state_var__StatusMapAfterThen_36, hlds__make_hlds__state_var__StatusMapAfterElse_37, hlds__make_hlds__state_var__V_93_93, &hlds__make_hlds__state_var__StatusMapAfterITE_42, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_78, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__NeckCopyGoals_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenEndCopyGoals_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseEndCopyGoals_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenRenames_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseRenames_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenMissingInits_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseMissingInits_49);
    }
#line 1209 "state_var.m"
    *hlds__make_hlds__state_var__StateAfterITE_30 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfterITE_42;
#line 1216 "state_var.m"
    if ((hlds__make_hlds__state_var__ThenMissingInits_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "state_var.m"
      hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80;
#line 1216 "state_var.m"
    else
#line 1217 "state_var.m"
      {
#line 1217 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ThenSpecs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 2)));
#line 1217 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ThenSpecs_53;
#line 1218 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 0)));
#line 1218 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 1)));
#line 1221 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_114_114;
#line 1221 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_115_115;
#line 1221 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_116_116;

#line 1219 "state_var.m"
        {
#line 1219 "state_var.m"
          hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(hlds__make_hlds__state_var__Context_20, hlds__make_hlds__state_var__ThenMissingInits_48, (MR_String) "succeeds", (MR_String) "fails", hlds__make_hlds__state_var__ThenSpecs0_52, &hlds__make_hlds__state_var__ThenSpecs_53);
        }
#line 1221 "state_var.m"
        hlds__make_hlds__state_var__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 0)));
#line 1221 "state_var.m"
        hlds__make_hlds__state_var__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 1)));
#line 1221 "state_var.m"
        hlds__make_hlds__state_var__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 2)));
#line 1221 "state_var.m"
        {
#line 1221 "state_var.m"
          hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_114_114));
#line 1221 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_115_115));
#line 1221 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 2) = ((MR_Box) (hlds__make_hlds__state_var__ThenSpecs_53));
#line 1221 "state_var.m"
        }
#line 1217 "state_var.m"
      }
#line 1225 "state_var.m"
    if ((hlds__make_hlds__state_var__ElseMissingInits_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "state_var.m"
      hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104;
#line 1225 "state_var.m"
    else
#line 1226 "state_var.m"
      {
#line 1226 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ElseSpecs0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 2)));
#line 1226 "state_var.m"
        MR_Word hlds__make_hlds__state_var__ElseSpecs_57;
#line 1227 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 0)));
#line 1227 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 1)));
#line 1230 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_119_119;
#line 1230 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_120_120;
#line 1230 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_121_121;

#line 1228 "state_var.m"
        {
#line 1228 "state_var.m"
          hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(hlds__make_hlds__state_var__Context_20, hlds__make_hlds__state_var__ThenMissingInits_48, (MR_String) "fails", (MR_String) "succeeds", hlds__make_hlds__state_var__ElseSpecs0_56, &hlds__make_hlds__state_var__ElseSpecs_57);
        }
#line 1230 "state_var.m"
        hlds__make_hlds__state_var__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 0)));
#line 1230 "state_var.m"
        hlds__make_hlds__state_var__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 1)));
#line 1230 "state_var.m"
        hlds__make_hlds__state_var__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 2)));
#line 1230 "state_var.m"
        {
#line 1230 "state_var.m"
          hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_119_119));
#line 1230 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_120_120));
#line 1230 "state_var.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 2) = ((MR_Box) (hlds__make_hlds__state_var__ElseSpecs_57));
#line 1230 "state_var.m"
        }
#line 1226 "state_var.m"
      }
#line 1233 "state_var.m"
    {
#line 1233 "state_var.m"
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__state_var__ThenGoal0_22, &hlds__make_hlds__state_var__ThenGoals0_58, hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108);
    }
#line 1234 "state_var.m"
    {
#line 1234 "state_var.m"
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__state_var__ElseGoal0_24, &hlds__make_hlds__state_var__ElseGoals0_59, hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109);
    }
#line 15261 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1235 "state_var.m"
    {
#line 1235 "state_var.m"
      hlds__make_hlds__state_var__V_110_110 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__ThenGoals0_58, hlds__make_hlds__state_var__ThenEndCopyGoals_44);
    }
#line 1235 "state_var.m"
    {
#line 1235 "state_var.m"
      hlds__make_hlds__state_var__ThenGoals_60 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__NeckCopyGoals_43, hlds__make_hlds__state_var__V_110_110);
    }
#line 1236 "state_var.m"
    {
#line 1236 "state_var.m"
      hlds__make_hlds__state_var__ElseGoals_61 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__ElseGoals0_59, hlds__make_hlds__state_var__ElseEndCopyGoals_45);
    }
#line 1237 "state_var.m"
    hlds__make_hlds__state_var___ThenExpr0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ThenGoal0_22, (MR_Integer) 0)));
#line 1237 "state_var.m"
    hlds__make_hlds__state_var__ThenInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ThenGoal0_22, (MR_Integer) 1)));
#line 1238 "state_var.m"
    hlds__make_hlds__state_var___ElseExpr0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ElseGoal0_24, (MR_Integer) 0)));
#line 1238 "state_var.m"
    hlds__make_hlds__state_var__ElseInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ElseGoal0_24, (MR_Integer) 1)));
#line 1239 "state_var.m"
    {
#line 1239 "state_var.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__state_var__ThenGoals_60, hlds__make_hlds__state_var__ThenInfo0_63, &hlds__make_hlds__state_var__ThenGoal1_66);
    }
#line 1240 "state_var.m"
    {
#line 1240 "state_var.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__state_var__ElseGoals_61, hlds__make_hlds__state_var__ElseInfo0_65, &hlds__make_hlds__state_var__ElseGoal1_67);
    }
#line 1242 "state_var.m"
    hlds__make_hlds__state_var__NextGoalId0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 0)));
#line 1242 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamings0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 1)));
#line 1242 "state_var.m"
    hlds__make_hlds__state_var__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 2)));
#line 1243 "state_var.m"
    {
#line 1243 "state_var.m"
      mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ThenGoalIdNum_70, hlds__make_hlds__state_var__NextGoalId0_68, &hlds__make_hlds__state_var__NextGoalId1_71);
    }
#line 1244 "state_var.m"
    {
#line 1244 "state_var.m"
      mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ElseGoalIdNum_72, hlds__make_hlds__state_var__NextGoalId1_71, &hlds__make_hlds__state_var__NextGoalId_73);
    }
#line 1245 "state_var.m"
    hlds__make_hlds__state_var__ThenGoalId_74 = (MR_Word) hlds__make_hlds__state_var__ThenGoalIdNum_70;
#line 1246 "state_var.m"
    hlds__make_hlds__state_var__ElseGoalId_75 = (MR_Word) hlds__make_hlds__state_var__ElseGoalIdNum_72;
#line 1247 "state_var.m"
    {
#line 1247 "state_var.m"
      hlds__hlds_goal__goal_set_goal_id_3_p_0(hlds__make_hlds__state_var__ThenGoalId_74, hlds__make_hlds__state_var__ThenGoal1_66, hlds__make_hlds__state_var__ThenGoal_23);
    }
#line 1248 "state_var.m"
    {
#line 1248 "state_var.m"
      hlds__hlds_goal__goal_set_goal_id_3_p_0(hlds__make_hlds__state_var__ElseGoalId_75, hlds__make_hlds__state_var__ElseGoal1_67, hlds__make_hlds__state_var__ElseGoal_25);
    }
#line 15326 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeCtorInfo_128_128 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 15328 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeInfo_129_129 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1];
#line 1249 "state_var.m"
    {
#line 1249 "state_var.m"
      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_128_128, hlds__make_hlds__state_var__TypeInfo_129_129, ((MR_Box) (hlds__make_hlds__state_var__ThenGoalId_74)), ((MR_Box) (hlds__make_hlds__state_var__ThenRenames_46)), hlds__make_hlds__state_var__DelayedRenamings0_69, &hlds__make_hlds__state_var__DelayedRenamings1_76);
    }
#line 1251 "state_var.m"
    {
#line 1251 "state_var.m"
      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_128_128, hlds__make_hlds__state_var__TypeInfo_129_129, ((MR_Box) (hlds__make_hlds__state_var__ElseGoalId_75)), ((MR_Box) (hlds__make_hlds__state_var__ElseRenames_47)), hlds__make_hlds__state_var__DelayedRenamings1_76, &hlds__make_hlds__state_var__DelayedRenamings_77);
    }
#line 1253 "state_var.m"
    {
#line 1253 "state_var.m"
      MR_Word base;
#line 1253 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_81 = base;
#line 1253 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_73));
#line 1253 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamings_77));
#line 1253 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_33));
#line 1253 "state_var.m"
    }
#line 1186 "state_var.m"
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_83 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_82;
#line 1186 "state_var.m"
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
#line 922 "state_var.m"
  {
#line 922 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 922 "state_var.m"
    {
#line 922 "state_var.m"
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_p_0(hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__Disjs_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30, hlds__make_hlds__state_var__StateBefore_14, hlds__make_hlds__state_var__StateAfter_15, hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_Store_32);
#line 922 "state_var.m"
      return;
    }
#line 922 "state_var.m"
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
#line 862 "state_var.m"
  {
#line 862 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 862 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_9 = (MR_Word) hlds__make_hlds__state_var__StateBeforeOutside_6;
#line 862 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterOutside0_14 = (MR_Word) hlds__make_hlds__state_var__StateAfterInside_7;
#line 862 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapAfterOutside_15;

#line 882 "state_var.m"
    {
#line 882 "state_var.m"
      hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(hlds__make_hlds__state_var__StateVars_5, hlds__make_hlds__state_var__StatusMapBeforeOutside_9, hlds__make_hlds__state_var__StatusMapAfterOutside0_14, &hlds__make_hlds__state_var__StatusMapAfterOutside_15);
    }
#line 884 "state_var.m"
    *hlds__make_hlds__state_var__StateAfterOutside_8 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfterOutside_15;
#line 862 "state_var.m"
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
#line 840 "state_var.m"
  {
#line 840 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 840 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapOutside_14 = (MR_Word) hlds__make_hlds__state_var__OutsideState_11;
#line 840 "state_var.m"
    MR_Word hlds__make_hlds__state_var__StatusMapInside_15;

#line 842 "state_var.m"
    {
#line 842 "state_var.m"
      hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(hlds__make_hlds__state_var__Context_8, hlds__make_hlds__state_var__VarSet_9, hlds__make_hlds__state_var__StateVars_10, hlds__make_hlds__state_var__StatusMapOutside_14, &hlds__make_hlds__state_var__StatusMapInside_15, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17);
    }
#line 844 "state_var.m"
    *hlds__make_hlds__state_var__InsideState_12 = (MR_Word) hlds__make_hlds__state_var__StatusMapInside_15;
#line 840 "state_var.m"
  }
#line 122 "state_var.m"
}

#line 812 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
#line 812 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 812 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 812 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
#line 812 "state_var.m"
{
#line 812 "state_var.m"
  {
#line 812 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 812 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11;

#line 812 "state_var.m"
    {
#line 812 "state_var.m"
      hlds__make_hlds__state_var__reset_updated_status_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11);
    }
#line 812 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11));
#line 812 "state_var.m"
  }
#line 812 "state_var.m"
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
#line 810 "state_var.m"
  {
#line 810 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 810 "state_var.m"
#line 810 "state_var.m"
    switch (hlds__make_hlds__state_var__Loc_4) {
#line 810 "state_var.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 810 "state_var.m"
      case (MR_Integer) 1:
#line 815 "state_var.m"
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_9 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8;
#line 810 "state_var.m"
        break;
#line 810 "state_var.m"
      case (MR_Integer) 0:
#line 810 "state_var.m"
        {
#line 810 "state_var.m"
          MR_Word hlds__make_hlds__state_var__TypeCtorInfo_14_14 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 810 "state_var.m"
          MR_Word hlds__make_hlds__state_var__StatusMap0_6 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8;
#line 810 "state_var.m"
          MR_Word hlds__make_hlds__state_var__StatusMap_7;

#line 812 "state_var.m"
          {
#line 812 "state_var.m"
            mercury__map__map_values_only_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_14_14, hlds__make_hlds__state_var__TypeCtorInfo_14_14, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[5], hlds__make_hlds__state_var__StatusMap0_6, &hlds__make_hlds__state_var__StatusMap_7);
          }
#line 813 "state_var.m"
          *hlds__make_hlds__state_var__STATE_VARIABLE_State_9 = (MR_Word) hlds__make_hlds__state_var__StatusMap_7;
#line 810 "state_var.m"
        }
#line 810 "state_var.m"
        break;
#line 810 "state_var.m"
    }
#line 810 "state_var.m"
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
#line 695 "state_var.m"
  {
#line 695 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_69_79 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalAssocList_28;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InitialSVarStatusMap_29;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarStatusMap_30;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__FinalSVarSubn_31;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__CopyGoals_32;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goals1_33;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goal1_36;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalExpr1_37;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalInfo1_38;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__GoalId1_39;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId1_40;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap1_41;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_42;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_45;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__NextGoalId_46;
#line 695 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54;
#line 729 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_43;
#line 714 "state_var.m"
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_43;

#line 696 "state_var.m"
    {
#line 696 "state_var.m"
      mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_69_79, hlds__make_hlds__state_var__TypeInfo_69_79, hlds__make_hlds__state_var__FinalMap_10, &hlds__make_hlds__state_var__FinalAssocList_28);
    }
#line 697 "state_var.m"
    hlds__make_hlds__state_var__InitialSVarStatusMap_29 = (MR_Word) hlds__make_hlds__state_var__InitialSVarState_13;
#line 698 "state_var.m"
    hlds__make_hlds__state_var__FinalSVarStatusMap_30 = (MR_Word) hlds__make_hlds__state_var__FinalSVarState_14;
#line 699 "state_var.m"
    {
#line 699 "state_var.m"
      hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(hlds__make_hlds__state_var__FinalAssocList_28, hlds__make_hlds__state_var__InitialSVarStatusMap_29, hlds__make_hlds__state_var__FinalSVarStatusMap_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__FinalSVarSubn_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoals_32);
    }
#line 705 "state_var.m"
    if ((hlds__make_hlds__state_var__CopyGoals_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "state_var.m"
      hlds__make_hlds__state_var__Goals1_33 = hlds__make_hlds__state_var__Goals0_11;
#line 705 "state_var.m"
    else
#line 706 "state_var.m"
      {
#line 707 "state_var.m"
        {
#line 707 "state_var.m"
          hlds__make_hlds__state_var__Goals1_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__Goals0_11, hlds__make_hlds__state_var__CopyGoals_32);
        }
#line 706 "state_var.m"
      }
#line 709 "state_var.m"
    {
#line 709 "state_var.m"
      hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(hlds__make_hlds__state_var__Context_9, hlds__make_hlds__state_var__Goals1_33, &hlds__make_hlds__state_var__Goal1_36, hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54);
    }
#line 711 "state_var.m"
    hlds__make_hlds__state_var__GoalExpr1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_36, (MR_Integer) 0)));
#line 711 "state_var.m"
    hlds__make_hlds__state_var__GoalInfo1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_36, (MR_Integer) 1)));
#line 712 "state_var.m"
    {
#line 712 "state_var.m"
      hlds__make_hlds__state_var__GoalId1_39 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo1_38);
    }
#line 713 "state_var.m"
    hlds__make_hlds__state_var__NextGoalId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 0)));
#line 713 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamingMap1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 1)));
#line 713 "state_var.m"
    hlds__make_hlds__state_var__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 2)));
#line 714 "state_var.m"
    {
#line 714 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap1_41, ((MR_Box) (hlds__make_hlds__state_var__GoalId1_39)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_43);
    }
#line 714 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 714 "state_var.m"
      {
#line 714 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenaming0_43 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_43);
#line 714 "state_var.m"
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
#line 714 "state_var.m"
      }
#line 729 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 723 "state_var.m"
      {
#line 723 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_66_66;

#line 725 "state_var.m"
        {
#line 725 "state_var.m"
          hlds__make_hlds__state_var__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenaming0_43, hlds__make_hlds__state_var__FinalSVarSubn_31);
        }
#line 725 "state_var.m"
        {
#line 725 "state_var.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId1_39)), ((MR_Box) (hlds__make_hlds__state_var__V_66_66)), hlds__make_hlds__state_var__DelayedRenamingMap1_41, &hlds__make_hlds__state_var__DelayedRenamingMap_45);
        }
#line 727 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId_46 = hlds__make_hlds__state_var__NextGoalId1_40;
#line 728 "state_var.m"
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_36;
#line 723 "state_var.m"
      }
#line 729 "state_var.m"
    else
#line 735 "state_var.m"
    if ((hlds__make_hlds__state_var__FinalSVarSubn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "state_var.m"
      {
#line 732 "state_var.m"
        hlds__make_hlds__state_var__NextGoalId_46 = hlds__make_hlds__state_var__NextGoalId1_40;
#line 733 "state_var.m"
        hlds__make_hlds__state_var__DelayedRenamingMap_45 = hlds__make_hlds__state_var__DelayedRenamingMap1_41;
#line 734 "state_var.m"
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_36;
#line 731 "state_var.m"
      }
#line 735 "state_var.m"
    else
#line 736 "state_var.m"
      {
#line 736 "state_var.m"
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_49;
#line 736 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalId_50;
#line 736 "state_var.m"
        MR_Word hlds__make_hlds__state_var__GoalInfo_51;

#line 737 "state_var.m"
        {
#line 737 "state_var.m"
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_49, hlds__make_hlds__state_var__NextGoalId1_40, &hlds__make_hlds__state_var__NextGoalId_46);
        }
#line 738 "state_var.m"
        hlds__make_hlds__state_var__GoalId_50 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_49;
#line 750 "state_var.m"
        {
#line 750 "state_var.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_50)), ((MR_Box) (hlds__make_hlds__state_var__FinalSVarSubn_31)), hlds__make_hlds__state_var__DelayedRenamingMap1_41, &hlds__make_hlds__state_var__DelayedRenamingMap_45);
        }
#line 752 "state_var.m"
        {
#line 752 "state_var.m"
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_50, hlds__make_hlds__state_var__GoalInfo1_38, &hlds__make_hlds__state_var__GoalInfo_51);
        }
#line 753 "state_var.m"
        {
#line 753 "state_var.m"
          MR_Word base;
#line 753 "state_var.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 753 "state_var.m"
          *hlds__make_hlds__state_var__Goal_12 = base;
#line 753 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr1_37));
#line 753 "state_var.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_51));
#line 753 "state_var.m"
        }
#line 736 "state_var.m"
      }
#line 756 "state_var.m"
    {
#line 756 "state_var.m"
      MR_Word base;
#line 756 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_17 = base;
#line 756 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_46));
#line 756 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_45));
#line 756 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_42));
#line 756 "state_var.m"
    }
#line 695 "state_var.m"
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
#line 605 "state_var.m"
  {
#line 605 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_32_32 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_33_33 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__OutsideStatusMap_19 = (MR_Word) hlds__make_hlds__state_var__OutsideState_15;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__OutsideStatusList_20;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InsideStatusList_21;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InsideStatusMap_22;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__InsideState0_23;
#line 605 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_29_29;

#line 614 "state_var.m"
    {
#line 614 "state_var.m"
      mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__OutsideStatusMap_19, &hlds__make_hlds__state_var__OutsideStatusList_20);
    }
#line 615 "state_var.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 615 "state_var.m"
    {
#line 615 "state_var.m"
      hlds__make_hlds__state_var__make_svars_read_only_4_p_0(hlds__make_hlds__state_var__Context_11, hlds__make_hlds__state_var__OutsideStatusList_20, &hlds__make_hlds__state_var__InsideStatusList_21);
    }
#line 617 "state_var.m"
    {
#line 617 "state_var.m"
      mercury__map__from_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__InsideStatusList_21, &hlds__make_hlds__state_var__InsideStatusMap_22);
    }
#line 618 "state_var.m"
    hlds__make_hlds__state_var__InsideState0_23 = (MR_Word) hlds__make_hlds__state_var__InsideStatusMap_22;
#line 622 "state_var.m"
    {
#line 622 "state_var.m"
      hlds__make_hlds__state_var__V_29_29 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeInfo_32_32);
    }
#line 622 "state_var.m"
    {
#line 622 "state_var.m"
      hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Args0_12, hlds__make_hlds__state_var__Args_13, hlds__make_hlds__state_var__V_29_29, hlds__make_hlds__state_var__FinalMap_14, hlds__make_hlds__state_var__InsideState0_23, hlds__make_hlds__state_var__InsideState_16, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27);
#line 622 "state_var.m"
      return;
    }
#line 605 "state_var.m"
  }
#line 96 "state_var.m"
}

#line 659 "state_var.m"
static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1(
#line 659 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 659 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1)
#line 659 "state_var.m"
{
#line 659 "state_var.m"
  {
#line 659 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 659 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

#line 659 "state_var.m"
    {
#line 659 "state_var.m"
      return hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__severity_is_error_1_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1));
    }
#line 659 "state_var.m"
    return hlds__make_hlds__state_var__succeeded;
#line 659 "state_var.m"
  }
#line 659 "state_var.m"
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
#line 655 "state_var.m"
  {
#line 655 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Goal1_19;
#line 655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__DelayedRenamings_21;
#line 655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__Specs_22;
#line 655 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27;
#line 658 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_20_20;
#line 661 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_47_47;
#line 661 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_48_48;
#line 661 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_49_49;

#line 656 "state_var.m"
    {
#line 656 "state_var.m"
      hlds__make_hlds__state_var__svar_finish_body_8_p_0(hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__FinalMap_11, hlds__make_hlds__state_var__Goals0_12, &hlds__make_hlds__state_var__Goal1_19, hlds__make_hlds__state_var__InitialSVarState_14, hlds__make_hlds__state_var__FinalSVarState_15, hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_26, &hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27);
    }
#line 658 "state_var.m"
    hlds__make_hlds__state_var__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 0)));
#line 658 "state_var.m"
    hlds__make_hlds__state_var__DelayedRenamings_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 1)));
#line 658 "state_var.m"
    hlds__make_hlds__state_var__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 2)));
#line 659 "state_var.m"
    {
#line 659 "state_var.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[4], hlds__make_hlds__state_var__Specs_22, hlds__make_hlds__state_var__ErrorSpecs_18, hlds__make_hlds__state_var__WarningSpecs_17);
    }
#line 15965 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeInfo_47_47 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 661 "state_var.m"
    {
#line 661 "state_var.m"
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__state_var__TypeInfo_47_47, hlds__make_hlds__state_var__TypeInfo_47_47, hlds__make_hlds__state_var__FinalMap_11);
    }
#line 661 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 661 "state_var.m"
      {
#line 15976 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 15978 "hlds.make_hlds.state_var.c"
        hlds__make_hlds__state_var__TypeInfo_49_49 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1];
#line 662 "state_var.m"
        {
#line 662 "state_var.m"
          hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__state_var__TypeCtorInfo_48_48, hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__DelayedRenamings_21);
        }
#line 661 "state_var.m"
      }
#line 665 "state_var.m"
    if (hlds__make_hlds__state_var__succeeded)
#line 664 "state_var.m"
      *hlds__make_hlds__state_var__Goal_13 = hlds__make_hlds__state_var__Goal1_19;
#line 665 "state_var.m"
    else
#line 680 "state_var.m"
      {
#line 680 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 680 "state_var.m"
        MR_Word hlds__make_hlds__state_var__V_42_42;

#line 681 "state_var.m"
        {
#line 681 "state_var.m"
          hlds__make_hlds__state_var__V_42_42 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_55_55, hlds__make_hlds__state_var__TypeInfo_55_55);
        }
#line 681 "state_var.m"
        {
#line 681 "state_var.m"
          hlds__hlds_goal__incremental_rename_vars_in_goal_4_p_0(hlds__make_hlds__state_var__V_42_42, hlds__make_hlds__state_var__DelayedRenamings_21, hlds__make_hlds__state_var__Goal1_19, hlds__make_hlds__state_var__Goal_13);
#line 681 "state_var.m"
          return;
        }
#line 680 "state_var.m"
      }
#line 655 "state_var.m"
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
#line 475 "state_var.m"
  {
#line 475 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;
#line 475 "state_var.m"
    MR_Word hlds__make_hlds__state_var__TypeInfo_29_29;
#line 475 "state_var.m"
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23;
#line 475 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_25_25;
#line 475 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_30_30;
#line 475 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_33_33;
#line 475 "state_var.m"
    MR_Word hlds__make_hlds__state_var__V_35_35;

#line 375 "state_var.m"
    {
#line 375 "state_var.m"
      hlds__make_hlds__state_var__V_30_30 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
    }
#line 375 "state_var.m"
    hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23 = (MR_Word) hlds__make_hlds__state_var__V_30_30;
#line 376 "state_var.m"
    {
#line 376 "state_var.m"
      hlds__make_hlds__state_var__V_33_33 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 376 "state_var.m"
    {
#line 376 "state_var.m"
      hlds__make_hlds__state_var__V_35_35 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1]);
    }
#line 376 "state_var.m"
    {
#line 376 "state_var.m"
      MR_Word base;
#line 376 "state_var.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 376 "state_var.m"
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_20 = base;
#line 376 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__V_33_33));
#line 376 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_35_35));
#line 376 "state_var.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "state_var.m"
    }
#line 16092 "hlds.make_hlds.state_var.c"
    hlds__make_hlds__state_var__TypeInfo_29_29 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
#line 478 "state_var.m"
    {
#line 478 "state_var.m"
      hlds__make_hlds__state_var__V_25_25 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_29_29, hlds__make_hlds__state_var__TypeInfo_29_29);
    }
#line 478 "state_var.m"
    {
#line 478 "state_var.m"
      hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Args0_10, hlds__make_hlds__state_var__Args_11, hlds__make_hlds__state_var__V_25_25, hlds__make_hlds__state_var__FinalMap_13, hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23, hlds__make_hlds__state_var__STATE_VARIABLE_State_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_18, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_22);
#line 478 "state_var.m"
      return;
    }
#line 475 "state_var.m"
  }
#line 76 "state_var.m"
}

#line 433 "state_var.m"
static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0_1(
#line 433 "state_var.m"
  MR_Box hlds__make_hlds__state_var__closure_arg,
#line 433 "state_var.m"
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
#line 433 "state_var.m"
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
#line 433 "state_var.m"
{
#line 433 "state_var.m"
  {
#line 433 "state_var.m"
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
#line 433 "state_var.m"
    MR_Word hlds__make_hlds__state_var__conv0_IM_4;

#line 433 "state_var.m"
    {
#line 433 "state_var.m"
      hlds__make_hlds__state_var__expand_bang_states_method_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_IM_4);
    }
#line 433 "state_var.m"
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_IM_4));
#line 433 "state_var.m"
  }
#line 433 "state_var.m"
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
#line 429 "state_var.m"
  {
#line 429 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 429 "state_var.m"
    if ((hlds__make_hlds__state_var__InstanceBody0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "state_var.m"
      *hlds__make_hlds__state_var__InstanceBody_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "state_var.m"
    else
#line 432 "state_var.m"
      {
#line 432 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0;
#line 432 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Methods0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__InstanceBody0_3, (MR_Integer) 0)));
#line 432 "state_var.m"
        MR_Word hlds__make_hlds__state_var__Methods_6;

#line 433 "state_var.m"
        {
#line 433 "state_var.m"
          mercury__list__map_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_10_10, hlds__make_hlds__state_var__TypeCtorInfo_10_10, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[3], hlds__make_hlds__state_var__Methods0_5, &hlds__make_hlds__state_var__Methods_6);
        }
#line 434 "state_var.m"
        {
#line 434 "state_var.m"
          MR_Word base;
#line 434 "state_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "state_var.m"
          *hlds__make_hlds__state_var__InstanceBody_4 = base;
#line 434 "state_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Methods_6));
#line 434 "state_var.m"
        }
#line 432 "state_var.m"
      }
#line 429 "state_var.m"
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
#line 407 "state_var.m"
  {
#line 407 "state_var.m"
    MR_bool hlds__make_hlds__state_var__succeeded;

#line 407 "state_var.m"
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "state_var.m"
      *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 407 "state_var.m"
    else
#line 408 "state_var.m"
      {
#line 408 "state_var.m"
        MR_Word hlds__make_hlds__state_var__HeadArg0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TailArgs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
#line 408 "state_var.m"
        MR_Word hlds__make_hlds__state_var__TailArgs_6;

#line 409 "state_var.m"
        {
#line 409 "state_var.m"
          hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__state_var__TailArgs0_4, &hlds__make_hlds__state_var__TailArgs_6);
        }
#line 413 "state_var.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadArg0_3)) == (MR_mktag((MR_Integer) 0))))
#line 414 "state_var.m"
          {
#line 414 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Const_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 0)));
#line 414 "state_var.m"
            MR_Word hlds__make_hlds__state_var__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 1)));
#line 414 "state_var.m"
            MR_Word hlds__make_hlds__state_var__Ctxt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 2)));
#line 416 "state_var.m"
            MR_String hlds__make_hlds__state_var__V_16_16;
#line 416 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_17_17;
#line 416 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_18_18;
#line 417 "state_var.m"
            MR_Word hlds__make_hlds__state_var___StateVar_12;
#line 417 "state_var.m"
            MR_Word hlds__make_hlds__state_var__V_13_13;

#line 416 "state_var.m"
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Const_9)) == (MR_mktag((MR_Integer) 0)));
#line 416 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 416 "state_var.m"
              {
#line 416 "state_var.m"
                hlds__make_hlds__state_var__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Const_9, (MR_Integer) 0)));
#line 416 "state_var.m"
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__V_16_16, (MR_String) "!") == 0);
#line 416 "state_var.m"
                if (hlds__make_hlds__state_var__succeeded)
#line 416 "state_var.m"
                  {
#line 417 "state_var.m"
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 417 "state_var.m"
                    if (hlds__make_hlds__state_var__succeeded)
#line 417 "state_var.m"
                      {
#line 417 "state_var.m"
                        hlds__make_hlds__state_var__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__FunctorArgs_10, (MR_Integer) 0)));
#line 417 "state_var.m"
                        hlds__make_hlds__state_var__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__FunctorArgs_10, (MR_Integer) 1)));
#line 417 "state_var.m"
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 417 "state_var.m"
                        if (hlds__make_hlds__state_var__succeeded)
#line 417 "state_var.m"
                          {
#line 417 "state_var.m"
                            hlds__make_hlds__state_var___StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, (MR_Integer) 0)));
#line 417 "state_var.m"
                            hlds__make_hlds__state_var__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_17_17, (MR_Integer) 1)));
#line 417 "state_var.m"
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "state_var.m"
                          }
#line 417 "state_var.m"
                      }
#line 416 "state_var.m"
                  }
#line 416 "state_var.m"
              }
#line 422 "state_var.m"
            if (hlds__make_hlds__state_var__succeeded)
#line 419 "state_var.m"
              {
#line 419 "state_var.m"
                MR_Word hlds__make_hlds__state_var__HeadArg1_14;
#line 419 "state_var.m"
                MR_Word hlds__make_hlds__state_var__HeadArg2_15;
#line 419 "state_var.m"
                MR_Word hlds__make_hlds__state_var__V_23_23;

#line 419 "state_var.m"
                {
#line 419 "state_var.m"
                  hlds__make_hlds__state_var__HeadArg1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 419 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[0]));
#line 419 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 1) = ((MR_Box) (hlds__make_hlds__state_var__FunctorArgs_10));
#line 419 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 2) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_11));
#line 419 "state_var.m"
                }
#line 420 "state_var.m"
                {
#line 420 "state_var.m"
                  hlds__make_hlds__state_var__HeadArg2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 420 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[1]));
#line 420 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__FunctorArgs_10));
#line 420 "state_var.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 2) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_11));
#line 420 "state_var.m"
                }
#line 421 "state_var.m"
                {
#line 421 "state_var.m"
                  hlds__make_hlds__state_var__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg2_15));
#line 421 "state_var.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
#line 421 "state_var.m"
                }
#line 421 "state_var.m"
                {
#line 421 "state_var.m"
                  MR_Word base;
#line 421 "state_var.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "state_var.m"
                  *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 421 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg1_14));
#line 421 "state_var.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__V_23_23));
#line 421 "state_var.m"
                }
#line 419 "state_var.m"
              }
#line 422 "state_var.m"
            else
#line 423 "state_var.m"
              {
#line 423 "state_var.m"
                MR_Word base;
#line 423 "state_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "state_var.m"
                *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 423 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg0_3));
#line 423 "state_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
#line 423 "state_var.m"
              }
#line 414 "state_var.m"
          }
#line 413 "state_var.m"
        else
#line 412 "state_var.m"
          {
#line 412 "state_var.m"
            MR_Word base;
#line 412 "state_var.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "state_var.m"
            *hlds__make_hlds__state_var__HeadVar__2_2 = base;
#line 412 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg0_3));
#line 412 "state_var.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
#line 412 "state_var.m"
          }
#line 408 "state_var.m"
      }
#line 407 "state_var.m"
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
