/*
** Automatically generated from `abstract_mode_constraints.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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


/* :- module check_hlds.abstract_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__abstract_mode_constraints__init
ENDINIT
*/

#include "check_hlds.abstract_mode_constraints.mih"


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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 129 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 132 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 135 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 138 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 141 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2];

#line 144 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0;

#line 147 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1];

#line 150 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1];

#line 153 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1];

#line 156 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1];

#line 159 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1];

#line 162 "check_hlds.abstract_mode_constraints.c"
static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0;

#line 165 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

#line 168 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 171 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1];

#line 174 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0;

#line 177 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;

#line 180 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1];

#line 183 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1;

#line 186 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1];

#line 189 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2;

#line 192 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1];

#line 195 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1];

#line 198 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1];

#line 201 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0[3];

#line 204 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0[3];

#line 207 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0[3];

#line 210 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0;

#line 213 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[1];

#line 216 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1];

#line 219 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1];

#line 222 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 225 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;

#line 228 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;

#line 231 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 234 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3];

#line 237 "check_hlds.abstract_mode_constraints.c"
static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3];

#line 240 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0;

#line 243 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1];

#line 246 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1];

#line 249 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1];

#line 252 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1];

#line 255 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1;

#line 258 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2];

#line 261 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0;

#line 264 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1;

#line 267 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1];

#line 270 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1;

#line 273 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2];

#line 276 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2;

#line 279 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2];

#line 282 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3;

#line 285 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1];

#line 288 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4;

#line 291 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1];

#line 294 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5;

#line 297 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1];

#line 300 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1];

#line 303 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1];

#line 306 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3];

#line 309 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[4];

#line 312 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[6];

#line 315 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[6];

#line 318 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
#line 321 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 323 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 326 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
#line 329 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 331 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 333 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 336 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
#line 339 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 341 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 344 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
#line 347 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 349 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 351 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 354 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
#line 357 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 359 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 362 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
#line 365 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 367 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 369 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 372 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
#line 375 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 377 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 380 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
#line 383 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 385 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 387 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 390 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
#line 393 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 395 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 398 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
#line 401 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 403 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 405 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 408 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
#line 411 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 413 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 416 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
#line 419 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 421 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 423 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 426 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
#line 429 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 431 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 434 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
#line 437 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 439 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 441 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 444 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
#line 447 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 449 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 452 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
#line 455 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 457 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 459 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 462 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
#line 465 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 467 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 469 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 472 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
#line 475 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 477 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 479 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3,
#line 481 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4);

#line 484 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
#line 487 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 489 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 492 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
#line 495 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 497 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 499 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 672 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_binding_5_p_0(
#line 672 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_6,
#line 672 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Bindings_7,
#line 672 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Var_8);

#line 669 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0_1(
#line 669 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 669 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 669 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 669 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 663 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0(
#line 663 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_7,
#line 663 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Bindings_8,
#line 663 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__N_9,
#line 663 "abstract_mode_constraints.m"
  MR_Integer * check_hlds__abstract_mode_constraints__HeadVar__4_4);

#line 640 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(
#line 640 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 640 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2);

#line 591 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(
#line 591 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
#line 591 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_6);

#line 580 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(
#line 580 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 580 "abstract_mode_constraints.m"
  MR_String check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 580 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3);

#line 516 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(
#line 516 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 516 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 516 "abstract_mode_constraints.m"
  MR_String * check_hlds__abstract_mode_constraints__HeadVar__3_3);

#line 467 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_var_constraint_7_p_0(
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
#line 467 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12);

#line 427 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_2(
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 427 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 427 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_1(
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 427 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 439 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
#line 439 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12);

#line 430 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_ann_constraint_6_p_0(
#line 430 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_7,
#line 430 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_8,
#line 430 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__Indent_9,
#line 430 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__AnnConstraint_10);

#line 362 "abstract_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1(
#line 362 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 362 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1);

#line 357 "abstract_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1(
#line 357 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 357 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1);

#line 659 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0_1(
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 659 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3,
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4,
#line 659 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_5);

#line 417 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0_1(
#line 417 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 417 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 417 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 417 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_3[2][9];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_5[1][10];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_6[1][8];




static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "conj("))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ") end conj"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "disj("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ") end disj"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_4[0])),
    ((MR_Box) (check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_4[0])),
    ((MR_Box) (check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



#line 881 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 889 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 897 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 906 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 914 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0
};

#line 920 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0 = {
  (MR_String) "mc_ann_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0,
  NULL,
  NULL,
  NULL
};

#line 935 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0
};

#line 940 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0
  }
};

#line 949 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0
};

#line 954 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1] = {
  (MR_Integer) 0
};

#line 959 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_ann_constraint",
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0
  },
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0
};

#line 980 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1] = {
  (MR_Integer) 0
};

#line 985 "check_hlds.abstract_mode_constraints.c"
static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 = {
  (MR_String) "mc_annotation",
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_String) "context"
};

#line 992 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_annotation",
  {
    &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0
  },
  {
    &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0
};

#line 1013 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1022 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_bindings",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1043 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1051 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 1056 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0 = {
  (MR_String) "mc_atomic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0,
  NULL,
  NULL,
  NULL
};

#line 1071 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
  }
};

#line 1079 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
};

#line 1084 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1 = {
  (MR_String) "mc_disj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1,
  NULL,
  NULL,
  NULL
};

#line 1099 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
};

#line 1104 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2 = {
  (MR_String) "mc_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2,
  NULL,
  NULL,
  NULL
};

#line 1119 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0
};

#line 1124 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1
};

#line 1129 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2
};

#line 1134 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2
  }
};

#line 1153 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1
};

#line 1160 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1167 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_constraint",
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0
  },
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0
};

#line 1188 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  (MR_Integer) 0
};

#line 1194 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

#line 1199 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

#line 1204 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1] = {
  (MR_Integer) 0
};

#line 1209 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_type",
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0
  },
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0
};

#line 1230 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1251 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1259 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_varset",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1280 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0
  }
};

#line 1288 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0
  }
};

#line 1297 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1305 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1312 "check_hlds.abstract_mode_constraints.c"
static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3] = {
  (MR_String) "ppcc_procspec_constraints",
  (MR_String) "ppcc_allproc_constraints",
  (MR_String) "ppcc_mode_infer_callees"
};

#line 1319 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0 = {
  (MR_String) "pred_p_c_constraints",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0,
  NULL,
  NULL
};

#line 1334 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

#line 1339 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0
  }
};

#line 1348 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

#line 1353 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1358 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "pred_p_c_constraints",
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0
  },
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0
};

#line 1379 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1387 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1393 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0 = {
  (MR_String) "equiv_bool",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0,
  NULL,
  NULL,
  NULL
};

#line 1408 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1
  }
};

#line 1416 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1421 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1 = {
  (MR_String) "equivalent",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1,
  NULL,
  NULL,
  NULL
};

#line 1436 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1
};

#line 1442 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2 = {
  (MR_String) "implies",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2,
  NULL,
  NULL,
  NULL
};

#line 1457 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1463 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3 = {
  (MR_String) "equiv_disj",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3,
  NULL,
  NULL,
  NULL
};

#line 1478 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1483 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4 = {
  (MR_String) "at_most_one",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4,
  NULL,
  NULL,
  NULL
};

#line 1498 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1503 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5 = {
  (MR_String) "exactly_one",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5,
  NULL,
  NULL,
  NULL
};

#line 1518 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0
};

#line 1523 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1
};

#line 1528 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

#line 1533 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5
};

#line 1540 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3
  }
};

#line 1564 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[6] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

#line 1574 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 1584 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1
  },
  {
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1
};

