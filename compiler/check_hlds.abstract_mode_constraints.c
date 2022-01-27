/*
** Automatically generated from `abstract_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module check_hlds.abstract_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__abstract_mode_constraints__init
ENDINIT
*/

#include "check_hlds.abstract_mode_constraints.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
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
#include "int.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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




#line 139 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 142 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 145 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 148 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 151 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2];

#line 154 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0;

#line 157 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1];

#line 160 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1];

#line 163 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1];

#line 166 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1];

#line 169 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1];

#line 172 "check_hlds.abstract_mode_constraints.c"
static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0;

#line 175 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

#line 178 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 181 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1];

#line 184 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0;

#line 187 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;

#line 190 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1];

#line 193 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1;

#line 196 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1];

#line 199 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2;

#line 202 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1];

#line 205 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1];

#line 208 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1];

#line 211 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0[3];

#line 214 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0[3];

#line 217 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0[3];

#line 220 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0;

#line 223 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[1];

#line 226 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1];

#line 229 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1];

#line 232 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 235 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;

#line 238 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;

#line 241 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 244 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3];

#line 247 "check_hlds.abstract_mode_constraints.c"
static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3];

#line 250 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0;

#line 253 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1];

#line 256 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1];

#line 259 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1];

#line 262 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1];

#line 265 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1;

#line 268 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2];

#line 271 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0;

#line 274 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1;

#line 277 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1];

#line 280 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1;

#line 283 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2];

#line 286 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2;

#line 289 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2];

#line 292 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3;

#line 295 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1];

#line 298 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4;

#line 301 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1];

#line 304 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5;

#line 307 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1];

#line 310 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1];

#line 313 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1];

#line 316 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3];

#line 319 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[4];

#line 322 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[6];

#line 325 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[6];

#line 328 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
#line 331 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 333 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 336 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
#line 339 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 341 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 343 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 346 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
#line 349 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 351 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 354 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
#line 357 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 359 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 361 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 364 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
#line 367 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 369 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 372 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
#line 375 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 377 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 379 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 382 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
#line 385 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 387 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 390 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
#line 393 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 395 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 397 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 400 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
#line 403 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 405 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 408 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
#line 411 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 413 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 415 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 418 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
#line 421 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 423 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 426 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
#line 429 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 431 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 433 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 436 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
#line 439 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 441 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 444 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
#line 447 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 449 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 451 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 454 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
#line 457 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 459 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 462 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
#line 465 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 467 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 469 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 472 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
#line 475 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 477 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 479 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

#line 482 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
#line 485 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 487 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 489 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3,
#line 491 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4);

#line 494 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
#line 497 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 499 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

#line 502 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
#line 505 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 507 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 509 "check_hlds.abstract_mode_constraints.c"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "conj("))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) ") end conj"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "disj("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 883 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 891 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 899 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 908 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 916 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0
};

#line 922 "check_hlds.abstract_mode_constraints.c"
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

#line 937 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0
};

#line 942 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0
  }
};

#line 951 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0
};

#line 956 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1] = {
  (MR_Integer) 0
};

#line 961 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_ann_constraint",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0
};

#line 978 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1] = {
  (MR_Integer) 0
};

#line 983 "check_hlds.abstract_mode_constraints.c"
static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 = {
  (MR_String) "mc_annotation",
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_String) "context"
};

#line 990 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_annotation",
  {     &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 },
  {     &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0
};

#line 1007 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1016 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_bindings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1033 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1041 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 1046 "check_hlds.abstract_mode_constraints.c"
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

#line 1061 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
  }
};

#line 1069 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
};

#line 1074 "check_hlds.abstract_mode_constraints.c"
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

#line 1089 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
};

#line 1094 "check_hlds.abstract_mode_constraints.c"
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

#line 1109 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0
};

#line 1114 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1
};

#line 1119 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2
};

#line 1124 "check_hlds.abstract_mode_constraints.c"
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

#line 1143 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1
};

#line 1150 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1157 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_constraint",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0
};

#line 1174 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  (MR_Integer) 0
};

#line 1180 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

#line 1185 "check_hlds.abstract_mode_constraints.c"
static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

#line 1190 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1] = {
  (MR_Integer) 0
};

#line 1195 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_type",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0
};

#line 1212 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1229 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1237 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_varset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1254 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0
  }
};

#line 1262 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0
  }
};

#line 1271 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1279 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1286 "check_hlds.abstract_mode_constraints.c"
static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3] = {
  (MR_String) "ppcc_procspec_constraints",
  (MR_String) "ppcc_allproc_constraints",
  (MR_String) "ppcc_mode_infer_callees"
};

#line 1293 "check_hlds.abstract_mode_constraints.c"
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

#line 1308 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

#line 1313 "check_hlds.abstract_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0
  }
};

