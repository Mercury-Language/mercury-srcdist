/*
** Automatically generated from `build_mode_constraints.m'
** by the Mercury compiler,
** version DEV
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


/* :- module check_hlds.build_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__build_mode_constraints__init
ENDINIT
*/

#include "check_hlds.build_mode_constraints.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_desc.mih"
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




#line 144 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 150 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 153 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 159 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "check_hlds.build_mode_constraints.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 165 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 171 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 174 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;

#line 177 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 180 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 186 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 189 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 192 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 198 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0[2];

#line 201 "check_hlds.build_mode_constraints.c"
static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0[2];

#line 204 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0;

#line 207 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0[1];

#line 210 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0[1];

#line 213 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0[1];

#line 216 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0[1];

#line 219 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0[2];

#line 222 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0;

#line 225 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0[1];

#line 228 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0[1];

#line 231 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0[1];

#line 234 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0[1];

#line 237 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0[2];

#line 240 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0;

#line 243 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0[1];

#line 246 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0[1];

#line 249 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0[1];

#line 252 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0[1];

#line 255 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 258 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 261 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_var_info_0_0[2];

#line 264 "check_hlds.build_mode_constraints.c"
static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_mc_var_info_0_0[2];

#line 267 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0;

#line 270 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0[1];

#line 273 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0[1];

#line 276 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0[1];

#line 279 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0[1];

#line 282 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 285 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____args_0_0_10001(
#line 288 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 290 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 293 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____args_0_0_10001(
#line 296 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 298 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 300 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 303 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0_10001(
#line 306 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 308 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 311 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0_10001(
#line 314 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 316 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 318 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 321 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0_10001(
#line 324 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 326 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 329 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0_10001(
#line 332 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 334 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 336 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 339 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0_10001(
#line 342 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 344 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 347 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0_10001(
#line 350 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 352 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 354 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 357 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0_10001(
#line 360 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 362 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 365 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0_10001(
#line 368 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 370 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 372 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 375 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_info_0_0_10001(
#line 378 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 380 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 383 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_info_0_0_10001(
#line 386 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 388 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 390 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 393 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_map_0_0_10001(
#line 396 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 398 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 401 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_map_0_0_10001(
#line 404 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 406 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 408 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 411 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mode_constraints_0_0_10001(
#line 414 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 416 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 419 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mode_constraints_0_0_10001(
#line 422 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 424 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 426 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 429 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____nonlocals_0_0_10001(
#line 432 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 434 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 437 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____nonlocals_0_0_10001(
#line 440 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 442 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 444 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 943 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVarSet_7,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_8,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarAtConjuncts_10,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 943 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_13);

#line 991 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0_1(
#line 991 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 991 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 991 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 991 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 991 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 1082 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0(
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_10,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__SubIds_13,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_29,
#line 1082 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__2_30,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_31,
#line 1082 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__4_32);

#line 1010 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_8,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_11,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_22,
#line 1010 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__2_23,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_24,
#line 1010 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__4_25);

#line 794 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_f_0(
#line 794 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_35,
#line 794 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_36);

#line 577 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__577__1_2_f_0(
#line 577 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_204,
#line 577 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_205);

#line 629 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_f_0(
#line 629 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_185,
#line 629 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_186,
#line 629 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_187);

#line 611 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_p_0(
#line 611 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ThenNonlocals_115,
#line 611 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_390);

#line 609 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__609__1_2_p_0(
#line 609 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CondNonlocals_114,
#line 609 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_387);

#line 541 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__541__1_2_f_0(
#line 541 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_359,
#line 541 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_360);

#line 689 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_f_0(
#line 689 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_18,
#line 689 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_28);

#line 299 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__299__1_1_f_0(
#line 299 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_88);

#line 650 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1(
#line 650 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__TypeInfo_for_T_9,
#line 650 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 650 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2);

#line 235 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0(
#line 235 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3);

#line 235 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0(
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2);

#line 210 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0(
#line 210 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3);

#line 210 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0(
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2);

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_2(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 1080 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_1(
#line 1080 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1080 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1080 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1080 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1080 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 1072 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_10,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_12,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__SubIds_13,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Nonlocals_14,
#line 1072 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__NonlocalsAtId_15,
#line 1072 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__NonlocalsAtSubIds_16,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22,
#line 1072 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23);

#line 1053 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_7,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_8,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_9,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_10,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVars0_11,
#line 1053 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__MCVars_12);

#line 1044 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_f_0(
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_6,
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_7,
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_8,
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_9);

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 1003 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_8,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVars_10,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_11,
#line 1003 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__MCVars_12,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
#line 1003 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_17);

#line 967 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_8,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_10,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_11,
#line 967 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__MCVar_12,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_18,
#line 967 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_19);

#line 953 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0(void);

#line 943 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_p_0(
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVarSet_7,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_8,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints___ProgVar_9,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarAtConjuncts_10,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 943 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_13);

#line 915 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_p_0(
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_11,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_12,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_13,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_14,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_15,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarAtConjuncts_16,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_20,
#line 915 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_21,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_22,
#line 915 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_23);

#line 891 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_p_0(
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_7,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_8,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_9,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_10,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_ConjunctProductionMap_0_13,
#line 891 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_ConjunctProductionMap_14);

#line 873 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0_1(
#line 873 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 873 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 873 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 873 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 851 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0(
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_7,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_8,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Nonlocals_9,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__4_4,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_0_19,
#line 851 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_20);

#line 816 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__single_mode_constraints_3_f_0(
#line 816 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 816 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVar_6,
#line 816 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Mode_7);

#line 809 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0_1(
#line 809 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 809 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 809 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 804 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(
#line 804 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 804 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ConstraintVars_6,
#line 804 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ArgModes_7);

#line 796 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_3(
#line 796 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 796 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 796 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 796 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 794 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_2(
#line 794 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 794 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 794 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 779 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_12,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_13,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_14,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallerPredId_15,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallArgs_16,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CalleePredId_17,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CalleeHeadVars_18,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_26,
#line 779 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_27,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_28,
#line 779 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_29);

#line 759 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_3(
#line 759 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 759 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 759 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 759 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 756 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_2(
#line 756 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 756 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 746 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_12,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_13,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallContext_14,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallingPred_15,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Decls_16,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_17,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallArgs_18,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_24,
#line 746 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_25,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_26,
#line 746 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_27);

#line 580 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22(
#line 580 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 580 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 580 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 580 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 577 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_21(
#line 577 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 577 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 577 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 456 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_20(
#line 456 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 456 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 456 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2);

#line 561 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19(
#line 561 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 561 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 561 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 561 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 552 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18(
#line 552 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 552 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 552 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 552 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 550 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17(
#line 550 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 550 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 550 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 550 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 642 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16(
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 642 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 635 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15(
#line 635 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 635 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 635 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 635 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 631 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14(
#line 631 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 631 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 631 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 631 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 629 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_13(
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3);

#line 611 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12(
#line 611 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 611 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 609 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11(
#line 609 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 609 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 543 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10(
#line 543 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 543 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 543 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 543 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 541 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_9(
#line 541 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 541 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 541 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 535 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8(
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 535 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3,
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_4,
#line 535 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_5);

#line 533 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_7(
#line 533 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 533 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 532 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_6(
#line 532 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 532 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 430 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5(
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 430 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_5,
#line 430 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_6);

#line 427 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4(
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 427 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 424 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3(
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 424 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3,
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_4,
#line 424 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_5);

#line 420 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2(
#line 420 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 420 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 420 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 420 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 647 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_1(
#line 647 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 647 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 408 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_12,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_13,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_14,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalExpr_15,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_16,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_17,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Nonlocals_18,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148,
#line 408 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150,
#line 408 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);

#line 378 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_9,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_10,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Goal_12,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22,
#line 378 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_24,
#line 378 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25);

#line 270 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_p_0(
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_6,
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_7,
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar_8,
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_11,
#line 270 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_12);

#line 258 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0_1(
#line 258 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 258 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 258 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 258 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 250 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0(
#line 250 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 250 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_6,
#line 250 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_12,
#line 250 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_13);

#line 716 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_2(
#line 716 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 716 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 716 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 716 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4);

#line 695 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_3(
#line 695 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 695 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 695 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2);

#line 689 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_2(
#line 689 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 689 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 690 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_1(
#line 690 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 690 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 359 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_2(
#line 359 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 359 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 359 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 359 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 358 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_1(
#line 358 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 358 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 300 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_5(
#line 300 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 300 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 300 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 300 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 299 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_4(
#line 299 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 299 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1);

#line 313 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_3(
#line 313 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 313 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 313 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 313 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 303 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_2(
#line 303 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 303 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 303 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 303 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 291 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_1(
#line 291 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 291 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 291 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 291 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);

#line 240 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0_1(
#line 240 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 240 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 240 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 240 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_2[12][3];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_3[4][7];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_4[6][8];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_5[7][5];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_6[3][6];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_7[3][10];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_8[6][9];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_9[1][11];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_10[1][13];




static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[0])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[1])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[3])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[4])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[1])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[2])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[6])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_3[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_5[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__build_mode_constraints____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_7[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_8[6][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_10[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1974 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1982 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1990 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1999 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2007 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2015 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2023 "check_hlds.build_mode_constraints.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2033 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2041 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2049 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2057 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
  }
};

#line 2065 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2073 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2081 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2089 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2098 "check_hlds.build_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 2106 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2114 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____args_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____args_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "args",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2131 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2140 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2146 "check_hlds.build_mode_constraints.c"
static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0[2] = {
  (MR_String) "locals_positions",
  (MR_String) "nonlocals_positions"
};

#line 2152 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0 = {
  (MR_String) "conj_constraints_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0,
  NULL,
  NULL
};

#line 2167 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0
};

#line 2172 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0
  }
};

#line 2181 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0
};

#line 2186 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0[1] = {
  (MR_Integer) 0
};

#line 2191 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "conj_constraints_info",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0
};

#line 2208 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "conjunct_production_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2225 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 2231 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0 = {
  (MR_String) "in",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0,
  NULL,
  NULL,
  NULL
};

#line 2246 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0
};

#line 2251 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0
  }
};

#line 2260 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0
};

#line 2265 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0[1] = {
  (MR_Integer) 0
};

#line 2270 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_prog_var",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0
};

#line 2287 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 2293 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0 = {
  (MR_String) "at",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0,
  NULL,
  NULL,
  NULL
};

#line 2308 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0
};

#line 2313 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0
  }
};

#line 2322 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0
};

#line 2327 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0[1] = {
  (MR_Integer) 0
};

#line 2332 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_rep_var",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0
};

#line 2349 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2357 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2366 "check_hlds.build_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2372 "check_hlds.build_mode_constraints.c"
static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_mc_var_info_0_0[2] = {
  (MR_String) "mc_varset",
  (MR_String) "rep_var_map"
};

#line 2378 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0 = {
  (MR_String) "mc_var_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_var_info_0_0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_mc_var_info_0_0,
  NULL,
  NULL
};

#line 2393 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0
};

#line 2398 "check_hlds.build_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0
  }
};

#line 2407 "check_hlds.build_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0
};

#line 2412 "check_hlds.build_mode_constraints.c"
static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2417 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_var_info_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_var_info_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_var_info",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0
};