#line 1605 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1626 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
#line 1629 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1631 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1633 "check_hlds.abstract_mode_constraints.c"
{
#line 1635 "check_hlds.abstract_mode_constraints.c"
  {
#line 1637 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1640 "check_hlds.abstract_mode_constraints.c"
    {
#line 1642 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1645 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1647 "check_hlds.abstract_mode_constraints.c"
  }
#line 1649 "check_hlds.abstract_mode_constraints.c"
}

#line 1652 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
#line 1655 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1657 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1659 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1661 "check_hlds.abstract_mode_constraints.c"
{
#line 1663 "check_hlds.abstract_mode_constraints.c"
  {
#line 1665 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1668 "check_hlds.abstract_mode_constraints.c"
    {
#line 1670 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1673 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1675 "check_hlds.abstract_mode_constraints.c"
  }
#line 1677 "check_hlds.abstract_mode_constraints.c"
}

#line 1680 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
#line 1683 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1685 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1687 "check_hlds.abstract_mode_constraints.c"
{
#line 1689 "check_hlds.abstract_mode_constraints.c"
  {
#line 1691 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1694 "check_hlds.abstract_mode_constraints.c"
    {
#line 1696 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1699 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1701 "check_hlds.abstract_mode_constraints.c"
  }
#line 1703 "check_hlds.abstract_mode_constraints.c"
}

#line 1706 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
#line 1709 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1711 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1713 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1715 "check_hlds.abstract_mode_constraints.c"
{
#line 1717 "check_hlds.abstract_mode_constraints.c"
  {
#line 1719 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1722 "check_hlds.abstract_mode_constraints.c"
    {
#line 1724 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1727 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1729 "check_hlds.abstract_mode_constraints.c"
  }
#line 1731 "check_hlds.abstract_mode_constraints.c"
}

#line 1734 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
#line 1737 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1739 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1741 "check_hlds.abstract_mode_constraints.c"
{
#line 1743 "check_hlds.abstract_mode_constraints.c"
  {
#line 1745 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1748 "check_hlds.abstract_mode_constraints.c"
    {
#line 1750 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1753 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1755 "check_hlds.abstract_mode_constraints.c"
  }
#line 1757 "check_hlds.abstract_mode_constraints.c"
}

#line 1760 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
#line 1763 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1765 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1767 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1769 "check_hlds.abstract_mode_constraints.c"
{
#line 1771 "check_hlds.abstract_mode_constraints.c"
  {
#line 1773 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1776 "check_hlds.abstract_mode_constraints.c"
    {
#line 1778 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1781 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1783 "check_hlds.abstract_mode_constraints.c"
  }
#line 1785 "check_hlds.abstract_mode_constraints.c"
}

#line 1788 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
#line 1791 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1793 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1795 "check_hlds.abstract_mode_constraints.c"
{
#line 1797 "check_hlds.abstract_mode_constraints.c"
  {
#line 1799 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1802 "check_hlds.abstract_mode_constraints.c"
    {
#line 1804 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1807 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1809 "check_hlds.abstract_mode_constraints.c"
  }
#line 1811 "check_hlds.abstract_mode_constraints.c"
}

#line 1814 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
#line 1817 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1819 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1821 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1823 "check_hlds.abstract_mode_constraints.c"
{
#line 1825 "check_hlds.abstract_mode_constraints.c"
  {
#line 1827 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1830 "check_hlds.abstract_mode_constraints.c"
    {
#line 1832 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1835 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1837 "check_hlds.abstract_mode_constraints.c"
  }
#line 1839 "check_hlds.abstract_mode_constraints.c"
}

#line 1842 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
#line 1845 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1847 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1849 "check_hlds.abstract_mode_constraints.c"
{
#line 1851 "check_hlds.abstract_mode_constraints.c"
  {
#line 1853 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1856 "check_hlds.abstract_mode_constraints.c"
    {
#line 1858 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_type_0_0();
    }
#line 1861 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1863 "check_hlds.abstract_mode_constraints.c"
  }
#line 1865 "check_hlds.abstract_mode_constraints.c"
}

#line 1868 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
#line 1871 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1873 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1875 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1877 "check_hlds.abstract_mode_constraints.c"
{
#line 1879 "check_hlds.abstract_mode_constraints.c"
  {
#line 1881 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1884 "check_hlds.abstract_mode_constraints.c"
    {
#line 1886 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1);
    }
#line 1889 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1891 "check_hlds.abstract_mode_constraints.c"
  }
#line 1893 "check_hlds.abstract_mode_constraints.c"
}

#line 1896 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
#line 1899 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1901 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1903 "check_hlds.abstract_mode_constraints.c"
{
#line 1905 "check_hlds.abstract_mode_constraints.c"
  {
#line 1907 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1910 "check_hlds.abstract_mode_constraints.c"
    {
#line 1912 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1915 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1917 "check_hlds.abstract_mode_constraints.c"
  }
#line 1919 "check_hlds.abstract_mode_constraints.c"
}

#line 1922 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
#line 1925 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1927 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1929 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1931 "check_hlds.abstract_mode_constraints.c"
{
#line 1933 "check_hlds.abstract_mode_constraints.c"
  {
#line 1935 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1938 "check_hlds.abstract_mode_constraints.c"
    {
#line 1940 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1943 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1945 "check_hlds.abstract_mode_constraints.c"
  }
#line 1947 "check_hlds.abstract_mode_constraints.c"
}

#line 1950 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
#line 1953 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1955 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1957 "check_hlds.abstract_mode_constraints.c"
{
#line 1959 "check_hlds.abstract_mode_constraints.c"
  {
#line 1961 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1964 "check_hlds.abstract_mode_constraints.c"
    {
#line 1966 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1969 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1971 "check_hlds.abstract_mode_constraints.c"
  }
#line 1973 "check_hlds.abstract_mode_constraints.c"
}

#line 1976 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
#line 1979 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1981 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1983 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1985 "check_hlds.abstract_mode_constraints.c"
{
#line 1987 "check_hlds.abstract_mode_constraints.c"
  {
#line 1989 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1992 "check_hlds.abstract_mode_constraints.c"
    {
#line 1994 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1997 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1999 "check_hlds.abstract_mode_constraints.c"
  }
#line 2001 "check_hlds.abstract_mode_constraints.c"
}

#line 2004 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
#line 2007 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2009 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 2011 "check_hlds.abstract_mode_constraints.c"
{
#line 2013 "check_hlds.abstract_mode_constraints.c"
  {
#line 2015 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 2018 "check_hlds.abstract_mode_constraints.c"
    {
#line 2020 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 2023 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 2025 "check_hlds.abstract_mode_constraints.c"
  }
#line 2027 "check_hlds.abstract_mode_constraints.c"
}

#line 2030 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
#line 2033 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2035 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2037 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 2039 "check_hlds.abstract_mode_constraints.c"
{
#line 2041 "check_hlds.abstract_mode_constraints.c"
  {
#line 2043 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 2046 "check_hlds.abstract_mode_constraints.c"
    {
#line 2048 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 2051 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 2053 "check_hlds.abstract_mode_constraints.c"
  }
#line 2055 "check_hlds.abstract_mode_constraints.c"
}

#line 2058 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
#line 2061 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2063 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2065 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 2067 "check_hlds.abstract_mode_constraints.c"
{
#line 2069 "check_hlds.abstract_mode_constraints.c"
  {
#line 2071 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 2074 "check_hlds.abstract_mode_constraints.c"
    {
#line 2076 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 2079 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 2081 "check_hlds.abstract_mode_constraints.c"
  }
#line 2083 "check_hlds.abstract_mode_constraints.c"
}

#line 2086 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
#line 2089 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2091 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2093 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3,
#line 2095 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4)
#line 2097 "check_hlds.abstract_mode_constraints.c"
{
#line 2099 "check_hlds.abstract_mode_constraints.c"
  {
#line 2101 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 2104 "check_hlds.abstract_mode_constraints.c"
    {
#line 2106 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), &check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_4));
    }
#line 2109 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 2111 "check_hlds.abstract_mode_constraints.c"
  }
#line 2113 "check_hlds.abstract_mode_constraints.c"
}

#line 2116 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
#line 2119 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2121 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 2123 "check_hlds.abstract_mode_constraints.c"
{
#line 2125 "check_hlds.abstract_mode_constraints.c"
  {
#line 2127 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 2130 "check_hlds.abstract_mode_constraints.c"
    {
#line 2132 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 2135 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 2137 "check_hlds.abstract_mode_constraints.c"
  }
#line 2139 "check_hlds.abstract_mode_constraints.c"
}

#line 2142 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
#line 2145 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2147 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2149 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 2151 "check_hlds.abstract_mode_constraints.c"
{
#line 2153 "check_hlds.abstract_mode_constraints.c"
  {
#line 2155 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 2158 "check_hlds.abstract_mode_constraints.c"
    {
#line 2160 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 2163 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 2165 "check_hlds.abstract_mode_constraints.c"
  }
#line 2167 "check_hlds.abstract_mode_constraints.c"
}

#line 302 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 302 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1)
#line 302 "abstract_mode_constraints.m"
{
#line 302 "abstract_mode_constraints.m"
  {
#line 302 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 302 "abstract_mode_constraints.m"
    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 302 "abstract_mode_constraints.m"
  }
#line 302 "abstract_mode_constraints.m"
}

#line 302 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 302 "abstract_mode_constraints.m"
{
#line 302 "abstract_mode_constraints.m"
  {
#line 302 "abstract_mode_constraints.m"
    return MR_TRUE;
#line 302 "abstract_mode_constraints.m"
  }
#line 302 "abstract_mode_constraints.m"
}

#line 285 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_120_111_114_95_95_91_49_93_95_48_6_p_0(
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__A_9,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__B_10,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 285 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 285 "abstract_mode_constraints.m"
{
#line 406 "abstract_mode_constraints.m"
  {
#line 406 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_16_16;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_17_17;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_18_18;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_27;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_28;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_29;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_35_35;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_36_36;
#line 406 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_37_37;

#line 407 "abstract_mode_constraints.m"
    {
#line 407 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_18_18, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__B_10));
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "abstract_mode_constraints.m"
    }
#line 407 "abstract_mode_constraints.m"
    {
#line 407 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_17_17, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__A_9));
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_17_17, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_18_18));
#line 407 "abstract_mode_constraints.m"
    }
#line 407 "abstract_mode_constraints.m"
    {
#line 407 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_17_17));
#line 407 "abstract_mode_constraints.m"
    }
#line 407 "abstract_mode_constraints.m"
    {
#line 407 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 407 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_16_16));
#line 407 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_28 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_28));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_29));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_27));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_36_36));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_35_35));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_37_37));
#line 327 "abstract_mode_constraints.m"
    }
#line 406 "abstract_mode_constraints.m"
  }
#line 285 "abstract_mode_constraints.m"
}

#line 277 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_99_116_108_121_95_111_110_101_95_95_91_49_93_95_48_5_p_0(
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 277 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 277 "abstract_mode_constraints.m"
{
#line 402 "abstract_mode_constraints.m"
  {
#line 402 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_12_12;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_22;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_23;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_24;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_30_30;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_31_31;
#line 402 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_32_32;

#line 403 "abstract_mode_constraints.m"
    {
#line 403 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 403 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_14_14, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVars_8));
#line 403 "abstract_mode_constraints.m"
    }
#line 403 "abstract_mode_constraints.m"
    {
#line 403 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 403 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_12_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 403 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_23 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_12_12));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_23));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_31_31));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_30_30));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_32_32));
#line 327 "abstract_mode_constraints.m"
    }
#line 402 "abstract_mode_constraints.m"
  }
#line 277 "abstract_mode_constraints.m"
}

#line 270 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_116_95_98_111_116_104_95_95_91_49_93_95_48_6_p_0(
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__A_9,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__B_10,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 270 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 270 "abstract_mode_constraints.m"
{
#line 398 "abstract_mode_constraints.m"
  {
#line 398 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_16_16;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_17_17;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_18_18;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_27;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_28;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_29;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_35_35;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_36_36;
#line 398 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_37_37;

#line 399 "abstract_mode_constraints.m"
    {
#line 399 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_18_18, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__B_10));
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "abstract_mode_constraints.m"
    }
#line 399 "abstract_mode_constraints.m"
    {
#line 399 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_17_17, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__A_9));
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_17_17, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_18_18));
#line 399 "abstract_mode_constraints.m"
    }
#line 399 "abstract_mode_constraints.m"
    {
#line 399 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_17_17));
#line 399 "abstract_mode_constraints.m"
    }
#line 399 "abstract_mode_constraints.m"
    {
#line 399 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_16_16));
#line 399 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_28 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_28));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_29));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_27));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_36_36));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_35_35));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_37_37));
#line 327 "abstract_mode_constraints.m"
    }
#line 398 "abstract_mode_constraints.m"
  }
#line 270 "abstract_mode_constraints.m"
}

#line 262 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_111_110_101_95_95_91_49_93_95_48_5_p_0(
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 262 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 262 "abstract_mode_constraints.m"
{
#line 394 "abstract_mode_constraints.m"
  {
#line 394 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_12_12;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_22;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_23;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_24;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_30_30;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_31_31;
#line 394 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_32_32;

#line 395 "abstract_mode_constraints.m"
    {
#line 395 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 395 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_14_14, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVars_8));
#line 395 "abstract_mode_constraints.m"
    }
#line 395 "abstract_mode_constraints.m"
    {
#line 395 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_12_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 395 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_23 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_12_12));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_23));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_31_31));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_30_30));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_32_32));
#line 327 "abstract_mode_constraints.m"
    }
#line 394 "abstract_mode_constraints.m"
  }
#line 262 "abstract_mode_constraints.m"
}

#line 254 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_100_105_115_106_95_95_91_49_93_95_48_6_p_0(
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__X_9,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Ys_10,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 254 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 254 "abstract_mode_constraints.m"
{
#line 390 "abstract_mode_constraints.m"
  {
#line 390 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_16_16;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_24;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_25;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_26;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_32_32;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_33_33;
#line 390 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_34_34;

#line 391 "abstract_mode_constraints.m"
    {
#line 391 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 391 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 391 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_9));
#line 391 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_16_16, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Ys_10));
#line 391 "abstract_mode_constraints.m"
    }
#line 391 "abstract_mode_constraints.m"
    {
#line 391 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_16_16));
#line 391 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_25 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_26, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_26, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_25));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_32_32, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_26));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_32_32, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_24));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_33_33));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_32_32));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_34_34));
#line 327 "abstract_mode_constraints.m"
    }
#line 390 "abstract_mode_constraints.m"
  }
#line 254 "abstract_mode_constraints.m"
}

#line 245 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_97_108_101_110_116_95_95_91_49_93_95_48_5_p_0(
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 245 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 245 "abstract_mode_constraints.m"
{
#line 386 "abstract_mode_constraints.m"
  {
#line 386 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_12_12;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_22;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_23;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_24;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_30_30;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_31_31;
#line 386 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_32_32;

#line 387 "abstract_mode_constraints.m"
    {
#line 387 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVars_8));
#line 387 "abstract_mode_constraints.m"
    }
#line 387 "abstract_mode_constraints.m"
    {
#line 387 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 387 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_12_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 387 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_23 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_12_12));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_23));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_31_31));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_30_30));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_32_32));
#line 327 "abstract_mode_constraints.m"
    }
#line 386 "abstract_mode_constraints.m"
  }
#line 245 "abstract_mode_constraints.m"
}

#line 238 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_110_111_95_95_91_49_93_95_48_5_p_0(
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVar_8,
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 238 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 238 "abstract_mode_constraints.m"
{
#line 382 "abstract_mode_constraints.m"
  {
#line 382 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_12_12;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_23;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_24;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_25;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_31_31;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_32_32;
#line 382 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_33_33;

#line 383 "abstract_mode_constraints.m"
    {
#line 383 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_14_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVar_8));
#line 383 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 383 "abstract_mode_constraints.m"
    }
#line 383 "abstract_mode_constraints.m"
    {
#line 383 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 383 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_12_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 383 "abstract_mode_constraints.m"
    }
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcsConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 324 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
#line 325 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_24 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_12_12));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_25, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_24));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_31_31, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_25));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_31_31, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_23));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_32_32));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_31_31));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_33_33));
#line 327 "abstract_mode_constraints.m"
    }
#line 382 "abstract_mode_constraints.m"
  }
#line 238 "abstract_mode_constraints.m"
}

#line 187 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_115_112_101_99_105_102_105_99_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_6_p_0(
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 187 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_9,
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_10,
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16,
#line 187 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17)
#line 187 "abstract_mode_constraints.m"
{
#line 331 "abstract_mode_constraints.m"
  {
#line 331 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 331 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ProcConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 0)));
#line 331 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_14 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
#line 331 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_15;
#line 331 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_27_27;
#line 342 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 1)));
#line 342 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 2)));
#line 345 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_31_31;
#line 345 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_32_32;
#line 345 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_30_30;

#line 344 "abstract_mode_constraints.m"
    {
#line 344 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_15, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Constraint_10));
#line 344 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_15, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_14));
#line 344 "abstract_mode_constraints.m"
    }
#line 345 "abstract_mode_constraints.m"
    {
#line 345 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_27_27 = mercury__multi_map__add_3_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, check_hlds__abstract_mode_constraints__ProcConstraints_13, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_9)), ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_15)));
    }
#line 345 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 0)));
#line 345 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 1)));
#line 345 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 2)));
#line 345 "abstract_mode_constraints.m"
    {
#line 345 "abstract_mode_constraints.m"
      MR_Word base;
#line 345 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 345 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17 = base;
#line 345 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_27_27));
#line 345 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_31_31));
#line 345 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_32_32));
#line 345 "abstract_mode_constraints.m"
    }
#line 331 "abstract_mode_constraints.m"
  }
#line 187 "abstract_mode_constraints.m"
}

#line 177 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_5_p_0(
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_8,
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14,
#line 177 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15)
#line 177 "abstract_mode_constraints.m"
{
#line 314 "abstract_mode_constraints.m"
  {
#line 314 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 314 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, (MR_Integer) 1)));
#line 314 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_12 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
#line 314 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_13;
#line 314 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_21_21;
#line 314 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, (MR_Integer) 0)));
#line 314 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, (MR_Integer) 2)));

#line 326 "abstract_mode_constraints.m"
    {
#line 326 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_13, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Constraint_8));
#line 326 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_13, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_12));
#line 326 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_21_21, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_13));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_11));
#line 327 "abstract_mode_constraints.m"
    }
#line 327 "abstract_mode_constraints.m"
    {
#line 327 "abstract_mode_constraints.m"
      MR_Word base;
#line 327 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15 = base;
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_22_22));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_21_21));
#line 327 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_23_23));
#line 327 "abstract_mode_constraints.m"
    }
#line 314 "abstract_mode_constraints.m"
  }
#line 177 "abstract_mode_constraints.m"
}

#line 79 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(
#line 79 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_for_T_117,
#line 79 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 79 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 79 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 79 "abstract_mode_constraints.m"
{
#line 79 "abstract_mode_constraints.m"
  {
#line 79 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 79 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_115 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 79 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_116 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 79 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_115 == check_hlds__abstract_mode_constraints__CastY_116);
#line 79 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 3141 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "abstract_mode_constraints.m"
    else
#line 79 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 79 "abstract_mode_constraints.m"
        {
#line 79 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "abstract_mode_constraints.m"
          if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 79 "abstract_mode_constraints.m"
            {
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_8_8;

#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, &check_hlds__abstract_mode_constraints__V_8_8, check_hlds__abstract_mode_constraints__V_145_145, check_hlds__abstract_mode_constraints__V_6_6);
              }
#line 3170 "check_hlds.abstract_mode_constraints.c"
              check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 79 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
#line 79 "abstract_mode_constraints.m"
              if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__V_8_8;
#line 79 "abstract_mode_constraints.m"
              else
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Integer check_hlds__abstract_mode_constraints__V_152_152 = (MR_Integer) check_hlds__abstract_mode_constraints__V_144_144;
#line 79 "abstract_mode_constraints.m"
                  MR_Integer check_hlds__abstract_mode_constraints__V_153_153 = (MR_Integer) check_hlds__abstract_mode_constraints__V_7_7;

#line 79 "abstract_mode_constraints.m"
                  {
#line 79 "abstract_mode_constraints.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_152_152, check_hlds__abstract_mode_constraints__V_153_153);
#line 79 "abstract_mode_constraints.m"
                    return;
                  }
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
          else
#line 79 "abstract_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3202 "check_hlds.abstract_mode_constraints.c"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
            else
#line 79 "abstract_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3208 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
              else
#line 79 "abstract_mode_constraints.m"
                if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3214 "check_hlds.abstract_mode_constraints.c"
                  *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                else
#line 79 "abstract_mode_constraints.m"
                  if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3220 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                  else
#line 3224 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
        }
#line 79 "abstract_mode_constraints.m"
      else
#line 79 "abstract_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 79 "abstract_mode_constraints.m"
          {
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "abstract_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3239 "check_hlds.abstract_mode_constraints.c"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
            else
#line 79 "abstract_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_137_137;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

#line 3252 "check_hlds.abstract_mode_constraints.c"
                  {
#line 3254 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3256 "check_hlds.abstract_mode_constraints.c"
                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_137_137, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3258 "check_hlds.abstract_mode_constraints.c"
                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_137_137, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3260 "check_hlds.abstract_mode_constraints.c"
                  }
#line 79 "abstract_mode_constraints.m"
                  {
#line 79 "abstract_mode_constraints.m"
                    mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_137_137, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__V_148_148, (MR_Word) check_hlds__abstract_mode_constraints__V_30_30);
#line 79 "abstract_mode_constraints.m"
                    return;
                  }
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
              else
#line 79 "abstract_mode_constraints.m"
                if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3275 "check_hlds.abstract_mode_constraints.c"
                  *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                else
#line 79 "abstract_mode_constraints.m"
                  if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3281 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                  else
#line 79 "abstract_mode_constraints.m"
                    if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3287 "check_hlds.abstract_mode_constraints.c"
                      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    else
#line 3291 "check_hlds.abstract_mode_constraints.c"
                      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
        else
#line 79 "abstract_mode_constraints.m"
          if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 79 "abstract_mode_constraints.m"
            {
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "abstract_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3308 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
              else
#line 79 "abstract_mode_constraints.m"
                if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3314 "check_hlds.abstract_mode_constraints.c"
                  *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                else
#line 79 "abstract_mode_constraints.m"
                  if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 79 "abstract_mode_constraints.m"
                    {
#line 79 "abstract_mode_constraints.m"
                      MR_Word check_hlds__abstract_mode_constraints__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
                      MR_Word check_hlds__abstract_mode_constraints__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                      MR_Word check_hlds__abstract_mode_constraints__V_52_52;

#line 79 "abstract_mode_constraints.m"
                      {
#line 79 "abstract_mode_constraints.m"
                        mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, &check_hlds__abstract_mode_constraints__V_52_52, check_hlds__abstract_mode_constraints__V_151_151, check_hlds__abstract_mode_constraints__V_50_50);
                      }
#line 3334 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_52_52 == (MR_Integer) 0);
#line 79 "abstract_mode_constraints.m"
                      check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
#line 79 "abstract_mode_constraints.m"
                      if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__V_52_52;
#line 79 "abstract_mode_constraints.m"
                      else
#line 79 "abstract_mode_constraints.m"
                        {
#line 79 "abstract_mode_constraints.m"
                          mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_150_150, check_hlds__abstract_mode_constraints__V_51_51);
#line 79 "abstract_mode_constraints.m"
                          return;
                        }
#line 79 "abstract_mode_constraints.m"
                    }
#line 79 "abstract_mode_constraints.m"
                  else
#line 79 "abstract_mode_constraints.m"
                    if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3357 "check_hlds.abstract_mode_constraints.c"
                      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    else
#line 79 "abstract_mode_constraints.m"
                      if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3363 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                      else
#line 3367 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
          else
#line 79 "abstract_mode_constraints.m"
            if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "abstract_mode_constraints.m"
                if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3382 "check_hlds.abstract_mode_constraints.c"
                  *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                else
#line 79 "abstract_mode_constraints.m"
                  if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3388 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                  else
#line 79 "abstract_mode_constraints.m"
                    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3394 "check_hlds.abstract_mode_constraints.c"
                      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    else
#line 79 "abstract_mode_constraints.m"
                      if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 79 "abstract_mode_constraints.m"
                        {
#line 79 "abstract_mode_constraints.m"
                          MR_Word check_hlds__abstract_mode_constraints__TypeInfo_123_123;
#line 79 "abstract_mode_constraints.m"
                          MR_Word check_hlds__abstract_mode_constraints__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

#line 3407 "check_hlds.abstract_mode_constraints.c"
                          {
#line 3409 "check_hlds.abstract_mode_constraints.c"
                            check_hlds__abstract_mode_constraints__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3411 "check_hlds.abstract_mode_constraints.c"
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_123_123, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3413 "check_hlds.abstract_mode_constraints.c"
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_123_123, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3415 "check_hlds.abstract_mode_constraints.c"
                          }
#line 79 "abstract_mode_constraints.m"
                          {
#line 79 "abstract_mode_constraints.m"
                            mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_123_123, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__V_143_143, (MR_Word) check_hlds__abstract_mode_constraints__V_97_97);
#line 79 "abstract_mode_constraints.m"
                            return;
                          }
#line 79 "abstract_mode_constraints.m"
                        }
#line 79 "abstract_mode_constraints.m"
                      else
#line 79 "abstract_mode_constraints.m"
                        if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3430 "check_hlds.abstract_mode_constraints.c"
                          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                        else
#line 3434 "check_hlds.abstract_mode_constraints.c"
                          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
            else
#line 79 "abstract_mode_constraints.m"
              if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "abstract_mode_constraints.m"
                  if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3451 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                  else
#line 79 "abstract_mode_constraints.m"
                    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3457 "check_hlds.abstract_mode_constraints.c"
                      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    else
#line 79 "abstract_mode_constraints.m"
                      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3463 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                      else
#line 79 "abstract_mode_constraints.m"
                        if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3469 "check_hlds.abstract_mode_constraints.c"
                          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                        else
#line 79 "abstract_mode_constraints.m"
                          if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 79 "abstract_mode_constraints.m"
                            {
#line 79 "abstract_mode_constraints.m"
                              MR_Word check_hlds__abstract_mode_constraints__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                              MR_Word check_hlds__abstract_mode_constraints__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 2)));
#line 79 "abstract_mode_constraints.m"
                              MR_Word check_hlds__abstract_mode_constraints__V_78_78;

#line 79 "abstract_mode_constraints.m"
                              {
#line 79 "abstract_mode_constraints.m"
                                mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, &check_hlds__abstract_mode_constraints__V_78_78, check_hlds__abstract_mode_constraints__V_147_147, check_hlds__abstract_mode_constraints__V_76_76);
                              }
#line 3489 "check_hlds.abstract_mode_constraints.c"
                              check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_78_78 == (MR_Integer) 0);
#line 79 "abstract_mode_constraints.m"
                              check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
#line 79 "abstract_mode_constraints.m"
                              if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__V_78_78;
#line 79 "abstract_mode_constraints.m"
                              else
#line 79 "abstract_mode_constraints.m"
                                {
#line 79 "abstract_mode_constraints.m"
                                  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_129_129;

#line 3504 "check_hlds.abstract_mode_constraints.c"
                                  {
#line 3506 "check_hlds.abstract_mode_constraints.c"
                                    check_hlds__abstract_mode_constraints__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3508 "check_hlds.abstract_mode_constraints.c"
                                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_129_129, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3510 "check_hlds.abstract_mode_constraints.c"
                                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_129_129, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3512 "check_hlds.abstract_mode_constraints.c"
                                  }
#line 79 "abstract_mode_constraints.m"
                                  {
#line 79 "abstract_mode_constraints.m"
                                    mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_129_129, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__V_146_146, (MR_Word) check_hlds__abstract_mode_constraints__V_77_77);
#line 79 "abstract_mode_constraints.m"
                                    return;
                                  }
#line 79 "abstract_mode_constraints.m"
                                }
#line 79 "abstract_mode_constraints.m"
                            }
#line 79 "abstract_mode_constraints.m"
                          else
#line 3527 "check_hlds.abstract_mode_constraints.c"
                            *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
              else
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "abstract_mode_constraints.m"
                  if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3540 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                  else
#line 79 "abstract_mode_constraints.m"
                    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3546 "check_hlds.abstract_mode_constraints.c"
                      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    else
#line 79 "abstract_mode_constraints.m"
                      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3552 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                      else
#line 79 "abstract_mode_constraints.m"
                        if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3558 "check_hlds.abstract_mode_constraints.c"
                          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                        else
#line 79 "abstract_mode_constraints.m"
                          if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3564 "check_hlds.abstract_mode_constraints.c"
                            *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                          else
#line 79 "abstract_mode_constraints.m"
                            {
#line 79 "abstract_mode_constraints.m"
                              MR_Word check_hlds__abstract_mode_constraints__TypeInfo_119_119;
#line 79 "abstract_mode_constraints.m"
                              MR_Word check_hlds__abstract_mode_constraints__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

#line 3575 "check_hlds.abstract_mode_constraints.c"
                              {
#line 3577 "check_hlds.abstract_mode_constraints.c"
                                check_hlds__abstract_mode_constraints__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3579 "check_hlds.abstract_mode_constraints.c"
                                MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3581 "check_hlds.abstract_mode_constraints.c"
                                MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_119_119, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3583 "check_hlds.abstract_mode_constraints.c"
                              }
#line 79 "abstract_mode_constraints.m"
                              {
#line 79 "abstract_mode_constraints.m"
                                mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_119_119, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__V_149_149, (MR_Word) check_hlds__abstract_mode_constraints__V_114_114);
#line 79 "abstract_mode_constraints.m"
                                return;
                              }
#line 79 "abstract_mode_constraints.m"
                            }
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
  }
