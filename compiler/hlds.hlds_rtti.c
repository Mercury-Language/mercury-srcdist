/*
** Automatically generated from `hlds_rtti.m'
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


/* :- module hlds.hlds_rtti. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#include "hlds.hlds_rtti.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 141 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 150 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 153 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 156 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 159 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 162 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 171 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 174 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 177 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 180 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 183 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 186 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 189 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

#line 192 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

#line 195 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

#line 198 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

#line 201 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

#line 204 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

#line 207 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 210 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 213 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0;

#line 216 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

#line 219 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

#line 222 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

#line 225 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

#line 228 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

#line 231 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

#line 234 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

#line 237 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

#line 240 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

#line 243 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

#line 246 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

#line 249 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

#line 252 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

#line 255 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

#line 258 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

#line 261 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

#line 264 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

#line 267 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

#line 270 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

#line 273 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 276 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 279 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 282 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 285 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

#line 288 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

#line 291 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

#line 294 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

#line 297 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

#line 300 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

#line 303 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

#line 306 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

#line 309 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

#line 312 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

#line 315 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

#line 318 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

#line 321 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

#line 324 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

#line 327 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

#line 330 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

#line 333 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 336 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 338 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 341 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 344 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 346 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 348 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 351 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 354 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 356 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 359 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 362 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 364 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 366 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 369 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 372 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 374 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 377 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 380 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 382 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 384 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 387 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 390 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 392 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 395 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 398 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 400 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 402 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 405 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 408 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 410 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 413 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 416 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 418 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 420 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 423 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 426 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 428 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 431 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 434 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 436 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 438 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 441 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 444 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 446 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 449 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 452 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 454 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 456 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 459 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 462 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 464 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 467 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 470 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 472 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 474 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 477 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 480 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 482 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 485 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 488 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 490 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 492 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 495 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 498 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 500 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 503 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 506 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 508 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 510 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__888__1_3_p_0(
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_22,
#line 888 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_23);

#line 670 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__670__1_3_p_0(
#line 670 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 670 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 670 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21);

#line 367 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__367__1_2_f_0(
#line 367 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 367 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_31);

#line 415 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 415 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 415 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 473 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 473 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 473 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 461 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 461 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 461 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 467 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 467 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 467 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 888 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2);

#line 869 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 869 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4);

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 824 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 824 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15);

#line 790 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 790 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 769 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 769 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 740 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 740 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37);

#line 722 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 722 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18);

#line 675 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 675 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 675 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 675 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);

#line 543 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 543 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 543 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 543 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 543 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 543 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 543 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6);

#line 525 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 525 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 525 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 525 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 525 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4);

#line 504 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 504 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 504 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 504 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 504 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4);

#line 818 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 818 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 815 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 815 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 707 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 707 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 705 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 705 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 703 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 703 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 701 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 701 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 671 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 671 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 670 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 670 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 367 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 367 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 367 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_7[1][1];




static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1153 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1161 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1169 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1177 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1186 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1194 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1202 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1211 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1220 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1229 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1238 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1246 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1255 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1264 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1273 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1283 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1291 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1299 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

#line 1307 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0 = {
  (MR_String) "instance_method_constraints",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0,
  NULL,
  NULL,
  NULL
};

#line 1322 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1327 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0
  }
};

#line 1336 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1341 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1346 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "instance_method_constraints",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0
};

#line 1363 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____prog_var_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____prog_var_name_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "prog_var_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1380 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1389 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  }
};

#line 1397 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0
  }
};

#line 1405 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_origin_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1425 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16] = {
  (MR_String) "rpl_pred_or_func",
  (MR_String) "rpl_this_module",
  (MR_String) "rpl_proc_module",
  (MR_String) "rpl_proc_name",
  (MR_String) "rpl_proc_arity",
  (MR_String) "rpl_proc_arg_types",
  (MR_String) "rpl_pred_id",
  (MR_String) "rpl_proc_id",
  (MR_String) "rpl_proc_headvars",
  (MR_String) "rpl_proc_arg_modes",
  (MR_String) "rpl_proc_interface_detism",
  (MR_String) "rpl_pred_is_imported",
  (MR_String) "rpl_pred_is_pseudo_imported",
  (MR_String) "rpl_pred_info_origin",
  (MR_String) "rpl_proc_is_exported",
  (MR_String) "rpl_proc_is_imported"
};

#line 1445 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

#line 1529 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0 = {
  (MR_String) "rtti_proc_label",
  (MR_Integer) 16,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0,
  NULL
};

#line 1544 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1549 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0
  }
};

#line 1558 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1563 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

#line 1568 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_proc_label",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0
};

#line 1585 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1590 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0 = {
  (MR_String) "type_info_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1605 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1610 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1 = {
  (MR_String) "typeclass_info_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 1625 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2 = {
  (MR_String) "non_rtti_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1640 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

#line 1645 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

#line 1650 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1655 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2
  }
};

#line 1674 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1681 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1688 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_var_info",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0
};

#line 1705 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1714 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1723 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1732 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1741 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1749 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

#line 1757 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0 = {
  (MR_String) "rtti_varmaps",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0,
  NULL,
  NULL
};

#line 1772 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1777 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0
  }
};

#line 1786 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1791 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

#line 1796 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_varmaps",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0
};

#line 1813 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1818 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0 = {
  (MR_String) "type_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0,
  NULL,
  NULL,
  NULL
};

#line 1833 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1839 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1 = {
  (MR_String) "typeclass_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1,
  NULL,
  NULL,
  NULL
};

#line 1854 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

#line 1859 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1864 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1
  }
};

#line 1878 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1884 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1890 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_locn_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_locn",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0
};

#line 1907 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1924 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1941 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1958 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1975 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 1978 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 1980 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 1982 "hlds.hlds_rtti.c"
{
#line 1984 "hlds.hlds_rtti.c"
  {
#line 1986 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 1989 "hlds.hlds_rtti.c"
    {
#line 1991 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 1994 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 1996 "hlds.hlds_rtti.c"
  }
#line 1998 "hlds.hlds_rtti.c"
}

#line 2001 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 2004 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2006 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2008 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2010 "hlds.hlds_rtti.c"
{
#line 2012 "hlds.hlds_rtti.c"
  {
#line 2014 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2017 "hlds.hlds_rtti.c"
    {
#line 2019 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2022 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2024 "hlds.hlds_rtti.c"
  }
#line 2026 "hlds.hlds_rtti.c"
}

#line 2029 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 2032 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2034 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2036 "hlds.hlds_rtti.c"
{
#line 2038 "hlds.hlds_rtti.c"
  {
#line 2040 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2043 "hlds.hlds_rtti.c"
    {
#line 2045 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) hlds__hlds_rtti__wrapper_arg_1), ((MR_String) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2048 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2050 "hlds.hlds_rtti.c"
  }
#line 2052 "hlds.hlds_rtti.c"
}

#line 2055 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 2058 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2060 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2062 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2064 "hlds.hlds_rtti.c"
{
#line 2066 "hlds.hlds_rtti.c"
  {
#line 2068 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2071 "hlds.hlds_rtti.c"
    {
#line 2073 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____prog_var_name_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_String) hlds__hlds_rtti__wrapper_arg_2), ((MR_String) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2076 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2078 "hlds.hlds_rtti.c"
  }
#line 2080 "hlds.hlds_rtti.c"
}

#line 2083 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 2086 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2088 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2090 "hlds.hlds_rtti.c"
{
#line 2092 "hlds.hlds_rtti.c"
  {
#line 2094 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2097 "hlds.hlds_rtti.c"
    {
#line 2099 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2102 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2104 "hlds.hlds_rtti.c"
  }
#line 2106 "hlds.hlds_rtti.c"
}

#line 2109 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 2112 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2114 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2116 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2118 "hlds.hlds_rtti.c"
{
#line 2120 "hlds.hlds_rtti.c"
  {
#line 2122 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2125 "hlds.hlds_rtti.c"
    {
#line 2127 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2130 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2132 "hlds.hlds_rtti.c"
  }
#line 2134 "hlds.hlds_rtti.c"
}

#line 2137 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 2140 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2142 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2144 "hlds.hlds_rtti.c"
{
#line 2146 "hlds.hlds_rtti.c"
  {
#line 2148 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2151 "hlds.hlds_rtti.c"
    {
#line 2153 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2156 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2158 "hlds.hlds_rtti.c"
  }
#line 2160 "hlds.hlds_rtti.c"
}

#line 2163 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 2166 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2168 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2170 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2172 "hlds.hlds_rtti.c"
{
#line 2174 "hlds.hlds_rtti.c"
  {
#line 2176 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2179 "hlds.hlds_rtti.c"
    {
#line 2181 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_var_info_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2184 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2186 "hlds.hlds_rtti.c"
  }
#line 2188 "hlds.hlds_rtti.c"
}

#line 2191 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 2194 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2196 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2198 "hlds.hlds_rtti.c"
{
#line 2200 "hlds.hlds_rtti.c"
  {
#line 2202 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2205 "hlds.hlds_rtti.c"
    {
#line 2207 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2210 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2212 "hlds.hlds_rtti.c"
  }
#line 2214 "hlds.hlds_rtti.c"
}

#line 2217 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 2220 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2222 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2224 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2226 "hlds.hlds_rtti.c"
{
#line 2228 "hlds.hlds_rtti.c"
  {
#line 2230 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2233 "hlds.hlds_rtti.c"
    {
#line 2235 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2238 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2240 "hlds.hlds_rtti.c"
  }
#line 2242 "hlds.hlds_rtti.c"
}

#line 2245 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 2248 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2250 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2252 "hlds.hlds_rtti.c"
{
#line 2254 "hlds.hlds_rtti.c"
  {
#line 2256 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2259 "hlds.hlds_rtti.c"
    {
#line 2261 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2264 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2266 "hlds.hlds_rtti.c"
  }
#line 2268 "hlds.hlds_rtti.c"
}

#line 2271 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 2274 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2276 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2278 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2280 "hlds.hlds_rtti.c"
{
#line 2282 "hlds.hlds_rtti.c"
  {
#line 2284 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2287 "hlds.hlds_rtti.c"
    {
#line 2289 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_locn_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2292 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2294 "hlds.hlds_rtti.c"
  }
#line 2296 "hlds.hlds_rtti.c"
}

#line 2299 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 2302 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2304 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2306 "hlds.hlds_rtti.c"
{
#line 2308 "hlds.hlds_rtti.c"
  {
#line 2310 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2313 "hlds.hlds_rtti.c"
    {
#line 2315 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2318 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2320 "hlds.hlds_rtti.c"
  }
#line 2322 "hlds.hlds_rtti.c"
}

#line 2325 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 2328 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2330 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2332 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2334 "hlds.hlds_rtti.c"
{
#line 2336 "hlds.hlds_rtti.c"
  {
#line 2338 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2341 "hlds.hlds_rtti.c"
    {
#line 2343 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_type_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2346 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2348 "hlds.hlds_rtti.c"
  }
#line 2350 "hlds.hlds_rtti.c"
}

#line 2353 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 2356 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2358 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2360 "hlds.hlds_rtti.c"
{
#line 2362 "hlds.hlds_rtti.c"
  {
#line 2364 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2367 "hlds.hlds_rtti.c"
    {
#line 2369 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2372 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2374 "hlds.hlds_rtti.c"
  }
#line 2376 "hlds.hlds_rtti.c"
}

#line 2379 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 2382 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2384 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2386 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2388 "hlds.hlds_rtti.c"
{
#line 2390 "hlds.hlds_rtti.c"
  {
#line 2392 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2395 "hlds.hlds_rtti.c"
    {
#line 2397 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2400 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2402 "hlds.hlds_rtti.c"
  }
#line 2404 "hlds.hlds_rtti.c"
}

#line 2407 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 2410 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2412 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2414 "hlds.hlds_rtti.c"
{
#line 2416 "hlds.hlds_rtti.c"
  {
#line 2418 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2421 "hlds.hlds_rtti.c"
    {
#line 2423 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2426 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2428 "hlds.hlds_rtti.c"
  }
#line 2430 "hlds.hlds_rtti.c"
}

#line 2433 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 2436 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2438 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2440 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2442 "hlds.hlds_rtti.c"
{
#line 2444 "hlds.hlds_rtti.c"
  {
#line 2446 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2449 "hlds.hlds_rtti.c"
    {
#line 2451 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2454 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2456 "hlds.hlds_rtti.c"
  }
#line 2458 "hlds.hlds_rtti.c"
}

#line 2461 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 2464 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2466 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2468 "hlds.hlds_rtti.c"
{
#line 2470 "hlds.hlds_rtti.c"
  {
#line 2472 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2475 "hlds.hlds_rtti.c"
    {
#line 2477 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2480 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2482 "hlds.hlds_rtti.c"
  }
#line 2484 "hlds.hlds_rtti.c"
}

#line 2487 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 2490 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2492 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2494 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2496 "hlds.hlds_rtti.c"
{
#line 2498 "hlds.hlds_rtti.c"
  {
#line 2500 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2503 "hlds.hlds_rtti.c"
    {
#line 2505 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2508 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2510 "hlds.hlds_rtti.c"
  }
#line 2512 "hlds.hlds_rtti.c"
}

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 835 "hlds_rtti.m"
{
#line 839 "hlds_rtti.m"
  {
#line 839 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_11;

#line 841 "hlds_rtti.m"
    {
#line 841 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Args0_10, &hlds__hlds_rtti__Args_11);
    }
#line 842 "hlds_rtti.m"
    {
#line 842 "hlds_rtti.m"
      MR_Word base;
#line 842 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "hlds_rtti.m"
      *hlds__hlds_rtti__Constraint_8 = base;
#line 842 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Name_9));
#line 842 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Args_11));
#line 842 "hlds_rtti.m"
    }
#line 839 "hlds_rtti.m"
  }
#line 835 "hlds_rtti.m"
}

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__888__1_3_p_0(
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_22,
#line 888 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_23)
#line 888 "hlds_rtti.m"
{
#line 888 "hlds_rtti.m"
  {
#line 888 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 888 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Locn_19;
#line 889 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_19;

#line 889 "hlds_rtti.m"
    {
#line 889 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TVarMap_3, ((MR_Box) (hlds__hlds_rtti__HeadVar__2_22)), &hlds__hlds_rtti__conv0_Locn_19);
    }
#line 889 "hlds_rtti.m"
    hlds__hlds_rtti__Locn_19 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_19);
#line 394 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_19)) == (MR_mktag((MR_Integer) 0))))
#line 394 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__3_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 394 "hlds_rtti.m"
    else
#line 395 "hlds_rtti.m"
      {
#line 395 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_32_32;

#line 395 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 395 "hlds_rtti.m"
        hlds__hlds_rtti__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 1)));
#line 395 "hlds_rtti.m"
      }
#line 888 "hlds_rtti.m"
  }
#line 888 "hlds_rtti.m"
}

#line 670 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__670__1_3_p_0(
#line 670 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 670 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 670 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21)
#line 670 "hlds_rtti.m"
{
#line 670 "hlds_rtti.m"
  {
#line 670 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 670 "hlds_rtti.m"
    {
#line 670 "hlds_rtti.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__HeadVar__1_19)), hlds__hlds_rtti__HeadVar__2_20, hlds__hlds_rtti__HeadVar__3_21);
#line 670 "hlds_rtti.m"
      return;
    }
#line 670 "hlds_rtti.m"
  }
#line 670 "hlds_rtti.m"
}

#line 367 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__367__1_2_f_0(
#line 367 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 367 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_31)
#line 367 "hlds_rtti.m"
{
#line 367 "hlds_rtti.m"
  {
#line 367 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 367 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__HeadVar__3_32;
#line 367 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Name_28;

#line 368 "hlds_rtti.m"
    {
#line 368 "hlds_rtti.m"
      hlds__hlds_rtti__Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__ProcVarSet_17, hlds__hlds_rtti__HeadVar__2_31);
    }
#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__HeadVar__3_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_32, 0) = ((MR_Box) (hlds__hlds_rtti__HeadVar__2_31));
#line 367 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_32, 1) = ((MR_Box) (hlds__hlds_rtti__Name_28));
#line 367 "hlds_rtti.m"
    }
#line 367 "hlds_rtti.m"
    return hlds__hlds_rtti__HeadVar__3_32;
#line 367 "hlds_rtti.m"
  }
#line 367 "hlds_rtti.m"
}

#line 415 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 415 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 415 "hlds_rtti.m"
{
#line 415 "hlds_rtti.m"
  {
#line 415 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 415 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 415 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 415 "hlds_rtti.m"
    {
#line 415 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 415 "hlds_rtti.m"
      return;
    }
#line 415 "hlds_rtti.m"
  }
#line 415 "hlds_rtti.m"
}

#line 415 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 415 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 415 "hlds_rtti.m"
{
#line 415 "hlds_rtti.m"
  {
#line 415 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 415 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 415 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 415 "hlds_rtti.m"
    {
#line 415 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 415 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 415 "hlds_rtti.m"
  }
#line 415 "hlds_rtti.m"
}

#line 473 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 473 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 473 "hlds_rtti.m"
{
#line 473 "hlds_rtti.m"
  {
#line 473 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 473 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 473 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 473 "hlds_rtti.m"
    {
#line 473 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 473 "hlds_rtti.m"
      return;
    }
#line 473 "hlds_rtti.m"
  }
#line 473 "hlds_rtti.m"
}

#line 473 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 473 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 473 "hlds_rtti.m"
{
#line 473 "hlds_rtti.m"
  {
#line 473 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 473 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 473 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 473 "hlds_rtti.m"
    {
#line 473 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 473 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 473 "hlds_rtti.m"
  }
#line 473 "hlds_rtti.m"
}

#line 461 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 461 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 461 "hlds_rtti.m"
{
#line 461 "hlds_rtti.m"
  {
#line 461 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 461 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 461 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 461 "hlds_rtti.m"
    {
#line 461 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 461 "hlds_rtti.m"
      return;
    }
#line 461 "hlds_rtti.m"
  }
#line 461 "hlds_rtti.m"
}

#line 461 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 461 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 461 "hlds_rtti.m"
{
#line 461 "hlds_rtti.m"
  {
#line 461 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 461 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 461 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 461 "hlds_rtti.m"
    {
#line 461 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 461 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 461 "hlds_rtti.m"
  }
#line 461 "hlds_rtti.m"
}

#line 467 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 467 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 467 "hlds_rtti.m"
{
#line 467 "hlds_rtti.m"
  {
#line 467 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 467 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 467 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 467 "hlds_rtti.m"
    {
#line 467 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 467 "hlds_rtti.m"
      return;
    }
#line 467 "hlds_rtti.m"
  }
#line 467 "hlds_rtti.m"
}

#line 467 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 467 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 467 "hlds_rtti.m"
{
#line 467 "hlds_rtti.m"
  {
#line 467 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 467 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 467 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 467 "hlds_rtti.m"
    {
#line 467 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 467 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 467 "hlds_rtti.m"
  }
#line 467 "hlds_rtti.m"
}

#line 123 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0(
#line 123 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 123 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 123 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 123 "hlds_rtti.m"
{
#line 123 "hlds_rtti.m"
  {
#line 123 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 123 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 123 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_18 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 123 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_17 == hlds__hlds_rtti__CastY_18);
#line 123 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 2952 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 123 "hlds_rtti.m"
    else
#line 123 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 123 "hlds_rtti.m"
      {
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 123 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 123 "hlds_rtti.m"
          {
#line 123 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 123 "hlds_rtti.m"
            {
#line 123 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_22_22)), ((MR_Box) (hlds__hlds_rtti__V_5_5)));
#line 123 "hlds_rtti.m"
              return;
            }
#line 123 "hlds_rtti.m"
          }
#line 123 "hlds_rtti.m"
        else
#line 2981 "hlds.hlds_rtti.c"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 123 "hlds_rtti.m"
      }
#line 123 "hlds_rtti.m"
    else
#line 123 "hlds_rtti.m"
      {
#line 123 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 123 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2996 "hlds.hlds_rtti.c"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 123 "hlds_rtti.m"
        else
#line 123 "hlds_rtti.m"
          {
#line 123 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 123 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 123 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_16_16;

#line 123 "hlds_rtti.m"
            {
#line 123 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], &hlds__hlds_rtti__V_16_16, ((MR_Box) (hlds__hlds_rtti__V_24_24)), ((MR_Box) (hlds__hlds_rtti__V_14_14)));
            }
#line 3014 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_16_16 == (MR_Integer) 0);
#line 123 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 123 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 123 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_16_16;
#line 123 "hlds_rtti.m"
            else
#line 123 "hlds_rtti.m"
              {
#line 123 "hlds_rtti.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_23_23, hlds__hlds_rtti__V_15_15);
#line 123 "hlds_rtti.m"
                return;
              }
#line 123 "hlds_rtti.m"
          }
#line 123 "hlds_rtti.m"
      }
#line 123 "hlds_rtti.m"
  }
#line 123 "hlds_rtti.m"
}

#line 123 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0(
#line 123 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 123 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 123 "hlds_rtti.m"
{
#line 123 "hlds_rtti.m"
  {
#line 123 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 123 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 123 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 123 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 123 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 123 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 123 "hlds_rtti.m"
    else
#line 123 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 123 "hlds_rtti.m"
      {
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_11_11;
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4;

#line 123 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 123 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 123 "hlds_rtti.m"
          {
#line 123 "hlds_rtti.m"
            hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3085 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_11_11 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3087 "hlds.hlds_rtti.c"
            {
#line 3089 "hlds.hlds_rtti.c"
              return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_11_11, ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_4_4)));
            }
#line 123 "hlds_rtti.m"
          }
#line 123 "hlds_rtti.m"
      }
#line 123 "hlds_rtti.m"
    else
#line 123 "hlds_rtti.m"
      {
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_12_12;
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 123 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7;
#line 123 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8;

#line 123 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 123 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 123 "hlds_rtti.m"
          {
#line 123 "hlds_rtti.m"
            hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "hlds_rtti.m"
            hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 3121 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_12_12 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3123 "hlds.hlds_rtti.c"
            {
#line 3125 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_12_12, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
            }
#line 123 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 3130 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_6_6 == hlds__hlds_rtti__V_8_8);
#line 123 "hlds_rtti.m"
          }
#line 123 "hlds_rtti.m"
      }
#line 123 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 123 "hlds_rtti.m"
  }
#line 123 "hlds_rtti.m"
}

#line 400 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
#line 400 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 400 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 400 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 400 "hlds_rtti.m"
{
#line 400 "hlds_rtti.m"
  {
#line 400 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 400 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 400 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 400 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 400 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3167 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 400 "hlds_rtti.m"
    else
#line 400 "hlds_rtti.m"
      {
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 400 "hlds_rtti.m"
        {
#line 400 "hlds_rtti.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], &hlds__hlds_rtti__V_12_12, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
        }
#line 3197 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 400 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 400 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 400 "hlds_rtti.m"
        else
#line 400 "hlds_rtti.m"
          {
#line 400 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 400 "hlds_rtti.m"
            {
#line 400 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 3217 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 400 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 400 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 400 "hlds_rtti.m"
            else
#line 400 "hlds_rtti.m"
              {
#line 400 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 400 "hlds_rtti.m"
                {
#line 400 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 3237 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 400 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 400 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 400 "hlds_rtti.m"
                else
#line 400 "hlds_rtti.m"
                  {
#line 400 "hlds_rtti.m"
                    {
#line 400 "hlds_rtti.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_7_7)), ((MR_Box) (hlds__hlds_rtti__V_11_11)));
#line 400 "hlds_rtti.m"
                      return;
                    }
#line 400 "hlds_rtti.m"
                  }
#line 400 "hlds_rtti.m"
              }
#line 400 "hlds_rtti.m"
          }
#line 400 "hlds_rtti.m"
      }
#line 400 "hlds_rtti.m"
  }
#line 400 "hlds_rtti.m"
}

#line 400 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
#line 400 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 400 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 400 "hlds_rtti.m"
{
#line 400 "hlds_rtti.m"
  {
#line 400 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 400 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 400 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 400 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 400 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 400 "hlds_rtti.m"
    else
#line 400 "hlds_rtti.m"
      {
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_16_16;
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 400 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 3320 "hlds.hlds_rtti.c"
        {
#line 3322 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
        }
#line 400 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
          {
#line 3329 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[2];
#line 3331 "hlds.hlds_rtti.c"
            {
#line 3333 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 400 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
              {
#line 3340 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[3];
#line 3342 "hlds.hlds_rtti.c"
                {
#line 3344 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 400 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 400 "hlds_rtti.m"
                  {
#line 3351 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__TypeInfo_16_16 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[4];
#line 3353 "hlds.hlds_rtti.c"
                    {
#line 3355 "hlds.hlds_rtti.c"
                      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_16_16, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                    }
#line 400 "hlds_rtti.m"
                  }
#line 400 "hlds_rtti.m"
              }
#line 400 "hlds_rtti.m"
          }
#line 400 "hlds_rtti.m"
      }
#line 400 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 400 "hlds_rtti.m"
  }
#line 400 "hlds_rtti.m"
}

#line 150 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0(
#line 150 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 150 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 150 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 150 "hlds_rtti.m"
{
#line 150 "hlds_rtti.m"
  {
#line 150 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 150 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 150 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 150 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_16 == hlds__hlds_rtti__CastY_17);
#line 150 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3397 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "hlds_rtti.m"
    else
#line 150 "hlds_rtti.m"
#line 150 "hlds_rtti.m"
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) {
#line 150 "hlds_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 150 "hlds_rtti.m"
        case (MR_Integer) 0:
#line 150 "hlds_rtti.m"
#line 150 "hlds_rtti.m"
          switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 150 "hlds_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 150 "hlds_rtti.m"
            case (MR_Integer) 0:
#line 150 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "hlds_rtti.m"
              break;
#line 150 "hlds_rtti.m"
            case (MR_Integer) 1:
#line 3421 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "hlds_rtti.m"
              break;
#line 150 "hlds_rtti.m"
            case (MR_Integer) 2:
#line 3427 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "hlds_rtti.m"
              break;
#line 150 "hlds_rtti.m"
          }
#line 150 "hlds_rtti.m"
          break;
#line 150 "hlds_rtti.m"
        case (MR_Integer) 1:
#line 150 "hlds_rtti.m"
          {
#line 150 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "hlds_rtti.m"
#line 150 "hlds_rtti.m"
            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 150 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 3449 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "hlds_rtti.m"
                break;
#line 150 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 150 "hlds_rtti.m"
                {
#line 150 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "hlds_rtti.m"
                  {
#line 150 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__V_5_5);
#line 150 "hlds_rtti.m"
                    return;
                  }
#line 150 "hlds_rtti.m"
                }
#line 150 "hlds_rtti.m"
                break;
#line 150 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 3473 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "hlds_rtti.m"
                break;
#line 150 "hlds_rtti.m"
            }
#line 150 "hlds_rtti.m"
          }
#line 150 "hlds_rtti.m"
          break;
#line 150 "hlds_rtti.m"
        case (MR_Integer) 2:
#line 150 "hlds_rtti.m"
          {
#line 150 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "hlds_rtti.m"
#line 150 "hlds_rtti.m"
            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 150 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 3497 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "hlds_rtti.m"
                break;
#line 150 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 3503 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "hlds_rtti.m"
                break;
#line 150 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 150 "hlds_rtti.m"
                {
#line 150 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "hlds_rtti.m"
                  {
#line 150 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_21_21, hlds__hlds_rtti__V_12_12);
#line 150 "hlds_rtti.m"
                    return;
                  }
#line 150 "hlds_rtti.m"
                }
#line 150 "hlds_rtti.m"
                break;
#line 150 "hlds_rtti.m"
            }
#line 150 "hlds_rtti.m"
          }
#line 150 "hlds_rtti.m"
          break;
#line 150 "hlds_rtti.m"
      }
#line 150 "hlds_rtti.m"
  }
#line 150 "hlds_rtti.m"
}

#line 150 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0(
#line 150 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 150 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 150 "hlds_rtti.m"
{
#line 150 "hlds_rtti.m"
  {
#line 150 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 150 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 150 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 150 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 150 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 150 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 150 "hlds_rtti.m"
    else
#line 150 "hlds_rtti.m"
#line 150 "hlds_rtti.m"
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) {
#line 150 "hlds_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 150 "hlds_rtti.m"
        case (MR_Integer) 0:
#line 150 "hlds_rtti.m"
          {
#line 150 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__CastX_7 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 150 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__CastY_8 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 150 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastY_8 == hlds__hlds_rtti__CastX_7);
#line 150 "hlds_rtti.m"
          }
#line 150 "hlds_rtti.m"
          break;
#line 150 "hlds_rtti.m"
        case (MR_Integer) 1:
#line 150 "hlds_rtti.m"
          {
#line 150 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_4_4;

#line 150 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 150 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 150 "hlds_rtti.m"
              {
#line 150 "hlds_rtti.m"
                hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3601 "hlds.hlds_rtti.c"
                {
#line 3603 "hlds.hlds_rtti.c"
                  return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_4_4);
                }
#line 150 "hlds_rtti.m"
              }
#line 150 "hlds_rtti.m"
          }
#line 150 "hlds_rtti.m"
          break;
#line 150 "hlds_rtti.m"
        case (MR_Integer) 2:
#line 150 "hlds_rtti.m"
          {
#line 150 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_6_6;

#line 150 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 150 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 150 "hlds_rtti.m"
              {
#line 150 "hlds_rtti.m"
                hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3629 "hlds.hlds_rtti.c"
                {
#line 3631 "hlds.hlds_rtti.c"
                  return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_6_6);
                }
#line 150 "hlds_rtti.m"
              }
#line 150 "hlds_rtti.m"
          }
#line 150 "hlds_rtti.m"
          break;
#line 150 "hlds_rtti.m"
      }
#line 150 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 150 "hlds_rtti.m"
  }
#line 150 "hlds_rtti.m"
}

#line 40 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0(
#line 40 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 40 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 40 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 40 "hlds_rtti.m"
{
#line 40 "hlds_rtti.m"
  {
#line 40 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 40 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_51 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 40 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_52 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 40 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_51 == hlds__hlds_rtti__CastY_52);
#line 40 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3673 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "hlds_rtti.m"
    else
#line 40 "hlds_rtti.m"
      {
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 40 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 5)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 6)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 7)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 8)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 9)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 11)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_36_36;
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_69_69 = (MR_Integer) hlds__hlds_rtti__V_4_4;
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_70_70 = (MR_Integer) hlds__hlds_rtti__V_20_20;

#line 40 "hlds_rtti.m"
        {
#line 40 "hlds_rtti.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_36_36, hlds__hlds_rtti__V_69_69, hlds__hlds_rtti__V_70_70);
        }
#line 3755 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_36_36 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_36_36;
#line 40 "hlds_rtti.m"
        else
#line 40 "hlds_rtti.m"
          {
#line 40 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_37_37;

#line 40 "hlds_rtti.m"
            {
#line 40 "hlds_rtti.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__V_37_37, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
            }
#line 3775 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_37_37 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_37_37;
#line 40 "hlds_rtti.m"
            else
#line 40 "hlds_rtti.m"
              {
#line 40 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_38_38;

#line 40 "hlds_rtti.m"
                {
#line 40 "hlds_rtti.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22);
                }
#line 3795 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_38_38 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_38_38;
#line 40 "hlds_rtti.m"
                else
#line 40 "hlds_rtti.m"
                  {
#line 40 "hlds_rtti.m"
                    MR_Word hlds__hlds_rtti__V_39_39;

#line 40 "hlds_rtti.m"
                    {
#line 40 "hlds_rtti.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_rtti__V_39_39, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_23_23);
                    }
#line 3815 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_39_39 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_39_39;
#line 40 "hlds_rtti.m"
                    else
#line 40 "hlds_rtti.m"
                      {
#line 40 "hlds_rtti.m"
                        MR_Word hlds__hlds_rtti__V_40_40;

#line 40 "hlds_rtti.m"
                        {
#line 40 "hlds_rtti.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_40_40, hlds__hlds_rtti__V_8_8, hlds__hlds_rtti__V_24_24);
                        }
#line 3835 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_40_40 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_40_40;
#line 40 "hlds_rtti.m"
                        else
#line 40 "hlds_rtti.m"
                          {
#line 40 "hlds_rtti.m"
                            MR_Word hlds__hlds_rtti__V_41_41;

#line 40 "hlds_rtti.m"
                            {
#line 40 "hlds_rtti.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_41_41, ((MR_Box) (hlds__hlds_rtti__V_9_9)), ((MR_Box) (hlds__hlds_rtti__V_25_25)));
                            }
#line 3855 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_41_41 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_41_41;
#line 40 "hlds_rtti.m"
                            else
#line 40 "hlds_rtti.m"
                              {
#line 40 "hlds_rtti.m"
                                MR_Word hlds__hlds_rtti__V_42_42;

#line 40 "hlds_rtti.m"
                                {
#line 40 "hlds_rtti.m"
                                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__hlds_rtti__V_42_42, hlds__hlds_rtti__V_10_10, hlds__hlds_rtti__V_26_26);
                                }
#line 3875 "hlds.hlds_rtti.c"
                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_42_42 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_42_42;
#line 40 "hlds_rtti.m"
                                else
#line 40 "hlds_rtti.m"
                                  {
#line 40 "hlds_rtti.m"
                                    MR_Word hlds__hlds_rtti__V_43_43;

#line 40 "hlds_rtti.m"
                                    {
#line 40 "hlds_rtti.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_43_43, hlds__hlds_rtti__V_11_11, hlds__hlds_rtti__V_27_27);
                                    }
#line 3895 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_43_43 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_43_43;
#line 40 "hlds_rtti.m"
                                    else
#line 40 "hlds_rtti.m"
                                      {
#line 40 "hlds_rtti.m"
                                        MR_Word hlds__hlds_rtti__V_44_44;

#line 40 "hlds_rtti.m"
                                        {
#line 40 "hlds_rtti.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[5], &hlds__hlds_rtti__V_44_44, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                        }
#line 3915 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_44_44 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_44_44;
#line 40 "hlds_rtti.m"
                                        else
#line 40 "hlds_rtti.m"
                                          {
#line 40 "hlds_rtti.m"
                                            MR_Word hlds__hlds_rtti__V_45_45;

#line 40 "hlds_rtti.m"
                                            {
#line 40 "hlds_rtti.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[6], &hlds__hlds_rtti__V_45_45, ((MR_Box) (hlds__hlds_rtti__V_13_13)), ((MR_Box) (hlds__hlds_rtti__V_29_29)));
                                            }
#line 3935 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_45_45 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_45_45;
#line 40 "hlds_rtti.m"
                                            else
#line 40 "hlds_rtti.m"
                                              {
#line 40 "hlds_rtti.m"
                                                MR_Word hlds__hlds_rtti__V_46_46;
#line 40 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_71_71 = (MR_Integer) hlds__hlds_rtti__V_14_14;
#line 40 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_72_72 = (MR_Integer) hlds__hlds_rtti__V_30_30;

#line 40 "hlds_rtti.m"
                                                {
#line 40 "hlds_rtti.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_46_46, hlds__hlds_rtti__V_71_71, hlds__hlds_rtti__V_72_72);
                                                }
#line 3959 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_46_46 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_46_46;
#line 40 "hlds_rtti.m"
                                                else
#line 40 "hlds_rtti.m"
                                                  {
#line 40 "hlds_rtti.m"
                                                    MR_Word hlds__hlds_rtti__V_47_47;
#line 40 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_73_73 = (MR_Integer) hlds__hlds_rtti__V_15_15;
#line 40 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_74_74 = (MR_Integer) hlds__hlds_rtti__V_31_31;

#line 40 "hlds_rtti.m"
                                                    {
#line 40 "hlds_rtti.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_47_47, hlds__hlds_rtti__V_73_73, hlds__hlds_rtti__V_74_74);
                                                    }
#line 3983 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_47_47 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_47_47;
#line 40 "hlds_rtti.m"
                                                    else
#line 40 "hlds_rtti.m"
                                                      {
#line 40 "hlds_rtti.m"
                                                        MR_Word hlds__hlds_rtti__V_48_48;
#line 40 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_75_75 = (MR_Integer) hlds__hlds_rtti__V_16_16;
#line 40 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_76_76 = (MR_Integer) hlds__hlds_rtti__V_32_32;

#line 40 "hlds_rtti.m"
                                                        {
#line 40 "hlds_rtti.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_75_75, hlds__hlds_rtti__V_76_76);
                                                        }
#line 4007 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_48_48 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_48_48;
#line 40 "hlds_rtti.m"
                                                        else
#line 40 "hlds_rtti.m"
                                                          {
#line 40 "hlds_rtti.m"
                                                            MR_Word hlds__hlds_rtti__V_49_49;

#line 40 "hlds_rtti.m"
                                                            {
#line 40 "hlds_rtti.m"
                                                              hlds__hlds_pred____Compare____pred_origin_0_0(&hlds__hlds_rtti__V_49_49, hlds__hlds_rtti__V_17_17, hlds__hlds_rtti__V_33_33);
                                                            }
#line 4027 "hlds.hlds_rtti.c"
                                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_49_49 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_49_49;
#line 40 "hlds_rtti.m"
                                                            else
#line 40 "hlds_rtti.m"
                                                              {
#line 40 "hlds_rtti.m"
                                                                MR_Word hlds__hlds_rtti__V_50_50;
#line 40 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_77_77 = (MR_Integer) hlds__hlds_rtti__V_18_18;
#line 40 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_78_78 = (MR_Integer) hlds__hlds_rtti__V_34_34;

#line 40 "hlds_rtti.m"
                                                                {
#line 40 "hlds_rtti.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_50_50, hlds__hlds_rtti__V_77_77, hlds__hlds_rtti__V_78_78);
                                                                }
#line 4051 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_50_50 == (MR_Integer) 0);
#line 40 "hlds_rtti.m"
                                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 40 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_50_50;
#line 40 "hlds_rtti.m"
                                                                else
#line 40 "hlds_rtti.m"
                                                                  {
#line 40 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_79_79 = (MR_Integer) hlds__hlds_rtti__V_19_19;
#line 40 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_80_80 = (MR_Integer) hlds__hlds_rtti__V_35_35;

#line 40 "hlds_rtti.m"
                                                                    {
#line 40 "hlds_rtti.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_79_79, hlds__hlds_rtti__V_80_80);
#line 40 "hlds_rtti.m"
                                                                      return;
                                                                    }
#line 40 "hlds_rtti.m"
                                                                  }
#line 40 "hlds_rtti.m"
                                                              }
#line 40 "hlds_rtti.m"
                                                          }
#line 40 "hlds_rtti.m"
                                                      }
#line 40 "hlds_rtti.m"
                                                  }
#line 40 "hlds_rtti.m"
                                              }
#line 40 "hlds_rtti.m"
                                          }
#line 40 "hlds_rtti.m"
                                      }
#line 40 "hlds_rtti.m"
                                  }
#line 40 "hlds_rtti.m"
                              }
#line 40 "hlds_rtti.m"
                          }
#line 40 "hlds_rtti.m"
                      }
#line 40 "hlds_rtti.m"
                  }
#line 40 "hlds_rtti.m"
              }
#line 40 "hlds_rtti.m"
          }
#line 40 "hlds_rtti.m"
      }
#line 40 "hlds_rtti.m"
  }
#line 40 "hlds_rtti.m"
}

#line 40 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0(
#line 40 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 40 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 40 "hlds_rtti.m"
{
#line 40 "hlds_rtti.m"
  {
#line 40 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 40 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_35 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 40 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_36 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 40 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_35 == hlds__hlds_rtti__CastY_36);
#line 40 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 40 "hlds_rtti.m"
    else
#line 40 "hlds_rtti.m"
      {
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_39_39;
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_42_42;
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 40 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 5)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 6)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 7)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 8)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 9)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 11)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 40 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 40 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4211 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_3_3 == hlds__hlds_rtti__V_19_19);
#line 40 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
          {
#line 4217 "hlds.hlds_rtti.c"
            {
#line 4219 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_20_20);
            }
#line 40 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
              {
#line 4226 "hlds.hlds_rtti.c"
                {
#line 4228 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
                }
#line 40 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                  {
#line 4235 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22) == 0);
#line 40 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                      {
#line 4241 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_7_7 == hlds__hlds_rtti__V_23_23);
#line 40 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                          {
#line 4247 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__TypeInfo_39_39 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4249 "hlds.hlds_rtti.c"
                            {
#line 4251 "hlds.hlds_rtti.c"
                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_39_39, ((MR_Box) (hlds__hlds_rtti__V_8_8)), ((MR_Box) (hlds__hlds_rtti__V_24_24)));
                            }
#line 40 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                              {
#line 4258 "hlds.hlds_rtti.c"
                                {
#line 4260 "hlds.hlds_rtti.c"
                                  hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_rtti__V_9_9, hlds__hlds_rtti__V_25_25);
                                }
#line 40 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                  {
#line 4267 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_10_10 == hlds__hlds_rtti__V_26_26);
#line 40 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                      {
#line 4273 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__TypeInfo_42_42 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[5];
#line 4275 "hlds.hlds_rtti.c"
                                        {
#line 4277 "hlds.hlds_rtti.c"
                                          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_42_42, ((MR_Box) (hlds__hlds_rtti__V_11_11)), ((MR_Box) (hlds__hlds_rtti__V_27_27)));
                                        }
#line 40 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                          {
#line 4284 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[6];
#line 4286 "hlds.hlds_rtti.c"
                                            {
#line 4288 "hlds.hlds_rtti.c"
                                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_43_43, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                            }
#line 40 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                              {
#line 4295 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == hlds__hlds_rtti__V_29_29);
#line 40 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                  {
#line 4301 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == hlds__hlds_rtti__V_30_30);
#line 40 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                      {
#line 4307 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_15_15 == hlds__hlds_rtti__V_31_31);
#line 40 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                          {
#line 4313 "hlds.hlds_rtti.c"
                                                            {
#line 4315 "hlds.hlds_rtti.c"
                                                              hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__V_32_32);
                                                            }
#line 40 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 40 "hlds_rtti.m"
                                                              {
#line 4322 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_17_17 == hlds__hlds_rtti__V_33_33);
#line 40 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 4326 "hlds.hlds_rtti.c"
                                                                  hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_18_18 == hlds__hlds_rtti__V_34_34);
#line 40 "hlds_rtti.m"
                                                              }
#line 40 "hlds_rtti.m"
                                                          }
#line 40 "hlds_rtti.m"
                                                      }
#line 40 "hlds_rtti.m"
                                                  }
#line 40 "hlds_rtti.m"
                                              }
#line 40 "hlds_rtti.m"
                                          }
#line 40 "hlds_rtti.m"
                                      }
#line 40 "hlds_rtti.m"
                                  }
#line 40 "hlds_rtti.m"
                              }
#line 40 "hlds_rtti.m"
                          }
#line 40 "hlds_rtti.m"
                      }
#line 40 "hlds_rtti.m"
                  }
#line 40 "hlds_rtti.m"
              }
#line 40 "hlds_rtti.m"
          }
#line 40 "hlds_rtti.m"
      }
#line 40 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 40 "hlds_rtti.m"
  }
#line 40 "hlds_rtti.m"
}

#line 34 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0(
#line 34 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 34 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2,
#line 34 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__3_3)
#line 34 "hlds_rtti.m"
{
#line 34 "hlds_rtti.m"
  {
#line 34 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 34 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 34 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 34 "hlds_rtti.m"
    {
#line 34 "hlds_rtti.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Cast_HeadVar1_4, hlds__hlds_rtti__Cast_HeadVar2_5);
#line 34 "hlds_rtti.m"
      return;
    }
#line 34 "hlds_rtti.m"
  }
#line 34 "hlds_rtti.m"
}

#line 34 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0(
#line 34 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__1_1,
#line 34 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2)
#line 34 "hlds_rtti.m"
{
#line 34 "hlds_rtti.m"
  {
#line 34 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 34 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 34 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 34 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__Cast_HeadVar1_3, hlds__hlds_rtti__Cast_HeadVar2_4) == 0);
#line 34 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 34 "hlds_rtti.m"
  }
#line 34 "hlds_rtti.m"
}

#line 106 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0(
#line 106 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 106 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 106 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 106 "hlds_rtti.m"
{
#line 106 "hlds_rtti.m"
  {
#line 106 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 106 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 106 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 106 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 106 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 4448 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "hlds_rtti.m"
    else
#line 106 "hlds_rtti.m"
      {
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 106 "hlds_rtti.m"
        {
#line 106 "hlds_rtti.m"
          parse_tree__prog_data____Compare____class_id_0_0(&hlds__hlds_rtti__V_12_12, hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_8_8);
        }
#line 4478 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 106 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 106 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 106 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 106 "hlds_rtti.m"
        else
#line 106 "hlds_rtti.m"
          {
#line 106 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 106 "hlds_rtti.m"
            {
#line 106 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 4498 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 106 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 106 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 106 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 106 "hlds_rtti.m"
            else
#line 106 "hlds_rtti.m"
              {
#line 106 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 106 "hlds_rtti.m"
                {
#line 106 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[4], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 4518 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 106 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 106 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 106 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 106 "hlds_rtti.m"
                else
#line 106 "hlds_rtti.m"
                  {
#line 106 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraints_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_11_11);
#line 106 "hlds_rtti.m"
                    return;
                  }
#line 106 "hlds_rtti.m"
              }
#line 106 "hlds_rtti.m"
          }
#line 106 "hlds_rtti.m"
      }
#line 106 "hlds_rtti.m"
  }
#line 106 "hlds_rtti.m"
}

#line 106 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0(
#line 106 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 106 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 106 "hlds_rtti.m"
{
#line 106 "hlds_rtti.m"
  {
#line 106 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 106 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 106 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 106 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 106 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 106 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 106 "hlds_rtti.m"
    else
#line 106 "hlds_rtti.m"
      {
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 4595 "hlds.hlds_rtti.c"
        {
#line 4597 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____class_id_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_7_7);
        }
#line 106 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 106 "hlds_rtti.m"
          {
#line 4604 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4606 "hlds.hlds_rtti.c"
            {
#line 4608 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 106 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 106 "hlds_rtti.m"
              {
#line 4615 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[4];
#line 4617 "hlds.hlds_rtti.c"
                {
#line 4619 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 106 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 4624 "hlds.hlds_rtti.c"
                  {
#line 4626 "hlds.hlds_rtti.c"
                    return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_10_10);
                  }
#line 106 "hlds_rtti.m"
              }
#line 106 "hlds_rtti.m"
          }
#line 106 "hlds_rtti.m"
      }
#line 106 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 106 "hlds_rtti.m"
  }
#line 106 "hlds_rtti.m"
}

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 888 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2)
#line 888 "hlds_rtti.m"
{
#line 888 "hlds_rtti.m"
  {
#line 888 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 888 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_23;

#line 888 "hlds_rtti.m"
    {
#line 888 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__888__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), &hlds__hlds_rtti__conv0_HeadVar__3_23);
    }
#line 888 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_23));
#line 888 "hlds_rtti.m"
  }
#line 888 "hlds_rtti.m"
}

#line 869 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 869 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4)
#line 869 "hlds_rtti.m"
{
#line 872 "hlds_rtti.m"
  while (MR_TRUE)
#line 872 "hlds_rtti.m"
    {
#line 872 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 872 "hlds_rtti.m"
      {
#line 872 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 872 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "hlds_rtti.m"
        else
#line 873 "hlds_rtti.m"
          {
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Type_12;
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeVars_13;

#line 874 "hlds_rtti.m"
            {
#line 874 "hlds_rtti.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__Var_7, &hlds__hlds_rtti__Type_12);
            }
#line 875 "hlds_rtti.m"
            {
#line 875 "hlds_rtti.m"
              parse_tree__prog_type__type_vars_2_p_0(hlds__hlds_rtti__Type_12, &hlds__hlds_rtti__TypeVars_13);
            }
#line 880 "hlds_rtti.m"
            if ((hlds__hlds_rtti__TypeVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "hlds_rtti.m"
              {
#line 879 "hlds_rtti.m"
                /* direct tailcall eliminated */
