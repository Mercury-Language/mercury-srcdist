/*
** Automatically generated from `hlds_rtti.m'
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


/* :- module hlds.hlds_rtti. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#include "hlds.hlds_rtti.mih"


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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 144 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 156 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 159 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 162 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 165 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 168 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 177 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 180 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 183 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 186 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 189 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 192 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 195 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

#line 198 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

#line 201 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

#line 204 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

#line 207 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

#line 210 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

#line 213 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 216 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 219 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0;

#line 222 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

#line 225 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

#line 228 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

#line 231 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

#line 234 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

#line 237 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

#line 240 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

#line 243 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

#line 246 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

#line 249 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

#line 252 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

#line 255 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

#line 258 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

#line 261 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

#line 264 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

#line 267 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

#line 270 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

#line 273 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

#line 276 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

#line 279 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 282 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 285 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 288 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 291 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

#line 294 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

#line 297 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

#line 300 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

#line 303 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

#line 306 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

#line 309 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

#line 312 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

#line 315 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

#line 318 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

#line 321 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

#line 324 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

#line 327 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

#line 330 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

#line 333 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

#line 336 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

#line 339 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 342 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 344 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 347 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 350 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 352 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 354 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 357 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 360 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 362 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 365 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 368 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 370 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 372 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 375 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 378 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 380 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 383 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 386 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 388 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 390 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 393 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 396 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 398 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 401 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 404 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 406 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 408 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 411 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 414 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 416 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 419 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 422 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 424 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 426 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 429 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 432 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 434 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 437 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 440 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 442 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 444 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 447 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 450 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 452 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 455 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 458 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 460 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 462 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 465 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 468 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 470 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 473 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 476 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 478 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 480 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 483 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 486 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 488 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 491 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 494 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 496 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 498 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 501 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 504 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 506 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 509 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 512 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 514 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 516 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 847 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 847 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 900 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__900__1_3_p_0(
#line 900 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 900 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_22,
#line 900 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__LambdaHeadVar__2_23);

#line 682 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(
#line 682 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 682 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 682 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21);

#line 374 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(
#line 374 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 374 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_31);

#line 423 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 423 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 423 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 481 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 481 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 481 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 469 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 469 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 469 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 475 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 475 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 475 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 900 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 900 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 900 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 900 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2);

#line 881 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 881 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 881 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 881 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 881 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4);

#line 847 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 847 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 836 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 836 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15);

#line 802 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 802 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 781 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 781 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 752 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 752 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37);

#line 734 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 734 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18);

#line 687 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 687 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 687 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 687 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);

#line 551 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 551 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 551 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 551 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 551 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 551 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 551 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6);

#line 533 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 533 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 533 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 533 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 533 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4);

#line 512 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 512 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 512 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 512 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 512 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4);

#line 830 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 830 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 830 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 830 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 830 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 827 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 827 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 719 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 719 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 717 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 717 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 715 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 715 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 713 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 713 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 683 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 683 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 683 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 683 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 683 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 682 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 682 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 682 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 682 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 682 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 374 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 374 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 374 "hlds_rtti.m"
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
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1152 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1160 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1168 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1176 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1185 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1193 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1201 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1210 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1219 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1228 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1237 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1245 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1254 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1263 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1272 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1282 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1290 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1298 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

#line 1306 "hlds.hlds_rtti.c"
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

#line 1321 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1326 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0
  }
};

#line 1335 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1340 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1345 "hlds.hlds_rtti.c"
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

#line 1362 "hlds.hlds_rtti.c"
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

#line 1379 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1388 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  }
};

#line 1396 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0
  }
};

#line 1404 "hlds.hlds_rtti.c"
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

#line 1424 "hlds.hlds_rtti.c"
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

#line 1444 "hlds.hlds_rtti.c"
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

#line 1528 "hlds.hlds_rtti.c"
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

#line 1543 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1548 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0
  }
};

#line 1557 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1562 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

#line 1567 "hlds.hlds_rtti.c"
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

#line 1584 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1589 "hlds.hlds_rtti.c"
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

#line 1604 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1609 "hlds.hlds_rtti.c"
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

#line 1624 "hlds.hlds_rtti.c"
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

#line 1639 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

#line 1644 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

#line 1649 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1654 "hlds.hlds_rtti.c"
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

#line 1673 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1680 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1687 "hlds.hlds_rtti.c"
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

#line 1704 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1713 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1722 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1731 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1740 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1748 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

#line 1756 "hlds.hlds_rtti.c"
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

#line 1771 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1776 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0
  }
};

#line 1785 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1790 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

#line 1795 "hlds.hlds_rtti.c"
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

#line 1812 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1817 "hlds.hlds_rtti.c"
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

#line 1832 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1838 "hlds.hlds_rtti.c"
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

#line 1853 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

#line 1858 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1863 "hlds.hlds_rtti.c"
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

#line 1877 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1883 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1889 "hlds.hlds_rtti.c"
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

#line 1906 "hlds.hlds_rtti.c"
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

#line 1923 "hlds.hlds_rtti.c"
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

#line 1940 "hlds.hlds_rtti.c"
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

#line 1957 "hlds.hlds_rtti.c"
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

#line 1974 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 1977 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 1979 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 1981 "hlds.hlds_rtti.c"
{
#line 1983 "hlds.hlds_rtti.c"
  {
#line 1985 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 1988 "hlds.hlds_rtti.c"
    {
#line 1990 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 1993 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 1995 "hlds.hlds_rtti.c"
  }
#line 1997 "hlds.hlds_rtti.c"
}

#line 2000 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 2003 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2005 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2007 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2009 "hlds.hlds_rtti.c"
{
#line 2011 "hlds.hlds_rtti.c"
  {
#line 2013 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2016 "hlds.hlds_rtti.c"
    {
#line 2018 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2021 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2023 "hlds.hlds_rtti.c"
  }
#line 2025 "hlds.hlds_rtti.c"
}

#line 2028 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 2031 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2033 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2035 "hlds.hlds_rtti.c"
{
#line 2037 "hlds.hlds_rtti.c"
  {
#line 2039 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2042 "hlds.hlds_rtti.c"
    {
#line 2044 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) hlds__hlds_rtti__wrapper_arg_1), ((MR_String) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2047 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2049 "hlds.hlds_rtti.c"
  }
#line 2051 "hlds.hlds_rtti.c"
}

#line 2054 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 2057 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2059 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2061 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2063 "hlds.hlds_rtti.c"
{
#line 2065 "hlds.hlds_rtti.c"
  {
#line 2067 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2070 "hlds.hlds_rtti.c"
    {
#line 2072 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____prog_var_name_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_String) hlds__hlds_rtti__wrapper_arg_2), ((MR_String) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2075 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2077 "hlds.hlds_rtti.c"
  }
#line 2079 "hlds.hlds_rtti.c"
}

#line 2082 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 2085 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2087 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2089 "hlds.hlds_rtti.c"
{
#line 2091 "hlds.hlds_rtti.c"
  {
#line 2093 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2096 "hlds.hlds_rtti.c"
    {
#line 2098 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2101 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2103 "hlds.hlds_rtti.c"
  }
#line 2105 "hlds.hlds_rtti.c"
}

#line 2108 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 2111 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2113 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2115 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2117 "hlds.hlds_rtti.c"
{
#line 2119 "hlds.hlds_rtti.c"
  {
#line 2121 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2124 "hlds.hlds_rtti.c"
    {
#line 2126 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2129 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2131 "hlds.hlds_rtti.c"
  }
#line 2133 "hlds.hlds_rtti.c"
}

#line 2136 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 2139 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2141 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2143 "hlds.hlds_rtti.c"
{
#line 2145 "hlds.hlds_rtti.c"
  {
#line 2147 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2150 "hlds.hlds_rtti.c"
    {
#line 2152 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2155 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2157 "hlds.hlds_rtti.c"
  }
#line 2159 "hlds.hlds_rtti.c"
}

#line 2162 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 2165 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2167 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2169 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2171 "hlds.hlds_rtti.c"
{
#line 2173 "hlds.hlds_rtti.c"
  {
#line 2175 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2178 "hlds.hlds_rtti.c"
    {
#line 2180 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_var_info_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2183 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2185 "hlds.hlds_rtti.c"
  }
#line 2187 "hlds.hlds_rtti.c"
}

#line 2190 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 2193 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2195 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2197 "hlds.hlds_rtti.c"
{
#line 2199 "hlds.hlds_rtti.c"
  {
#line 2201 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2204 "hlds.hlds_rtti.c"
    {
#line 2206 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2209 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2211 "hlds.hlds_rtti.c"
  }
#line 2213 "hlds.hlds_rtti.c"
}

#line 2216 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 2219 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2221 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2223 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2225 "hlds.hlds_rtti.c"
{
#line 2227 "hlds.hlds_rtti.c"
  {
#line 2229 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2232 "hlds.hlds_rtti.c"
    {
#line 2234 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2237 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2239 "hlds.hlds_rtti.c"
  }
#line 2241 "hlds.hlds_rtti.c"
}

#line 2244 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 2247 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2249 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2251 "hlds.hlds_rtti.c"
{
#line 2253 "hlds.hlds_rtti.c"
  {
#line 2255 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2258 "hlds.hlds_rtti.c"
    {
#line 2260 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2263 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2265 "hlds.hlds_rtti.c"
  }
#line 2267 "hlds.hlds_rtti.c"
}

#line 2270 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 2273 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2275 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2277 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2279 "hlds.hlds_rtti.c"
{
#line 2281 "hlds.hlds_rtti.c"
  {
#line 2283 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2286 "hlds.hlds_rtti.c"
    {
#line 2288 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_locn_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2291 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2293 "hlds.hlds_rtti.c"
  }
#line 2295 "hlds.hlds_rtti.c"
}

#line 2298 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 2301 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2303 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2305 "hlds.hlds_rtti.c"
{
#line 2307 "hlds.hlds_rtti.c"
  {
#line 2309 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2312 "hlds.hlds_rtti.c"
    {
#line 2314 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2317 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2319 "hlds.hlds_rtti.c"
  }
#line 2321 "hlds.hlds_rtti.c"
}

#line 2324 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 2327 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2329 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2331 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2333 "hlds.hlds_rtti.c"
{
#line 2335 "hlds.hlds_rtti.c"
  {
#line 2337 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2340 "hlds.hlds_rtti.c"
    {
#line 2342 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_type_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2345 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2347 "hlds.hlds_rtti.c"
  }
#line 2349 "hlds.hlds_rtti.c"
}

#line 2352 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 2355 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2357 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2359 "hlds.hlds_rtti.c"
{
#line 2361 "hlds.hlds_rtti.c"
  {
#line 2363 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2366 "hlds.hlds_rtti.c"
    {
#line 2368 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2371 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2373 "hlds.hlds_rtti.c"
  }
#line 2375 "hlds.hlds_rtti.c"
}

#line 2378 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 2381 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2383 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2385 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2387 "hlds.hlds_rtti.c"
{
#line 2389 "hlds.hlds_rtti.c"
  {
#line 2391 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2394 "hlds.hlds_rtti.c"
    {
#line 2396 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2399 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2401 "hlds.hlds_rtti.c"
  }
#line 2403 "hlds.hlds_rtti.c"
}

#line 2406 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 2409 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2411 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2413 "hlds.hlds_rtti.c"
{
#line 2415 "hlds.hlds_rtti.c"
  {
#line 2417 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2420 "hlds.hlds_rtti.c"
    {
#line 2422 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2425 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2427 "hlds.hlds_rtti.c"
  }
#line 2429 "hlds.hlds_rtti.c"
}

#line 2432 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 2435 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2437 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2439 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2441 "hlds.hlds_rtti.c"
{
#line 2443 "hlds.hlds_rtti.c"
  {
#line 2445 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2448 "hlds.hlds_rtti.c"
    {
#line 2450 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2453 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2455 "hlds.hlds_rtti.c"
  }
#line 2457 "hlds.hlds_rtti.c"
}

#line 2460 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 2463 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2465 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2467 "hlds.hlds_rtti.c"
{
#line 2469 "hlds.hlds_rtti.c"
  {
#line 2471 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2474 "hlds.hlds_rtti.c"
    {
#line 2476 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2479 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2481 "hlds.hlds_rtti.c"
  }
#line 2483 "hlds.hlds_rtti.c"
}

#line 2486 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 2489 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2491 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2493 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2495 "hlds.hlds_rtti.c"
{
#line 2497 "hlds.hlds_rtti.c"
  {
#line 2499 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2502 "hlds.hlds_rtti.c"
    {
#line 2504 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2507 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2509 "hlds.hlds_rtti.c"
  }
#line 2511 "hlds.hlds_rtti.c"
}

#line 847 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 847 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 847 "hlds_rtti.m"
{
#line 851 "hlds_rtti.m"
  {
#line 851 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 851 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 851 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 851 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 851 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_11;

#line 853 "hlds_rtti.m"
    {
#line 853 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Args0_10, &hlds__hlds_rtti__Args_11);
    }
#line 854 "hlds_rtti.m"
    {
#line 854 "hlds_rtti.m"
      MR_Word base;
#line 854 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "hlds_rtti.m"
      *hlds__hlds_rtti__Constraint_8 = base;
#line 854 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Name_9));
#line 854 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Args_11));
#line 854 "hlds_rtti.m"
    }
#line 851 "hlds_rtti.m"
  }
#line 847 "hlds_rtti.m"
}

#line 900 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__900__1_3_p_0(
#line 900 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 900 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_22,
#line 900 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__LambdaHeadVar__2_23)
#line 900 "hlds_rtti.m"
{
#line 900 "hlds_rtti.m"
  {
#line 900 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 900 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Locn_19;
#line 901 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_19;

#line 901 "hlds_rtti.m"
    {
#line 901 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TVarMap_3, ((MR_Box) (hlds__hlds_rtti__LambdaHeadVar__1_22)), &hlds__hlds_rtti__conv0_Locn_19);
    }
#line 901 "hlds_rtti.m"
    hlds__hlds_rtti__Locn_19 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_19);
#line 402 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_19)) == (MR_mktag((MR_Integer) 0))))
#line 402 "hlds_rtti.m"
      *hlds__hlds_rtti__LambdaHeadVar__2_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 402 "hlds_rtti.m"
    else
#line 403 "hlds_rtti.m"
      {
#line 403 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_32_32;

#line 403 "hlds_rtti.m"
        *hlds__hlds_rtti__LambdaHeadVar__2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 403 "hlds_rtti.m"
        hlds__hlds_rtti__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 1)));
#line 403 "hlds_rtti.m"
      }
#line 900 "hlds_rtti.m"
  }
#line 900 "hlds_rtti.m"
}

#line 682 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(
#line 682 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 682 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 682 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21)
#line 682 "hlds_rtti.m"
{
#line 682 "hlds_rtti.m"
  {
#line 682 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 682 "hlds_rtti.m"
    {
#line 682 "hlds_rtti.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__HeadVar__1_19)), hlds__hlds_rtti__HeadVar__2_20, hlds__hlds_rtti__HeadVar__3_21);
    }
#line 682 "hlds_rtti.m"
  }
#line 682 "hlds_rtti.m"
}

#line 374 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(
#line 374 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 374 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_31)
#line 374 "hlds_rtti.m"
{
#line 374 "hlds_rtti.m"
  {
#line 374 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 374 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__LambdaHeadVar__2_32;
#line 374 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Name_28;

#line 376 "hlds_rtti.m"
    {
#line 376 "hlds_rtti.m"
      hlds__hlds_rtti__Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__ProcVarSet_17, hlds__hlds_rtti__LambdaHeadVar__1_31);
    }
#line 375 "hlds_rtti.m"
    {
#line 375 "hlds_rtti.m"
      hlds__hlds_rtti__LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LambdaHeadVar__2_32, 0) = ((MR_Box) (hlds__hlds_rtti__LambdaHeadVar__1_31));
#line 375 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LambdaHeadVar__2_32, 1) = ((MR_Box) (hlds__hlds_rtti__Name_28));
#line 375 "hlds_rtti.m"
    }
#line 374 "hlds_rtti.m"
    return hlds__hlds_rtti__LambdaHeadVar__2_32;
#line 374 "hlds_rtti.m"
  }
#line 374 "hlds_rtti.m"
}

#line 423 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 423 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 423 "hlds_rtti.m"
{
#line 423 "hlds_rtti.m"
  {
#line 423 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 423 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 423 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 423 "hlds_rtti.m"
    {
#line 423 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 423 "hlds_rtti.m"
  }
#line 423 "hlds_rtti.m"
}

#line 423 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 423 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 423 "hlds_rtti.m"
{
#line 423 "hlds_rtti.m"
  {
#line 423 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 423 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 423 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 423 "hlds_rtti.m"
    {
#line 423 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 423 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 423 "hlds_rtti.m"
  }
#line 423 "hlds_rtti.m"
}

#line 481 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 481 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 481 "hlds_rtti.m"
{
#line 481 "hlds_rtti.m"
  {
#line 481 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 481 "hlds_rtti.m"
    {
#line 481 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 481 "hlds_rtti.m"
  }
#line 481 "hlds_rtti.m"
}

#line 481 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 481 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 481 "hlds_rtti.m"
{
#line 481 "hlds_rtti.m"
  {
#line 481 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 481 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 481 "hlds_rtti.m"
    {
#line 481 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 481 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 481 "hlds_rtti.m"
  }
#line 481 "hlds_rtti.m"
}

#line 469 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 469 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 469 "hlds_rtti.m"
{
#line 469 "hlds_rtti.m"
  {
#line 469 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 469 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 469 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 469 "hlds_rtti.m"
    {
#line 469 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 469 "hlds_rtti.m"
  }
#line 469 "hlds_rtti.m"
}

#line 469 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 469 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 469 "hlds_rtti.m"
{
#line 469 "hlds_rtti.m"
  {
#line 469 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 469 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 469 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 469 "hlds_rtti.m"
    {
#line 469 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 469 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 469 "hlds_rtti.m"
  }
#line 469 "hlds_rtti.m"
}

#line 475 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 475 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 475 "hlds_rtti.m"
{
#line 475 "hlds_rtti.m"
  {
#line 475 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 475 "hlds_rtti.m"
    {
#line 475 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 475 "hlds_rtti.m"
  }
#line 475 "hlds_rtti.m"
}

#line 475 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 475 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 475 "hlds_rtti.m"
{
#line 475 "hlds_rtti.m"
  {
#line 475 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 475 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 475 "hlds_rtti.m"
    {
#line 475 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 475 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 475 "hlds_rtti.m"
  }
#line 475 "hlds_rtti.m"
}

#line 126 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0(
#line 126 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 126 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 126 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 126 "hlds_rtti.m"
{
#line 126 "hlds_rtti.m"
  {
#line 126 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 126 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 126 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_18 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 126 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_17 == hlds__hlds_rtti__CastY_18);
#line 126 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 2941 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "hlds_rtti.m"
    else
#line 126 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 126 "hlds_rtti.m"
      {
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 126 "hlds_rtti.m"
          {
#line 126 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 126 "hlds_rtti.m"
            {
#line 126 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_22_22)), ((MR_Box) (hlds__hlds_rtti__V_5_5)));
            }
#line 126 "hlds_rtti.m"
          }
#line 126 "hlds_rtti.m"
        else
#line 2968 "hlds.hlds_rtti.c"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 126 "hlds_rtti.m"
      }
#line 126 "hlds_rtti.m"
    else
#line 126 "hlds_rtti.m"
      {
#line 126 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2983 "hlds.hlds_rtti.c"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "hlds_rtti.m"
        else
#line 126 "hlds_rtti.m"
          {
#line 126 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 126 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 126 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_16_16;

#line 126 "hlds_rtti.m"
            {
#line 126 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], &hlds__hlds_rtti__V_16_16, ((MR_Box) (hlds__hlds_rtti__V_24_24)), ((MR_Box) (hlds__hlds_rtti__V_14_14)));
            }
#line 3001 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_16_16 == (MR_Integer) 0);
#line 126 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 126 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 126 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_16_16;
#line 126 "hlds_rtti.m"
            else
#line 126 "hlds_rtti.m"
              {
#line 126 "hlds_rtti.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_23_23, hlds__hlds_rtti__V_15_15);
              }
#line 126 "hlds_rtti.m"
          }
#line 126 "hlds_rtti.m"
      }
#line 126 "hlds_rtti.m"
  }
#line 126 "hlds_rtti.m"
}

#line 126 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0(
#line 126 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 126 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 126 "hlds_rtti.m"
{
#line 126 "hlds_rtti.m"
  {
#line 126 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 126 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 126 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 126 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 126 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 126 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 126 "hlds_rtti.m"
    else
#line 126 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 126 "hlds_rtti.m"
      {
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_11_11;
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4;

#line 126 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 126 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 126 "hlds_rtti.m"
          {
#line 126 "hlds_rtti.m"
            hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3070 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_11_11 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3072 "hlds.hlds_rtti.c"
            {
#line 3074 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_11_11, ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_4_4)));
            }
#line 126 "hlds_rtti.m"
          }
#line 126 "hlds_rtti.m"
      }
#line 126 "hlds_rtti.m"
    else
#line 126 "hlds_rtti.m"
      {
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_12_12;
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 126 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7;
#line 126 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8;

#line 126 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 126 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 126 "hlds_rtti.m"
          {
#line 126 "hlds_rtti.m"
            hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "hlds_rtti.m"
            hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 3106 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_12_12 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3108 "hlds.hlds_rtti.c"
            {
#line 3110 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_12_12, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
            }
#line 126 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 3115 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_6_6 == hlds__hlds_rtti__V_8_8);
#line 126 "hlds_rtti.m"
          }
#line 126 "hlds_rtti.m"
      }
#line 126 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 126 "hlds_rtti.m"
  }
#line 126 "hlds_rtti.m"
}

#line 408 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
#line 408 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 408 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 408 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 408 "hlds_rtti.m"
{
#line 408 "hlds_rtti.m"
  {
#line 408 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 408 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 408 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 408 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 408 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3152 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 408 "hlds_rtti.m"
    else
#line 408 "hlds_rtti.m"
      {
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 408 "hlds_rtti.m"
        {
#line 408 "hlds_rtti.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], &hlds__hlds_rtti__V_12_12, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
        }
#line 3182 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 408 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 408 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 408 "hlds_rtti.m"
        else
#line 408 "hlds_rtti.m"
          {
#line 408 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 408 "hlds_rtti.m"
            {
#line 408 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 3202 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 408 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 408 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 408 "hlds_rtti.m"
            else
#line 408 "hlds_rtti.m"
              {
#line 408 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 408 "hlds_rtti.m"
                {
#line 408 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 3222 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 408 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 408 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 408 "hlds_rtti.m"
                else
#line 408 "hlds_rtti.m"
                  {
#line 408 "hlds_rtti.m"
                    {
#line 408 "hlds_rtti.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_7_7)), ((MR_Box) (hlds__hlds_rtti__V_11_11)));
                    }
#line 408 "hlds_rtti.m"
                  }
#line 408 "hlds_rtti.m"
              }
#line 408 "hlds_rtti.m"
          }
#line 408 "hlds_rtti.m"
      }
#line 408 "hlds_rtti.m"
  }
#line 408 "hlds_rtti.m"
}

#line 408 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
#line 408 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 408 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 408 "hlds_rtti.m"
{
#line 408 "hlds_rtti.m"
  {
#line 408 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 408 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 408 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 408 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 408 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 408 "hlds_rtti.m"
    else
#line 408 "hlds_rtti.m"
      {
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_16_16;
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 408 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 3303 "hlds.hlds_rtti.c"
        {
#line 3305 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
        }
#line 408 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
          {
#line 3312 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[2];
#line 3314 "hlds.hlds_rtti.c"
            {
#line 3316 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 408 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
              {
#line 3323 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[3];
#line 3325 "hlds.hlds_rtti.c"
                {
#line 3327 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 408 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 408 "hlds_rtti.m"
                  {
#line 3334 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__TypeInfo_16_16 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[4];
#line 3336 "hlds.hlds_rtti.c"
                    {
#line 3338 "hlds.hlds_rtti.c"
                      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_16_16, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                    }
#line 408 "hlds_rtti.m"
                  }
#line 408 "hlds_rtti.m"
              }
#line 408 "hlds_rtti.m"
          }
#line 408 "hlds_rtti.m"
      }
#line 408 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 408 "hlds_rtti.m"
  }
#line 408 "hlds_rtti.m"
}

#line 153 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0(
#line 153 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 153 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 153 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 153 "hlds_rtti.m"
{
#line 153 "hlds_rtti.m"
  {
#line 153 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 153 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 153 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 153 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_16 == hlds__hlds_rtti__CastY_17);
#line 153 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3380 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "hlds_rtti.m"
    else
#line 153 "hlds_rtti.m"
#line 153 "hlds_rtti.m"
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) {
#line 153 "hlds_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 153 "hlds_rtti.m"
        case (MR_Integer) 0:
#line 153 "hlds_rtti.m"
#line 153 "hlds_rtti.m"
          switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 153 "hlds_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 153 "hlds_rtti.m"
            case (MR_Integer) 0:
#line 153 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "hlds_rtti.m"
              break;
#line 153 "hlds_rtti.m"
            case (MR_Integer) 1:
#line 3404 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "hlds_rtti.m"
              break;
#line 153 "hlds_rtti.m"
            case (MR_Integer) 2:
#line 3410 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "hlds_rtti.m"
              break;
#line 153 "hlds_rtti.m"
          }
#line 153 "hlds_rtti.m"
          break;
#line 153 "hlds_rtti.m"
        case (MR_Integer) 1:
#line 153 "hlds_rtti.m"
          {
#line 153 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "hlds_rtti.m"
#line 153 "hlds_rtti.m"
            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 153 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 3432 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "hlds_rtti.m"
                break;
#line 153 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 153 "hlds_rtti.m"
                {
#line 153 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "hlds_rtti.m"
                  {
#line 153 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__V_5_5);
                  }
#line 153 "hlds_rtti.m"
                }
#line 153 "hlds_rtti.m"
                break;
#line 153 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 3454 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "hlds_rtti.m"
                break;
#line 153 "hlds_rtti.m"
            }
#line 153 "hlds_rtti.m"
          }
#line 153 "hlds_rtti.m"
          break;
#line 153 "hlds_rtti.m"
        case (MR_Integer) 2:
#line 153 "hlds_rtti.m"
          {
#line 153 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "hlds_rtti.m"
#line 153 "hlds_rtti.m"
            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 153 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 3478 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "hlds_rtti.m"
                break;
#line 153 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 3484 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "hlds_rtti.m"
                break;
#line 153 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 153 "hlds_rtti.m"
                {
#line 153 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "hlds_rtti.m"
                  {
#line 153 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_21_21, hlds__hlds_rtti__V_12_12);
                  }
#line 153 "hlds_rtti.m"
                }
#line 153 "hlds_rtti.m"
                break;
#line 153 "hlds_rtti.m"
            }
#line 153 "hlds_rtti.m"
          }
#line 153 "hlds_rtti.m"
          break;
#line 153 "hlds_rtti.m"
      }
#line 153 "hlds_rtti.m"
  }
#line 153 "hlds_rtti.m"
}

#line 153 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0(
#line 153 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 153 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 153 "hlds_rtti.m"
{
#line 153 "hlds_rtti.m"
  {
#line 153 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 153 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 153 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 153 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 153 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 153 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 153 "hlds_rtti.m"
    else
#line 153 "hlds_rtti.m"
#line 153 "hlds_rtti.m"
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) {
#line 153 "hlds_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 153 "hlds_rtti.m"
        case (MR_Integer) 0:
#line 153 "hlds_rtti.m"
          {
#line 153 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__CastX_7 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 153 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__CastY_8 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 153 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastY_8 == hlds__hlds_rtti__CastX_7);
#line 153 "hlds_rtti.m"
          }
#line 153 "hlds_rtti.m"
          break;
#line 153 "hlds_rtti.m"
        case (MR_Integer) 1:
#line 153 "hlds_rtti.m"
          {
#line 153 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_4_4;

#line 153 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 153 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 153 "hlds_rtti.m"
              {
#line 153 "hlds_rtti.m"
                hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3580 "hlds.hlds_rtti.c"
                {
#line 3582 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_4_4);
                }
#line 153 "hlds_rtti.m"
              }
#line 153 "hlds_rtti.m"
          }
#line 153 "hlds_rtti.m"
          break;
#line 153 "hlds_rtti.m"
        case (MR_Integer) 2:
#line 153 "hlds_rtti.m"
          {
#line 153 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_6_6;

#line 153 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 153 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 153 "hlds_rtti.m"
              {
#line 153 "hlds_rtti.m"
                hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3608 "hlds.hlds_rtti.c"
                {
#line 3610 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_6_6);
                }
#line 153 "hlds_rtti.m"
              }
#line 153 "hlds_rtti.m"
          }
#line 153 "hlds_rtti.m"
          break;
#line 153 "hlds_rtti.m"
      }
#line 153 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 153 "hlds_rtti.m"
  }
#line 153 "hlds_rtti.m"
}

#line 43 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0(
#line 43 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 43 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 43 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 43 "hlds_rtti.m"
{
#line 43 "hlds_rtti.m"
  {
#line 43 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 43 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_51 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 43 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_52 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 43 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_51 == hlds__hlds_rtti__CastY_52);
#line 43 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3652 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "hlds_rtti.m"
    else
#line 43 "hlds_rtti.m"
      {
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 43 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 5)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 6)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 7)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 8)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 9)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 11)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_36_36;
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_69_69 = (MR_Integer) hlds__hlds_rtti__V_4_4;
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_70_70 = (MR_Integer) hlds__hlds_rtti__V_20_20;

#line 43 "hlds_rtti.m"
        {
#line 43 "hlds_rtti.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_36_36, hlds__hlds_rtti__V_69_69, hlds__hlds_rtti__V_70_70);
        }
#line 3734 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_36_36 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_36_36;
#line 43 "hlds_rtti.m"
        else
#line 43 "hlds_rtti.m"
          {
#line 43 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_37_37;

#line 43 "hlds_rtti.m"
            {
#line 43 "hlds_rtti.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__V_37_37, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
            }
#line 3754 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_37_37 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_37_37;
#line 43 "hlds_rtti.m"
            else
#line 43 "hlds_rtti.m"
              {
#line 43 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_38_38;

#line 43 "hlds_rtti.m"
                {
#line 43 "hlds_rtti.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22);
                }
#line 3774 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_38_38 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_38_38;
#line 43 "hlds_rtti.m"
                else
#line 43 "hlds_rtti.m"
                  {
#line 43 "hlds_rtti.m"
                    MR_Word hlds__hlds_rtti__V_39_39;

#line 43 "hlds_rtti.m"
                    {
#line 43 "hlds_rtti.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_rtti__V_39_39, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_23_23);
                    }
#line 3794 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_39_39 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_39_39;
#line 43 "hlds_rtti.m"
                    else
#line 43 "hlds_rtti.m"
                      {
#line 43 "hlds_rtti.m"
                        MR_Word hlds__hlds_rtti__V_40_40;

#line 43 "hlds_rtti.m"
                        {
#line 43 "hlds_rtti.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_40_40, hlds__hlds_rtti__V_8_8, hlds__hlds_rtti__V_24_24);
                        }
#line 3814 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_40_40 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_40_40;
#line 43 "hlds_rtti.m"
                        else
#line 43 "hlds_rtti.m"
                          {
#line 43 "hlds_rtti.m"
                            MR_Word hlds__hlds_rtti__V_41_41;

#line 43 "hlds_rtti.m"
                            {
#line 43 "hlds_rtti.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_41_41, ((MR_Box) (hlds__hlds_rtti__V_9_9)), ((MR_Box) (hlds__hlds_rtti__V_25_25)));
                            }
#line 3834 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_41_41 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_41_41;
#line 43 "hlds_rtti.m"
                            else
#line 43 "hlds_rtti.m"
                              {
#line 43 "hlds_rtti.m"
                                MR_Word hlds__hlds_rtti__V_42_42;

#line 43 "hlds_rtti.m"
                                {
#line 43 "hlds_rtti.m"
                                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__hlds_rtti__V_42_42, hlds__hlds_rtti__V_10_10, hlds__hlds_rtti__V_26_26);
                                }
#line 3854 "hlds.hlds_rtti.c"
                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_42_42 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_42_42;
#line 43 "hlds_rtti.m"
                                else
#line 43 "hlds_rtti.m"
                                  {
#line 43 "hlds_rtti.m"
                                    MR_Word hlds__hlds_rtti__V_43_43;

#line 43 "hlds_rtti.m"
                                    {
#line 43 "hlds_rtti.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_43_43, hlds__hlds_rtti__V_11_11, hlds__hlds_rtti__V_27_27);
                                    }
#line 3874 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_43_43 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_43_43;
#line 43 "hlds_rtti.m"
                                    else
#line 43 "hlds_rtti.m"
                                      {
#line 43 "hlds_rtti.m"
                                        MR_Word hlds__hlds_rtti__V_44_44;

#line 43 "hlds_rtti.m"
                                        {
#line 43 "hlds_rtti.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[5], &hlds__hlds_rtti__V_44_44, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                        }
#line 3894 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_44_44 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_44_44;
#line 43 "hlds_rtti.m"
                                        else
#line 43 "hlds_rtti.m"
                                          {
#line 43 "hlds_rtti.m"
                                            MR_Word hlds__hlds_rtti__V_45_45;

#line 43 "hlds_rtti.m"
                                            {
#line 43 "hlds_rtti.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[6], &hlds__hlds_rtti__V_45_45, ((MR_Box) (hlds__hlds_rtti__V_13_13)), ((MR_Box) (hlds__hlds_rtti__V_29_29)));
                                            }
#line 3914 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_45_45 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_45_45;
#line 43 "hlds_rtti.m"
                                            else
#line 43 "hlds_rtti.m"
                                              {
#line 43 "hlds_rtti.m"
                                                MR_Word hlds__hlds_rtti__V_46_46;
#line 43 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_71_71 = (MR_Integer) hlds__hlds_rtti__V_14_14;
#line 43 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_72_72 = (MR_Integer) hlds__hlds_rtti__V_30_30;

#line 43 "hlds_rtti.m"
                                                {
#line 43 "hlds_rtti.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_46_46, hlds__hlds_rtti__V_71_71, hlds__hlds_rtti__V_72_72);
                                                }
#line 3938 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_46_46 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_46_46;
#line 43 "hlds_rtti.m"
                                                else
#line 43 "hlds_rtti.m"
                                                  {
#line 43 "hlds_rtti.m"
                                                    MR_Word hlds__hlds_rtti__V_47_47;
#line 43 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_73_73 = (MR_Integer) hlds__hlds_rtti__V_15_15;
#line 43 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_74_74 = (MR_Integer) hlds__hlds_rtti__V_31_31;

#line 43 "hlds_rtti.m"
                                                    {
#line 43 "hlds_rtti.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_47_47, hlds__hlds_rtti__V_73_73, hlds__hlds_rtti__V_74_74);
                                                    }
#line 3962 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_47_47 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_47_47;
#line 43 "hlds_rtti.m"
                                                    else
#line 43 "hlds_rtti.m"
                                                      {
#line 43 "hlds_rtti.m"
                                                        MR_Word hlds__hlds_rtti__V_48_48;
#line 43 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_75_75 = (MR_Integer) hlds__hlds_rtti__V_16_16;
#line 43 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_76_76 = (MR_Integer) hlds__hlds_rtti__V_32_32;

#line 43 "hlds_rtti.m"
                                                        {
#line 43 "hlds_rtti.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_75_75, hlds__hlds_rtti__V_76_76);
                                                        }
#line 3986 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_48_48 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_48_48;
#line 43 "hlds_rtti.m"
                                                        else
#line 43 "hlds_rtti.m"
                                                          {
#line 43 "hlds_rtti.m"
                                                            MR_Word hlds__hlds_rtti__V_49_49;

#line 43 "hlds_rtti.m"
                                                            {
#line 43 "hlds_rtti.m"
                                                              hlds__hlds_pred____Compare____pred_origin_0_0(&hlds__hlds_rtti__V_49_49, hlds__hlds_rtti__V_17_17, hlds__hlds_rtti__V_33_33);
                                                            }
#line 4006 "hlds.hlds_rtti.c"
                                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_49_49 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_49_49;
#line 43 "hlds_rtti.m"
                                                            else
#line 43 "hlds_rtti.m"
                                                              {
#line 43 "hlds_rtti.m"
                                                                MR_Word hlds__hlds_rtti__V_50_50;
#line 43 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_77_77 = (MR_Integer) hlds__hlds_rtti__V_18_18;
#line 43 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_78_78 = (MR_Integer) hlds__hlds_rtti__V_34_34;

#line 43 "hlds_rtti.m"
                                                                {
#line 43 "hlds_rtti.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_50_50, hlds__hlds_rtti__V_77_77, hlds__hlds_rtti__V_78_78);
                                                                }
#line 4030 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_50_50 == (MR_Integer) 0);
#line 43 "hlds_rtti.m"
                                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 43 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_50_50;
#line 43 "hlds_rtti.m"
                                                                else
#line 43 "hlds_rtti.m"
                                                                  {
#line 43 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_79_79 = (MR_Integer) hlds__hlds_rtti__V_19_19;
#line 43 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_80_80 = (MR_Integer) hlds__hlds_rtti__V_35_35;

#line 43 "hlds_rtti.m"
                                                                    {
#line 43 "hlds_rtti.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_79_79, hlds__hlds_rtti__V_80_80);
                                                                    }
#line 43 "hlds_rtti.m"
                                                                  }
#line 43 "hlds_rtti.m"
                                                              }
#line 43 "hlds_rtti.m"
                                                          }
#line 43 "hlds_rtti.m"
                                                      }
#line 43 "hlds_rtti.m"
                                                  }
#line 43 "hlds_rtti.m"
                                              }
#line 43 "hlds_rtti.m"
                                          }
#line 43 "hlds_rtti.m"
                                      }
#line 43 "hlds_rtti.m"
                                  }
#line 43 "hlds_rtti.m"
                              }
#line 43 "hlds_rtti.m"
                          }
#line 43 "hlds_rtti.m"
                      }
#line 43 "hlds_rtti.m"
                  }
#line 43 "hlds_rtti.m"
              }
#line 43 "hlds_rtti.m"
          }
#line 43 "hlds_rtti.m"
      }
#line 43 "hlds_rtti.m"
  }
#line 43 "hlds_rtti.m"
}

#line 43 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0(
#line 43 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 43 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 43 "hlds_rtti.m"
{
#line 43 "hlds_rtti.m"
  {
#line 43 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 43 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_35 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 43 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_36 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 43 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_35 == hlds__hlds_rtti__CastY_36);
#line 43 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 43 "hlds_rtti.m"
    else
#line 43 "hlds_rtti.m"
      {
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_39_39;
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_41_41;
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_42_42;
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 43 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 5)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 6)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 7)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 8)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 9)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 11)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 43 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4188 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_3_3 == hlds__hlds_rtti__V_19_19);
#line 43 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
          {
#line 4194 "hlds.hlds_rtti.c"
            {
#line 4196 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_20_20);
            }
#line 43 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
              {
#line 4203 "hlds.hlds_rtti.c"
                {
#line 4205 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
                }
#line 43 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                  {
#line 4212 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22) == 0);
#line 43 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                      {
#line 4218 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_7_7 == hlds__hlds_rtti__V_23_23);
#line 43 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                          {
#line 4224 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__TypeInfo_39_39 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4226 "hlds.hlds_rtti.c"
                            {
#line 4228 "hlds.hlds_rtti.c"
                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_39_39, ((MR_Box) (hlds__hlds_rtti__V_8_8)), ((MR_Box) (hlds__hlds_rtti__V_24_24)));
                            }
#line 43 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                              {
#line 4235 "hlds.hlds_rtti.c"
                                {
#line 4237 "hlds.hlds_rtti.c"
                                  hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_rtti__V_9_9, hlds__hlds_rtti__V_25_25);
                                }
#line 43 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                  {
#line 4244 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_10_10 == hlds__hlds_rtti__V_26_26);
#line 43 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                      {
#line 4250 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__TypeInfo_41_41 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[5];
#line 4252 "hlds.hlds_rtti.c"
                                        {
#line 4254 "hlds.hlds_rtti.c"
                                          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_41_41, ((MR_Box) (hlds__hlds_rtti__V_11_11)), ((MR_Box) (hlds__hlds_rtti__V_27_27)));
                                        }
#line 43 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                          {
#line 4261 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__TypeInfo_42_42 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[6];
#line 4263 "hlds.hlds_rtti.c"
                                            {
#line 4265 "hlds.hlds_rtti.c"
                                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_42_42, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                            }
#line 43 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                              {
#line 4272 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == hlds__hlds_rtti__V_29_29);
#line 43 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                  {
#line 4278 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == hlds__hlds_rtti__V_30_30);
#line 43 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                      {
#line 4284 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_15_15 == hlds__hlds_rtti__V_31_31);
#line 43 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                          {
#line 4290 "hlds.hlds_rtti.c"
                                                            {
#line 4292 "hlds.hlds_rtti.c"
                                                              hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__V_32_32);
                                                            }
#line 43 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 43 "hlds_rtti.m"
                                                              {
#line 4299 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_17_17 == hlds__hlds_rtti__V_33_33);
#line 43 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 4303 "hlds.hlds_rtti.c"
                                                                  hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_18_18 == hlds__hlds_rtti__V_34_34);
#line 43 "hlds_rtti.m"
                                                              }
#line 43 "hlds_rtti.m"
                                                          }
#line 43 "hlds_rtti.m"
                                                      }
#line 43 "hlds_rtti.m"
                                                  }
#line 43 "hlds_rtti.m"
                                              }
#line 43 "hlds_rtti.m"
                                          }
#line 43 "hlds_rtti.m"
                                      }
#line 43 "hlds_rtti.m"
                                  }
#line 43 "hlds_rtti.m"
                              }
#line 43 "hlds_rtti.m"
                          }
#line 43 "hlds_rtti.m"
                      }
#line 43 "hlds_rtti.m"
                  }
#line 43 "hlds_rtti.m"
              }
#line 43 "hlds_rtti.m"
          }
#line 43 "hlds_rtti.m"
      }
#line 43 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 43 "hlds_rtti.m"
  }
#line 43 "hlds_rtti.m"
}

#line 37 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0(
#line 37 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 37 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2,
#line 37 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__3_3)
#line 37 "hlds_rtti.m"
{
#line 37 "hlds_rtti.m"
  {
#line 37 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 37 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 37 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 37 "hlds_rtti.m"
    {
#line 37 "hlds_rtti.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Cast_HeadVar1_4, hlds__hlds_rtti__Cast_HeadVar2_5);
    }
#line 37 "hlds_rtti.m"
  }
#line 37 "hlds_rtti.m"
}

#line 37 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0(
#line 37 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__1_1,
#line 37 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2)
#line 37 "hlds_rtti.m"
{
#line 37 "hlds_rtti.m"
  {
#line 37 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 37 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 37 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 37 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__Cast_HeadVar1_3, hlds__hlds_rtti__Cast_HeadVar2_4) == 0);
#line 37 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 37 "hlds_rtti.m"
  }
#line 37 "hlds_rtti.m"
}

#line 109 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0(
#line 109 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 109 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 109 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 109 "hlds_rtti.m"
{
#line 109 "hlds_rtti.m"
  {
#line 109 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 109 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 109 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 109 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 109 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 4423 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "hlds_rtti.m"
    else
#line 109 "hlds_rtti.m"
      {
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 109 "hlds_rtti.m"
        {
#line 109 "hlds_rtti.m"
          parse_tree__prog_data____Compare____class_id_0_0(&hlds__hlds_rtti__V_12_12, hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_8_8);
        }
#line 4453 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 109 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 109 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 109 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 109 "hlds_rtti.m"
        else
#line 109 "hlds_rtti.m"
          {
#line 109 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 109 "hlds_rtti.m"
            {
#line 109 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 4473 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 109 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 109 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 109 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 109 "hlds_rtti.m"
            else
#line 109 "hlds_rtti.m"
              {
#line 109 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 109 "hlds_rtti.m"
                {
#line 109 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[4], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 4493 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 109 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 109 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 109 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 109 "hlds_rtti.m"
                else
#line 109 "hlds_rtti.m"
                  {
#line 109 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraints_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_11_11);
                  }
#line 109 "hlds_rtti.m"
              }
#line 109 "hlds_rtti.m"
          }
#line 109 "hlds_rtti.m"
      }
#line 109 "hlds_rtti.m"
  }
#line 109 "hlds_rtti.m"
}

#line 109 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0(
#line 109 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 109 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 109 "hlds_rtti.m"
{
#line 109 "hlds_rtti.m"
  {
#line 109 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 109 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 109 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 109 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 109 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 109 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 109 "hlds_rtti.m"
    else
#line 109 "hlds_rtti.m"
      {
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 109 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 4568 "hlds.hlds_rtti.c"
        {
#line 4570 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____class_id_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_7_7);
        }
#line 109 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 109 "hlds_rtti.m"
          {
#line 4577 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4579 "hlds.hlds_rtti.c"
            {
#line 4581 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 109 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 109 "hlds_rtti.m"
              {
#line 4588 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[4];
#line 4590 "hlds.hlds_rtti.c"
                {
#line 4592 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 109 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 4597 "hlds.hlds_rtti.c"
                  {
#line 4599 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_10_10);
                  }
#line 109 "hlds_rtti.m"
              }
#line 109 "hlds_rtti.m"
          }
#line 109 "hlds_rtti.m"
      }
#line 109 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 109 "hlds_rtti.m"
  }
#line 109 "hlds_rtti.m"
}

#line 900 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 900 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 900 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 900 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2)
#line 900 "hlds_rtti.m"
{
#line 900 "hlds_rtti.m"
  {
#line 900 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 900 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_LambdaHeadVar__2_23;

#line 900 "hlds_rtti.m"
    {
#line 900 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__900__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), &hlds__hlds_rtti__conv0_LambdaHeadVar__2_23);
    }
#line 900 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_LambdaHeadVar__2_23));
#line 900 "hlds_rtti.m"
  }
#line 900 "hlds_rtti.m"
}

#line 881 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 881 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 881 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 881 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 881 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4)
#line 881 "hlds_rtti.m"
{
#line 884 "hlds_rtti.m"
  while (MR_TRUE)
#line 884 "hlds_rtti.m"
    {
#line 884 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 884 "hlds_rtti.m"
      {
#line 884 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 884 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "hlds_rtti.m"
        else
#line 885 "hlds_rtti.m"
          {
#line 885 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Type_12;
#line 885 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeVars_13;

#line 886 "hlds_rtti.m"
            {
#line 886 "hlds_rtti.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__Var_7, &hlds__hlds_rtti__Type_12);
            }
#line 887 "hlds_rtti.m"
            {
#line 887 "hlds_rtti.m"
              parse_tree__prog_type__type_vars_2_p_0(hlds__hlds_rtti__Type_12, &hlds__hlds_rtti__TypeVars_13);
            }
#line 892 "hlds_rtti.m"
            if ((hlds__hlds_rtti__TypeVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "hlds_rtti.m"
              {
#line 891 "hlds_rtti.m"
                /* direct tailcall eliminated */