#line 79 "abstract_mode_constraints.m"
}

#line 79 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(
#line 79 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_for_T_23,
#line 79 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 79 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 79 "abstract_mode_constraints.m"
{
#line 79 "abstract_mode_constraints.m"
  {
#line 79 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 79 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_21 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 79 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_22 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 79 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_21 == check_hlds__abstract_mode_constraints__CastY_22);
#line 79 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
#line 79 "abstract_mode_constraints.m"
    else
#line 79 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 79 "abstract_mode_constraints.m"
        {
#line 79 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_5_5;
#line 79 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_6_6;

#line 79 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
          if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
            {
#line 79 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 3652 "check_hlds.abstract_mode_constraints.c"
              {
#line 3654 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_5_5);
              }
#line 79 "abstract_mode_constraints.m"
              if (check_hlds__abstract_mode_constraints__succeeded)
#line 3659 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_4_4 == check_hlds__abstract_mode_constraints__V_6_6);
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
        }
#line 79 "abstract_mode_constraints.m"
      else
#line 79 "abstract_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 79 "abstract_mode_constraints.m"
          {
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36;
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__TypeInfo_37_37;
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_8_8;

#line 79 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
            if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 3688 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3690 "check_hlds.abstract_mode_constraints.c"
                {
#line 3692 "check_hlds.abstract_mode_constraints.c"
                  check_hlds__abstract_mode_constraints__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3694 "check_hlds.abstract_mode_constraints.c"
                  MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_37_37, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36));
#line 3696 "check_hlds.abstract_mode_constraints.c"
                  MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_37_37, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3698 "check_hlds.abstract_mode_constraints.c"
                }
#line 3700 "check_hlds.abstract_mode_constraints.c"
                {
#line 3702 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_37_37, (MR_Word) check_hlds__abstract_mode_constraints__V_7_7, (MR_Word) check_hlds__abstract_mode_constraints__V_8_8);
                }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
        else
#line 79 "abstract_mode_constraints.m"
          if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 79 "abstract_mode_constraints.m"
            {
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_11_11;
#line 79 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_12_12;

#line 79 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 79 "abstract_mode_constraints.m"
              if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 3734 "check_hlds.abstract_mode_constraints.c"
                  {
#line 3736 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_9_9, check_hlds__abstract_mode_constraints__V_11_11);
                  }
#line 79 "abstract_mode_constraints.m"
                  if (check_hlds__abstract_mode_constraints__succeeded)
#line 3741 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3743 "check_hlds.abstract_mode_constraints.c"
                      return check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_10_10, check_hlds__abstract_mode_constraints__V_12_12);
                    }
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
          else
#line 79 "abstract_mode_constraints.m"
            if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24;
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__TypeInfo_25_25;
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_18_18;

#line 79 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                  {
#line 79 "abstract_mode_constraints.m"
                    check_hlds__abstract_mode_constraints__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 3773 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3775 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3777 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3779 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_25_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24));
#line 3781 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_25_25, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3783 "check_hlds.abstract_mode_constraints.c"
                    }
#line 3785 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3787 "check_hlds.abstract_mode_constraints.c"
                      return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) check_hlds__abstract_mode_constraints__V_17_17, (MR_Word) check_hlds__abstract_mode_constraints__V_18_18);
                    }
#line 79 "abstract_mode_constraints.m"
                  }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
            else
#line 79 "abstract_mode_constraints.m"
              if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_33_33;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 2)));
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_15_15;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_16_16;

#line 79 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 79 "abstract_mode_constraints.m"
                  if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                    {
#line 79 "abstract_mode_constraints.m"
                      check_hlds__abstract_mode_constraints__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                      check_hlds__abstract_mode_constraints__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
#line 3823 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3825 "check_hlds.abstract_mode_constraints.c"
                      {
#line 3827 "check_hlds.abstract_mode_constraints.c"
                        check_hlds__abstract_mode_constraints__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3829 "check_hlds.abstract_mode_constraints.c"
                        MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_33_33, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30));
#line 3831 "check_hlds.abstract_mode_constraints.c"
                        MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_33_33, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3833 "check_hlds.abstract_mode_constraints.c"
                      }
#line 3835 "check_hlds.abstract_mode_constraints.c"
                      {
#line 3837 "check_hlds.abstract_mode_constraints.c"
                        check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_13_13, check_hlds__abstract_mode_constraints__V_15_15);
                      }
#line 79 "abstract_mode_constraints.m"
                      if (check_hlds__abstract_mode_constraints__succeeded)
#line 3842 "check_hlds.abstract_mode_constraints.c"
                        {
#line 3844 "check_hlds.abstract_mode_constraints.c"
                          return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_33_33, (MR_Word) check_hlds__abstract_mode_constraints__V_14_14, (MR_Word) check_hlds__abstract_mode_constraints__V_16_16);
                        }
#line 79 "abstract_mode_constraints.m"
                    }
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
              else
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_41_41;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_20_20;

#line 79 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 79 "abstract_mode_constraints.m"
                  if (check_hlds__abstract_mode_constraints__succeeded)
#line 79 "abstract_mode_constraints.m"
                    {
#line 79 "abstract_mode_constraints.m"
                      check_hlds__abstract_mode_constraints__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 3872 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3874 "check_hlds.abstract_mode_constraints.c"
                      {
#line 3876 "check_hlds.abstract_mode_constraints.c"
                        check_hlds__abstract_mode_constraints__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3878 "check_hlds.abstract_mode_constraints.c"
                        MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_41_41, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40));
#line 3880 "check_hlds.abstract_mode_constraints.c"
                        MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_41_41, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3882 "check_hlds.abstract_mode_constraints.c"
                      }
#line 3884 "check_hlds.abstract_mode_constraints.c"
                      {
#line 3886 "check_hlds.abstract_mode_constraints.c"
                        return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_41_41, (MR_Word) check_hlds__abstract_mode_constraints__V_19_19, (MR_Word) check_hlds__abstract_mode_constraints__V_20_20);
                      }
#line 79 "abstract_mode_constraints.m"
                    }
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 79 "abstract_mode_constraints.m"
  }
#line 79 "abstract_mode_constraints.m"
}

#line 78 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(
#line 78 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 78 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 78 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 78 "abstract_mode_constraints.m"
{
#line 78 "abstract_mode_constraints.m"
  {
#line 78 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 78 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 78 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 78 "abstract_mode_constraints.m"
    {
#line 78 "abstract_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[2], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
#line 78 "abstract_mode_constraints.m"
      return;
    }
#line 78 "abstract_mode_constraints.m"
  }
#line 78 "abstract_mode_constraints.m"
}

#line 78 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(
#line 78 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 78 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 78 "abstract_mode_constraints.m"
{
#line 78 "abstract_mode_constraints.m"
  {
#line 78 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 78 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 78 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 78 "abstract_mode_constraints.m"
    {
#line 78 "abstract_mode_constraints.m"
      return check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__Cast_HeadVar1_3, check_hlds__abstract_mode_constraints__Cast_HeadVar2_4);
    }
#line 78 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 78 "abstract_mode_constraints.m"
  }
#line 78 "abstract_mode_constraints.m"
}

#line 127 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(
#line 127 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 127 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 127 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 127 "abstract_mode_constraints.m"
{
#line 127 "abstract_mode_constraints.m"
  {
#line 127 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 127 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_12 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 127 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_13 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 127 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_12 == check_hlds__abstract_mode_constraints__CastY_13);
#line 127 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 3986 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 127 "abstract_mode_constraints.m"
    else
#line 127 "abstract_mode_constraints.m"
      {
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 2)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_10_10;

#line 127 "abstract_mode_constraints.m"
        {
#line 127 "abstract_mode_constraints.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[1], &check_hlds__abstract_mode_constraints__V_10_10, ((MR_Box) (check_hlds__abstract_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_7_7)));
        }
#line 4012 "check_hlds.abstract_mode_constraints.c"
        check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_10_10 == (MR_Integer) 0);
#line 127 "abstract_mode_constraints.m"
        check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
#line 127 "abstract_mode_constraints.m"
        if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__V_10_10;
#line 127 "abstract_mode_constraints.m"
        else
#line 127 "abstract_mode_constraints.m"
          {
#line 127 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_11_11;

#line 127 "abstract_mode_constraints.m"
            {
#line 127 "abstract_mode_constraints.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[4], &check_hlds__abstract_mode_constraints__V_11_11, ((MR_Box) (check_hlds__abstract_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_8_8)));
            }
#line 4032 "check_hlds.abstract_mode_constraints.c"
            check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_11_11 == (MR_Integer) 0);
#line 127 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
#line 127 "abstract_mode_constraints.m"
            if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__V_11_11;
#line 127 "abstract_mode_constraints.m"
            else
#line 127 "abstract_mode_constraints.m"
              {
#line 127 "abstract_mode_constraints.m"
                {
#line 127 "abstract_mode_constraints.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[5], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__V_6_6)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_9_9)));
#line 127 "abstract_mode_constraints.m"
                  return;
                }
#line 127 "abstract_mode_constraints.m"
              }
#line 127 "abstract_mode_constraints.m"
          }