#line 1322 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

#line 1327 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1332 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "pred_p_c_constraints",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0
};

#line 1349 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1357 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1363 "check_hlds.abstract_mode_constraints.c"
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

#line 1378 "check_hlds.abstract_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1
  }
};

#line 1386 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1391 "check_hlds.abstract_mode_constraints.c"
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

#line 1406 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1
};

#line 1412 "check_hlds.abstract_mode_constraints.c"
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

#line 1427 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1433 "check_hlds.abstract_mode_constraints.c"
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

#line 1448 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1453 "check_hlds.abstract_mode_constraints.c"
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

#line 1468 "check_hlds.abstract_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

#line 1473 "check_hlds.abstract_mode_constraints.c"
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

#line 1488 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0
};

#line 1493 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1
};

#line 1498 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

#line 1503 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5
};

#line 1510 "check_hlds.abstract_mode_constraints.c"
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

#line 1534 "check_hlds.abstract_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[6] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

#line 1544 "check_hlds.abstract_mode_constraints.c"
static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 1554 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1
};

#line 1571 "check_hlds.abstract_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1588 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
#line 1591 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1593 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1595 "check_hlds.abstract_mode_constraints.c"
{
#line 1597 "check_hlds.abstract_mode_constraints.c"
  {
#line 1599 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1602 "check_hlds.abstract_mode_constraints.c"
    {
#line 1604 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1607 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1609 "check_hlds.abstract_mode_constraints.c"
  }
#line 1611 "check_hlds.abstract_mode_constraints.c"
}

#line 1614 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
#line 1617 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1619 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1621 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1623 "check_hlds.abstract_mode_constraints.c"
{
#line 1625 "check_hlds.abstract_mode_constraints.c"
  {
#line 1627 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1630 "check_hlds.abstract_mode_constraints.c"
    {
#line 1632 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1635 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1637 "check_hlds.abstract_mode_constraints.c"
  }
#line 1639 "check_hlds.abstract_mode_constraints.c"
}

#line 1642 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
#line 1645 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1647 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1649 "check_hlds.abstract_mode_constraints.c"
{
#line 1651 "check_hlds.abstract_mode_constraints.c"
  {
#line 1653 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1656 "check_hlds.abstract_mode_constraints.c"
    {
#line 1658 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1661 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1663 "check_hlds.abstract_mode_constraints.c"
  }
#line 1665 "check_hlds.abstract_mode_constraints.c"
}

#line 1668 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
#line 1671 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1673 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1675 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1677 "check_hlds.abstract_mode_constraints.c"
{
#line 1679 "check_hlds.abstract_mode_constraints.c"
  {
#line 1681 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1684 "check_hlds.abstract_mode_constraints.c"
    {
#line 1686 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1689 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1691 "check_hlds.abstract_mode_constraints.c"
  }
#line 1693 "check_hlds.abstract_mode_constraints.c"
}

#line 1696 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
#line 1699 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1701 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1703 "check_hlds.abstract_mode_constraints.c"
{
#line 1705 "check_hlds.abstract_mode_constraints.c"
  {
#line 1707 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1710 "check_hlds.abstract_mode_constraints.c"
    {
#line 1712 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1715 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1717 "check_hlds.abstract_mode_constraints.c"
  }
#line 1719 "check_hlds.abstract_mode_constraints.c"
}

#line 1722 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
#line 1725 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1727 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1729 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1731 "check_hlds.abstract_mode_constraints.c"
{
#line 1733 "check_hlds.abstract_mode_constraints.c"
  {
#line 1735 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1738 "check_hlds.abstract_mode_constraints.c"
    {
#line 1740 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1743 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1745 "check_hlds.abstract_mode_constraints.c"
  }
#line 1747 "check_hlds.abstract_mode_constraints.c"
}

#line 1750 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
#line 1753 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1755 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1757 "check_hlds.abstract_mode_constraints.c"
{
#line 1759 "check_hlds.abstract_mode_constraints.c"
  {
#line 1761 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1764 "check_hlds.abstract_mode_constraints.c"
    {
#line 1766 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1769 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1771 "check_hlds.abstract_mode_constraints.c"
  }
#line 1773 "check_hlds.abstract_mode_constraints.c"
}

#line 1776 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
#line 1779 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1781 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1783 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1785 "check_hlds.abstract_mode_constraints.c"
{
#line 1787 "check_hlds.abstract_mode_constraints.c"
  {
#line 1789 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1792 "check_hlds.abstract_mode_constraints.c"
    {
#line 1794 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1797 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1799 "check_hlds.abstract_mode_constraints.c"
  }
#line 1801 "check_hlds.abstract_mode_constraints.c"
}

#line 1804 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
#line 1807 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1809 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1811 "check_hlds.abstract_mode_constraints.c"
{
#line 1813 "check_hlds.abstract_mode_constraints.c"
  {
#line 1815 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1818 "check_hlds.abstract_mode_constraints.c"
    {
#line 1820 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_type_0_0();
    }
#line 1823 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1825 "check_hlds.abstract_mode_constraints.c"
  }
#line 1827 "check_hlds.abstract_mode_constraints.c"
}

#line 1830 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
#line 1833 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1835 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1837 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1839 "check_hlds.abstract_mode_constraints.c"
{
#line 1841 "check_hlds.abstract_mode_constraints.c"
  {
#line 1843 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1846 "check_hlds.abstract_mode_constraints.c"
    {
#line 1848 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1);
    }
#line 1851 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1853 "check_hlds.abstract_mode_constraints.c"
  }
#line 1855 "check_hlds.abstract_mode_constraints.c"
}

#line 1858 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
#line 1861 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1863 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1865 "check_hlds.abstract_mode_constraints.c"
{
#line 1867 "check_hlds.abstract_mode_constraints.c"
  {
#line 1869 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1872 "check_hlds.abstract_mode_constraints.c"
    {
#line 1874 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1877 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1879 "check_hlds.abstract_mode_constraints.c"
  }
#line 1881 "check_hlds.abstract_mode_constraints.c"
}

#line 1884 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
#line 1887 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1889 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1891 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1893 "check_hlds.abstract_mode_constraints.c"
{
#line 1895 "check_hlds.abstract_mode_constraints.c"
  {
#line 1897 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1900 "check_hlds.abstract_mode_constraints.c"
    {
#line 1902 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1905 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1907 "check_hlds.abstract_mode_constraints.c"
  }
#line 1909 "check_hlds.abstract_mode_constraints.c"
}

#line 1912 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
#line 1915 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1917 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1919 "check_hlds.abstract_mode_constraints.c"
{
#line 1921 "check_hlds.abstract_mode_constraints.c"
  {
#line 1923 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1926 "check_hlds.abstract_mode_constraints.c"
    {
#line 1928 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1931 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1933 "check_hlds.abstract_mode_constraints.c"
  }
#line 1935 "check_hlds.abstract_mode_constraints.c"
}

#line 1938 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
#line 1941 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1943 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1945 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 1947 "check_hlds.abstract_mode_constraints.c"
{
#line 1949 "check_hlds.abstract_mode_constraints.c"
  {
#line 1951 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 1954 "check_hlds.abstract_mode_constraints.c"
    {
#line 1956 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 1959 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 1961 "check_hlds.abstract_mode_constraints.c"
  }
#line 1963 "check_hlds.abstract_mode_constraints.c"
}

#line 1966 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
#line 1969 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1971 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 1973 "check_hlds.abstract_mode_constraints.c"
{
#line 1975 "check_hlds.abstract_mode_constraints.c"
  {
#line 1977 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 1980 "check_hlds.abstract_mode_constraints.c"
    {
#line 1982 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 1985 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 1987 "check_hlds.abstract_mode_constraints.c"
  }
#line 1989 "check_hlds.abstract_mode_constraints.c"
}

#line 1992 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
#line 1995 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 1997 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 1999 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 2001 "check_hlds.abstract_mode_constraints.c"
{
#line 2003 "check_hlds.abstract_mode_constraints.c"
  {
#line 2005 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 2008 "check_hlds.abstract_mode_constraints.c"
    {
#line 2010 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 2013 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 2015 "check_hlds.abstract_mode_constraints.c"
  }
#line 2017 "check_hlds.abstract_mode_constraints.c"
}

#line 2020 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
#line 2023 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2025 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2027 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 2029 "check_hlds.abstract_mode_constraints.c"
{
#line 2031 "check_hlds.abstract_mode_constraints.c"
  {
#line 2033 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 2036 "check_hlds.abstract_mode_constraints.c"
    {
#line 2038 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 2041 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 2043 "check_hlds.abstract_mode_constraints.c"
  }
#line 2045 "check_hlds.abstract_mode_constraints.c"
}

#line 2048 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
#line 2051 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2053 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2055 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3,
#line 2057 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4)
#line 2059 "check_hlds.abstract_mode_constraints.c"
{
#line 2061 "check_hlds.abstract_mode_constraints.c"
  {
#line 2063 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 2066 "check_hlds.abstract_mode_constraints.c"
    {
#line 2068 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), &check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_4));
    }
#line 2071 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 2073 "check_hlds.abstract_mode_constraints.c"
  }
#line 2075 "check_hlds.abstract_mode_constraints.c"
}

#line 2078 "check_hlds.abstract_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
#line 2081 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2083 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
#line 2085 "check_hlds.abstract_mode_constraints.c"
{
#line 2087 "check_hlds.abstract_mode_constraints.c"
  {
#line 2089 "check_hlds.abstract_mode_constraints.c"
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

#line 2092 "check_hlds.abstract_mode_constraints.c"
    {
#line 2094 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
#line 2097 "check_hlds.abstract_mode_constraints.c"
    return check_hlds__abstract_mode_constraints__succeeded;
#line 2099 "check_hlds.abstract_mode_constraints.c"
  }
#line 2101 "check_hlds.abstract_mode_constraints.c"
}

#line 2104 "check_hlds.abstract_mode_constraints.c"
static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
#line 2107 "check_hlds.abstract_mode_constraints.c"
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
#line 2109 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
#line 2111 "check_hlds.abstract_mode_constraints.c"
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
#line 2113 "check_hlds.abstract_mode_constraints.c"
{
#line 2115 "check_hlds.abstract_mode_constraints.c"
  {
#line 2117 "check_hlds.abstract_mode_constraints.c"
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

#line 2120 "check_hlds.abstract_mode_constraints.c"
    {
#line 2122 "check_hlds.abstract_mode_constraints.c"
      check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
#line 2125 "check_hlds.abstract_mode_constraints.c"
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
#line 2127 "check_hlds.abstract_mode_constraints.c"
  }
#line 2129 "check_hlds.abstract_mode_constraints.c"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_29));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_27));
#line 328 "abstract_mode_constraints.m"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
#line 328 "abstract_mode_constraints.m"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_29));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_35_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_27));
#line 328 "abstract_mode_constraints.m"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
#line 328 "abstract_mode_constraints.m"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_32_32, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_26));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_32_32, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_24));
#line 328 "abstract_mode_constraints.m"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
#line 328 "abstract_mode_constraints.m"
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_31_31, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_25));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_31_31, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_23));
#line 328 "abstract_mode_constraints.m"
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
#line 346 "abstract_mode_constraints.m"
    {
#line 346 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_27_27 = mercury__multi_map__add_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, check_hlds__abstract_mode_constraints__ProcConstraints_13, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_9)), ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_15)));
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
#line 328 "abstract_mode_constraints.m"
    {
#line 328 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_21_21, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_13));
#line 328 "abstract_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_11));
#line 328 "abstract_mode_constraints.m"
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
#line 3103 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "abstract_mode_constraints.m"
    else
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) {
#line 79 "abstract_mode_constraints.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 0:
#line 79 "abstract_mode_constraints.m"
          {
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 79 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
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
#line 3142 "check_hlds.abstract_mode_constraints.c"
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
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
#line 3174 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
#line 3180 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 0:
#line 3193 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 1:
#line 3199 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 2:
#line 3205 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 1:
#line 79 "abstract_mode_constraints.m"
          {
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 79 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
#line 3233 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
#line 79 "abstract_mode_constraints.m"
                {
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_137_137;
#line 79 "abstract_mode_constraints.m"
                  MR_Word check_hlds__abstract_mode_constraints__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

#line 3246 "check_hlds.abstract_mode_constraints.c"
                  {
#line 3248 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3250 "check_hlds.abstract_mode_constraints.c"
                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_137_137, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3252 "check_hlds.abstract_mode_constraints.c"
                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_137_137, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3254 "check_hlds.abstract_mode_constraints.c"
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
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
#line 3269 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 0:
#line 3282 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 1:
#line 3288 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 2:
#line 3294 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 2:
#line 79 "abstract_mode_constraints.m"
          {
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 79 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
#line 3324 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
#line 3330 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
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
#line 3350 "check_hlds.abstract_mode_constraints.c"
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
                break;
#line 79 "abstract_mode_constraints.m"
              case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 0:
#line 3380 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 1:
#line 3386 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 2:
#line 3392 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
                break;
#line 79 "abstract_mode_constraints.m"
            }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
            case (MR_Integer) 0:
#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 79 "abstract_mode_constraints.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 0:
#line 3429 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 1:
#line 3435 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 2:
#line 3441 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 0:
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
#line 3468 "check_hlds.abstract_mode_constraints.c"
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

#line 3483 "check_hlds.abstract_mode_constraints.c"
                              {
#line 3485 "check_hlds.abstract_mode_constraints.c"
                                check_hlds__abstract_mode_constraints__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3487 "check_hlds.abstract_mode_constraints.c"
                                MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_129_129, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3489 "check_hlds.abstract_mode_constraints.c"
                                MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_129_129, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3491 "check_hlds.abstract_mode_constraints.c"
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
                        break;
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 1:
#line 3508 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                        break;
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 2:
#line 3514 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                        break;
#line 79 "abstract_mode_constraints.m"
                    }
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
              break;
#line 79 "abstract_mode_constraints.m"
            case (MR_Integer) 1:
#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 79 "abstract_mode_constraints.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 0:
#line 3542 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 1:
#line 3548 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 2:
#line 3554 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 0:
#line 3567 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                        break;
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 1:
#line 79 "abstract_mode_constraints.m"
                        {
#line 79 "abstract_mode_constraints.m"
                          MR_Word check_hlds__abstract_mode_constraints__TypeInfo_123_123;
#line 79 "abstract_mode_constraints.m"
                          MR_Word check_hlds__abstract_mode_constraints__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

#line 3580 "check_hlds.abstract_mode_constraints.c"
                          {
#line 3582 "check_hlds.abstract_mode_constraints.c"
                            check_hlds__abstract_mode_constraints__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3584 "check_hlds.abstract_mode_constraints.c"
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_123_123, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3586 "check_hlds.abstract_mode_constraints.c"
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_123_123, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3588 "check_hlds.abstract_mode_constraints.c"
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
                        break;
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 2:
#line 3603 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "abstract_mode_constraints.m"
                        break;
#line 79 "abstract_mode_constraints.m"
                    }
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
              break;
#line 79 "abstract_mode_constraints.m"
            case (MR_Integer) 2:
#line 79 "abstract_mode_constraints.m"
              {
#line 79 "abstract_mode_constraints.m"
                MR_Word check_hlds__abstract_mode_constraints__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 79 "abstract_mode_constraints.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 0:
#line 3631 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 1:
#line 3637 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 2:
#line 3643 "check_hlds.abstract_mode_constraints.c"
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                  case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 0:
#line 3656 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                        break;
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 1:
#line 3662 "check_hlds.abstract_mode_constraints.c"
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "abstract_mode_constraints.m"
                        break;
#line 79 "abstract_mode_constraints.m"
                      case (MR_Integer) 2:
#line 79 "abstract_mode_constraints.m"
                        {
#line 79 "abstract_mode_constraints.m"
                          MR_Word check_hlds__abstract_mode_constraints__TypeInfo_119_119;
#line 79 "abstract_mode_constraints.m"
                          MR_Word check_hlds__abstract_mode_constraints__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

#line 3675 "check_hlds.abstract_mode_constraints.c"
                          {
#line 3677 "check_hlds.abstract_mode_constraints.c"
                            check_hlds__abstract_mode_constraints__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3679 "check_hlds.abstract_mode_constraints.c"
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3681 "check_hlds.abstract_mode_constraints.c"
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_119_119, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
#line 3683 "check_hlds.abstract_mode_constraints.c"
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
                        break;
#line 79 "abstract_mode_constraints.m"
                    }
#line 79 "abstract_mode_constraints.m"
                    break;
#line 79 "abstract_mode_constraints.m"
                }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
              break;
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
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
#line 79 "abstract_mode_constraints.m"
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) {
#line 79 "abstract_mode_constraints.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 0:
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
#line 3773 "check_hlds.abstract_mode_constraints.c"
                {
#line 3775 "check_hlds.abstract_mode_constraints.c"
                  check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_5_5);
                }
#line 79 "abstract_mode_constraints.m"
                if (check_hlds__abstract_mode_constraints__succeeded)
#line 3780 "check_hlds.abstract_mode_constraints.c"
                  check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__V_4_4 == check_hlds__abstract_mode_constraints__V_6_6);
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 1:
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
#line 3809 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3811 "check_hlds.abstract_mode_constraints.c"
                {
#line 3813 "check_hlds.abstract_mode_constraints.c"
                  check_hlds__abstract_mode_constraints__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3815 "check_hlds.abstract_mode_constraints.c"
                  MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_37_37, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36));
#line 3817 "check_hlds.abstract_mode_constraints.c"
                  MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_37_37, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3819 "check_hlds.abstract_mode_constraints.c"
                }
#line 3821 "check_hlds.abstract_mode_constraints.c"
                {
#line 3823 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_37_37, (MR_Word) check_hlds__abstract_mode_constraints__V_7_7, (MR_Word) check_hlds__abstract_mode_constraints__V_8_8);
                }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 2:
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
#line 3855 "check_hlds.abstract_mode_constraints.c"
                {
#line 3857 "check_hlds.abstract_mode_constraints.c"
                  check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_9_9, check_hlds__abstract_mode_constraints__V_11_11);
                }
#line 79 "abstract_mode_constraints.m"
                if (check_hlds__abstract_mode_constraints__succeeded)
#line 3862 "check_hlds.abstract_mode_constraints.c"
                  {
#line 3864 "check_hlds.abstract_mode_constraints.c"
                    return check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_10_10, check_hlds__abstract_mode_constraints__V_12_12);
                  }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
#line 79 "abstract_mode_constraints.m"
        case (MR_Integer) 3:
#line 79 "abstract_mode_constraints.m"
#line 79 "abstract_mode_constraints.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)))) {
#line 79 "abstract_mode_constraints.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 79 "abstract_mode_constraints.m"
            case (MR_Integer) 0:
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
#line 3907 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3909 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3911 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3913 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_33_33, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30));
#line 3915 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_33_33, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3917 "check_hlds.abstract_mode_constraints.c"
                    }
#line 3919 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3921 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__V_13_13, check_hlds__abstract_mode_constraints__V_15_15);
                    }
#line 79 "abstract_mode_constraints.m"
                    if (check_hlds__abstract_mode_constraints__succeeded)
#line 3926 "check_hlds.abstract_mode_constraints.c"
                      {
#line 3928 "check_hlds.abstract_mode_constraints.c"
                        return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_33_33, (MR_Word) check_hlds__abstract_mode_constraints__V_14_14, (MR_Word) check_hlds__abstract_mode_constraints__V_16_16);
                      }
#line 79 "abstract_mode_constraints.m"
                  }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
              break;
#line 79 "abstract_mode_constraints.m"
            case (MR_Integer) 1:
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
#line 3958 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3960 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3962 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3964 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_25_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24));
#line 3966 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_25_25, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 3968 "check_hlds.abstract_mode_constraints.c"
                    }
#line 3970 "check_hlds.abstract_mode_constraints.c"
                    {
#line 3972 "check_hlds.abstract_mode_constraints.c"
                      return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) check_hlds__abstract_mode_constraints__V_17_17, (MR_Word) check_hlds__abstract_mode_constraints__V_18_18);
                    }
#line 79 "abstract_mode_constraints.m"
                  }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
              break;
#line 79 "abstract_mode_constraints.m"
            case (MR_Integer) 2:
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
#line 4002 "check_hlds.abstract_mode_constraints.c"
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4004 "check_hlds.abstract_mode_constraints.c"
                    {
#line 4006 "check_hlds.abstract_mode_constraints.c"
                      check_hlds__abstract_mode_constraints__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4008 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_41_41, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40));
#line 4010 "check_hlds.abstract_mode_constraints.c"
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_41_41, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
#line 4012 "check_hlds.abstract_mode_constraints.c"
                    }
#line 4014 "check_hlds.abstract_mode_constraints.c"
                    {
#line 4016 "check_hlds.abstract_mode_constraints.c"
                      return check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_41_41, (MR_Word) check_hlds__abstract_mode_constraints__V_19_19, (MR_Word) check_hlds__abstract_mode_constraints__V_20_20);
                    }
#line 79 "abstract_mode_constraints.m"
                  }
#line 79 "abstract_mode_constraints.m"
              }
#line 79 "abstract_mode_constraints.m"
              break;
#line 79 "abstract_mode_constraints.m"
          }
#line 79 "abstract_mode_constraints.m"
          break;
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
#line 4124 "check_hlds.abstract_mode_constraints.c"
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
#line 4150 "check_hlds.abstract_mode_constraints.c"
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
#line 4170 "check_hlds.abstract_mode_constraints.c"
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

#line 4245 "check_hlds.abstract_mode_constraints.c"
        {
#line 4247 "check_hlds.abstract_mode_constraints.c"
          check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[1], ((MR_Box) (check_hlds__abstract_mode_constraints__V_3_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_6_6)));
        }
#line 127 "abstract_mode_constraints.m"
        if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
          {
#line 4254 "check_hlds.abstract_mode_constraints.c"
            check_hlds__abstract_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[4];
#line 4256 "check_hlds.abstract_mode_constraints.c"
            {
#line 4258 "check_hlds.abstract_mode_constraints.c"
              check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__abstract_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_7_7)));
            }