#line 2434 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_var_map_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2451 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mode_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mode_constraints_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mode_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2468 "check_hlds.build_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2476 "check_hlds.build_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____nonlocals_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____nonlocals_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "nonlocals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2493 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____args_0_0_10001(
#line 2496 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2498 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2500 "check_hlds.build_mode_constraints.c"
{
#line 2502 "check_hlds.build_mode_constraints.c"
  {
#line 2504 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2507 "check_hlds.build_mode_constraints.c"
    {
#line 2509 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____args_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2512 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2514 "check_hlds.build_mode_constraints.c"
  }
#line 2516 "check_hlds.build_mode_constraints.c"
}

#line 2519 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____args_0_0_10001(
#line 2522 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2524 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2526 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2528 "check_hlds.build_mode_constraints.c"
{
#line 2530 "check_hlds.build_mode_constraints.c"
  {
#line 2532 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2535 "check_hlds.build_mode_constraints.c"
    {
#line 2537 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____args_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2540 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2542 "check_hlds.build_mode_constraints.c"
  }
#line 2544 "check_hlds.build_mode_constraints.c"
}

#line 2547 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0_10001(
#line 2550 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2552 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2554 "check_hlds.build_mode_constraints.c"
{
#line 2556 "check_hlds.build_mode_constraints.c"
  {
#line 2558 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2561 "check_hlds.build_mode_constraints.c"
    {
#line 2563 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2566 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2568 "check_hlds.build_mode_constraints.c"
  }
#line 2570 "check_hlds.build_mode_constraints.c"
}

#line 2573 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0_10001(
#line 2576 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2578 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2580 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2582 "check_hlds.build_mode_constraints.c"
{
#line 2584 "check_hlds.build_mode_constraints.c"
  {
#line 2586 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2589 "check_hlds.build_mode_constraints.c"
    {
#line 2591 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2594 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2596 "check_hlds.build_mode_constraints.c"
  }
#line 2598 "check_hlds.build_mode_constraints.c"
}

#line 2601 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0_10001(
#line 2604 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2606 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2608 "check_hlds.build_mode_constraints.c"
{
#line 2610 "check_hlds.build_mode_constraints.c"
  {
#line 2612 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2615 "check_hlds.build_mode_constraints.c"
    {
#line 2617 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2620 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2622 "check_hlds.build_mode_constraints.c"
  }
#line 2624 "check_hlds.build_mode_constraints.c"
}

#line 2627 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0_10001(
#line 2630 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2632 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2634 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2636 "check_hlds.build_mode_constraints.c"
{
#line 2638 "check_hlds.build_mode_constraints.c"
  {
#line 2640 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2643 "check_hlds.build_mode_constraints.c"
    {
#line 2645 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2648 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2650 "check_hlds.build_mode_constraints.c"
  }
#line 2652 "check_hlds.build_mode_constraints.c"
}

#line 2655 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0_10001(
#line 2658 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2660 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2662 "check_hlds.build_mode_constraints.c"
{
#line 2664 "check_hlds.build_mode_constraints.c"
  {
#line 2666 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2669 "check_hlds.build_mode_constraints.c"
    {
#line 2671 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2674 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2676 "check_hlds.build_mode_constraints.c"
  }
#line 2678 "check_hlds.build_mode_constraints.c"
}

#line 2681 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0_10001(
#line 2684 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2686 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2688 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2690 "check_hlds.build_mode_constraints.c"
{
#line 2692 "check_hlds.build_mode_constraints.c"
  {
#line 2694 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2697 "check_hlds.build_mode_constraints.c"
    {
#line 2699 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2702 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2704 "check_hlds.build_mode_constraints.c"
  }
#line 2706 "check_hlds.build_mode_constraints.c"
}

#line 2709 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0_10001(
#line 2712 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2714 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2716 "check_hlds.build_mode_constraints.c"
{
#line 2718 "check_hlds.build_mode_constraints.c"
  {
#line 2720 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2723 "check_hlds.build_mode_constraints.c"
    {
#line 2725 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2728 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2730 "check_hlds.build_mode_constraints.c"
  }
#line 2732 "check_hlds.build_mode_constraints.c"
}

#line 2735 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0_10001(
#line 2738 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2740 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2742 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2744 "check_hlds.build_mode_constraints.c"
{
#line 2746 "check_hlds.build_mode_constraints.c"
  {
#line 2748 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2751 "check_hlds.build_mode_constraints.c"
    {
#line 2753 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2756 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2758 "check_hlds.build_mode_constraints.c"
  }
#line 2760 "check_hlds.build_mode_constraints.c"
}

#line 2763 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_info_0_0_10001(
#line 2766 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2768 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2770 "check_hlds.build_mode_constraints.c"
{
#line 2772 "check_hlds.build_mode_constraints.c"
  {
#line 2774 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2777 "check_hlds.build_mode_constraints.c"
    {
#line 2779 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____mc_var_info_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2782 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2784 "check_hlds.build_mode_constraints.c"
  }
#line 2786 "check_hlds.build_mode_constraints.c"
}

#line 2789 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_info_0_0_10001(
#line 2792 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2794 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2796 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2798 "check_hlds.build_mode_constraints.c"
{
#line 2800 "check_hlds.build_mode_constraints.c"
  {
#line 2802 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2805 "check_hlds.build_mode_constraints.c"
    {
#line 2807 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____mc_var_info_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2810 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2812 "check_hlds.build_mode_constraints.c"
  }
#line 2814 "check_hlds.build_mode_constraints.c"
}

#line 2817 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_map_0_0_10001(
#line 2820 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2822 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2824 "check_hlds.build_mode_constraints.c"
{
#line 2826 "check_hlds.build_mode_constraints.c"
  {
#line 2828 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2831 "check_hlds.build_mode_constraints.c"
    {
#line 2833 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____mc_var_map_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2836 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2838 "check_hlds.build_mode_constraints.c"
  }
#line 2840 "check_hlds.build_mode_constraints.c"
}

#line 2843 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_map_0_0_10001(
#line 2846 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2848 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2850 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2852 "check_hlds.build_mode_constraints.c"
{
#line 2854 "check_hlds.build_mode_constraints.c"
  {
#line 2856 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2859 "check_hlds.build_mode_constraints.c"
    {
#line 2861 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____mc_var_map_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2864 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2866 "check_hlds.build_mode_constraints.c"
  }
#line 2868 "check_hlds.build_mode_constraints.c"
}

#line 2871 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mode_constraints_0_0_10001(
#line 2874 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2876 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2878 "check_hlds.build_mode_constraints.c"
{
#line 2880 "check_hlds.build_mode_constraints.c"
  {
#line 2882 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2885 "check_hlds.build_mode_constraints.c"
    {
#line 2887 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____mode_constraints_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2890 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2892 "check_hlds.build_mode_constraints.c"
  }
#line 2894 "check_hlds.build_mode_constraints.c"
}

#line 2897 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mode_constraints_0_0_10001(
#line 2900 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2902 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2904 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2906 "check_hlds.build_mode_constraints.c"
{
#line 2908 "check_hlds.build_mode_constraints.c"
  {
#line 2910 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2913 "check_hlds.build_mode_constraints.c"
    {
#line 2915 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____mode_constraints_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2918 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2920 "check_hlds.build_mode_constraints.c"
  }
#line 2922 "check_hlds.build_mode_constraints.c"
}

#line 2925 "check_hlds.build_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____nonlocals_0_0_10001(
#line 2928 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2930 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 2932 "check_hlds.build_mode_constraints.c"
{
#line 2934 "check_hlds.build_mode_constraints.c"
  {
#line 2936 "check_hlds.build_mode_constraints.c"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 2939 "check_hlds.build_mode_constraints.c"
    {
#line 2941 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____nonlocals_0_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 2944 "check_hlds.build_mode_constraints.c"
    return check_hlds__build_mode_constraints__succeeded;
#line 2946 "check_hlds.build_mode_constraints.c"
  }
#line 2948 "check_hlds.build_mode_constraints.c"
}

#line 2951 "check_hlds.build_mode_constraints.c"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____nonlocals_0_0_10001(
#line 2954 "check_hlds.build_mode_constraints.c"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_1,
#line 2956 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 2958 "check_hlds.build_mode_constraints.c"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 2960 "check_hlds.build_mode_constraints.c"
{
#line 2962 "check_hlds.build_mode_constraints.c"
  {
#line 2964 "check_hlds.build_mode_constraints.c"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__1_1;

#line 2967 "check_hlds.build_mode_constraints.c"
    {
#line 2969 "check_hlds.build_mode_constraints.c"
      check_hlds__build_mode_constraints____Compare____nonlocals_0_0(&check_hlds__build_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 2972 "check_hlds.build_mode_constraints.c"
    *check_hlds__build_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__1_1));
#line 2974 "check_hlds.build_mode_constraints.c"
  }
#line 2976 "check_hlds.build_mode_constraints.c"
}

#line 943 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVarSet_7,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_8,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarAtConjuncts_10,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 943 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 943 "build_mode_constraints.m"
{
#line 949 "build_mode_constraints.m"
  {
#line 949 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 949 "build_mode_constraints.m"
    {
#line 949 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__exactly_one_5_p_0(check_hlds__build_mode_constraints__MCVarSet_7, check_hlds__build_mode_constraints__Context_8, check_hlds__build_mode_constraints__ProgVarAtConjuncts_10, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_13);
    }
#line 949 "build_mode_constraints.m"
  }
#line 943 "build_mode_constraints.m"
}

#line 991 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0_1(
#line 991 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 991 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 991 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 991 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 991 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 991 "build_mode_constraints.m"
{
#line 991 "build_mode_constraints.m"
  {
#line 991 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 991 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_MCVar_12;
#line 991 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_19;

#line 991 "build_mode_constraints.m"
    {
#line 991 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv1_MCVar_12, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_19);
    }
#line 991 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_MCVar_12));
#line 991 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_19));
#line 991 "build_mode_constraints.m"
  }
#line 991 "build_mode_constraints.m"
}

#line 1082 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0(
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_10,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__SubIds_13,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_29,
#line 1082 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__2_30,
#line 1082 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_31,
#line 1082 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__4_32)
#line 1082 "build_mode_constraints.m"
{
#line 990 "build_mode_constraints.m"
  {
#line 990 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 990 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_50_50;
#line 991 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv2_LambdaHeadVar__4_32;

#line 991 "build_mode_constraints.m"
    {
#line 991 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 991 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_50_50, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[2]));
#line 991 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_50_50, 1) = ((MR_Box) (check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0_1));
#line 991 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 991 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_50_50, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_10));
#line 991 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_50_50, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_11));
#line 991 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_50_50, 5) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__1_29));
#line 991 "build_mode_constraints.m"
    }
#line 991 "build_mode_constraints.m"
    {
#line 991 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_50_50, check_hlds__build_mode_constraints__SubIds_13, check_hlds__build_mode_constraints__LambdaHeadVar__2_30, ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__3_31)), &check_hlds__build_mode_constraints__conv2_LambdaHeadVar__4_32);
    }
#line 991 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__LambdaHeadVar__4_32 = ((MR_Word) check_hlds__build_mode_constraints__conv2_LambdaHeadVar__4_32);
#line 990 "build_mode_constraints.m"
  }
#line 1082 "build_mode_constraints.m"
}

#line 1010 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_8,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_11,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_22,
#line 1010 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__2_23,
#line 1010 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_24,
#line 1010 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__LambdaHeadVar__4_25)
#line 1010 "build_mode_constraints.m"
{
#line 1010 "build_mode_constraints.m"
  {
#line 1010 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 1010 "build_mode_constraints.m"
    {
#line 1010 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_8, check_hlds__build_mode_constraints__PredId_9, check_hlds__build_mode_constraints__LambdaHeadVar__1_22, check_hlds__build_mode_constraints__GoalId_11, check_hlds__build_mode_constraints__LambdaHeadVar__2_23, check_hlds__build_mode_constraints__LambdaHeadVar__3_24, check_hlds__build_mode_constraints__LambdaHeadVar__4_25);
    }
#line 1010 "build_mode_constraints.m"
  }
#line 1010 "build_mode_constraints.m"
}

#line 794 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_f_0(
#line 794 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_35,
#line 794 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_36)
#line 794 "build_mode_constraints.m"
{
#line 794 "build_mode_constraints.m"
  {
#line 794 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 794 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_37;
#line 794 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_38_38;

#line 794 "build_mode_constraints.m"
    {
#line 794 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_38_38, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__2_36));
#line 794 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "build_mode_constraints.m"
    }
#line 794 "build_mode_constraints.m"
    {
#line 794 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__LambdaHeadVar__3_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__LambdaHeadVar__3_37, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__1_35));
#line 794 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__LambdaHeadVar__3_37, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_38_38));
#line 794 "build_mode_constraints.m"
    }
#line 794 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__LambdaHeadVar__3_37;
#line 794 "build_mode_constraints.m"
  }
#line 794 "build_mode_constraints.m"
}

#line 577 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__577__1_2_f_0(
#line 577 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_204,
#line 577 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_205)
#line 577 "build_mode_constraints.m"
{
#line 577 "build_mode_constraints.m"
  {
#line 577 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 577 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_206;
#line 577 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_207_207;

#line 578 "build_mode_constraints.m"
    {
#line 578 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_207_207, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__2_205));
#line 578 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "build_mode_constraints.m"
    }
#line 578 "build_mode_constraints.m"
    {
#line 578 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__LambdaHeadVar__3_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__LambdaHeadVar__3_206, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__1_204));
#line 578 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__LambdaHeadVar__3_206, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_207_207));
#line 578 "build_mode_constraints.m"
    }
#line 577 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__LambdaHeadVar__3_206;
#line 577 "build_mode_constraints.m"
  }
#line 577 "build_mode_constraints.m"
}

#line 629 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_f_0(
#line 629 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_185,
#line 629 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_186,
#line 629 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__3_187)
#line 629 "build_mode_constraints.m"
{
#line 629 "build_mode_constraints.m"
  {
#line 629 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 629 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__4_188;
#line 629 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_189_189;
#line 629 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_190_190;

#line 629 "build_mode_constraints.m"
    {
#line 629 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_190_190, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__3_187));
#line 629 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "build_mode_constraints.m"
    }
#line 629 "build_mode_constraints.m"
    {
#line 629 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_189_189, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__2_186));
#line 629 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_189_189, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_190_190));
#line 629 "build_mode_constraints.m"
    }
#line 629 "build_mode_constraints.m"
    {
#line 629 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__LambdaHeadVar__4_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__LambdaHeadVar__4_188, 0) = ((MR_Box) (check_hlds__build_mode_constraints__LambdaHeadVar__1_185));
#line 629 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__LambdaHeadVar__4_188, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_189_189));
#line 629 "build_mode_constraints.m"
    }
#line 629 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__LambdaHeadVar__4_188;
#line 629 "build_mode_constraints.m"
  }
#line 629 "build_mode_constraints.m"
}

#line 611 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_p_0(
#line 611 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ThenNonlocals_115,
#line 611 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_390)
#line 611 "build_mode_constraints.m"
{
#line 611 "build_mode_constraints.m"
  {
#line 611 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 611 "build_mode_constraints.m"
    {
#line 611 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__ThenNonlocals_115, check_hlds__build_mode_constraints__HeadVar__2_390);
    }
#line 611 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 611 "build_mode_constraints.m"
  }
#line 611 "build_mode_constraints.m"
}

#line 609 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__609__1_2_p_0(
#line 609 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CondNonlocals_114,
#line 609 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_387)
#line 609 "build_mode_constraints.m"
{
#line 609 "build_mode_constraints.m"
  {
#line 609 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 609 "build_mode_constraints.m"
    {
#line 609 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__CondNonlocals_114, check_hlds__build_mode_constraints__HeadVar__2_387);
    }
#line 609 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 609 "build_mode_constraints.m"
  }
#line 609 "build_mode_constraints.m"
}

#line 541 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__541__1_2_f_0(
#line 541 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_359,
#line 541 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_360)
#line 541 "build_mode_constraints.m"
{
#line 541 "build_mode_constraints.m"
  {
#line 541 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 541 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVar__3_361;

#line 541 "build_mode_constraints.m"
    {
#line 541 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__HeadVar__3_361 = mercury__list__cons_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], ((MR_Box) (check_hlds__build_mode_constraints__HeadVar__1_359)), check_hlds__build_mode_constraints__HeadVar__2_360);
    }
#line 541 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__HeadVar__3_361;
#line 541 "build_mode_constraints.m"
  }
#line 541 "build_mode_constraints.m"
}

#line 689 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_f_0(
#line 689 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_18,
#line 689 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_28)
#line 689 "build_mode_constraints.m"
{
#line 689 "build_mode_constraints.m"
  {
#line 689 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 689 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVar__3_29;

#line 689 "build_mode_constraints.m"
    {
#line 689 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__HeadVar__3_29 = mercury__list__map_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__HeadVar__1_18, check_hlds__build_mode_constraints__HeadVar__2_28);
    }
#line 689 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__HeadVar__3_29;
#line 689 "build_mode_constraints.m"
  }
#line 689 "build_mode_constraints.m"
}

#line 299 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__299__1_1_f_0(
#line 299 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__1_88)
#line 299 "build_mode_constraints.m"
{
#line 299 "build_mode_constraints.m"
  {
#line 299 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 299 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__LambdaHeadVar__2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__LambdaHeadVar__1_88, (MR_Integer) 2)));
#line 299 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__LambdaHeadVar__1_88, (MR_Integer) 0)));
#line 299 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__LambdaHeadVar__1_88, (MR_Integer) 1)));

#line 299 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__LambdaHeadVar__2_89;
#line 299 "build_mode_constraints.m"
  }
#line 299 "build_mode_constraints.m"
}

#line 650 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1(
#line 650 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__TypeInfo_for_T_9,
#line 650 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 650 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 650 "build_mode_constraints.m"
{
#line 650 "build_mode_constraints.m"
  {
#line 650 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__build_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 650 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__V_6_6;

#line 650 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 650 "build_mode_constraints.m"
      {
#line 650 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__V_6_6 = (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0));
#line 650 "build_mode_constraints.m"
        (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 0)) = check_hlds__build_mode_constraints__V_6_6;
#line 650 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = MR_TRUE;
#line 650 "build_mode_constraints.m"
      }
#line 650 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 650 "build_mode_constraints.m"
  }
#line 650 "build_mode_constraints.m"
}

#line 75 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____nonlocals_0_0(
#line 75 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 75 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 75 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 75 "build_mode_constraints.m"
{
#line 75 "build_mode_constraints.m"
  {
#line 75 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 75 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_4 = check_hlds__build_mode_constraints__HeadVar__2_2;
#line 75 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_5 = check_hlds__build_mode_constraints__HeadVar__3_3;

#line 75 "build_mode_constraints.m"
    {
#line 75 "build_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[7], check_hlds__build_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_5)));
    }
#line 75 "build_mode_constraints.m"
  }
#line 75 "build_mode_constraints.m"
}

#line 75 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____nonlocals_0_0(
#line 75 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 75 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 75 "build_mode_constraints.m"
{
#line 75 "build_mode_constraints.m"
  {
#line 75 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 75 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_3 = check_hlds__build_mode_constraints__HeadVar__1_1;
#line 75 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_4 = check_hlds__build_mode_constraints__HeadVar__2_2;

#line 75 "build_mode_constraints.m"
    {
#line 75 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[7], ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_4)));
    }
#line 75 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 75 "build_mode_constraints.m"
  }
#line 75 "build_mode_constraints.m"
}

#line 42 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____mode_constraints_0_0(
#line 42 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 42 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 42 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 42 "build_mode_constraints.m"
{
#line 42 "build_mode_constraints.m"
  {
#line 42 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 42 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_4 = check_hlds__build_mode_constraints__HeadVar__2_2;
#line 42 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_5 = check_hlds__build_mode_constraints__HeadVar__3_3;

#line 42 "build_mode_constraints.m"
    {
#line 42 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(check_hlds__build_mode_constraints__HeadVar__1_1, check_hlds__build_mode_constraints__Cast_HeadVar1_4, check_hlds__build_mode_constraints__Cast_HeadVar2_5);
    }
#line 42 "build_mode_constraints.m"
  }
#line 42 "build_mode_constraints.m"
}

#line 42 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mode_constraints_0_0(
#line 42 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 42 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 42 "build_mode_constraints.m"
{
#line 42 "build_mode_constraints.m"
  {
#line 42 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 42 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_3 = check_hlds__build_mode_constraints__HeadVar__1_1;
#line 42 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_4 = check_hlds__build_mode_constraints__HeadVar__2_2;

#line 42 "build_mode_constraints.m"
    {
#line 42 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(check_hlds__build_mode_constraints__Cast_HeadVar1_3, check_hlds__build_mode_constraints__Cast_HeadVar2_4);
    }
#line 42 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 42 "build_mode_constraints.m"
  }
#line 42 "build_mode_constraints.m"
}

#line 67 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_map_0_0(
#line 67 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 67 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 67 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 67 "build_mode_constraints.m"
{
#line 67 "build_mode_constraints.m"
  {
#line 67 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 67 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_4 = check_hlds__build_mode_constraints__HeadVar__2_2;
#line 67 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_5 = check_hlds__build_mode_constraints__HeadVar__3_3;

#line 67 "build_mode_constraints.m"
    {
#line 67 "build_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1], check_hlds__build_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_5)));
    }
#line 67 "build_mode_constraints.m"
  }
#line 67 "build_mode_constraints.m"
}

#line 67 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_map_0_0(
#line 67 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 67 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 67 "build_mode_constraints.m"
{
#line 67 "build_mode_constraints.m"
  {
#line 67 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 67 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_3 = check_hlds__build_mode_constraints__HeadVar__1_1;
#line 67 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_4 = check_hlds__build_mode_constraints__HeadVar__2_2;

#line 67 "build_mode_constraints.m"
    {
#line 67 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1], ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_4)));
    }
#line 67 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 67 "build_mode_constraints.m"
  }
#line 67 "build_mode_constraints.m"
}

#line 48 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_info_0_0(
#line 48 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 48 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 48 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 48 "build_mode_constraints.m"
{
#line 48 "build_mode_constraints.m"
  {
#line 48 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 48 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_9 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;
#line 48 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_10 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__3_3;

#line 48 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_9 == check_hlds__build_mode_constraints__CastY_10);
#line 48 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 3662 "check_hlds.build_mode_constraints.c"
      *check_hlds__build_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "build_mode_constraints.m"
    else
#line 48 "build_mode_constraints.m"
      {
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_8_8;

#line 48 "build_mode_constraints.m"
        {
#line 48 "build_mode_constraints.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[6], &check_hlds__build_mode_constraints__V_8_8, ((MR_Box) (check_hlds__build_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__build_mode_constraints__V_6_6)));
        }
#line 3684 "check_hlds.build_mode_constraints.c"
        check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 48 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = !(check_hlds__build_mode_constraints__succeeded);
#line 48 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 48 "build_mode_constraints.m"
          *check_hlds__build_mode_constraints__HeadVar__1_1 = check_hlds__build_mode_constraints__V_8_8;
#line 48 "build_mode_constraints.m"
        else
#line 48 "build_mode_constraints.m"
          {
#line 48 "build_mode_constraints.m"
            {
#line 48 "build_mode_constraints.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1], check_hlds__build_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__build_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__build_mode_constraints__V_7_7)));
            }
#line 48 "build_mode_constraints.m"
          }
#line 48 "build_mode_constraints.m"
      }
#line 48 "build_mode_constraints.m"
  }
#line 48 "build_mode_constraints.m"
}

#line 48 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_info_0_0(
#line 48 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 48 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 48 "build_mode_constraints.m"
{
#line 48 "build_mode_constraints.m"
  {
#line 48 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 48 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_7 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__1_1;
#line 48 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_8 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;

#line 48 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_7 == check_hlds__build_mode_constraints__CastY_8);
#line 48 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 48 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = MR_TRUE;
#line 48 "build_mode_constraints.m"
    else
#line 48 "build_mode_constraints.m"
      {
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__TypeInfo_10_10;
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 3749 "check_hlds.build_mode_constraints.c"
        {
#line 3751 "check_hlds.build_mode_constraints.c"
          check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[6], ((MR_Box) (check_hlds__build_mode_constraints__V_3_3)), ((MR_Box) (check_hlds__build_mode_constraints__V_5_5)));
        }
#line 48 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 48 "build_mode_constraints.m"
          {
#line 3758 "check_hlds.build_mode_constraints.c"
            check_hlds__build_mode_constraints__TypeInfo_10_10 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1];
#line 3760 "check_hlds.build_mode_constraints.c"
            {
#line 3762 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__build_mode_constraints__TypeInfo_10_10, ((MR_Box) (check_hlds__build_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__build_mode_constraints__V_6_6)));
            }
#line 48 "build_mode_constraints.m"
          }
#line 48 "build_mode_constraints.m"
      }
#line 48 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 48 "build_mode_constraints.m"
  }
#line 48 "build_mode_constraints.m"
}

#line 89 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0(
#line 89 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 89 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 89 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 89 "build_mode_constraints.m"
{
#line 89 "build_mode_constraints.m"
  {
#line 89 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 89 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_9 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;
#line 89 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_10 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__3_3;

#line 89 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_9 == check_hlds__build_mode_constraints__CastY_10);
#line 89 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 3800 "check_hlds.build_mode_constraints.c"
      *check_hlds__build_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "build_mode_constraints.m"
    else
#line 89 "build_mode_constraints.m"
      {
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_8_8;

#line 89 "build_mode_constraints.m"
        {
#line 89 "build_mode_constraints.m"
          check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0(&check_hlds__build_mode_constraints__V_8_8, check_hlds__build_mode_constraints__V_4_4, check_hlds__build_mode_constraints__V_6_6);
        }
#line 3822 "check_hlds.build_mode_constraints.c"
        check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 89 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = !(check_hlds__build_mode_constraints__succeeded);
#line 89 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 89 "build_mode_constraints.m"
          *check_hlds__build_mode_constraints__HeadVar__1_1 = check_hlds__build_mode_constraints__V_8_8;
#line 89 "build_mode_constraints.m"
        else
#line 89 "build_mode_constraints.m"
          {
#line 89 "build_mode_constraints.m"
            MR_Integer check_hlds__build_mode_constraints__V_13_13 = (MR_Integer) check_hlds__build_mode_constraints__V_5_5;
#line 89 "build_mode_constraints.m"
            MR_Integer check_hlds__build_mode_constraints__V_14_14 = (MR_Integer) check_hlds__build_mode_constraints__V_7_7;

#line 89 "build_mode_constraints.m"
            {
#line 89 "build_mode_constraints.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__build_mode_constraints__HeadVar__1_1, check_hlds__build_mode_constraints__V_13_13, check_hlds__build_mode_constraints__V_14_14);
            }
#line 89 "build_mode_constraints.m"
          }
#line 89 "build_mode_constraints.m"
      }
#line 89 "build_mode_constraints.m"
  }
#line 89 "build_mode_constraints.m"
}

#line 89 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0(
#line 89 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 89 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 89 "build_mode_constraints.m"
{
#line 89 "build_mode_constraints.m"
  {
#line 89 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 89 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_7 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__1_1;
#line 89 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_8 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;

#line 89 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_7 == check_hlds__build_mode_constraints__CastY_8);
#line 89 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 89 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = MR_TRUE;
#line 89 "build_mode_constraints.m"
    else
#line 89 "build_mode_constraints.m"
      {
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "build_mode_constraints.m"
        MR_Integer check_hlds__build_mode_constraints__V_10_10;
#line 89 "build_mode_constraints.m"
        MR_Integer check_hlds__build_mode_constraints__V_11_11;

#line 3894 "check_hlds.build_mode_constraints.c"
        {
#line 3896 "check_hlds.build_mode_constraints.c"
          check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0(check_hlds__build_mode_constraints__V_3_3, check_hlds__build_mode_constraints__V_5_5);
        }
#line 89 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 89 "build_mode_constraints.m"
          {
#line 3903 "check_hlds.build_mode_constraints.c"
            check_hlds__build_mode_constraints__V_10_10 = (MR_Integer) check_hlds__build_mode_constraints__V_4_4;
#line 3905 "check_hlds.build_mode_constraints.c"
            check_hlds__build_mode_constraints__V_11_11 = (MR_Integer) check_hlds__build_mode_constraints__V_6_6;
#line 3907 "check_hlds.build_mode_constraints.c"
            check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_10_10 == check_hlds__build_mode_constraints__V_11_11);
#line 89 "build_mode_constraints.m"
          }
#line 89 "build_mode_constraints.m"
      }
#line 89 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 89 "build_mode_constraints.m"
  }
#line 89 "build_mode_constraints.m"
}

#line 81 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0(
#line 81 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 81 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 81 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 81 "build_mode_constraints.m"
{
#line 81 "build_mode_constraints.m"
  {
#line 81 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 81 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_9 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;
#line 81 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_10 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__3_3;

#line 81 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_9 == check_hlds__build_mode_constraints__CastY_10);
#line 81 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 3944 "check_hlds.build_mode_constraints.c"
      *check_hlds__build_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "build_mode_constraints.m"
    else
#line 81 "build_mode_constraints.m"
      {
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_8_8;

#line 81 "build_mode_constraints.m"
        {
#line 81 "build_mode_constraints.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], &check_hlds__build_mode_constraints__V_8_8, ((MR_Box) (check_hlds__build_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__build_mode_constraints__V_6_6)));
        }
#line 3966 "check_hlds.build_mode_constraints.c"
        check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 81 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = !(check_hlds__build_mode_constraints__succeeded);
#line 81 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 81 "build_mode_constraints.m"
          *check_hlds__build_mode_constraints__HeadVar__1_1 = check_hlds__build_mode_constraints__V_8_8;
#line 81 "build_mode_constraints.m"
        else
#line 81 "build_mode_constraints.m"
          {
#line 81 "build_mode_constraints.m"
            hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__build_mode_constraints__HeadVar__1_1, check_hlds__build_mode_constraints__V_5_5, check_hlds__build_mode_constraints__V_7_7);
          }
#line 81 "build_mode_constraints.m"
      }
#line 81 "build_mode_constraints.m"
  }
#line 81 "build_mode_constraints.m"
}

#line 81 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0(
#line 81 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 81 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 81 "build_mode_constraints.m"
{
#line 81 "build_mode_constraints.m"
  {
#line 81 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 81 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_7 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__1_1;
#line 81 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_8 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;

#line 81 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_7 == check_hlds__build_mode_constraints__CastY_8);
#line 81 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 81 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = MR_TRUE;
#line 81 "build_mode_constraints.m"
    else
#line 81 "build_mode_constraints.m"
      {
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 81 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 4025 "check_hlds.build_mode_constraints.c"
        {
#line 4027 "check_hlds.build_mode_constraints.c"
          check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], ((MR_Box) (check_hlds__build_mode_constraints__V_3_3)), ((MR_Box) (check_hlds__build_mode_constraints__V_5_5)));
        }
#line 81 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 4032 "check_hlds.build_mode_constraints.c"
          {
#line 4034 "check_hlds.build_mode_constraints.c"
            check_hlds__build_mode_constraints__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__build_mode_constraints__V_4_4, check_hlds__build_mode_constraints__V_6_6);
          }
#line 81 "build_mode_constraints.m"
      }
#line 81 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 81 "build_mode_constraints.m"
  }
#line 81 "build_mode_constraints.m"
}

#line 235 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0(
#line 235 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 235 "build_mode_constraints.m"
{
#line 235 "build_mode_constraints.m"
  {
#line 235 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 235 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_4 = check_hlds__build_mode_constraints__HeadVar__2_2;
#line 235 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_5 = check_hlds__build_mode_constraints__HeadVar__3_3;

#line 235 "build_mode_constraints.m"
    {
#line 235 "build_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], check_hlds__build_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_5)));
    }
#line 235 "build_mode_constraints.m"
  }
#line 235 "build_mode_constraints.m"
}

#line 235 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0(
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 235 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 235 "build_mode_constraints.m"
{
#line 235 "build_mode_constraints.m"
  {
#line 235 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 235 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_3 = check_hlds__build_mode_constraints__HeadVar__1_1;
#line 235 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_4 = check_hlds__build_mode_constraints__HeadVar__2_2;

#line 235 "build_mode_constraints.m"
    {
#line 235 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_4)));
    }
#line 235 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 235 "build_mode_constraints.m"
  }
#line 235 "build_mode_constraints.m"
}

#line 210 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0(
#line 210 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 210 "build_mode_constraints.m"
{
#line 210 "build_mode_constraints.m"
  {
#line 210 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 210 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_9 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;
#line 210 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_10 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__3_3;

#line 210 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_9 == check_hlds__build_mode_constraints__CastY_10);
#line 210 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 4130 "check_hlds.build_mode_constraints.c"
      *check_hlds__build_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "build_mode_constraints.m"
    else
#line 210 "build_mode_constraints.m"
      {
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_8_8;

#line 210 "build_mode_constraints.m"
        {
#line 210 "build_mode_constraints.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], &check_hlds__build_mode_constraints__V_8_8, ((MR_Box) (check_hlds__build_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__build_mode_constraints__V_6_6)));
        }
#line 4152 "check_hlds.build_mode_constraints.c"
        check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 210 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = !(check_hlds__build_mode_constraints__succeeded);
#line 210 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 210 "build_mode_constraints.m"
          *check_hlds__build_mode_constraints__HeadVar__1_1 = check_hlds__build_mode_constraints__V_8_8;
#line 210 "build_mode_constraints.m"
        else
#line 210 "build_mode_constraints.m"
          {
#line 210 "build_mode_constraints.m"
            {
#line 210 "build_mode_constraints.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], check_hlds__build_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__build_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__build_mode_constraints__V_7_7)));
            }
#line 210 "build_mode_constraints.m"
          }
#line 210 "build_mode_constraints.m"
      }
#line 210 "build_mode_constraints.m"
  }
#line 210 "build_mode_constraints.m"
}

#line 210 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0(
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 210 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 210 "build_mode_constraints.m"
{
#line 210 "build_mode_constraints.m"
  {
#line 210 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 210 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastX_7 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__1_1;
#line 210 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__CastY_8 = (MR_Integer) check_hlds__build_mode_constraints__HeadVar__2_2;

#line 210 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__CastX_7 == check_hlds__build_mode_constraints__CastY_8);
#line 210 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 210 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = MR_TRUE;
#line 210 "build_mode_constraints.m"
    else
#line 210 "build_mode_constraints.m"
      {
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__TypeInfo_10_10;
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 4217 "check_hlds.build_mode_constraints.c"
        {
#line 4219 "check_hlds.build_mode_constraints.c"
          check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__build_mode_constraints__V_3_3)), ((MR_Box) (check_hlds__build_mode_constraints__V_5_5)));
        }
#line 210 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 210 "build_mode_constraints.m"
          {
#line 4226 "check_hlds.build_mode_constraints.c"
            check_hlds__build_mode_constraints__TypeInfo_10_10 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0];
#line 4228 "check_hlds.build_mode_constraints.c"
            {
#line 4230 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__build_mode_constraints__TypeInfo_10_10, ((MR_Box) (check_hlds__build_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__build_mode_constraints__V_6_6)));
            }
#line 210 "build_mode_constraints.m"
          }
#line 210 "build_mode_constraints.m"
      }
#line 210 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 210 "build_mode_constraints.m"
  }
#line 210 "build_mode_constraints.m"
}

#line 71 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints____Compare____args_0_0(
#line 71 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__HeadVar__1_1,
#line 71 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2,
#line 71 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__3_3)
#line 71 "build_mode_constraints.m"
{
#line 71 "build_mode_constraints.m"
  {
#line 71 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 71 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_4 = check_hlds__build_mode_constraints__HeadVar__2_2;
#line 71 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_5 = check_hlds__build_mode_constraints__HeadVar__3_3;

#line 71 "build_mode_constraints.m"
    {
#line 71 "build_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[1], check_hlds__build_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_5)));
    }
#line 71 "build_mode_constraints.m"
  }
#line 71 "build_mode_constraints.m"
}

#line 71 "build_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____args_0_0(
#line 71 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__1_1,
#line 71 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 71 "build_mode_constraints.m"
{
#line 71 "build_mode_constraints.m"
  {
#line 71 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 71 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar1_3 = check_hlds__build_mode_constraints__HeadVar__1_1;
#line 71 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Cast_HeadVar2_4 = check_hlds__build_mode_constraints__HeadVar__2_2;

#line 71 "build_mode_constraints.m"
    {
#line 71 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[1], ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__build_mode_constraints__Cast_HeadVar2_4)));
    }
#line 71 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 71 "build_mode_constraints.m"
  }
#line 71 "build_mode_constraints.m"
}

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_2(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 1008 "build_mode_constraints.m"
{
#line 1008 "build_mode_constraints.m"
  {
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv3_LambdaHeadVar__2_23;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv2_LambdaHeadVar__4_25;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv3_LambdaHeadVar__2_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv2_LambdaHeadVar__4_25);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv3_LambdaHeadVar__2_23));
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv2_LambdaHeadVar__4_25));
#line 1008 "build_mode_constraints.m"
  }
#line 1008 "build_mode_constraints.m"
}

#line 1080 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_1(
#line 1080 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1080 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1080 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1080 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1080 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 1080 "build_mode_constraints.m"
{
#line 1080 "build_mode_constraints.m"
  {
#line 1080 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 1080 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_30;
#line 1080 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_32;

#line 1080 "build_mode_constraints.m"
    {
#line 1080 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_30, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_32);
    }
#line 1080 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_30));
#line 1080 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_32));
#line 1080 "build_mode_constraints.m"
  }
#line 1080 "build_mode_constraints.m"
}

#line 1072 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_10,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_12,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__SubIds_13,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Nonlocals_14,
#line 1072 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__NonlocalsAtId_15,
#line 1072 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__NonlocalsAtSubIds_16,
#line 1072 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22,
#line 1072 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23)
#line 1072 "build_mode_constraints.m"
{
#line 1077 "build_mode_constraints.m"
  {
#line 1077 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 1077 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__NonlocalsList_18;
#line 1077 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_24_24;
#line 1077 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_25_25;
#line 1077 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_52_52;
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_24_24;
#line 1080 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_VarInfo_23;

#line 1080 "build_mode_constraints.m"
    {
#line 1080 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_25_25, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[1]));
#line 1080 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_25_25, 1) = ((MR_Box) (check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_1));
#line 1080 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1080 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_25_25, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_10));
#line 1080 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_25_25, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_11));
#line 1080 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_25_25, 5) = ((MR_Box) (check_hlds__build_mode_constraints__SubIds_13));
#line 1080 "build_mode_constraints.m"
    }
#line 1085 "build_mode_constraints.m"
    {
#line 1085 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__NonlocalsList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__Nonlocals_14);
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_52_52, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0]));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_52_52, 1) = ((MR_Box) (check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_2));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_52_52, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_10));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_52_52, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_11));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_52_52, 5) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_12));
#line 1008 "build_mode_constraints.m"
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_52_52, check_hlds__build_mode_constraints__NonlocalsList_18, check_hlds__build_mode_constraints__NonlocalsAtId_15, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22)), &check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_24_24);
    }