#line 879 "hlds_rtti.m"
                {
#line 879 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__Vars_8;

#line 879 "hlds_rtti.m"
                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 879 "hlds_rtti.m"
                }
#line 879 "hlds_rtti.m"
                continue;
#line 879 "hlds_rtti.m"
              }
#line 880 "hlds_rtti.m"
            else
#line 881 "hlds_rtti.m"
              {
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfo_29_29;
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__LookupVar_16;
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsHead_20;
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsTail_21;

#line 888 "hlds_rtti.m"
                {
#line 888 "hlds_rtti.m"
                  hlds__hlds_rtti__LookupVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1));
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 3) = ((MR_Box) (hlds__hlds_rtti__TVarMap_3));
#line 888 "hlds_rtti.m"
                }
#line 4769 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 892 "hlds_rtti.m"
                {
#line 892 "hlds_rtti.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__LookupVar_16, hlds__hlds_rtti__TypeVars_13, &hlds__hlds_rtti__TypeInfoVarsHead_20);
                }
#line 894 "hlds_rtti.m"
                {
#line 894 "hlds_rtti.m"
                  hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__Vars_8, hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__TVarMap_3, &hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 895 "hlds_rtti.m"
                {
#line 895 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfoVarsHead_20, hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 881 "hlds_rtti.m"
              }
#line 873 "hlds_rtti.m"
          }