#line 127 "abstract_mode_constraints.m"
            if (check_hlds__abstract_mode_constraints__succeeded)
#line 127 "abstract_mode_constraints.m"
              {
#line 4265 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeInfo_13_13 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[5];
#line 4267 "check_hlds.abstract_mode_constraints.c"
                {
#line 4269 "check_hlds.abstract_mode_constraints.c"
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
#line 4479 "check_hlds.abstract_mode_constraints.c"
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "abstract_mode_constraints.m"
    else
#line 60 "abstract_mode_constraints.m"
#line 60 "abstract_mode_constraints.m"
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) {
#line 60 "abstract_mode_constraints.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 60 "abstract_mode_constraints.m"
        case (MR_Integer) 0:
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
#line 60 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 60 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
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
                break;
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
#line 4520 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "abstract_mode_constraints.m"
                break;
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
#line 4526 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "abstract_mode_constraints.m"
                break;
#line 60 "abstract_mode_constraints.m"
            }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
          break;
#line 60 "abstract_mode_constraints.m"
        case (MR_Integer) 1:
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
#line 60 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 60 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
#line 4550 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "abstract_mode_constraints.m"
                break;
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
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
                break;
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
#line 4574 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "abstract_mode_constraints.m"
                break;
#line 60 "abstract_mode_constraints.m"
            }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
          break;