#line 891 "hlds_rtti.m"
                {
#line 891 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__Vars_8;

#line 891 "hlds_rtti.m"
                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 891 "hlds_rtti.m"
                }
#line 891 "hlds_rtti.m"
                continue;
#line 891 "hlds_rtti.m"
              }
#line 892 "hlds_rtti.m"
            else
#line 893 "hlds_rtti.m"
              {
#line 893 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfo_29_29;
#line 893 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__LookupVar_16;
#line 893 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsHead_20;
#line 893 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsTail_21;

#line 900 "hlds_rtti.m"
                {
#line 900 "hlds_rtti.m"
                  hlds__hlds_rtti__LookupVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 900 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
#line 900 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1));
#line 900 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 3) = ((MR_Box) (hlds__hlds_rtti__TVarMap_3));
#line 900 "hlds_rtti.m"
                }
#line 4742 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 904 "hlds_rtti.m"
                {
#line 904 "hlds_rtti.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__LookupVar_16, hlds__hlds_rtti__TypeVars_13, &hlds__hlds_rtti__TypeInfoVarsHead_20);
                }
#line 906 "hlds_rtti.m"
                {
#line 906 "hlds_rtti.m"
                  hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__Vars_8, hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__TVarMap_3, &hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 907 "hlds_rtti.m"
                {
#line 907 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfoVarsHead_20, hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 893 "hlds_rtti.m"
              }
#line 885 "hlds_rtti.m"
          }
#line 884 "hlds_rtti.m"
      }