#line 1008 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_24_24 = ((MR_Word) check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_24_24);
#line 1080 "build_mode_constraints.m"
    {
#line 1080 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_25_25, check_hlds__build_mode_constraints__NonlocalsList_18, check_hlds__build_mode_constraints__NonlocalsAtSubIds_16, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_24_24)), &check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_VarInfo_23);
    }
#line 1080 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23 = ((MR_Word) check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_VarInfo_23);
#line 1077 "build_mode_constraints.m"
  }
#line 1072 "build_mode_constraints.m"
}

#line 1053 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_7,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_8,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_9,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_10,
#line 1053 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVars0_11,
#line 1053 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__MCVars_12)
#line 1053 "build_mode_constraints.m"
{
#line 1056 "build_mode_constraints.m"
  {
#line 1056 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 1056 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__MCVar_13;
#line 1056 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_18_18;
#line 1056 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_19_19;
#line 1048 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv0_MCVar_13;

#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_19_19, 0) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVar_10));
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_19_19, 1) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_8));
#line 1048 "build_mode_constraints.m"
    }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_19_19));
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 1) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_9));
#line 1048 "build_mode_constraints.m"
    }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_MCVar_13 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__VarMap_7, ((MR_Box) (check_hlds__build_mode_constraints__V_18_18)));
    }
#line 1048 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__MCVar_13 = ((MR_Word) check_hlds__build_mode_constraints__conv0_MCVar_13);
#line 1058 "build_mode_constraints.m"
    {
#line 1058 "build_mode_constraints.m"
      MR_Word base;
#line 1058 "build_mode_constraints.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "build_mode_constraints.m"
      *check_hlds__build_mode_constraints__MCVars_12 = base;
#line 1058 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__build_mode_constraints__MCVar_13));
#line 1058 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__build_mode_constraints__MCVars0_11));
#line 1058 "build_mode_constraints.m"
    }
#line 1056 "build_mode_constraints.m"
  }
#line 1053 "build_mode_constraints.m"
}

#line 1044 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_f_0(
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_6,
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_7,
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_8,
#line 1044 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_9)
#line 1044 "build_mode_constraints.m"
{
#line 1047 "build_mode_constraints.m"
  {
#line 1047 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 1047 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVar__5_5;
#line 1047 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_10_10;
#line 1047 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_11_11;
#line 1048 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv0_HeadVar__5_5;

#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_11_11, 0) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVar_9));
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_11_11, 1) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_7));
#line 1048 "build_mode_constraints.m"
    }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_11_11));
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 1) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_8));
#line 1048 "build_mode_constraints.m"
    }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_HeadVar__5_5 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__VarMap_6, ((MR_Box) (check_hlds__build_mode_constraints__V_10_10)));
    }
#line 1048 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__HeadVar__5_5 = ((MR_Word) check_hlds__build_mode_constraints__conv0_HeadVar__5_5);
#line 1047 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__HeadVar__5_5;
#line 1047 "build_mode_constraints.m"
  }
#line 1044 "build_mode_constraints.m"
}

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 1008 "build_mode_constraints.m"
{
#line 1008 "build_mode_constraints.m"
  {
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23));
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25));
#line 1008 "build_mode_constraints.m"
  }
#line 1008 "build_mode_constraints.m"
}

#line 1003 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_8,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVars_10,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_11,
#line 1003 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__MCVars_12,
#line 1003 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
#line 1003 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_17)
#line 1003 "build_mode_constraints.m"
{
#line 1007 "build_mode_constraints.m"
  {
#line 1007 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 1007 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_18_18;
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_17;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0]));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 1) = ((MR_Box) (check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0_1));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_8));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_9));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 5) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_11));
#line 1008 "build_mode_constraints.m"
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_18_18, check_hlds__build_mode_constraints__ProgVars_10, check_hlds__build_mode_constraints__MCVars_12, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_16)), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_17);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_17 = ((MR_Word) check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_17);
#line 1007 "build_mode_constraints.m"
  }
#line 1003 "build_mode_constraints.m"
}

#line 967 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_8,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_10,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_11,
#line 967 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__MCVar_12,
#line 967 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_18,
#line 967 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_19)
#line 967 "build_mode_constraints.m"
{
#line 970 "build_mode_constraints.m"
  {
#line 970 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 970 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__MCVarset0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_18, (MR_Integer) 0)));
#line 970 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__VarMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_18, (MR_Integer) 1)));
#line 970 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__MCVarset_16;
#line 970 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__VarMap_17;
#line 970 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__RepVar_31;
#line 970 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_35_35;
#line 1029 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_32_32;
#line 1029 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv0_V_32_32;
#line 1048 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv1_MCVar_12;

#line 1028 "build_mode_constraints.m"
    {
#line 1028 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_35_35, 0) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVar_10));
#line 1028 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_35_35, 1) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_9));
#line 1028 "build_mode_constraints.m"
    }
#line 1028 "build_mode_constraints.m"
    {
#line 1028 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__RepVar_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__RepVar_31, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_35_35));
#line 1028 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__RepVar_31, 1) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_11));
#line 1028 "build_mode_constraints.m"
    }
#line 1029 "build_mode_constraints.m"
    {
#line 1029 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = mercury__bimap__search_3_p_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__VarMap0_15, ((MR_Box) (check_hlds__build_mode_constraints__RepVar_31)), &check_hlds__build_mode_constraints__conv0_V_32_32);
    }
#line 1029 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 1029 "build_mode_constraints.m"
      {
#line 1029 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__V_32_32 = ((MR_Word) check_hlds__build_mode_constraints__conv0_V_32_32);
#line 1029 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = MR_TRUE;
#line 1029 "build_mode_constraints.m"
      }
#line 1031 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 1030 "build_mode_constraints.m"
      {
#line 1030 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__VarMap_17 = check_hlds__build_mode_constraints__VarMap0_15;
#line 1030 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__MCVarset_16 = check_hlds__build_mode_constraints__MCVarset0_14;
#line 1030 "build_mode_constraints.m"
      }
#line 1031 "build_mode_constraints.m"
    else
#line 1032 "build_mode_constraints.m"
      {
#line 1032 "build_mode_constraints.m"
        MR_String check_hlds__build_mode_constraints__MCVarName_33;
#line 1032 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__NewMCVar_34;

#line 1032 "build_mode_constraints.m"
        {
#line 1032 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__MCVarName_33 = check_hlds__build_mode_constraints__rep_var_to_string_2_f_0(check_hlds__build_mode_constraints__ProgVarset_8, check_hlds__build_mode_constraints__RepVar_31);
        }
#line 1033 "build_mode_constraints.m"
        {
#line 1033 "build_mode_constraints.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__build_mode_constraints__MCVarName_33, &check_hlds__build_mode_constraints__NewMCVar_34, check_hlds__build_mode_constraints__MCVarset0_14, &check_hlds__build_mode_constraints__MCVarset_16);
        }
#line 1034 "build_mode_constraints.m"
        {
#line 1034 "build_mode_constraints.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], ((MR_Box) (check_hlds__build_mode_constraints__RepVar_31)), ((MR_Box) (check_hlds__build_mode_constraints__NewMCVar_34)), check_hlds__build_mode_constraints__VarMap0_15, &check_hlds__build_mode_constraints__VarMap_17);
        }
#line 1032 "build_mode_constraints.m"
      }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv1_MCVar_12 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__VarMap_17, ((MR_Box) (check_hlds__build_mode_constraints__RepVar_31)));
    }
#line 1048 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__MCVar_12 = ((MR_Word) check_hlds__build_mode_constraints__conv1_MCVar_12);
#line 975 "build_mode_constraints.m"
    {
#line 975 "build_mode_constraints.m"
      MR_Word base;
#line 975 "build_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 975 "build_mode_constraints.m"
      *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_19 = base;
#line 975 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__build_mode_constraints__MCVarset_16));
#line 975 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__build_mode_constraints__VarMap_17));
#line 975 "build_mode_constraints.m"
    }
#line 970 "build_mode_constraints.m"
  }
#line 967 "build_mode_constraints.m"
}

#line 953 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0(void)
#line 953 "build_mode_constraints.m"
{
#line 955 "build_mode_constraints.m"
  {
#line 955 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 955 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVar__1_1;
#line 955 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeInfo_4_4 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
#line 955 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeInfo_5_5 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
#line 955 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_2_2;
#line 955 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_3_3;

#line 956 "build_mode_constraints.m"
    {
#line 956 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_2_2 = mercury__multi_map__init_0_f_0(check_hlds__build_mode_constraints__TypeInfo_4_4, check_hlds__build_mode_constraints__TypeInfo_5_5);
    }
#line 956 "build_mode_constraints.m"
    {
#line 956 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_3_3 = mercury__multi_map__init_0_f_0(check_hlds__build_mode_constraints__TypeInfo_4_4, check_hlds__build_mode_constraints__TypeInfo_5_5);
    }
#line 956 "build_mode_constraints.m"
    {
#line 956 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_2_2));
#line 956 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_3_3));
#line 956 "build_mode_constraints.m"
    }
#line 955 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__HeadVar__1_1;
#line 955 "build_mode_constraints.m"
  }
#line 953 "build_mode_constraints.m"
}

#line 943 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_p_0(
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVarSet_7,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_8,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints___ProgVar_9,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarAtConjuncts_10,
#line 943 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_12,
#line 943 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_13)
#line 943 "build_mode_constraints.m"
{
#line 949 "build_mode_constraints.m"
  {
#line 949 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 949 "build_mode_constraints.m"
    {
#line 949 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(check_hlds__build_mode_constraints__MCVarSet_7, check_hlds__build_mode_constraints__Context_8, check_hlds__build_mode_constraints__ProgVarAtConjuncts_10, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_13);
    }
#line 949 "build_mode_constraints.m"
  }
#line 943 "build_mode_constraints.m"
}

#line 915 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_p_0(
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_11,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_12,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_13,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_14,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_15,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarAtConjuncts_16,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_20,
#line 915 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_21,
#line 915 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_22,
#line 915 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_23)
#line 915 "build_mode_constraints.m"
{
#line 921 "build_mode_constraints.m"
  {
#line 921 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 921 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ProgVarAtGoalId_19;
#line 921 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_20, (MR_Integer) 0)));
#line 921 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25_25;
#line 922 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_20, (MR_Integer) 1)));

#line 927 "build_mode_constraints.m"
    {
#line 927 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_11, check_hlds__build_mode_constraints__PredId_12, check_hlds__build_mode_constraints__ProgVar_15, check_hlds__build_mode_constraints__GoalId_14, &check_hlds__build_mode_constraints__ProgVarAtGoalId_19, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_20, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_21);
    }
#line 922 "build_mode_constraints.m"
    {
#line 922 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equiv_disj_6_p_0(check_hlds__build_mode_constraints__V_24_24, check_hlds__build_mode_constraints__Context_13, check_hlds__build_mode_constraints__ProgVarAtGoalId_19, check_hlds__build_mode_constraints__ProgVarAtConjuncts_16, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_22, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25_25);
    }
#line 924 "build_mode_constraints.m"
    {
#line 924 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__at_most_one_5_p_0(check_hlds__build_mode_constraints__V_24_24, check_hlds__build_mode_constraints__Context_13, check_hlds__build_mode_constraints__ProgVarAtConjuncts_16, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25_25, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_23);
    }
#line 921 "build_mode_constraints.m"
  }
#line 915 "build_mode_constraints.m"
}

#line 891 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_p_0(
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_7,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_8,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_9,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVar_10,
#line 891 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_ConjunctProductionMap_0_13,
#line 891 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_ConjunctProductionMap_14)
#line 891 "build_mode_constraints.m"
{
#line 896 "build_mode_constraints.m"
  {
#line 896 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 896 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__MCVar_12;
#line 896 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_22_22;
#line 896 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_23_23;
#line 1048 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv0_MCVar_12;

#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 0) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVar_10));
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 1) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_8));
#line 1048 "build_mode_constraints.m"
    }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_22_22, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_23_23));
#line 1048 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_22_22, 1) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_9));
#line 1048 "build_mode_constraints.m"
    }
#line 1048 "build_mode_constraints.m"
    {
#line 1048 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_MCVar_12 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__VarMap_7, ((MR_Box) (check_hlds__build_mode_constraints__V_22_22)));
    }
#line 1048 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__MCVar_12 = ((MR_Word) check_hlds__build_mode_constraints__conv0_MCVar_12);
#line 898 "build_mode_constraints.m"
    {
#line 898 "build_mode_constraints.m"
      mercury__multi_map__set_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], ((MR_Box) (check_hlds__build_mode_constraints__ProgVar_10)), ((MR_Box) (check_hlds__build_mode_constraints__MCVar_12)), check_hlds__build_mode_constraints__STATE_VARIABLE_ConjunctProductionMap_0_13, check_hlds__build_mode_constraints__STATE_VARIABLE_ConjunctProductionMap_14);
    }
#line 896 "build_mode_constraints.m"
  }
#line 891 "build_mode_constraints.m"
}

#line 873 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0_1(
#line 873 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 873 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 873 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 873 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 873 "build_mode_constraints.m"
{
#line 873 "build_mode_constraints.m"
  {
#line 873 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 873 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_ConjunctProductionMap_14;

#line 873 "build_mode_constraints.m"
    {
#line 873 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_ConjunctProductionMap_14);
    }
#line 873 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_ConjunctProductionMap_14));
#line 873 "build_mode_constraints.m"
  }
#line 873 "build_mode_constraints.m"
}

#line 851 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0(
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_7,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_8,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Nonlocals_9,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__4_4,
#line 851 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_0_19,
#line 851 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_20)
#line 851 "build_mode_constraints.m"
{
#line 856 "build_mode_constraints.m"
  {
#line 856 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_35_35;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeInfo_39_39;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__SubGoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__4_4, (MR_Integer) 1)));
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__SubGoalNonlocals_13;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__SubGoalId_14;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Nonlocal_15;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Local_16;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_LocalsMap_21_21;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_NonlocalsMap_22_22;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_23_23;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_LocalsMap_24_24;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_NonlocalsMap_26_26;
#line 856 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints___SubGoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__4_4, (MR_Integer) 0)));
#line 872 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_LocalsMap_24_24;
#line 875 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_NonlocalsMap_26_26;

#line 857 "build_mode_constraints.m"
    {
#line 857 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__SubGoalNonlocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__build_mode_constraints__SubGoalInfo_11);
    }
#line 858 "build_mode_constraints.m"
    {
#line 858 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__SubGoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__SubGoalInfo_11);
    }
#line 5149 "check_hlds.build_mode_constraints.c"
    check_hlds__build_mode_constraints__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 862 "build_mode_constraints.m"
    {
#line 862 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__Nonlocal_15 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__build_mode_constraints__TypeCtorInfo_35_35, check_hlds__build_mode_constraints__SubGoalNonlocals_13, check_hlds__build_mode_constraints__Nonlocals_9);
    }
#line 866 "build_mode_constraints.m"
    {
#line 866 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__Local_16 = parse_tree__set_of_var__difference_2_f_0(check_hlds__build_mode_constraints__TypeCtorInfo_35_35, check_hlds__build_mode_constraints__SubGoalNonlocals_13, check_hlds__build_mode_constraints__Nonlocals_9);
    }
#line 869 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__STATE_VARIABLE_LocalsMap_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_0_19, (MR_Integer) 0)));
#line 869 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__STATE_VARIABLE_NonlocalsMap_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_0_19, (MR_Integer) 1)));
#line 873 "build_mode_constraints.m"
    {
#line 873 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 873 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[5]));
#line 873 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0_1));
#line 873 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 873 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 3) = ((MR_Box) (check_hlds__build_mode_constraints__VarMap_7));
#line 873 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_8));
#line 873 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_23_23, 5) = ((MR_Box) (check_hlds__build_mode_constraints__SubGoalId_14));
#line 873 "build_mode_constraints.m"
    }
#line 5183 "check_hlds.build_mode_constraints.c"
    check_hlds__build_mode_constraints__TypeInfo_39_39 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0];
#line 872 "build_mode_constraints.m"
    {
#line 872 "build_mode_constraints.m"
      parse_tree__set_of_var__fold_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_35_35, check_hlds__build_mode_constraints__TypeInfo_39_39, check_hlds__build_mode_constraints__V_23_23, check_hlds__build_mode_constraints__Local_16, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_LocalsMap_21_21)), &check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_LocalsMap_24_24);
    }
#line 872 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__STATE_VARIABLE_LocalsMap_24_24 = ((MR_Word) check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_LocalsMap_24_24);
#line 875 "build_mode_constraints.m"
    {
#line 875 "build_mode_constraints.m"
      parse_tree__set_of_var__fold_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_35_35, check_hlds__build_mode_constraints__TypeInfo_39_39, check_hlds__build_mode_constraints__V_23_23, check_hlds__build_mode_constraints__Nonlocal_15, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_NonlocalsMap_22_22)), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_NonlocalsMap_26_26);
    }
#line 875 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__STATE_VARIABLE_NonlocalsMap_26_26 = ((MR_Word) check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_NonlocalsMap_26_26);
#line 880 "build_mode_constraints.m"
    {
#line 880 "build_mode_constraints.m"
      MR_Word base;
#line 880 "build_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "build_mode_constraints.m"
      *check_hlds__build_mode_constraints__STATE_VARIABLE_ConjConstraintsInfo_20 = base;
#line 880 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_LocalsMap_24_24));
#line 880 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_NonlocalsMap_26_26));
#line 880 "build_mode_constraints.m"
    }
#line 856 "build_mode_constraints.m"
  }
#line 851 "build_mode_constraints.m"
}