#line 60 "abstract_mode_constraints.m"
        case (MR_Integer) 2:
#line 60 "abstract_mode_constraints.m"
          {
#line 60 "abstract_mode_constraints.m"
            MR_Word check_hlds__abstract_mode_constraints__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "abstract_mode_constraints.m"
#line 60 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
#line 60 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
#line 4598 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "abstract_mode_constraints.m"
                break;
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
#line 4604 "check_hlds.abstract_mode_constraints.c"
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "abstract_mode_constraints.m"
                break;
#line 60 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
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
                break;
#line 60 "abstract_mode_constraints.m"
            }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
          break;
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
#line 60 "abstract_mode_constraints.m"
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) {
#line 60 "abstract_mode_constraints.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 60 "abstract_mode_constraints.m"
        case (MR_Integer) 0:
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
#line 4689 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
#line 4691 "check_hlds.abstract_mode_constraints.c"
                {
#line 4693 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11, check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_4_4);
                }
#line 60 "abstract_mode_constraints.m"
              }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
          break;
#line 60 "abstract_mode_constraints.m"
        case (MR_Integer) 1:
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
#line 4721 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeInfo_13_13 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1];
#line 4723 "check_hlds.abstract_mode_constraints.c"
                {
#line 4725 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_13_13, ((MR_Box) (check_hlds__abstract_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_6_6)));
                }