#line 884 "hlds_rtti.m"
      break;
#line 884 "hlds_rtti.m"
    }
#line 881 "hlds_rtti.m"
}

#line 847 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 847 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 847 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 847 "hlds_rtti.m"
{
#line 851 "hlds_rtti.m"
  {
#line 851 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 851 "hlds_rtti.m"
    {
#line 851 "hlds_rtti.m"
      hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Constraint0_7, hlds__hlds_rtti__Constraint_8);
    }
#line 851 "hlds_rtti.m"
  }
#line 847 "hlds_rtti.m"
}

#line 836 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 836 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15)
#line 836 "hlds_rtti.m"
{
#line 841 "hlds_rtti.m"
  {
#line 841 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 841 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 841 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 841 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 841 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_12;
#line 841 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_13;

#line 843 "hlds_rtti.m"
    {
#line 843 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__Pred_6, hlds__hlds_rtti__Args0_11, &hlds__hlds_rtti__Args_12);
    }
#line 844 "hlds_rtti.m"
    {
#line 844 "hlds_rtti.m"
      hlds__hlds_rtti__Constraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 0) = ((MR_Box) (hlds__hlds_rtti__Name_10));
#line 844 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 1) = ((MR_Box) (hlds__hlds_rtti__Args_12));
#line 844 "hlds_rtti.m"
    }
#line 845 "hlds_rtti.m"
    {
#line 845 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_13)), ((MR_Box) (hlds__hlds_rtti__Var_8)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_14, hlds__hlds_rtti__STATE_VARIABLE_Map_15);
    }
#line 841 "hlds_rtti.m"
  }