#line 816 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__single_mode_constraints_3_f_0(
#line 816 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 816 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__MCVar_6,
#line 816 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Mode_7)
#line 816 "build_mode_constraints.m"
{
#line 819 "build_mode_constraints.m"
  {
#line 819 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 819 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Constraint_8;
#line 819 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__InitialInst_9;
#line 819 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__FinalInst_10;
#line 819 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__IsProduced_11;
#line 819 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_12_12;

#line 820 "build_mode_constraints.m"
    {
#line 820 "build_mode_constraints.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__build_mode_constraints__ModuleInfo_5, check_hlds__build_mode_constraints__Mode_7, &check_hlds__build_mode_constraints__InitialInst_9, &check_hlds__build_mode_constraints__FinalInst_10);
    }
#line 823 "build_mode_constraints.m"
    {
#line 823 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__build_mode_constraints__ModuleInfo_5, check_hlds__build_mode_constraints__InitialInst_9);
    }
#line 823 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = !(check_hlds__build_mode_constraints__succeeded);
#line 826 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 825 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IsProduced_11 = (MR_Integer) 0;
#line 826 "build_mode_constraints.m"
    else
#line 831 "build_mode_constraints.m"
      {
#line 828 "build_mode_constraints.m"
        {
#line 828 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__build_mode_constraints__ModuleInfo_5, check_hlds__build_mode_constraints__FinalInst_10);
        }
#line 828 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = !(check_hlds__build_mode_constraints__succeeded);
#line 831 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 830 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__IsProduced_11 = (MR_Integer) 1;
#line 831 "build_mode_constraints.m"
        else
#line 833 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__IsProduced_11 = (MR_Integer) 0;
#line 831 "build_mode_constraints.m"
      }
#line 835 "build_mode_constraints.m"
    {
#line 835 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 835 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_12_12, 0) = ((MR_Box) (check_hlds__build_mode_constraints__MCVar_6));
#line 835 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_12_12, 1) = ((MR_Box) (check_hlds__build_mode_constraints__IsProduced_11));
#line 835 "build_mode_constraints.m"
    }
#line 835 "build_mode_constraints.m"
    {
#line 835 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__Constraint_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 835 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Constraint_8, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_12_12));
#line 835 "build_mode_constraints.m"
    }
#line 819 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__Constraint_8;
#line 819 "build_mode_constraints.m"
  }
#line 816 "build_mode_constraints.m"
}

#line 809 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0_1(
#line 809 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 809 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 809 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 809 "build_mode_constraints.m"
{
#line 809 "build_mode_constraints.m"
  {
#line 809 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_3;
#line 809 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 809 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_Constraint_8;

#line 809 "build_mode_constraints.m"
    {
#line 809 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_Constraint_8 = check_hlds__build_mode_constraints__single_mode_constraints_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 809 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_Constraint_8));
#line 809 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_3;
#line 809 "build_mode_constraints.m"
  }
#line 809 "build_mode_constraints.m"
}

#line 804 "build_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(
#line 804 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 804 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ConstraintVars_6,
#line 804 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ArgModes_7)
#line 804 "build_mode_constraints.m"
{
#line 807 "build_mode_constraints.m"
  {
#line 807 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 807 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVar__4_4;
#line 807 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_8_8;
#line 807 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_9_9;
#line 807 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_10_10;

#line 809 "build_mode_constraints.m"
    {
#line 809 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 809 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[3]));
#line 809 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0_1));
#line 809 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 809 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ModuleInfo_5));
#line 809 "build_mode_constraints.m"
    }
#line 808 "build_mode_constraints.m"
    {
#line 808 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_9_9 = mercury__list__map_corresponding_3_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, check_hlds__build_mode_constraints__V_10_10, check_hlds__build_mode_constraints__ConstraintVars_6, check_hlds__build_mode_constraints__ArgModes_7);
    }
#line 808 "build_mode_constraints.m"
    {
#line 808 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__V_8_8, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_9_9));
#line 808 "build_mode_constraints.m"
    }
#line 809 "build_mode_constraints.m"
    {
#line 809 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_8_8));
#line 809 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "build_mode_constraints.m"
    }
#line 807 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__HeadVar__4_4;
#line 807 "build_mode_constraints.m"
  }
#line 804 "build_mode_constraints.m"
}

#line 796 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_3(
#line 796 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 796 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 796 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 796 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 796 "build_mode_constraints.m"
{
#line 796 "build_mode_constraints.m"
  {
#line 796 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 796 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv4_HeadVar__5_5;

#line 796 "build_mode_constraints.m"
    {
#line 796 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv4_HeadVar__5_5);
    }
#line 796 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv4_HeadVar__5_5));
#line 796 "build_mode_constraints.m"
  }
#line 796 "build_mode_constraints.m"
}

#line 794 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_2(
#line 794 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 794 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 794 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 794 "build_mode_constraints.m"
{
#line 794 "build_mode_constraints.m"
  {
#line 794 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_3;
#line 794 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 794 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv3_LambdaHeadVar__3_37;

#line 794 "build_mode_constraints.m"
    {
#line 794 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv3_LambdaHeadVar__3_37 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 794 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv3_LambdaHeadVar__3_37));
#line 794 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_3;
#line 794 "build_mode_constraints.m"
  }
#line 794 "build_mode_constraints.m"
}

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 1008 "build_mode_constraints.m"
{
#line 1008 "build_mode_constraints.m"
  {
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23));
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25));
#line 1008 "build_mode_constraints.m"
  }
#line 1008 "build_mode_constraints.m"
}

#line 779 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_12,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_13,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_14,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallerPredId_15,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallArgs_16,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CalleePredId_17,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CalleeHeadVars_18,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_26,
#line 779 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_27,
#line 779 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_28,
#line 779 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_29)
#line 779 "build_mode_constraints.m"
{
#line 785 "build_mode_constraints.m"
  {
#line 785 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeInfo_46_46;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeInfo_47_47;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVarsAtHead_21;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__CallArgsHere_22;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__EquivVarss_23;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_31_31;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_40_40;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_42_42;
#line 785 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_62_62;
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_31_31;
#line 796 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_45_45;
#line 796 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_29;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0]));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_1));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_12));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 4) = ((MR_Box) (check_hlds__build_mode_constraints__CalleePredId_17));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 5) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 1008 "build_mode_constraints.m"
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_62_62, check_hlds__build_mode_constraints__CalleeHeadVars_18, &check_hlds__build_mode_constraints__HeadVarsAtHead_21, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_26)), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_31_31);
    }
#line 1008 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_31_31 = ((MR_Word) check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_31_31);
#line 788 "build_mode_constraints.m"
    {
#line 788 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_12, check_hlds__build_mode_constraints__CallerPredId_15, check_hlds__build_mode_constraints__CallArgs_16, check_hlds__build_mode_constraints__GoalId_14, &check_hlds__build_mode_constraints__CallArgsHere_22, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_31_31, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_27);
    }
#line 5598 "check_hlds.build_mode_constraints.c"
    check_hlds__build_mode_constraints__TypeInfo_46_46 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
#line 5600 "check_hlds.build_mode_constraints.c"
    check_hlds__build_mode_constraints__TypeInfo_47_47 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 794 "build_mode_constraints.m"
    {
#line 794 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__EquivVarss_23 = mercury__list__map_corresponding_3_f_0(check_hlds__build_mode_constraints__TypeInfo_46_46, check_hlds__build_mode_constraints__TypeInfo_46_46, check_hlds__build_mode_constraints__TypeInfo_47_47, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[11], check_hlds__build_mode_constraints__HeadVarsAtHead_21, check_hlds__build_mode_constraints__CallArgsHere_22);
    }
#line 796 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_27, (MR_Integer) 0)));
#line 796 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_27, (MR_Integer) 1)));
#line 796 "build_mode_constraints.m"
    {
#line 796 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 796 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_40_40, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[3]));
#line 796 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_40_40, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_3));
#line 796 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 796 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_40_40, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_42_42));
#line 796 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_40_40, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_13));
#line 796 "build_mode_constraints.m"
    }
#line 796 "build_mode_constraints.m"
    {
#line 796 "build_mode_constraints.m"
      mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeInfo_47_47, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__build_mode_constraints__V_40_40, check_hlds__build_mode_constraints__EquivVarss_23, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_28)), &check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_29);
    }
#line 796 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_29 = ((MR_Word) check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_29);
#line 785 "build_mode_constraints.m"
  }
#line 779 "build_mode_constraints.m"
}

#line 759 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_3(
#line 759 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 759 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 759 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 759 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 759 "build_mode_constraints.m"
{
#line 759 "build_mode_constraints.m"
  {
#line 759 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 759 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv4_HeadVar__5_5;

#line 759 "build_mode_constraints.m"
    {
#line 759 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__add_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv4_HeadVar__5_5);
    }
#line 759 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv4_HeadVar__5_5));
#line 759 "build_mode_constraints.m"
  }
#line 759 "build_mode_constraints.m"
}

#line 756 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_2(
#line 756 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 756 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 756 "build_mode_constraints.m"
{
#line 756 "build_mode_constraints.m"
  {
#line 756 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 756 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 756 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv3_HeadVar__4_4;

#line 756 "build_mode_constraints.m"
    {
#line 756 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv3_HeadVar__4_4 = check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 756 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv3_HeadVar__4_4));
#line 756 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 756 "build_mode_constraints.m"
  }
#line 756 "build_mode_constraints.m"
}

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 1008 "build_mode_constraints.m"
{
#line 1008 "build_mode_constraints.m"
  {
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23));
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25));
#line 1008 "build_mode_constraints.m"
  }
#line 1008 "build_mode_constraints.m"
}

#line 746 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_12,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_13,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallContext_14,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallingPred_15,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Decls_16,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_17,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__CallArgs_18,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_24,
#line 746 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_25,
#line 746 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_26,
#line 746 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_27)
#line 746 "build_mode_constraints.m"
{
#line 752 "build_mode_constraints.m"
  {
#line 752 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_41_41;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__CallArgsHere_21;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ModeSpecificConstraints_22;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_29_29;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_30_30;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_51_51;
#line 752 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_62_62;
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_25;
#line 759 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_50_50;
#line 761 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__OneModeOnlyConstraints_23;
#line 758 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_31_31;
#line 758 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_32_32;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0]));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_1));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_13));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 4) = ((MR_Box) (check_hlds__build_mode_constraints__CallingPred_15));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_62_62, 5) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_17));
#line 1008 "build_mode_constraints.m"
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_62_62, check_hlds__build_mode_constraints__CallArgs_18, &check_hlds__build_mode_constraints__CallArgsHere_21, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_24)), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_25);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_25 = ((MR_Word) check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_25);
#line 5822 "check_hlds.build_mode_constraints.c"
    check_hlds__build_mode_constraints__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
#line 756 "build_mode_constraints.m"
    {
#line 756 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 756 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[1]));
#line 756 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_2));
#line 756 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 756 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ModuleInfo_12));
#line 756 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 4) = ((MR_Box) (check_hlds__build_mode_constraints__CallArgsHere_21));
#line 756 "build_mode_constraints.m"
    }
#line 755 "build_mode_constraints.m"
    {
#line 755 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_29_29 = mercury__list__map_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[5], check_hlds__build_mode_constraints__V_30_30, check_hlds__build_mode_constraints__Decls_16);
    }
#line 755 "build_mode_constraints.m"
    {
#line 755 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__ModeSpecificConstraints_22 = mercury__list__condense_1_f_0(check_hlds__build_mode_constraints__TypeCtorInfo_41_41, check_hlds__build_mode_constraints__V_29_29);
    }
#line 759 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_25, (MR_Integer) 0)));
#line 759 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_25, (MR_Integer) 1)));
#line 758 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__build_mode_constraints__ModeSpecificConstraints_22)) == (MR_mktag((MR_Integer) 1)));
#line 758 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 758 "build_mode_constraints.m"
      {
#line 758 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__ModeSpecificConstraints_22, (MR_Integer) 0)));
#line 758 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__ModeSpecificConstraints_22, (MR_Integer) 1)));
#line 758 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 758 "build_mode_constraints.m"
          {
#line 758 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__build_mode_constraints__V_31_31)) == (MR_mktag((MR_Integer) 2)));
#line 758 "build_mode_constraints.m"
            if (check_hlds__build_mode_constraints__succeeded)
#line 758 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__OneModeOnlyConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__V_31_31, (MR_Integer) 0)));
#line 758 "build_mode_constraints.m"
          }
#line 758 "build_mode_constraints.m"
      }
#line 761 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 759 "build_mode_constraints.m"
      {
#line 759 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_33_33;
#line 759 "build_mode_constraints.m"
        MR_Box check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_27;

#line 759 "build_mode_constraints.m"
        {
#line 759 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 759 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_33_33, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[5]));
#line 759 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_33_33, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_3));
#line 759 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 759 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_33_33, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_51_51));
#line 759 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_33_33, 4) = ((MR_Box) (check_hlds__build_mode_constraints__CallContext_14));
#line 759 "build_mode_constraints.m"
        }
#line 759 "build_mode_constraints.m"
        {
#line 759 "build_mode_constraints.m"
          mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_41_41, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__build_mode_constraints__V_33_33, check_hlds__build_mode_constraints__OneModeOnlyConstraints_23, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_26)), &check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_27);
        }
#line 759 "build_mode_constraints.m"
        *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_27 = ((MR_Word) check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_27);
#line 759 "build_mode_constraints.m"
      }
#line 761 "build_mode_constraints.m"
    else
#line 762 "build_mode_constraints.m"
      {
#line 762 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_37_37;

#line 763 "build_mode_constraints.m"
        {
#line 763 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_37_37, 0) = ((MR_Box) (check_hlds__build_mode_constraints__ModeSpecificConstraints_22));
#line 763 "build_mode_constraints.m"
        }
#line 762 "build_mode_constraints.m"
        {
#line 762 "build_mode_constraints.m"
          check_hlds__abstract_mode_constraints__add_constraint_5_p_0(check_hlds__build_mode_constraints__V_51_51, check_hlds__build_mode_constraints__CallContext_14, check_hlds__build_mode_constraints__V_37_37, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_26, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_27);
        }
#line 762 "build_mode_constraints.m"
      }
#line 752 "build_mode_constraints.m"
  }
#line 746 "build_mode_constraints.m"
}

#line 580 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22(
#line 580 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 580 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 580 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 580 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 580 "build_mode_constraints.m"
{
#line 580 "build_mode_constraints.m"
  {
#line 580 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 580 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv37_HeadVar__5_5;

#line 580 "build_mode_constraints.m"
    {
#line 580 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv37_HeadVar__5_5);
    }
#line 580 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv37_HeadVar__5_5));
#line 580 "build_mode_constraints.m"
  }
#line 580 "build_mode_constraints.m"
}

#line 577 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_21(
#line 577 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 577 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 577 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 577 "build_mode_constraints.m"
{
#line 577 "build_mode_constraints.m"
  {
#line 577 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_3;
#line 577 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 577 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv36_LambdaHeadVar__3_206;

#line 577 "build_mode_constraints.m"
    {
#line 577 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv36_LambdaHeadVar__3_206 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__577__1_2_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 577 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv36_LambdaHeadVar__3_206));
#line 577 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_3;
#line 577 "build_mode_constraints.m"
  }
#line 577 "build_mode_constraints.m"
}

#line 456 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_20(
#line 456 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 456 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 456 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2)
#line 456 "build_mode_constraints.m"
{
#line 456 "build_mode_constraints.m"
  {
#line 456 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 456 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv35_HeadVar__2_2;

#line 456 "build_mode_constraints.m"
    {
#line 456 "build_mode_constraints.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv35_HeadVar__2_2);
    }
#line 456 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv35_HeadVar__2_2));
#line 456 "build_mode_constraints.m"
  }
#line 456 "build_mode_constraints.m"
}

#line 561 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19(
#line 561 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 561 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 561 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 561 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 561 "build_mode_constraints.m"
{
#line 561 "build_mode_constraints.m"
  {
#line 561 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 561 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv33_HeadVar__5_5;

#line 561 "build_mode_constraints.m"
    {
#line 561 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equiv_no_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv33_HeadVar__5_5);
    }
#line 561 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv33_HeadVar__5_5));
#line 561 "build_mode_constraints.m"
  }
#line 561 "build_mode_constraints.m"
}

#line 552 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18(
#line 552 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 552 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 552 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 552 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 552 "build_mode_constraints.m"
{
#line 552 "build_mode_constraints.m"
  {
#line 552 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 552 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv31_MCVars_12;

#line 552 "build_mode_constraints.m"
    {
#line 552 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv31_MCVars_12);
    }
#line 552 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv31_MCVars_12));
#line 552 "build_mode_constraints.m"
  }
#line 552 "build_mode_constraints.m"
}

#line 550 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17(
#line 550 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 550 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 550 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 550 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 550 "build_mode_constraints.m"
{
#line 550 "build_mode_constraints.m"
  {
#line 550 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 550 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv29_MCVars_12;

#line 550 "build_mode_constraints.m"
    {
#line 550 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv29_MCVars_12);
    }
#line 550 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv29_MCVars_12));
#line 550 "build_mode_constraints.m"
  }
#line 550 "build_mode_constraints.m"
}

#line 642 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16(
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 642 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 642 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 642 "build_mode_constraints.m"
{
#line 642 "build_mode_constraints.m"
  {
#line 642 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 642 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv27_HeadVar__6_6;

#line 642 "build_mode_constraints.m"
    {
#line 642 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__xor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv27_HeadVar__6_6);
    }
#line 642 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv27_HeadVar__6_6));
#line 642 "build_mode_constraints.m"
  }
#line 642 "build_mode_constraints.m"
}

#line 635 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15(
#line 635 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 635 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 635 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 635 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 635 "build_mode_constraints.m"
{
#line 635 "build_mode_constraints.m"
  {
#line 635 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 635 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv25_HeadVar__5_5;

#line 635 "build_mode_constraints.m"
    {
#line 635 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equiv_no_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv25_HeadVar__5_5);
    }
#line 635 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv25_HeadVar__5_5));
#line 635 "build_mode_constraints.m"
  }
#line 635 "build_mode_constraints.m"
}

#line 631 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14(
#line 631 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 631 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 631 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 631 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 631 "build_mode_constraints.m"
{
#line 631 "build_mode_constraints.m"
  {
#line 631 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 631 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv23_HeadVar__5_5;

#line 631 "build_mode_constraints.m"
    {
#line 631 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv23_HeadVar__5_5);
    }
#line 631 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv23_HeadVar__5_5));
#line 631 "build_mode_constraints.m"
  }
#line 631 "build_mode_constraints.m"
}

#line 629 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_13(
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 629 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3)
#line 629 "build_mode_constraints.m"
{
#line 629 "build_mode_constraints.m"
  {
#line 629 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_4;
#line 629 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 629 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv22_LambdaHeadVar__4_188;

#line 629 "build_mode_constraints.m"
    {
#line 629 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv22_LambdaHeadVar__4_188 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3));
    }
#line 629 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv22_LambdaHeadVar__4_188));
#line 629 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_4;
#line 629 "build_mode_constraints.m"
  }
#line 629 "build_mode_constraints.m"
}