#line 127 "abstract_mode_constraints.m"
      }
#line 127 "abstract_mode_constraints.m"
  }
#line 127 "abstract_mode_constraints.m"
}

#line 127 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(
#line 127 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 127 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 127 "abstract_mode_constraints.m"
{
#line 127 "abstract_mode_constraints.m"
  {
#line 127 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 127 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_9 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 127 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_10 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 127 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_9 == check_hlds__abstract_mode_constraints__CastY_10);
#line 127 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
#line 127 "abstract_mode_constraints.m"
    else
#line 127 "abstract_mode_constraints.m"
      {
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__TypeInfo_12_12;
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__TypeInfo_13_13;
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 2)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));

#line 4107 "check_hlds.abstract_mode_constraints.c"
        {
#line 4109 "check_hlds.abstract_mode_constraints.c"
          check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[1], ((MR_Box) (check_hlds__abstract_mode_constraints__V_3_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_6_6)));
        }
#line 127 "abstract_mode_constraints.m"
        if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
          {
#line 4116 "check_hlds.abstract_mode_constraints.c"
            check_hlds__abstract_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[4];
#line 4118 "check_hlds.abstract_mode_constraints.c"
            {
#line 4120 "check_hlds.abstract_mode_constraints.c"
              check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__abstract_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_7_7)));
            }
#line 127 "abstract_mode_constraints.m"
            if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
              {
#line 4127 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeInfo_13_13 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[5];
#line 4129 "check_hlds.abstract_mode_constraints.c"
                {
#line 4131 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_13_13, ((MR_Box) (check_hlds__abstract_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_8_8)));
                }
#line 127 "abstract_mode_constraints.m"
              }
#line 127 "abstract_mode_constraints.m"
          }
#line 127 "abstract_mode_constraints.m"
      }
#line 127 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 127 "abstract_mode_constraints.m"
  }
#line 127 "abstract_mode_constraints.m"
}

#line 43 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(
#line 43 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 43 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 43 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 43 "abstract_mode_constraints.m"
{
#line 43 "abstract_mode_constraints.m"
  {
#line 43 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 43 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 43 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 43 "abstract_mode_constraints.m"
    {
#line 43 "abstract_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[3], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
#line 43 "abstract_mode_constraints.m"
      return;
    }
#line 43 "abstract_mode_constraints.m"
  }
#line 43 "abstract_mode_constraints.m"
}

#line 43 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(
#line 43 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 43 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 43 "abstract_mode_constraints.m"
{
#line 43 "abstract_mode_constraints.m"
  {
#line 43 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 43 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 43 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 43 "abstract_mode_constraints.m"
    {
#line 43 "abstract_mode_constraints.m"
      return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[3], ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_4)));
    }
#line 43 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 43 "abstract_mode_constraints.m"
  }
#line 43 "abstract_mode_constraints.m"
}

#line 42 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(
#line 42 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 42 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 42 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 42 "abstract_mode_constraints.m"
{
#line 42 "abstract_mode_constraints.m"
  {
#line 42 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 42 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 42 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 42 "abstract_mode_constraints.m"
    {
#line 42 "abstract_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
#line 42 "abstract_mode_constraints.m"
      return;
    }
#line 42 "abstract_mode_constraints.m"
  }
#line 42 "abstract_mode_constraints.m"
}

#line 42 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(
#line 42 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 42 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 42 "abstract_mode_constraints.m"
{
#line 42 "abstract_mode_constraints.m"
  {
#line 42 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 42 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 42 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 42 "abstract_mode_constraints.m"
    {
#line 42 "abstract_mode_constraints.m"
      return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0], ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_4)));
    }
#line 42 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 42 "abstract_mode_constraints.m"
  }
#line 42 "abstract_mode_constraints.m"
}

#line 302 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(
#line 302 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1)
#line 302 "abstract_mode_constraints.m"
{
#line 302 "abstract_mode_constraints.m"
  {
#line 302 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 302 "abstract_mode_constraints.m"
    {
#line 302 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1);
#line 302 "abstract_mode_constraints.m"
      return;
    }
#line 302 "abstract_mode_constraints.m"
  }
#line 302 "abstract_mode_constraints.m"
}

#line 302 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0(void)
#line 302 "abstract_mode_constraints.m"
{
#line 302 "abstract_mode_constraints.m"
  {
#line 302 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 302 "abstract_mode_constraints.m"
    {
#line 302 "abstract_mode_constraints.m"
      return check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 302 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 302 "abstract_mode_constraints.m"
  }
#line 302 "abstract_mode_constraints.m"
}

#line 60 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(
#line 60 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 60 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 60 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 60 "abstract_mode_constraints.m"
{
#line 60 "abstract_mode_constraints.m"
  {
#line 60 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 60 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_22 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 60 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_23 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 60 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_22 == check_hlds__abstract_mode_constraints__CastY_23);
#line 60 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 4341 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "abstract_mode_constraints.m"
    else
#line 60 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 60 "abstract_mode_constraints.m"
        {
#line 60 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
          if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 60 "abstract_mode_constraints.m"
            {
#line 60 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
              {
#line 60 "abstract_mode_constraints.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[2], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__V_27_27)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_5_5)));
#line 60 "abstract_mode_constraints.m"
                return;
              }
#line 60 "abstract_mode_constraints.m"
            }
#line 60 "abstract_mode_constraints.m"
          else
#line 60 "abstract_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4372 "check_hlds.abstract_mode_constraints.c"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "abstract_mode_constraints.m"
            else
#line 4376 "check_hlds.abstract_mode_constraints.c"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "abstract_mode_constraints.m"
        }
#line 60 "abstract_mode_constraints.m"
      else
#line 60 "abstract_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4391 "check_hlds.abstract_mode_constraints.c"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "abstract_mode_constraints.m"
            else
#line 60 "abstract_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 60 "abstract_mode_constraints.m"
                {
#line 60 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
                  {
#line 60 "abstract_mode_constraints.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__V_28_28)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_21_21)));
#line 60 "abstract_mode_constraints.m"
                    return;
                  }
#line 60 "abstract_mode_constraints.m"
                }
#line 60 "abstract_mode_constraints.m"
              else
#line 4413 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
        else
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4426 "check_hlds.abstract_mode_constraints.c"
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "abstract_mode_constraints.m"
            else
#line 60 "abstract_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4432 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "abstract_mode_constraints.m"
              else
#line 60 "abstract_mode_constraints.m"
                {
#line 60 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
                  {
#line 60 "abstract_mode_constraints.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__V_29_29)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_13_13)));
#line 60 "abstract_mode_constraints.m"
                    return;
                  }
#line 60 "abstract_mode_constraints.m"
                }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
  }
#line 60 "abstract_mode_constraints.m"
}

#line 60 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(
#line 60 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 60 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 60 "abstract_mode_constraints.m"
{
#line 60 "abstract_mode_constraints.m"
  {
#line 60 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 60 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_9 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 60 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_10 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 60 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_9 == check_hlds__abstract_mode_constraints__CastY_10);
#line 60 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 60 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
#line 60 "abstract_mode_constraints.m"
    else
#line 60 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 60 "abstract_mode_constraints.m"
        {
#line 60 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11;
#line 60 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_4_4;

#line 60 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 60 "abstract_mode_constraints.m"
          if (check_hlds__abstract_mode_constraints__succeeded)
#line 60 "abstract_mode_constraints.m"
            {
#line 60 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 4502 "check_hlds.abstract_mode_constraints.c"
              check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
#line 4504 "check_hlds.abstract_mode_constraints.c"
              {
#line 4506 "check_hlds.abstract_mode_constraints.c"
                return check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11, check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_4_4);
              }
#line 60 "abstract_mode_constraints.m"
            }
#line 60 "abstract_mode_constraints.m"
        }
#line 60 "abstract_mode_constraints.m"
      else
#line 60 "abstract_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__TypeInfo_12_12;
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_8_8;

#line 60 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 60 "abstract_mode_constraints.m"
            if (check_hlds__abstract_mode_constraints__succeeded)
#line 60 "abstract_mode_constraints.m"
              {
#line 60 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 4534 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1];
#line 4536 "check_hlds.abstract_mode_constraints.c"
                {
#line 4538 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__abstract_mode_constraints__V_7_7)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_8_8)));
                }
#line 60 "abstract_mode_constraints.m"
              }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
        else
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__TypeInfo_13_13;
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_6_6;

#line 60 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 60 "abstract_mode_constraints.m"
            if (check_hlds__abstract_mode_constraints__succeeded)
#line 60 "abstract_mode_constraints.m"
              {
#line 60 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 4564 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeInfo_13_13 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1];
#line 4566 "check_hlds.abstract_mode_constraints.c"
                {
#line 4568 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_13_13, ((MR_Box) (check_hlds__abstract_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_6_6)));
                }
#line 60 "abstract_mode_constraints.m"
              }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 60 "abstract_mode_constraints.m"
  }
#line 60 "abstract_mode_constraints.m"
}

#line 103 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(
#line 103 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 103 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 103 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 103 "abstract_mode_constraints.m"
{
#line 103 "abstract_mode_constraints.m"
  {
#line 103 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 103 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 103 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 103 "abstract_mode_constraints.m"
    {
#line 103 "abstract_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[0], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
#line 103 "abstract_mode_constraints.m"
      return;
    }
#line 103 "abstract_mode_constraints.m"
  }
#line 103 "abstract_mode_constraints.m"
}

#line 103 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(
#line 103 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 103 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 103 "abstract_mode_constraints.m"
{
#line 103 "abstract_mode_constraints.m"
  {
#line 103 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 103 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 103 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 103 "abstract_mode_constraints.m"
    {
#line 103 "abstract_mode_constraints.m"
      return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_4)));
    }
#line 103 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 103 "abstract_mode_constraints.m"
  }
#line 103 "abstract_mode_constraints.m"
}

#line 119 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(
#line 119 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 119 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 119 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 119 "abstract_mode_constraints.m"
{
#line 119 "abstract_mode_constraints.m"
  {
#line 119 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 119 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_6 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 119 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_7 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 119 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_6 == check_hlds__abstract_mode_constraints__CastY_7);
#line 119 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 4668 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "abstract_mode_constraints.m"
    else
#line 119 "abstract_mode_constraints.m"
      {
#line 119 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_4_4 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 119 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_5_5 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 119 "abstract_mode_constraints.m"
        {
#line 119 "abstract_mode_constraints.m"
          mercury__term____Compare____context_0_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_4_4, check_hlds__abstract_mode_constraints__V_5_5);
#line 119 "abstract_mode_constraints.m"
          return;
        }
#line 119 "abstract_mode_constraints.m"
      }
#line 119 "abstract_mode_constraints.m"
  }
#line 119 "abstract_mode_constraints.m"
}

#line 119 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(
#line 119 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 119 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 119 "abstract_mode_constraints.m"
{
#line 119 "abstract_mode_constraints.m"
  {
#line 119 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 119 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_5 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 119 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_6 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 119 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_5 == check_hlds__abstract_mode_constraints__CastY_6);
#line 119 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 119 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
#line 119 "abstract_mode_constraints.m"
    else
#line 119 "abstract_mode_constraints.m"
      {
#line 119 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_3_3 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 119 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_4_4 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 4726 "check_hlds.abstract_mode_constraints.c"
        {
#line 4728 "check_hlds.abstract_mode_constraints.c"
          return check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____context_0_0(check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_4_4);
        }
#line 119 "abstract_mode_constraints.m"
      }
#line 119 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 119 "abstract_mode_constraints.m"
  }
#line 119 "abstract_mode_constraints.m"
}

#line 110 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(
#line 110 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 110 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 110 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 110 "abstract_mode_constraints.m"
{
#line 110 "abstract_mode_constraints.m"
  {
#line 110 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 110 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_9 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
#line 110 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_10 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

#line 110 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_9 == check_hlds__abstract_mode_constraints__CastY_10);
#line 110 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 4764 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "abstract_mode_constraints.m"
    else
#line 110 "abstract_mode_constraints.m"
      {
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_8_8;

#line 110 "abstract_mode_constraints.m"
        {
#line 110 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&check_hlds__abstract_mode_constraints__V_8_8, check_hlds__abstract_mode_constraints__V_4_4, check_hlds__abstract_mode_constraints__V_6_6);
        }
#line 4786 "check_hlds.abstract_mode_constraints.c"
        check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 110 "abstract_mode_constraints.m"
        check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
#line 110 "abstract_mode_constraints.m"
        if (check_hlds__abstract_mode_constraints__succeeded)
#line 110 "abstract_mode_constraints.m"
          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__V_8_8;
#line 110 "abstract_mode_constraints.m"
        else
#line 110 "abstract_mode_constraints.m"
          {
#line 110 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_5_5, check_hlds__abstract_mode_constraints__V_7_7);
#line 110 "abstract_mode_constraints.m"
            return;
          }
#line 110 "abstract_mode_constraints.m"
      }
#line 110 "abstract_mode_constraints.m"
  }
#line 110 "abstract_mode_constraints.m"
}

#line 110 "abstract_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(
#line 110 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 110 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 110 "abstract_mode_constraints.m"
{
#line 110 "abstract_mode_constraints.m"
  {
#line 110 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 110 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastX_7 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 110 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__CastY_8 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

#line 110 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_7 == check_hlds__abstract_mode_constraints__CastY_8);
#line 110 "abstract_mode_constraints.m"
    if (check_hlds__abstract_mode_constraints__succeeded)
#line 110 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
#line 110 "abstract_mode_constraints.m"
    else
#line 110 "abstract_mode_constraints.m"
      {
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 110 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 4847 "check_hlds.abstract_mode_constraints.c"
        {
#line 4849 "check_hlds.abstract_mode_constraints.c"
          check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_5_5);
        }
#line 110 "abstract_mode_constraints.m"
        if (check_hlds__abstract_mode_constraints__succeeded)
#line 4854 "check_hlds.abstract_mode_constraints.c"
          {
#line 4856 "check_hlds.abstract_mode_constraints.c"
            return check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(check_hlds__abstract_mode_constraints__V_4_4, check_hlds__abstract_mode_constraints__V_6_6);
          }
#line 110 "abstract_mode_constraints.m"
      }
#line 110 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 110 "abstract_mode_constraints.m"
  }
#line 110 "abstract_mode_constraints.m"
}