#line 60 "abstract_mode_constraints.m"
              }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
          break;
#line 60 "abstract_mode_constraints.m"
        case (MR_Integer) 2:
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
#line 4753 "check_hlds.abstract_mode_constraints.c"
                check_hlds__abstract_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1];
#line 4755 "check_hlds.abstract_mode_constraints.c"
                {
#line 4757 "check_hlds.abstract_mode_constraints.c"
                  return check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__abstract_mode_constraints__V_7_7)), ((MR_Box) (check_hlds__abstract_mode_constraints__V_8_8)));
                }
#line 60 "abstract_mode_constraints.m"
              }
#line 60 "abstract_mode_constraints.m"
          }
#line 60 "abstract_mode_constraints.m"
          break;
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
#line 4861 "check_hlds.abstract_mode_constraints.c"
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

#line 4919 "check_hlds.abstract_mode_constraints.c"
        {
#line 4921 "check_hlds.abstract_mode_constraints.c"
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
#line 4957 "check_hlds.abstract_mode_constraints.c"
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
#line 4979 "check_hlds.abstract_mode_constraints.c"
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

#line 5040 "check_hlds.abstract_mode_constraints.c"
        {
#line 5042 "check_hlds.abstract_mode_constraints.c"
          check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(check_hlds__abstract_mode_constraints__V_3_3, check_hlds__abstract_mode_constraints__V_5_5);
        }
#line 110 "abstract_mode_constraints.m"
        if (check_hlds__abstract_mode_constraints__succeeded)
#line 5047 "check_hlds.abstract_mode_constraints.c"
          {
#line 5049 "check_hlds.abstract_mode_constraints.c"
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
#line 5105 "check_hlds.abstract_mode_constraints.c"
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
#line 5215 "check_hlds.abstract_mode_constraints.c"
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
#line 596 "abstract_mode_constraints.m"
    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) {
#line 596 "abstract_mode_constraints.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 596 "abstract_mode_constraints.m"
      case (MR_Integer) 0:
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
        break;
#line 596 "abstract_mode_constraints.m"
      case (MR_Integer) 1:
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
        break;
#line 596 "abstract_mode_constraints.m"
      case (MR_Integer) 2:
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
        break;
#line 596 "abstract_mode_constraints.m"
      case (MR_Integer) 3:
#line 596 "abstract_mode_constraints.m"
#line 596 "abstract_mode_constraints.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)))) {
#line 596 "abstract_mode_constraints.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 596 "abstract_mode_constraints.m"
          case (MR_Integer) 0:
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
            break;
#line 596 "abstract_mode_constraints.m"
          case (MR_Integer) 1:
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
            break;
#line 596 "abstract_mode_constraints.m"
          case (MR_Integer) 2:
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
            break;
#line 596 "abstract_mode_constraints.m"
        }
#line 596 "abstract_mode_constraints.m"
        break;
#line 596 "abstract_mode_constraints.m"
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
#line 555 "abstract_mode_constraints.m"
            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_13)) {
#line 555 "abstract_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "abstract_mode_constraints.m"
              case (MR_Integer) 0:
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
                break;
#line 555 "abstract_mode_constraints.m"
              case (MR_Integer) 1:
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
#line 555 "abstract_mode_constraints.m"
                break;
#line 555 "abstract_mode_constraints.m"
              case (MR_Integer) 2:
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
                break;
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
#line 472 "abstract_mode_constraints.m"
    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) {
#line 472 "abstract_mode_constraints.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 472 "abstract_mode_constraints.m"
      case (MR_Integer) 0:
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
#line 531 "abstract_mode_constraints.m"
          switch (check_hlds__abstract_mode_constraints__Val_15) {
#line 531 "abstract_mode_constraints.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 531 "abstract_mode_constraints.m"
            case (MR_Integer) 0:
#line 532 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__ValString_17 = (MR_String) "no";
#line 531 "abstract_mode_constraints.m"
              break;
#line 531 "abstract_mode_constraints.m"
            case (MR_Integer) 1:
#line 531 "abstract_mode_constraints.m"
              check_hlds__abstract_mode_constraints__ValString_17 = (MR_String) "yes";
#line 531 "abstract_mode_constraints.m"
              break;
#line 531 "abstract_mode_constraints.m"
          }
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
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 477 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_75_75, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_76_76));
#line 477 "abstract_mode_constraints.m"
          }