#line 611 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12(
#line 611 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 611 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 611 "build_mode_constraints.m"
{
#line 611 "build_mode_constraints.m"
  {
#line 611 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 611 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;

#line 611 "build_mode_constraints.m"
    {
#line 611 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 611 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 611 "build_mode_constraints.m"
  }
#line 611 "build_mode_constraints.m"
}

#line 609 "build_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11(
#line 609 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 609 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 609 "build_mode_constraints.m"
{
#line 609 "build_mode_constraints.m"
  {
#line 609 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 609 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;

#line 609 "build_mode_constraints.m"
    {
#line 609 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__609__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 609 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__succeeded;
#line 609 "build_mode_constraints.m"
  }
#line 609 "build_mode_constraints.m"
}

#line 543 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10(
#line 543 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 543 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 543 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 543 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 543 "build_mode_constraints.m"
{
#line 543 "build_mode_constraints.m"
  {
#line 543 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 543 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv20_HeadVar__5_5;

#line 543 "build_mode_constraints.m"
    {
#line 543 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv20_HeadVar__5_5);
    }
#line 543 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv20_HeadVar__5_5));
#line 543 "build_mode_constraints.m"
  }
#line 543 "build_mode_constraints.m"
}

#line 541 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_9(
#line 541 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 541 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 541 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 541 "build_mode_constraints.m"
{
#line 541 "build_mode_constraints.m"
  {
#line 541 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_3;
#line 541 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 541 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv19_HeadVar__3_361;

#line 541 "build_mode_constraints.m"
    {
#line 541 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv19_HeadVar__3_361 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__541__1_2_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 541 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv19_HeadVar__3_361));
#line 541 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_3;
#line 541 "build_mode_constraints.m"
  }
#line 541 "build_mode_constraints.m"
}

#line 535 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8(
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 535 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3,
#line 535 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_4,
#line 535 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_5)
#line 535 "build_mode_constraints.m"
{
#line 535 "build_mode_constraints.m"
  {
#line 535 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 535 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv16_STATE_VARIABLE_VarInfo_23;
#line 535 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv15_STATE_VARIABLE_Constraints_25;

#line 535 "build_mode_constraints.m"
    {
#line 535 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv16_STATE_VARIABLE_VarInfo_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_4), &check_hlds__build_mode_constraints__conv15_STATE_VARIABLE_Constraints_25);
    }
#line 535 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv16_STATE_VARIABLE_VarInfo_23));
#line 535 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_5 = ((MR_Box) (check_hlds__build_mode_constraints__conv15_STATE_VARIABLE_Constraints_25));
#line 535 "build_mode_constraints.m"
  }
#line 535 "build_mode_constraints.m"
}

#line 533 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_7(
#line 533 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 533 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 533 "build_mode_constraints.m"
{
#line 533 "build_mode_constraints.m"
  {
#line 533 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 533 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 533 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv14_HeadVar__2_2;

#line 533 "build_mode_constraints.m"
    {
#line 533 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv14_HeadVar__2_2 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 533 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv14_HeadVar__2_2));
#line 533 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 533 "build_mode_constraints.m"
  }
#line 533 "build_mode_constraints.m"
}

#line 532 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_6(
#line 532 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 532 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 532 "build_mode_constraints.m"
{
#line 532 "build_mode_constraints.m"
  {
#line 532 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 532 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 532 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv13_HeadVar__2_2;

#line 532 "build_mode_constraints.m"
    {
#line 532 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv13_HeadVar__2_2 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 532 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv13_HeadVar__2_2));
#line 532 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 532 "build_mode_constraints.m"
  }
#line 532 "build_mode_constraints.m"
}

#line 430 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5(
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 430 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4,
#line 430 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_5,
#line 430 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_6)
#line 430 "build_mode_constraints.m"
{
#line 430 "build_mode_constraints.m"
  {
#line 430 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 430 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv10_STATE_VARIABLE_VarInfo_21;
#line 430 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv9_STATE_VARIABLE_Constraints_23;

#line 430 "build_mode_constraints.m"
    {
#line 430 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv10_STATE_VARIABLE_VarInfo_21, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_5), &check_hlds__build_mode_constraints__conv9_STATE_VARIABLE_Constraints_23);
    }
#line 430 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv10_STATE_VARIABLE_VarInfo_21));
#line 430 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__build_mode_constraints__conv9_STATE_VARIABLE_Constraints_23));
#line 430 "build_mode_constraints.m"
  }
#line 430 "build_mode_constraints.m"
}

#line 427 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4(
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 427 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 427 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 427 "build_mode_constraints.m"
{
#line 427 "build_mode_constraints.m"
  {
#line 427 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 427 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv7_STATE_VARIABLE_Constraints_13;

#line 427 "build_mode_constraints.m"
    {
#line 427 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv7_STATE_VARIABLE_Constraints_13);
    }
#line 427 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv7_STATE_VARIABLE_Constraints_13));
#line 427 "build_mode_constraints.m"
  }
#line 427 "build_mode_constraints.m"
}

#line 424 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3(
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 424 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3,
#line 424 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_4,
#line 424 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_5)
#line 424 "build_mode_constraints.m"
{
#line 424 "build_mode_constraints.m"
  {
#line 424 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 424 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_23;
#line 424 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv3_STATE_VARIABLE_Constraints_25;

#line 424 "build_mode_constraints.m"
    {
#line 424 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_4), &check_hlds__build_mode_constraints__conv3_STATE_VARIABLE_Constraints_25);
    }
#line 424 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_23));
#line 424 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_5 = ((MR_Box) (check_hlds__build_mode_constraints__conv3_STATE_VARIABLE_Constraints_25));
#line 424 "build_mode_constraints.m"
  }
#line 424 "build_mode_constraints.m"
}

#line 420 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2(
#line 420 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 420 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 420 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 420 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 420 "build_mode_constraints.m"
{
#line 420 "build_mode_constraints.m"
  {
#line 420 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 420 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_ConjConstraintsInfo_20;

#line 420 "build_mode_constraints.m"
    {
#line 420 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_ConjConstraintsInfo_20);
    }
#line 420 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_ConjConstraintsInfo_20));
#line 420 "build_mode_constraints.m"
  }
#line 420 "build_mode_constraints.m"
}

#line 647 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_1(
#line 647 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 647 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 647 "build_mode_constraints.m"
{
#line 647 "build_mode_constraints.m"
  {
#line 647 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 647 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 647 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__2_2;

#line 647 "build_mode_constraints.m"
    {
#line 647 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 647 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__2_2));
#line 647 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 647 "build_mode_constraints.m"
  }
#line 647 "build_mode_constraints.m"
}

#line 408 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_12,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_13,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_14,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalExpr_15,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Context_16,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__GoalId_17,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Nonlocals_18,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148,
#line 408 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149,
#line 408 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150,
#line 408 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151)
#line 408 "build_mode_constraints.m"
{
#line 416 "build_mode_constraints.m"
  {
#line 416 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;

#line 416 "build_mode_constraints.m"
#line 416 "build_mode_constraints.m"
    switch (MR_tag((MR_Word) check_hlds__build_mode_constraints__GoalExpr_15)) {
#line 416 "build_mode_constraints.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 416 "build_mode_constraints.m"
      case (MR_Integer) 0:
#line 546 "build_mode_constraints.m"
        {
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_369_369;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__TypeInfo_370_370;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__Goal_84 = (MR_Word) MR_body(((MR_Word) check_hlds__build_mode_constraints__GoalExpr_15), (MR_Integer) 0);
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__NegatedGoalInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_84, (MR_Integer) 1)));
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__NegatedGoalId_87;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__NonlocalsAtId_88;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__NonlocalsConstraintVars_89;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_214_214;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_216_216;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_218_218;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_219_219;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_221_221;
#line 546 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__VarMap_287;
#line 547 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_84, (MR_Integer) 0)));
#line 549 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_308_308;
#line 550 "build_mode_constraints.m"
          MR_Box check_hlds__build_mode_constraints__conv30_NonlocalsAtId_88;
#line 552 "build_mode_constraints.m"
          MR_Box check_hlds__build_mode_constraints__conv32_NonlocalsConstraintVars_89;
#line 561 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_309_309;
#line 561 "build_mode_constraints.m"
          MR_Box check_hlds__build_mode_constraints__conv34_STATE_VARIABLE_Constraints_151;

#line 548 "build_mode_constraints.m"
          {
#line 548 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__NegatedGoalId_87 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__NegatedGoalInfo_86);
          }
#line 549 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 0)));
#line 549 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__VarMap_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 1)));
#line 550 "build_mode_constraints.m"
          {
#line 550 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__V_214_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 550 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_214_214, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[4]));
#line 550 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_214_214, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17));
#line 550 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_214_214, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 550 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_214_214, 3) = ((MR_Box) (check_hlds__build_mode_constraints__VarMap_287));
#line 550 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_214_214, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_14));
#line 550 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_214_214, 5) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_17));
#line 550 "build_mode_constraints.m"
          }
#line 6780 "check_hlds.build_mode_constraints.c"
          check_hlds__build_mode_constraints__TypeCtorInfo_369_369 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6782 "check_hlds.build_mode_constraints.c"
          check_hlds__build_mode_constraints__TypeInfo_370_370 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 550 "build_mode_constraints.m"
          {
#line 550 "build_mode_constraints.m"
            parse_tree__set_of_var__fold_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_369_369, check_hlds__build_mode_constraints__TypeInfo_370_370, check_hlds__build_mode_constraints__V_214_214, check_hlds__build_mode_constraints__Nonlocals_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__build_mode_constraints__conv30_NonlocalsAtId_88);
          }
#line 550 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__NonlocalsAtId_88 = ((MR_Word) check_hlds__build_mode_constraints__conv30_NonlocalsAtId_88);
#line 552 "build_mode_constraints.m"
          {
#line 552 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 552 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_216_216, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[4]));
#line 552 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_216_216, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18));
#line 552 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_216_216, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 552 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_216_216, 3) = ((MR_Box) (check_hlds__build_mode_constraints__VarMap_287));
#line 552 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_216_216, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_14));
#line 552 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_216_216, 5) = ((MR_Box) (check_hlds__build_mode_constraints__NegatedGoalId_87));
#line 552 "build_mode_constraints.m"
          }
#line 552 "build_mode_constraints.m"
          {
#line 552 "build_mode_constraints.m"
            parse_tree__set_of_var__fold_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_369_369, check_hlds__build_mode_constraints__TypeInfo_370_370, check_hlds__build_mode_constraints__V_216_216, check_hlds__build_mode_constraints__Nonlocals_18, ((MR_Box) (check_hlds__build_mode_constraints__NonlocalsAtId_88)), &check_hlds__build_mode_constraints__conv32_NonlocalsConstraintVars_89);
          }
#line 552 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__NonlocalsConstraintVars_89 = ((MR_Word) check_hlds__build_mode_constraints__conv32_NonlocalsConstraintVars_89);
#line 555 "build_mode_constraints.m"
          {
#line 555 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Goal_84, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_218_218);
          }
#line 561 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 561 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 561 "build_mode_constraints.m"
          {
#line 561 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 561 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_219_219, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[4]));
#line 561 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_219_219, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19));
#line 561 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_219_219, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 561 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_219_219, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_221_221));
#line 561 "build_mode_constraints.m"
            MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_219_219, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 561 "build_mode_constraints.m"
          }
#line 561 "build_mode_constraints.m"
          {
#line 561 "build_mode_constraints.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__build_mode_constraints__V_219_219, check_hlds__build_mode_constraints__NonlocalsConstraintVars_89, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_218_218)), &check_hlds__build_mode_constraints__conv34_STATE_VARIABLE_Constraints_151);
          }
#line 561 "build_mode_constraints.m"
          *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151 = ((MR_Word) check_hlds__build_mode_constraints__conv34_STATE_VARIABLE_Constraints_151);
#line 546 "build_mode_constraints.m"
        }
#line 416 "build_mode_constraints.m"
        break;
#line 416 "build_mode_constraints.m"
      case (MR_Integer) 1:
#line 486 "build_mode_constraints.m"
        {
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__LHSvar_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 0)));
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__RHS_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__LHSvarProducedHere_61;
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_232_232;
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints___Mode_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints___Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 3)));
#line 486 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints___UnifyContext_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 4)));

#line 487 "build_mode_constraints.m"
          {
#line 487 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__LHSvar_56, check_hlds__build_mode_constraints__GoalId_17, &check_hlds__build_mode_constraints__LHSvarProducedHere_61, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_232_232);
          }
#line 498 "build_mode_constraints.m"
#line 498 "build_mode_constraints.m"
          switch (MR_tag((MR_Word) check_hlds__build_mode_constraints__RHS_57)) {
#line 498 "build_mode_constraints.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 498 "build_mode_constraints.m"
            case (MR_Integer) 0:
#line 490 "build_mode_constraints.m"
              {
#line 490 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__RHSvar_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__RHS_57, (MR_Integer) 0)));
#line 490 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__RHSvarProducedHere_63;
#line 490 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__V_246_246;
#line 496 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__V_303_303;

#line 494 "build_mode_constraints.m"
                {
#line 494 "build_mode_constraints.m"
                  check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__RHSvar_62, check_hlds__build_mode_constraints__GoalId_17, &check_hlds__build_mode_constraints__RHSvarProducedHere_63, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_232_232, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149);
                }
#line 496 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 496 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 496 "build_mode_constraints.m"
                {
#line 496 "build_mode_constraints.m"
                  check_hlds__abstract_mode_constraints__not_both_6_p_0(check_hlds__build_mode_constraints__V_246_246, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__LHSvarProducedHere_61, check_hlds__build_mode_constraints__RHSvarProducedHere_63, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
                }
#line 490 "build_mode_constraints.m"
              }
#line 498 "build_mode_constraints.m"
              break;
#line 498 "build_mode_constraints.m"
            case (MR_Integer) 1:
#line 499 "build_mode_constraints.m"
              {
#line 499 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__ArgsProducedHere_66;
#line 499 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__Args_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__RHS_57, (MR_Integer) 2)));
#line 499 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints___Functor_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__RHS_57, (MR_Integer) 0)));
#line 499 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints___IsExistConstr_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__RHS_57, (MR_Integer) 1)));

#line 500 "build_mode_constraints.m"
                {
#line 500 "build_mode_constraints.m"
                  check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Args_283, check_hlds__build_mode_constraints__GoalId_17, &check_hlds__build_mode_constraints__ArgsProducedHere_66, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_232_232, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149);
                }
#line 511 "build_mode_constraints.m"
                if ((check_hlds__build_mode_constraints__ArgsProducedHere_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "build_mode_constraints.m"
                  *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151 = check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150;
#line 511 "build_mode_constraints.m"
                else
#line 511 "build_mode_constraints.m"
                  {
#line 511 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__ArgsProducedHere_66, (MR_Integer) 1)));
#line 511 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__ArgsProducedHere_66, (MR_Integer) 0)));
#line 511 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 507 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));

#line 511 "build_mode_constraints.m"
                    if ((check_hlds__build_mode_constraints__V_410_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "build_mode_constraints.m"
                      {
#line 515 "build_mode_constraints.m"
                        check_hlds__abstract_mode_constraints__not_both_6_p_0(check_hlds__build_mode_constraints__V_413_413, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__LHSvarProducedHere_61, check_hlds__build_mode_constraints__V_411_411, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
                      }
#line 511 "build_mode_constraints.m"
                    else
#line 503 "build_mode_constraints.m"
                      {
#line 503 "build_mode_constraints.m"
                        MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_242_242;
#line 503 "build_mode_constraints.m"
                        MR_Word check_hlds__build_mode_constraints__V_243_243;
#line 509 "build_mode_constraints.m"
                        MR_Word check_hlds__build_mode_constraints__V_305_305;

#line 507 "build_mode_constraints.m"
                        {
#line 507 "build_mode_constraints.m"
                          check_hlds__abstract_mode_constraints__equivalent_5_p_0(check_hlds__build_mode_constraints__V_413_413, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__ArgsProducedHere_66, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_242_242);
                        }
#line 509 "build_mode_constraints.m"
                        check_hlds__build_mode_constraints__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 509 "build_mode_constraints.m"
                        check_hlds__build_mode_constraints__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 509 "build_mode_constraints.m"
                        {
#line 509 "build_mode_constraints.m"
                          check_hlds__abstract_mode_constraints__not_both_6_p_0(check_hlds__build_mode_constraints__V_243_243, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__LHSvarProducedHere_61, check_hlds__build_mode_constraints__V_411_411, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_242_242, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
                        }
#line 503 "build_mode_constraints.m"
                      }
#line 511 "build_mode_constraints.m"
                  }
#line 499 "build_mode_constraints.m"
              }
#line 498 "build_mode_constraints.m"
              break;
#line 498 "build_mode_constraints.m"
            case (MR_Integer) 2:
#line 524 "build_mode_constraints.m"
              {
#line 525 "build_mode_constraints.m"
                {
#line 525 "build_mode_constraints.m"
                  mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "unify with lambda goal");
#line 525 "build_mode_constraints.m"
                  return;
                }
#line 524 "build_mode_constraints.m"
              }
#line 498 "build_mode_constraints.m"
              break;
#line 498 "build_mode_constraints.m"
          }
#line 486 "build_mode_constraints.m"
        }
#line 416 "build_mode_constraints.m"
        break;
#line 416 "build_mode_constraints.m"
      case (MR_Integer) 2:
#line 440 "build_mode_constraints.m"
        {
#line 440 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 0)));
#line 440 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));
#line 440 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__CalleePredInfo_31;
#line 440 "build_mode_constraints.m"
          MR_Integer check_hlds__build_mode_constraints__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 440 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 3)));
#line 440 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 4)));
#line 440 "build_mode_constraints.m"
          MR_Word check_hlds__build_mode_constraints__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 5)));

#line 441 "build_mode_constraints.m"
          {
#line 441 "build_mode_constraints.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__CalleePredId_25, &check_hlds__build_mode_constraints__CalleePredInfo_31);
          }
#line 444 "build_mode_constraints.m"
          {
#line 444 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__build_mode_constraints__CalleePredInfo_31);
          }
#line 452 "build_mode_constraints.m"
          if (check_hlds__build_mode_constraints__succeeded)
#line 446 "build_mode_constraints.m"
            {
#line 446 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CalleeClausesInfo_33;
#line 446 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CalleeHeadVars_34;
#line 446 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_260_260;

#line 446 "build_mode_constraints.m"
              {
#line 446 "build_mode_constraints.m"
                hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__build_mode_constraints__CalleePredInfo_31, &check_hlds__build_mode_constraints__CalleeClausesInfo_33);
              }
#line 447 "build_mode_constraints.m"
              {
#line 447 "build_mode_constraints.m"
                hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__build_mode_constraints__CalleeClausesInfo_33, &check_hlds__build_mode_constraints__CalleeHeadVars_34);
              }
#line 448 "build_mode_constraints.m"
              {
#line 448 "build_mode_constraints.m"
                check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_p_0(check_hlds__build_mode_constraints__CalleePredId_25, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_260_260);
              }
#line 449 "build_mode_constraints.m"
              {
#line 449 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__GoalId_17, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Args_27, check_hlds__build_mode_constraints__CalleePredId_25, check_hlds__build_mode_constraints__CalleeHeadVars_34, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_260_260, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
              }
#line 446 "build_mode_constraints.m"
            }
#line 452 "build_mode_constraints.m"
          else
#line 454 "build_mode_constraints.m"
            {
#line 454 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_339_339;
#line 454 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CalleeProcTable_35;
#line 454 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CalleeProcInfos_36;
#line 454 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CalleeArgModeDecls_37;

#line 454 "build_mode_constraints.m"
              {
#line 454 "build_mode_constraints.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__build_mode_constraints__CalleePredInfo_31, &check_hlds__build_mode_constraints__CalleeProcTable_35);
              }
#line 7088 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeCtorInfo_339_339 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 455 "build_mode_constraints.m"
              {
#line 455 "build_mode_constraints.m"
                mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__build_mode_constraints__TypeCtorInfo_339_339, check_hlds__build_mode_constraints__CalleeProcTable_35, &check_hlds__build_mode_constraints__CalleeProcInfos_36);
              }
#line 456 "build_mode_constraints.m"
              {
#line 456 "build_mode_constraints.m"
                mercury__list__map_3_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_339_339, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[9], check_hlds__build_mode_constraints__CalleeProcInfos_36, &check_hlds__build_mode_constraints__CalleeArgModeDecls_37);
              }
#line 458 "build_mode_constraints.m"
              {
#line 458 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__CalleeArgModeDecls_37, check_hlds__build_mode_constraints__GoalId_17, check_hlds__build_mode_constraints__Args_27, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
              }
#line 454 "build_mode_constraints.m"
            }
#line 440 "build_mode_constraints.m"
        }
#line 416 "build_mode_constraints.m"
        break;
#line 416 "build_mode_constraints.m"
      case (MR_Integer) 3:
#line 416 "build_mode_constraints.m"
#line 416 "build_mode_constraints.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 0)))) {
#line 416 "build_mode_constraints.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 0:
#line 463 "build_mode_constraints.m"
            {
#line 463 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Details_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 463 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));
#line 463 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 3)));
#line 463 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 4)));
#line 463 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 5)));

#line 469 "build_mode_constraints.m"
#line 469 "build_mode_constraints.m"
              switch (MR_tag((MR_Word) check_hlds__build_mode_constraints__Details_38)) {
#line 469 "build_mode_constraints.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 469 "build_mode_constraints.m"
                case (MR_Integer) 0:
#line 467 "build_mode_constraints.m"
                  {
#line 468 "build_mode_constraints.m"
                    {
#line 468 "build_mode_constraints.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "higher_order generic_call");
#line 468 "build_mode_constraints.m"
                      return;
                    }
#line 467 "build_mode_constraints.m"
                  }
#line 469 "build_mode_constraints.m"
                  break;
#line 469 "build_mode_constraints.m"
                case (MR_Integer) 1:
#line 471 "build_mode_constraints.m"
                  {
#line 472 "build_mode_constraints.m"
                    {
#line 472 "build_mode_constraints.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "class_method generic_call");
#line 472 "build_mode_constraints.m"
                      return;
                    }
#line 471 "build_mode_constraints.m"
                  }
#line 469 "build_mode_constraints.m"
                  break;
#line 469 "build_mode_constraints.m"
                case (MR_Integer) 2:
#line 476 "build_mode_constraints.m"
                  {
#line 477 "build_mode_constraints.m"
                    {
#line 477 "build_mode_constraints.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "event_call generic_call");
#line 477 "build_mode_constraints.m"
                      return;
                    }
#line 476 "build_mode_constraints.m"
                  }
#line 469 "build_mode_constraints.m"
                  break;
#line 469 "build_mode_constraints.m"
                case (MR_Integer) 3:
#line 480 "build_mode_constraints.m"
                  {
#line 480 "build_mode_constraints.m"
                  }
#line 469 "build_mode_constraints.m"
                  break;
#line 469 "build_mode_constraints.m"
              }
#line 463 "build_mode_constraints.m"
              *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148;
#line 463 "build_mode_constraints.m"
              *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151 = check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150;
#line 463 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 1:
#line 646 "build_mode_constraints.m"
            {
#line 646 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CalledPred_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));
#line 646 "build_mode_constraints.m"
              MR_Integer check_hlds__build_mode_constraints__ProcId_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 3)));
#line 646 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ForeignArgs_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 4)));
#line 646 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CallArgs_130;
#line 646 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ProcInfo_132;
#line 645 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 645 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 5)));
#line 645 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 6)));
#line 645 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 7)));
#line 648 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_131_131;
#line 650 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_162_162;
#line 650 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_409_409;
#line 650 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints___OrigDecl_133;

#line 647 "build_mode_constraints.m"
              {
#line 647 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__CallArgs_130 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[4], check_hlds__build_mode_constraints__ForeignArgs_126);
              }
#line 648 "build_mode_constraints.m"
              {
#line 648 "build_mode_constraints.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__CalledPred_124, check_hlds__build_mode_constraints__ProcId_125, &check_hlds__build_mode_constraints__V_131_131, &check_hlds__build_mode_constraints__ProcInfo_132);
              }
#line 650 "build_mode_constraints.m"
              {
#line 650 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 650 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_162_162, 0) = NULL;
#line 650 "build_mode_constraints.m"
              }
#line 650 "build_mode_constraints.m"
              {
#line 650 "build_mode_constraints.m"
                hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(check_hlds__build_mode_constraints__ProcInfo_132, &check_hlds__build_mode_constraints__V_409_409);
              }
#line 650 "build_mode_constraints.m"
              {
#line 650 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__succeeded = check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], check_hlds__build_mode_constraints__V_162_162, check_hlds__build_mode_constraints__V_409_409);
              }
#line 657 "build_mode_constraints.m"
              if (check_hlds__build_mode_constraints__succeeded)
#line 651 "build_mode_constraints.m"
                {
#line 651 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Decl_134;
#line 651 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_163_163;

#line 651 "build_mode_constraints.m"
                  {
#line 651 "build_mode_constraints.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__build_mode_constraints__ProcInfo_132, &check_hlds__build_mode_constraints__Decl_134);
                  }
#line 656 "build_mode_constraints.m"
                  {
#line 656 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_163_163, 0) = ((MR_Box) (check_hlds__build_mode_constraints__Decl_134));
#line 656 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "build_mode_constraints.m"
                  }
#line 655 "build_mode_constraints.m"
                  {
#line 655 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__Context_16, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__V_163_163, check_hlds__build_mode_constraints__GoalId_17, check_hlds__build_mode_constraints__CallArgs_130, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
                  }
#line 651 "build_mode_constraints.m"
                }
#line 657 "build_mode_constraints.m"
              else
#line 658 "build_mode_constraints.m"
                {
#line 658 "build_mode_constraints.m"
                  {
#line 658 "build_mode_constraints.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "no mode declaration for foreign proc");
#line 658 "build_mode_constraints.m"
                    return;
                  }
#line 658 "build_mode_constraints.m"
                }
#line 646 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 2:
#line 416 "build_mode_constraints.m"
            {
#line 416 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 416 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));

#line 434 "build_mode_constraints.m"
#line 434 "build_mode_constraints.m"
              switch (check_hlds__build_mode_constraints__ConjType_21) {
#line 434 "build_mode_constraints.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 434 "build_mode_constraints.m"
                case (MR_Integer) 1:
#line 435 "build_mode_constraints.m"
                  {
#line 437 "build_mode_constraints.m"
                    {
#line 437 "build_mode_constraints.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "par_conj");
#line 437 "build_mode_constraints.m"
                      return;
                    }
#line 435 "build_mode_constraints.m"
                  }
#line 434 "build_mode_constraints.m"
                  break;
#line 434 "build_mode_constraints.m"
                case (MR_Integer) 0:
#line 418 "build_mode_constraints.m"
                  {
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_317_317;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_324_324;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_325_325;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__TypeInfo_330_330;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__TypeInfo_331_331;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__VarMap_23;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__ConjConstraintsInfo_24;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_269_269;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_270_270;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_271_271;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_272_272;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_273_273;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_274_274;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_275_275;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_276_276;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_277_277;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_278_278;
#line 418 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_279_279;
#line 423 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_299_299;
#line 419 "build_mode_constraints.m"
                    MR_Box check_hlds__build_mode_constraints__conv2_ConjConstraintsInfo_24;
#line 424 "build_mode_constraints.m"
                    MR_Box check_hlds__build_mode_constraints__conv6_STATE_VARIABLE_VarInfo_272_272;
#line 424 "build_mode_constraints.m"
                    MR_Box check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_273_273;
#line 427 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_300_300;
#line 428 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_301_301;
#line 426 "build_mode_constraints.m"
                    MR_Box check_hlds__build_mode_constraints__conv8_STATE_VARIABLE_Constraints_276_276;
#line 432 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__V_302_302;
#line 429 "build_mode_constraints.m"
                    MR_Box check_hlds__build_mode_constraints__conv12_STATE_VARIABLE_VarInfo_149;
#line 429 "build_mode_constraints.m"
                    MR_Box check_hlds__build_mode_constraints__conv11_STATE_VARIABLE_Constraints_151;

#line 422 "build_mode_constraints.m"
                    {
#line 422 "build_mode_constraints.m"
                      check_hlds__build_mode_constraints__V_270_270 = check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0();
                    }
#line 7403 "check_hlds.build_mode_constraints.c"
                    check_hlds__build_mode_constraints__TypeCtorInfo_317_317 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 423 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 0)));