#line 672 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_binding_5_p_0(
#line 672 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_6,
#line 672 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Bindings_7,
#line 672 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Var_8)
#line 672 "abstract_mode_constraints.m"
{
#line 675 "abstract_mode_constraints.m"
  {
#line 675 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 675 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23;
#line 675 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Value_10;
#line 675 "abstract_mode_constraints.m"
    MR_String check_hlds__abstract_mode_constraints__V_15_15;
#line 679 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__conv0_Value_10;

#line 676 "abstract_mode_constraints.m"
    {
#line 676 "abstract_mode_constraints.m"
      mercury__io__write_string_3_p_0((MR_String) "    ");
    }
#line 677 "abstract_mode_constraints.m"
    {
#line 677 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_15_15 = mercury__varset__lookup_name_2_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_6, check_hlds__abstract_mode_constraints__Var_8);
    }
#line 677 "abstract_mode_constraints.m"
    {
#line 677 "abstract_mode_constraints.m"
      mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__V_15_15);
    }
#line 678 "abstract_mode_constraints.m"
    {
#line 678 "abstract_mode_constraints.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 4912 "check_hlds.abstract_mode_constraints.c"
    check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 679 "abstract_mode_constraints.m"
    {
#line 679 "abstract_mode_constraints.m"
      mercury__map__lookup_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0], check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23, check_hlds__abstract_mode_constraints__Bindings_7, ((MR_Box) (check_hlds__abstract_mode_constraints__Var_8)), &check_hlds__abstract_mode_constraints__conv0_Value_10);
    }
#line 679 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__Value_10 = ((MR_Word) check_hlds__abstract_mode_constraints__conv0_Value_10);
#line 680 "abstract_mode_constraints.m"
    {
#line 680 "abstract_mode_constraints.m"
      mercury__io__print_3_p_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23, ((MR_Box) (check_hlds__abstract_mode_constraints__Value_10)));
    }
#line 681 "abstract_mode_constraints.m"
    {
#line 681 "abstract_mode_constraints.m"
      mercury__io__nl_2_p_0();
#line 681 "abstract_mode_constraints.m"
      return;
    }
#line 675 "abstract_mode_constraints.m"
  }
#line 672 "abstract_mode_constraints.m"
}

#line 669 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0_1(
#line 669 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 669 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 669 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 669 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 669 "abstract_mode_constraints.m"
{
#line 669 "abstract_mode_constraints.m"
  {
#line 669 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

#line 669 "abstract_mode_constraints.m"
    {
#line 669 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__pretty_print_binding_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
#line 669 "abstract_mode_constraints.m"
      return;
    }
#line 669 "abstract_mode_constraints.m"
  }
#line 669 "abstract_mode_constraints.m"
}

#line 663 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0(
#line 663 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_7,
#line 663 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Bindings_8,
#line 663 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__N_9,
#line 663 "abstract_mode_constraints.m"
  MR_Integer * check_hlds__abstract_mode_constraints__HeadVar__4_4)
#line 663 "abstract_mode_constraints.m"
{
#line 666 "abstract_mode_constraints.m"
  {
#line 666 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 666 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__TypeInfo_25_25;
#line 666 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Variables_11;
#line 666 "abstract_mode_constraints.m"
    MR_String check_hlds__abstract_mode_constraints__V_15_15;
#line 666 "abstract_mode_constraints.m"
    MR_String check_hlds__abstract_mode_constraints__V_18_18;
#line 666 "abstract_mode_constraints.m"
    MR_String check_hlds__abstract_mode_constraints__V_19_19;
#line 666 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_21_21;
#line 669 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_22_22;

#line 666 "abstract_mode_constraints.m"
    *check_hlds__abstract_mode_constraints__HeadVar__4_4 = (check_hlds__abstract_mode_constraints__N_9 + (MR_Integer) 1);
#line 667 "abstract_mode_constraints.m"
    {
#line 667 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_19_19 = mercury__string__from_int_1_f_0(check_hlds__abstract_mode_constraints__N_9);
    }
#line 667 "abstract_mode_constraints.m"
    {
#line 667 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_18_18 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__V_19_19, (MR_String) ":\n{\n");
    }
#line 667 "abstract_mode_constraints.m"
    {
#line 667 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "Solution ", check_hlds__abstract_mode_constraints__V_18_18);
    }
#line 667 "abstract_mode_constraints.m"
    {
#line 667 "abstract_mode_constraints.m"
      mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__V_15_15);
    }
#line 5022 "check_hlds.abstract_mode_constraints.c"
    check_hlds__abstract_mode_constraints__TypeInfo_25_25 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0];
#line 668 "abstract_mode_constraints.m"
    {
#line 668 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__Variables_11 = mercury__map__keys_1_f_0(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__abstract_mode_constraints__Bindings_8);
    }
#line 669 "abstract_mode_constraints.m"
    {
#line 669 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 669 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_21_21, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_6[0]));
#line 669 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0_1));
#line 669 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 669 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_21_21, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_7));
#line 669 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_21_21, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__Bindings_8));
#line 669 "abstract_mode_constraints.m"
    }
#line 669 "abstract_mode_constraints.m"
    {
#line 669 "abstract_mode_constraints.m"
      mercury__list__foldl_4_p_2(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__V_21_21, check_hlds__abstract_mode_constraints__Variables_11, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_22_22);
    }
#line 670 "abstract_mode_constraints.m"
    {
#line 670 "abstract_mode_constraints.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
#line 670 "abstract_mode_constraints.m"
      return;
    }
#line 666 "abstract_mode_constraints.m"
  }
#line 663 "abstract_mode_constraints.m"
}

#line 640 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(
#line 640 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 640 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
#line 640 "abstract_mode_constraints.m"
{
#line 643 "abstract_mode_constraints.m"
  while (MR_TRUE)
#line 643 "abstract_mode_constraints.m"
    {
#line 643 "abstract_mode_constraints.m"
      /* tailcall optimized into a loop */
#line 643 "abstract_mode_constraints.m"
      {
#line 643 "abstract_mode_constraints.m"
        MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 643 "abstract_mode_constraints.m"
        if ((check_hlds__abstract_mode_constraints__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "abstract_mode_constraints.m"
          {
#line 643 "abstract_mode_constraints.m"
          }
#line 643 "abstract_mode_constraints.m"
        else
#line 644 "abstract_mode_constraints.m"
          {
#line 644 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 644 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 644 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__VarName_26;

#line 635 "abstract_mode_constraints.m"
            {
#line 635 "abstract_mode_constraints.m"
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_10, &check_hlds__abstract_mode_constraints__VarName_26);
            }
#line 636 "abstract_mode_constraints.m"
            {
#line 636 "abstract_mode_constraints.m"
              mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_26);
            }
#line 648 "abstract_mode_constraints.m"
            if ((check_hlds__abstract_mode_constraints__Vars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "abstract_mode_constraints.m"
              {
#line 647 "abstract_mode_constraints.m"
              }
#line 648 "abstract_mode_constraints.m"
            else
#line 649 "abstract_mode_constraints.m"
              {
#line 649 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Var_34;
#line 649 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Vars_35;
#line 649 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__VarName_50;

#line 650 "abstract_mode_constraints.m"
                {
#line 650 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 644 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Vars_11, (MR_Integer) 0)));
#line 644 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__Vars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Vars_11, (MR_Integer) 1)));
#line 635 "abstract_mode_constraints.m"
                {
#line 635 "abstract_mode_constraints.m"
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_34, &check_hlds__abstract_mode_constraints__VarName_50);
                }
#line 636 "abstract_mode_constraints.m"
                {
#line 636 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_50);
                }
#line 648 "abstract_mode_constraints.m"
                if ((check_hlds__abstract_mode_constraints__Vars_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "abstract_mode_constraints.m"
                  {
#line 647 "abstract_mode_constraints.m"
                  }
#line 648 "abstract_mode_constraints.m"
                else
#line 649 "abstract_mode_constraints.m"
                  {
#line 650 "abstract_mode_constraints.m"
                    {
#line 650 "abstract_mode_constraints.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 651 "abstract_mode_constraints.m"
                    /* direct tailcall eliminated */
#line 651 "abstract_mode_constraints.m"
                    {
#line 651 "abstract_mode_constraints.m"
                      MR_Word check_hlds__abstract_mode_constraints__HeadVar__2__tmp_copy_2 = check_hlds__abstract_mode_constraints__Vars_35;

#line 651 "abstract_mode_constraints.m"
                      check_hlds__abstract_mode_constraints__HeadVar__2_2 = check_hlds__abstract_mode_constraints__HeadVar__2__tmp_copy_2;
#line 651 "abstract_mode_constraints.m"
                    }
#line 651 "abstract_mode_constraints.m"
                    continue;
#line 649 "abstract_mode_constraints.m"
                  }
#line 649 "abstract_mode_constraints.m"
              }
#line 644 "abstract_mode_constraints.m"
          }
#line 643 "abstract_mode_constraints.m"
      }
#line 643 "abstract_mode_constraints.m"
      break;
#line 643 "abstract_mode_constraints.m"
    }
#line 640 "abstract_mode_constraints.m"
}

#line 591 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(
#line 591 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
#line 591 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_6)
#line 591 "abstract_mode_constraints.m"
{
#line 596 "abstract_mode_constraints.m"
  {
#line 596 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 596 "abstract_mode_constraints.m"
    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 0))))
#line 596 "abstract_mode_constraints.m"
      {
#line 596 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));
#line 596 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__TF_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));
#line 596 "abstract_mode_constraints.m"
        MR_String check_hlds__abstract_mode_constraints__VarName_54;

#line 635 "abstract_mode_constraints.m"
        {
#line 635 "abstract_mode_constraints.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__X_8, &check_hlds__abstract_mode_constraints__VarName_54);
        }
#line 636 "abstract_mode_constraints.m"
        {
#line 636 "abstract_mode_constraints.m"
          mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_54);
        }
#line 598 "abstract_mode_constraints.m"
        {
#line 598 "abstract_mode_constraints.m"
          mercury__io__write_string_3_p_0((MR_String) " = ");
        }
#line 599 "abstract_mode_constraints.m"
        {
#line 599 "abstract_mode_constraints.m"
          mercury__io__print_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__abstract_mode_constraints__TF_9)));
#line 599 "abstract_mode_constraints.m"
          return;
        }
#line 596 "abstract_mode_constraints.m"
      }
#line 596 "abstract_mode_constraints.m"
    else
#line 596 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 1))))
#line 601 "abstract_mode_constraints.m"
        {
#line 601 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

#line 602 "abstract_mode_constraints.m"
          {
#line 602 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "equivalent(");
          }
#line 603 "abstract_mode_constraints.m"
          {
#line 603 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_10);
          }
#line 604 "abstract_mode_constraints.m"
          {
#line 604 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 604 "abstract_mode_constraints.m"
            return;
          }
#line 601 "abstract_mode_constraints.m"
        }
#line 596 "abstract_mode_constraints.m"
      else
#line 596 "abstract_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 2))))
#line 606 "abstract_mode_constraints.m"
          {
#line 606 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));
#line 606 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__X_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));
#line 606 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__VarName_70;
#line 606 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__VarName_78;

#line 635 "abstract_mode_constraints.m"
            {
#line 635 "abstract_mode_constraints.m"
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__X_43, &check_hlds__abstract_mode_constraints__VarName_70);
            }
#line 636 "abstract_mode_constraints.m"
            {
#line 636 "abstract_mode_constraints.m"
              mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_70);
            }
#line 608 "abstract_mode_constraints.m"
            {
#line 608 "abstract_mode_constraints.m"
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
#line 635 "abstract_mode_constraints.m"
            {
#line 635 "abstract_mode_constraints.m"
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Y_11, &check_hlds__abstract_mode_constraints__VarName_78);
            }
#line 636 "abstract_mode_constraints.m"
            {
#line 636 "abstract_mode_constraints.m"
              mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_78);
#line 636 "abstract_mode_constraints.m"
              return;
            }
#line 606 "abstract_mode_constraints.m"
          }
#line 596 "abstract_mode_constraints.m"
        else
#line 596 "abstract_mode_constraints.m"
          if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 617 "abstract_mode_constraints.m"
            {
#line 617 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__Xs_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));

#line 618 "abstract_mode_constraints.m"
              {
#line 618 "abstract_mode_constraints.m"
                mercury__io__write_string_3_p_0((MR_String) "at_most_one(");
              }
#line 619 "abstract_mode_constraints.m"
              {
#line 619 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_46);
              }
#line 620 "abstract_mode_constraints.m"
              {
#line 620 "abstract_mode_constraints.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
#line 620 "abstract_mode_constraints.m"
                return;
              }
#line 617 "abstract_mode_constraints.m"
            }
#line 596 "abstract_mode_constraints.m"
          else
#line 596 "abstract_mode_constraints.m"
            if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 611 "abstract_mode_constraints.m"
              {
#line 611 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__X_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));
#line 611 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Xs_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 2)));
#line 611 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__VarName_62;

#line 635 "abstract_mode_constraints.m"
                {
#line 635 "abstract_mode_constraints.m"
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__X_44, &check_hlds__abstract_mode_constraints__VarName_62);
                }
#line 636 "abstract_mode_constraints.m"
                {
#line 636 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_62);
                }
#line 613 "abstract_mode_constraints.m"
                {
#line 613 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0((MR_String) " <-> disj(");
                }
#line 614 "abstract_mode_constraints.m"
                {
#line 614 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_45);
                }
#line 615 "abstract_mode_constraints.m"
                {
#line 615 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
#line 615 "abstract_mode_constraints.m"
                  return;
                }
#line 611 "abstract_mode_constraints.m"
              }
#line 596 "abstract_mode_constraints.m"
            else
#line 622 "abstract_mode_constraints.m"
              {
#line 622 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Xs_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));

#line 623 "abstract_mode_constraints.m"
                {
#line 623 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0((MR_String) "exactly_one(");
                }
#line 624 "abstract_mode_constraints.m"
                {
#line 624 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_47);
                }
#line 625 "abstract_mode_constraints.m"
                {
#line 625 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
#line 625 "abstract_mode_constraints.m"
                  return;
                }
#line 622 "abstract_mode_constraints.m"
              }
#line 596 "abstract_mode_constraints.m"
  }
#line 591 "abstract_mode_constraints.m"
}