#line 872 "hlds_rtti.m"
      }
#line 872 "hlds_rtti.m"
      break;
#line 872 "hlds_rtti.m"
    }
#line 869 "hlds_rtti.m"
}

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 835 "hlds_rtti.m"
{
#line 839 "hlds_rtti.m"
  {
#line 839 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 839 "hlds_rtti.m"
    {
#line 839 "hlds_rtti.m"
      hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Constraint0_7, hlds__hlds_rtti__Constraint_8);
#line 839 "hlds_rtti.m"
      return;
    }
#line 839 "hlds_rtti.m"
  }
#line 835 "hlds_rtti.m"
}

#line 824 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 824 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15)
#line 824 "hlds_rtti.m"
{
#line 829 "hlds_rtti.m"
  {
#line 829 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_12;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_13;

#line 831 "hlds_rtti.m"
    {
#line 831 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__Pred_6, hlds__hlds_rtti__Args0_11, &hlds__hlds_rtti__Args_12);
    }
#line 832 "hlds_rtti.m"
    {
#line 832 "hlds_rtti.m"
      hlds__hlds_rtti__Constraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 0) = ((MR_Box) (hlds__hlds_rtti__Name_10));
#line 832 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 1) = ((MR_Box) (hlds__hlds_rtti__Args_12));
#line 832 "hlds_rtti.m"
    }
#line 833 "hlds_rtti.m"
    {
#line 833 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_13)), ((MR_Box) (hlds__hlds_rtti__Var_8)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_14, hlds__hlds_rtti__STATE_VARIABLE_Map_15);
#line 833 "hlds_rtti.m"
      return;
    }
#line 829 "hlds_rtti.m"
  }