#line 836 "hlds_rtti.m"
}

#line 802 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 802 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 802 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 802 "hlds_rtti.m"
{
#line 808 "hlds_rtti.m"
  {
#line 808 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 808 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 808 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 808 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 728 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_32;
#line 728 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_33;
#line 728 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_32;
#line 813 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingConstraint_17;
#line 813 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingConstraint_17;

#line 809 "hlds_rtti.m"
    {
#line 809 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_12, &hlds__hlds_rtti__Constraint1_14);
    }
#line 811 "hlds_rtti.m"
    {
#line 811 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 4905 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_33 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 728 "hlds_rtti.m"
    {
#line 728 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_32);
    }
#line 728 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 728 "hlds_rtti.m"
      {
#line 728 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_32 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_32);
#line 728 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 728 "hlds_rtti.m"
      }
#line 728 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 729 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_32;
#line 728 "hlds_rtti.m"
    else
#line 731 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 813 "hlds_rtti.m"
    {
#line 813 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingConstraint_17);
    }
#line 813 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 813 "hlds_rtti.m"
      {
#line 813 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingConstraint_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingConstraint_17);
#line 813 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 813 "hlds_rtti.m"
      }
#line 813 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 814 "hlds_rtti.m"
      {
#line 814 "hlds_rtti.m"
        {
#line 814 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Constraint_15, hlds__hlds_rtti__ExistingConstraint_17);
        }
#line 814 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 815 "hlds_rtti.m"
          {
#line 815 "hlds_rtti.m"
          }
#line 814 "hlds_rtti.m"
        else
#line 817 "hlds_rtti.m"
          {
#line 817 "hlds_rtti.m"
            {
#line 817 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
#line 817 "hlds_rtti.m"
              return;
            }
#line 817 "hlds_rtti.m"
          }
#line 814 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 814 "hlds_rtti.m"
      }
#line 813 "hlds_rtti.m"
    else
#line 820 "hlds_rtti.m"
      {
#line 820 "hlds_rtti.m"
        {
#line 820 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Constraint_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
        }
#line 820 "hlds_rtti.m"
      }
#line 808 "hlds_rtti.m"
  }
#line 802 "hlds_rtti.m"
}

#line 781 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 781 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 781 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 781 "hlds_rtti.m"
{
#line 785 "hlds_rtti.m"
  {
#line 785 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 785 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type1_14;
#line 785 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_15;
#line 785 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 728 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_61;
#line 728 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_62;
#line 728 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_61;
#line 789 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingType_17;
#line 789 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingType_17;

#line 786 "hlds_rtti.m"
    {
#line 786 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Type0_12, &hlds__hlds_rtti__Type1_14);
    }
#line 787 "hlds_rtti.m"
    {
#line 787 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Type1_14, &hlds__hlds_rtti__Type_15);
    }
#line 5043 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_62 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 728 "hlds_rtti.m"
    {
#line 728 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_61);
    }
#line 728 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 728 "hlds_rtti.m"
      {
#line 728 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_61 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_61);
#line 728 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 728 "hlds_rtti.m"
      }
#line 728 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 729 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_61;
#line 728 "hlds_rtti.m"
    else
#line 731 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 789 "hlds_rtti.m"
    {
#line 789 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingType_17);
    }
#line 789 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 789 "hlds_rtti.m"
      {
#line 789 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingType_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingType_17);
#line 789 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 789 "hlds_rtti.m"
      }
#line 789 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 790 "hlds_rtti.m"
      {
#line 790 "hlds_rtti.m"
        {
#line 790 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Type_15, hlds__hlds_rtti__ExistingType_17);
        }
#line 790 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 791 "hlds_rtti.m"
          {
#line 791 "hlds_rtti.m"
          }
#line 790 "hlds_rtti.m"
        else
#line 793 "hlds_rtti.m"
          {
#line 793 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_22_22;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_28_28;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_31_31;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_39_39;
#line 793 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_45_45;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_47_47;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_48_48;
#line 793 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_55_55;

#line 796 "hlds_rtti.m"
            {
#line 796 "hlds_rtti.m"
              hlds__hlds_rtti__V_28_28 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__Type_15)));
            }
#line 796 "hlds_rtti.m"
            {
#line 796 "hlds_rtti.m"
              hlds__hlds_rtti__V_31_31 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__ExistingType_17)));
            }
#line 5131 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__V_45_45 = (MR_Word) &hlds__hlds_rtti_scalar_common_7[0];
#line 796 "hlds_rtti.m"
            {
#line 796 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_31_31, &hlds__hlds_rtti__V_39_39);
            }
#line 794 "hlds_rtti.m"
            {
#line 794 "hlds_rtti.m"
              hlds__hlds_rtti__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", hlds__hlds_rtti__V_39_39);
            }
#line 796 "hlds_rtti.m"
            {
#line 796 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_28_28, &hlds__hlds_rtti__V_48_48);
            }
#line 794 "hlds_rtti.m"
            {
#line 794 "hlds_rtti.m"
              hlds__hlds_rtti__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_47_47);
            }
#line 794 "hlds_rtti.m"
            {
#line 794 "hlds_rtti.m"
              hlds__hlds_rtti__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", hlds__hlds_rtti__V_55_55);
            }
#line 793 "hlds_rtti.m"
            {
#line 793 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", hlds__hlds_rtti__V_22_22);
#line 793 "hlds_rtti.m"
              return;
            }
#line 793 "hlds_rtti.m"
          }
#line 790 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 790 "hlds_rtti.m"
      }
#line 789 "hlds_rtti.m"
    else
#line 799 "hlds_rtti.m"
      {
#line 799 "hlds_rtti.m"
        {
#line 799 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Type_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
        }
#line 799 "hlds_rtti.m"
      }
#line 785 "hlds_rtti.m"
  }
#line 781 "hlds_rtti.m"
}

#line 752 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 752 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 752 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37)
#line 752 "hlds_rtti.m"
{
#line 756 "hlds_rtti.m"
  {
#line 756 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 756 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_40_40;
#line 756 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewLocn_16;
#line 756 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewTVar1_17;
#line 756 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewType_18;
#line 756 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_38_38;

#line 5221 "hlds.hlds_rtti.c"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_12)) == (MR_mktag((MR_Integer) 0))))
#line 5223 "hlds.hlds_rtti.c"
      {
#line 5225 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5227 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_15;
#line 728 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_49;
#line 728 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_50 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 728 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Var1_49;

#line 728 "hlds_rtti.m"
        {
#line 728 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_14)), &hlds__hlds_rtti__conv0_Var1_49);
        }
#line 728 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 728 "hlds_rtti.m"
          {
#line 728 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_49 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_49);
#line 728 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 728 "hlds_rtti.m"
          }
#line 728 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 729 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var1_49;
#line 728 "hlds_rtti.m"
        else
#line 731 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var_14;
#line 405 "hlds_rtti.m"
        {
#line 405 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 405 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_15));
#line 405 "hlds_rtti.m"
        }
#line 5267 "hlds.hlds_rtti.c"
      }
#line 5269 "hlds.hlds_rtti.c"
    else
#line 5271 "hlds.hlds_rtti.c"
      {
#line 5273 "hlds.hlds_rtti.c"
        MR_Integer hlds__hlds_rtti__Num_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 1)));