#line 580 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(
#line 580 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 580 "abstract_mode_constraints.m"
  MR_String check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 580 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 580 "abstract_mode_constraints.m"
{
#line 583 "abstract_mode_constraints.m"
  while (MR_TRUE)
#line 583 "abstract_mode_constraints.m"
    {
#line 583 "abstract_mode_constraints.m"
      /* tailcall optimized into a loop */
#line 583 "abstract_mode_constraints.m"
      {
#line 583 "abstract_mode_constraints.m"
        MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 583 "abstract_mode_constraints.m"
        if ((check_hlds__abstract_mode_constraints__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "abstract_mode_constraints.m"
          {
#line 583 "abstract_mode_constraints.m"
          }
#line 583 "abstract_mode_constraints.m"
        else
#line 585 "abstract_mode_constraints.m"
          {
#line 585 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Constraint_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 585 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

#line 555 "abstract_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_13)) == (MR_mktag((MR_Integer) 0))))
#line 571 "abstract_mode_constraints.m"
              {
#line 571 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__AtomicConstraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_13, (MR_Integer) 0)));

#line 572 "abstract_mode_constraints.m"
                {
#line 572 "abstract_mode_constraints.m"
                  mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                }
#line 573 "abstract_mode_constraints.m"
                {
#line 573 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__AtomicConstraint_27);
                }
#line 574 "abstract_mode_constraints.m"
                {
#line 574 "abstract_mode_constraints.m"
                  mercury__io__nl_2_p_0();
                }
#line 571 "abstract_mode_constraints.m"
              }
#line 555 "abstract_mode_constraints.m"
            else
#line 555 "abstract_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_13)) == (MR_mktag((MR_Integer) 2))))
#line 563 "abstract_mode_constraints.m"
                {
#line 563 "abstract_mode_constraints.m"
                  MR_String check_hlds__abstract_mode_constraints__V_34_34;
#line 563 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__Constraints_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_13, (MR_Integer) 0)));

#line 564 "abstract_mode_constraints.m"
                  {
#line 564 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
#line 565 "abstract_mode_constraints.m"
                  {
#line 565 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0((MR_String) "conj(\n");
                  }
#line 566 "abstract_mode_constraints.m"
                  {
#line 566 "abstract_mode_constraints.m"
                    check_hlds__abstract_mode_constraints__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
#line 566 "abstract_mode_constraints.m"
                  {
#line 566 "abstract_mode_constraints.m"
                    check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_34_34, check_hlds__abstract_mode_constraints__Constraints_49);
                  }
#line 568 "abstract_mode_constraints.m"
                  {
#line 568 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
#line 569 "abstract_mode_constraints.m"
                  {
#line 569 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0((MR_String) ") end conj\n");
                  }
#line 563 "abstract_mode_constraints.m"
                }
#line 555 "abstract_mode_constraints.m"
              else
#line 555 "abstract_mode_constraints.m"
                {
#line 555 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__Constraints_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_13, (MR_Integer) 0)));
#line 555 "abstract_mode_constraints.m"
                  MR_String check_hlds__abstract_mode_constraints__V_43_43;

#line 556 "abstract_mode_constraints.m"
                  {
#line 556 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
#line 557 "abstract_mode_constraints.m"
                  {
#line 557 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0((MR_String) "disj(\n");
                  }
#line 558 "abstract_mode_constraints.m"
                  {
#line 558 "abstract_mode_constraints.m"
                    check_hlds__abstract_mode_constraints__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t", check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
#line 558 "abstract_mode_constraints.m"
                  {
#line 558 "abstract_mode_constraints.m"
                    check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_43_43, check_hlds__abstract_mode_constraints__Constraints_26);
                  }
#line 560 "abstract_mode_constraints.m"
                  {
#line 560 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
#line 561 "abstract_mode_constraints.m"
                  {
#line 561 "abstract_mode_constraints.m"
                    mercury__io__write_string_3_p_0((MR_String) ") end disj\n");
                  }
#line 555 "abstract_mode_constraints.m"
                }
#line 587 "abstract_mode_constraints.m"
            /* direct tailcall eliminated */
#line 587 "abstract_mode_constraints.m"
            {
#line 587 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__HeadVar__3__tmp_copy_3 = check_hlds__abstract_mode_constraints__Constraints_14;

#line 587 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__HeadVar__3_3 = check_hlds__abstract_mode_constraints__HeadVar__3__tmp_copy_3;
#line 587 "abstract_mode_constraints.m"
            }
#line 587 "abstract_mode_constraints.m"
            continue;
#line 585 "abstract_mode_constraints.m"
          }
#line 583 "abstract_mode_constraints.m"
      }
#line 583 "abstract_mode_constraints.m"
      break;
#line 583 "abstract_mode_constraints.m"
    }
#line 580 "abstract_mode_constraints.m"
}

#line 516 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(
#line 516 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
#line 516 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
#line 516 "abstract_mode_constraints.m"
  MR_String * check_hlds__abstract_mode_constraints__HeadVar__3_3)
#line 516 "abstract_mode_constraints.m"
{
#line 519 "abstract_mode_constraints.m"
  {
#line 519 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 519 "abstract_mode_constraints.m"
    if ((check_hlds__abstract_mode_constraints__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__HeadVar__3_3 = (MR_String) "";
#line 519 "abstract_mode_constraints.m"
    else
#line 519 "abstract_mode_constraints.m"
      {
#line 519 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 519 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 519 "abstract_mode_constraints.m"
        if ((check_hlds__abstract_mode_constraints__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "abstract_mode_constraints.m"
          {
#line 521 "abstract_mode_constraints.m"
            {
#line 521 "abstract_mode_constraints.m"
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_22_22, check_hlds__abstract_mode_constraints__HeadVar__3_3);
#line 521 "abstract_mode_constraints.m"
              return;
            }
#line 520 "abstract_mode_constraints.m"
          }
#line 519 "abstract_mode_constraints.m"
        else
#line 523 "abstract_mode_constraints.m"
          {
#line 523 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__VarName_13;
#line 523 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__VarNames_14;
#line 523 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__V_16_16;
#line 523 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_40_40;
#line 523 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_41_41;

#line 524 "abstract_mode_constraints.m"
            {
#line 524 "abstract_mode_constraints.m"
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_22_22, &check_hlds__abstract_mode_constraints__VarName_13);
            }
#line 520 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_21_21, (MR_Integer) 0)));
#line 520 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_21_21, (MR_Integer) 1)));
#line 519 "abstract_mode_constraints.m"
            if ((check_hlds__abstract_mode_constraints__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "abstract_mode_constraints.m"
              {
#line 521 "abstract_mode_constraints.m"
                {
#line 521 "abstract_mode_constraints.m"
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_41_41, &check_hlds__abstract_mode_constraints__VarNames_14);
                }
#line 520 "abstract_mode_constraints.m"
              }
#line 519 "abstract_mode_constraints.m"
            else
#line 523 "abstract_mode_constraints.m"
              {
#line 523 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__VarName_32;
#line 523 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__VarNames_33;
#line 523 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__V_35_35;

#line 524 "abstract_mode_constraints.m"
                {
#line 524 "abstract_mode_constraints.m"
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_41_41, &check_hlds__abstract_mode_constraints__VarName_32);
                }
#line 525 "abstract_mode_constraints.m"
                {
#line 525 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__V_40_40, &check_hlds__abstract_mode_constraints__VarNames_33);
                }
#line 523 "abstract_mode_constraints.m"
                {
#line 523 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", check_hlds__abstract_mode_constraints__VarNames_33);
                }
#line 523 "abstract_mode_constraints.m"
                {
#line 523 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__VarNames_14 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarName_32, check_hlds__abstract_mode_constraints__V_35_35);
                }
#line 523 "abstract_mode_constraints.m"
              }
#line 523 "abstract_mode_constraints.m"
            {
#line 523 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", check_hlds__abstract_mode_constraints__VarNames_14);
            }
#line 523 "abstract_mode_constraints.m"
            {
#line 523 "abstract_mode_constraints.m"
              *check_hlds__abstract_mode_constraints__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarName_13, check_hlds__abstract_mode_constraints__V_16_16);
            }
#line 523 "abstract_mode_constraints.m"
          }
#line 519 "abstract_mode_constraints.m"
      }
#line 519 "abstract_mode_constraints.m"
  }
#line 516 "abstract_mode_constraints.m"
}

#line 467 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_var_constraint_7_p_0(
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
#line 467 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
#line 467 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12)
#line 467 "abstract_mode_constraints.m"
{
#line 472 "abstract_mode_constraints.m"
  {
#line 472 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 472 "abstract_mode_constraints.m"
    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 0))))
#line 472 "abstract_mode_constraints.m"
      {
#line 472 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__X_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
#line 472 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__Val_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
#line 472 "abstract_mode_constraints.m"
        MR_String check_hlds__abstract_mode_constraints__VarName_16;
#line 472 "abstract_mode_constraints.m"
        MR_String check_hlds__abstract_mode_constraints__ValString_17;
#line 472 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__Context_18;
#line 472 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_71_71;
#line 472 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_73_73;
#line 472 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__V_75_75;
#line 472 "abstract_mode_constraints.m"
        MR_String check_hlds__abstract_mode_constraints__V_76_76;
#line 472 "abstract_mode_constraints.m"
        MR_String check_hlds__abstract_mode_constraints__V_77_77;

#line 473 "abstract_mode_constraints.m"
        {
#line 473 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "abstract_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_71_71, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_14));
#line 473 "abstract_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "abstract_mode_constraints.m"
        }
#line 473 "abstract_mode_constraints.m"
        {
#line 473 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__V_71_71, &check_hlds__abstract_mode_constraints__VarName_16);
        }
#line 531 "abstract_mode_constraints.m"
        if ((check_hlds__abstract_mode_constraints__Val_15 == (MR_Integer) 0))
#line 532 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__ValString_17 = (MR_String) "no";
#line 531 "abstract_mode_constraints.m"
        else
#line 531 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__ValString_17 = (MR_String) "yes";
#line 475 "abstract_mode_constraints.m"
        check_hlds__abstract_mode_constraints__Context_18 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 477 "abstract_mode_constraints.m"
        {
#line 477 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " = ", check_hlds__abstract_mode_constraints__ValString_17);
        }
#line 477 "abstract_mode_constraints.m"
        {
#line 477 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_76_76 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarName_16, check_hlds__abstract_mode_constraints__V_77_77);
        }
#line 477 "abstract_mode_constraints.m"
        {
#line 477 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "abstract_mode_constraints.m"
          MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 477 "abstract_mode_constraints.m"
          MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_75_75, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_76_76));
#line 477 "abstract_mode_constraints.m"
        }
#line 476 "abstract_mode_constraints.m"
        {
#line 476 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "abstract_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_73_73, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_75_75));
#line 476 "abstract_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "abstract_mode_constraints.m"
        }
#line 476 "abstract_mode_constraints.m"
        {
#line 476 "abstract_mode_constraints.m"
          parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_18, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__V_73_73);
#line 476 "abstract_mode_constraints.m"
          return;
        }
#line 472 "abstract_mode_constraints.m"
      }
#line 472 "abstract_mode_constraints.m"
    else
#line 472 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 1))))
#line 479 "abstract_mode_constraints.m"
        {
#line 479 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Xs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
#line 479 "abstract_mode_constraints.m"
          MR_String check_hlds__abstract_mode_constraints__VarsString_20;
#line 479 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_63_63;
#line 479 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_65_65;
#line 479 "abstract_mode_constraints.m"
          MR_String check_hlds__abstract_mode_constraints__V_66_66;
#line 479 "abstract_mode_constraints.m"
          MR_String check_hlds__abstract_mode_constraints__V_68_68;
#line 479 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Context_80;

#line 480 "abstract_mode_constraints.m"
          {
#line 480 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_19, &check_hlds__abstract_mode_constraints__VarsString_20);
          }
#line 481 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__Context_80 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 483 "abstract_mode_constraints.m"
          {
#line 483 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_68_68 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarsString_20, (MR_String) ")");
          }
#line 483 "abstract_mode_constraints.m"
          {
#line 483 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "equivalent(", check_hlds__abstract_mode_constraints__V_68_68);
          }
#line 483 "abstract_mode_constraints.m"
          {
#line 483 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 483 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_65_65, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_66_66));
#line 483 "abstract_mode_constraints.m"
          }
#line 482 "abstract_mode_constraints.m"
          {
#line 482 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_63_63, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_65_65));
#line 482 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "abstract_mode_constraints.m"
          }
#line 482 "abstract_mode_constraints.m"
          {
#line 482 "abstract_mode_constraints.m"
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_80, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__V_63_63);
#line 482 "abstract_mode_constraints.m"
            return;
          }
#line 479 "abstract_mode_constraints.m"
        }
#line 472 "abstract_mode_constraints.m"
      else
#line 472 "abstract_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 2))))
#line 485 "abstract_mode_constraints.m"
          {
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Y_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
#line 485 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__XName_22;
#line 485 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__YName_23;
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_52_52;
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_54_54;
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_56_56;
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_58_58;
#line 485 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__V_59_59;
#line 485 "abstract_mode_constraints.m"
            MR_String check_hlds__abstract_mode_constraints__V_60_60;
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__X_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
#line 485 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__Context_82;

#line 486 "abstract_mode_constraints.m"
            {
#line 486 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_52_52, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_81));
#line 486 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "abstract_mode_constraints.m"
            }
#line 486 "abstract_mode_constraints.m"
            {
#line 486 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__V_52_52, &check_hlds__abstract_mode_constraints__XName_22);
            }
#line 487 "abstract_mode_constraints.m"
            {
#line 487 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_54_54, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Y_21));
#line 487 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "abstract_mode_constraints.m"
            }
#line 487 "abstract_mode_constraints.m"
            {
#line 487 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__V_54_54, &check_hlds__abstract_mode_constraints__YName_23);
            }
#line 488 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__Context_82 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 490 "abstract_mode_constraints.m"
            {
#line 490 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", check_hlds__abstract_mode_constraints__YName_23);
            }
#line 490 "abstract_mode_constraints.m"
            {
#line 490 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_59_59 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XName_22, check_hlds__abstract_mode_constraints__V_60_60);
            }
#line 490 "abstract_mode_constraints.m"
            {
#line 490 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 490 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_58_58, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_59_59));
#line 490 "abstract_mode_constraints.m"
            }
#line 489 "abstract_mode_constraints.m"
            {
#line 489 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_56_56, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_58_58));
#line 489 "abstract_mode_constraints.m"
              MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "abstract_mode_constraints.m"
            }
#line 489 "abstract_mode_constraints.m"
            {
#line 489 "abstract_mode_constraints.m"
              parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_82, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__V_56_56);
#line 489 "abstract_mode_constraints.m"
              return;
            }
#line 485 "abstract_mode_constraints.m"
          }
#line 472 "abstract_mode_constraints.m"
        else
#line 472 "abstract_mode_constraints.m"
          if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 499 "abstract_mode_constraints.m"
            {
#line 499 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__V_35_35;
#line 499 "abstract_mode_constraints.m"
              MR_String check_hlds__abstract_mode_constraints__V_36_36;
#line 499 "abstract_mode_constraints.m"
              MR_String check_hlds__abstract_mode_constraints__V_38_38;
#line 499 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__Context_87;
#line 499 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__Xs_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
#line 499 "abstract_mode_constraints.m"
              MR_String check_hlds__abstract_mode_constraints__XsString_89;
#line 499 "abstract_mode_constraints.m"
              MR_Word check_hlds__abstract_mode_constraints__Pieces_90;

#line 500 "abstract_mode_constraints.m"
              {
#line 500 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_88, &check_hlds__abstract_mode_constraints__XsString_89);
              }
#line 501 "abstract_mode_constraints.m"
              {
#line 501 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__V_38_38 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XsString_89, (MR_String) ")");
              }
#line 501 "abstract_mode_constraints.m"
              {
#line 501 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "at_most_one(", check_hlds__abstract_mode_constraints__V_38_38);
              }
#line 501 "abstract_mode_constraints.m"
              {
#line 501 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "abstract_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 501 "abstract_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_35_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_36_36));
#line 501 "abstract_mode_constraints.m"
              }
#line 501 "abstract_mode_constraints.m"
              {
#line 501 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__Pieces_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "abstract_mode_constraints.m"
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_90, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_35_35));
#line 501 "abstract_mode_constraints.m"
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "abstract_mode_constraints.m"
              }