#line 423 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__VarMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 1)));
#line 420 "build_mode_constraints.m"
                    {
#line 420 "build_mode_constraints.m"
                      check_hlds__build_mode_constraints__V_269_269 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 420 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_269_269, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[1]));
#line 420 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_269_269, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2));
#line 420 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_269_269, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 420 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_269_269, 3) = ((MR_Box) (check_hlds__build_mode_constraints__VarMap_23));
#line 420 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_269_269, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_14));
#line 420 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_269_269, 5) = ((MR_Box) (check_hlds__build_mode_constraints__Nonlocals_18));
#line 420 "build_mode_constraints.m"
                    }
#line 419 "build_mode_constraints.m"
                    {
#line 419 "build_mode_constraints.m"
                      mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_317_317, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0, check_hlds__build_mode_constraints__V_269_269, check_hlds__build_mode_constraints__Goals_22, ((MR_Box) (check_hlds__build_mode_constraints__V_270_270)), &check_hlds__build_mode_constraints__conv2_ConjConstraintsInfo_24);
                    }
#line 419 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__ConjConstraintsInfo_24 = ((MR_Word) check_hlds__build_mode_constraints__conv2_ConjConstraintsInfo_24);
#line 424 "build_mode_constraints.m"
                    {
#line 424 "build_mode_constraints.m"
                      check_hlds__build_mode_constraints__V_271_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 424 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_271_271, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_9[0]));
#line 424 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_271_271, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3));
#line 424 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_271_271, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 424 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_271_271, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ModuleInfo_12));
#line 424 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_271_271, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_13));
#line 424 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_271_271, 5) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_14));
#line 424 "build_mode_constraints.m"
                    }
#line 7452 "check_hlds.build_mode_constraints.c"
                    check_hlds__build_mode_constraints__TypeCtorInfo_324_324 = (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0;
#line 7454 "check_hlds.build_mode_constraints.c"
                    check_hlds__build_mode_constraints__TypeCtorInfo_325_325 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
#line 424 "build_mode_constraints.m"
                    {
#line 424 "build_mode_constraints.m"
                      mercury__list__foldl2_6_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_317_317, check_hlds__build_mode_constraints__TypeCtorInfo_324_324, check_hlds__build_mode_constraints__TypeCtorInfo_325_325, check_hlds__build_mode_constraints__V_271_271, check_hlds__build_mode_constraints__Goals_22, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148)), &check_hlds__build_mode_constraints__conv6_STATE_VARIABLE_VarInfo_272_272, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150)), &check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_273_273);
                    }
#line 424 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_272_272 = ((MR_Word) check_hlds__build_mode_constraints__conv6_STATE_VARIABLE_VarInfo_272_272);
#line 424 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_273_273 = ((MR_Word) check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_Constraints_273_273);
#line 427 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_272_272, (MR_Integer) 0)));
#line 427 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_272_272, (MR_Integer) 1)));
#line 427 "build_mode_constraints.m"
                    {
#line 427 "build_mode_constraints.m"
                      check_hlds__build_mode_constraints__V_274_274 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 427 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_274_274, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[2]));
#line 427 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_274_274, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4));
#line 427 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_274_274, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_274_274, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_277_277));
#line 427 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_274_274, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 427 "build_mode_constraints.m"
                    }
#line 428 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__ConjConstraintsInfo_24, (MR_Integer) 0)));
#line 428 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__ConjConstraintsInfo_24, (MR_Integer) 1)));
#line 7489 "check_hlds.build_mode_constraints.c"
                    check_hlds__build_mode_constraints__TypeInfo_330_330 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
#line 7491 "check_hlds.build_mode_constraints.c"
                    check_hlds__build_mode_constraints__TypeInfo_331_331 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 426 "build_mode_constraints.m"
                    {
#line 426 "build_mode_constraints.m"
                      mercury__map__foldl_4_p_0(check_hlds__build_mode_constraints__TypeInfo_330_330, check_hlds__build_mode_constraints__TypeInfo_331_331, check_hlds__build_mode_constraints__TypeCtorInfo_325_325, check_hlds__build_mode_constraints__V_274_274, check_hlds__build_mode_constraints__V_275_275, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_273_273)), &check_hlds__build_mode_constraints__conv8_STATE_VARIABLE_Constraints_276_276);
                    }
#line 426 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_276_276 = ((MR_Word) check_hlds__build_mode_constraints__conv8_STATE_VARIABLE_Constraints_276_276);
#line 430 "build_mode_constraints.m"
                    {
#line 430 "build_mode_constraints.m"
                      check_hlds__build_mode_constraints__V_278_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_10[0]));
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5));
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_13));
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_14));
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 5) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 430 "build_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_278_278, 6) = ((MR_Box) (check_hlds__build_mode_constraints__GoalId_17));
#line 430 "build_mode_constraints.m"
                    }
#line 432 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__ConjConstraintsInfo_24, (MR_Integer) 0)));
#line 432 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__ConjConstraintsInfo_24, (MR_Integer) 1)));
#line 429 "build_mode_constraints.m"
                    {
#line 429 "build_mode_constraints.m"
                      mercury__map__foldl2_6_p_0(check_hlds__build_mode_constraints__TypeInfo_330_330, check_hlds__build_mode_constraints__TypeInfo_331_331, check_hlds__build_mode_constraints__TypeCtorInfo_324_324, check_hlds__build_mode_constraints__TypeCtorInfo_325_325, check_hlds__build_mode_constraints__V_278_278, check_hlds__build_mode_constraints__V_279_279, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_272_272)), &check_hlds__build_mode_constraints__conv12_STATE_VARIABLE_VarInfo_149, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_276_276)), &check_hlds__build_mode_constraints__conv11_STATE_VARIABLE_Constraints_151);
                    }
#line 429 "build_mode_constraints.m"
                    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149 = ((MR_Word) check_hlds__build_mode_constraints__conv12_STATE_VARIABLE_VarInfo_149);
#line 429 "build_mode_constraints.m"
                    *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151 = ((MR_Word) check_hlds__build_mode_constraints__conv11_STATE_VARIABLE_Constraints_151);
#line 418 "build_mode_constraints.m"
                  }
#line 434 "build_mode_constraints.m"
                  break;
#line 434 "build_mode_constraints.m"
              }
#line 416 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 3:
#line 528 "build_mode_constraints.m"
            {
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_343_343 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_344_344 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_356_356;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeInfo_358_358;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__DisjunctGoalIds_79;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsHere_80;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsAtDisjuncts_81;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__GoalInfos_82;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__EquivVarss_83;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_222_222;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_225_225;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_227_227;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_229_229;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_231_231;
#line 528 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Goals_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 535 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv18_STATE_VARIABLE_VarInfo_149;
#line 535 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv17_STATE_VARIABLE_Constraints_227_227;
#line 543 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_307_307;
#line 543 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv21_STATE_VARIABLE_Constraints_151;

#line 532 "build_mode_constraints.m"
              {
#line 532 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__GoalInfos_82 = mercury__list__map_2_f_0(check_hlds__build_mode_constraints__TypeCtorInfo_343_343, check_hlds__build_mode_constraints__TypeCtorInfo_344_344, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[5], check_hlds__build_mode_constraints__Goals_286);
              }
#line 533 "build_mode_constraints.m"
              {
#line 533 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__DisjunctGoalIds_79 = mercury__list__map_2_f_0(check_hlds__build_mode_constraints__TypeCtorInfo_344_344, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[6], check_hlds__build_mode_constraints__GoalInfos_82);
              }
#line 529 "build_mode_constraints.m"
              {
#line 529 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__GoalId_17, check_hlds__build_mode_constraints__DisjunctGoalIds_79, check_hlds__build_mode_constraints__Nonlocals_18, &check_hlds__build_mode_constraints__NonlocalsHere_80, &check_hlds__build_mode_constraints__NonlocalsAtDisjuncts_81, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_222_222);
              }
#line 535 "build_mode_constraints.m"
              {
#line 535 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_225_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 535 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_225_225, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_9[0]));
#line 535 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_225_225, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8));
#line 535 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_225_225, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 535 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_225_225, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ModuleInfo_12));
#line 535 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_225_225, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_13));
#line 535 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_225_225, 5) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_14));
#line 535 "build_mode_constraints.m"
              }
#line 7619 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeCtorInfo_356_356 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
#line 535 "build_mode_constraints.m"
              {
#line 535 "build_mode_constraints.m"
                mercury__list__foldl2_6_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_343_343, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__TypeCtorInfo_356_356, check_hlds__build_mode_constraints__V_225_225, check_hlds__build_mode_constraints__Goals_286, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_222_222)), &check_hlds__build_mode_constraints__conv18_STATE_VARIABLE_VarInfo_149, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150)), &check_hlds__build_mode_constraints__conv17_STATE_VARIABLE_Constraints_227_227);
              }
#line 535 "build_mode_constraints.m"
              *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149 = ((MR_Word) check_hlds__build_mode_constraints__conv18_STATE_VARIABLE_VarInfo_149);
#line 535 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_227_227 = ((MR_Word) check_hlds__build_mode_constraints__conv17_STATE_VARIABLE_Constraints_227_227);
#line 7630 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeInfo_358_358 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 541 "build_mode_constraints.m"
              {
#line 541 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__EquivVarss_83 = mercury__list__map_corresponding_3_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], check_hlds__build_mode_constraints__TypeInfo_358_358, check_hlds__build_mode_constraints__TypeInfo_358_358, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[7], check_hlds__build_mode_constraints__NonlocalsHere_80, check_hlds__build_mode_constraints__NonlocalsAtDisjuncts_81);
              }
#line 543 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 543 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 543 "build_mode_constraints.m"
              {
#line 543 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_229_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 543 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_229_229, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[3]));
#line 543 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_229_229, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10));
#line 543 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_229_229, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 543 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_229_229, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_231_231));
#line 543 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_229_229, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 543 "build_mode_constraints.m"
              }
#line 543 "build_mode_constraints.m"
              {
#line 543 "build_mode_constraints.m"
                mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeInfo_358_358, check_hlds__build_mode_constraints__TypeCtorInfo_356_356, check_hlds__build_mode_constraints__V_229_229, check_hlds__build_mode_constraints__EquivVarss_83, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_227_227)), &check_hlds__build_mode_constraints__conv21_STATE_VARIABLE_Constraints_151);
              }
#line 543 "build_mode_constraints.m"
              *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151 = ((MR_Word) check_hlds__build_mode_constraints__conv21_STATE_VARIABLE_Constraints_151);
#line 528 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 4:
#line 483 "build_mode_constraints.m"
            {
#line 484 "build_mode_constraints.m"
              {
#line 484 "build_mode_constraints.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "switch");
#line 484 "build_mode_constraints.m"
                return;
              }
#line 483 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 5:
#line 564 "build_mode_constraints.m"
            {
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeInfo_380_380;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeInfo_381_381;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__SomeGoalInfo_92;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__SomeGoalId_93;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsList_94;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsAtSubGoal_95;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_201_201;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_202_202;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_209_209;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_210_210;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_211_211;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsHere_290;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__EquivVarss_291;
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Goal_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));
#line 564 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints___Reason_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 565 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_292, (MR_Integer) 0)));
#line 580 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_310_310;
#line 580 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv38_STATE_VARIABLE_Constraints_210_210;

#line 565 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__SomeGoalInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_292, (MR_Integer) 1)));
#line 566 "build_mode_constraints.m"
              {
#line 566 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__SomeGoalId_93 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__SomeGoalInfo_92);
              }
#line 572 "build_mode_constraints.m"
              {
#line 572 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__NonlocalsList_94 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__Nonlocals_18);
              }
#line 573 "build_mode_constraints.m"
              {
#line 573 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__NonlocalsList_94, check_hlds__build_mode_constraints__GoalId_17, &check_hlds__build_mode_constraints__NonlocalsHere_290, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_201_201);
              }
#line 575 "build_mode_constraints.m"
              {
#line 575 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__NonlocalsList_94, check_hlds__build_mode_constraints__SomeGoalId_93, &check_hlds__build_mode_constraints__NonlocalsAtSubGoal_95, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_201_201, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_202_202);
              }
#line 7746 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeInfo_380_380 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
#line 7748 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeInfo_381_381 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 577 "build_mode_constraints.m"
              {
#line 577 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__EquivVarss_291 = mercury__list__map_corresponding_3_f_0(check_hlds__build_mode_constraints__TypeInfo_380_380, check_hlds__build_mode_constraints__TypeInfo_380_380, check_hlds__build_mode_constraints__TypeInfo_381_381, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[10], check_hlds__build_mode_constraints__NonlocalsHere_290, check_hlds__build_mode_constraints__NonlocalsAtSubGoal_95);
              }
#line 580 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_202_202, (MR_Integer) 0)));
#line 580 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_202_202, (MR_Integer) 1)));
#line 580 "build_mode_constraints.m"
              {
#line 580 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_209_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 580 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_209_209, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[3]));
#line 580 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_209_209, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22));
#line 580 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_209_209, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 580 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_209_209, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_211_211));
#line 580 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_209_209, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 580 "build_mode_constraints.m"
              }
#line 580 "build_mode_constraints.m"
              {
#line 580 "build_mode_constraints.m"
                mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeInfo_381_381, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__build_mode_constraints__V_209_209, check_hlds__build_mode_constraints__EquivVarss_291, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150)), &check_hlds__build_mode_constraints__conv38_STATE_VARIABLE_Constraints_210_210);
              }
#line 580 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_210_210 = ((MR_Word) check_hlds__build_mode_constraints__conv38_STATE_VARIABLE_Constraints_210_210);
#line 583 "build_mode_constraints.m"
              {
#line 583 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Goal_292, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_202_202, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_210_210, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151);
              }
#line 564 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 6:
#line 586 "build_mode_constraints.m"
            {
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeInfo_389_389;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeInfo_392_392;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeInfo_393_393;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_397_397;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ExistVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Cond_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 2)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Then_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 3)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Else_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 4)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CondInfo_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Cond_99, (MR_Integer) 1)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ThenInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Then_100, (MR_Integer) 1)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ElseInfo_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Else_101, (MR_Integer) 1)));
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CondId_108;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ThenId_109;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ElseId_110;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsAtCond_111;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsAtThen_112;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsAtElse_113;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__CondNonlocals_114;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__ThenNonlocals_115;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalToCond_116;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__LocalAndShared_117;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__LocalAndSharedAtCond_118;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__LocalAndSharedAtThen_119;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_170_170;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_171_171;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_172_172;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_173_173;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_174_174;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_175_175;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_176_176;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_177_177;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_178_178;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_179_179;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_180_180;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_181_181;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_183_183;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_192_192;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_193_193;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_194_194;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_195_195;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_196_196;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_197_197;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_198_198;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_200_200;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsHere_296;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__EquivVarss_297;
#line 586 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__NonlocalsList_298;
#line 587 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Cond_99, (MR_Integer) 0)));
#line 588 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Then_100, (MR_Integer) 0)));
#line 589 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Else_101, (MR_Integer) 0)));
#line 631 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_311_311;
#line 631 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv24_STATE_VARIABLE_Constraints_193_193;
#line 635 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_312_312;
#line 635 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv26_STATE_VARIABLE_Constraints_196_196;
#line 642 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__V_313_313;
#line 642 "build_mode_constraints.m"
              MR_Box check_hlds__build_mode_constraints__conv28_STATE_VARIABLE_Constraints_151;

#line 590 "build_mode_constraints.m"
              {
#line 590 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__CondId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__CondInfo_103);
              }
#line 591 "build_mode_constraints.m"
              {
#line 591 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__ThenId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__ThenInfo_105);
              }
#line 592 "build_mode_constraints.m"
              {
#line 592 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__ElseId_110 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__ElseInfo_107);
              }
#line 602 "build_mode_constraints.m"
              {
#line 602 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__NonlocalsList_298 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__Nonlocals_18);
              }
#line 594 "build_mode_constraints.m"
              {
#line 594 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__NonlocalsList_298, check_hlds__build_mode_constraints__GoalId_17, &check_hlds__build_mode_constraints__NonlocalsHere_296, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_148, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_170_170);
              }
#line 596 "build_mode_constraints.m"
              {
#line 596 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__NonlocalsList_298, check_hlds__build_mode_constraints__CondId_108, &check_hlds__build_mode_constraints__NonlocalsAtCond_111, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_170_170, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_171_171);
              }
#line 598 "build_mode_constraints.m"
              {
#line 598 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__NonlocalsList_298, check_hlds__build_mode_constraints__ThenId_109, &check_hlds__build_mode_constraints__NonlocalsAtThen_112, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_171_171, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_172_172);
              }
#line 600 "build_mode_constraints.m"
              {
#line 600 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__NonlocalsList_298, check_hlds__build_mode_constraints__ElseId_110, &check_hlds__build_mode_constraints__NonlocalsAtElse_113, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_172_172, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_173_173);
              }
#line 607 "build_mode_constraints.m"
              {
#line 607 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__CondNonlocals_114 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__build_mode_constraints__CondInfo_103);
              }
#line 608 "build_mode_constraints.m"
              {
#line 608 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__ThenNonlocals_115 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__build_mode_constraints__ThenInfo_105);
              }
#line 609 "build_mode_constraints.m"
              {
#line 609 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 609 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_174_174, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[5]));
#line 609 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_174_174, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11));
#line 609 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_174_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 609 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_174_174, 3) = ((MR_Box) (check_hlds__build_mode_constraints__CondNonlocals_114));
#line 609 "build_mode_constraints.m"
              }
#line 7972 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeInfo_389_389 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
#line 609 "build_mode_constraints.m"
              {
#line 609 "build_mode_constraints.m"
                mercury__list__filter_3_p_0(check_hlds__build_mode_constraints__TypeInfo_389_389, check_hlds__build_mode_constraints__V_174_174, check_hlds__build_mode_constraints__ExistVars_98, &check_hlds__build_mode_constraints__NonlocalToCond_116);
              }
#line 611 "build_mode_constraints.m"
              {
#line 611 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 611 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_175_175, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[5]));
#line 611 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_175_175, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12));
#line 611 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_175_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 611 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_175_175, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ThenNonlocals_115));
#line 611 "build_mode_constraints.m"
              }
#line 611 "build_mode_constraints.m"
              {
#line 611 "build_mode_constraints.m"
                mercury__list__filter_3_p_0(check_hlds__build_mode_constraints__TypeInfo_389_389, check_hlds__build_mode_constraints__V_175_175, check_hlds__build_mode_constraints__NonlocalToCond_116, &check_hlds__build_mode_constraints__LocalAndShared_117);
              }
#line 613 "build_mode_constraints.m"
              {
#line 613 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__LocalAndShared_117, check_hlds__build_mode_constraints__CondId_108, &check_hlds__build_mode_constraints__LocalAndSharedAtCond_118, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_173_173, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_176_176);
              }
#line 615 "build_mode_constraints.m"
              {
#line 615 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__LocalAndShared_117, check_hlds__build_mode_constraints__ThenId_109, &check_hlds__build_mode_constraints__LocalAndSharedAtThen_119, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_176_176, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_177_177);
              }
#line 618 "build_mode_constraints.m"
              {
#line 618 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Cond_99, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_177_177, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_178_178, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_150, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_179_179);
              }
#line 620 "build_mode_constraints.m"
              {
#line 620 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Then_100, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_178_178, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_180_180, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_179_179, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_181_181);
              }
#line 622 "build_mode_constraints.m"
              {
#line 622 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(check_hlds__build_mode_constraints__ModuleInfo_12, check_hlds__build_mode_constraints__ProgVarset_13, check_hlds__build_mode_constraints__PredId_14, check_hlds__build_mode_constraints__Else_101, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_180_180, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_181_181, &check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_183_183);
              }
#line 8023 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeInfo_392_392 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
#line 8025 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeInfo_393_393 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 629 "build_mode_constraints.m"
              {
#line 629 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__EquivVarss_297 = mercury__list__map_corresponding3_4_f_0(check_hlds__build_mode_constraints__TypeInfo_392_392, check_hlds__build_mode_constraints__TypeInfo_392_392, check_hlds__build_mode_constraints__TypeInfo_392_392, check_hlds__build_mode_constraints__TypeInfo_393_393, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[8], check_hlds__build_mode_constraints__NonlocalsHere_296, check_hlds__build_mode_constraints__NonlocalsAtThen_112, check_hlds__build_mode_constraints__NonlocalsAtElse_113);
              }
#line 631 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 631 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 631 "build_mode_constraints.m"
              {
#line 631 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 631 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_192_192, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[3]));
#line 631 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_192_192, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14));
#line 631 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_192_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 631 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_192_192, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_194_194));
#line 631 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_192_192, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 631 "build_mode_constraints.m"
              }
#line 8052 "check_hlds.build_mode_constraints.c"
              check_hlds__build_mode_constraints__TypeCtorInfo_397_397 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
#line 631 "build_mode_constraints.m"
              {
#line 631 "build_mode_constraints.m"
                mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeInfo_393_393, check_hlds__build_mode_constraints__TypeCtorInfo_397_397, check_hlds__build_mode_constraints__V_192_192, check_hlds__build_mode_constraints__EquivVarss_297, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_183_183)), &check_hlds__build_mode_constraints__conv24_STATE_VARIABLE_Constraints_193_193);
              }
#line 631 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_193_193 = ((MR_Word) check_hlds__build_mode_constraints__conv24_STATE_VARIABLE_Constraints_193_193);
#line 635 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 635 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 635 "build_mode_constraints.m"
              {
#line 635 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 635 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_195_195, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[4]));
#line 635 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_195_195, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15));
#line 635 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_195_195, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 635 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_195_195, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_197_197));
#line 635 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_195_195, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 635 "build_mode_constraints.m"
              }
#line 635 "build_mode_constraints.m"
              {
#line 635 "build_mode_constraints.m"
                mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeInfo_392_392, check_hlds__build_mode_constraints__TypeCtorInfo_397_397, check_hlds__build_mode_constraints__V_195_195, check_hlds__build_mode_constraints__NonlocalsAtCond_111, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_193_193)), &check_hlds__build_mode_constraints__conv26_STATE_VARIABLE_Constraints_196_196);
              }