#line 5275 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5277 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_60;
#line 728 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_57;
#line 728 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_56 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 728 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Var1_57;

#line 728 "hlds_rtti.m"
        {
#line 728 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_59)), &hlds__hlds_rtti__conv1_Var1_57);
        }
#line 728 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 728 "hlds_rtti.m"
          {
#line 728 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_57 = ((MR_Word) hlds__hlds_rtti__conv1_Var1_57);
#line 728 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 728 "hlds_rtti.m"
          }
#line 728 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 729 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var1_57;
#line 728 "hlds_rtti.m"
        else
#line 731 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var_59;
#line 406 "hlds_rtti.m"
        {
#line 406 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_60));
#line 406 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 1) = ((MR_Box) (hlds__hlds_rtti__Num_55));
#line 406 "hlds_rtti.m"
        }
#line 5319 "hlds.hlds_rtti.c"
      }
#line 760 "hlds_rtti.m"
    {
#line 760 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__TVar_11, &hlds__hlds_rtti__NewTVar1_17);
    }
#line 5326 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_40_40 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 763 "hlds_rtti.m"
    {
#line 763 "hlds_rtti.m"
      hlds__hlds_rtti__V_38_38 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 763 "hlds_rtti.m"
    {
#line 763 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__NewTVar1_17, &hlds__hlds_rtti__NewType_18);
    }
#line 771 "hlds_rtti.m"
#line 771 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__NewType_18)) {
#line 771 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 771 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 767 "hlds_rtti.m"
        {
#line 767 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__NewTVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)));
#line 767 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 1)));

#line 770 "hlds_rtti.m"
          {
#line 770 "hlds_rtti.m"
            mercury__map__set_4_p_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__NewTVar_19)), ((MR_Box) (hlds__hlds_rtti__NewLocn_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_36, hlds__hlds_rtti__STATE_VARIABLE_Map_37);
          }
#line 767 "hlds_rtti.m"
        }
#line 771 "hlds_rtti.m"
        break;
#line 771 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 773 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 771 "hlds_rtti.m"
        break;
#line 771 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 772 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 771 "hlds_rtti.m"
        break;
#line 771 "hlds_rtti.m"
      case (MR_Integer) 3:
#line 771 "hlds_rtti.m"
#line 771 "hlds_rtti.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)))) {
#line 771 "hlds_rtti.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 771 "hlds_rtti.m"
          case (MR_Integer) 0:
#line 774 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 771 "hlds_rtti.m"
            break;
#line 771 "hlds_rtti.m"
          case (MR_Integer) 1:
#line 775 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 771 "hlds_rtti.m"
            break;
#line 771 "hlds_rtti.m"
          case (MR_Integer) 2:
#line 776 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 771 "hlds_rtti.m"
            break;
#line 771 "hlds_rtti.m"
          case (MR_Integer) 3:
#line 777 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 771 "hlds_rtti.m"
            break;
#line 771 "hlds_rtti.m"
        }
#line 771 "hlds_rtti.m"
        break;
#line 771 "hlds_rtti.m"
    }
#line 756 "hlds_rtti.m"
  }
#line 752 "hlds_rtti.m"
}

#line 734 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 734 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 734 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18)
#line 734 "hlds_rtti.m"
{
#line 738 "hlds_rtti.m"
  {
#line 738 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 738 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 738 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 738 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 728 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_25;
#line 728 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_26;
#line 728 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_25;

#line 739 "hlds_rtti.m"
    {
#line 739 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_11, &hlds__hlds_rtti__Constraint1_14);
    }
#line 741 "hlds_rtti.m"
    {
#line 741 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 5461 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 728 "hlds_rtti.m"
    {
#line 728 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_12)), &hlds__hlds_rtti__conv0_Var1_25);
    }
#line 728 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 728 "hlds_rtti.m"
      {
#line 728 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_25 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_25);
#line 728 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 728 "hlds_rtti.m"
      }
#line 728 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 729 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_25;
#line 728 "hlds_rtti.m"
    else
#line 731 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_12;
#line 743 "hlds_rtti.m"
    {
#line 743 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_15)), ((MR_Box) (hlds__hlds_rtti__Var_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_17, hlds__hlds_rtti__STATE_VARIABLE_Map_18);
    }
#line 738 "hlds_rtti.m"
  }
#line 734 "hlds_rtti.m"
}

#line 687 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 687 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 687 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 687 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9)
#line 687 "hlds_rtti.m"
{
#line 690 "hlds_rtti.m"
  {
#line 690 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 690 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 1)));
#line 691 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 0)));

#line 692 "hlds_rtti.m"
    {
#line 692 "hlds_rtti.m"
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__ArgTypes_7, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);
    }
#line 690 "hlds_rtti.m"
  }
#line 687 "hlds_rtti.m"
}

#line 551 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 551 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 551 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 551 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 551 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 551 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 551 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6)
#line 551 "hlds_rtti.m"
{
#line 557 "hlds_rtti.m"
  while (MR_TRUE)
#line 557 "hlds_rtti.m"
    {
#line 557 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 557 "hlds_rtti.m"
      {
#line 557 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 557 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "hlds_rtti.m"
          {
#line 557 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 557 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 557 "hlds_rtti.m"
          }
#line 557 "hlds_rtti.m"
        else
#line 559 "hlds_rtti.m"
          {
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraint_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 0)));
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Constraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 1)));
#line 559 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_21;
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_22;
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;
#line 559 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 562 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_22;

#line 561 "hlds_rtti.m"
            {
#line 561 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_19);
            }
#line 562 "hlds_rtti.m"
            {
#line 562 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_21, &hlds__hlds_rtti__conv0_Used_22);
            }
#line 562 "hlds_rtti.m"
            hlds__hlds_rtti__Used_22 = ((MR_Word) hlds__hlds_rtti__conv0_Used_22);
#line 566 "hlds_rtti.m"
#line 566 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_22) {
#line 566 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 566 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 567 "hlds_rtti.m"
                {
#line 568 "hlds_rtti.m"
                  {
#line 568 "hlds_rtti.m"
                    mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_20)), hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5, &hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27);
                  }
#line 567 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 567 "hlds_rtti.m"
                }
#line 566 "hlds_rtti.m"
                break;
#line 566 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 564 "hlds_rtti.m"
                {
#line 565 "hlds_rtti.m"
                  {
#line 565 "hlds_rtti.m"
                    hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (hlds__hlds_rtti__VarConstraint_14));
#line 565 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3));
#line 565 "hlds_rtti.m"
                  }
#line 564 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 564 "hlds_rtti.m"
                }
#line 566 "hlds_rtti.m"
                break;
#line 566 "hlds_rtti.m"
            }
#line 570 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 570 "hlds_rtti.m"
            {
#line 570 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarConstraints_15;
#line 570 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 570 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;

#line 570 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5;
#line 570 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3;
#line 570 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 570 "hlds_rtti.m"
            }
#line 570 "hlds_rtti.m"
            continue;
#line 559 "hlds_rtti.m"
          }
#line 557 "hlds_rtti.m"
      }
#line 557 "hlds_rtti.m"
      break;
#line 557 "hlds_rtti.m"
    }
#line 551 "hlds_rtti.m"
}

#line 533 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 533 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 533 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 533 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 533 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4)
#line 533 "hlds_rtti.m"
{
#line 538 "hlds_rtti.m"
  while (MR_TRUE)
#line 538 "hlds_rtti.m"
    {
#line 538 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 538 "hlds_rtti.m"
      {
#line 538 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 538 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 538 "hlds_rtti.m"
        else
#line 539 "hlds_rtti.m"
          {
#line 539 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 539 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 539 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 0)));
#line 539 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_15;
#line 539 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_16;
#line 539 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;
#line 540 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 1)));
#line 542 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_16;

#line 541 "hlds_rtti.m"
            {
#line 541 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_13);
            }
#line 542 "hlds_rtti.m"
            {
#line 542 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_15, &hlds__hlds_rtti__conv0_Used_16);
            }
#line 542 "hlds_rtti.m"
            hlds__hlds_rtti__Used_16 = ((MR_Word) hlds__hlds_rtti__conv0_Used_16);
#line 546 "hlds_rtti.m"
#line 546 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_16) {
#line 546 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 547 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 546 "hlds_rtti.m"
                break;
#line 546 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 545 "hlds_rtti.m"
                {
#line 545 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (hlds__hlds_rtti__VarType_9));
#line 545 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3));
#line 545 "hlds_rtti.m"
                }
#line 546 "hlds_rtti.m"
                break;
#line 546 "hlds_rtti.m"
            }
#line 549 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 549 "hlds_rtti.m"
            {
#line 549 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarTypes_10;
#line 549 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;

#line 549 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3;
#line 549 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 549 "hlds_rtti.m"
            }
#line 549 "hlds_rtti.m"
            continue;
#line 539 "hlds_rtti.m"
          }
#line 538 "hlds_rtti.m"
      }
#line 538 "hlds_rtti.m"
      break;
#line 538 "hlds_rtti.m"
    }
#line 533 "hlds_rtti.m"
}

#line 512 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 512 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 512 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 512 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 512 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4)
#line 512 "hlds_rtti.m"
{
#line 517 "hlds_rtti.m"
  while (MR_TRUE)
#line 517 "hlds_rtti.m"
    {
#line 517 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 517 "hlds_rtti.m"
      {
#line 517 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 517 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 517 "hlds_rtti.m"
        else
#line 518 "hlds_rtti.m"
          {
#line 518 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 518 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Locn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 1)));
#line 518 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_15;
#line 518 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_17;
#line 518 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_18;
#line 518 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;
#line 519 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___TVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 0)));
#line 524 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_18;

#line 521 "hlds_rtti.m"
            if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_14)) == (MR_mktag((MR_Integer) 0))))
#line 520 "hlds_rtti.m"
              hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 521 "hlds_rtti.m"
            else
#line 521 "hlds_rtti.m"
              {
#line 521 "hlds_rtti.m"
                MR_Integer hlds__hlds_rtti__V_16_16;

#line 521 "hlds_rtti.m"
                hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 521 "hlds_rtti.m"
                hlds__hlds_rtti__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 1)));
#line 521 "hlds_rtti.m"
              }
#line 523 "hlds_rtti.m"
            {
#line 523 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_15);
            }
#line 524 "hlds_rtti.m"
            {
#line 524 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_17, &hlds__hlds_rtti__conv0_Used_18);
            }
#line 524 "hlds_rtti.m"
            hlds__hlds_rtti__Used_18 = ((MR_Word) hlds__hlds_rtti__conv0_Used_18);
#line 528 "hlds_rtti.m"
#line 528 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_18) {
#line 528 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 528 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 529 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 528 "hlds_rtti.m"
                break;
#line 528 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 527 "hlds_rtti.m"
                {
#line 527 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (hlds__hlds_rtti__TVarLocn_9));
#line 527 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3));
#line 527 "hlds_rtti.m"
                }
#line 528 "hlds_rtti.m"
                break;
#line 528 "hlds_rtti.m"
            }
#line 531 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 531 "hlds_rtti.m"
            {
#line 531 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__TVarLocns_10;
#line 531 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;

#line 531 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3;
#line 531 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 531 "hlds_rtti.m"
            }
#line 531 "hlds_rtti.m"
            continue;
#line 518 "hlds_rtti.m"
          }
#line 517 "hlds_rtti.m"
      }
#line 517 "hlds_rtti.m"
      break;
#line 517 "hlds_rtti.m"
    }
#line 512 "hlds_rtti.m"
}