#line 824 "hlds_rtti.m"
}

#line 790 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 790 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 790 "hlds_rtti.m"
{
#line 796 "hlds_rtti.m"
  {
#line 796 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 796 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 796 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 796 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 718 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_32;
#line 716 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_33;
#line 716 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_32;
#line 807 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingConstraint_17;
#line 801 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingConstraint_17;

#line 797 "hlds_rtti.m"
    {
#line 797 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_12, &hlds__hlds_rtti__Constraint1_14);
    }
#line 799 "hlds_rtti.m"
    {
#line 799 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 4936 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_33 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 716 "hlds_rtti.m"
    {
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_32);
    }
#line 716 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
      {
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_32 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_32);
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 716 "hlds_rtti.m"
      }
#line 718 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_32;
#line 718 "hlds_rtti.m"
    else
#line 719 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 801 "hlds_rtti.m"
    {
#line 801 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingConstraint_17);
    }
#line 801 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 801 "hlds_rtti.m"
      {
#line 801 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingConstraint_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingConstraint_17);
#line 801 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 801 "hlds_rtti.m"
      }
#line 807 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 804 "hlds_rtti.m"
      {
#line 802 "hlds_rtti.m"
        {
#line 802 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Constraint_15, hlds__hlds_rtti__ExistingConstraint_17);
        }
#line 804 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 803 "hlds_rtti.m"
          {
#line 803 "hlds_rtti.m"
          }
#line 804 "hlds_rtti.m"
        else
#line 805 "hlds_rtti.m"
          {
#line 805 "hlds_rtti.m"
            {
#line 805 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
#line 805 "hlds_rtti.m"
              return;
            }
#line 805 "hlds_rtti.m"
          }
#line 804 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 804 "hlds_rtti.m"
      }
#line 807 "hlds_rtti.m"
    else
#line 808 "hlds_rtti.m"
      {
#line 808 "hlds_rtti.m"
        {
#line 808 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Constraint_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
#line 808 "hlds_rtti.m"
          return;
        }
#line 808 "hlds_rtti.m"
      }
#line 796 "hlds_rtti.m"
  }
#line 790 "hlds_rtti.m"
}

#line 769 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 769 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 769 "hlds_rtti.m"
{
#line 773 "hlds_rtti.m"
  {
#line 773 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 773 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type1_14;
#line 773 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_15;
#line 773 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 718 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_61;
#line 716 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_62;
#line 716 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_61;
#line 786 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingType_17;
#line 777 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingType_17;

#line 774 "hlds_rtti.m"
    {
#line 774 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Type0_12, &hlds__hlds_rtti__Type1_14);
    }
#line 775 "hlds_rtti.m"
    {
#line 775 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Type1_14, &hlds__hlds_rtti__Type_15);
    }
#line 5076 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_62 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 716 "hlds_rtti.m"
    {
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_61);
    }
#line 716 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
      {
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_61 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_61);
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 716 "hlds_rtti.m"
      }
#line 718 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_61;
#line 718 "hlds_rtti.m"
    else
#line 719 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 777 "hlds_rtti.m"
    {
#line 777 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingType_17);
    }
#line 777 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 777 "hlds_rtti.m"
      {
#line 777 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingType_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingType_17);
#line 777 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 777 "hlds_rtti.m"
      }
#line 786 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 780 "hlds_rtti.m"
      {
#line 778 "hlds_rtti.m"
        {
#line 778 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Type_15, hlds__hlds_rtti__ExistingType_17);
        }
#line 780 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 779 "hlds_rtti.m"
          {
#line 779 "hlds_rtti.m"
          }
#line 780 "hlds_rtti.m"
        else
#line 781 "hlds_rtti.m"
          {
#line 781 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_22_22;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_28_28;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_31_31;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_39_39;
#line 781 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_45_45;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_47_47;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_48_48;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_55_55;

#line 784 "hlds_rtti.m"
            {
#line 784 "hlds_rtti.m"
              hlds__hlds_rtti__V_28_28 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__Type_15)));
            }
#line 784 "hlds_rtti.m"
            {
#line 784 "hlds_rtti.m"
              hlds__hlds_rtti__V_31_31 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__ExistingType_17)));
            }
#line 5164 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__V_45_45 = (MR_Word) &hlds__hlds_rtti_scalar_common_7[0];
#line 784 "hlds_rtti.m"
            {
#line 784 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_31_31, &hlds__hlds_rtti__V_39_39);
            }
#line 782 "hlds_rtti.m"
            {
#line 782 "hlds_rtti.m"
              hlds__hlds_rtti__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", hlds__hlds_rtti__V_39_39);
            }
#line 784 "hlds_rtti.m"
            {
#line 784 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_28_28, &hlds__hlds_rtti__V_48_48);
            }
#line 782 "hlds_rtti.m"
            {
#line 782 "hlds_rtti.m"
              hlds__hlds_rtti__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_47_47);
            }
#line 782 "hlds_rtti.m"
            {
#line 782 "hlds_rtti.m"
              hlds__hlds_rtti__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", hlds__hlds_rtti__V_55_55);
            }
#line 781 "hlds_rtti.m"
            {
#line 781 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", hlds__hlds_rtti__V_22_22);
#line 781 "hlds_rtti.m"
              return;
            }
#line 781 "hlds_rtti.m"
          }
#line 780 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 780 "hlds_rtti.m"
      }
#line 786 "hlds_rtti.m"
    else
#line 787 "hlds_rtti.m"
      {
#line 787 "hlds_rtti.m"
        {
#line 787 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Type_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
#line 787 "hlds_rtti.m"
          return;
        }
#line 787 "hlds_rtti.m"
      }
#line 773 "hlds_rtti.m"
  }
#line 769 "hlds_rtti.m"
}