#line 635 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_196_196 = ((MR_Word) check_hlds__build_mode_constraints__conv26_STATE_VARIABLE_Constraints_196_196);
#line 642 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
#line 642 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
#line 642 "build_mode_constraints.m"
              {
#line 642 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 642 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_198_198, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[3]));
#line 642 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_198_198, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16));
#line 642 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_198_198, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 642 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_198_198, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_200_200));
#line 642 "build_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_198_198, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_16));
#line 642 "build_mode_constraints.m"
              }
#line 642 "build_mode_constraints.m"
              {
#line 642 "build_mode_constraints.m"
                mercury__list__foldl_corresponding_5_p_0(check_hlds__build_mode_constraints__TypeInfo_392_392, check_hlds__build_mode_constraints__TypeInfo_392_392, check_hlds__build_mode_constraints__TypeCtorInfo_397_397, check_hlds__build_mode_constraints__V_198_198, check_hlds__build_mode_constraints__LocalAndSharedAtCond_118, check_hlds__build_mode_constraints__LocalAndSharedAtThen_119, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_196_196)), &check_hlds__build_mode_constraints__conv28_STATE_VARIABLE_Constraints_151);
              }
#line 642 "build_mode_constraints.m"
              *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_151 = ((MR_Word) check_hlds__build_mode_constraints__conv28_STATE_VARIABLE_Constraints_151);
#line 586 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
          case (MR_Integer) 7:
#line 661 "build_mode_constraints.m"
            {
#line 661 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__Shorthand_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_15, (MR_Integer) 1)));

#line 671 "build_mode_constraints.m"
#line 671 "build_mode_constraints.m"
              switch (MR_tag((MR_Word) check_hlds__build_mode_constraints__Shorthand_135)) {
#line 671 "build_mode_constraints.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 671 "build_mode_constraints.m"
                case (MR_Integer) 0:
#line 672 "build_mode_constraints.m"
                  {
#line 674 "build_mode_constraints.m"
                    {
#line 674 "build_mode_constraints.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "shorthand goal");
#line 674 "build_mode_constraints.m"
                      return;
                    }
#line 672 "build_mode_constraints.m"
                  }
#line 671 "build_mode_constraints.m"
                  break;
#line 671 "build_mode_constraints.m"
                case (MR_Integer) 1:
#line 663 "build_mode_constraints.m"
                  {
#line 670 "build_mode_constraints.m"
                    {
#line 670 "build_mode_constraints.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "NYI: atomic_goal");
#line 670 "build_mode_constraints.m"
                      return;
                    }
#line 663 "build_mode_constraints.m"
                  }
#line 671 "build_mode_constraints.m"
                  break;
#line 671 "build_mode_constraints.m"
                case (MR_Integer) 2:
#line 676 "build_mode_constraints.m"
                  {
#line 677 "build_mode_constraints.m"
                    {
#line 677 "build_mode_constraints.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "NYI: try_goal");
#line 677 "build_mode_constraints.m"
                      return;
                    }
#line 676 "build_mode_constraints.m"
                  }
#line 671 "build_mode_constraints.m"
                  break;
#line 671 "build_mode_constraints.m"
              }
#line 661 "build_mode_constraints.m"
            }
#line 416 "build_mode_constraints.m"
            break;
#line 416 "build_mode_constraints.m"
        }
#line 416 "build_mode_constraints.m"
        break;
#line 416 "build_mode_constraints.m"
    }
#line 416 "build_mode_constraints.m"
  }
#line 408 "build_mode_constraints.m"
}

#line 378 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_9,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_10,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Goal_12,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22,
#line 378 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23,
#line 378 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_24,
#line 378 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25)
#line 378 "build_mode_constraints.m"
{
#line 383 "build_mode_constraints.m"
  {
#line 383 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 383 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_12, (MR_Integer) 0)));
#line 383 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_12, (MR_Integer) 1)));
#line 383 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Nonlocals_17;
#line 383 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__GoalId_18;
#line 383 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Context_19;

#line 385 "build_mode_constraints.m"
    {
#line 385 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__Nonlocals_17 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__build_mode_constraints__GoalInfo_16);
    }
#line 386 "build_mode_constraints.m"
    {
#line 386 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__GoalInfo_16);
    }
#line 387 "build_mode_constraints.m"
    {
#line 387 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__build_mode_constraints__GoalInfo_16);
    }
#line 392 "build_mode_constraints.m"
    {
#line 392 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(check_hlds__build_mode_constraints__ModuleInfo_9, check_hlds__build_mode_constraints__ProgVarset_10, check_hlds__build_mode_constraints__PredId_11, check_hlds__build_mode_constraints__GoalExpr_15, check_hlds__build_mode_constraints__Context_19, check_hlds__build_mode_constraints__GoalId_18, check_hlds__build_mode_constraints__Nonlocals_17, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_24, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25);
    }
#line 383 "build_mode_constraints.m"
  }
#line 378 "build_mode_constraints.m"
}

#line 270 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_p_0(
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_6,
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_7,
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar_8,
#line 270 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_11,
#line 270 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_12)
#line 270 "build_mode_constraints.m"
{
#line 273 "build_mode_constraints.m"
  {
#line 273 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 274 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_10_10;

#line 274 "build_mode_constraints.m"
    {
#line 274 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_6, check_hlds__build_mode_constraints__PredId_7, check_hlds__build_mode_constraints__HeadVar_8, (MR_Word) ((MR_Box) ((MR_Integer) 0)), &check_hlds__build_mode_constraints__V_10_10, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_11, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_12);
    }
#line 273 "build_mode_constraints.m"
  }
#line 270 "build_mode_constraints.m"
}

#line 258 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0_1(
#line 258 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 258 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 258 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 258 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 258 "build_mode_constraints.m"
{
#line 258 "build_mode_constraints.m"
  {
#line 258 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 258 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_12;

#line 258 "build_mode_constraints.m"
    {
#line 258 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_12);
    }
#line 258 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_12));
#line 258 "build_mode_constraints.m"
  }
#line 258 "build_mode_constraints.m"
}

#line 250 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0(
#line 250 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 250 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_6,
#line 250 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_12,
#line 250 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_13)
#line 250 "build_mode_constraints.m"
{
#line 253 "build_mode_constraints.m"
  {
#line 253 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 253 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__PredInfo_8;
#line 253 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ClausesInfo_9;
#line 253 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVars_10;
#line 253 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ProgVarset_11;
#line 253 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_14_14;
#line 258 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_13;

#line 254 "build_mode_constraints.m"
    {
#line 254 "build_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__build_mode_constraints__ModuleInfo_5, check_hlds__build_mode_constraints__PredId_6, &check_hlds__build_mode_constraints__PredInfo_8);
    }
#line 255 "build_mode_constraints.m"
    {
#line 255 "build_mode_constraints.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__build_mode_constraints__PredInfo_8, &check_hlds__build_mode_constraints__ClausesInfo_9);
    }
#line 256 "build_mode_constraints.m"
    {
#line 256 "build_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__build_mode_constraints__ClausesInfo_9, &check_hlds__build_mode_constraints__HeadVars_10);
    }
#line 257 "build_mode_constraints.m"
    {
#line 257 "build_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__build_mode_constraints__ClausesInfo_9, &check_hlds__build_mode_constraints__ProgVarset_11);
    }
#line 258 "build_mode_constraints.m"
    {
#line 258 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 258 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_14_14, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[2]));
#line 258 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_14_14, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0_1));
#line 258 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 258 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_14_14, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_11));
#line 258 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_14_14, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_6));
#line 258 "build_mode_constraints.m"
    }
#line 258 "build_mode_constraints.m"
    {
#line 258 "build_mode_constraints.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_14_14, check_hlds__build_mode_constraints__HeadVars_10, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_12)), &check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_13);
    }
#line 258 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_13 = ((MR_Word) check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_13);
#line 253 "build_mode_constraints.m"
  }
#line 250 "build_mode_constraints.m"
}

#line 185 "build_mode_constraints.m"
MR_String MR_CALL 
check_hlds__build_mode_constraints__rep_var_to_string_2_f_0(
#line 185 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_4,
#line 185 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVar__2_2)
#line 185 "build_mode_constraints.m"
{
#line 1091 "build_mode_constraints.m"
  {
#line 1091 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 1091 "build_mode_constraints.m"
    MR_String check_hlds__build_mode_constraints__RepString_8;
#line 1091 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ProgVar_5;
#line 1091 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__GoalId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 1091 "build_mode_constraints.m"
    MR_Integer check_hlds__build_mode_constraints__GoalIdNum_9;
#line 1091 "build_mode_constraints.m"
    MR_String check_hlds__build_mode_constraints__GoalIdString_10;
#line 1091 "build_mode_constraints.m"
    MR_String check_hlds__build_mode_constraints__ProgVarString_11;
#line 1091 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 1091 "build_mode_constraints.m"
    MR_String check_hlds__build_mode_constraints__V_13_13;
#line 1091 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_6_6;

#line 1091 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__ProgVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_12_12, (MR_Integer) 0)));
#line 1091 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_12_12, (MR_Integer) 1)));
#line 1092 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__GoalIdNum_9 = (MR_Integer) check_hlds__build_mode_constraints__GoalId_7;
#line 1093 "build_mode_constraints.m"
    {
#line 1093 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__GoalIdString_10 = mercury__string__int_to_string_1_f_0(check_hlds__build_mode_constraints__GoalIdNum_9);
    }
#line 1094 "build_mode_constraints.m"
    {
#line 1094 "build_mode_constraints.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__ProgVarset_4, check_hlds__build_mode_constraints__ProgVar_5, &check_hlds__build_mode_constraints__ProgVarString_11);
    }
#line 1095 "build_mode_constraints.m"
    {
#line 1095 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__build_mode_constraints__GoalIdString_10);
    }
#line 1095 "build_mode_constraints.m"
    {
#line 1095 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__RepString_8 = mercury__string__f_43_43_2_f_0(check_hlds__build_mode_constraints__ProgVarString_11, check_hlds__build_mode_constraints__V_13_13);
    }
#line 1091 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__RepString_8;
#line 1091 "build_mode_constraints.m"
  }
#line 185 "build_mode_constraints.m"
}

#line 176 "build_mode_constraints.m"
MR_Word MR_CALL 
check_hlds__build_mode_constraints__var_info_init_0_f_0(void)
#line 176 "build_mode_constraints.m"
{
#line 1089 "build_mode_constraints.m"
  {
#line 1089 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 1089 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVar__1_1;
#line 1089 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_2_2;
#line 1089 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_3_3;

#line 1089 "build_mode_constraints.m"
    {
#line 1089 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_2_2 = mercury__varset__init_0_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0);
    }
#line 1089 "build_mode_constraints.m"
    {
#line 1089 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_3_3 = mercury__bimap__init_0_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2]);
    }
#line 1089 "build_mode_constraints.m"
    {
#line 1089 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_2_2));
#line 1089 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__HeadVar__1_1, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_3_3));
#line 1089 "build_mode_constraints.m"
    }
#line 1089 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__HeadVar__1_1;
#line 1089 "build_mode_constraints.m"
  }
#line 176 "build_mode_constraints.m"
}

#line 716 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_2(
#line 716 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 716 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 716 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 716 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 716 "build_mode_constraints.m"
{
#line 716 "build_mode_constraints.m"
  {
#line 716 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 716 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv3_HeadVar__6_6;

#line 716 "build_mode_constraints.m"
    {
#line 716 "build_mode_constraints.m"
      check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv3_HeadVar__6_6);
    }
#line 716 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv3_HeadVar__6_6));
#line 716 "build_mode_constraints.m"
  }
#line 716 "build_mode_constraints.m"
}

#line 1008 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_1(
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_2,
#line 1008 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_3,
#line 1008 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_4)
#line 1008 "build_mode_constraints.m"
{
#line 1008 "build_mode_constraints.m"
  {
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23;
#line 1008 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25;

#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), &check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23, ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_3), &check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_LambdaHeadVar__2_23));
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_LambdaHeadVar__4_25));
#line 1008 "build_mode_constraints.m"
  }
#line 1008 "build_mode_constraints.m"
}

#line 169 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0(
#line 169 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_10,
#line 169 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_11,
#line 169 "build_mode_constraints.m"
  MR_Integer check_hlds__build_mode_constraints__ProcId_12,
#line 169 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Decl_13,
#line 169 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Args_14,
#line 169 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22,
#line 169 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23,
#line 169 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_24,
#line 169 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25)
#line 169 "build_mode_constraints.m"
{
#line 705 "build_mode_constraints.m"
  {
#line 705 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ProcInfo_17;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ProgVarset_18;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Context_19;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ArgsAtHead_20;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__DeclConstraints_21;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_29_29;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_31_31;
#line 705 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_48_48;
#line 1008 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_23;
#line 716 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_32_32;
#line 715 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_Constraints_25;

#line 706 "build_mode_constraints.m"
    {
#line 706 "build_mode_constraints.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__build_mode_constraints__ModuleInfo_10, check_hlds__build_mode_constraints__PredId_11, check_hlds__build_mode_constraints__ProcId_12, &check_hlds__build_mode_constraints__ProcInfo_17);
    }
#line 707 "build_mode_constraints.m"
    {
#line 707 "build_mode_constraints.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__build_mode_constraints__ProcInfo_17, &check_hlds__build_mode_constraints__ProgVarset_18);
    }
#line 708 "build_mode_constraints.m"
    {
#line 708 "build_mode_constraints.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__build_mode_constraints__ProcInfo_17, &check_hlds__build_mode_constraints__Context_19);
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_48_48, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0]));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_48_48, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_1));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_48_48, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_18));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_48_48, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_11));
#line 1008 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_48_48, 5) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 1008 "build_mode_constraints.m"
    }
#line 1008 "build_mode_constraints.m"
    {
#line 1008 "build_mode_constraints.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_48_48, check_hlds__build_mode_constraints__Args_14, &check_hlds__build_mode_constraints__ArgsAtHead_20, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_22)), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_23);
    }
#line 1008 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23 = ((MR_Word) check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_23);
#line 713 "build_mode_constraints.m"
    {
#line 713 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__DeclConstraints_21 = check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(check_hlds__build_mode_constraints__ModuleInfo_10, check_hlds__build_mode_constraints__ArgsAtHead_20, check_hlds__build_mode_constraints__Decl_13);
    }
#line 716 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23, (MR_Integer) 0)));
#line 716 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_23, (MR_Integer) 1)));
#line 716 "build_mode_constraints.m"
    {
#line 716 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 716 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_29_29, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[0]));
#line 716 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_29_29, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_2));
#line 716 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 716 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_29_29, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_31_31));
#line 716 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_29_29, 4) = ((MR_Box) (check_hlds__build_mode_constraints__Context_19));
#line 716 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_29_29, 5) = ((MR_Box) (check_hlds__build_mode_constraints__ProcId_12));
#line 716 "build_mode_constraints.m"
    }
#line 715 "build_mode_constraints.m"
    {
#line 715 "build_mode_constraints.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__build_mode_constraints__V_29_29, check_hlds__build_mode_constraints__DeclConstraints_21, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_24)), &check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_Constraints_25);
    }
#line 715 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_25 = ((MR_Word) check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_Constraints_25);
#line 705 "build_mode_constraints.m"
  }
#line 169 "build_mode_constraints.m"
}

#line 695 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_3(
#line 695 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 695 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 695 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2)
#line 695 "build_mode_constraints.m"
{
#line 695 "build_mode_constraints.m"
  {
#line 695 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_3;
#line 695 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 695 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv2_HeadVar__4_4;

#line 695 "build_mode_constraints.m"
    {
#line 695 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv2_HeadVar__4_4 = check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2));
    }
#line 695 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv2_HeadVar__4_4));
#line 695 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_3;
#line 695 "build_mode_constraints.m"
  }
#line 695 "build_mode_constraints.m"
}

#line 689 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_2(
#line 689 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 689 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 689 "build_mode_constraints.m"
{
#line 689 "build_mode_constraints.m"
  {
#line 689 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 689 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 689 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_HeadVar__3_29;

#line 689 "build_mode_constraints.m"
    {
#line 689 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv1_HeadVar__3_29 = check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 689 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_HeadVar__3_29));
#line 689 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 689 "build_mode_constraints.m"
  }
#line 689 "build_mode_constraints.m"
}

#line 690 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_1(
#line 690 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 690 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 690 "build_mode_constraints.m"
{
#line 690 "build_mode_constraints.m"
  {
#line 690 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 690 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 690 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__5_5;

#line 690 "build_mode_constraints.m"
    {
#line 690 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_HeadVar__5_5 = check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 690 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__5_5));
#line 690 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 690 "build_mode_constraints.m"
  }
#line 690 "build_mode_constraints.m"
}

#line 155 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0(
#line 155 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_7,
#line 155 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__VarMap_8,
#line 155 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 155 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Decls_10,
#line 155 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__HeadVarsList_11,
#line 155 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__Constraints_12)
#line 155 "build_mode_constraints.m"
{
#line 684 "build_mode_constraints.m"
  {
#line 684 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__TypeInfo_27_27 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVarsMCVars_13;
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ConstraintsList_14;
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Constraints0_15;
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_17_17;
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_18_18;
#line 684 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_21_21;
#line 700 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__OneModeOnlyConstraints_16;
#line 698 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_22_22;
#line 698 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_23_23;

#line 690 "build_mode_constraints.m"
    {
#line 690 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 690 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[1]));
#line 690 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_1));
#line 690 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 690 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 3) = ((MR_Box) (check_hlds__build_mode_constraints__VarMap_8));
#line 690 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 4) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_9));
#line 690 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_18_18, 5) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 690 "build_mode_constraints.m"
    }
#line 689 "build_mode_constraints.m"
    {
#line 689 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 689 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_17_17, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[0]));
#line 689 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_17_17, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_2));
#line 689 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 689 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_17_17, 3) = ((MR_Box) (check_hlds__build_mode_constraints__V_18_18));
#line 689 "build_mode_constraints.m"
    }
#line 689 "build_mode_constraints.m"
    {
#line 689 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__HeadVarsMCVars_13 = mercury__list__map_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[1], check_hlds__build_mode_constraints__TypeInfo_27_27, check_hlds__build_mode_constraints__V_17_17, check_hlds__build_mode_constraints__HeadVarsList_11);
    }
#line 695 "build_mode_constraints.m"
    {
#line 695 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 695 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_21_21, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[1]));
#line 695 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_3));
#line 695 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 695 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_21_21, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ModuleInfo_7));
#line 695 "build_mode_constraints.m"
    }
#line 694 "build_mode_constraints.m"
    {
#line 694 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__ConstraintsList_14 = mercury__list__map_corresponding_3_f_0(check_hlds__build_mode_constraints__TypeInfo_27_27, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[5], check_hlds__build_mode_constraints__V_21_21, check_hlds__build_mode_constraints__HeadVarsMCVars_13, check_hlds__build_mode_constraints__Decls_10);
    }
#line 697 "build_mode_constraints.m"
    {
#line 697 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__Constraints0_15 = mercury__list__condense_1_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, check_hlds__build_mode_constraints__ConstraintsList_14);
    }
#line 698 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__build_mode_constraints__Constraints0_15)) == (MR_mktag((MR_Integer) 1)));
#line 698 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 698 "build_mode_constraints.m"
      {
#line 698 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__Constraints0_15, (MR_Integer) 0)));
#line 698 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__Constraints0_15, (MR_Integer) 1)));
#line 698 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__succeeded = (check_hlds__build_mode_constraints__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "build_mode_constraints.m"
        if (check_hlds__build_mode_constraints__succeeded)
#line 698 "build_mode_constraints.m"
          {
#line 698 "build_mode_constraints.m"
            check_hlds__build_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__build_mode_constraints__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 698 "build_mode_constraints.m"
            if (check_hlds__build_mode_constraints__succeeded)
#line 698 "build_mode_constraints.m"
              check_hlds__build_mode_constraints__OneModeOnlyConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__build_mode_constraints__V_22_22, (MR_Integer) 0)));
#line 698 "build_mode_constraints.m"
          }
#line 698 "build_mode_constraints.m"
      }
#line 700 "build_mode_constraints.m"
    if (check_hlds__build_mode_constraints__succeeded)
#line 699 "build_mode_constraints.m"
      *check_hlds__build_mode_constraints__Constraints_12 = check_hlds__build_mode_constraints__OneModeOnlyConstraints_16;
#line 700 "build_mode_constraints.m"
    else
#line 701 "build_mode_constraints.m"
      {
#line 701 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_24_24;

#line 701 "build_mode_constraints.m"
        {
#line 701 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_24_24, 0) = ((MR_Box) (check_hlds__build_mode_constraints__Constraints0_15));
#line 701 "build_mode_constraints.m"
        }
#line 701 "build_mode_constraints.m"
        {
#line 701 "build_mode_constraints.m"
          MR_Word base;
#line 701 "build_mode_constraints.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "build_mode_constraints.m"
          *check_hlds__build_mode_constraints__Constraints_12 = base;
#line 701 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__build_mode_constraints__V_24_24));
#line 701 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "build_mode_constraints.m"
        }
#line 701 "build_mode_constraints.m"
      }
#line 684 "build_mode_constraints.m"
  }
#line 155 "build_mode_constraints.m"
}

#line 359 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_2(
#line 359 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 359 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 359 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 359 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 359 "build_mode_constraints.m"
{
#line 359 "build_mode_constraints.m"
  {
#line 359 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 359 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_67;

#line 359 "build_mode_constraints.m"
    {
#line 359 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_67);
    }
#line 359 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_67));
#line 359 "build_mode_constraints.m"
  }
#line 359 "build_mode_constraints.m"
}