#line 330 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(
#line 330 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars0_6,
#line 330 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TypeInfoLiveness_7,
#line 330 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_8,
#line 330 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_9,
#line 330 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_10)
#line 330 "hlds_rtti.m"
{
#line 913 "hlds_rtti.m"
  {
#line 913 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 913 "hlds_rtti.m"
#line 913 "hlds_rtti.m"
    switch (hlds__hlds_rtti__TypeInfoLiveness_7) {
#line 913 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 913 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 918 "hlds_rtti.m"
        *hlds__hlds_rtti__Vars_10 = hlds__hlds_rtti__Vars0_6;
#line 913 "hlds_rtti.m"
        break;
#line 913 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 913 "hlds_rtti.m"
        {
#line 913 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeCtorInfo_15_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 913 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVars_11;
#line 913 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TVarMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 1)));
#line 913 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__VarList_18;
#line 913 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVarList_19;
#line 873 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 0)));
#line 873 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 2)));
#line 873 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 3)));

#line 874 "hlds_rtti.m"
          {
#line 874 "hlds_rtti.m"
            hlds__hlds_rtti__VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__Vars0_6);
          }
#line 875 "hlds_rtti.m"
          {
#line 875 "hlds_rtti.m"
            hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_18, hlds__hlds_rtti__VarTypes_8, hlds__hlds_rtti__TVarMap_17, &hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 876 "hlds_rtti.m"
          {
#line 876 "hlds_rtti.m"
            hlds__hlds_rtti__TypeInfoVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 915 "hlds_rtti.m"
          {
#line 915 "hlds_rtti.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Vars0_6, hlds__hlds_rtti__TypeInfoVars_11, hlds__hlds_rtti__Vars_10);
          }
#line 913 "hlds_rtti.m"
        }
#line 913 "hlds_rtti.m"
        break;
#line 913 "hlds_rtti.m"
    }
#line 913 "hlds_rtti.m"
  }
#line 330 "hlds_rtti.m"
}

#line 327 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_4_p_0(
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars_5,
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_6,
#line 327 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_7,
#line 327 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TypeInfoVars_8)
#line 327 "hlds_rtti.m"
{
#line 872 "hlds_rtti.m"
  {
#line 872 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 872 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 872 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 1)));
#line 872 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarList_10;
#line 872 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfoVarList_11;
#line 873 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 0)));
#line 873 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 2)));
#line 873 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 3)));

#line 874 "hlds_rtti.m"
    {
#line 874 "hlds_rtti.m"
      hlds__hlds_rtti__VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__Vars_5);
    }
#line 875 "hlds_rtti.m"
    {
#line 875 "hlds_rtti.m"
      hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_10, hlds__hlds_rtti__VarTypes_6, hlds__hlds_rtti__TVarMap_9, &hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 876 "hlds_rtti.m"
    {
#line 876 "hlds_rtti.m"
      *hlds__hlds_rtti__TypeInfoVars_8 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 872 "hlds_rtti.m"
  }
#line 327 "hlds_rtti.m"
}

#line 316 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(
#line 316 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsA_4,
#line 316 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsB_5,
#line 316 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarMaps_6)
#line 316 "hlds_rtti.m"
{
#line 856 "hlds_rtti.m"
  {
#line 856 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_20_20 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 0)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 1)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 2)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 3)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 0)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 1)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 2)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 3)));
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImap_15;
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImap_16;
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_17;
#line 856 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_18;

#line 861 "hlds_rtti.m"
    {
#line 861 "hlds_rtti.m"
      mercury__map__overlay_3_p_0(hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TCImapA_7, hlds__hlds_rtti__TCImapB_11, &hlds__hlds_rtti__TCImap_15);
    }
#line 862 "hlds_rtti.m"
    {
#line 862 "hlds_rtti.m"
      mercury__map__overlay_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TImapA_8, hlds__hlds_rtti__TImapB_12, &hlds__hlds_rtti__TImap_16);
    }
#line 865 "hlds_rtti.m"
    {
#line 865 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__TypeMapA_9, hlds__hlds_rtti__TypeMapB_13, &hlds__hlds_rtti__TypeMap_17);
    }
#line 866 "hlds_rtti.m"
    {
#line 866 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__ConstraintMapA_10, hlds__hlds_rtti__ConstraintMapB_14, &hlds__hlds_rtti__ConstraintMap_18);
    }
#line 868 "hlds_rtti.m"
    {
#line 868 "hlds_rtti.m"
      MR_Word base;
#line 868 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 868 "hlds_rtti.m"
      *hlds__hlds_rtti__VarMaps_6 = base;
#line 868 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCImap_15));
#line 868 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TImap_16));
#line 868 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_17));
#line 868 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_18));
#line 868 "hlds_rtti.m"
    }
#line 856 "hlds_rtti.m"
  }
#line 316 "hlds_rtti.m"
}

#line 830 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 830 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 830 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 830 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 830 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 830 "hlds_rtti.m"
{
#line 830 "hlds_rtti.m"
  {
#line 830 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 830 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_Constraint_8;

#line 830 "hlds_rtti.m"
    {
#line 830 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_Constraint_8);
    }
#line 830 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_Constraint_8));
#line 830 "hlds_rtti.m"
  }
#line 830 "hlds_rtti.m"
}

#line 827 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 827 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 827 "hlds_rtti.m"
{
#line 827 "hlds_rtti.m"
  {
#line 827 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 827 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15;

#line 827 "hlds_rtti.m"
    {
#line 827 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15);
    }
#line 827 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15));
#line 827 "hlds_rtti.m"
  }
#line 827 "hlds_rtti.m"
}

#line 307 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(
#line 307 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_4,
#line 307 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12,
#line 307 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13)
#line 307 "hlds_rtti.m"
{
#line 823 "hlds_rtti.m"
  {
#line 823 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_45_45;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_46_46;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_48_48;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap_9;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_10;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_11;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_33_33;
#line 823 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_34_34;
#line 824 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 827 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TciMap_9;
#line 832 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_29_29;
#line 832 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_31_31;
#line 832 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_32_32;

#line 827 "hlds_rtti.m"
    {
#line 827 "hlds_rtti.m"
      hlds__hlds_rtti__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 827 "hlds_rtti.m"
    }
#line 6282 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6284 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_46_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 828 "hlds_rtti.m"
    {
#line 828 "hlds_rtti.m"
      hlds__hlds_rtti__V_15_15 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46);
    }
#line 827 "hlds_rtti.m"
    {
#line 827 "hlds_rtti.m"
      mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_14_14, hlds__hlds_rtti__TciMap0_6, ((MR_Box) (hlds__hlds_rtti__V_15_15)), &hlds__hlds_rtti__conv1_TciMap_9);
    }
#line 827 "hlds_rtti.m"
    hlds__hlds_rtti__TciMap_9 = ((MR_Word) hlds__hlds_rtti__conv1_TciMap_9);
#line 6298 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 829 "hlds_rtti.m"
    {
#line 829 "hlds_rtti.m"
      mercury__map__map_values_only_3_p_0(hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__Pred_4, hlds__hlds_rtti__TypeMap0_7, &hlds__hlds_rtti__TypeMap_10);
    }
#line 830 "hlds_rtti.m"
    {
#line 830 "hlds_rtti.m"
      hlds__hlds_rtti__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 830 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
#line 830 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
#line 830 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 830 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 830 "hlds_rtti.m"
    }
#line 830 "hlds_rtti.m"
    {
#line 830 "hlds_rtti.m"
      mercury__map__map_values_3_p_0(hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__ConstraintMap0_8, &hlds__hlds_rtti__ConstraintMap_11);
    }
#line 832 "hlds_rtti.m"
    hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 832 "hlds_rtti.m"
    hlds__hlds_rtti__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 832 "hlds_rtti.m"
    hlds__hlds_rtti__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 832 "hlds_rtti.m"
    hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 833 "hlds_rtti.m"
    hlds__hlds_rtti__V_33_33 = hlds__hlds_rtti__TciMap_9;
#line 833 "hlds_rtti.m"
    hlds__hlds_rtti__V_34_34 = hlds__hlds_rtti__V_30_30;
#line 834 "hlds_rtti.m"
    {
#line 834 "hlds_rtti.m"
      MR_Word base;
#line 834 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 834 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13 = base;
#line 834 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_33_33));
#line 834 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_34_34));
#line 834 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_10));
#line 834 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_11));
#line 834 "hlds_rtti.m"
    }
#line 823 "hlds_rtti.m"
  }
#line 307 "hlds_rtti.m"
}

#line 719 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 719 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 719 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 719 "hlds_rtti.m"
{
#line 719 "hlds_rtti.m"
  {
#line 719 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 719 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19;

#line 719 "hlds_rtti.m"
    {
#line 719 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19);
    }
#line 719 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19));
#line 719 "hlds_rtti.m"
  }
#line 719 "hlds_rtti.m"
}

#line 717 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 717 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 717 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 717 "hlds_rtti.m"
{
#line 717 "hlds_rtti.m"
  {
#line 717 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19;

#line 717 "hlds_rtti.m"
    {
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19);
    }
#line 717 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19));
#line 717 "hlds_rtti.m"
  }
#line 717 "hlds_rtti.m"
}

#line 715 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 715 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 715 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 715 "hlds_rtti.m"
{
#line 715 "hlds_rtti.m"
  {
#line 715 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 715 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37;

#line 715 "hlds_rtti.m"
    {
#line 715 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37);
    }
#line 715 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37));
#line 715 "hlds_rtti.m"
  }
#line 715 "hlds_rtti.m"
}

#line 713 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 713 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 713 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 713 "hlds_rtti.m"
{
#line 713 "hlds_rtti.m"
  {
#line 713 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 713 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18;

#line 713 "hlds_rtti.m"
    {
#line 713 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18);
    }
#line 713 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18));
#line 713 "hlds_rtti.m"
  }
#line 713 "hlds_rtti.m"
}

#line 299 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(
#line 299 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_6,
#line 299 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_7,
#line 299 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_8,
#line 299 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18,
#line 299 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19)
#line 299 "hlds_rtti.m"
{
#line 703 "hlds_rtti.m"
  {
#line 703 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 705 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 705 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_30_30;
#line 705 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_31_31;

#line 705 "hlds_rtti.m"
    {
#line 705 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__Subst_8);
    }
#line 705 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 705 "hlds_rtti.m"
      {
#line 6530 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_30_30 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6532 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 706 "hlds_rtti.m"
        {
#line 706 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeCtorInfo_31_31, hlds__hlds_rtti__TSubst_7);
        }
#line 705 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 707 "hlds_rtti.m"
          {
#line 707 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TRenaming_6);
          }
#line 705 "hlds_rtti.m"
      }
#line 703 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 703 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18;
#line 703 "hlds_rtti.m"
    else
#line 712 "hlds_rtti.m"
      {
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_37_37;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_44_44;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_50_50;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0)));
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1)));
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2)));
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3)));
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap_14;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap_15;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap_16;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap_17;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_23_23;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26;
#line 712 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;
#line 713 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_TCIMap_14;
#line 715 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv3_TIMap_15;
#line 717 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv5_TypeMap_16;
#line 719 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv7_ConstraintMap_17;

#line 713 "hlds_rtti.m"
        {
#line 713 "hlds_rtti.m"
          hlds__hlds_rtti__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 713 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
#line 713 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
#line 713 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 713 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 713 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 713 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 713 "hlds_rtti.m"
        }
#line 6625 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6627 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_37_37 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 714 "hlds_rtti.m"
        {
#line 714 "hlds_rtti.m"
          hlds__hlds_rtti__V_21_21 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37);
        }
#line 713 "hlds_rtti.m"
        {
#line 713 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__TCIMap0_10, ((MR_Box) (hlds__hlds_rtti__V_21_21)), &hlds__hlds_rtti__conv1_TCIMap_14);
        }
#line 713 "hlds_rtti.m"
        hlds__hlds_rtti__TCIMap_14 = ((MR_Word) hlds__hlds_rtti__conv1_TCIMap_14);
#line 715 "hlds_rtti.m"
        {
#line 715 "hlds_rtti.m"
          hlds__hlds_rtti__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 715 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
#line 715 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
#line 715 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 715 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 715 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 715 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 715 "hlds_rtti.m"
        }
#line 6659 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6661 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 716 "hlds_rtti.m"
        {
#line 716 "hlds_rtti.m"
          hlds__hlds_rtti__V_23_23 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44);
        }
#line 715 "hlds_rtti.m"
        {
#line 715 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__V_22_22, hlds__hlds_rtti__TIMap0_11, ((MR_Box) (hlds__hlds_rtti__V_23_23)), &hlds__hlds_rtti__conv3_TIMap_15);
        }
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__TIMap_15 = ((MR_Word) hlds__hlds_rtti__conv3_TIMap_15);
#line 717 "hlds_rtti.m"
        {
#line 717 "hlds_rtti.m"
          hlds__hlds_rtti__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 717 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
#line 717 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
#line 717 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 717 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 717 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 717 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 717 "hlds_rtti.m"
        }
#line 6693 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 718 "hlds_rtti.m"
        {
#line 718 "hlds_rtti.m"
          hlds__hlds_rtti__V_25_25 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50);
        }
#line 717 "hlds_rtti.m"
        {
#line 717 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50, (MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__V_24_24, hlds__hlds_rtti__TypeMap0_12, ((MR_Box) (hlds__hlds_rtti__V_25_25)), &hlds__hlds_rtti__conv5_TypeMap_16);
        }
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__TypeMap_16 = ((MR_Word) hlds__hlds_rtti__conv5_TypeMap_16);
#line 719 "hlds_rtti.m"
        {
#line 719 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 719 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
#line 719 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
#line 719 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 719 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 719 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 719 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 719 "hlds_rtti.m"
        }
#line 720 "hlds_rtti.m"
        {
#line 720 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36);
        }
#line 719 "hlds_rtti.m"
        {
#line 719 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__V_26_26, hlds__hlds_rtti__ConstraintMap0_13, ((MR_Box) (hlds__hlds_rtti__V_27_27)), &hlds__hlds_rtti__conv7_ConstraintMap_17);
        }
#line 719 "hlds_rtti.m"
        hlds__hlds_rtti__ConstraintMap_17 = ((MR_Word) hlds__hlds_rtti__conv7_ConstraintMap_17);
#line 721 "hlds_rtti.m"
        {
#line 721 "hlds_rtti.m"
          MR_Word base;
#line 721 "hlds_rtti.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = base;
#line 721 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_14));
#line 721 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_15));
#line 721 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_16));
#line 721 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_17));
#line 721 "hlds_rtti.m"
        }
#line 712 "hlds_rtti.m"
      }
#line 703 "hlds_rtti.m"
  }
#line 299 "hlds_rtti.m"
}

#line 289 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(
#line 289 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 289 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_4)
#line 289 "hlds_rtti.m"
{
#line 697 "hlds_rtti.m"
  {
#line 697 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 697 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 697 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIVars_5;
#line 697 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIVars_6;
#line 697 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 697 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8;
#line 698 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 698 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 698 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 699 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12;
#line 699 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13;
#line 699 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;

#line 698 "hlds_rtti.m"
    {
#line 698 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_7_7, &hlds__hlds_rtti__TIVars_5);
    }
#line 699 "hlds_rtti.m"
    hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 699 "hlds_rtti.m"
    hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 699 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 699 "hlds_rtti.m"
    hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 699 "hlds_rtti.m"
    {
#line 699 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_8_8, &hlds__hlds_rtti__TCIVars_6);
    }
#line 700 "hlds_rtti.m"
    {
#line 700 "hlds_rtti.m"
      mercury__list__append_3_p_1(hlds__hlds_rtti__TypeInfo_15_15, hlds__hlds_rtti__TIVars_5, hlds__hlds_rtti__TCIVars_6, hlds__hlds_rtti__Vars_4);
    }
#line 697 "hlds_rtti.m"
  }
#line 289 "hlds_rtti.m"
}

#line 283 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(
#line 283 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 283 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraints_4)
#line 283 "hlds_rtti.m"
{
#line 694 "hlds_rtti.m"
  {
#line 694 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 695 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 695 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 695 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 695 "hlds_rtti.m"
    {
#line 695 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__Constraints_4);
    }
#line 694 "hlds_rtti.m"
  }
#line 283 "hlds_rtti.m"
}

#line 683 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 683 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 683 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 683 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 683 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 683 "hlds_rtti.m"
{
#line 683 "hlds_rtti.m"
  {
#line 683 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 683 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9;

#line 683 "hlds_rtti.m"
    {
#line 683 "hlds_rtti.m"
      hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9);
    }
#line 683 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9));
#line 683 "hlds_rtti.m"
  }
#line 683 "hlds_rtti.m"
}