#line 740 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 740 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 740 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37)
#line 740 "hlds_rtti.m"
{
#line 744 "hlds_rtti.m"
  {
#line 744 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 744 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_40_40;
#line 744 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewLocn_16;
#line 744 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewTVar1_17;
#line 744 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewType_18;
#line 744 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_38_38;

#line 5256 "hlds.hlds_rtti.c"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_12)) == (MR_mktag((MR_Integer) 0))))
#line 5258 "hlds.hlds_rtti.c"
      {
#line 5260 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5262 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_15;
#line 718 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_49;
#line 716 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_50 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 716 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Var1_49;

#line 716 "hlds_rtti.m"
        {
#line 716 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_14)), &hlds__hlds_rtti__conv0_Var1_49);
        }
#line 716 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
          {
#line 716 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_49 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_49);
#line 716 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 716 "hlds_rtti.m"
          }
#line 718 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var1_49;
#line 718 "hlds_rtti.m"
        else
#line 719 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var_14;
#line 397 "hlds_rtti.m"
        {
#line 397 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_15));
#line 397 "hlds_rtti.m"
        }
#line 5302 "hlds.hlds_rtti.c"
      }
#line 5304 "hlds.hlds_rtti.c"
    else
#line 5306 "hlds.hlds_rtti.c"
      {
#line 5308 "hlds.hlds_rtti.c"
        MR_Integer hlds__hlds_rtti__Num_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 1)));
#line 5310 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5312 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_60;
#line 718 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_57;
#line 716 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_56 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 716 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Var1_57;

#line 716 "hlds_rtti.m"
        {
#line 716 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_59)), &hlds__hlds_rtti__conv1_Var1_57);
        }
#line 716 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
          {
#line 716 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_57 = ((MR_Word) hlds__hlds_rtti__conv1_Var1_57);
#line 716 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 716 "hlds_rtti.m"
          }
#line 718 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var1_57;
#line 718 "hlds_rtti.m"
        else
#line 719 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var_59;
#line 398 "hlds_rtti.m"
        {
#line 398 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_60));
#line 398 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 1) = ((MR_Box) (hlds__hlds_rtti__Num_55));
#line 398 "hlds_rtti.m"
        }
#line 5354 "hlds.hlds_rtti.c"
      }
#line 748 "hlds_rtti.m"
    {
#line 748 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__TVar_11, &hlds__hlds_rtti__NewTVar1_17);
    }
#line 5361 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_40_40 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 751 "hlds_rtti.m"
    {
#line 751 "hlds_rtti.m"
      hlds__hlds_rtti__V_38_38 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 751 "hlds_rtti.m"
    {
#line 751 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__NewTVar1_17, &hlds__hlds_rtti__NewType_18);
    }
#line 759 "hlds_rtti.m"
#line 759 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__NewType_18)) {
#line 759 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 759 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 755 "hlds_rtti.m"
        {
#line 755 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__NewTVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)));
#line 755 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 1)));

#line 758 "hlds_rtti.m"
          {
#line 758 "hlds_rtti.m"
            mercury__map__set_4_p_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__NewTVar_19)), ((MR_Box) (hlds__hlds_rtti__NewLocn_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_36, hlds__hlds_rtti__STATE_VARIABLE_Map_37);
#line 758 "hlds_rtti.m"
            return;
          }
#line 755 "hlds_rtti.m"
        }
#line 759 "hlds_rtti.m"
        break;
#line 759 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 761 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 759 "hlds_rtti.m"
        break;
#line 759 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 760 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 759 "hlds_rtti.m"
        break;
#line 759 "hlds_rtti.m"
      case (MR_Integer) 3:
#line 759 "hlds_rtti.m"
#line 759 "hlds_rtti.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)))) {
#line 759 "hlds_rtti.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 759 "hlds_rtti.m"
          case (MR_Integer) 0:
#line 762 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 759 "hlds_rtti.m"
            break;
#line 759 "hlds_rtti.m"
          case (MR_Integer) 1:
#line 763 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 759 "hlds_rtti.m"
            break;
#line 759 "hlds_rtti.m"
          case (MR_Integer) 2:
#line 764 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 759 "hlds_rtti.m"
            break;
#line 759 "hlds_rtti.m"
          case (MR_Integer) 3:
#line 765 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 759 "hlds_rtti.m"
            break;
#line 759 "hlds_rtti.m"
        }
#line 759 "hlds_rtti.m"
        break;
#line 759 "hlds_rtti.m"
    }
#line 744 "hlds_rtti.m"
  }
#line 740 "hlds_rtti.m"
}

#line 722 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 722 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 722 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18)
#line 722 "hlds_rtti.m"
{
#line 726 "hlds_rtti.m"
  {
#line 726 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 726 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 726 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 726 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 718 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_25;
#line 716 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_26;
#line 716 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_25;

#line 727 "hlds_rtti.m"
    {
#line 727 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_11, &hlds__hlds_rtti__Constraint1_14);
    }
#line 729 "hlds_rtti.m"
    {
#line 729 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 5498 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 716 "hlds_rtti.m"
    {
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_12)), &hlds__hlds_rtti__conv0_Var1_25);
    }
#line 716 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
      {
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_25 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_25);
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 716 "hlds_rtti.m"
      }
#line 718 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_25;
#line 718 "hlds_rtti.m"
    else
#line 719 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_12;
#line 731 "hlds_rtti.m"
    {
#line 731 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_15)), ((MR_Box) (hlds__hlds_rtti__Var_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_17, hlds__hlds_rtti__STATE_VARIABLE_Map_18);
#line 731 "hlds_rtti.m"
      return;
    }
#line 726 "hlds_rtti.m"
  }
#line 722 "hlds_rtti.m"
}

#line 675 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 675 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 675 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 675 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9)
#line 675 "hlds_rtti.m"
{
#line 678 "hlds_rtti.m"
  {
#line 678 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 1)));
#line 679 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 0)));

#line 680 "hlds_rtti.m"
    {
#line 680 "hlds_rtti.m"
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__ArgTypes_7, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);
#line 680 "hlds_rtti.m"
      return;
    }
#line 678 "hlds_rtti.m"
  }
#line 675 "hlds_rtti.m"
}

#line 543 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 543 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 543 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 543 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 543 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 543 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 543 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6)
#line 543 "hlds_rtti.m"
{
#line 549 "hlds_rtti.m"
  while (MR_TRUE)
#line 549 "hlds_rtti.m"
    {
#line 549 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 549 "hlds_rtti.m"
      {
#line 549 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 549 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "hlds_rtti.m"
          {
#line 549 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 549 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 549 "hlds_rtti.m"
          }
#line 549 "hlds_rtti.m"
        else
#line 551 "hlds_rtti.m"
          {
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraint_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 0)));
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Constraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 1)));
#line 551 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_21;
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_22;
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;
#line 551 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 554 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_22;

#line 553 "hlds_rtti.m"
            {
#line 553 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_19);
            }
#line 554 "hlds_rtti.m"
            {
#line 554 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_21, &hlds__hlds_rtti__conv0_Used_22);
            }
#line 554 "hlds_rtti.m"
            hlds__hlds_rtti__Used_22 = ((MR_Word) hlds__hlds_rtti__conv0_Used_22);
#line 558 "hlds_rtti.m"
#line 558 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_22) {
#line 558 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 558 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 559 "hlds_rtti.m"
                {
#line 560 "hlds_rtti.m"
                  {
#line 560 "hlds_rtti.m"
                    mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_20)), hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5, &hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27);
                  }
#line 559 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 559 "hlds_rtti.m"
                }
#line 558 "hlds_rtti.m"
                break;
#line 558 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 556 "hlds_rtti.m"
                {
#line 557 "hlds_rtti.m"
                  {
#line 557 "hlds_rtti.m"
                    hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (hlds__hlds_rtti__VarConstraint_14));
#line 557 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3));
#line 557 "hlds_rtti.m"
                  }
#line 556 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 556 "hlds_rtti.m"
                }
#line 558 "hlds_rtti.m"
                break;
#line 558 "hlds_rtti.m"
            }
#line 562 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 562 "hlds_rtti.m"
            {
#line 562 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarConstraints_15;
#line 562 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 562 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;

#line 562 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5;
#line 562 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3;
#line 562 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 562 "hlds_rtti.m"
            }
#line 562 "hlds_rtti.m"
            continue;
#line 551 "hlds_rtti.m"
          }
#line 549 "hlds_rtti.m"
      }
#line 549 "hlds_rtti.m"
      break;
#line 549 "hlds_rtti.m"
    }
#line 543 "hlds_rtti.m"
}

#line 525 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 525 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 525 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 525 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 525 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4)
#line 525 "hlds_rtti.m"
{
#line 530 "hlds_rtti.m"
  while (MR_TRUE)
#line 530 "hlds_rtti.m"
    {
#line 530 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 530 "hlds_rtti.m"
      {
#line 530 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 530 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 530 "hlds_rtti.m"
        else
#line 531 "hlds_rtti.m"
          {
#line 531 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 531 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 531 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 0)));
#line 531 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_15;
#line 531 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_16;
#line 531 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;
#line 532 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 1)));
#line 534 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_16;

#line 533 "hlds_rtti.m"
            {
#line 533 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_13);
            }
#line 534 "hlds_rtti.m"
            {
#line 534 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_15, &hlds__hlds_rtti__conv0_Used_16);
            }
#line 534 "hlds_rtti.m"
            hlds__hlds_rtti__Used_16 = ((MR_Word) hlds__hlds_rtti__conv0_Used_16);
#line 538 "hlds_rtti.m"
#line 538 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_16) {
#line 538 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 538 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 539 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 538 "hlds_rtti.m"
                break;
#line 538 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 537 "hlds_rtti.m"
                {
#line 537 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (hlds__hlds_rtti__VarType_9));
#line 537 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3));
#line 537 "hlds_rtti.m"
                }
#line 538 "hlds_rtti.m"
                break;
#line 538 "hlds_rtti.m"
            }
#line 541 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 541 "hlds_rtti.m"
            {
#line 541 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarTypes_10;
#line 541 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;

#line 541 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3;
#line 541 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 541 "hlds_rtti.m"
            }
#line 541 "hlds_rtti.m"
            continue;
#line 531 "hlds_rtti.m"
          }
#line 530 "hlds_rtti.m"
      }
#line 530 "hlds_rtti.m"
      break;
#line 530 "hlds_rtti.m"
    }
#line 525 "hlds_rtti.m"
}

#line 504 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 504 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 504 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 504 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 504 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4)
#line 504 "hlds_rtti.m"
{
#line 509 "hlds_rtti.m"
  while (MR_TRUE)
#line 509 "hlds_rtti.m"
    {
#line 509 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 509 "hlds_rtti.m"
      {
#line 509 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 509 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 509 "hlds_rtti.m"
        else
#line 510 "hlds_rtti.m"
          {
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Locn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 1)));
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_15;
#line 510 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_17;
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_18;
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___TVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 0)));
#line 516 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_18;

#line 513 "hlds_rtti.m"
            if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_14)) == (MR_mktag((MR_Integer) 0))))
#line 512 "hlds_rtti.m"
              hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 513 "hlds_rtti.m"
            else
#line 513 "hlds_rtti.m"
              {
#line 513 "hlds_rtti.m"
                MR_Integer hlds__hlds_rtti__V_16_16;

#line 513 "hlds_rtti.m"
                hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 513 "hlds_rtti.m"
                hlds__hlds_rtti__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 1)));
#line 513 "hlds_rtti.m"
              }
#line 515 "hlds_rtti.m"
            {
#line 515 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_15);
            }
#line 516 "hlds_rtti.m"
            {
#line 516 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_17, &hlds__hlds_rtti__conv0_Used_18);
            }
#line 516 "hlds_rtti.m"
            hlds__hlds_rtti__Used_18 = ((MR_Word) hlds__hlds_rtti__conv0_Used_18);
#line 520 "hlds_rtti.m"
#line 520 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_18) {
#line 520 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 520 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 521 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 520 "hlds_rtti.m"
                break;
#line 520 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 519 "hlds_rtti.m"
                {
#line 519 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (hlds__hlds_rtti__TVarLocn_9));
#line 519 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3));
#line 519 "hlds_rtti.m"
                }
#line 520 "hlds_rtti.m"
                break;
#line 520 "hlds_rtti.m"
            }
#line 523 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 523 "hlds_rtti.m"
            {
#line 523 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__TVarLocns_10;
#line 523 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;

#line 523 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3;
#line 523 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 523 "hlds_rtti.m"
            }
#line 523 "hlds_rtti.m"
            continue;
#line 510 "hlds_rtti.m"
          }
#line 509 "hlds_rtti.m"
      }
#line 509 "hlds_rtti.m"
      break;
#line 509 "hlds_rtti.m"
    }
#line 504 "hlds_rtti.m"
}

#line 327 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars0_6,
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TypeInfoLiveness_7,
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_8,
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_9,
#line 327 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_10)
#line 327 "hlds_rtti.m"
{
#line 901 "hlds_rtti.m"
  {
#line 901 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 901 "hlds_rtti.m"
#line 901 "hlds_rtti.m"
    switch (hlds__hlds_rtti__TypeInfoLiveness_7) {
#line 901 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 901 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 906 "hlds_rtti.m"
        *hlds__hlds_rtti__Vars_10 = hlds__hlds_rtti__Vars0_6;
#line 901 "hlds_rtti.m"
        break;
#line 901 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 901 "hlds_rtti.m"
        {
#line 901 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeCtorInfo_15_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 901 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVars_11;
#line 901 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TVarMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 1)));
#line 901 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__VarList_18;
#line 901 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVarList_19;
#line 861 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 0)));
#line 861 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 2)));
#line 861 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 3)));

#line 862 "hlds_rtti.m"
          {
#line 862 "hlds_rtti.m"
            hlds__hlds_rtti__VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__Vars0_6);
          }
#line 863 "hlds_rtti.m"
          {
#line 863 "hlds_rtti.m"
            hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_18, hlds__hlds_rtti__VarTypes_8, hlds__hlds_rtti__TVarMap_17, &hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 864 "hlds_rtti.m"
          {
#line 864 "hlds_rtti.m"
            hlds__hlds_rtti__TypeInfoVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 903 "hlds_rtti.m"
          {
#line 903 "hlds_rtti.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Vars0_6, hlds__hlds_rtti__TypeInfoVars_11, hlds__hlds_rtti__Vars_10);
#line 903 "hlds_rtti.m"
            return;
          }
#line 901 "hlds_rtti.m"
        }
#line 901 "hlds_rtti.m"
        break;
#line 901 "hlds_rtti.m"
    }
#line 901 "hlds_rtti.m"
  }
#line 327 "hlds_rtti.m"
}

#line 324 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_4_p_0(
#line 324 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars_5,
#line 324 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_6,
#line 324 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_7,
#line 324 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TypeInfoVars_8)
#line 324 "hlds_rtti.m"
{
#line 860 "hlds_rtti.m"
  {
#line 860 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 1)));
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarList_10;
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfoVarList_11;
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 0)));
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 2)));
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 3)));