#line 477 "abstract_mode_constraints.m"
          {
#line 477 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_73_73, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_75_75));
#line 477 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "abstract_mode_constraints.m"
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
        break;
#line 472 "abstract_mode_constraints.m"
      case (MR_Integer) 1:
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
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 483 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_65_65, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_66_66));
#line 483 "abstract_mode_constraints.m"
          }
#line 483 "abstract_mode_constraints.m"
          {
#line 483 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_63_63, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_65_65));
#line 483 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "abstract_mode_constraints.m"
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
        break;
#line 472 "abstract_mode_constraints.m"
      case (MR_Integer) 2:
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
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 490 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_58_58, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_59_59));
#line 490 "abstract_mode_constraints.m"
          }
#line 490 "abstract_mode_constraints.m"
          {
#line 490 "abstract_mode_constraints.m"
            check_hlds__abstract_mode_constraints__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_56_56, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__V_58_58));
#line 490 "abstract_mode_constraints.m"
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "abstract_mode_constraints.m"
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
        break;
#line 472 "abstract_mode_constraints.m"
      case (MR_Integer) 3:
#line 472 "abstract_mode_constraints.m"
#line 472 "abstract_mode_constraints.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)))) {
#line 472 "abstract_mode_constraints.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 472 "abstract_mode_constraints.m"
          case (MR_Integer) 0:
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
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
            break;