#line 502 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__Context_87 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 503 "abstract_mode_constraints.m"
              {
#line 503 "abstract_mode_constraints.m"
                parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_87, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Pieces_90);
#line 503 "abstract_mode_constraints.m"
                return;
              }
#line 499 "abstract_mode_constraints.m"
            }
#line 472 "abstract_mode_constraints.m"
          else
#line 472 "abstract_mode_constraints.m"
            if (((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 492 "abstract_mode_constraints.m"
              {
#line 492 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__XsString_24;
#line 492 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Pieces_25;
#line 492 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_42_42;
#line 492 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_44_44;
#line 492 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__V_45_45;
#line 492 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__V_46_46;
#line 492 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__V_48_48;
#line 492 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__X_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
#line 492 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Context_84;
#line 492 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Xs_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 2)));
#line 492 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__XName_86;

#line 493 "abstract_mode_constraints.m"
                {
#line 493 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_42_42, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_83));
#line 493 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "abstract_mode_constraints.m"
                }
#line 493 "abstract_mode_constraints.m"
                {
#line 493 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__V_42_42, &check_hlds__abstract_mode_constraints__XName_86);
                }
#line 494 "abstract_mode_constraints.m"
                {
#line 494 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_85, &check_hlds__abstract_mode_constraints__XsString_24);
                }
#line 495 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__Context_84 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 496 "abstract_mode_constraints.m"
                {
#line 496 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_48_48 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XsString_24, (MR_String) ")");
                }
#line 496 "abstract_mode_constraints.m"
                {
#line 496 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) " <-> disj(", check_hlds__abstract_mode_constraints__V_48_48);
                }
#line 496 "abstract_mode_constraints.m"
                {
#line 496 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_45_45 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XName_86, check_hlds__abstract_mode_constraints__V_46_46);
                }
#line 496 "abstract_mode_constraints.m"
                {
#line 496 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 496 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_44_44, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_45_45));
#line 496 "abstract_mode_constraints.m"
                }
#line 496 "abstract_mode_constraints.m"
                {
#line 496 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_44_44));
#line 496 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "abstract_mode_constraints.m"
                }
#line 497 "abstract_mode_constraints.m"
                {
#line 497 "abstract_mode_constraints.m"
                  parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_84, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Pieces_25);
#line 497 "abstract_mode_constraints.m"
                  return;
                }
#line 492 "abstract_mode_constraints.m"
              }
#line 472 "abstract_mode_constraints.m"
            else
#line 505 "abstract_mode_constraints.m"
              {
#line 505 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_28_28;
#line 505 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__V_29_29;
#line 505 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__V_31_31;
#line 505 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Context_91;
#line 505 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Xs_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
#line 505 "abstract_mode_constraints.m"
                MR_String check_hlds__abstract_mode_constraints__XsString_93;
#line 505 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__Pieces_94;

#line 506 "abstract_mode_constraints.m"
                {
#line 506 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_92, &check_hlds__abstract_mode_constraints__XsString_93);
                }
#line 507 "abstract_mode_constraints.m"
                {
#line 507 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_31_31 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XsString_93, (MR_String) ")");
                }
#line 507 "abstract_mode_constraints.m"
                {
#line 507 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "exactly_one(", check_hlds__abstract_mode_constraints__V_31_31);
                }
#line 507 "abstract_mode_constraints.m"
                {
#line 507 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 507 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_28_28, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_29_29));
#line 507 "abstract_mode_constraints.m"
                }
#line 507 "abstract_mode_constraints.m"
                {
#line 507 "abstract_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_94, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_28_28));
#line 507 "abstract_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "abstract_mode_constraints.m"
                }
#line 508 "abstract_mode_constraints.m"
                check_hlds__abstract_mode_constraints__Context_91 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 509 "abstract_mode_constraints.m"
                {
#line 509 "abstract_mode_constraints.m"
                  parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_91, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Pieces_94);
#line 509 "abstract_mode_constraints.m"
                  return;
                }
#line 505 "abstract_mode_constraints.m"
              }
#line 472 "abstract_mode_constraints.m"
  }
#line 467 "abstract_mode_constraints.m"
}

#line 427 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_2(
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 427 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 427 "abstract_mode_constraints.m"
{
#line 427 "abstract_mode_constraints.m"
  {
#line 427 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

#line 427 "abstract_mode_constraints.m"
    {
#line 427 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
#line 427 "abstract_mode_constraints.m"
      return;
    }
#line 427 "abstract_mode_constraints.m"
  }
#line 427 "abstract_mode_constraints.m"
}

#line 427 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_1(
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 427 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 427 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 427 "abstract_mode_constraints.m"
{
#line 427 "abstract_mode_constraints.m"
  {
#line 427 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

#line 427 "abstract_mode_constraints.m"
    {
#line 427 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
#line 427 "abstract_mode_constraints.m"
      return;
    }
#line 427 "abstract_mode_constraints.m"
  }
#line 427 "abstract_mode_constraints.m"
}

#line 439 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
#line 439 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
#line 439 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12)
#line 439 "abstract_mode_constraints.m"
{
#line 444 "abstract_mode_constraints.m"
  {
#line 444 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 444 "abstract_mode_constraints.m"
    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 0))))
#line 460 "abstract_mode_constraints.m"
      {
#line 460 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__AtomicConstraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));

#line 461 "abstract_mode_constraints.m"
        {
#line 461 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__dump_var_constraint_7_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Annotation_11, check_hlds__abstract_mode_constraints__AtomicConstraint_16);
#line 461 "abstract_mode_constraints.m"
          return;
        }
#line 460 "abstract_mode_constraints.m"
      }
#line 444 "abstract_mode_constraints.m"
    else
#line 444 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) == (MR_mktag((MR_Integer) 2))))
#line 452 "abstract_mode_constraints.m"
        {
#line 452 "abstract_mode_constraints.m"
          MR_Integer check_hlds__abstract_mode_constraints__V_25_25;
#line 452 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Constraints_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
#line 452 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Context_47 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 452 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_56_56;
#line 427 "abstract_mode_constraints.m"
          MR_Box check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_26_26;

#line 454 "abstract_mode_constraints.m"
          {
#line 454 "abstract_mode_constraints.m"
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_47, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[7]));
          }
#line 455 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_25_25 = (check_hlds__abstract_mode_constraints__Indent_10 + (MR_Integer) 1);
#line 427 "abstract_mode_constraints.m"
          {
#line 427 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_5[0]));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_1));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__Globals_8));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_9));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 5) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_25_25));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_56_56, 6) = ((MR_Box) (check_hlds__abstract_mode_constraints__Annotation_11));
#line 427 "abstract_mode_constraints.m"
          }
#line 427 "abstract_mode_constraints.m"
          {
#line 427 "abstract_mode_constraints.m"
            mercury__list__foldl_4_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__V_56_56, check_hlds__abstract_mode_constraints__Constraints_46, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_26_26);
          }
#line 457 "abstract_mode_constraints.m"
          {
#line 457 "abstract_mode_constraints.m"
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_47, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[9]));
#line 457 "abstract_mode_constraints.m"
            return;
          }
#line 452 "abstract_mode_constraints.m"
        }
#line 444 "abstract_mode_constraints.m"
      else
#line 444 "abstract_mode_constraints.m"
        {
#line 444 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
#line 444 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Context_15 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
#line 444 "abstract_mode_constraints.m"
          MR_Integer check_hlds__abstract_mode_constraints__V_38_38;
#line 444 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__V_71_71;
#line 427 "abstract_mode_constraints.m"
          MR_Box check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_39_39;

#line 446 "abstract_mode_constraints.m"
          {
#line 446 "abstract_mode_constraints.m"
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_15, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[11]));
          }
#line 447 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__V_38_38 = (check_hlds__abstract_mode_constraints__Indent_10 + (MR_Integer) 1);
#line 427 "abstract_mode_constraints.m"
          {
#line 427 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_5[0]));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_2));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__Globals_8));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_9));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 5) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_38_38));
#line 427 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_71_71, 6) = ((MR_Box) (check_hlds__abstract_mode_constraints__Annotation_11));
#line 427 "abstract_mode_constraints.m"
          }
#line 427 "abstract_mode_constraints.m"
          {
#line 427 "abstract_mode_constraints.m"
            mercury__list__foldl_4_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__V_71_71, check_hlds__abstract_mode_constraints__Constraints_14, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_39_39);
          }
#line 449 "abstract_mode_constraints.m"
          {
#line 449 "abstract_mode_constraints.m"
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_15, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[13]));
#line 449 "abstract_mode_constraints.m"
            return;
          }
#line 444 "abstract_mode_constraints.m"
        }
#line 444 "abstract_mode_constraints.m"
  }
#line 439 "abstract_mode_constraints.m"
}

#line 430 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_ann_constraint_6_p_0(
#line 430 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_7,
#line 430 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_8,
#line 430 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__Indent_9,
#line 430 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__AnnConstraint_10)
#line 430 "abstract_mode_constraints.m"
{
#line 433 "abstract_mode_constraints.m"
  {
#line 433 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 433 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnConstraint_10, (MR_Integer) 0)));
#line 433 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Annotation_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnConstraint_10, (MR_Integer) 1)));

#line 435 "abstract_mode_constraints.m"
    {
#line 435 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(check_hlds__abstract_mode_constraints__Globals_7, check_hlds__abstract_mode_constraints__VarSet_8, check_hlds__abstract_mode_constraints__Indent_9, check_hlds__abstract_mode_constraints__Annotation_13, check_hlds__abstract_mode_constraints__Constraint_12);
#line 435 "abstract_mode_constraints.m"
      return;
    }
#line 433 "abstract_mode_constraints.m"
  }
#line 430 "abstract_mode_constraints.m"
}

#line 285 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__xor_6_p_0(
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__A_9,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__B_10,
#line 285 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 285 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 285 "abstract_mode_constraints.m"
{
#line 406 "abstract_mode_constraints.m"
  {
#line 406 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 406 "abstract_mode_constraints.m"
    {
#line 406 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_120_111_114_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__A_9, check_hlds__abstract_mode_constraints__B_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13);
#line 406 "abstract_mode_constraints.m"
      return;
    }
#line 406 "abstract_mode_constraints.m"
  }
#line 285 "abstract_mode_constraints.m"
}

#line 277 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__exactly_one_5_p_0(
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
#line 277 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 277 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 277 "abstract_mode_constraints.m"
{
#line 402 "abstract_mode_constraints.m"
  {
#line 402 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 402 "abstract_mode_constraints.m"
    {
#line 402 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_99_116_108_121_95_111_110_101_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVars_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
#line 402 "abstract_mode_constraints.m"
      return;
    }
#line 402 "abstract_mode_constraints.m"
  }
#line 277 "abstract_mode_constraints.m"
}

#line 270 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__not_both_6_p_0(
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__A_9,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__B_10,
#line 270 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 270 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 270 "abstract_mode_constraints.m"
{
#line 398 "abstract_mode_constraints.m"
  {
#line 398 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 398 "abstract_mode_constraints.m"
    {
#line 398 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_116_95_98_111_116_104_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__A_9, check_hlds__abstract_mode_constraints__B_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13);
#line 398 "abstract_mode_constraints.m"
      return;
    }
#line 398 "abstract_mode_constraints.m"
  }
#line 270 "abstract_mode_constraints.m"
}

#line 262 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__at_most_one_5_p_0(
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
#line 262 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 262 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 262 "abstract_mode_constraints.m"
{
#line 394 "abstract_mode_constraints.m"
  {
#line 394 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 394 "abstract_mode_constraints.m"
    {
#line 394 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_111_110_101_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVars_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
#line 394 "abstract_mode_constraints.m"
      return;
    }
#line 394 "abstract_mode_constraints.m"
  }
#line 262 "abstract_mode_constraints.m"
}

#line 254 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__equiv_disj_6_p_0(
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__X_9,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Ys_10,
#line 254 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 254 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 254 "abstract_mode_constraints.m"
{
#line 390 "abstract_mode_constraints.m"
  {
#line 390 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 390 "abstract_mode_constraints.m"
    {
#line 390 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_100_105_115_106_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__X_9, check_hlds__abstract_mode_constraints__Ys_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13);
#line 390 "abstract_mode_constraints.m"
      return;
    }
#line 390 "abstract_mode_constraints.m"
  }
#line 254 "abstract_mode_constraints.m"
}

#line 245 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__equivalent_5_p_0(
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
#line 245 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 245 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 245 "abstract_mode_constraints.m"
{
#line 386 "abstract_mode_constraints.m"
  {
#line 386 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 386 "abstract_mode_constraints.m"
    {
#line 386 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_97_108_101_110_116_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVars_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
#line 386 "abstract_mode_constraints.m"
      return;
    }
#line 386 "abstract_mode_constraints.m"
  }
#line 245 "abstract_mode_constraints.m"
}

#line 238 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__equiv_no_5_p_0(
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVar_8,
#line 238 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
#line 238 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
#line 238 "abstract_mode_constraints.m"
{
#line 382 "abstract_mode_constraints.m"
  {
#line 382 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 382 "abstract_mode_constraints.m"
    {
#line 382 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_110_111_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVar_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
#line 382 "abstract_mode_constraints.m"
      return;
    }
#line 382 "abstract_mode_constraints.m"
  }
#line 238 "abstract_mode_constraints.m"
}

#line 229 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_f_0(
#line 229 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_4,
#line 229 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_5)
#line 229 "abstract_mode_constraints.m"
{
#line 374 "abstract_mode_constraints.m"
  {
#line 374 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 374 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3;
#line 374 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
#line 375 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
#line 375 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));

#line 374 "abstract_mode_constraints.m"
    {
#line 374 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__HeadVar__3_3 = mercury__multi_map__lookup_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, check_hlds__abstract_mode_constraints__V_6_6, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)));
    }
#line 374 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__HeadVar__3_3;
#line 374 "abstract_mode_constraints.m"
  }
#line 229 "abstract_mode_constraints.m"
}

#line 223 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__all_annotated_constraints_for_proc_2_f_0(
#line 223 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_4,
#line 223 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_5)
#line 223 "abstract_mode_constraints.m"
{
#line 368 "abstract_mode_constraints.m"
  {
#line 368 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 368 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_6;
#line 368 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;
#line 368 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ThisProcConstraints_7;
#line 368 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcConstraints_8;
#line 368 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
#line 369 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
#line 369 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
#line 371 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_12_12;
#line 371 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_13_13;

#line 369 "abstract_mode_constraints.m"
    {
#line 369 "abstract_mode_constraints.m"
      mercury__multi_map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15, check_hlds__abstract_mode_constraints__V_9_9, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)), &check_hlds__abstract_mode_constraints__ThisProcConstraints_7);
    }
#line 371 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
#line 371 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcConstraints_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
#line 371 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
#line 372 "abstract_mode_constraints.m"
    {
#line 372 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraints_6 = mercury__list__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15, check_hlds__abstract_mode_constraints__ThisProcConstraints_7, check_hlds__abstract_mode_constraints__AllProcConstraints_8);
    }
#line 368 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__AnnotatedConstraints_6;
#line 368 "abstract_mode_constraints.m"
  }
#line 223 "abstract_mode_constraints.m"
}