#line 862 "hlds_rtti.m"
    {
#line 862 "hlds_rtti.m"
      hlds__hlds_rtti__VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__Vars_5);
    }
#line 863 "hlds_rtti.m"
    {
#line 863 "hlds_rtti.m"
      hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_10, hlds__hlds_rtti__VarTypes_6, hlds__hlds_rtti__TVarMap_9, &hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 864 "hlds_rtti.m"
    {
#line 864 "hlds_rtti.m"
      *hlds__hlds_rtti__TypeInfoVars_8 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 860 "hlds_rtti.m"
  }
#line 324 "hlds_rtti.m"
}

#line 313 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(
#line 313 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsA_4,
#line 313 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsB_5,
#line 313 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarMaps_6)
#line 313 "hlds_rtti.m"
{
#line 844 "hlds_rtti.m"
  {
#line 844 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_20_20 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 0)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 1)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 2)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 3)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 0)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 1)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 2)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 3)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImap_15;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImap_16;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_17;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_18;

#line 849 "hlds_rtti.m"
    {
#line 849 "hlds_rtti.m"
      mercury__map__overlay_3_p_0(hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TCImapA_7, hlds__hlds_rtti__TCImapB_11, &hlds__hlds_rtti__TCImap_15);
    }
#line 850 "hlds_rtti.m"
    {
#line 850 "hlds_rtti.m"
      mercury__map__overlay_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TImapA_8, hlds__hlds_rtti__TImapB_12, &hlds__hlds_rtti__TImap_16);
    }
#line 853 "hlds_rtti.m"
    {
#line 853 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__TypeMapA_9, hlds__hlds_rtti__TypeMapB_13, &hlds__hlds_rtti__TypeMap_17);
    }
#line 854 "hlds_rtti.m"
    {
#line 854 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__ConstraintMapA_10, hlds__hlds_rtti__ConstraintMapB_14, &hlds__hlds_rtti__ConstraintMap_18);
    }
#line 856 "hlds_rtti.m"
    {
#line 856 "hlds_rtti.m"
      MR_Word base;
#line 856 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 856 "hlds_rtti.m"
      *hlds__hlds_rtti__VarMaps_6 = base;
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCImap_15));
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TImap_16));
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_17));
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_18));
#line 856 "hlds_rtti.m"
    }
#line 844 "hlds_rtti.m"
  }
#line 313 "hlds_rtti.m"
}

#line 818 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 818 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 818 "hlds_rtti.m"
{
#line 818 "hlds_rtti.m"
  {
#line 818 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 818 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_Constraint_8;

#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_Constraint_8);
    }
#line 818 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_Constraint_8));
#line 818 "hlds_rtti.m"
  }
#line 818 "hlds_rtti.m"
}

#line 815 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 815 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 815 "hlds_rtti.m"
{
#line 815 "hlds_rtti.m"
  {
#line 815 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 815 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15;

#line 815 "hlds_rtti.m"
    {
#line 815 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15);
    }
#line 815 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15));
#line 815 "hlds_rtti.m"
  }
#line 815 "hlds_rtti.m"
}

#line 304 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(
#line 304 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_4,
#line 304 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12,
#line 304 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13)
#line 304 "hlds_rtti.m"
{
#line 811 "hlds_rtti.m"
  {
#line 811 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_45_45;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_46_46;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_48_48;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap_9;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_10;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_11;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_33_33;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_34_34;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 815 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TciMap_9;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_29_29;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_31_31;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_32_32;

#line 815 "hlds_rtti.m"
    {
#line 815 "hlds_rtti.m"
      hlds__hlds_rtti__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 815 "hlds_rtti.m"
    }
#line 6325 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6327 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_46_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 816 "hlds_rtti.m"
    {
#line 816 "hlds_rtti.m"
      hlds__hlds_rtti__V_15_15 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46);
    }
#line 815 "hlds_rtti.m"
    {
#line 815 "hlds_rtti.m"
      mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_14_14, hlds__hlds_rtti__TciMap0_6, ((MR_Box) (hlds__hlds_rtti__V_15_15)), &hlds__hlds_rtti__conv1_TciMap_9);
    }
#line 815 "hlds_rtti.m"
    hlds__hlds_rtti__TciMap_9 = ((MR_Word) hlds__hlds_rtti__conv1_TciMap_9);
#line 6341 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 817 "hlds_rtti.m"
    {
#line 817 "hlds_rtti.m"
      mercury__map__map_values_only_3_p_0(hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__Pred_4, hlds__hlds_rtti__TypeMap0_7, &hlds__hlds_rtti__TypeMap_10);
    }
#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      hlds__hlds_rtti__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 818 "hlds_rtti.m"
    }
#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      mercury__map__map_values_3_p_0(hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__ConstraintMap0_8, &hlds__hlds_rtti__ConstraintMap_11);
    }
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_33_33 = hlds__hlds_rtti__TciMap_9;
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_34_34 = hlds__hlds_rtti__V_30_30;
#line 822 "hlds_rtti.m"
    {
#line 822 "hlds_rtti.m"
      MR_Word base;
#line 822 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 822 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13 = base;
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_33_33));
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_34_34));
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_10));
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_11));
#line 822 "hlds_rtti.m"
    }
#line 811 "hlds_rtti.m"
  }
#line 304 "hlds_rtti.m"
}

#line 707 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 707 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 707 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 707 "hlds_rtti.m"
{
#line 707 "hlds_rtti.m"
  {
#line 707 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 707 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19;

#line 707 "hlds_rtti.m"
    {
#line 707 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19);
    }
#line 707 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19));
#line 707 "hlds_rtti.m"
  }
#line 707 "hlds_rtti.m"
}

#line 705 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 705 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 705 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 705 "hlds_rtti.m"
{
#line 705 "hlds_rtti.m"
  {
#line 705 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 705 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19;

#line 705 "hlds_rtti.m"
    {
#line 705 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19);
    }
#line 705 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19));
#line 705 "hlds_rtti.m"
  }
#line 705 "hlds_rtti.m"
}

#line 703 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 703 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 703 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 703 "hlds_rtti.m"
{
#line 703 "hlds_rtti.m"
  {
#line 703 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 703 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37;

#line 703 "hlds_rtti.m"
    {
#line 703 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37);
    }
#line 703 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37));
#line 703 "hlds_rtti.m"
  }
#line 703 "hlds_rtti.m"
}

#line 701 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 701 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 701 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 701 "hlds_rtti.m"
{
#line 701 "hlds_rtti.m"
  {
#line 701 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 701 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18;

#line 701 "hlds_rtti.m"
    {
#line 701 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18);
    }
#line 701 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18));
#line 701 "hlds_rtti.m"
  }
#line 701 "hlds_rtti.m"
}

#line 296 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(
#line 296 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_6,
#line 296 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_7,
#line 296 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_8,
#line 296 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18,
#line 296 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19)
#line 296 "hlds_rtti.m"
{
#line 698 "hlds_rtti.m"
  {
#line 698 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 693 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 693 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_30_30;
#line 693 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_31_31;

#line 693 "hlds_rtti.m"
    {
#line 693 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__Subst_8);
    }
#line 693 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 693 "hlds_rtti.m"
      {
#line 6573 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_30_30 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6575 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 694 "hlds_rtti.m"
        {
#line 694 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeCtorInfo_31_31, hlds__hlds_rtti__TSubst_7);
        }
#line 693 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 695 "hlds_rtti.m"
          {
#line 695 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TRenaming_6);
          }
#line 693 "hlds_rtti.m"
      }
#line 698 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 698 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18;
#line 698 "hlds_rtti.m"
    else
#line 700 "hlds_rtti.m"
      {
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_37_37;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_44_44;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_50_50;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0)));
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1)));
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2)));
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3)));
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap_14;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap_15;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap_16;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap_17;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_23_23;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26;
#line 700 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;
#line 701 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_TCIMap_14;
#line 703 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv3_TIMap_15;
#line 705 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv5_TypeMap_16;
#line 707 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv7_ConstraintMap_17;

#line 701 "hlds_rtti.m"
        {
#line 701 "hlds_rtti.m"
          hlds__hlds_rtti__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 701 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
#line 701 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
#line 701 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 701 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 701 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 701 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 701 "hlds_rtti.m"
        }
#line 6668 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6670 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_37_37 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 702 "hlds_rtti.m"
        {
#line 702 "hlds_rtti.m"
          hlds__hlds_rtti__V_21_21 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37);
        }
#line 701 "hlds_rtti.m"
        {
#line 701 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__TCIMap0_10, ((MR_Box) (hlds__hlds_rtti__V_21_21)), &hlds__hlds_rtti__conv1_TCIMap_14);
        }
#line 701 "hlds_rtti.m"
        hlds__hlds_rtti__TCIMap_14 = ((MR_Word) hlds__hlds_rtti__conv1_TCIMap_14);
#line 703 "hlds_rtti.m"
        {
#line 703 "hlds_rtti.m"
          hlds__hlds_rtti__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 703 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
#line 703 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
#line 703 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 703 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 703 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 703 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 703 "hlds_rtti.m"
        }
#line 6702 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6704 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 704 "hlds_rtti.m"
        {
#line 704 "hlds_rtti.m"
          hlds__hlds_rtti__V_23_23 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44);
        }
#line 703 "hlds_rtti.m"
        {
#line 703 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__V_22_22, hlds__hlds_rtti__TIMap0_11, ((MR_Box) (hlds__hlds_rtti__V_23_23)), &hlds__hlds_rtti__conv3_TIMap_15);
        }
#line 703 "hlds_rtti.m"
        hlds__hlds_rtti__TIMap_15 = ((MR_Word) hlds__hlds_rtti__conv3_TIMap_15);
#line 705 "hlds_rtti.m"
        {
#line 705 "hlds_rtti.m"
          hlds__hlds_rtti__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 705 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
#line 705 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
#line 705 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 705 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 705 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 705 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 705 "hlds_rtti.m"
        }
#line 6736 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 706 "hlds_rtti.m"
        {
#line 706 "hlds_rtti.m"
          hlds__hlds_rtti__V_25_25 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50);
        }
#line 705 "hlds_rtti.m"
        {
#line 705 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50, (MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__V_24_24, hlds__hlds_rtti__TypeMap0_12, ((MR_Box) (hlds__hlds_rtti__V_25_25)), &hlds__hlds_rtti__conv5_TypeMap_16);
        }
#line 705 "hlds_rtti.m"
        hlds__hlds_rtti__TypeMap_16 = ((MR_Word) hlds__hlds_rtti__conv5_TypeMap_16);
#line 707 "hlds_rtti.m"
        {
#line 707 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 707 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
#line 707 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
#line 707 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 707 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 707 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 707 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 707 "hlds_rtti.m"
        }
#line 708 "hlds_rtti.m"
        {
#line 708 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36);
        }
#line 707 "hlds_rtti.m"
        {
#line 707 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__V_26_26, hlds__hlds_rtti__ConstraintMap0_13, ((MR_Box) (hlds__hlds_rtti__V_27_27)), &hlds__hlds_rtti__conv7_ConstraintMap_17);
        }
#line 707 "hlds_rtti.m"
        hlds__hlds_rtti__ConstraintMap_17 = ((MR_Word) hlds__hlds_rtti__conv7_ConstraintMap_17);
#line 709 "hlds_rtti.m"
        {
#line 709 "hlds_rtti.m"
          MR_Word base;
#line 709 "hlds_rtti.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 709 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = base;
#line 709 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_14));
#line 709 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_15));
#line 709 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_16));
#line 709 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_17));
#line 709 "hlds_rtti.m"
        }
#line 700 "hlds_rtti.m"
      }
#line 698 "hlds_rtti.m"
  }
#line 296 "hlds_rtti.m"
}

#line 286 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(
#line 286 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 286 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_4)
#line 286 "hlds_rtti.m"
{
#line 685 "hlds_rtti.m"
  {
#line 685 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIVars_5;
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIVars_6;
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8;
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12;
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13;
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;

#line 686 "hlds_rtti.m"
    {
#line 686 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_7_7, &hlds__hlds_rtti__TIVars_5);
    }
#line 687 "hlds_rtti.m"
    hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 687 "hlds_rtti.m"
    hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 687 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 687 "hlds_rtti.m"
    hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 687 "hlds_rtti.m"
    {
#line 687 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_8_8, &hlds__hlds_rtti__TCIVars_6);
    }
#line 688 "hlds_rtti.m"
    {
#line 688 "hlds_rtti.m"
      mercury__list__append_3_p_1(hlds__hlds_rtti__TypeInfo_15_15, hlds__hlds_rtti__TIVars_5, hlds__hlds_rtti__TCIVars_6, hlds__hlds_rtti__Vars_4);
#line 688 "hlds_rtti.m"
      return;
    }
#line 685 "hlds_rtti.m"
  }
#line 286 "hlds_rtti.m"
}

#line 280 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(
#line 280 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 280 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraints_4)
#line 280 "hlds_rtti.m"
{
#line 682 "hlds_rtti.m"
  {
#line 682 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 682 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 683 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 683 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 683 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 683 "hlds_rtti.m"
    {
#line 683 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__Constraints_4);
#line 683 "hlds_rtti.m"
      return;
    }
#line 682 "hlds_rtti.m"
  }
#line 280 "hlds_rtti.m"
}

#line 671 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 671 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 671 "hlds_rtti.m"
{
#line 671 "hlds_rtti.m"
  {
#line 671 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 671 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9;

#line 671 "hlds_rtti.m"
    {
#line 671 "hlds_rtti.m"
      hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9);
    }
#line 671 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9));
#line 671 "hlds_rtti.m"
  }
#line 671 "hlds_rtti.m"
}

#line 670 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 670 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 670 "hlds_rtti.m"
{
#line 670 "hlds_rtti.m"
  {
#line 670 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 670 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_21;

#line 670 "hlds_rtti.m"
    {
#line 670 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__670__1_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv0_HeadVar__3_21);
    }
#line 670 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_21));
#line 670 "hlds_rtti.m"
  }
#line 670 "hlds_rtti.m"
}