#line 472 "abstract_mode_constraints.m"
          case (MR_Integer) 1:
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
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
            break;
#line 472 "abstract_mode_constraints.m"
          case (MR_Integer) 2:
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
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
            break;
#line 472 "abstract_mode_constraints.m"
        }
#line 472 "abstract_mode_constraints.m"
        break;
#line 472 "abstract_mode_constraints.m"
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
#line 444 "abstract_mode_constraints.m"
    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) {
#line 444 "abstract_mode_constraints.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 444 "abstract_mode_constraints.m"
      case (MR_Integer) 0:
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
        break;
#line 444 "abstract_mode_constraints.m"
      case (MR_Integer) 1:
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
        break;
#line 444 "abstract_mode_constraints.m"
      case (MR_Integer) 2:
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
        break;
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

#line 375 "abstract_mode_constraints.m"
    {
#line 375 "abstract_mode_constraints.m"
      check_hlds__abstract_mode_constraints__HeadVar__3_3 = mercury__multi_map__lookup_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, check_hlds__abstract_mode_constraints__V_6_6, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)));
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
      mercury__multi_map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15, check_hlds__abstract_mode_constraints__V_9_9, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)), &check_hlds__abstract_mode_constraints__ThisProcConstraints_7);
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
      mercury__multi_map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24, check_hlds__abstract_mode_constraints__V_18_18, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)), &check_hlds__abstract_mode_constraints__ThisProcConstraints_16);
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

#line 351 "abstract_mode_constraints.m"
    {
#line 351 "abstract_mode_constraints.m"
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
      check_hlds__abstract_mode_constraints__V_2_2 = mercury__multi_map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0);
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
#line 555 "abstract_mode_constraints.m"
    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) {
#line 555 "abstract_mode_constraints.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 555 "abstract_mode_constraints.m"
      case (MR_Integer) 0:
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
        break;
#line 555 "abstract_mode_constraints.m"
      case (MR_Integer) 1:
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
#line 555 "abstract_mode_constraints.m"
        break;
#line 555 "abstract_mode_constraints.m"
      case (MR_Integer) 2:
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
        break;
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