#line 216 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_f_0(
#line 216 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_3)
#line 216 "abstract_mode_constraints.m"
{
#line 365 "abstract_mode_constraints.m"
  {
#line 365 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 365 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 1)));
#line 365 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 0)));
#line 365 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 2)));

#line 365 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__AnnotatedConstraints_4;
#line 365 "abstract_mode_constraints.m"
  }
#line 216 "abstract_mode_constraints.m"
}

#line 362 "abstract_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1(
#line 362 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 362 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1)
#line 362 "abstract_mode_constraints.m"
{
#line 362 "abstract_mode_constraints.m"
  {
#line 362 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2;
#line 362 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;
#line 362 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__conv0_Constraint_3;

#line 362 "abstract_mode_constraints.m"
    {
#line 362 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__conv0_Constraint_3 = check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
#line 362 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_Constraint_3));
#line 362 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__wrapper_arg_2;
#line 362 "abstract_mode_constraints.m"
  }
#line 362 "abstract_mode_constraints.m"
}

#line 210 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0(
#line 210 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_4,
#line 210 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_5)
#line 210 "abstract_mode_constraints.m"
{
#line 359 "abstract_mode_constraints.m"
  {
#line 359 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 359 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Constraints_6;
#line 359 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;
#line 359 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_7;
#line 359 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ThisProcConstraints_16;
#line 359 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AllProcConstraints_17;
#line 359 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
#line 369 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
#line 369 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
#line 371 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_21_21;
#line 371 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_22_22;

#line 369 "abstract_mode_constraints.m"
    {
#line 369 "abstract_mode_constraints.m"
      mercury__multi_map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24, check_hlds__abstract_mode_constraints__V_18_18, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)), &check_hlds__abstract_mode_constraints__ThisProcConstraints_16);
    }
#line 371 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
#line 371 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__AllProcConstraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
#line 371 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
#line 372 "abstract_mode_constraints.m"
    {
#line 372 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__AnnotatedConstraints_7 = mercury__list__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24, check_hlds__abstract_mode_constraints__ThisProcConstraints_16, check_hlds__abstract_mode_constraints__AllProcConstraints_17);
    }
#line 362 "abstract_mode_constraints.m"
    {
#line 362 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__Constraints_6 = mercury__list__map_2_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[3], check_hlds__abstract_mode_constraints__AnnotatedConstraints_7);
    }
#line 359 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__Constraints_6;
#line 359 "abstract_mode_constraints.m"
  }
#line 210 "abstract_mode_constraints.m"
}

#line 357 "abstract_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1(
#line 357 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 357 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1)
#line 357 "abstract_mode_constraints.m"
{
#line 357 "abstract_mode_constraints.m"
  {
#line 357 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2;
#line 357 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;
#line 357 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__conv0_Constraint_3;

#line 357 "abstract_mode_constraints.m"
    {
#line 357 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__conv0_Constraint_3 = check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
#line 357 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_Constraint_3));
#line 357 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__wrapper_arg_2;
#line 357 "abstract_mode_constraints.m"
  }
#line 357 "abstract_mode_constraints.m"
}

#line 203 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0(
#line 203 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_3)
#line 203 "abstract_mode_constraints.m"
{
#line 355 "abstract_mode_constraints.m"
  {
#line 355 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 355 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Constraints_4;
#line 355 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 1)));
#line 365 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 0)));
#line 365 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 2)));

#line 357 "abstract_mode_constraints.m"
    {
#line 357 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__Constraints_4 = mercury__list__map_2_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[2], check_hlds__abstract_mode_constraints__AnnotatedConstraints_5);
    }
#line 355 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__Constraints_4;
#line 355 "abstract_mode_constraints.m"
  }
#line 203 "abstract_mode_constraints.m"
}

#line 198 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_p_0(
#line 198 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__PredId_4,
#line 198 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7,
#line 198 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_8)
#line 198 "abstract_mode_constraints.m"
{
#line 348 "abstract_mode_constraints.m"
  {
#line 348 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 348 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__ModeInferCallees_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 2)));
#line 348 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_10_10;
#line 349 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 0)));
#line 349 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 1)));
#line 350 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_13_13;
#line 350 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_14_14;
#line 350 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_15_15;

#line 350 "abstract_mode_constraints.m"
    {
#line 350 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_10_10 = mercury__set__insert_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__abstract_mode_constraints__ModeInferCallees_6, ((MR_Box) (check_hlds__abstract_mode_constraints__PredId_4)));
    }
#line 350 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 0)));
#line 350 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 1)));
#line 350 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 2)));
#line 350 "abstract_mode_constraints.m"
    {
#line 350 "abstract_mode_constraints.m"
      MR_Word base;
#line 350 "abstract_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 350 "abstract_mode_constraints.m"
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_8 = base;
#line 350 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_13_13));
#line 350 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_14_14));
#line 350 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_10_10));
#line 350 "abstract_mode_constraints.m"
    }
#line 348 "abstract_mode_constraints.m"
  }
#line 198 "abstract_mode_constraints.m"
}

#line 187 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_p_0(
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
#line 187 "abstract_mode_constraints.m"
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_9,
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_10,
#line 187 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16,
#line 187 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17)
#line 187 "abstract_mode_constraints.m"
{
#line 331 "abstract_mode_constraints.m"
  {
#line 331 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 331 "abstract_mode_constraints.m"
    {
#line 331 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_115_112_101_99_105_102_105_99_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__ProcId_9, check_hlds__abstract_mode_constraints__Constraint_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17);
#line 331 "abstract_mode_constraints.m"
      return;
    }
#line 331 "abstract_mode_constraints.m"
  }
#line 187 "abstract_mode_constraints.m"
}

#line 177 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__add_constraint_5_p_0(
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_8,
#line 177 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14,
#line 177 "abstract_mode_constraints.m"
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15)
#line 177 "abstract_mode_constraints.m"
{
#line 314 "abstract_mode_constraints.m"
  {
#line 314 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 314 "abstract_mode_constraints.m"
    {
#line 314 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__Constraint_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15);
#line 314 "abstract_mode_constraints.m"
      return;
    }
#line 314 "abstract_mode_constraints.m"
  }
#line 177 "abstract_mode_constraints.m"
}

#line 169 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0(void)
#line 169 "abstract_mode_constraints.m"
{
#line 312 "abstract_mode_constraints.m"
  {
#line 312 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 312 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 312 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_2_2;
#line 312 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_4_4;

#line 312 "abstract_mode_constraints.m"
    {
#line 312 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_2_2 = mercury__multi_map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0);
    }
#line 312 "abstract_mode_constraints.m"
    {
#line 312 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_4_4 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
    }
#line 312 "abstract_mode_constraints.m"
    {
#line 312 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_2_2));
#line 312 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_4_4));
#line 312 "abstract_mode_constraints.m"
    }
#line 312 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__HeadVar__1_1;
#line 312 "abstract_mode_constraints.m"
  }
#line 169 "abstract_mode_constraints.m"
}

#line 659 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0_1(
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 659 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3,
#line 659 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4,
#line 659 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_5)
#line 659 "abstract_mode_constraints.m"
{
#line 659 "abstract_mode_constraints.m"
  {
#line 659 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;
#line 659 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__conv0_HeadVar__4_4;

#line 659 "abstract_mode_constraints.m"
    {
#line 659 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Integer) check_hlds__abstract_mode_constraints__wrapper_arg_2), &check_hlds__abstract_mode_constraints__conv0_HeadVar__4_4);
    }
#line 659 "abstract_mode_constraints.m"
    *check_hlds__abstract_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__4_4));
#line 659 "abstract_mode_constraints.m"
  }
#line 659 "abstract_mode_constraints.m"
}

#line 162 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0(
#line 162 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
#line 162 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Solutions_6)
#line 162 "abstract_mode_constraints.m"
{
#line 658 "abstract_mode_constraints.m"
  {
#line 658 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 658 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_11_11;
#line 659 "abstract_mode_constraints.m"
    MR_Integer check_hlds__abstract_mode_constraints__V_8_8;
#line 659 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__conv2_V_8_8;
#line 659 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_10;

#line 659 "abstract_mode_constraints.m"
    {
#line 659 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 659 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_11_11, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_3[1]));
#line 659 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_11_11, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0_1));
#line 659 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 659 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_11_11, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_5));
#line 659 "abstract_mode_constraints.m"
    }
#line 659 "abstract_mode_constraints.m"
    {
#line 659 "abstract_mode_constraints.m"
      mercury__list__foldl2_6_p_2((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__V_11_11, check_hlds__abstract_mode_constraints__Solutions_6, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv2_V_8_8, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_10);
    }
#line 659 "abstract_mode_constraints.m"
    check_hlds__abstract_mode_constraints__V_8_8 = ((MR_Integer) check_hlds__abstract_mode_constraints__conv2_V_8_8);
#line 658 "abstract_mode_constraints.m"
  }
#line 162 "abstract_mode_constraints.m"
}

#line 417 "abstract_mode_constraints.m"
static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0_1(
#line 417 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
#line 417 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 417 "abstract_mode_constraints.m"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 417 "abstract_mode_constraints.m"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 417 "abstract_mode_constraints.m"
{
#line 417 "abstract_mode_constraints.m"
  {
#line 417 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

#line 417 "abstract_mode_constraints.m"
    {
#line 417 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__dump_ann_constraint_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
#line 417 "abstract_mode_constraints.m"
      return;
    }
#line 417 "abstract_mode_constraints.m"
  }
#line 417 "abstract_mode_constraints.m"
}

#line 157 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(
#line 157 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Globals_6,
#line 157 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_7,
#line 157 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__AnnConstraints_8)
#line 157 "abstract_mode_constraints.m"
{
#line 415 "abstract_mode_constraints.m"
  {
#line 415 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 415 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_13_13;
#line 417 "abstract_mode_constraints.m"
    MR_Box check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_12;

#line 417 "abstract_mode_constraints.m"
    {
#line 417 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 417 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_13_13, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_3[0]));
#line 417 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_13_13, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0_1));
#line 417 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 417 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_13_13, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__Globals_6));
#line 417 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_13_13, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_7));
#line 417 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__V_13_13, 5) = ((MR_Box) ((MR_Integer) 0));
#line 417 "abstract_mode_constraints.m"
    }
#line 417 "abstract_mode_constraints.m"
    {
#line 417 "abstract_mode_constraints.m"
      mercury__list__foldl_4_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__V_13_13, check_hlds__abstract_mode_constraints__AnnConstraints_8, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_12);
    }
#line 415 "abstract_mode_constraints.m"
  }
#line 157 "abstract_mode_constraints.m"
}

#line 152 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_4_p_0(
#line 152 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
#line 152 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraints_6)
#line 152 "abstract_mode_constraints.m"
{
#line 543 "abstract_mode_constraints.m"
  {
#line 543 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 545 "abstract_mode_constraints.m"
    {
#line 545 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__VarSet_5, (MR_String) "", check_hlds__abstract_mode_constraints__Constraints_6);
#line 545 "abstract_mode_constraints.m"
      return;
    }
#line 543 "abstract_mode_constraints.m"
  }
#line 152 "abstract_mode_constraints.m"
}

#line 147 "abstract_mode_constraints.m"
void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraint_4_p_0(
#line 147 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
#line 147 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__Constraint_6)
#line 147 "abstract_mode_constraints.m"
{
#line 539 "abstract_mode_constraints.m"
  {
#line 539 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 555 "abstract_mode_constraints.m"
    if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 0))))
#line 571 "abstract_mode_constraints.m"
      {
#line 571 "abstract_mode_constraints.m"
        MR_Word check_hlds__abstract_mode_constraints__AtomicConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

#line 572 "abstract_mode_constraints.m"
        {
#line 572 "abstract_mode_constraints.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 573 "abstract_mode_constraints.m"
        {
#line 573 "abstract_mode_constraints.m"
          check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__AtomicConstraint_19);
        }
#line 574 "abstract_mode_constraints.m"
        {
#line 574 "abstract_mode_constraints.m"
          mercury__io__nl_2_p_0();
#line 574 "abstract_mode_constraints.m"
          return;
        }
#line 571 "abstract_mode_constraints.m"
      }
#line 555 "abstract_mode_constraints.m"
    else
#line 555 "abstract_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) == (MR_mktag((MR_Integer) 2))))
#line 563 "abstract_mode_constraints.m"
        {
#line 563 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Constraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

#line 564 "abstract_mode_constraints.m"
          {
#line 564 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "");
          }
#line 565 "abstract_mode_constraints.m"
          {
#line 565 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "conj(\n");
          }
#line 566 "abstract_mode_constraints.m"
          {
#line 566 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__VarSet_5, (MR_String) "\t", check_hlds__abstract_mode_constraints__Constraints_41);
          }
#line 568 "abstract_mode_constraints.m"
          {
#line 568 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "");
          }
#line 569 "abstract_mode_constraints.m"
          {
#line 569 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) ") end conj\n");
#line 569 "abstract_mode_constraints.m"
            return;
          }
#line 563 "abstract_mode_constraints.m"
        }
#line 555 "abstract_mode_constraints.m"
      else
#line 555 "abstract_mode_constraints.m"
        {
#line 555 "abstract_mode_constraints.m"
          MR_Word check_hlds__abstract_mode_constraints__Constraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

#line 556 "abstract_mode_constraints.m"
          {
#line 556 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "");
          }
#line 557 "abstract_mode_constraints.m"
          {
#line 557 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "disj(\n");
          }
#line 558 "abstract_mode_constraints.m"
          {
#line 558 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__VarSet_5, (MR_String) "\t", check_hlds__abstract_mode_constraints__Constraints_18);
          }
#line 560 "abstract_mode_constraints.m"
          {
#line 560 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) "");
          }
#line 561 "abstract_mode_constraints.m"
          {
#line 561 "abstract_mode_constraints.m"
            mercury__io__write_string_3_p_0((MR_String) ") end disj\n");
#line 561 "abstract_mode_constraints.m"
            return;
          }
#line 555 "abstract_mode_constraints.m"
        }
#line 539 "abstract_mode_constraints.m"
  }
#line 147 "abstract_mode_constraints.m"
}

#line 114 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__project_mc_annotation_1_f_0(
#line 114 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1)
#line 114 "abstract_mode_constraints.m"
{
#line 306 "abstract_mode_constraints.m"
  {
#line 306 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 306 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Annotation_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));

#line 306 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__Annotation_4;
#line 306 "abstract_mode_constraints.m"
  }
#line 114 "abstract_mode_constraints.m"
}

#line 113 "abstract_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(
#line 113 "abstract_mode_constraints.m"
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1)
#line 113 "abstract_mode_constraints.m"
{
#line 305 "abstract_mode_constraints.m"
  {
#line 305 "abstract_mode_constraints.m"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
#line 305 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__Constraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "abstract_mode_constraints.m"
    MR_Word check_hlds__abstract_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));

#line 305 "abstract_mode_constraints.m"
    return check_hlds__abstract_mode_constraints__Constraint_3;
#line 305 "abstract_mode_constraints.m"
  }
#line 113 "abstract_mode_constraints.m"
}

void mercury__check_hlds__abstract_mode_constraints__init(void)
{
}

void mercury__check_hlds__abstract_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0);
}

void mercury__check_hlds__abstract_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.abstract_mode_constraints. */