#line 275 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0(
#line 275 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 275 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Types_4)
#line 275 "hlds_rtti.m"
{
#line 666 "hlds_rtti.m"
  {
#line 666 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_24_24;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet0_7;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet1_8;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet_9;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 670 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TypeSet1_8;
#line 671 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv3_TypeSet_9;

#line 669 "hlds_rtti.m"
    {
#line 669 "hlds_rtti.m"
      hlds__hlds_rtti__TypeSet0_7 = mercury__set_tree234__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18);
    }
#line 7012 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[2];
#line 7014 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_24_24 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 670 "hlds_rtti.m"
    {
#line 670 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[5], hlds__hlds_rtti__TypeMap_5, ((MR_Box) (hlds__hlds_rtti__TypeSet0_7)), &hlds__hlds_rtti__conv1_TypeSet1_8);
    }
#line 670 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet1_8 = ((MR_Word) hlds__hlds_rtti__conv1_TypeSet1_8);
#line 671 "hlds_rtti.m"
    {
#line 671 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[6], hlds__hlds_rtti__ConstraintMap_6, ((MR_Box) (hlds__hlds_rtti__TypeSet1_8)), &hlds__hlds_rtti__conv3_TypeSet_9);
    }
#line 671 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet_9 = ((MR_Word) hlds__hlds_rtti__conv3_TypeSet_9);
#line 673 "hlds_rtti.m"
    {
#line 673 "hlds_rtti.m"
      *hlds__hlds_rtti__Types_4 = mercury__set_tree234__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeSet_9);
    }
#line 666 "hlds_rtti.m"
  }
#line 275 "hlds_rtti.m"
}

#line 269 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(
#line 269 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 269 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TVars_4)
#line 269 "hlds_rtti.m"
{
#line 663 "hlds_rtti.m"
  {
#line 663 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 663 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 664 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 664 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 664 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 664 "hlds_rtti.m"
    {
#line 664 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__TVars_4);
#line 664 "hlds_rtti.m"
      return;
    }
#line 663 "hlds_rtti.m"
  }
#line 269 "hlds_rtti.m"
}

#line 263 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(
#line 263 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 263 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 263 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 263 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 263 "hlds_rtti.m"
{
#line 651 "hlds_rtti.m"
  {
#line 651 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 651 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 652 "hlds_rtti.m"
    {
#line 652 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 656 "hlds_rtti.m"
#line 656 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 656 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 656 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 660 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 656 "hlds_rtti.m"
        break;
#line 656 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 654 "hlds_rtti.m"
        {
#line 654 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 654 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 654 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 635 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 635 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 635 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 637 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 637 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 637 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 637 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 636 "hlds_rtti.m"
          {
#line 636 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 637 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 637 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 637 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 637 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 637 "hlds_rtti.m"
          {
#line 637 "hlds_rtti.m"
            MR_Word base;
#line 637 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 637 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 637 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 637 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 637 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 637 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 637 "hlds_rtti.m"
          }
#line 654 "hlds_rtti.m"
        }
#line 656 "hlds_rtti.m"
        break;
#line 656 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 657 "hlds_rtti.m"
        {
#line 657 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 657 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 657 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 619 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 619 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 619 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 621 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 621 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 621 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 621 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 620 "hlds_rtti.m"
          {
#line 620 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 621 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 621 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 621 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 621 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 621 "hlds_rtti.m"
          {
#line 621 "hlds_rtti.m"
            MR_Word base;
#line 621 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 621 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 621 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 621 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 621 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 621 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 621 "hlds_rtti.m"
          }
#line 657 "hlds_rtti.m"
        }
#line 656 "hlds_rtti.m"
        break;
#line 656 "hlds_rtti.m"
    }
#line 651 "hlds_rtti.m"
  }
#line 263 "hlds_rtti.m"
}

#line 255 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(
#line 255 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 255 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 255 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 255 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 255 "hlds_rtti.m"
{
#line 639 "hlds_rtti.m"
  {
#line 639 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 640 "hlds_rtti.m"
    {
#line 640 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 644 "hlds_rtti.m"
#line 644 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 644 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 644 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 648 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 644 "hlds_rtti.m"
        break;
#line 644 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 642 "hlds_rtti.m"
        {
#line 642 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 642 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 642 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 632 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 632 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 632 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 632 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 631 "hlds_rtti.m"
          {
#line 631 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 632 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 632 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 632 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 632 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 632 "hlds_rtti.m"
          {
#line 632 "hlds_rtti.m"
            MR_Word base;
#line 632 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 632 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 632 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 632 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 632 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 632 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 632 "hlds_rtti.m"
          }
#line 642 "hlds_rtti.m"
        }
#line 644 "hlds_rtti.m"
        break;
#line 644 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 645 "hlds_rtti.m"
        {
#line 645 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 645 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 645 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 614 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 614 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 614 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 616 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 616 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 616 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 616 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 615 "hlds_rtti.m"
          {
#line 615 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 616 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 616 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 616 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 616 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 616 "hlds_rtti.m"
          {
#line 616 "hlds_rtti.m"
            MR_Word base;
#line 616 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 616 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 616 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 616 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 616 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 616 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 616 "hlds_rtti.m"
          }
#line 645 "hlds_rtti.m"
        }
#line 644 "hlds_rtti.m"
        break;
#line 644 "hlds_rtti.m"
    }
#line 639 "hlds_rtti.m"
  }
#line 255 "hlds_rtti.m"
}

#line 248 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(
#line 248 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 248 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 248 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 248 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 248 "hlds_rtti.m"
{
#line 634 "hlds_rtti.m"
  {
#line 634 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 636 "hlds_rtti.m"
    {
#line 636 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 637 "hlds_rtti.m"
    {
#line 637 "hlds_rtti.m"
      MR_Word base;
#line 637 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 637 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 637 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 637 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 637 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 637 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 637 "hlds_rtti.m"
    }
#line 634 "hlds_rtti.m"
  }
#line 248 "hlds_rtti.m"
}

#line 242 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(
#line 242 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 242 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 242 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 242 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 242 "hlds_rtti.m"
{
#line 629 "hlds_rtti.m"
  {
#line 629 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 629 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 629 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 631 "hlds_rtti.m"
    {
#line 631 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 632 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 632 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 632 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 632 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 632 "hlds_rtti.m"
    {
#line 632 "hlds_rtti.m"
      MR_Word base;
#line 632 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 632 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 632 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 632 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 632 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 632 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 632 "hlds_rtti.m"
    }
#line 629 "hlds_rtti.m"
  }
#line 242 "hlds_rtti.m"
}

#line 236 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(
#line 236 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_4,
#line 236 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9,
#line 236 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10)
#line 236 "hlds_rtti.m"
{
#line 623 "hlds_rtti.m"
  {
#line 623 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_6;
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_7;
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_8;
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 624 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Constraint_6;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 627 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 627 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;
#line 627 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_22_22;
#line 627 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 624 "hlds_rtti.m"
    {
#line 624 "hlds_rtti.m"
      mercury__map__lookup_3_p_0(hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__V_11_11, ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), &hlds__hlds_rtti__conv0_Constraint_6);
    }
#line 624 "hlds_rtti.m"
    hlds__hlds_rtti__Constraint_6 = ((MR_Word) hlds__hlds_rtti__conv0_Constraint_6);
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 626 "hlds_rtti.m"
    {
#line 626 "hlds_rtti.m"
      mercury__map__set_4_p_0(hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__TypeInfo_23_23, ((MR_Box) (hlds__hlds_rtti__Constraint_6)), ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), hlds__hlds_rtti__Map0_7, &hlds__hlds_rtti__Map_8);
    }
#line 627 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 627 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 627 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 627 "hlds_rtti.m"
    hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 627 "hlds_rtti.m"
    {
#line 627 "hlds_rtti.m"
      MR_Word base;
#line 627 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 627 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10 = base;
#line 627 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Map_8));
#line 627 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 627 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_21_21));
#line 627 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_22_22));
#line 627 "hlds_rtti.m"
    }
#line 623 "hlds_rtti.m"
  }
#line 236 "hlds_rtti.m"
}

#line 230 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_typeclass_info_var_4_p_0(
#line 230 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 230 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 230 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 230 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 230 "hlds_rtti.m"
{
#line 618 "hlds_rtti.m"
  {
#line 618 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 618 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 618 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 619 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 619 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 619 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 621 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 621 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 621 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 621 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 620 "hlds_rtti.m"
    {
#line 620 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 621 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 621 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 621 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 621 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 621 "hlds_rtti.m"
    {
#line 621 "hlds_rtti.m"
      MR_Word base;
#line 621 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 621 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 621 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 621 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 621 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 621 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 621 "hlds_rtti.m"
    }
#line 618 "hlds_rtti.m"
  }
#line 230 "hlds_rtti.m"
}

#line 224 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(
#line 224 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 224 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 224 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 224 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 224 "hlds_rtti.m"
{
#line 613 "hlds_rtti.m"
  {
#line 613 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 613 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 613 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 614 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 614 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 614 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 616 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 616 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 616 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 616 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 615 "hlds_rtti.m"
    {
#line 615 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 616 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 616 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 616 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 616 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 616 "hlds_rtti.m"
    {
#line 616 "hlds_rtti.m"
      MR_Word base;
#line 616 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 616 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 616 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 616 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 616 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 616 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 616 "hlds_rtti.m"
    }
#line 613 "hlds_rtti.m"
  }
#line 224 "hlds_rtti.m"
}

#line 218 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(
#line 218 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 218 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 218 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 218 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 218 "hlds_rtti.m"
{
#line 595 "hlds_rtti.m"
  {
#line 595 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 597 "hlds_rtti.m"
    {
#line 597 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 598 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 598 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 598 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 598 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 598 "hlds_rtti.m"
    {
#line 598 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 598 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 598 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 598 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 598 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 598 "hlds_rtti.m"
    }
#line 604 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 604 "hlds_rtti.m"
      {
#line 604 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 604 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 605 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 606 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 606 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 606 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 605 "hlds_rtti.m"
        {
#line 605 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 605 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 606 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 606 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 606 "hlds_rtti.m"
          {
#line 606 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 606 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7888 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 606 "hlds_rtti.m"
            {
#line 606 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 606 "hlds_rtti.m"
          }
#line 608 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 607 "hlds_rtti.m"
          {
#line 607 "hlds_rtti.m"
          }
#line 608 "hlds_rtti.m"
        else
#line 609 "hlds_rtti.m"
          {
#line 609 "hlds_rtti.m"
            {
#line 609 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 609 "hlds_rtti.m"
              return;
            }
#line 609 "hlds_rtti.m"
          }
#line 604 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 604 "hlds_rtti.m"
      }
#line 604 "hlds_rtti.m"
    else
#line 611 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 595 "hlds_rtti.m"
  }
#line 218 "hlds_rtti.m"
}

#line 213 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(
#line 213 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 213 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 213 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 213 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 213 "hlds_rtti.m"
{
#line 589 "hlds_rtti.m"
  {
#line 589 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 592 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 592 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 592 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 591 "hlds_rtti.m"
    {
#line 591 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 592 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 592 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 592 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 592 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 592 "hlds_rtti.m"
    {
#line 592 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 592 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 592 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 592 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 592 "hlds_rtti.m"
    }
#line 604 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 604 "hlds_rtti.m"
      {
#line 604 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 604 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 605 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 606 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 606 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 606 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 605 "hlds_rtti.m"
        {
#line 605 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 605 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 606 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 606 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 606 "hlds_rtti.m"
          {
#line 606 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 606 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 8028 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 606 "hlds_rtti.m"
            {
#line 606 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 606 "hlds_rtti.m"
          }
#line 608 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 607 "hlds_rtti.m"
          {
#line 607 "hlds_rtti.m"
          }
#line 608 "hlds_rtti.m"
        else
#line 609 "hlds_rtti.m"
          {
#line 609 "hlds_rtti.m"
            {
#line 609 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 609 "hlds_rtti.m"
              return;
            }
#line 609 "hlds_rtti.m"
          }
#line 604 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 604 "hlds_rtti.m"
      }
#line 604 "hlds_rtti.m"
    else
#line 611 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 589 "hlds_rtti.m"
  }
#line 213 "hlds_rtti.m"
}

#line 207 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(
#line 207 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 207 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 207 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarInfo_6)
#line 207 "hlds_rtti.m"
{
#line 583 "hlds_rtti.m"
  {
#line 583 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_7;
#line 581 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 581 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 581 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 581 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 581 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Type_7;

#line 581 "hlds_rtti.m"
    {
#line 581 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_9_9, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv0_Type_7);
    }
#line 581 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 581 "hlds_rtti.m"
      {
#line 581 "hlds_rtti.m"
        hlds__hlds_rtti__Type_7 = ((MR_Word) hlds__hlds_rtti__conv0_Type_7);
#line 581 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 581 "hlds_rtti.m"
      }
#line 583 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 582 "hlds_rtti.m"
      {
#line 582 "hlds_rtti.m"
        MR_Word base;
#line 582 "hlds_rtti.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 582 "hlds_rtti.m"
        *hlds__hlds_rtti__VarInfo_6 = base;
#line 582 "hlds_rtti.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Type_7));
#line 582 "hlds_rtti.m"
      }
#line 583 "hlds_rtti.m"
    else
#line 585 "hlds_rtti.m"
      {
#line 585 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Constraint_8;
#line 583 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 583 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 583 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 583 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 583 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Constraint_8;

#line 583 "hlds_rtti.m"
        {
#line 583 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_10_10, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv1_Constraint_8);
        }
#line 583 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 583 "hlds_rtti.m"
          {
#line 583 "hlds_rtti.m"
            hlds__hlds_rtti__Constraint_8 = ((MR_Word) hlds__hlds_rtti__conv1_Constraint_8);
#line 583 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 583 "hlds_rtti.m"
          }
#line 585 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 584 "hlds_rtti.m"
          {
#line 584 "hlds_rtti.m"
            MR_Word base;
#line 584 "hlds_rtti.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "hlds_rtti.m"
            *hlds__hlds_rtti__VarInfo_6 = base;
#line 584 "hlds_rtti.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__hlds_rtti__Constraint_8));
#line 584 "hlds_rtti.m"
          }
#line 585 "hlds_rtti.m"
        else
#line 586 "hlds_rtti.m"
          *hlds__hlds_rtti__VarInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "hlds_rtti.m"
      }
#line 583 "hlds_rtti.m"
  }
#line 207 "hlds_rtti.m"
}

#line 202 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(
#line 202 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 202 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 202 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 202 "hlds_rtti.m"
{
#line 577 "hlds_rtti.m"
  {
#line 577 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 578 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 578 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 578 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 578 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 578 "hlds_rtti.m"
    {
#line 578 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 578 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 578 "hlds_rtti.m"
      {
#line 578 "hlds_rtti.m"
        *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 578 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 578 "hlds_rtti.m"
      }
#line 577 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 577 "hlds_rtti.m"
  }
#line 202 "hlds_rtti.m"
}

#line 196 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(
#line 196 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 196 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 196 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 196 "hlds_rtti.m"
{
#line 574 "hlds_rtti.m"
  {
#line 574 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 575 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 575 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 575 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 575 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 575 "hlds_rtti.m"
    {
#line 575 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 575 "hlds_rtti.m"
    *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 574 "hlds_rtti.m"
  }
#line 196 "hlds_rtti.m"
}

#line 190 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(
#line 190 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 190 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 190 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 190 "hlds_rtti.m"
{
#line 571 "hlds_rtti.m"
  {
#line 571 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 572 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 572 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 572 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 572 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 572 "hlds_rtti.m"
    {
#line 572 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 572 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 572 "hlds_rtti.m"
      {
#line 572 "hlds_rtti.m"
        *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 572 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 572 "hlds_rtti.m"
      }
#line 571 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 571 "hlds_rtti.m"
  }
#line 190 "hlds_rtti.m"
}

#line 185 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(
#line 185 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 185 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 185 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 185 "hlds_rtti.m"
{
#line 568 "hlds_rtti.m"
  {
#line 568 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 568 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 569 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 569 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 569 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 569 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 569 "hlds_rtti.m"
    {
#line 569 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 569 "hlds_rtti.m"
    *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 568 "hlds_rtti.m"
  }
#line 185 "hlds_rtti.m"
}

#line 181 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(
#line 181 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_2)
#line 181 "hlds_rtti.m"
{
#line 565 "hlds_rtti.m"
  {
#line 565 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 565 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 1)));
#line 566 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 0)));
#line 566 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 2)));
#line 566 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 3)));

#line 566 "hlds_rtti.m"
    {
#line 566 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_3_3);
    }
#line 565 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 565 "hlds_rtti.m"
  }
#line 181 "hlds_rtti.m"
}

#line 175 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(
#line 175 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__VarUses_4,
#line 175 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20,
#line 175 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21)
#line 175 "hlds_rtti.m"
{
#line 481 "hlds_rtti.m"
  {
#line 481 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_26_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_28_28;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_29_29;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_30_30;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0)));
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1)));
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2)));
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3)));
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIList0_10;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTIList_11;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_12;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeList0_13;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTypeList_14;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_15;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintList0_16;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevConstraintList_17;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_18;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_19;

#line 489 "hlds_rtti.m"
    {
#line 489 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__TIMap0_7, &hlds__hlds_rtti__TIList0_10);
    }
#line 490 "hlds_rtti.m"
    {
#line 490 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_varmap_4_p_0(hlds__hlds_rtti__TIList0_10, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTIList_11);
    }
#line 491 "hlds_rtti.m"
    {
#line 491 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__RevTIList_11, &hlds__hlds_rtti__TIMap_12);
    }
#line 8456 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_28_28 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 8458 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 493 "hlds_rtti.m"
    {
#line 493 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__TypeMap0_8, &hlds__hlds_rtti__TypeList0_13);
    }
#line 494 "hlds_rtti.m"
    {
#line 494 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_map_4_p_0(hlds__hlds_rtti__TypeList0_13, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTypeList_14);
    }
#line 495 "hlds_rtti.m"
    {
#line 495 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__RevTypeList_14, &hlds__hlds_rtti__TypeMap_15);
    }
#line 8475 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 497 "hlds_rtti.m"
    {
#line 497 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__ConstraintMap0_9, &hlds__hlds_rtti__ConstraintList0_16);
    }
#line 498 "hlds_rtti.m"
    {
#line 498 "hlds_rtti.m"
      hlds__hlds_rtti__filter_constraint_map_6_p_0(hlds__hlds_rtti__ConstraintList0_16, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevConstraintList_17, hlds__hlds_rtti__TCIMap0_6, &hlds__hlds_rtti__TCIMap_18);
    }
#line 500 "hlds_rtti.m"
    {
#line 500 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__RevConstraintList_17, &hlds__hlds_rtti__ConstraintMap_19);
    }
#line 502 "hlds_rtti.m"
    {
#line 502 "hlds_rtti.m"
      MR_Word base;
#line 502 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 502 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21 = base;
#line 502 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_18));
#line 502 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_12));
#line 502 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_15));
#line 502 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_19));
#line 502 "hlds_rtti.m"
    }
#line 481 "hlds_rtti.m"
  }
#line 175 "hlds_rtti.m"
}

#line 169 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_init_1_p_0(
#line 169 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1)
#line 169 "hlds_rtti.m"
{
#line 475 "hlds_rtti.m"
  {
#line 475 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_6_6 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_7_7 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_2;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_3;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_4;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_5;

#line 476 "hlds_rtti.m"
    {
#line 476 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeCtorInfo_6_6, hlds__hlds_rtti__TypeInfo_7_7, &hlds__hlds_rtti__TCIMap_2);
    }
#line 477 "hlds_rtti.m"
    {
#line 477 "hlds_rtti.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, &hlds__hlds_rtti__TIMap_3);
    }
#line 478 "hlds_rtti.m"
    {
#line 478 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &hlds__hlds_rtti__TypeMap_4);
    }
#line 479 "hlds_rtti.m"
    {
#line 479 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, hlds__hlds_rtti__TypeCtorInfo_6_6, &hlds__hlds_rtti__ConstraintMap_5);
    }
#line 475 "hlds_rtti.m"
    {
#line 475 "hlds_rtti.m"
      MR_Word base;
#line 475 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 475 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__1_1 = base;
#line 475 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_2));
#line 475 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_3));
#line 475 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_4));
#line 475 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_5));
#line 475 "hlds_rtti.m"
    }
#line 475 "hlds_rtti.m"
  }
#line 169 "hlds_rtti.m"
}

#line 145 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_set_var_3_p_0(
#line 145 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_1,
#line 145 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 145 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_3)
#line 145 "hlds_rtti.m"
{
#line 397 "hlds_rtti.m"
  {
#line 397 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 397 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 397 "hlds_rtti.m"
      {
#line 397 "hlds_rtti.m"
        MR_Word base;
#line 397 "hlds_rtti.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 397 "hlds_rtti.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 397 "hlds_rtti.m"
      }
#line 397 "hlds_rtti.m"
    else
#line 398 "hlds_rtti.m"
      {
#line 398 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 398 "hlds_rtti.m"
        {
#line 398 "hlds_rtti.m"
          MR_Word base;
#line 398 "hlds_rtti.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 398 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 398 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_rtti__Num_8));
#line 398 "hlds_rtti.m"
        }
#line 398 "hlds_rtti.m"
      }
#line 397 "hlds_rtti.m"
  }
#line 145 "hlds_rtti.m"
}

#line 143 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_var_2_p_0(
#line 143 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 143 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Var_2)
#line 143 "hlds_rtti.m"
{
#line 394 "hlds_rtti.m"
  {
#line 394 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 394 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 394 "hlds_rtti.m"
      *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "hlds_rtti.m"
    else
#line 395 "hlds_rtti.m"
      {
#line 395 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_5_5;

#line 395 "hlds_rtti.m"
        *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "hlds_rtti.m"
        hlds__hlds_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "hlds_rtti.m"
      }
#line 394 "hlds_rtti.m"
  }
#line 143 "hlds_rtti.m"
}

#line 93 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__proc_label_pred_proc_id_3_p_0(
#line 93 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiProcLabel_4,
#line 93 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__PredId_5,
#line 93 "hlds_rtti.m"
  MR_Integer * hlds__hlds_rtti__ProcId_6)
#line 93 "hlds_rtti.m"
{
#line 389 "hlds_rtti.m"
  {
#line 389 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 0)));
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 1)));
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 2)));
#line 389 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 3)));
#line 389 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 4)));
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 5)));
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 389 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;