#line 682 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 682 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 682 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 682 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 682 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 682 "hlds_rtti.m"
{
#line 682 "hlds_rtti.m"
  {
#line 682 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 682 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_21;

#line 682 "hlds_rtti.m"
    {
#line 682 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv0_HeadVar__3_21);
    }
#line 682 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_21));
#line 682 "hlds_rtti.m"
  }
#line 682 "hlds_rtti.m"
}

#line 278 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0(
#line 278 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 278 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Types_4)
#line 278 "hlds_rtti.m"
{
#line 678 "hlds_rtti.m"
  {
#line 678 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_24_24;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet0_7;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet1_8;
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet_9;
#line 679 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 679 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 682 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TypeSet1_8;
#line 683 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv3_TypeSet_9;

#line 681 "hlds_rtti.m"
    {
#line 681 "hlds_rtti.m"
      hlds__hlds_rtti__TypeSet0_7 = mercury__set_tree234__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18);
    }
#line 6965 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[2];
#line 6967 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_24_24 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 682 "hlds_rtti.m"
    {
#line 682 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[5], hlds__hlds_rtti__TypeMap_5, ((MR_Box) (hlds__hlds_rtti__TypeSet0_7)), &hlds__hlds_rtti__conv1_TypeSet1_8);
    }
#line 682 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet1_8 = ((MR_Word) hlds__hlds_rtti__conv1_TypeSet1_8);
#line 683 "hlds_rtti.m"
    {
#line 683 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[6], hlds__hlds_rtti__ConstraintMap_6, ((MR_Box) (hlds__hlds_rtti__TypeSet1_8)), &hlds__hlds_rtti__conv3_TypeSet_9);
    }
#line 683 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet_9 = ((MR_Word) hlds__hlds_rtti__conv3_TypeSet_9);
#line 685 "hlds_rtti.m"
    {
#line 685 "hlds_rtti.m"
      *hlds__hlds_rtti__Types_4 = mercury__set_tree234__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeSet_9);
    }
#line 678 "hlds_rtti.m"
  }
#line 278 "hlds_rtti.m"
}

#line 272 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(
#line 272 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 272 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TVars_4)
#line 272 "hlds_rtti.m"
{
#line 675 "hlds_rtti.m"
  {
#line 675 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 676 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 676 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 676 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 676 "hlds_rtti.m"
    {
#line 676 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__TVars_4);
    }
#line 675 "hlds_rtti.m"
  }
#line 272 "hlds_rtti.m"
}

#line 266 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(
#line 266 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 266 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 266 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 266 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 266 "hlds_rtti.m"
{
#line 663 "hlds_rtti.m"
  {
#line 663 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 663 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 664 "hlds_rtti.m"
    {
#line 664 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 668 "hlds_rtti.m"
#line 668 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 668 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 668 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 672 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 668 "hlds_rtti.m"
        break;
#line 668 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 666 "hlds_rtti.m"
        {
#line 666 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 666 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 666 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 647 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 647 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 647 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 649 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 649 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 649 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 649 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 648 "hlds_rtti.m"
          {
#line 648 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 649 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 649 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 649 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 649 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 649 "hlds_rtti.m"
          {
#line 649 "hlds_rtti.m"
            MR_Word base;
#line 649 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 649 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 649 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 649 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 649 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 649 "hlds_rtti.m"
          }
#line 666 "hlds_rtti.m"
        }
#line 668 "hlds_rtti.m"
        break;
#line 668 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 669 "hlds_rtti.m"
        {
#line 669 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 669 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 669 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 632 "hlds_rtti.m"
          {
#line 632 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
          {
#line 633 "hlds_rtti.m"
            MR_Word base;
#line 633 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 633 "hlds_rtti.m"
          }
#line 669 "hlds_rtti.m"
        }
#line 668 "hlds_rtti.m"
        break;
#line 668 "hlds_rtti.m"
    }
#line 663 "hlds_rtti.m"
  }
#line 266 "hlds_rtti.m"
}

#line 258 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(
#line 258 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 258 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 258 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 258 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 258 "hlds_rtti.m"
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
#line 642 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 642 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 642 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 643 "hlds_rtti.m"
          {
#line 643 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 644 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 644 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 644 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 644 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 644 "hlds_rtti.m"
          {
#line 644 "hlds_rtti.m"
            MR_Word base;
#line 644 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 644 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 644 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 644 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 644 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 644 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 644 "hlds_rtti.m"
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
#line 626 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 626 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 626 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 627 "hlds_rtti.m"
          {
#line 627 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 628 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 628 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 628 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 628 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 628 "hlds_rtti.m"
          {
#line 628 "hlds_rtti.m"
            MR_Word base;
#line 628 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 628 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 628 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 628 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 628 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 628 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 628 "hlds_rtti.m"
          }
#line 657 "hlds_rtti.m"
        }
#line 656 "hlds_rtti.m"
        break;
#line 656 "hlds_rtti.m"
    }
#line 651 "hlds_rtti.m"
  }
#line 258 "hlds_rtti.m"
}

#line 251 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(
#line 251 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 251 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 251 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 251 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 251 "hlds_rtti.m"
{
#line 646 "hlds_rtti.m"
  {
#line 646 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 646 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 646 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 647 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 647 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 647 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 649 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 649 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 649 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 649 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 648 "hlds_rtti.m"
    {
#line 648 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 649 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 649 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 649 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 649 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 649 "hlds_rtti.m"
    {
#line 649 "hlds_rtti.m"
      MR_Word base;
#line 649 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 649 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 649 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 649 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 649 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 649 "hlds_rtti.m"
    }
#line 646 "hlds_rtti.m"
  }
#line 251 "hlds_rtti.m"
}

#line 245 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(
#line 245 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 245 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 245 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 245 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 245 "hlds_rtti.m"
{
#line 641 "hlds_rtti.m"
  {
#line 641 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 641 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 641 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 642 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 642 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 642 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 643 "hlds_rtti.m"
    {
#line 643 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 644 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 644 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 644 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 644 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 644 "hlds_rtti.m"
    {
#line 644 "hlds_rtti.m"
      MR_Word base;
#line 644 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 644 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 644 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 644 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 644 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 644 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 644 "hlds_rtti.m"
    }
#line 641 "hlds_rtti.m"
  }
#line 245 "hlds_rtti.m"
}

#line 239 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(
#line 239 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_4,
#line 239 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9,
#line 239 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10)
#line 239 "hlds_rtti.m"
{
#line 635 "hlds_rtti.m"
  {
#line 635 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_6;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_7;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_8;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 636 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Constraint_6;
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 637 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_22_22;
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 636 "hlds_rtti.m"
    {
#line 636 "hlds_rtti.m"
      mercury__map__lookup_3_p_0(hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__V_11_11, ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), &hlds__hlds_rtti__conv0_Constraint_6);
    }
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__Constraint_6 = ((MR_Word) hlds__hlds_rtti__conv0_Constraint_6);
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 637 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 638 "hlds_rtti.m"
    {
#line 638 "hlds_rtti.m"
      mercury__map__set_4_p_0(hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__TypeInfo_23_23, ((MR_Box) (hlds__hlds_rtti__Constraint_6)), ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), hlds__hlds_rtti__Map0_7, &hlds__hlds_rtti__Map_8);
    }
#line 639 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 639 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 639 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 639 "hlds_rtti.m"
    hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 639 "hlds_rtti.m"
    {
#line 639 "hlds_rtti.m"
      MR_Word base;
#line 639 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 639 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10 = base;
#line 639 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Map_8));
#line 639 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 639 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_21_21));
#line 639 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_22_22));
#line 639 "hlds_rtti.m"
    }
#line 635 "hlds_rtti.m"
  }
#line 239 "hlds_rtti.m"
}

#line 233 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_typeclass_info_var_4_p_0(
#line 233 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 233 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 233 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 233 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 233 "hlds_rtti.m"
{
#line 630 "hlds_rtti.m"
  {
#line 630 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 632 "hlds_rtti.m"
    {
#line 632 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
    {
#line 633 "hlds_rtti.m"
      MR_Word base;
#line 633 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 633 "hlds_rtti.m"
    }
#line 630 "hlds_rtti.m"
  }
#line 233 "hlds_rtti.m"
}

#line 227 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(
#line 227 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 227 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 227 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 227 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 227 "hlds_rtti.m"
{
#line 625 "hlds_rtti.m"
  {
#line 625 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 627 "hlds_rtti.m"
    {
#line 627 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 628 "hlds_rtti.m"
    {
#line 628 "hlds_rtti.m"
      MR_Word base;
#line 628 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 628 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 628 "hlds_rtti.m"
    }
#line 625 "hlds_rtti.m"
  }
#line 227 "hlds_rtti.m"
}

#line 221 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(
#line 221 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 221 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 221 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 221 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 221 "hlds_rtti.m"
{
#line 607 "hlds_rtti.m"
  {
#line 607 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 608 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 608 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 608 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 610 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 610 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 610 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 609 "hlds_rtti.m"
    {
#line 609 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 610 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 610 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 610 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 610 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 610 "hlds_rtti.m"
    {
#line 610 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 610 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 610 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 610 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 610 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 610 "hlds_rtti.m"
    }
#line 616 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 616 "hlds_rtti.m"
      {
#line 616 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 616 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 617 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 618 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 618 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 618 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 617 "hlds_rtti.m"
        {
#line 617 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 617 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 618 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 618 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 618 "hlds_rtti.m"
          {
#line 618 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 618 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7839 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 618 "hlds_rtti.m"
            {
#line 618 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 618 "hlds_rtti.m"
          }
#line 618 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 619 "hlds_rtti.m"
          {
#line 619 "hlds_rtti.m"
          }
#line 618 "hlds_rtti.m"
        else
#line 621 "hlds_rtti.m"
          {
#line 621 "hlds_rtti.m"
            {
#line 621 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 621 "hlds_rtti.m"
              return;
            }
#line 621 "hlds_rtti.m"
          }
#line 616 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 616 "hlds_rtti.m"
      }
#line 616 "hlds_rtti.m"
    else
#line 623 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 607 "hlds_rtti.m"
  }
#line 221 "hlds_rtti.m"
}

#line 216 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(
#line 216 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 216 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 216 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 216 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 216 "hlds_rtti.m"
{
#line 601 "hlds_rtti.m"
  {
#line 601 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 602 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 602 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 602 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 603 "hlds_rtti.m"
    {
#line 603 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 604 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 604 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 604 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 604 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 604 "hlds_rtti.m"
    {
#line 604 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 604 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 604 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 604 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 604 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 604 "hlds_rtti.m"
    }
#line 616 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 616 "hlds_rtti.m"
      {
#line 616 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 616 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 617 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 618 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 618 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 618 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 617 "hlds_rtti.m"
        {
#line 617 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 617 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 618 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 618 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 618 "hlds_rtti.m"
          {
#line 618 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 618 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7979 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 618 "hlds_rtti.m"
            {
#line 618 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 618 "hlds_rtti.m"
          }
#line 618 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 619 "hlds_rtti.m"
          {
#line 619 "hlds_rtti.m"
          }
#line 618 "hlds_rtti.m"
        else
#line 621 "hlds_rtti.m"
          {
#line 621 "hlds_rtti.m"
            {
#line 621 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 621 "hlds_rtti.m"
              return;
            }
#line 621 "hlds_rtti.m"
          }
#line 616 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 616 "hlds_rtti.m"
      }
#line 616 "hlds_rtti.m"
    else
#line 623 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 601 "hlds_rtti.m"
  }
#line 216 "hlds_rtti.m"
}

#line 210 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(
#line 210 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 210 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 210 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarInfo_6)
#line 210 "hlds_rtti.m"
{
#line 589 "hlds_rtti.m"
  {
#line 589 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_7;
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 590 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Type_7;

#line 590 "hlds_rtti.m"
    {
#line 590 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_9_9, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv0_Type_7);
    }
#line 590 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 590 "hlds_rtti.m"
      {
#line 590 "hlds_rtti.m"
        hlds__hlds_rtti__Type_7 = ((MR_Word) hlds__hlds_rtti__conv0_Type_7);
#line 590 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 590 "hlds_rtti.m"
      }
#line 589 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 592 "hlds_rtti.m"
      {
#line 592 "hlds_rtti.m"
        MR_Word base;
#line 592 "hlds_rtti.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "hlds_rtti.m"
        *hlds__hlds_rtti__VarInfo_6 = base;
#line 592 "hlds_rtti.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Type_7));
#line 592 "hlds_rtti.m"
      }
#line 589 "hlds_rtti.m"
    else
#line 593 "hlds_rtti.m"
      {
#line 593 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Constraint_8;
#line 594 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 594 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 594 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 594 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 594 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Constraint_8;

#line 594 "hlds_rtti.m"
        {
#line 594 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_10_10, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv1_Constraint_8);
        }
#line 594 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 594 "hlds_rtti.m"
          {
#line 594 "hlds_rtti.m"
            hlds__hlds_rtti__Constraint_8 = ((MR_Word) hlds__hlds_rtti__conv1_Constraint_8);
#line 594 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 594 "hlds_rtti.m"
          }
#line 593 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 596 "hlds_rtti.m"
          {
#line 596 "hlds_rtti.m"
            MR_Word base;
#line 596 "hlds_rtti.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "hlds_rtti.m"
            *hlds__hlds_rtti__VarInfo_6 = base;
#line 596 "hlds_rtti.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__hlds_rtti__Constraint_8));
#line 596 "hlds_rtti.m"
          }
#line 593 "hlds_rtti.m"
        else
#line 598 "hlds_rtti.m"
          *hlds__hlds_rtti__VarInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "hlds_rtti.m"
      }
#line 589 "hlds_rtti.m"
  }
#line 210 "hlds_rtti.m"
}

#line 205 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(
#line 205 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 205 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 205 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 205 "hlds_rtti.m"
{
#line 585 "hlds_rtti.m"
  {
#line 585 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 585 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 586 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 586 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 586 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 586 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 586 "hlds_rtti.m"
    {
#line 586 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 586 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 586 "hlds_rtti.m"
      {
#line 586 "hlds_rtti.m"
        *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 586 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 586 "hlds_rtti.m"
      }
#line 585 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 585 "hlds_rtti.m"
  }
#line 205 "hlds_rtti.m"
}

#line 199 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(
#line 199 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 199 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 199 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 199 "hlds_rtti.m"
{
#line 582 "hlds_rtti.m"
  {
#line 582 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 583 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 583 "hlds_rtti.m"
    {
#line 583 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 583 "hlds_rtti.m"
    *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 582 "hlds_rtti.m"
  }
#line 199 "hlds_rtti.m"
}

#line 193 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(
#line 193 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 193 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 193 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 193 "hlds_rtti.m"
{
#line 579 "hlds_rtti.m"
  {
#line 579 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 579 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 580 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 580 "hlds_rtti.m"
    {
#line 580 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 580 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 580 "hlds_rtti.m"
      {
#line 580 "hlds_rtti.m"
        *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 580 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 580 "hlds_rtti.m"
      }
#line 579 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 579 "hlds_rtti.m"
  }
#line 193 "hlds_rtti.m"
}

#line 188 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(
#line 188 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 188 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 188 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 188 "hlds_rtti.m"
{
#line 576 "hlds_rtti.m"
  {
#line 576 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 576 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 577 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 577 "hlds_rtti.m"
    {
#line 577 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 577 "hlds_rtti.m"
    *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 576 "hlds_rtti.m"
  }
#line 188 "hlds_rtti.m"
}

#line 184 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(
#line 184 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_2)
#line 184 "hlds_rtti.m"
{
#line 573 "hlds_rtti.m"
  {
#line 573 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 573 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 1)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 0)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 2)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 3)));

#line 574 "hlds_rtti.m"
    {
#line 574 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_3_3);
    }
#line 573 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 573 "hlds_rtti.m"
  }
#line 184 "hlds_rtti.m"
}

#line 178 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(
#line 178 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__VarUses_4,
#line 178 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20,
#line 178 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21)
#line 178 "hlds_rtti.m"
{
#line 489 "hlds_rtti.m"
  {
#line 489 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_26_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_28_28;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_29_29;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_30_30;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0)));
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1)));
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2)));
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3)));
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIList0_10;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTIList_11;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_12;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeList0_13;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTypeList_14;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_15;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintList0_16;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevConstraintList_17;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_18;
#line 489 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_19;

#line 497 "hlds_rtti.m"
    {
#line 497 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__TIMap0_7, &hlds__hlds_rtti__TIList0_10);
    }
#line 498 "hlds_rtti.m"
    {
#line 498 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_varmap_4_p_0(hlds__hlds_rtti__TIList0_10, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTIList_11);
    }
#line 499 "hlds_rtti.m"
    {
#line 499 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__RevTIList_11, &hlds__hlds_rtti__TIMap_12);
    }
#line 8407 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_28_28 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 8409 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 501 "hlds_rtti.m"
    {
#line 501 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__TypeMap0_8, &hlds__hlds_rtti__TypeList0_13);
    }
#line 502 "hlds_rtti.m"
    {
#line 502 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_map_4_p_0(hlds__hlds_rtti__TypeList0_13, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTypeList_14);
    }
#line 503 "hlds_rtti.m"
    {
#line 503 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__RevTypeList_14, &hlds__hlds_rtti__TypeMap_15);
    }
#line 8426 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 505 "hlds_rtti.m"
    {
#line 505 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__ConstraintMap0_9, &hlds__hlds_rtti__ConstraintList0_16);
    }
#line 506 "hlds_rtti.m"
    {
#line 506 "hlds_rtti.m"
      hlds__hlds_rtti__filter_constraint_map_6_p_0(hlds__hlds_rtti__ConstraintList0_16, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevConstraintList_17, hlds__hlds_rtti__TCIMap0_6, &hlds__hlds_rtti__TCIMap_18);
    }
#line 508 "hlds_rtti.m"
    {
#line 508 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__RevConstraintList_17, &hlds__hlds_rtti__ConstraintMap_19);
    }
#line 510 "hlds_rtti.m"
    {
#line 510 "hlds_rtti.m"
      MR_Word base;
#line 510 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 510 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21 = base;
#line 510 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_18));
#line 510 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_12));
#line 510 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_15));
#line 510 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_19));
#line 510 "hlds_rtti.m"
    }
#line 489 "hlds_rtti.m"
  }
#line 178 "hlds_rtti.m"
}

#line 172 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_init_1_p_0(
#line 172 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1)
#line 172 "hlds_rtti.m"
{
#line 483 "hlds_rtti.m"
  {
#line 483 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 483 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_6_6 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 483 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_7_7 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 483 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_2;
#line 483 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_3;
#line 483 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_4;
#line 483 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_5;

#line 484 "hlds_rtti.m"
    {
#line 484 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeCtorInfo_6_6, hlds__hlds_rtti__TypeInfo_7_7, &hlds__hlds_rtti__TCIMap_2);
    }
#line 485 "hlds_rtti.m"
    {
#line 485 "hlds_rtti.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, &hlds__hlds_rtti__TIMap_3);
    }
#line 486 "hlds_rtti.m"
    {
#line 486 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &hlds__hlds_rtti__TypeMap_4);
    }
#line 487 "hlds_rtti.m"
    {
#line 487 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, hlds__hlds_rtti__TypeCtorInfo_6_6, &hlds__hlds_rtti__ConstraintMap_5);
    }
#line 483 "hlds_rtti.m"
    {
#line 483 "hlds_rtti.m"
      MR_Word base;
#line 483 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__1_1 = base;
#line 483 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_2));
#line 483 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_3));
#line 483 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_4));
#line 483 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_5));
#line 483 "hlds_rtti.m"
    }
#line 483 "hlds_rtti.m"
  }
#line 172 "hlds_rtti.m"
}

#line 148 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_set_var_3_p_0(
#line 148 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_1,
#line 148 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 148 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_3)
#line 148 "hlds_rtti.m"
{
#line 405 "hlds_rtti.m"
  {
#line 405 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 405 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 405 "hlds_rtti.m"
      {
#line 405 "hlds_rtti.m"
        MR_Word base;
#line 405 "hlds_rtti.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 405 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 405 "hlds_rtti.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 405 "hlds_rtti.m"
      }
#line 405 "hlds_rtti.m"
    else
#line 406 "hlds_rtti.m"
      {
#line 406 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 406 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 406 "hlds_rtti.m"
        {
#line 406 "hlds_rtti.m"
          MR_Word base;
#line 406 "hlds_rtti.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 406 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 406 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_rtti__Num_8));
#line 406 "hlds_rtti.m"
        }
#line 406 "hlds_rtti.m"
      }
#line 405 "hlds_rtti.m"
  }
#line 148 "hlds_rtti.m"
}

#line 146 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_var_2_p_0(
#line 146 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 146 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Var_2)
#line 146 "hlds_rtti.m"
{
#line 402 "hlds_rtti.m"
  {
#line 402 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 402 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 402 "hlds_rtti.m"
      *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 402 "hlds_rtti.m"
    else
#line 403 "hlds_rtti.m"
      {
#line 403 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_5_5;

#line 403 "hlds_rtti.m"
        *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "hlds_rtti.m"
        hlds__hlds_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "hlds_rtti.m"
      }
#line 402 "hlds_rtti.m"
  }
#line 146 "hlds_rtti.m"
}

#line 96 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__proc_label_pred_proc_id_3_p_0(
#line 96 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiProcLabel_4,
#line 96 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__PredId_5,
#line 96 "hlds_rtti.m"
  MR_Integer * hlds__hlds_rtti__ProcId_6)
#line 96 "hlds_rtti.m"
{
#line 397 "hlds_rtti.m"
  {
#line 397 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 0)));
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 1)));
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 2)));
#line 397 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 3)));
#line 397 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 4)));
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 5)));
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 397 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;