#line 358 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_1(
#line 358 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 358 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 358 "build_mode_constraints.m"
{
#line 358 "build_mode_constraints.m"
  {
#line 358 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 358 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 358 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_HeadVar__2_2;

#line 358 "build_mode_constraints.m"
    {
#line 358 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 358 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_HeadVar__2_2));
#line 358 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 358 "build_mode_constraints.m"
  }
#line 358 "build_mode_constraints.m"
}

#line 131 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(
#line 131 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_8,
#line 131 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_9,
#line 131 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredInfo_10,
#line 131 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_25,
#line 131 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_26,
#line 131 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_27,
#line 131 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_28)
#line 131 "build_mode_constraints.m"
{
#line 337 "build_mode_constraints.m"
  {
#line 337 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 337 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ClausesInfo_13;
#line 337 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__HeadVars_14;
#line 337 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ClausesRep_15;
#line 337 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__Clauses_17;
#line 337 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__ProgVarset_18;
#line 340 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints___ItemNumbers_16;

#line 338 "build_mode_constraints.m"
    {
#line 338 "build_mode_constraints.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__build_mode_constraints__PredInfo_10, &check_hlds__build_mode_constraints__ClausesInfo_13);
    }
#line 339 "build_mode_constraints.m"
    {
#line 339 "build_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__build_mode_constraints__ClausesInfo_13, &check_hlds__build_mode_constraints__HeadVars_14);
    }
#line 340 "build_mode_constraints.m"
    {
#line 340 "build_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__build_mode_constraints__ClausesInfo_13, &check_hlds__build_mode_constraints__ClausesRep_15, &check_hlds__build_mode_constraints___ItemNumbers_16);
    }
#line 341 "build_mode_constraints.m"
    {
#line 341 "build_mode_constraints.m"
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__build_mode_constraints__ClausesRep_15, &check_hlds__build_mode_constraints__Clauses_17);
    }
#line 342 "build_mode_constraints.m"
    {
#line 342 "build_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__build_mode_constraints__ClausesInfo_13, &check_hlds__build_mode_constraints__ProgVarset_18);
    }
#line 348 "build_mode_constraints.m"
    if ((check_hlds__build_mode_constraints__Clauses_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "build_mode_constraints.m"
      {
#line 347 "build_mode_constraints.m"
        *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_26 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_25;
#line 347 "build_mode_constraints.m"
        *check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_28 = check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_27;
#line 347 "build_mode_constraints.m"
      }
#line 348 "build_mode_constraints.m"
    else
#line 349 "build_mode_constraints.m"
      {
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__FirstClause_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__Clauses_17, (MR_Integer) 0)));
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__FirstClause_19, (MR_Integer) 3)));
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__Goals_22;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__MainGoal_23;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__Nonlocals_24;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_30_30;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_31_31;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_32_32;
#line 349 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__Clauses_17, (MR_Integer) 1)));
#line 353 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__FirstClause_19, (MR_Integer) 0)));
#line 353 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__FirstClause_19, (MR_Integer) 1)));
#line 353 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__FirstClause_19, (MR_Integer) 2)));
#line 353 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__FirstClause_19, (MR_Integer) 4)));
#line 359 "build_mode_constraints.m"
        MR_Box check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_31_31;

#line 358 "build_mode_constraints.m"
        {
#line 358 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__Goals_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, check_hlds__build_mode_constraints__TypeCtorInfo_42_42, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[3], check_hlds__build_mode_constraints__Clauses_17);
        }
#line 359 "build_mode_constraints.m"
        {
#line 359 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
#line 359 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_2));
#line 359 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 3) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_9));
#line 359 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_30_30, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_18));
#line 359 "build_mode_constraints.m"
        }
#line 359 "build_mode_constraints.m"
        {
#line 359 "build_mode_constraints.m"
          mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_42_42, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_30_30, check_hlds__build_mode_constraints__Goals_22, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_25)), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_31_31);
        }
#line 359 "build_mode_constraints.m"
        check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_31_31 = ((MR_Word) check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_31_31);
#line 363 "build_mode_constraints.m"
        {
#line 363 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__MainGoal_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__MainGoal_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 363 "build_mode_constraints.m"
          MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__MainGoal_23, 1) = ((MR_Box) (check_hlds__build_mode_constraints__Goals_22));
#line 363 "build_mode_constraints.m"
        }
#line 364 "build_mode_constraints.m"
        {
#line 364 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__V_32_32 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], check_hlds__build_mode_constraints__HeadVars_14);
        }
#line 364 "build_mode_constraints.m"
        {
#line 364 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__Nonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__V_32_32);
        }
#line 365 "build_mode_constraints.m"
        {
#line 365 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(check_hlds__build_mode_constraints__ModuleInfo_8, check_hlds__build_mode_constraints__ProgVarset_18, check_hlds__build_mode_constraints__PredId_9, check_hlds__build_mode_constraints__MainGoal_23, check_hlds__build_mode_constraints__Context_21, (MR_Word) ((MR_Box) ((MR_Integer) 0)), check_hlds__build_mode_constraints__Nonlocals_24, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_31_31, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_26, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_0_27, check_hlds__build_mode_constraints__STATE_VARIABLE_Constraints_28);
        }
#line 349 "build_mode_constraints.m"
      }
#line 337 "build_mode_constraints.m"
  }
#line 131 "build_mode_constraints.m"
}

#line 300 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_5(
#line 300 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 300 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 300 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 300 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 300 "build_mode_constraints.m"
{
#line 300 "build_mode_constraints.m"
  {
#line 300 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 300 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv7_STATE_VARIABLE_VarInfo_67;

#line 300 "build_mode_constraints.m"
    {
#line 300 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv7_STATE_VARIABLE_VarInfo_67);
    }
#line 300 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv7_STATE_VARIABLE_VarInfo_67));
#line 300 "build_mode_constraints.m"
  }
#line 300 "build_mode_constraints.m"
}

#line 299 "build_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_4(
#line 299 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 299 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1)
#line 299 "build_mode_constraints.m"
{
#line 299 "build_mode_constraints.m"
  {
#line 299 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__wrapper_arg_2;
#line 299 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 299 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv6_LambdaHeadVar__2_89;

#line 299 "build_mode_constraints.m"
    {
#line 299 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__conv6_LambdaHeadVar__2_89 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__299__1_1_f_0(((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1));
    }
#line 299 "build_mode_constraints.m"
    check_hlds__build_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__build_mode_constraints__conv6_LambdaHeadVar__2_89));
#line 299 "build_mode_constraints.m"
    return check_hlds__build_mode_constraints__wrapper_arg_2;
#line 299 "build_mode_constraints.m"
  }
#line 299 "build_mode_constraints.m"
}

#line 313 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_3(
#line 313 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 313 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 313 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 313 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 313 "build_mode_constraints.m"
{
#line 313 "build_mode_constraints.m"
  {
#line 313 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 313 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_67;

#line 313 "build_mode_constraints.m"
    {
#line 313 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_67);
    }
#line 313 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv4_STATE_VARIABLE_VarInfo_67));
#line 313 "build_mode_constraints.m"
  }
#line 313 "build_mode_constraints.m"
}

#line 303 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_2(
#line 303 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 303 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 303 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 303 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 303 "build_mode_constraints.m"
{
#line 303 "build_mode_constraints.m"
  {
#line 303 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 303 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_67;

#line 303 "build_mode_constraints.m"
    {
#line 303 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_67);
    }
#line 303 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv2_STATE_VARIABLE_VarInfo_67));
#line 303 "build_mode_constraints.m"
  }
#line 303 "build_mode_constraints.m"
}

#line 291 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_1(
#line 291 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 291 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 291 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 291 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 291 "build_mode_constraints.m"
{
#line 291 "build_mode_constraints.m"
  {
#line 291 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 291 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_67;

#line 291 "build_mode_constraints.m"
    {
#line 291 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_67);
    }
#line 291 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_67));
#line 291 "build_mode_constraints.m"
  }
#line 291 "build_mode_constraints.m"
}

#line 120 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(
#line 120 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredId_6,
#line 120 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ProgVarset_7,
#line 120 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__Goal_8,
#line 120 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_66,
#line 120 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67)
#line 120 "build_mode_constraints.m"
{
#line 278 "build_mode_constraints.m"
  while (MR_TRUE)
#line 278 "build_mode_constraints.m"
    {
#line 278 "build_mode_constraints.m"
      /* tailcall optimized into a loop */
#line 278 "build_mode_constraints.m"
      {
#line 278 "build_mode_constraints.m"
        MR_bool check_hlds__build_mode_constraints__succeeded;
#line 278 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_8, (MR_Integer) 0)));
#line 278 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__Goal_8, (MR_Integer) 1)));
#line 278 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__Nonlocals_12;
#line 278 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__GoalId_13;
#line 278 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__NlsList_14;
#line 278 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;
#line 284 "build_mode_constraints.m"
        MR_Word check_hlds__build_mode_constraints__V_15_15;

#line 280 "build_mode_constraints.m"
        {
#line 280 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__Nonlocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__build_mode_constraints__GoalInfo_11);
        }
#line 281 "build_mode_constraints.m"
        {
#line 281 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__build_mode_constraints__GoalInfo_11);
        }
#line 283 "build_mode_constraints.m"
        {
#line 283 "build_mode_constraints.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__build_mode_constraints__Nonlocals_12, &check_hlds__build_mode_constraints__NlsList_14);
        }
#line 284 "build_mode_constraints.m"
        {
#line 284 "build_mode_constraints.m"
          check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(check_hlds__build_mode_constraints__ProgVarset_7, check_hlds__build_mode_constraints__PredId_6, check_hlds__build_mode_constraints__NlsList_14, check_hlds__build_mode_constraints__GoalId_13, &check_hlds__build_mode_constraints__V_15_15, check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_66, &check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68);
        }
#line 297 "build_mode_constraints.m"
#line 297 "build_mode_constraints.m"
        switch (MR_tag((MR_Word) check_hlds__build_mode_constraints__GoalExpr_10)) {
#line 297 "build_mode_constraints.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 297 "build_mode_constraints.m"
          case (MR_Integer) 0:
#line 305 "build_mode_constraints.m"
            {
#line 305 "build_mode_constraints.m"
              MR_Word check_hlds__build_mode_constraints__SubGoal_24 = (MR_Word) MR_body(((MR_Word) check_hlds__build_mode_constraints__GoalExpr_10), (MR_Integer) 0);

#line 306 "build_mode_constraints.m"
              /* direct tailcall eliminated */
#line 306 "build_mode_constraints.m"
              {
#line 306 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__Goal__tmp_copy_8 = check_hlds__build_mode_constraints__SubGoal_24;
#line 306 "build_mode_constraints.m"
                MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0__tmp_copy_66 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;

#line 306 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_66 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0__tmp_copy_66;
#line 306 "build_mode_constraints.m"
                check_hlds__build_mode_constraints__Goal_8 = check_hlds__build_mode_constraints__Goal__tmp_copy_8;
#line 306 "build_mode_constraints.m"
              }
#line 306 "build_mode_constraints.m"
              continue;
#line 305 "build_mode_constraints.m"
            }
#line 297 "build_mode_constraints.m"
            break;
#line 297 "build_mode_constraints.m"
          case (MR_Integer) 1:
#line 330 "build_mode_constraints.m"
            *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;
#line 297 "build_mode_constraints.m"
            break;
#line 297 "build_mode_constraints.m"
          case (MR_Integer) 2:
#line 327 "build_mode_constraints.m"
            *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;
#line 297 "build_mode_constraints.m"
            break;
#line 297 "build_mode_constraints.m"
          case (MR_Integer) 3:
#line 297 "build_mode_constraints.m"
#line 297 "build_mode_constraints.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) {
#line 297 "build_mode_constraints.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 0:
#line 328 "build_mode_constraints.m"
                *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 1:
#line 329 "build_mode_constraints.m"
                *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 2:
#line 288 "build_mode_constraints.m"
                {
#line 288 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 288 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 2)));

#line 293 "build_mode_constraints.m"
#line 293 "build_mode_constraints.m"
                  switch (check_hlds__build_mode_constraints__ConjType_16) {
#line 293 "build_mode_constraints.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 293 "build_mode_constraints.m"
                    case (MR_Integer) 1:
#line 294 "build_mode_constraints.m"
                      *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;
#line 293 "build_mode_constraints.m"
                      break;
#line 293 "build_mode_constraints.m"
                    case (MR_Integer) 0:
#line 290 "build_mode_constraints.m"
                      {
#line 290 "build_mode_constraints.m"
                        MR_Word check_hlds__build_mode_constraints__V_92_92;
#line 291 "build_mode_constraints.m"
                        MR_Box check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_67;

#line 291 "build_mode_constraints.m"
                        {
#line 291 "build_mode_constraints.m"
                          check_hlds__build_mode_constraints__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 291 "build_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_92_92, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
#line 291 "build_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_92_92, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_1));
#line 291 "build_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_92_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 291 "build_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_92_92, 3) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_6));
#line 291 "build_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_92_92, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_7));
#line 291 "build_mode_constraints.m"
                        }
#line 291 "build_mode_constraints.m"
                        {
#line 291 "build_mode_constraints.m"
                          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_92_92, check_hlds__build_mode_constraints__Goals_17, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68)), &check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_67);
                        }
#line 291 "build_mode_constraints.m"
                        *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = ((MR_Word) check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_67);
#line 290 "build_mode_constraints.m"
                      }
#line 293 "build_mode_constraints.m"
                      break;
#line 293 "build_mode_constraints.m"
                  }
#line 288 "build_mode_constraints.m"
                }
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 3:
#line 302 "build_mode_constraints.m"
                {
#line 302 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_85_85;
#line 302 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Goals_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 303 "build_mode_constraints.m"
                  MR_Box check_hlds__build_mode_constraints__conv3_STATE_VARIABLE_VarInfo_67;

#line 303 "build_mode_constraints.m"
                  {
#line 303 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 303 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_85_85, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
#line 303 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_85_85, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_2));
#line 303 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_85_85, 3) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_6));
#line 303 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_85_85, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_7));
#line 303 "build_mode_constraints.m"
                  }
#line 303 "build_mode_constraints.m"
                  {
#line 303 "build_mode_constraints.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_85_85, check_hlds__build_mode_constraints__Goals_100, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68)), &check_hlds__build_mode_constraints__conv3_STATE_VARIABLE_VarInfo_67);
                  }
#line 303 "build_mode_constraints.m"
                  *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = ((MR_Word) check_hlds__build_mode_constraints__conv3_STATE_VARIABLE_VarInfo_67);
#line 302 "build_mode_constraints.m"
                }
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 4:
#line 298 "build_mode_constraints.m"
                {
#line 298 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 298 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 3)));
#line 298 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_90_90;
#line 298 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Goals_99;
#line 298 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 298 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 2)));
#line 300 "build_mode_constraints.m"
                  MR_Box check_hlds__build_mode_constraints__conv8_STATE_VARIABLE_VarInfo_67;

#line 299 "build_mode_constraints.m"
                  {
#line 299 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__Goals_99 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__build_mode_constraints__TypeCtorInfo_110_110, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[2], check_hlds__build_mode_constraints__Cases_20);
                  }
#line 300 "build_mode_constraints.m"
                  {
#line 300 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_90_90, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
#line 300 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_90_90, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_5));
#line 300 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_90_90, 3) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_6));
#line 300 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_90_90, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_7));
#line 300 "build_mode_constraints.m"
                  }
#line 300 "build_mode_constraints.m"
                  {
#line 300 "build_mode_constraints.m"
                    mercury__list__foldl_4_p_0(check_hlds__build_mode_constraints__TypeCtorInfo_110_110, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_90_90, check_hlds__build_mode_constraints__Goals_99, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68)), &check_hlds__build_mode_constraints__conv8_STATE_VARIABLE_VarInfo_67);
                  }
#line 300 "build_mode_constraints.m"
                  *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = ((MR_Word) check_hlds__build_mode_constraints__conv8_STATE_VARIABLE_VarInfo_67);
#line 298 "build_mode_constraints.m"
                }
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 5:
#line 308 "build_mode_constraints.m"
                {
#line 308 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__SubGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 2)));
#line 308 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 1)));

#line 309 "build_mode_constraints.m"
                  /* direct tailcall eliminated */
#line 309 "build_mode_constraints.m"
                  {
#line 309 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__Goal__tmp_copy_8 = check_hlds__build_mode_constraints__SubGoal_101;
#line 309 "build_mode_constraints.m"
                    MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0__tmp_copy_66 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68;

#line 309 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_66 = check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0__tmp_copy_66;
#line 309 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__Goal_8 = check_hlds__build_mode_constraints__Goal__tmp_copy_8;
#line 309 "build_mode_constraints.m"
                  }
#line 309 "build_mode_constraints.m"
                  continue;
#line 308 "build_mode_constraints.m"
                }
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 6:
#line 311 "build_mode_constraints.m"
                {
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 2)));
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Then_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 3)));
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Else_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 4)));
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_78_78;
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_79_79;
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_81_81;
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__Goals_102;
#line 311 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 313 "build_mode_constraints.m"
                  MR_Box check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_VarInfo_67;

#line 312 "build_mode_constraints.m"
                  {
#line 312 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_79_79, 0) = ((MR_Box) (check_hlds__build_mode_constraints__Else_29));
#line 312 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "build_mode_constraints.m"
                  }
#line 312 "build_mode_constraints.m"
                  {
#line 312 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_78_78, 0) = ((MR_Box) (check_hlds__build_mode_constraints__Then_28));
#line 312 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__V_78_78, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_79_79));
#line 312 "build_mode_constraints.m"
                  }
#line 312 "build_mode_constraints.m"
                  {
#line 312 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__Goals_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__Goals_102, 0) = ((MR_Box) (check_hlds__build_mode_constraints__Cond_27));
#line 312 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(1), check_hlds__build_mode_constraints__Goals_102, 1) = ((MR_Box) (check_hlds__build_mode_constraints__V_78_78));
#line 312 "build_mode_constraints.m"
                  }
#line 313 "build_mode_constraints.m"
                  {
#line 313 "build_mode_constraints.m"
                    check_hlds__build_mode_constraints__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 313 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_81_81, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
#line 313 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_81_81, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_3));
#line 313 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 313 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_81_81, 3) = ((MR_Box) (check_hlds__build_mode_constraints__PredId_6));
#line 313 "build_mode_constraints.m"
                    MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_81_81, 4) = ((MR_Box) (check_hlds__build_mode_constraints__ProgVarset_7));
#line 313 "build_mode_constraints.m"
                  }
#line 313 "build_mode_constraints.m"
                  {
#line 313 "build_mode_constraints.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_81_81, check_hlds__build_mode_constraints__Goals_102, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_68_68)), &check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_VarInfo_67);
                  }
#line 313 "build_mode_constraints.m"
                  *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_67 = ((MR_Word) check_hlds__build_mode_constraints__conv5_STATE_VARIABLE_VarInfo_67);
#line 311 "build_mode_constraints.m"
                }
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
              case (MR_Integer) 7:
#line 315 "build_mode_constraints.m"
                {
#line 315 "build_mode_constraints.m"
                  MR_Word check_hlds__build_mode_constraints__ShortHand_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__build_mode_constraints__GoalExpr_10, (MR_Integer) 1)));

#line 319 "build_mode_constraints.m"
#line 319 "build_mode_constraints.m"
                  switch (MR_tag((MR_Word) check_hlds__build_mode_constraints__ShortHand_30)) {
#line 319 "build_mode_constraints.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 319 "build_mode_constraints.m"
                    case (MR_Integer) 0:
#line 320 "build_mode_constraints.m"
                      {
#line 321 "build_mode_constraints.m"
                        {
#line 321 "build_mode_constraints.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", (MR_String) "bi_implication");
#line 321 "build_mode_constraints.m"
                          return;
                        }
#line 320 "build_mode_constraints.m"
                      }
#line 319 "build_mode_constraints.m"
                      break;
#line 319 "build_mode_constraints.m"
                    case (MR_Integer) 1:
#line 317 "build_mode_constraints.m"
                      {
#line 318 "build_mode_constraints.m"
                        {
#line 318 "build_mode_constraints.m"
                          mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", (MR_String) "NYI: atomic_goal");
#line 318 "build_mode_constraints.m"
                          return;
                        }
#line 317 "build_mode_constraints.m"
                      }
#line 319 "build_mode_constraints.m"
                      break;
#line 319 "build_mode_constraints.m"
                    case (MR_Integer) 2:
#line 323 "build_mode_constraints.m"
                      {
#line 324 "build_mode_constraints.m"
                        {
#line 324 "build_mode_constraints.m"
                          mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", (MR_String) "try_goal");
#line 324 "build_mode_constraints.m"
                          return;
                        }
#line 323 "build_mode_constraints.m"
                      }
#line 319 "build_mode_constraints.m"
                      break;
#line 319 "build_mode_constraints.m"
                  }
#line 315 "build_mode_constraints.m"
                }
#line 297 "build_mode_constraints.m"
                break;
#line 297 "build_mode_constraints.m"
            }
#line 297 "build_mode_constraints.m"
            break;
#line 297 "build_mode_constraints.m"
        }
#line 278 "build_mode_constraints.m"
      }
#line 278 "build_mode_constraints.m"
      break;
#line 278 "build_mode_constraints.m"
    }
#line 120 "build_mode_constraints.m"
}

#line 240 "build_mode_constraints.m"
static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0_1(
#line 240 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__closure_arg,
#line 240 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_1,
#line 240 "build_mode_constraints.m"
  MR_Box check_hlds__build_mode_constraints__wrapper_arg_2,
#line 240 "build_mode_constraints.m"
  MR_Box * check_hlds__build_mode_constraints__wrapper_arg_3)
#line 240 "build_mode_constraints.m"
{
#line 240 "build_mode_constraints.m"
  {
#line 240 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__closure = check_hlds__build_mode_constraints__closure_arg;
#line 240 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_13;

#line 240 "build_mode_constraints.m"
    {
#line 240 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__build_mode_constraints__wrapper_arg_2), &check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_13);
    }
#line 240 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__build_mode_constraints__conv0_STATE_VARIABLE_VarInfo_13));
#line 240 "build_mode_constraints.m"
  }
#line 240 "build_mode_constraints.m"
}

#line 106 "build_mode_constraints.m"
void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0(
#line 106 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__ModuleInfo_5,
#line 106 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__PredIds_6,
#line 106 "build_mode_constraints.m"
  MR_Word check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_8,
#line 106 "build_mode_constraints.m"
  MR_Word * check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_9)
#line 106 "build_mode_constraints.m"
{
#line 239 "build_mode_constraints.m"
  {
#line 239 "build_mode_constraints.m"
    MR_bool check_hlds__build_mode_constraints__succeeded;
#line 239 "build_mode_constraints.m"
    MR_Word check_hlds__build_mode_constraints__V_10_10;
#line 240 "build_mode_constraints.m"
    MR_Box check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_9;

#line 240 "build_mode_constraints.m"
    {
#line 240 "build_mode_constraints.m"
      check_hlds__build_mode_constraints__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 240 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[0]));
#line 240 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0_1));
#line 240 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 240 "build_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__build_mode_constraints__V_10_10, 3) = ((MR_Box) (check_hlds__build_mode_constraints__ModuleInfo_5));
#line 240 "build_mode_constraints.m"
    }
#line 240 "build_mode_constraints.m"
    {
#line 240 "build_mode_constraints.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, check_hlds__build_mode_constraints__V_10_10, check_hlds__build_mode_constraints__PredIds_6, ((MR_Box) (check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_0_8)), &check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_9);
    }
#line 240 "build_mode_constraints.m"
    *check_hlds__build_mode_constraints__STATE_VARIABLE_VarInfo_9 = ((MR_Word) check_hlds__build_mode_constraints__conv1_STATE_VARIABLE_VarInfo_9);
#line 239 "build_mode_constraints.m"
  }
#line 106 "build_mode_constraints.m"
}

void mercury__check_hlds__build_mode_constraints__init(void)
{
}

void mercury__check_hlds__build_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_args_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0);
}

void mercury__check_hlds__build_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.build_mode_constraints. */