#line 389 "hlds_rtti.m"
    *hlds__hlds_rtti__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 6)));
#line 389 "hlds_rtti.m"
    *hlds__hlds_rtti__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 7)));
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 8)));
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 9)));
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 11)));
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 389 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 389 "hlds_rtti.m"
  }
#line 93 "hlds_rtti.m"
}

#line 367 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 367 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 367 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1)
#line 367 "hlds_rtti.m"
{
#line 367 "hlds_rtti.m"
  {
#line 367 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__wrapper_arg_2;
#line 367 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 367 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_32;

#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__conv0_HeadVar__3_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__367__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1));
    }
#line 367 "hlds_rtti.m"
    hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_32));
#line 367 "hlds_rtti.m"
    return hlds__hlds_rtti__wrapper_arg_2;
#line 367 "hlds_rtti.m"
  }
#line 367 "hlds_rtti.m"
}

#line 89 "hlds_rtti.m"
MR_Word MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0(
#line 89 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ModuleInfo_5,
#line 89 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__PredId_6,
#line 89 "hlds_rtti.m"
  MR_Integer hlds__hlds_rtti__ProcId_7)
#line 89 "hlds_rtti.m"
{
#line 349 "hlds_rtti.m"
  {
#line 349 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcLabel_8;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ThisModule_9;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredInfo_10;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcInfo_11;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredOrFunc_12;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredModule_13;
#line 349 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__PredName_14;
#line 349 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__Arity_15;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_16;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcVarSet_17;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVars_18;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcModes_19;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcDetism_20;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcArgModes_21;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsImported_22;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsPseudoImp_23;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsExported_24;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Origin_25;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVarsWithNames_26;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsImported_29;
#line 349 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;

#line 350 "hlds_rtti.m"
    {
#line 350 "hlds_rtti.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_rtti__ModuleInfo_5, &hlds__hlds_rtti__ThisModule_9);
    }
#line 351 "hlds_rtti.m"
    {
#line 351 "hlds_rtti.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredId_6, hlds__hlds_rtti__ProcId_7, &hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ProcInfo_11);
    }
#line 352 "hlds_rtti.m"
    {
#line 352 "hlds_rtti.m"
      hlds__hlds_rtti__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 353 "hlds_rtti.m"
    {
#line 353 "hlds_rtti.m"
      hlds__hlds_rtti__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 354 "hlds_rtti.m"
    {
#line 354 "hlds_rtti.m"
      hlds__hlds_rtti__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 355 "hlds_rtti.m"
    {
#line 355 "hlds_rtti.m"
      hlds__hlds_rtti__Arity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 356 "hlds_rtti.m"
    {
#line 356 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ArgTypes_16);
    }
#line 357 "hlds_rtti.m"
    {
#line 357 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcVarSet_17);
    }
#line 358 "hlds_rtti.m"
    {
#line 358 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 359 "hlds_rtti.m"
    {
#line 359 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcModes_19);
    }
#line 360 "hlds_rtti.m"
    {
#line 360 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcDetism_20);
    }
#line 361 "hlds_rtti.m"
    {
#line 361 "hlds_rtti.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__ProcModes_19, hlds__hlds_rtti__ArgTypes_16, &hlds__hlds_rtti__ProcArgModes_21);
    }
#line 362 "hlds_rtti.m"
    {
#line 362 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 362 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 362 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 1;
#line 362 "hlds_rtti.m"
    else
#line 362 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 0;
#line 363 "hlds_rtti.m"
    {
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 363 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 1;
#line 363 "hlds_rtti.m"
    else
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 0;
#line 364 "hlds_rtti.m"
    {
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredInfo_10, hlds__hlds_rtti__ProcId_7);
    }
#line 364 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 365 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 1;
#line 364 "hlds_rtti.m"
    else
#line 365 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 0;
#line 366 "hlds_rtti.m"
    {
#line 366 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__Origin_25);
    }
#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 367 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
#line 367 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
#line 367 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 367 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 3) = ((MR_Box) (hlds__hlds_rtti__ProcVarSet_17));
#line 367 "hlds_rtti.m"
    }
#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &hlds__hlds_rtti_scalar_common_2[0], hlds__hlds_rtti__V_30_30, hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 372 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsImported_22 == (MR_Integer) 1);
#line 373 "hlds_rtti.m"
    if (!(hlds__hlds_rtti__succeeded))
#line 374 "hlds_rtti.m"
      {
#line 374 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_37_37;

#line 374 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsPseudoImp_23 == (MR_Integer) 1);
#line 374 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 374 "hlds_rtti.m"
          {
#line 375 "hlds_rtti.m"
            {
#line 375 "hlds_rtti.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_rtti__V_37_37);
            }
#line 375 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__ProcId_7 == hlds__hlds_rtti__V_37_37);
#line 374 "hlds_rtti.m"
          }
#line 374 "hlds_rtti.m"
      }
#line 379 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 378 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 1;
#line 379 "hlds_rtti.m"
    else
#line 380 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 0;
#line 382 "hlds_rtti.m"
    {
#line 382 "hlds_rtti.m"
      hlds__hlds_rtti__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 0) = ((MR_Box) (hlds__hlds_rtti__PredOrFunc_12));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 1) = ((MR_Box) (hlds__hlds_rtti__ThisModule_9));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 2) = ((MR_Box) (hlds__hlds_rtti__PredModule_13));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 3) = ((MR_Box) (hlds__hlds_rtti__PredName_14));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 4) = ((MR_Box) (hlds__hlds_rtti__Arity_15));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 5) = ((MR_Box) (hlds__hlds_rtti__ArgTypes_16));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 6) = ((MR_Box) (hlds__hlds_rtti__PredId_6));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 7) = ((MR_Box) (hlds__hlds_rtti__ProcId_7));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 8) = ((MR_Box) (hlds__hlds_rtti__ProcHeadVarsWithNames_26));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 9) = ((MR_Box) (hlds__hlds_rtti__ProcArgModes_21));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 10) = ((MR_Box) ((hlds__hlds_rtti__ProcDetism_20 | ((((hlds__hlds_rtti__PredIsImported_22 << (MR_Integer) 3)) | ((hlds__hlds_rtti__PredIsPseudoImp_23 << (MR_Integer) 4)))))));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 11) = ((MR_Box) (hlds__hlds_rtti__Origin_25));
#line 382 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 12) = ((MR_Box) ((hlds__hlds_rtti__ProcIsExported_24 | ((hlds__hlds_rtti__ProcIsImported_29 << (MR_Integer) 1)))));
#line 382 "hlds_rtti.m"
    }
#line 349 "hlds_rtti.m"
    return hlds__hlds_rtti__ProcLabel_8;
#line 349 "hlds_rtti.m"
  }
#line 89 "hlds_rtti.m"
}

void mercury__hlds__hlds_rtti__init(void)
{
}

void mercury__hlds__hlds_rtti__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0);
}

void mercury__hlds__hlds_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_rtti. */