#line 397 "hlds_rtti.m"
    *hlds__hlds_rtti__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 6)));
#line 397 "hlds_rtti.m"
    *hlds__hlds_rtti__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 7)));
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 8)));
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 9)));
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 11)));
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 397 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 397 "hlds_rtti.m"
  }
#line 96 "hlds_rtti.m"
}

#line 374 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 374 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 374 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1)
#line 374 "hlds_rtti.m"
{
#line 374 "hlds_rtti.m"
  {
#line 374 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__wrapper_arg_2;
#line 374 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 374 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_LambdaHeadVar__2_32;

#line 374 "hlds_rtti.m"
    {
#line 374 "hlds_rtti.m"
      hlds__hlds_rtti__conv0_LambdaHeadVar__2_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1));
    }
#line 374 "hlds_rtti.m"
    hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_LambdaHeadVar__2_32));
#line 374 "hlds_rtti.m"
    return hlds__hlds_rtti__wrapper_arg_2;
#line 374 "hlds_rtti.m"
  }
#line 374 "hlds_rtti.m"
}

#line 92 "hlds_rtti.m"
MR_Word MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0(
#line 92 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ModuleInfo_5,
#line 92 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__PredId_6,
#line 92 "hlds_rtti.m"
  MR_Integer hlds__hlds_rtti__ProcId_7)
#line 92 "hlds_rtti.m"
{
#line 353 "hlds_rtti.m"
  {
#line 353 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcLabel_8;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ThisModule_9;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredInfo_10;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcInfo_11;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredOrFunc_12;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredModule_13;
#line 353 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__PredName_14;
#line 353 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__Arity_15;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_16;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcVarSet_17;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVars_18;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcModes_19;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcDetism_20;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcArgModes_21;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsImported_22;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsPseudoImp_23;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsExported_24;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Origin_25;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVarsWithNames_26;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsImported_29;
#line 353 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;

#line 354 "hlds_rtti.m"
    {
#line 354 "hlds_rtti.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_rtti__ModuleInfo_5, &hlds__hlds_rtti__ThisModule_9);
    }
#line 355 "hlds_rtti.m"
    {
#line 355 "hlds_rtti.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredId_6, hlds__hlds_rtti__ProcId_7, &hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ProcInfo_11);
    }
#line 356 "hlds_rtti.m"
    {
#line 356 "hlds_rtti.m"
      hlds__hlds_rtti__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 357 "hlds_rtti.m"
    {
#line 357 "hlds_rtti.m"
      hlds__hlds_rtti__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 358 "hlds_rtti.m"
    {
#line 358 "hlds_rtti.m"
      hlds__hlds_rtti__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 359 "hlds_rtti.m"
    {
#line 359 "hlds_rtti.m"
      hlds__hlds_rtti__Arity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 360 "hlds_rtti.m"
    {
#line 360 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ArgTypes_16);
    }
#line 361 "hlds_rtti.m"
    {
#line 361 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcVarSet_17);
    }
#line 362 "hlds_rtti.m"
    {
#line 362 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 363 "hlds_rtti.m"
    {
#line 363 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcModes_19);
    }
#line 364 "hlds_rtti.m"
    {
#line 364 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcDetism_20);
    }
#line 365 "hlds_rtti.m"
    {
#line 365 "hlds_rtti.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__ProcModes_19, hlds__hlds_rtti__ArgTypes_16, &hlds__hlds_rtti__ProcArgModes_21);
    }
#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 366 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 1;
#line 366 "hlds_rtti.m"
    else
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 0;
#line 369 "hlds_rtti.m"
    {
#line 369 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 368 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 369 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 1;
#line 368 "hlds_rtti.m"
    else
#line 369 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 0;
#line 371 "hlds_rtti.m"
    {
#line 371 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredInfo_10, hlds__hlds_rtti__ProcId_7);
    }
#line 370 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 372 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 1;
#line 370 "hlds_rtti.m"
    else
#line 372 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 0;
#line 373 "hlds_rtti.m"
    {
#line 373 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__Origin_25);
    }
#line 374 "hlds_rtti.m"
    {
#line 374 "hlds_rtti.m"
      hlds__hlds_rtti__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 374 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
#line 374 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
#line 374 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 374 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 3) = ((MR_Box) (hlds__hlds_rtti__ProcVarSet_17));
#line 374 "hlds_rtti.m"
    }
#line 374 "hlds_rtti.m"
    {
#line 374 "hlds_rtti.m"
      hlds__hlds_rtti__ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &hlds__hlds_rtti_scalar_common_2[0], hlds__hlds_rtti__V_30_30, hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 380 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsImported_22 == (MR_Integer) 1);
#line 381 "hlds_rtti.m"
    if (!(hlds__hlds_rtti__succeeded))
#line 382 "hlds_rtti.m"
      {
#line 382 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_37_37;

#line 382 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsPseudoImp_23 == (MR_Integer) 1);
#line 382 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 382 "hlds_rtti.m"
          {
#line 383 "hlds_rtti.m"
            {
#line 383 "hlds_rtti.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_rtti__V_37_37);
            }
#line 383 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__ProcId_7 == hlds__hlds_rtti__V_37_37);
#line 382 "hlds_rtti.m"
          }
#line 382 "hlds_rtti.m"
      }
#line 378 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 386 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 1;
#line 378 "hlds_rtti.m"
    else
#line 388 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 0;
#line 390 "hlds_rtti.m"
    {
#line 390 "hlds_rtti.m"
      hlds__hlds_rtti__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 0) = ((MR_Box) (hlds__hlds_rtti__PredOrFunc_12));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 1) = ((MR_Box) (hlds__hlds_rtti__ThisModule_9));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 2) = ((MR_Box) (hlds__hlds_rtti__PredModule_13));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 3) = ((MR_Box) (hlds__hlds_rtti__PredName_14));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 4) = ((MR_Box) (hlds__hlds_rtti__Arity_15));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 5) = ((MR_Box) (hlds__hlds_rtti__ArgTypes_16));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 6) = ((MR_Box) (hlds__hlds_rtti__PredId_6));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 7) = ((MR_Box) (hlds__hlds_rtti__ProcId_7));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 8) = ((MR_Box) (hlds__hlds_rtti__ProcHeadVarsWithNames_26));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 9) = ((MR_Box) (hlds__hlds_rtti__ProcArgModes_21));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 10) = ((MR_Box) ((hlds__hlds_rtti__ProcDetism_20 | ((((hlds__hlds_rtti__PredIsImported_22 << (MR_Integer) 3)) | ((hlds__hlds_rtti__PredIsPseudoImp_23 << (MR_Integer) 4)))))));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 11) = ((MR_Box) (hlds__hlds_rtti__Origin_25));
#line 390 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 12) = ((MR_Box) ((hlds__hlds_rtti__ProcIsExported_24 | ((hlds__hlds_rtti__ProcIsImported_29 << (MR_Integer) 1)))));
#line 390 "hlds_rtti.m"
    }
#line 353 "hlds_rtti.m"
    return hlds__hlds_rtti__ProcLabel_8;
#line 353 "hlds_rtti.m"
  }
#line 92 "hlds_rtti.m"
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
