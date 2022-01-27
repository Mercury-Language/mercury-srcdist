/*
** Automatically generated from `term_constr_data.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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


/* :- module transform_hlds.term_constr_data. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_data__init
ENDINIT
*/

#include "transform_hlds.term_constr_data.mih"


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
#include "std_util.mih"
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
#include "hlds.hlds_out.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 144 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 147 "transform_hlds.term_constr_data.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

#line 150 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

#line 153 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0;

#line 156 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 159 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4];

#line 162 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4];

#line 165 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0;

#line 168 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3];

#line 171 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3];

#line 174 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1;

#line 177 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 180 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7];

#line 183 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2[7];

#line 186 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2;

#line 189 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3];

#line 192 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3];

#line 195 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3;

#line 198 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1];

#line 201 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1];

#line 204 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1];

#line 207 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1];

#line 210 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0[4];

#line 213 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0[4];

#line 216 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0[4];

#line 219 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1];

#line 222 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0;

#line 225 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1];

#line 228 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0;

#line 231 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0;

#line 234 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 237 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 240 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 243 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

#line 246 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0[12];

#line 249 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0[12];

#line 252 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0;

#line 255 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1];

#line 258 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1];

#line 261 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1];

#line 264 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1];

#line 267 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 270 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0;

#line 273 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 276 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 279 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1];

#line 282 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1;

#line 285 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1];

#line 288 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1];

#line 291 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0[2];

#line 294 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0[2];

#line 297 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0[2];

#line 300 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0;

#line 303 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1;

#line 306 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2;

#line 309 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3;

#line 312 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0[4];

#line 315 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4];

#line 318 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4];

#line 321 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 324 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 327 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1];

#line 330 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0;

#line 333 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
#line 336 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 338 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 341 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
#line 344 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 346 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 348 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 351 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001(
#line 354 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 356 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 359 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001(
#line 362 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 364 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 366 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 369 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
#line 372 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 374 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 377 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
#line 380 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 382 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 384 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 387 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
#line 390 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 392 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 395 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
#line 398 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 400 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 402 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 405 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
#line 408 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 410 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 413 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
#line 416 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 418 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 420 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 423 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
#line 426 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 428 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 431 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
#line 434 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 436 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 438 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 441 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
#line 444 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 446 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 449 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
#line 452 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 454 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 456 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 459 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
#line 462 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 464 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 467 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
#line 470 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 472 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 474 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 477 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
#line 480 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 482 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 485 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
#line 488 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 490 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 492 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 495 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
#line 498 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 500 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 503 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
#line 506 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 508 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 510 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 513 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
#line 516 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 518 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 521 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
#line 524 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 526 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 528 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 531 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
#line 534 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 536 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 539 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
#line 542 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 544 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 546 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 549 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
#line 552 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 554 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 557 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
#line 560 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 562 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 564 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 567 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
#line 570 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 572 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 575 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
#line 578 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 580 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 582 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 585 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
#line 588 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 590 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 593 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
#line 596 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 598 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 600 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 603 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
#line 606 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 608 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 611 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
#line 614 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 616 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 618 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 621 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
#line 624 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 626 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 629 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
#line 632 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 634 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 636 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 639 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
#line 642 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 644 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 647 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
#line 650 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 652 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 654 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 657 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
#line 660 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 662 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 665 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
#line 668 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 670 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 672 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 675 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
#line 678 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 680 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 683 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
#line 686 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 688 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 690 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 480 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__480__1_2_p_0(
#line 480 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_37,
#line 480 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_56);

#line 478 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__478__1_2_p_0(
#line 478 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_33,
#line 478 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_53);

#line 647 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__dump_abstract_proc__647__1_4_p_0(
#line 647 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__SizeVarSet_13,
#line 647 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_26);

#line 782 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__indent_line_3_p_0(
#line 782 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__N_4);

#line 748 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(
#line 748 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goals0_3,
#line 748 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__Goals_4);

#line 732 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_var_name_4_p_0(
#line 732 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__VarSet_5,
#line 732 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Var_6);

#line 662 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_disjuncts_6_p_0(
#line 662 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__ModuleInfo_1,
#line 662 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__VarSet_2,
#line 662 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__Indent_3,
#line 662 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__4_4);

#line 580 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_conj_1_p_0(
#line 580 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1);

#line 572 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_primitive_1_p_0(
#line 572 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1);

#line 554 "term_constr_data.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitives_2_f_0(
#line 554 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__GoalA_4,
#line 554 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__GoalB_5);

#line 550 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_primitive_1_p_0(
#line 550 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1);

#line 539 "term_constr_data.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2(
#line 539 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 539 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 539 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 533 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1(
#line 533 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 533 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

#line 527 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(
#line 527 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 527 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2,
#line 527 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_3);

#line 458 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_6(
#line 458 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 458 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 458 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2);

#line 480 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_5(
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

#line 480 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4(
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

#line 478 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3(
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

#line 478 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2(
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

#line 477 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1(
#line 477 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 477 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 477 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2);

#line 452 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(
#line 452 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goal0_3,
#line 452 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__Goal_4);

#line 685 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_4(
#line 685 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 685 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 685 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 685 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

#line 701 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_3(
#line 701 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 701 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 701 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 701 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

#line 697 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_2(
#line 697 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 697 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 697 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 697 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

#line 716 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_1(
#line 716 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 716 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 716 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 716 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

#line 647 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_5_p_0_1(
#line 647 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 647 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 647 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 647 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

#line 636 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1(
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 636 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

#line 636 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_4_p_0_1(
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 636 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_5[1][9];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_6[1][1];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_7[2][5];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_8[3][4];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_9[1][6];




static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[1]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[5])),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_8[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[5]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
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



#line 1207 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1215 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1223 "transform_hlds.term_constr_data.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  }
};

#line 1232 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  }
};

#line 1240 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1248 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1256 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1264 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4] = {
  (MR_String) "disj_goals",
  (MR_String) "disj_size",
  (MR_String) "disj_locals",
  (MR_String) "disj_nonlocals"
};

#line 1272 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0 = {
  (MR_String) "term_disj",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0,
  NULL,
  NULL
};

#line 1287 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1294 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3] = {
  (MR_String) "conj_goals",
  (MR_String) "conj_locals",
  (MR_String) "conj_nonlocals"
};

#line 1301 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1 = {
  (MR_String) "term_conj",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1,
  NULL,
  NULL
};

#line 1316 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1324 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

#line 1335 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2[7] = {
  (MR_String) "call_ppid",
  (MR_String) "call_context",
  (MR_String) "call_vars",
  (MR_String) "call_zeros",
  (MR_String) "call_locals",
  (MR_String) "call_nonlocals",
  (MR_String) "call_constrs"
};

#line 1346 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2 = {
  (MR_String) "term_call",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2,
  NULL,
  NULL
};

#line 1361 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1368 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3] = {
  (MR_String) "prim_constrs",
  (MR_String) "prim_locals",
  (MR_String) "prim_nonlocals"
};

#line 1375 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3 = {
  (MR_String) "term_primitive",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3,
  NULL,
  NULL
};

#line 1390 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0
};

#line 1395 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1
};

#line 1400 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2
};

#line 1405 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3
};

#line 1410 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3
  }
};

#line 1434 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3
};

#line 1442 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1450 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_goal",
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0
  },
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0
};

#line 1471 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_goals",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1492 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1] = {
  (MR_Integer) 0
};

#line 1497 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 = {
  (MR_String) "ho_call",
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  NULL
};

#line 1504 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_ho_call",
  {
    &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0
  },
  {
    &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0
};

#line 1525 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1] = {
  (MR_Integer) 0
};

#line 1530 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 = {
  (MR_String) "real",
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  NULL
};

#line 1537 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_ppid",
  {
    &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0
  },
  {
    &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0
};

#line 1558 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1566 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1574 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1583 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1591 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
  }
};

#line 1599 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0[12] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
};

#line 1615 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0[12] = {
  (MR_String) "ap_ppid",
  (MR_String) "ap_is_entry",
  (MR_String) "ap_context",
  (MR_String) "ap_head_vars",
  (MR_String) "ap_inputs",
  (MR_String) "ap_body",
  (MR_String) "ap_size_var_map",
  (MR_String) "ap_size_varset",
  (MR_String) "ap_zeros",
  (MR_String) "ap_recursion",
  (MR_String) "ap_num_calls",
  (MR_String) "ap_ho_calls"
};

#line 1631 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0 = {
  (MR_String) "abstract_proc",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0,
  NULL,
  NULL
};

#line 1646 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0
};

#line 1651 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0
  }
};

#line 1660 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0
};

#line 1665 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1] = {
  (MR_Integer) 0
};

#line 1670 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_proc",
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0
  },
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0
};

#line 1691 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1699 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_scc",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1720 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0 = {
  (MR_String) "arg_size_ok",
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

#line 1735 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1744 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1752 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
};

#line 1757 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1 = {
  (MR_String) "arg_size_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1772 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0
};

#line 1777 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1
};

#line 1782 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1
  }
};

#line 1796 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0
};

#line 1802 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1808 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_arg_size_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "arg_size_result",
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0
  },
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0
};

#line 1829 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_call_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____call_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____call_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "call_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1850 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_head_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____head_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____head_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "head_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1871 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_local_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____local_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____local_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "local_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1892 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_nonlocal_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "nonlocal_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1913 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 1919 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1 = {
  (MR_String) "direct_only",
  (MR_Integer) 1
};

#line 1925 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2 = {
  (MR_String) "mutual_only",
  (MR_Integer) 2
};

#line 1931 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3 = {
  (MR_String) "both",
  (MR_Integer) 3
};

#line 1937 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3
};

#line 1945 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0
};

#line 1953 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1961 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "recursion_type",
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0
  },
  {
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0
};

#line 1982 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1991 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_term_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_term_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_term",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2012 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 2020 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_terms_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_terms_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_terms_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_terms",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2041 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_var_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_var_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2062 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_var_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2083 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2104 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_varset_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_varset_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_varset",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2125 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1] = {
  (MR_Integer) 0
};

#line 2130 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 = {
  (MR_String) "after_fixed_cutoff",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2137 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____widening_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____widening_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "widening",
  {
    &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0
  },
  {
    &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0
};

#line 2158 "transform_hlds.term_constr_data.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_zero_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "zero_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2179 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
#line 2182 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2184 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2186 "transform_hlds.term_constr_data.c"
{
#line 2188 "transform_hlds.term_constr_data.c"
  {
#line 2190 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2193 "transform_hlds.term_constr_data.c"
    {
#line 2195 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2198 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2200 "transform_hlds.term_constr_data.c"
  }
#line 2202 "transform_hlds.term_constr_data.c"
}

#line 2205 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
#line 2208 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2210 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2212 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2214 "transform_hlds.term_constr_data.c"
{
#line 2216 "transform_hlds.term_constr_data.c"
  {
#line 2218 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2221 "transform_hlds.term_constr_data.c"
    {
#line 2223 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2226 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2228 "transform_hlds.term_constr_data.c"
  }
#line 2230 "transform_hlds.term_constr_data.c"
}

#line 2233 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001(
#line 2236 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2238 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2240 "transform_hlds.term_constr_data.c"
{
#line 2242 "transform_hlds.term_constr_data.c"
  {
#line 2244 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2247 "transform_hlds.term_constr_data.c"
    {
#line 2249 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goals_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2252 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2254 "transform_hlds.term_constr_data.c"
  }
#line 2256 "transform_hlds.term_constr_data.c"
}

#line 2259 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001(
#line 2262 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2264 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2266 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2268 "transform_hlds.term_constr_data.c"
{
#line 2270 "transform_hlds.term_constr_data.c"
  {
#line 2272 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2275 "transform_hlds.term_constr_data.c"
    {
#line 2277 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_goals_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2280 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2282 "transform_hlds.term_constr_data.c"
  }
#line 2284 "transform_hlds.term_constr_data.c"
}

#line 2287 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
#line 2290 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2292 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2294 "transform_hlds.term_constr_data.c"
{
#line 2296 "transform_hlds.term_constr_data.c"
  {
#line 2298 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2301 "transform_hlds.term_constr_data.c"
    {
#line 2303 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2306 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2308 "transform_hlds.term_constr_data.c"
  }
#line 2310 "transform_hlds.term_constr_data.c"
}

#line 2313 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
#line 2316 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2318 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2320 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2322 "transform_hlds.term_constr_data.c"
{
#line 2324 "transform_hlds.term_constr_data.c"
  {
#line 2326 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2329 "transform_hlds.term_constr_data.c"
    {
#line 2331 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2334 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2336 "transform_hlds.term_constr_data.c"
  }
#line 2338 "transform_hlds.term_constr_data.c"
}

#line 2341 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
#line 2344 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2346 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2348 "transform_hlds.term_constr_data.c"
{
#line 2350 "transform_hlds.term_constr_data.c"
  {
#line 2352 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2355 "transform_hlds.term_constr_data.c"
    {
#line 2357 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2360 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2362 "transform_hlds.term_constr_data.c"
  }
#line 2364 "transform_hlds.term_constr_data.c"
}

#line 2367 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
#line 2370 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2372 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2374 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2376 "transform_hlds.term_constr_data.c"
{
#line 2378 "transform_hlds.term_constr_data.c"
  {
#line 2380 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2383 "transform_hlds.term_constr_data.c"
    {
#line 2385 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2388 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2390 "transform_hlds.term_constr_data.c"
  }
#line 2392 "transform_hlds.term_constr_data.c"
}

#line 2395 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
#line 2398 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2400 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2402 "transform_hlds.term_constr_data.c"
{
#line 2404 "transform_hlds.term_constr_data.c"
  {
#line 2406 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2409 "transform_hlds.term_constr_data.c"
    {
#line 2411 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2414 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2416 "transform_hlds.term_constr_data.c"
  }
#line 2418 "transform_hlds.term_constr_data.c"
}

#line 2421 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
#line 2424 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2426 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2428 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2430 "transform_hlds.term_constr_data.c"
{
#line 2432 "transform_hlds.term_constr_data.c"
  {
#line 2434 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2437 "transform_hlds.term_constr_data.c"
    {
#line 2439 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2442 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2444 "transform_hlds.term_constr_data.c"
  }
#line 2446 "transform_hlds.term_constr_data.c"
}

#line 2449 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
#line 2452 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2454 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2456 "transform_hlds.term_constr_data.c"
{
#line 2458 "transform_hlds.term_constr_data.c"
  {
#line 2460 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2463 "transform_hlds.term_constr_data.c"
    {
#line 2465 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_scc_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2468 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2470 "transform_hlds.term_constr_data.c"
  }
#line 2472 "transform_hlds.term_constr_data.c"
}

#line 2475 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
#line 2478 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2480 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2482 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2484 "transform_hlds.term_constr_data.c"
{
#line 2486 "transform_hlds.term_constr_data.c"
  {
#line 2488 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2491 "transform_hlds.term_constr_data.c"
    {
#line 2493 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_scc_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2496 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2498 "transform_hlds.term_constr_data.c"
  }
#line 2500 "transform_hlds.term_constr_data.c"
}

#line 2503 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
#line 2506 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2508 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2510 "transform_hlds.term_constr_data.c"
{
#line 2512 "transform_hlds.term_constr_data.c"
  {
#line 2514 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2517 "transform_hlds.term_constr_data.c"
    {
#line 2519 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2522 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2524 "transform_hlds.term_constr_data.c"
  }
#line 2526 "transform_hlds.term_constr_data.c"
}

#line 2529 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
#line 2532 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2534 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2536 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2538 "transform_hlds.term_constr_data.c"
{
#line 2540 "transform_hlds.term_constr_data.c"
  {
#line 2542 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2545 "transform_hlds.term_constr_data.c"
    {
#line 2547 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____arg_size_result_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2550 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2552 "transform_hlds.term_constr_data.c"
  }
#line 2554 "transform_hlds.term_constr_data.c"
}

#line 2557 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
#line 2560 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2562 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2564 "transform_hlds.term_constr_data.c"
{
#line 2566 "transform_hlds.term_constr_data.c"
  {
#line 2568 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2571 "transform_hlds.term_constr_data.c"
    {
#line 2573 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____call_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2576 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2578 "transform_hlds.term_constr_data.c"
  }
#line 2580 "transform_hlds.term_constr_data.c"
}

#line 2583 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
#line 2586 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2588 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2590 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2592 "transform_hlds.term_constr_data.c"
{
#line 2594 "transform_hlds.term_constr_data.c"
  {
#line 2596 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2599 "transform_hlds.term_constr_data.c"
    {
#line 2601 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____call_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2604 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2606 "transform_hlds.term_constr_data.c"
  }
#line 2608 "transform_hlds.term_constr_data.c"
}

#line 2611 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
#line 2614 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2616 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2618 "transform_hlds.term_constr_data.c"
{
#line 2620 "transform_hlds.term_constr_data.c"
  {
#line 2622 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2625 "transform_hlds.term_constr_data.c"
    {
#line 2627 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____head_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2630 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2632 "transform_hlds.term_constr_data.c"
  }
#line 2634 "transform_hlds.term_constr_data.c"
}

#line 2637 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
#line 2640 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2642 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2644 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2646 "transform_hlds.term_constr_data.c"
{
#line 2648 "transform_hlds.term_constr_data.c"
  {
#line 2650 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2653 "transform_hlds.term_constr_data.c"
    {
#line 2655 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____head_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2658 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2660 "transform_hlds.term_constr_data.c"
  }
#line 2662 "transform_hlds.term_constr_data.c"
}

#line 2665 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
#line 2668 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2670 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2672 "transform_hlds.term_constr_data.c"
{
#line 2674 "transform_hlds.term_constr_data.c"
  {
#line 2676 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2679 "transform_hlds.term_constr_data.c"
    {
#line 2681 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____local_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2684 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2686 "transform_hlds.term_constr_data.c"
  }
#line 2688 "transform_hlds.term_constr_data.c"
}

#line 2691 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
#line 2694 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2696 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2698 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2700 "transform_hlds.term_constr_data.c"
{
#line 2702 "transform_hlds.term_constr_data.c"
  {
#line 2704 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2707 "transform_hlds.term_constr_data.c"
    {
#line 2709 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____local_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2712 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2714 "transform_hlds.term_constr_data.c"
  }
#line 2716 "transform_hlds.term_constr_data.c"
}

#line 2719 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
#line 2722 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2724 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2726 "transform_hlds.term_constr_data.c"
{
#line 2728 "transform_hlds.term_constr_data.c"
  {
#line 2730 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2733 "transform_hlds.term_constr_data.c"
    {
#line 2735 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2738 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2740 "transform_hlds.term_constr_data.c"
  }
#line 2742 "transform_hlds.term_constr_data.c"
}

#line 2745 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
#line 2748 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2750 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2752 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2754 "transform_hlds.term_constr_data.c"
{
#line 2756 "transform_hlds.term_constr_data.c"
  {
#line 2758 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2761 "transform_hlds.term_constr_data.c"
    {
#line 2763 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2766 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2768 "transform_hlds.term_constr_data.c"
  }
#line 2770 "transform_hlds.term_constr_data.c"
}

#line 2773 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
#line 2776 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2778 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2780 "transform_hlds.term_constr_data.c"
{
#line 2782 "transform_hlds.term_constr_data.c"
  {
#line 2784 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2787 "transform_hlds.term_constr_data.c"
    {
#line 2789 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____recursion_type_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2792 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2794 "transform_hlds.term_constr_data.c"
  }
#line 2796 "transform_hlds.term_constr_data.c"
}

#line 2799 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
#line 2802 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2804 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2806 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2808 "transform_hlds.term_constr_data.c"
{
#line 2810 "transform_hlds.term_constr_data.c"
  {
#line 2812 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2815 "transform_hlds.term_constr_data.c"
    {
#line 2817 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____recursion_type_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2820 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2822 "transform_hlds.term_constr_data.c"
  }
#line 2824 "transform_hlds.term_constr_data.c"
}

#line 2827 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
#line 2830 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2832 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2834 "transform_hlds.term_constr_data.c"
{
#line 2836 "transform_hlds.term_constr_data.c"
  {
#line 2838 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2841 "transform_hlds.term_constr_data.c"
    {
#line 2843 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_term_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2846 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2848 "transform_hlds.term_constr_data.c"
  }
#line 2850 "transform_hlds.term_constr_data.c"
}

#line 2853 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
#line 2856 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2858 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2860 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2862 "transform_hlds.term_constr_data.c"
{
#line 2864 "transform_hlds.term_constr_data.c"
  {
#line 2866 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2869 "transform_hlds.term_constr_data.c"
    {
#line 2871 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_term_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2874 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2876 "transform_hlds.term_constr_data.c"
  }
#line 2878 "transform_hlds.term_constr_data.c"
}

#line 2881 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
#line 2884 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2886 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2888 "transform_hlds.term_constr_data.c"
{
#line 2890 "transform_hlds.term_constr_data.c"
  {
#line 2892 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2895 "transform_hlds.term_constr_data.c"
    {
#line 2897 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_terms_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2900 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2902 "transform_hlds.term_constr_data.c"
  }
#line 2904 "transform_hlds.term_constr_data.c"
}

#line 2907 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
#line 2910 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2912 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2914 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2916 "transform_hlds.term_constr_data.c"
{
#line 2918 "transform_hlds.term_constr_data.c"
  {
#line 2920 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2923 "transform_hlds.term_constr_data.c"
    {
#line 2925 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_terms_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2928 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2930 "transform_hlds.term_constr_data.c"
  }
#line 2932 "transform_hlds.term_constr_data.c"
}

#line 2935 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
#line 2938 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2940 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2942 "transform_hlds.term_constr_data.c"
{
#line 2944 "transform_hlds.term_constr_data.c"
  {
#line 2946 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2949 "transform_hlds.term_constr_data.c"
    {
#line 2951 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_var_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2954 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2956 "transform_hlds.term_constr_data.c"
  }
#line 2958 "transform_hlds.term_constr_data.c"
}

#line 2961 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
#line 2964 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2966 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2968 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2970 "transform_hlds.term_constr_data.c"
{
#line 2972 "transform_hlds.term_constr_data.c"
  {
#line 2974 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2977 "transform_hlds.term_constr_data.c"
    {
#line 2979 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_var_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2982 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2984 "transform_hlds.term_constr_data.c"
  }
#line 2986 "transform_hlds.term_constr_data.c"
}

#line 2989 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
#line 2992 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2994 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2996 "transform_hlds.term_constr_data.c"
{
#line 2998 "transform_hlds.term_constr_data.c"
  {
#line 3000 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3003 "transform_hlds.term_constr_data.c"
    {
#line 3005 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_var_map_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3008 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3010 "transform_hlds.term_constr_data.c"
  }
#line 3012 "transform_hlds.term_constr_data.c"
}

#line 3015 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
#line 3018 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3020 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3022 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3024 "transform_hlds.term_constr_data.c"
{
#line 3026 "transform_hlds.term_constr_data.c"
  {
#line 3028 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3031 "transform_hlds.term_constr_data.c"
    {
#line 3033 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_var_map_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3036 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3038 "transform_hlds.term_constr_data.c"
  }
#line 3040 "transform_hlds.term_constr_data.c"
}

#line 3043 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
#line 3046 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3048 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3050 "transform_hlds.term_constr_data.c"
{
#line 3052 "transform_hlds.term_constr_data.c"
  {
#line 3054 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3057 "transform_hlds.term_constr_data.c"
    {
#line 3059 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3062 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3064 "transform_hlds.term_constr_data.c"
  }
#line 3066 "transform_hlds.term_constr_data.c"
}

#line 3069 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
#line 3072 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3074 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3076 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3078 "transform_hlds.term_constr_data.c"
{
#line 3080 "transform_hlds.term_constr_data.c"
  {
#line 3082 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3085 "transform_hlds.term_constr_data.c"
    {
#line 3087 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3090 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3092 "transform_hlds.term_constr_data.c"
  }
#line 3094 "transform_hlds.term_constr_data.c"
}

#line 3097 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
#line 3100 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3102 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3104 "transform_hlds.term_constr_data.c"
{
#line 3106 "transform_hlds.term_constr_data.c"
  {
#line 3108 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3111 "transform_hlds.term_constr_data.c"
    {
#line 3113 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_varset_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3116 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3118 "transform_hlds.term_constr_data.c"
  }
#line 3120 "transform_hlds.term_constr_data.c"
}

#line 3123 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
#line 3126 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3128 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3130 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3132 "transform_hlds.term_constr_data.c"
{
#line 3134 "transform_hlds.term_constr_data.c"
  {
#line 3136 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3139 "transform_hlds.term_constr_data.c"
    {
#line 3141 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_varset_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3144 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3146 "transform_hlds.term_constr_data.c"
  }
#line 3148 "transform_hlds.term_constr_data.c"
}

#line 3151 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
#line 3154 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3156 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3158 "transform_hlds.term_constr_data.c"
{
#line 3160 "transform_hlds.term_constr_data.c"
  {
#line 3162 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3165 "transform_hlds.term_constr_data.c"
    {
#line 3167 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____widening_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3170 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3172 "transform_hlds.term_constr_data.c"
  }
#line 3174 "transform_hlds.term_constr_data.c"
}

#line 3177 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
#line 3180 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3182 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3184 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3186 "transform_hlds.term_constr_data.c"
{
#line 3188 "transform_hlds.term_constr_data.c"
  {
#line 3190 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3193 "transform_hlds.term_constr_data.c"
    {
#line 3195 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____widening_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3198 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3200 "transform_hlds.term_constr_data.c"
  }
#line 3202 "transform_hlds.term_constr_data.c"
}

#line 3205 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
#line 3208 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3210 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3212 "transform_hlds.term_constr_data.c"
{
#line 3214 "transform_hlds.term_constr_data.c"
  {
#line 3216 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3219 "transform_hlds.term_constr_data.c"
    {
#line 3221 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____zero_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3224 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3226 "transform_hlds.term_constr_data.c"
  }
#line 3228 "transform_hlds.term_constr_data.c"
}

#line 3231 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
#line 3234 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3236 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3238 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3240 "transform_hlds.term_constr_data.c"
{
#line 3242 "transform_hlds.term_constr_data.c"
  {
#line 3244 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3247 "transform_hlds.term_constr_data.c"
    {
#line 3249 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____zero_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3252 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3254 "transform_hlds.term_constr_data.c"
  }
#line 3256 "transform_hlds.term_constr_data.c"
}

#line 480 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__480__1_2_p_0(
#line 480 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_37,
#line 480 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_56)
#line 480 "term_constr_data.m"
{
#line 480 "term_constr_data.m"
  {
#line 480 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 480 "term_constr_data.m"
    {
#line 480 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_data__HeadVar__1_37, ((MR_Box) (transform_hlds__term_constr_data__HeadVar__2_56)));
    }
#line 480 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 480 "term_constr_data.m"
  }
#line 480 "term_constr_data.m"
}

#line 478 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__478__1_2_p_0(
#line 478 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_33,
#line 478 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_53)
#line 478 "term_constr_data.m"
{
#line 478 "term_constr_data.m"
  {
#line 478 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 478 "term_constr_data.m"
    {
#line 478 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_data__HeadVar__1_33, ((MR_Box) (transform_hlds__term_constr_data__HeadVar__2_53)));
    }
#line 478 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 478 "term_constr_data.m"
  }
#line 478 "term_constr_data.m"
}

#line 647 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__dump_abstract_proc__647__1_4_p_0(
#line 647 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__SizeVarSet_13,
#line 647 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_26)
#line 647 "term_constr_data.m"
{
#line 647 "term_constr_data.m"
  {
#line 647 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 647 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__TypeCtorInfo_90_90 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 647 "term_constr_data.m"
    MR_String transform_hlds__term_constr_data__VarName_17;
#line 647 "term_constr_data.m"
    MR_String transform_hlds__term_constr_data__V_29_29;
#line 647 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_30_30;
#line 647 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_33_33;
#line 647 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__V_34_34;

#line 648 "term_constr_data.m"
    {
#line 648 "term_constr_data.m"
      mercury__varset__lookup_name_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_90_90, transform_hlds__term_constr_data__SizeVarSet_13, transform_hlds__term_constr_data__HeadVar__2_26, &transform_hlds__term_constr_data__VarName_17);
    }
#line 649 "term_constr_data.m"
    {
#line 649 "term_constr_data.m"
      transform_hlds__term_constr_data__V_29_29 = mercury__string__f_43_43_2_f_0(transform_hlds__term_constr_data__VarName_17, (MR_String) "[%d]");
    }
#line 649 "term_constr_data.m"
    {
#line 649 "term_constr_data.m"
      transform_hlds__term_constr_data__V_34_34 = mercury__term__var_to_int_1_f_0(transform_hlds__term_constr_data__TypeCtorInfo_90_90, transform_hlds__term_constr_data__HeadVar__2_26);
    }
#line 649 "term_constr_data.m"
    {
#line 649 "term_constr_data.m"
      transform_hlds__term_constr_data__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "term_constr_data.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_33_33, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_34_34));
#line 649 "term_constr_data.m"
    }
#line 649 "term_constr_data.m"
    {
#line 649 "term_constr_data.m"
      transform_hlds__term_constr_data__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "term_constr_data.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_33_33));
#line 649 "term_constr_data.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "term_constr_data.m"
    }
#line 649 "term_constr_data.m"
    {
#line 649 "term_constr_data.m"
      mercury__io__format_4_p_0(transform_hlds__term_constr_data__V_29_29, transform_hlds__term_constr_data__V_30_30);
#line 649 "term_constr_data.m"
      return;
    }
#line 647 "term_constr_data.m"
  }
#line 647 "term_constr_data.m"
}

#line 255 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0(
#line 255 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 255 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 255 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 255 "term_constr_data.m"
{
#line 255 "term_constr_data.m"
  {
#line 255 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 255 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 255 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 255 "term_constr_data.m"
    {
#line 255 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 255 "term_constr_data.m"
      return;
    }
#line 255 "term_constr_data.m"
  }
#line 255 "term_constr_data.m"
}

#line 255 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0(
#line 255 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 255 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 255 "term_constr_data.m"
{
#line 255 "term_constr_data.m"
  {
#line 255 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 255 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 255 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 255 "term_constr_data.m"
    {
#line 255 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 255 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 255 "term_constr_data.m"
  }
#line 255 "term_constr_data.m"
}

#line 150 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0(
#line 150 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 150 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 150 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 150 "term_constr_data.m"
{
#line 150 "term_constr_data.m"
  {
#line 150 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 150 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 150 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 150 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_6 == transform_hlds__term_constr_data__CastY_7);
#line 150 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 3468 "transform_hlds.term_constr_data.c"
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "term_constr_data.m"
    else
#line 150 "term_constr_data.m"
      {
#line 150 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_4_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 150 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_5_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 150 "term_constr_data.m"
        {
#line 150 "term_constr_data.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_5_5);
#line 150 "term_constr_data.m"
          return;
        }
#line 150 "term_constr_data.m"
      }
#line 150 "term_constr_data.m"
  }
#line 150 "term_constr_data.m"
}

#line 150 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0(
#line 150 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 150 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 150 "term_constr_data.m"
{
#line 150 "term_constr_data.m"
  {
#line 150 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 150 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 150 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 150 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_5 == transform_hlds__term_constr_data__CastY_6);
#line 150 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 150 "term_constr_data.m"
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 150 "term_constr_data.m"
    else
#line 150 "term_constr_data.m"
      {
#line 150 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_3_3 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 150 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_4_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 3526 "transform_hlds.term_constr_data.c"
        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_3_3 == transform_hlds__term_constr_data__V_4_4);
#line 150 "term_constr_data.m"
      }
#line 150 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 150 "term_constr_data.m"
  }
#line 150 "term_constr_data.m"
}

#line 138 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0(
#line 138 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 138 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 138 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 138 "term_constr_data.m"
{
#line 138 "term_constr_data.m"
  {
#line 138 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 138 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 138 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 138 "term_constr_data.m"
    {
#line 138 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 138 "term_constr_data.m"
      return;
    }
#line 138 "term_constr_data.m"
  }
#line 138 "term_constr_data.m"
}

#line 138 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0(
#line 138 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 138 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 138 "term_constr_data.m"
{
#line 138 "term_constr_data.m"
  {
#line 138 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 138 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 138 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 138 "term_constr_data.m"
    {
#line 138 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 138 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 138 "term_constr_data.m"
  }
#line 138 "term_constr_data.m"
}

#line 137 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0(
#line 137 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 137 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 137 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 137 "term_constr_data.m"
{
#line 137 "term_constr_data.m"
  {
#line 137 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 137 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 137 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 137 "term_constr_data.m"
    {
#line 137 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 137 "term_constr_data.m"
      return;
    }
#line 137 "term_constr_data.m"
  }
#line 137 "term_constr_data.m"
}

#line 137 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0(
#line 137 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 137 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 137 "term_constr_data.m"
{
#line 137 "term_constr_data.m"
  {
#line 137 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 137 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 137 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 137 "term_constr_data.m"
    {
#line 137 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 137 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 137 "term_constr_data.m"
  }
#line 137 "term_constr_data.m"
}

#line 145 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0(
#line 145 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 145 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 145 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 145 "term_constr_data.m"
{
#line 145 "term_constr_data.m"
  {
#line 145 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 145 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 145 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 145 "term_constr_data.m"
    {
#line 145 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 145 "term_constr_data.m"
      return;
    }
#line 145 "term_constr_data.m"
  }
#line 145 "term_constr_data.m"
}

#line 145 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0(
#line 145 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 145 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 145 "term_constr_data.m"
{
#line 145 "term_constr_data.m"
  {
#line 145 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 145 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 145 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 145 "term_constr_data.m"
    {
#line 145 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 145 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 145 "term_constr_data.m"
  }
#line 145 "term_constr_data.m"
}

#line 136 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0(
#line 136 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 136 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 136 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 136 "term_constr_data.m"
{
#line 136 "term_constr_data.m"
  {
#line 136 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 136 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 136 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 136 "term_constr_data.m"
    {
#line 136 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 136 "term_constr_data.m"
      return;
    }
#line 136 "term_constr_data.m"
  }
#line 136 "term_constr_data.m"
}

#line 136 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0(
#line 136 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 136 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 136 "term_constr_data.m"
{
#line 136 "term_constr_data.m"
  {
#line 136 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 136 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 136 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 136 "term_constr_data.m"
    {
#line 136 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 136 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 136 "term_constr_data.m"
  }
#line 136 "term_constr_data.m"
}

#line 141 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0(
#line 141 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 141 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 141 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 141 "term_constr_data.m"
{
#line 141 "term_constr_data.m"
  {
#line 141 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 141 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 141 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 141 "term_constr_data.m"
    {
#line 141 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[10], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 141 "term_constr_data.m"
      return;
    }
#line 141 "term_constr_data.m"
  }
#line 141 "term_constr_data.m"
}

#line 141 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0(
#line 141 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 141 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 141 "term_constr_data.m"
{
#line 141 "term_constr_data.m"
  {
#line 141 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 141 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 141 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 141 "term_constr_data.m"
    {
#line 141 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[10], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 141 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 141 "term_constr_data.m"
  }
#line 141 "term_constr_data.m"
}

#line 140 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0(
#line 140 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 140 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 140 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 140 "term_constr_data.m"
{
#line 140 "term_constr_data.m"
  {
#line 140 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 140 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 140 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 140 "term_constr_data.m"
    {
#line 140 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[2], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 140 "term_constr_data.m"
      return;
    }
#line 140 "term_constr_data.m"
  }
#line 140 "term_constr_data.m"
}

#line 140 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0(
#line 140 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 140 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 140 "term_constr_data.m"
{
#line 140 "term_constr_data.m"
  {
#line 140 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 140 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 140 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 140 "term_constr_data.m"
    {
#line 140 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 140 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 140 "term_constr_data.m"
  }
#line 140 "term_constr_data.m"
}

#line 299 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0(
#line 299 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 299 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 299 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 299 "term_constr_data.m"
{
#line 299 "term_constr_data.m"
  {
#line 299 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 299 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 299 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 299 "term_constr_data.m"
    {
#line 299 "term_constr_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__Cast_HeadVar1_4, transform_hlds__term_constr_data__Cast_HeadVar2_5);
#line 299 "term_constr_data.m"
      return;
    }
#line 299 "term_constr_data.m"
  }
#line 299 "term_constr_data.m"
}

#line 299 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0(
#line 299 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_1,
#line 299 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 299 "term_constr_data.m"
{
#line 3950 "transform_hlds.term_constr_data.c"
  {
#line 3952 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__HeadVar__2_1 == transform_hlds__term_constr_data__HeadVar__2_2);

#line 3955 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3957 "transform_hlds.term_constr_data.c"
  }
#line 299 "term_constr_data.m"
}

#line 247 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(
#line 247 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 247 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 247 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 247 "term_constr_data.m"
{
#line 247 "term_constr_data.m"
  {
#line 247 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 247 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 247 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 247 "term_constr_data.m"
    {
#line 247 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 247 "term_constr_data.m"
      return;
    }
#line 247 "term_constr_data.m"
  }
#line 247 "term_constr_data.m"
}

#line 247 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(
#line 247 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 247 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 247 "term_constr_data.m"
{
#line 247 "term_constr_data.m"
  {
#line 247 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 247 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 247 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 247 "term_constr_data.m"
    {
#line 247 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 247 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 247 "term_constr_data.m"
  }
#line 247 "term_constr_data.m"
}

#line 246 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0(
#line 246 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 246 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 246 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 246 "term_constr_data.m"
{
#line 246 "term_constr_data.m"
  {
#line 246 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 246 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 246 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 246 "term_constr_data.m"
    {
#line 246 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 246 "term_constr_data.m"
      return;
    }
#line 246 "term_constr_data.m"
  }
#line 246 "term_constr_data.m"
}

#line 246 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0(
#line 246 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 246 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 246 "term_constr_data.m"
{
#line 246 "term_constr_data.m"
  {
#line 246 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 246 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 246 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 246 "term_constr_data.m"
    {
#line 246 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 246 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 246 "term_constr_data.m"
  }
#line 246 "term_constr_data.m"
}

#line 250 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0(
#line 250 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 250 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 250 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 250 "term_constr_data.m"
{
#line 250 "term_constr_data.m"
  {
#line 250 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 250 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 250 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 250 "term_constr_data.m"
    {
#line 250 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 250 "term_constr_data.m"
      return;
    }
#line 250 "term_constr_data.m"
  }
#line 250 "term_constr_data.m"
}

#line 250 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0(
#line 250 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 250 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 250 "term_constr_data.m"
{
#line 250 "term_constr_data.m"
  {
#line 250 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 250 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 250 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 250 "term_constr_data.m"
    {
#line 250 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 250 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 250 "term_constr_data.m"
  }
#line 250 "term_constr_data.m"
}

#line 249 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0(
#line 249 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 249 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 249 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 249 "term_constr_data.m"
{
#line 249 "term_constr_data.m"
  {
#line 249 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 249 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 249 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 249 "term_constr_data.m"
    {
#line 249 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 249 "term_constr_data.m"
      return;
    }
#line 249 "term_constr_data.m"
  }
#line 249 "term_constr_data.m"
}

#line 249 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0(
#line 249 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 249 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 249 "term_constr_data.m"
{
#line 249 "term_constr_data.m"
  {
#line 249 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 249 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 249 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 249 "term_constr_data.m"
    {
#line 249 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 249 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 249 "term_constr_data.m"
  }
#line 249 "term_constr_data.m"
}

#line 159 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0(
#line 159 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 159 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 159 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 159 "term_constr_data.m"
{
#line 159 "term_constr_data.m"
  {
#line 159 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 159 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_8 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 159 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_9 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 159 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_8 == transform_hlds__term_constr_data__CastY_9);
#line 159 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 4234 "transform_hlds.term_constr_data.c"
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 159 "term_constr_data.m"
    else
#line 159 "term_constr_data.m"
      if ((transform_hlds__term_constr_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "term_constr_data.m"
          *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 159 "term_constr_data.m"
        else
#line 4246 "transform_hlds.term_constr_data.c"
          *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "term_constr_data.m"
      else
#line 159 "term_constr_data.m"
        {
#line 159 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

#line 159 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4257 "transform_hlds.term_constr_data.c"
            *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "term_constr_data.m"
          else
#line 159 "term_constr_data.m"
            {
#line 159 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));

#line 159 "term_constr_data.m"
              {
#line 159 "term_constr_data.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[9], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_7_7)));
#line 159 "term_constr_data.m"
                return;
              }
#line 159 "term_constr_data.m"
            }
#line 159 "term_constr_data.m"
        }
#line 159 "term_constr_data.m"
  }
#line 159 "term_constr_data.m"
}

#line 159 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0(
#line 159 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 159 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 159 "term_constr_data.m"
{
#line 159 "term_constr_data.m"
  {
#line 159 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 159 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 159 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_8 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 159 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_7 == transform_hlds__term_constr_data__CastY_8);
#line 159 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 159 "term_constr_data.m"
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 159 "term_constr_data.m"
    else
#line 159 "term_constr_data.m"
      if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "term_constr_data.m"
        {
#line 159 "term_constr_data.m"
          MR_Integer transform_hlds__term_constr_data__CastX_3 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 159 "term_constr_data.m"
          MR_Integer transform_hlds__term_constr_data__CastY_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 159 "term_constr_data.m"
          transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastY_4 == transform_hlds__term_constr_data__CastX_3);
#line 159 "term_constr_data.m"
        }
#line 159 "term_constr_data.m"
      else
#line 159 "term_constr_data.m"
        {
#line 159 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_9_9;
#line 159 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_6_6;

#line 159 "term_constr_data.m"
          transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 159 "term_constr_data.m"
          if (transform_hlds__term_constr_data__succeeded)
#line 159 "term_constr_data.m"
            {
#line 159 "term_constr_data.m"
              transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 4340 "transform_hlds.term_constr_data.c"
              transform_hlds__term_constr_data__TypeInfo_9_9 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[9];
#line 4342 "transform_hlds.term_constr_data.c"
              {
#line 4344 "transform_hlds.term_constr_data.c"
                return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_9_9, ((MR_Box) (transform_hlds__term_constr_data__V_5_5)), ((MR_Box) (transform_hlds__term_constr_data__V_6_6)));
              }
#line 159 "term_constr_data.m"
            }
#line 159 "term_constr_data.m"
        }
#line 159 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 159 "term_constr_data.m"
  }
#line 159 "term_constr_data.m"
}

#line 173 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0(
#line 173 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 173 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 173 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 173 "term_constr_data.m"
{
#line 173 "term_constr_data.m"
  {
#line 173 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 173 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 173 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 173 "term_constr_data.m"
    {
#line 173 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[8], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 173 "term_constr_data.m"
      return;
    }
#line 173 "term_constr_data.m"
  }
#line 173 "term_constr_data.m"
}

#line 173 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0(
#line 173 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 173 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 173 "term_constr_data.m"
{
#line 173 "term_constr_data.m"
  {
#line 173 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 173 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 173 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 173 "term_constr_data.m"
    {
#line 173 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[8], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 173 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 173 "term_constr_data.m"
  }
#line 173 "term_constr_data.m"
}

#line 190 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0(
#line 190 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 190 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 190 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 190 "term_constr_data.m"
{
#line 190 "term_constr_data.m"
  {
#line 190 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 190 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_39 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 190 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_40 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 190 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_39 == transform_hlds__term_constr_data__CastY_40);
#line 190 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 4444 "transform_hlds.term_constr_data.c"
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 190 "term_constr_data.m"
    else
#line 190 "term_constr_data.m"
      {
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 7)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 8)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 9)));
#line 190 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 10)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 11)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 3)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 4)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 5)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 6)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 7)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 8)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 9)));
#line 190 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 10)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 11)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_28_28;

#line 190 "term_constr_data.m"
        {
#line 190 "term_constr_data.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__V_28_28, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_16_16);
        }
#line 4506 "transform_hlds.term_constr_data.c"
        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_28_28 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
          *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_28_28;
#line 190 "term_constr_data.m"
        else
#line 190 "term_constr_data.m"
          {
#line 190 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_29_29;
#line 190 "term_constr_data.m"
            MR_Integer transform_hlds__term_constr_data__V_53_53 = (MR_Integer) transform_hlds__term_constr_data__V_5_5;
#line 190 "term_constr_data.m"
            MR_Integer transform_hlds__term_constr_data__V_54_54 = (MR_Integer) transform_hlds__term_constr_data__V_17_17;

#line 190 "term_constr_data.m"
            {
#line 190 "term_constr_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_29_29, transform_hlds__term_constr_data__V_53_53, transform_hlds__term_constr_data__V_54_54);
            }
#line 4530 "transform_hlds.term_constr_data.c"
            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_29_29 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
            transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
              *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_29_29;
#line 190 "term_constr_data.m"
            else
#line 190 "term_constr_data.m"
              {
#line 190 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__V_30_30;

#line 190 "term_constr_data.m"
                {
#line 190 "term_constr_data.m"
                  mercury__term____Compare____context_0_0(&transform_hlds__term_constr_data__V_30_30, transform_hlds__term_constr_data__V_6_6, transform_hlds__term_constr_data__V_18_18);
                }
#line 4550 "transform_hlds.term_constr_data.c"
                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_30_30 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_30_30;
#line 190 "term_constr_data.m"
                else
#line 190 "term_constr_data.m"
                  {
#line 190 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__V_31_31;

#line 190 "term_constr_data.m"
                    {
#line 190 "term_constr_data.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_31_31, ((MR_Box) (transform_hlds__term_constr_data__V_7_7)), ((MR_Box) (transform_hlds__term_constr_data__V_19_19)));
                    }
#line 4570 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_31_31 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                    transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                      *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_31_31;
#line 190 "term_constr_data.m"
                    else
#line 190 "term_constr_data.m"
                      {
#line 190 "term_constr_data.m"
                        MR_Word transform_hlds__term_constr_data__V_32_32;

#line 190 "term_constr_data.m"
                        {
#line 190 "term_constr_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[4], &transform_hlds__term_constr_data__V_32_32, ((MR_Box) (transform_hlds__term_constr_data__V_8_8)), ((MR_Box) (transform_hlds__term_constr_data__V_20_20)));
                        }
#line 4590 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_32_32 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                          *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_32_32;
#line 190 "term_constr_data.m"
                        else
#line 190 "term_constr_data.m"
                          {
#line 190 "term_constr_data.m"
                            MR_Word transform_hlds__term_constr_data__V_33_33;

#line 190 "term_constr_data.m"
                            {
#line 190 "term_constr_data.m"
                              transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&transform_hlds__term_constr_data__V_33_33, transform_hlds__term_constr_data__V_9_9, transform_hlds__term_constr_data__V_21_21);
                            }
#line 4610 "transform_hlds.term_constr_data.c"
                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_33_33 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                            transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                              *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_33_33;
#line 190 "term_constr_data.m"
                            else
#line 190 "term_constr_data.m"
                              {
#line 190 "term_constr_data.m"
                                MR_Word transform_hlds__term_constr_data__V_34_34;

#line 190 "term_constr_data.m"
                                {
#line 190 "term_constr_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0], &transform_hlds__term_constr_data__V_34_34, ((MR_Box) (transform_hlds__term_constr_data__V_10_10)), ((MR_Box) (transform_hlds__term_constr_data__V_22_22)));
                                }
#line 4630 "transform_hlds.term_constr_data.c"
                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_34_34 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                                transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                  *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_34_34;
#line 190 "term_constr_data.m"
                                else
#line 190 "term_constr_data.m"
                                  {
#line 190 "term_constr_data.m"
                                    MR_Word transform_hlds__term_constr_data__V_35_35;

#line 190 "term_constr_data.m"
                                    {
#line 190 "term_constr_data.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6], &transform_hlds__term_constr_data__V_35_35, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_23_23)));
                                    }
#line 4650 "transform_hlds.term_constr_data.c"
                                    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_35_35 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                                    transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                                    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                      *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_35_35;
#line 190 "term_constr_data.m"
                                    else
#line 190 "term_constr_data.m"
                                      {
#line 190 "term_constr_data.m"
                                        MR_Word transform_hlds__term_constr_data__V_36_36;

#line 190 "term_constr_data.m"
                                        {
#line 190 "term_constr_data.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], &transform_hlds__term_constr_data__V_36_36, ((MR_Box) (transform_hlds__term_constr_data__V_12_12)), ((MR_Box) (transform_hlds__term_constr_data__V_24_24)));
                                        }
#line 4670 "transform_hlds.term_constr_data.c"
                                        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_36_36 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                                        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                                        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                          *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_36_36;
#line 190 "term_constr_data.m"
                                        else
#line 190 "term_constr_data.m"
                                          {
#line 190 "term_constr_data.m"
                                            MR_Word transform_hlds__term_constr_data__V_37_37;
#line 190 "term_constr_data.m"
                                            MR_Integer transform_hlds__term_constr_data__V_55_55 = (MR_Integer) transform_hlds__term_constr_data__V_13_13;
#line 190 "term_constr_data.m"
                                            MR_Integer transform_hlds__term_constr_data__V_56_56 = (MR_Integer) transform_hlds__term_constr_data__V_25_25;

#line 190 "term_constr_data.m"
                                            {
#line 190 "term_constr_data.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_37_37, transform_hlds__term_constr_data__V_55_55, transform_hlds__term_constr_data__V_56_56);
                                            }
#line 4694 "transform_hlds.term_constr_data.c"
                                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_37_37 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                                            transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                                            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                              *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_37_37;
#line 190 "term_constr_data.m"
                                            else
#line 190 "term_constr_data.m"
                                              {
#line 190 "term_constr_data.m"
                                                MR_Word transform_hlds__term_constr_data__V_38_38;

#line 190 "term_constr_data.m"
                                                {
#line 190 "term_constr_data.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_38_38, transform_hlds__term_constr_data__V_14_14, transform_hlds__term_constr_data__V_26_26);
                                                }
#line 4714 "transform_hlds.term_constr_data.c"
                                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_38_38 == (MR_Integer) 0);
#line 190 "term_constr_data.m"
                                                transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 190 "term_constr_data.m"
                                                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                                  *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_38_38;
#line 190 "term_constr_data.m"
                                                else
#line 190 "term_constr_data.m"
                                                  {
#line 190 "term_constr_data.m"
                                                    {
#line 190 "term_constr_data.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[7], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_15_15)), ((MR_Box) (transform_hlds__term_constr_data__V_27_27)));
#line 190 "term_constr_data.m"
                                                      return;
                                                    }
#line 190 "term_constr_data.m"
                                                  }
#line 190 "term_constr_data.m"
                                              }
#line 190 "term_constr_data.m"
                                          }
#line 190 "term_constr_data.m"
                                      }
#line 190 "term_constr_data.m"
                                  }
#line 190 "term_constr_data.m"
                              }
#line 190 "term_constr_data.m"
                          }
#line 190 "term_constr_data.m"
                      }
#line 190 "term_constr_data.m"
                  }
#line 190 "term_constr_data.m"
              }
#line 190 "term_constr_data.m"
          }
#line 190 "term_constr_data.m"
      }
#line 190 "term_constr_data.m"
  }
#line 190 "term_constr_data.m"
}

#line 190 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0(
#line 190 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 190 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 190 "term_constr_data.m"
{
#line 190 "term_constr_data.m"
  {
#line 190 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 190 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_27 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 190 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_28 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 190 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_27 == transform_hlds__term_constr_data__CastY_28);
#line 190 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 190 "term_constr_data.m"
    else
#line 190 "term_constr_data.m"
      {
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_30_30;
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_31_31;
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_32_32;
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_33_33;
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_34_34;
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_35_35;
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 3)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 4)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 5)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 6)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 7)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 8)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 9)));
#line 190 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 10)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 11)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 7)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 8)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 9)));
#line 190 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 10)));
#line 190 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 11)));

#line 4851 "transform_hlds.term_constr_data.c"
        {
#line 4853 "transform_hlds.term_constr_data.c"
          transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_15_15);
        }
#line 190 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
          {
#line 4860 "transform_hlds.term_constr_data.c"
            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == transform_hlds__term_constr_data__V_16_16);
#line 190 "term_constr_data.m"
            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
              {
#line 4866 "transform_hlds.term_constr_data.c"
                {
#line 4868 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_5_5, transform_hlds__term_constr_data__V_17_17);
                }
#line 190 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                  {
#line 4875 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 4877 "transform_hlds.term_constr_data.c"
                    {
#line 4879 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_data__V_6_6)), ((MR_Box) (transform_hlds__term_constr_data__V_18_18)));
                    }
#line 190 "term_constr_data.m"
                    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                      {
#line 4886 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[4];
#line 4888 "transform_hlds.term_constr_data.c"
                        {
#line 4890 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_data__V_7_7)), ((MR_Box) (transform_hlds__term_constr_data__V_19_19)));
                        }
#line 190 "term_constr_data.m"
                        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                          {
#line 4897 "transform_hlds.term_constr_data.c"
                            {
#line 4899 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(transform_hlds__term_constr_data__V_8_8, transform_hlds__term_constr_data__V_20_20);
                            }
#line 190 "term_constr_data.m"
                            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                              {
#line 4906 "transform_hlds.term_constr_data.c"
                                transform_hlds__term_constr_data__TypeInfo_32_32 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0];
#line 4908 "transform_hlds.term_constr_data.c"
                                {
#line 4910 "transform_hlds.term_constr_data.c"
                                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_32_32, ((MR_Box) (transform_hlds__term_constr_data__V_9_9)), ((MR_Box) (transform_hlds__term_constr_data__V_21_21)));
                                }
#line 190 "term_constr_data.m"
                                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                  {
#line 4917 "transform_hlds.term_constr_data.c"
                                    transform_hlds__term_constr_data__TypeInfo_33_33 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6];
#line 4919 "transform_hlds.term_constr_data.c"
                                    {
#line 4921 "transform_hlds.term_constr_data.c"
                                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_33_33, ((MR_Box) (transform_hlds__term_constr_data__V_10_10)), ((MR_Box) (transform_hlds__term_constr_data__V_22_22)));
                                    }
#line 190 "term_constr_data.m"
                                    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                      {
#line 4928 "transform_hlds.term_constr_data.c"
                                        transform_hlds__term_constr_data__TypeInfo_34_34 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2];
#line 4930 "transform_hlds.term_constr_data.c"
                                        {
#line 4932 "transform_hlds.term_constr_data.c"
                                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_34_34, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_23_23)));
                                        }
#line 190 "term_constr_data.m"
                                        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                          {
#line 4939 "transform_hlds.term_constr_data.c"
                                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_12_12 == transform_hlds__term_constr_data__V_24_24);
#line 190 "term_constr_data.m"
                                            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                              {
#line 4945 "transform_hlds.term_constr_data.c"
                                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_13_13 == transform_hlds__term_constr_data__V_25_25);
#line 190 "term_constr_data.m"
                                                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                                  {
#line 4951 "transform_hlds.term_constr_data.c"
                                                    transform_hlds__term_constr_data__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[7];
#line 4953 "transform_hlds.term_constr_data.c"
                                                    {
#line 4955 "transform_hlds.term_constr_data.c"
                                                      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_35_35, ((MR_Box) (transform_hlds__term_constr_data__V_14_14)), ((MR_Box) (transform_hlds__term_constr_data__V_26_26)));
                                                    }
#line 190 "term_constr_data.m"
                                                  }
#line 190 "term_constr_data.m"
                                              }
#line 190 "term_constr_data.m"
                                          }
#line 190 "term_constr_data.m"
                                      }
#line 190 "term_constr_data.m"
                                  }
#line 190 "term_constr_data.m"
                              }
#line 190 "term_constr_data.m"
                          }
#line 190 "term_constr_data.m"
                      }
#line 190 "term_constr_data.m"
                  }
#line 190 "term_constr_data.m"
              }
#line 190 "term_constr_data.m"
          }
#line 190 "term_constr_data.m"
      }
#line 190 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 190 "term_constr_data.m"
  }
#line 190 "term_constr_data.m"
}

#line 187 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(
#line 187 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 187 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 187 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 187 "term_constr_data.m"
{
#line 187 "term_constr_data.m"
  {
#line 187 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 187 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 187 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 187 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_6 == transform_hlds__term_constr_data__CastY_7);
#line 187 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 5013 "transform_hlds.term_constr_data.c"
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 187 "term_constr_data.m"
    else
#line 187 "term_constr_data.m"
      {
#line 187 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;
#line 187 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_5_5 = (MR_Word) transform_hlds__term_constr_data__HeadVar__3_3;

#line 187 "term_constr_data.m"
        {
#line 187 "term_constr_data.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_5_5);
#line 187 "term_constr_data.m"
          return;
        }
#line 187 "term_constr_data.m"
      }
#line 187 "term_constr_data.m"
  }
#line 187 "term_constr_data.m"
}

#line 187 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(
#line 187 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 187 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 187 "term_constr_data.m"
{
#line 187 "term_constr_data.m"
  {
#line 187 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 187 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 187 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 187 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_5 == transform_hlds__term_constr_data__CastY_6);
#line 187 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 187 "term_constr_data.m"
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 187 "term_constr_data.m"
    else
#line 187 "term_constr_data.m"
      {
#line 187 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_3_3 = (MR_Word) transform_hlds__term_constr_data__HeadVar__1_1;
#line 187 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;

#line 5071 "transform_hlds.term_constr_data.c"
        {
#line 5073 "transform_hlds.term_constr_data.c"
          return transform_hlds__term_constr_data__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_4_4);
        }
#line 187 "term_constr_data.m"
      }
#line 187 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 187 "term_constr_data.m"
  }
#line 187 "term_constr_data.m"
}

#line 239 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(
#line 239 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 239 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 239 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 239 "term_constr_data.m"
{
#line 239 "term_constr_data.m"
  {
#line 239 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 239 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 239 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 239 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_6 == transform_hlds__term_constr_data__CastY_7);
#line 239 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 5109 "transform_hlds.term_constr_data.c"
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "term_constr_data.m"
    else
#line 239 "term_constr_data.m"
      {
#line 239 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;
#line 239 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_5_5 = (MR_Word) transform_hlds__term_constr_data__HeadVar__3_3;

#line 239 "term_constr_data.m"
        {
#line 239 "term_constr_data.m"
          mercury__term____Compare____context_0_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_5_5);
#line 239 "term_constr_data.m"
          return;
        }
#line 239 "term_constr_data.m"
      }
#line 239 "term_constr_data.m"
  }
#line 239 "term_constr_data.m"
}

#line 239 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(
#line 239 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 239 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 239 "term_constr_data.m"
{
#line 239 "term_constr_data.m"
  {
#line 239 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 239 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 239 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 239 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_5 == transform_hlds__term_constr_data__CastY_6);
#line 239 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 239 "term_constr_data.m"
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 239 "term_constr_data.m"
    else
#line 239 "term_constr_data.m"
      {
#line 239 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_3_3 = (MR_Word) transform_hlds__term_constr_data__HeadVar__1_1;
#line 239 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;

#line 5167 "transform_hlds.term_constr_data.c"
        {
#line 5169 "transform_hlds.term_constr_data.c"
          return transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_4_4);
        }
#line 239 "term_constr_data.m"
      }
#line 239 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 239 "term_constr_data.m"
  }
#line 239 "term_constr_data.m"
}

#line 291 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0(
#line 291 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 291 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 291 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 291 "term_constr_data.m"
{
#line 291 "term_constr_data.m"
  {
#line 291 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 291 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
#line 291 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

#line 291 "term_constr_data.m"
    {
#line 291 "term_constr_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
#line 291 "term_constr_data.m"
      return;
    }
#line 291 "term_constr_data.m"
  }
#line 291 "term_constr_data.m"
}

#line 291 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0(
#line 291 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 291 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 291 "term_constr_data.m"
{
#line 291 "term_constr_data.m"
  {
#line 291 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 291 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
#line 291 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

#line 291 "term_constr_data.m"
    {
#line 291 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
#line 291 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 291 "term_constr_data.m"
  }
#line 291 "term_constr_data.m"
}

#line 260 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0(
#line 260 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
#line 260 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
#line 260 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
#line 260 "term_constr_data.m"
{
#line 260 "term_constr_data.m"
  {
#line 260 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 260 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_153 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
#line 260 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_154 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

#line 260 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_153 == transform_hlds__term_constr_data__CastY_154);
#line 260 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 5267 "transform_hlds.term_constr_data.c"
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "term_constr_data.m"
    else
#line 260 "term_constr_data.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 260 "term_constr_data.m"
        {
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "term_constr_data.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 260 "term_constr_data.m"
            {
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 4)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 5)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 6)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_106_106;

#line 260 "term_constr_data.m"
              {
#line 260 "term_constr_data.m"
                transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__V_106_106, transform_hlds__term_constr_data__V_178_178, transform_hlds__term_constr_data__V_99_99);
              }
#line 5316 "transform_hlds.term_constr_data.c"
              transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_106_106 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_106_106;
#line 260 "term_constr_data.m"
              else
#line 260 "term_constr_data.m"
                {
#line 260 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__V_107_107;

#line 260 "term_constr_data.m"
                  {
#line 260 "term_constr_data.m"
                    mercury__term____Compare____context_0_0(&transform_hlds__term_constr_data__V_107_107, transform_hlds__term_constr_data__V_177_177, transform_hlds__term_constr_data__V_100_100);
                  }
#line 5336 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_107_107 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_107_107;
#line 260 "term_constr_data.m"
                  else
#line 260 "term_constr_data.m"
                    {
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_108_108;

#line 260 "term_constr_data.m"
                      {
#line 260 "term_constr_data.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_108_108, ((MR_Box) (transform_hlds__term_constr_data__V_176_176)), ((MR_Box) (transform_hlds__term_constr_data__V_101_101)));
                      }
#line 5356 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_108_108 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_108_108;
#line 260 "term_constr_data.m"
                      else
#line 260 "term_constr_data.m"
                        {
#line 260 "term_constr_data.m"
                          MR_Word transform_hlds__term_constr_data__V_109_109;

#line 260 "term_constr_data.m"
                          {
#line 260 "term_constr_data.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], &transform_hlds__term_constr_data__V_109_109, ((MR_Box) (transform_hlds__term_constr_data__V_175_175)), ((MR_Box) (transform_hlds__term_constr_data__V_102_102)));
                          }
#line 5376 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_109_109 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                          transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_109_109;
#line 260 "term_constr_data.m"
                          else
#line 260 "term_constr_data.m"
                            {
#line 260 "term_constr_data.m"
                              MR_Word transform_hlds__term_constr_data__V_110_110;

#line 260 "term_constr_data.m"
                              {
#line 260 "term_constr_data.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_110_110, ((MR_Box) (transform_hlds__term_constr_data__V_174_174)), ((MR_Box) (transform_hlds__term_constr_data__V_103_103)));
                              }
#line 5396 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_110_110 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                              transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                                *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_110_110;
#line 260 "term_constr_data.m"
                              else
#line 260 "term_constr_data.m"
                                {
#line 260 "term_constr_data.m"
                                  MR_Word transform_hlds__term_constr_data__V_111_111;

#line 260 "term_constr_data.m"
                                  {
#line 260 "term_constr_data.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_111_111, ((MR_Box) (transform_hlds__term_constr_data__V_173_173)), ((MR_Box) (transform_hlds__term_constr_data__V_104_104)));
                                  }
#line 5416 "transform_hlds.term_constr_data.c"
                                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_111_111 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_111_111;
#line 260 "term_constr_data.m"
                                  else
#line 260 "term_constr_data.m"
                                    {
#line 260 "term_constr_data.m"
                                      libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_172_172, transform_hlds__term_constr_data__V_105_105);
#line 260 "term_constr_data.m"
                                      return;
                                    }
#line 260 "term_constr_data.m"
                                }
#line 260 "term_constr_data.m"
                            }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
                }
#line 260 "term_constr_data.m"
            }
#line 260 "term_constr_data.m"
          else
#line 260 "term_constr_data.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5449 "transform_hlds.term_constr_data.c"
              *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
            else
#line 260 "term_constr_data.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5455 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
              else
#line 5459 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
        }
#line 260 "term_constr_data.m"
      else
#line 260 "term_constr_data.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 260 "term_constr_data.m"
          {
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "term_constr_data.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5478 "transform_hlds.term_constr_data.c"
              *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
            else
#line 260 "term_constr_data.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 260 "term_constr_data.m"
                {
#line 260 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__V_53_53;

#line 260 "term_constr_data.m"
                  {
#line 260 "term_constr_data.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], &transform_hlds__term_constr_data__V_53_53, ((MR_Box) (transform_hlds__term_constr_data__V_181_181)), ((MR_Box) (transform_hlds__term_constr_data__V_50_50)));
                  }
#line 5500 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_53_53 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_53_53;
#line 260 "term_constr_data.m"
                  else
#line 260 "term_constr_data.m"
                    {
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_54_54;

#line 260 "term_constr_data.m"
                      {
#line 260 "term_constr_data.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_54_54, ((MR_Box) (transform_hlds__term_constr_data__V_180_180)), ((MR_Box) (transform_hlds__term_constr_data__V_51_51)));
                      }
#line 5520 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_54_54 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_54_54;
#line 260 "term_constr_data.m"
                      else
#line 260 "term_constr_data.m"
                        {
#line 260 "term_constr_data.m"
                          {
#line 260 "term_constr_data.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_179_179)), ((MR_Box) (transform_hlds__term_constr_data__V_52_52)));
#line 260 "term_constr_data.m"
                            return;
                          }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
                }
#line 260 "term_constr_data.m"
              else
#line 260 "term_constr_data.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5549 "transform_hlds.term_constr_data.c"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
                else
#line 5553 "transform_hlds.term_constr_data.c"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
          }
#line 260 "term_constr_data.m"
        else
#line 260 "term_constr_data.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 260 "term_constr_data.m"
            {
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
              MR_Integer transform_hlds__term_constr_data__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "term_constr_data.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5574 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
              else
#line 260 "term_constr_data.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5580 "transform_hlds.term_constr_data.c"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
                else
#line 260 "term_constr_data.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 260 "term_constr_data.m"
                    {
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
                      MR_Integer transform_hlds__term_constr_data__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_12_12;

#line 260 "term_constr_data.m"
                      {
#line 260 "term_constr_data.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], &transform_hlds__term_constr_data__V_12_12, ((MR_Box) (transform_hlds__term_constr_data__V_185_185)), ((MR_Box) (transform_hlds__term_constr_data__V_8_8)));
                      }
#line 5604 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_12_12 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_12_12;
#line 260 "term_constr_data.m"
                      else
#line 260 "term_constr_data.m"
                        {
#line 260 "term_constr_data.m"
                          MR_Word transform_hlds__term_constr_data__V_13_13;

#line 260 "term_constr_data.m"
                          {
#line 260 "term_constr_data.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_13_13, transform_hlds__term_constr_data__V_184_184, transform_hlds__term_constr_data__V_9_9);
                          }
#line 5624 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_13_13 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                          transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_13_13;
#line 260 "term_constr_data.m"
                          else
#line 260 "term_constr_data.m"
                            {
#line 260 "term_constr_data.m"
                              MR_Word transform_hlds__term_constr_data__V_14_14;

#line 260 "term_constr_data.m"
                              {
#line 260 "term_constr_data.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_14_14, ((MR_Box) (transform_hlds__term_constr_data__V_183_183)), ((MR_Box) (transform_hlds__term_constr_data__V_10_10)));
                              }
#line 5644 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_14_14 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                              transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                                *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_14_14;
#line 260 "term_constr_data.m"
                              else
#line 260 "term_constr_data.m"
                                {
#line 260 "term_constr_data.m"
                                  {
#line 260 "term_constr_data.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_182_182)), ((MR_Box) (transform_hlds__term_constr_data__V_11_11)));
#line 260 "term_constr_data.m"
                                    return;
                                  }
#line 260 "term_constr_data.m"
                                }
#line 260 "term_constr_data.m"
                            }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
                  else
#line 5673 "transform_hlds.term_constr_data.c"
                    *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
            }
#line 260 "term_constr_data.m"
          else
#line 260 "term_constr_data.m"
            {
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "term_constr_data.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5690 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
              else
#line 260 "term_constr_data.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5696 "transform_hlds.term_constr_data.c"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
                else
#line 260 "term_constr_data.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5702 "transform_hlds.term_constr_data.c"
                    *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
                  else
#line 260 "term_constr_data.m"
                    {
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__V_151_151;

#line 260 "term_constr_data.m"
                      {
#line 260 "term_constr_data.m"
                        libs__polyhedron____Compare____polyhedron_0_0(&transform_hlds__term_constr_data__V_151_151, transform_hlds__term_constr_data__V_188_188, transform_hlds__term_constr_data__V_148_148);
                      }
#line 5722 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_151_151 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_151_151;
#line 260 "term_constr_data.m"
                      else
#line 260 "term_constr_data.m"
                        {
#line 260 "term_constr_data.m"
                          MR_Word transform_hlds__term_constr_data__V_152_152;

#line 260 "term_constr_data.m"
                          {
#line 260 "term_constr_data.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_152_152, ((MR_Box) (transform_hlds__term_constr_data__V_187_187)), ((MR_Box) (transform_hlds__term_constr_data__V_149_149)));
                          }
#line 5742 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_152_152 == (MR_Integer) 0);
#line 260 "term_constr_data.m"
                          transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_152_152;
#line 260 "term_constr_data.m"
                          else
#line 260 "term_constr_data.m"
                            {
#line 260 "term_constr_data.m"
                              {
#line 260 "term_constr_data.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_186_186)), ((MR_Box) (transform_hlds__term_constr_data__V_150_150)));
#line 260 "term_constr_data.m"
                                return;
                              }
#line 260 "term_constr_data.m"
                            }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
            }
#line 260 "term_constr_data.m"
  }
#line 260 "term_constr_data.m"
}

#line 260 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0(
#line 260 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 260 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 260 "term_constr_data.m"
{
#line 260 "term_constr_data.m"
  {
#line 260 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 260 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastX_37 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
#line 260 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__CastY_38 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

#line 260 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_37 == transform_hlds__term_constr_data__CastY_38);
#line 260 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 260 "term_constr_data.m"
    else
#line 260 "term_constr_data.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 260 "term_constr_data.m"
        {
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_40_40;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_41_41;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_42_42;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_43_43;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 4)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 5)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 6)));
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_24_24;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_25_25;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_26_26;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_27_27;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_28_28;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_29_29;
#line 260 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_30_30;

#line 260 "term_constr_data.m"
          transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 260 "term_constr_data.m"
          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
            {
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
#line 5861 "transform_hlds.term_constr_data.c"
              {
#line 5863 "transform_hlds.term_constr_data.c"
                transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_data__V_17_17, transform_hlds__term_constr_data__V_24_24);
              }
#line 260 "term_constr_data.m"
              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                {
#line 5870 "transform_hlds.term_constr_data.c"
                  {
#line 5872 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_18_18, transform_hlds__term_constr_data__V_25_25);
                  }
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    {
#line 5879 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__TypeInfo_40_40 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5881 "transform_hlds.term_constr_data.c"
                      {
#line 5883 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_40_40, ((MR_Box) (transform_hlds__term_constr_data__V_19_19)), ((MR_Box) (transform_hlds__term_constr_data__V_26_26)));
                      }
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        {
#line 5890 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__TypeInfo_41_41 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2];
#line 5892 "transform_hlds.term_constr_data.c"
                          {
#line 5894 "transform_hlds.term_constr_data.c"
                            transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_41_41, ((MR_Box) (transform_hlds__term_constr_data__V_20_20)), ((MR_Box) (transform_hlds__term_constr_data__V_27_27)));
                          }
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            {
#line 5901 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__TypeInfo_42_42 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5903 "transform_hlds.term_constr_data.c"
                              {
#line 5905 "transform_hlds.term_constr_data.c"
                                transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_42_42, ((MR_Box) (transform_hlds__term_constr_data__V_21_21)), ((MR_Box) (transform_hlds__term_constr_data__V_28_28)));
                              }
#line 260 "term_constr_data.m"
                              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                                {
#line 5912 "transform_hlds.term_constr_data.c"
                                  transform_hlds__term_constr_data__TypeInfo_43_43 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5914 "transform_hlds.term_constr_data.c"
                                  {
#line 5916 "transform_hlds.term_constr_data.c"
                                    transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_43_43, ((MR_Box) (transform_hlds__term_constr_data__V_22_22)), ((MR_Box) (transform_hlds__term_constr_data__V_29_29)));
                                  }
#line 260 "term_constr_data.m"
                                  if (transform_hlds__term_constr_data__succeeded)
#line 5921 "transform_hlds.term_constr_data.c"
                                    {
#line 5923 "transform_hlds.term_constr_data.c"
                                      return transform_hlds__term_constr_data__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_data__V_23_23, transform_hlds__term_constr_data__V_30_30);
                                    }
#line 260 "term_constr_data.m"
                                }
#line 260 "term_constr_data.m"
                            }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
                }
#line 260 "term_constr_data.m"
            }
#line 260 "term_constr_data.m"
        }
#line 260 "term_constr_data.m"
      else
#line 260 "term_constr_data.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 260 "term_constr_data.m"
          {
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__TypeInfo_45_45;
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__TypeInfo_46_46;
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__TypeInfo_47_47;
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_14_14;
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_15_15;
#line 260 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_16_16;

#line 260 "term_constr_data.m"
            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 260 "term_constr_data.m"
            if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
              {
#line 260 "term_constr_data.m"
                transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
                transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
                transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 5977 "transform_hlds.term_constr_data.c"
                transform_hlds__term_constr_data__TypeInfo_45_45 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3];
#line 5979 "transform_hlds.term_constr_data.c"
                {
#line 5981 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_45_45, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_14_14)));
                }
#line 260 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                  {
#line 5988 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__TypeInfo_46_46 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5990 "transform_hlds.term_constr_data.c"
                    {
#line 5992 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_46_46, ((MR_Box) (transform_hlds__term_constr_data__V_12_12)), ((MR_Box) (transform_hlds__term_constr_data__V_15_15)));
                    }
#line 260 "term_constr_data.m"
                    if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                      {
#line 5999 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__TypeInfo_47_47 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6001 "transform_hlds.term_constr_data.c"
                        {
#line 6003 "transform_hlds.term_constr_data.c"
                          return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_47_47, ((MR_Box) (transform_hlds__term_constr_data__V_13_13)), ((MR_Box) (transform_hlds__term_constr_data__V_16_16)));
                        }
#line 260 "term_constr_data.m"
                      }
#line 260 "term_constr_data.m"
                  }
#line 260 "term_constr_data.m"
              }
#line 260 "term_constr_data.m"
          }
#line 260 "term_constr_data.m"
        else
#line 260 "term_constr_data.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 260 "term_constr_data.m"
            {
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__TypeInfo_48_48;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__TypeInfo_49_49;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__TypeInfo_50_50;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
              MR_Integer transform_hlds__term_constr_data__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 3)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_7_7;
#line 260 "term_constr_data.m"
              MR_Integer transform_hlds__term_constr_data__V_8_8;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_9_9;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_10_10;

#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 260 "term_constr_data.m"
              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                {
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
#line 6057 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__TypeInfo_48_48 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3];
#line 6059 "transform_hlds.term_constr_data.c"
                  {
#line 6061 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_48_48, ((MR_Box) (transform_hlds__term_constr_data__V_3_3)), ((MR_Box) (transform_hlds__term_constr_data__V_7_7)));
                  }
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    {
#line 6068 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == transform_hlds__term_constr_data__V_8_8);
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        {
#line 6074 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__TypeInfo_49_49 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6076 "transform_hlds.term_constr_data.c"
                          {
#line 6078 "transform_hlds.term_constr_data.c"
                            transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_49_49, ((MR_Box) (transform_hlds__term_constr_data__V_5_5)), ((MR_Box) (transform_hlds__term_constr_data__V_9_9)));
                          }
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            {
#line 6085 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__TypeInfo_50_50 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6087 "transform_hlds.term_constr_data.c"
                              {
#line 6089 "transform_hlds.term_constr_data.c"
                                return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_50_50, ((MR_Box) (transform_hlds__term_constr_data__V_6_6)), ((MR_Box) (transform_hlds__term_constr_data__V_10_10)));
                              }
#line 260 "term_constr_data.m"
                            }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
                }
#line 260 "term_constr_data.m"
            }
#line 260 "term_constr_data.m"
          else
#line 260 "term_constr_data.m"
            {
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__TypeInfo_52_52;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__TypeInfo_53_53;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_34_34;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_35_35;
#line 260 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_36_36;

#line 260 "term_constr_data.m"
              transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 260 "term_constr_data.m"
              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                {
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_constr_data.m"
                  transform_hlds__term_constr_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
#line 6135 "transform_hlds.term_constr_data.c"
                  {
#line 6137 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_data__V_31_31, transform_hlds__term_constr_data__V_34_34);
                  }
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    {
#line 6144 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__TypeInfo_52_52 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6146 "transform_hlds.term_constr_data.c"
                      {
#line 6148 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_52_52, ((MR_Box) (transform_hlds__term_constr_data__V_32_32)), ((MR_Box) (transform_hlds__term_constr_data__V_35_35)));
                      }
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        {
#line 6155 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__TypeInfo_53_53 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6157 "transform_hlds.term_constr_data.c"
                          {
#line 6159 "transform_hlds.term_constr_data.c"
                            return transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_53_53, ((MR_Box) (transform_hlds__term_constr_data__V_33_33)), ((MR_Box) (transform_hlds__term_constr_data__V_36_36)));
                          }
#line 260 "term_constr_data.m"
                        }
#line 260 "term_constr_data.m"
                    }
#line 260 "term_constr_data.m"
                }
#line 260 "term_constr_data.m"
            }
#line 260 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 260 "term_constr_data.m"
  }
#line 260 "term_constr_data.m"
}

#line 782 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__indent_line_3_p_0(
#line 782 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__N_4)
#line 782 "term_constr_data.m"
{
#line 788 "term_constr_data.m"
  while (MR_TRUE)
#line 788 "term_constr_data.m"
    {
#line 788 "term_constr_data.m"
      /* tailcall optimized into a loop */
#line 788 "term_constr_data.m"
      {
#line 788 "term_constr_data.m"
        MR_bool transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__N_4 > (MR_Integer) 0);

#line 788 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 786 "term_constr_data.m"
          {
#line 786 "term_constr_data.m"
            MR_Integer transform_hlds__term_constr_data__V_11_11;

#line 786 "term_constr_data.m"
            {
#line 786 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 787 "term_constr_data.m"
            transform_hlds__term_constr_data__V_11_11 = (transform_hlds__term_constr_data__N_4 - (MR_Integer) 1);
#line 787 "term_constr_data.m"
            /* direct tailcall eliminated */
#line 787 "term_constr_data.m"
            {
#line 787 "term_constr_data.m"
              MR_Integer transform_hlds__term_constr_data__N__tmp_copy_4 = transform_hlds__term_constr_data__V_11_11;

#line 787 "term_constr_data.m"
              transform_hlds__term_constr_data__N_4 = transform_hlds__term_constr_data__N__tmp_copy_4;
#line 787 "term_constr_data.m"
            }
#line 787 "term_constr_data.m"
            continue;
#line 786 "term_constr_data.m"
          }
#line 788 "term_constr_data.m"
        else
#line 788 "term_constr_data.m"
          {
#line 788 "term_constr_data.m"
          }
#line 788 "term_constr_data.m"
      }
#line 788 "term_constr_data.m"
      break;
#line 788 "term_constr_data.m"
    }
#line 782 "term_constr_data.m"
}

#line 748 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(
#line 748 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goals0_3,
#line 748 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__Goals_4)
#line 748 "term_constr_data.m"
{
#line 753 "term_constr_data.m"
  while (MR_TRUE)
#line 753 "term_constr_data.m"
    {
#line 753 "term_constr_data.m"
      /* tailcall optimized into a loop */
#line 753 "term_constr_data.m"
      {
#line 753 "term_constr_data.m"
        MR_bool transform_hlds__term_constr_data__succeeded;

#line 753 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__Goals0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "term_constr_data.m"
          *transform_hlds__term_constr_data__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 753 "term_constr_data.m"
        else
#line 753 "term_constr_data.m"
          {
#line 753 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals0_3, (MR_Integer) 1)));
#line 753 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals0_3, (MR_Integer) 0)));

#line 753 "term_constr_data.m"
            if ((transform_hlds__term_constr_data__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "term_constr_data.m"
              {
#line 757 "term_constr_data.m"
                {
#line 757 "term_constr_data.m"
                  MR_Word base;
#line 757 "term_constr_data.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "term_constr_data.m"
                  *transform_hlds__term_constr_data__Goals_4 = base;
#line 757 "term_constr_data.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_27_27));
#line 757 "term_constr_data.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "term_constr_data.m"
                }
#line 756 "term_constr_data.m"
              }
#line 753 "term_constr_data.m"
            else
#line 761 "term_constr_data.m"
              {
#line 761 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_26_26, (MR_Integer) 0)));
#line 761 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__OtherGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_26_26, (MR_Integer) 1)));
#line 772 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__PolyA_9;
#line 772 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__LocalsA_10;
#line 772 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__NonLocalsA_11;
#line 772 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__PolyB_12;
#line 772 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__LocalsB_13;
#line 772 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__NonLocalsB_14;

#line 763 "term_constr_data.m"
                transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 763 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 763 "term_constr_data.m"
                  {
#line 763 "term_constr_data.m"
                    transform_hlds__term_constr_data__PolyA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__V_27_27, (MR_Integer) 0)));
#line 763 "term_constr_data.m"
                    transform_hlds__term_constr_data__LocalsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__V_27_27, (MR_Integer) 1)));
#line 763 "term_constr_data.m"
                    transform_hlds__term_constr_data__NonLocalsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__V_27_27, (MR_Integer) 2)));
#line 764 "term_constr_data.m"
                    transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalB_7)) == (MR_mktag((MR_Integer) 3)));
#line 764 "term_constr_data.m"
                    if (transform_hlds__term_constr_data__succeeded)
#line 764 "term_constr_data.m"
                      {
#line 764 "term_constr_data.m"
                        transform_hlds__term_constr_data__PolyB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_7, (MR_Integer) 0)));
#line 764 "term_constr_data.m"
                        transform_hlds__term_constr_data__LocalsB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_7, (MR_Integer) 1)));
#line 764 "term_constr_data.m"
                        transform_hlds__term_constr_data__NonLocalsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_7, (MR_Integer) 2)));
#line 764 "term_constr_data.m"
                      }
#line 763 "term_constr_data.m"
                  }
#line 772 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 766 "term_constr_data.m"
                  {
#line 766 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__TypeInfo_25_25;
#line 766 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__Poly_15;
#line 766 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__Locals_16;
#line 766 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__NonLocals_17;
#line 766 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__Goals1_18;
#line 766 "term_constr_data.m"
                    MR_Word transform_hlds__term_constr_data__Goal_22;

#line 766 "term_constr_data.m"
                    {
#line 766 "term_constr_data.m"
                      transform_hlds__term_constr_data__Poly_15 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_data__PolyA_9, transform_hlds__term_constr_data__PolyB_12);
                    }
#line 6363 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 767 "term_constr_data.m"
                    {
#line 767 "term_constr_data.m"
                      transform_hlds__term_constr_data__Locals_16 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_25_25, transform_hlds__term_constr_data__LocalsA_10, transform_hlds__term_constr_data__LocalsB_13);
                    }
#line 768 "term_constr_data.m"
                    {
#line 768 "term_constr_data.m"
                      transform_hlds__term_constr_data__NonLocals_17 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_25_25, transform_hlds__term_constr_data__NonLocalsA_11, transform_hlds__term_constr_data__NonLocalsB_14);
                    }
#line 769 "term_constr_data.m"
                    {
#line 769 "term_constr_data.m"
                      transform_hlds__term_constr_data__Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 769 "term_constr_data.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_22, 0) = ((MR_Box) (transform_hlds__term_constr_data__Poly_15));
#line 769 "term_constr_data.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_22, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_16));
#line 769 "term_constr_data.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_22, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_17));
#line 769 "term_constr_data.m"
                    }
#line 770 "term_constr_data.m"
                    {
#line 770 "term_constr_data.m"
                      transform_hlds__term_constr_data__Goals1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "term_constr_data.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals1_18, 0) = ((MR_Box) (transform_hlds__term_constr_data__Goal_22));
#line 770 "term_constr_data.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals1_18, 1) = ((MR_Box) (transform_hlds__term_constr_data__OtherGoals_8));
#line 770 "term_constr_data.m"
                    }
#line 771 "term_constr_data.m"
                    /* direct tailcall eliminated */
#line 771 "term_constr_data.m"
                    {
#line 771 "term_constr_data.m"
                      MR_Word transform_hlds__term_constr_data__Goals0__tmp_copy_3 = transform_hlds__term_constr_data__Goals1_18;

#line 771 "term_constr_data.m"
                      transform_hlds__term_constr_data__Goals0_3 = transform_hlds__term_constr_data__Goals0__tmp_copy_3;
#line 771 "term_constr_data.m"
                    }
#line 771 "term_constr_data.m"
                    continue;
#line 766 "term_constr_data.m"
                  }
#line 772 "term_constr_data.m"
                else
#line 773 "term_constr_data.m"
                  *transform_hlds__term_constr_data__Goals_4 = transform_hlds__term_constr_data__Goals0_3;
#line 761 "term_constr_data.m"
              }
#line 753 "term_constr_data.m"
          }
#line 753 "term_constr_data.m"
      }
#line 753 "term_constr_data.m"
      break;
#line 753 "term_constr_data.m"
    }
#line 748 "term_constr_data.m"
}

#line 732 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_var_name_4_p_0(
#line 732 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__VarSet_5,
#line 732 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Var_6)
#line 732 "term_constr_data.m"
{
#line 734 "term_constr_data.m"
  {
#line 734 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 734 "term_constr_data.m"
    MR_String transform_hlds__term_constr_data__VarName_8;

#line 735 "term_constr_data.m"
    {
#line 735 "term_constr_data.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_data__VarSet_5, transform_hlds__term_constr_data__Var_6, &transform_hlds__term_constr_data__VarName_8);
    }
#line 736 "term_constr_data.m"
    {
#line 736 "term_constr_data.m"
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_data__VarName_8);
#line 736 "term_constr_data.m"
      return;
    }
#line 734 "term_constr_data.m"
  }
#line 732 "term_constr_data.m"
}

#line 662 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_disjuncts_6_p_0(
#line 662 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__ModuleInfo_1,
#line 662 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__VarSet_2,
#line 662 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__Indent_3,
#line 662 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__4_4)
#line 662 "term_constr_data.m"
{
#line 665 "term_constr_data.m"
  while (MR_TRUE)
#line 665 "term_constr_data.m"
    {
#line 665 "term_constr_data.m"
      /* tailcall optimized into a loop */
#line 665 "term_constr_data.m"
      {
#line 665 "term_constr_data.m"
        MR_bool transform_hlds__term_constr_data__succeeded;

#line 665 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "term_constr_data.m"
          {
#line 665 "term_constr_data.m"
          }
#line 665 "term_constr_data.m"
        else
#line 666 "term_constr_data.m"
          {
#line 666 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__4_4, (MR_Integer) 0)));
#line 666 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__4_4, (MR_Integer) 1)));
#line 666 "term_constr_data.m"
            MR_Integer transform_hlds__term_constr_data__V_23_23 = (transform_hlds__term_constr_data__Indent_3 + (MR_Integer) 1);

#line 667 "term_constr_data.m"
            {
#line 667 "term_constr_data.m"
              transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(transform_hlds__term_constr_data__ModuleInfo_1, transform_hlds__term_constr_data__VarSet_2, transform_hlds__term_constr_data__V_23_23, transform_hlds__term_constr_data__Goal_16);
            }
#line 672 "term_constr_data.m"
            if ((transform_hlds__term_constr_data__Goals_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "term_constr_data.m"
              {
#line 673 "term_constr_data.m"
              }
#line 672 "term_constr_data.m"
            else
#line 669 "term_constr_data.m"
              {
#line 670 "term_constr_data.m"
                {
#line 670 "term_constr_data.m"
                  transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_3);
                }
#line 671 "term_constr_data.m"
                {
#line 671 "term_constr_data.m"
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
#line 669 "term_constr_data.m"
              }
#line 675 "term_constr_data.m"
            /* direct tailcall eliminated */
#line 675 "term_constr_data.m"
            {
#line 675 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__HeadVar__4__tmp_copy_4 = transform_hlds__term_constr_data__Goals_17;

#line 675 "term_constr_data.m"
              transform_hlds__term_constr_data__HeadVar__4_4 = transform_hlds__term_constr_data__HeadVar__4__tmp_copy_4;
#line 675 "term_constr_data.m"
            }
#line 675 "term_constr_data.m"
            continue;
#line 666 "term_constr_data.m"
          }
#line 665 "term_constr_data.m"
      }
#line 665 "term_constr_data.m"
      break;
#line 665 "term_constr_data.m"
    }
#line 662 "term_constr_data.m"
}

#line 580 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_conj_1_p_0(
#line 580 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
#line 580 "term_constr_data.m"
{
#line 582 "term_constr_data.m"
  {
#line 582 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 582 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_4_4;
#line 582 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_2_2;
#line 582 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_3_3;

#line 582 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 582 "term_constr_data.m"
      {
#line 582 "term_constr_data.m"
        transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 582 "term_constr_data.m"
        transform_hlds__term_constr_data__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 582 "term_constr_data.m"
        transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 582 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "term_constr_data.m"
      }
#line 582 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 582 "term_constr_data.m"
  }
#line 580 "term_constr_data.m"
}

#line 572 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_primitive_1_p_0(
#line 572 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
#line 572 "term_constr_data.m"
{
#line 574 "term_constr_data.m"
  {
#line 574 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)));
#line 574 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Poly_2;
#line 574 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_3_3;
#line 574 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_4_4;

#line 574 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 574 "term_constr_data.m"
      {
#line 574 "term_constr_data.m"
        transform_hlds__term_constr_data__Poly_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 574 "term_constr_data.m"
        transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 574 "term_constr_data.m"
        transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 575 "term_constr_data.m"
        {
#line 575 "term_constr_data.m"
          return transform_hlds__term_constr_data__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_data__Poly_2);
        }
#line 574 "term_constr_data.m"
      }
#line 574 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 574 "term_constr_data.m"
  }
#line 572 "term_constr_data.m"
}

#line 554 "term_constr_data.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitives_2_f_0(
#line 554 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__GoalA_4,
#line 554 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__GoalB_5)
#line 554 "term_constr_data.m"
{
#line 565 "term_constr_data.m"
  {
#line 565 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalA_4)) == (MR_mktag((MR_Integer) 3)));
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Goal_6;
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__PolyA_7;
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__LocalsA_8;
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__NonLocalsA_9;
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__PolyB_10;
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__LocalsB_11;
#line 565 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__NonLocalsB_12;

#line 558 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 558 "term_constr_data.m"
      {
#line 558 "term_constr_data.m"
        transform_hlds__term_constr_data__PolyA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 0)));
#line 558 "term_constr_data.m"
        transform_hlds__term_constr_data__LocalsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 1)));
#line 558 "term_constr_data.m"
        transform_hlds__term_constr_data__NonLocalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 2)));
#line 559 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalB_5)) == (MR_mktag((MR_Integer) 3)));
#line 559 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 559 "term_constr_data.m"
          {
#line 559 "term_constr_data.m"
            transform_hlds__term_constr_data__PolyB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 0)));
#line 559 "term_constr_data.m"
            transform_hlds__term_constr_data__LocalsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 1)));
#line 559 "term_constr_data.m"
            transform_hlds__term_constr_data__NonLocalsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 2)));
#line 559 "term_constr_data.m"
          }
#line 558 "term_constr_data.m"
      }
#line 565 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 561 "term_constr_data.m"
      {
#line 561 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_19_19;
#line 561 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Poly_13;
#line 561 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Locals_14;
#line 561 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__NonLocals_15;

#line 561 "term_constr_data.m"
        {
#line 561 "term_constr_data.m"
          transform_hlds__term_constr_data__Poly_13 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_data__PolyA_7, transform_hlds__term_constr_data__PolyB_10);
        }
#line 6707 "transform_hlds.term_constr_data.c"
        transform_hlds__term_constr_data__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 562 "term_constr_data.m"
        {
#line 562 "term_constr_data.m"
          transform_hlds__term_constr_data__Locals_14 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__LocalsA_8, transform_hlds__term_constr_data__LocalsB_11);
        }
#line 563 "term_constr_data.m"
        {
#line 563 "term_constr_data.m"
          transform_hlds__term_constr_data__NonLocals_15 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__NonLocalsA_9, transform_hlds__term_constr_data__NonLocalsB_12);
        }
#line 564 "term_constr_data.m"
        {
#line 564 "term_constr_data.m"
          transform_hlds__term_constr_data__Goal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 564 "term_constr_data.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 0) = ((MR_Box) (transform_hlds__term_constr_data__Poly_13));
#line 564 "term_constr_data.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_14));
#line 564 "term_constr_data.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_15));
#line 564 "term_constr_data.m"
        }
#line 561 "term_constr_data.m"
      }
#line 565 "term_constr_data.m"
    else
#line 566 "term_constr_data.m"
      {
#line 566 "term_constr_data.m"
        {
#line 566 "term_constr_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "function \140transform_hlds.term_constr_data.combine_primitives\'/2", (MR_String) "non-primitive goals");
        }
#line 566 "term_constr_data.m"
      }
#line 565 "term_constr_data.m"
    return transform_hlds__term_constr_data__Goal_6;
#line 565 "term_constr_data.m"
  }
#line 554 "term_constr_data.m"
}

#line 550 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_primitive_1_p_0(
#line 550 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
#line 550 "term_constr_data.m"
{
#line 552 "term_constr_data.m"
  {
#line 552 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)));
#line 552 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_2_2;
#line 552 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_3_3;
#line 552 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_4_4;

#line 552 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 552 "term_constr_data.m"
      {
#line 552 "term_constr_data.m"
        transform_hlds__term_constr_data__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "term_constr_data.m"
        transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "term_constr_data.m"
        transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
#line 552 "term_constr_data.m"
      }
#line 552 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 552 "term_constr_data.m"
  }
#line 550 "term_constr_data.m"
}

#line 539 "term_constr_data.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2(
#line 539 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 539 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 539 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 539 "term_constr_data.m"
{
#line 539 "term_constr_data.m"
  {
#line 539 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__wrapper_arg_3;
#line 539 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;
#line 539 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__conv0_Goal_6;

#line 539 "term_constr_data.m"
    {
#line 539 "term_constr_data.m"
      transform_hlds__term_constr_data__conv0_Goal_6 = transform_hlds__term_constr_data__combine_primitives_2_f_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 539 "term_constr_data.m"
    transform_hlds__term_constr_data__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_data__conv0_Goal_6));
#line 539 "term_constr_data.m"
    return transform_hlds__term_constr_data__wrapper_arg_3;
#line 539 "term_constr_data.m"
  }
#line 539 "term_constr_data.m"
}

#line 533 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1(
#line 533 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 533 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
#line 533 "term_constr_data.m"
{
#line 533 "term_constr_data.m"
  {
#line 533 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 533 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 533 "term_constr_data.m"
    {
#line 533 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__is_primitive_1_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
#line 533 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 533 "term_constr_data.m"
  }
#line 533 "term_constr_data.m"
}

#line 527 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(
#line 527 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 527 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2,
#line 527 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_3)
#line 527 "term_constr_data.m"
{
#line 530 "term_constr_data.m"
  while (MR_TRUE)
#line 530 "term_constr_data.m"
    {
#line 530 "term_constr_data.m"
      /* tailcall optimized into a loop */
#line 530 "term_constr_data.m"
      {
#line 530 "term_constr_data.m"
        MR_bool transform_hlds__term_constr_data__succeeded;

#line 530 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "term_constr_data.m"
          *transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_3 = transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2;
#line 530 "term_constr_data.m"
        else
#line 531 "term_constr_data.m"
          {
#line 531 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 531 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 531 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__NextNonPrimitive_14;
#line 531 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22;
#line 532 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_10_10;
#line 532 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_11_11;
#line 532 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_12_12;

#line 532 "term_constr_data.m"
            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_7)) == (MR_mktag((MR_Integer) 3)));
#line 532 "term_constr_data.m"
            if (transform_hlds__term_constr_data__succeeded)
#line 532 "term_constr_data.m"
              {
#line 532 "term_constr_data.m"
                transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_7, (MR_Integer) 0)));
#line 532 "term_constr_data.m"
                transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_7, (MR_Integer) 1)));
#line 532 "term_constr_data.m"
                transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_7, (MR_Integer) 2)));
#line 533 "term_constr_data.m"
                {
#line 533 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
#line 533 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__Primitives_13;
#line 533 "term_constr_data.m"
                  MR_Word transform_hlds__term_constr_data__NewPrimitive_15;

#line 533 "term_constr_data.m"
                  {
#line 533 "term_constr_data.m"
                    mercury__list__takewhile_4_p_0(transform_hlds__term_constr_data__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[7], transform_hlds__term_constr_data__Goals0_8, &transform_hlds__term_constr_data__Primitives_13, &transform_hlds__term_constr_data__NextNonPrimitive_14);
                  }
#line 537 "term_constr_data.m"
                  if ((transform_hlds__term_constr_data__Primitives_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "term_constr_data.m"
                    transform_hlds__term_constr_data__NewPrimitive_15 = transform_hlds__term_constr_data__Goal0_7;
#line 537 "term_constr_data.m"
                  else
#line 538 "term_constr_data.m"
                    {
#line 539 "term_constr_data.m"
                      MR_Box transform_hlds__term_constr_data__conv1_NewPrimitive_15;

#line 539 "term_constr_data.m"
                      {
#line 539 "term_constr_data.m"
                        transform_hlds__term_constr_data__conv1_NewPrimitive_15 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_data__TypeCtorInfo_26_26, transform_hlds__term_constr_data__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[8], transform_hlds__term_constr_data__Primitives_13, ((MR_Box) (transform_hlds__term_constr_data__Goal0_7)));
                      }
#line 539 "term_constr_data.m"
                      transform_hlds__term_constr_data__NewPrimitive_15 = ((MR_Word) transform_hlds__term_constr_data__conv1_NewPrimitive_15);
#line 538 "term_constr_data.m"
                    }
#line 541 "term_constr_data.m"
                  {
#line 541 "term_constr_data.m"
                    mercury__list__cons_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__term_constr_data__NewPrimitive_15)), transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2, &transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22);
                  }
#line 533 "term_constr_data.m"
                }
#line 532 "term_constr_data.m"
              }
#line 532 "term_constr_data.m"
            else
#line 543 "term_constr_data.m"
              {
#line 543 "term_constr_data.m"
                {
#line 543 "term_constr_data.m"
                  mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_data__Goal0_7)), transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2, &transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22);
                }
#line 544 "term_constr_data.m"
                transform_hlds__term_constr_data__NextNonPrimitive_14 = transform_hlds__term_constr_data__Goals0_8;
#line 543 "term_constr_data.m"
              }
#line 546 "term_constr_data.m"
            /* direct tailcall eliminated */
#line 546 "term_constr_data.m"
            {
#line 546 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_data__NextNonPrimitive_14;
#line 546 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0__tmp_copy_2 = transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22;

#line 546 "term_constr_data.m"
              transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2 = transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0__tmp_copy_2;
#line 546 "term_constr_data.m"
              transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__HeadVar__1__tmp_copy_1;
#line 546 "term_constr_data.m"
            }
#line 546 "term_constr_data.m"
            continue;
#line 531 "term_constr_data.m"
          }
#line 530 "term_constr_data.m"
      }
#line 530 "term_constr_data.m"
      break;
#line 530 "term_constr_data.m"
    }
#line 527 "term_constr_data.m"
}

#line 458 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_6(
#line 458 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 458 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 458 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2)
#line 458 "term_constr_data.m"
{
#line 458 "term_constr_data.m"
  {
#line 458 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;
#line 458 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__conv1_Goal_4;

#line 458 "term_constr_data.m"
    {
#line 458 "term_constr_data.m"
      transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), &transform_hlds__term_constr_data__conv1_Goal_4);
    }
#line 458 "term_constr_data.m"
    *transform_hlds__term_constr_data__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_data__conv1_Goal_4));
#line 458 "term_constr_data.m"
  }
#line 458 "term_constr_data.m"
}

#line 480 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_5(
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
#line 480 "term_constr_data.m"
{
#line 480 "term_constr_data.m"
  {
#line 480 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 480 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 480 "term_constr_data.m"
    {
#line 480 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__480__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
#line 480 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 480 "term_constr_data.m"
  }
#line 480 "term_constr_data.m"
}

#line 480 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4(
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 480 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
#line 480 "term_constr_data.m"
{
#line 480 "term_constr_data.m"
  {
#line 480 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 480 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 480 "term_constr_data.m"
    {
#line 480 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__is_empty_conj_1_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
#line 480 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 480 "term_constr_data.m"
  }
#line 480 "term_constr_data.m"
}

#line 478 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3(
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
#line 478 "term_constr_data.m"
{
#line 478 "term_constr_data.m"
  {
#line 478 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 478 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 478 "term_constr_data.m"
    {
#line 478 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__478__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
#line 478 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 478 "term_constr_data.m"
  }
#line 478 "term_constr_data.m"
}

#line 478 "term_constr_data.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2(
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 478 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
#line 478 "term_constr_data.m"
{
#line 478 "term_constr_data.m"
  {
#line 478 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 478 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 478 "term_constr_data.m"
    {
#line 478 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__is_empty_primitive_1_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
#line 478 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 478 "term_constr_data.m"
  }
#line 478 "term_constr_data.m"
}

#line 477 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1(
#line 477 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 477 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 477 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2)
#line 477 "term_constr_data.m"
{
#line 477 "term_constr_data.m"
  {
#line 477 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;
#line 477 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__conv0_Goal_4;

#line 477 "term_constr_data.m"
    {
#line 477 "term_constr_data.m"
      transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), &transform_hlds__term_constr_data__conv0_Goal_4);
    }
#line 477 "term_constr_data.m"
    *transform_hlds__term_constr_data__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_data__conv0_Goal_4));
#line 477 "term_constr_data.m"
  }
#line 477 "term_constr_data.m"
}

#line 452 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(
#line 452 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goal0_3,
#line 452 "term_constr_data.m"
  MR_Word * transform_hlds__term_constr_data__Goal_4)
#line 452 "term_constr_data.m"
{
#line 456 "term_constr_data.m"
  {
#line 456 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 456 "term_constr_data.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_3)) == (MR_mktag((MR_Integer) 1))))
#line 474 "term_constr_data.m"
      {
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeCtorInfo_52_52 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Conjuncts_16;
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 0)));
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_30_30;
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32;
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34;
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Locals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 1)));
#line 474 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__NonLocals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 2)));
#line 488 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Conjunct_17;
#line 483 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_38_38;

#line 477 "term_constr_data.m"
        {
#line 477 "term_constr_data.m"
          mercury__list__map_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_52_52, transform_hlds__term_constr_data__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[3], transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_28_28, &transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_30_30);
        }
#line 478 "term_constr_data.m"
        {
#line 478 "term_constr_data.m"
          mercury__list__filter_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__term_constr_data_scalar_common_8[1], transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_30_30, &transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32);
        }
#line 521 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "term_constr_data.m"
          transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "term_constr_data.m"
        else
#line 521 "term_constr_data.m"
          {
#line 521 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32, (MR_Integer) 1)));
#line 521 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32, (MR_Integer) 0)));

#line 521 "term_constr_data.m"
            if ((transform_hlds__term_constr_data__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "term_constr_data.m"
              {
#line 522 "term_constr_data.m"
                {
#line 522 "term_constr_data.m"
                  transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "term_constr_data.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_74_74));
#line 522 "term_constr_data.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "term_constr_data.m"
                }
#line 522 "term_constr_data.m"
              }
#line 521 "term_constr_data.m"
            else
#line 523 "term_constr_data.m"
              {
#line 523 "term_constr_data.m"
                MR_Word transform_hlds__term_constr_data__RevGoals_69;

#line 524 "term_constr_data.m"
                {
#line 524 "term_constr_data.m"
                  transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_data__RevGoals_69);
                }
#line 525 "term_constr_data.m"
                {
#line 525 "term_constr_data.m"
                  transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34 = mercury__list__reverse_1_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_data__RevGoals_69);
                }
#line 523 "term_constr_data.m"
              }
#line 521 "term_constr_data.m"
          }
#line 480 "term_constr_data.m"
        {
#line 480 "term_constr_data.m"
          mercury__list__filter_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__term_constr_data_scalar_common_8[2], transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34, &transform_hlds__term_constr_data__Conjuncts_16);
        }
#line 483 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__Conjuncts_16)) == (MR_mktag((MR_Integer) 1)));
#line 483 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 483 "term_constr_data.m"
          {
#line 483 "term_constr_data.m"
            transform_hlds__term_constr_data__Conjunct_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Conjuncts_16, (MR_Integer) 0)));
#line 483 "term_constr_data.m"
            transform_hlds__term_constr_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Conjuncts_16, (MR_Integer) 1)));
#line 483 "term_constr_data.m"
            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "term_constr_data.m"
          }
#line 488 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 486 "term_constr_data.m"
          {
#line 486 "term_constr_data.m"
            *transform_hlds__term_constr_data__Goal_4 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_data__Conjunct_17, transform_hlds__term_constr_data__Locals_45, transform_hlds__term_constr_data__NonLocals_46);
          }
#line 488 "term_constr_data.m"
        else
#line 489 "term_constr_data.m"
          {
#line 489 "term_constr_data.m"
            MR_Word base;
#line 489 "term_constr_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 489 "term_constr_data.m"
            *transform_hlds__term_constr_data__Goal_4 = base;
#line 489 "term_constr_data.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__Conjuncts_16));
#line 489 "term_constr_data.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_45));
#line 489 "term_constr_data.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_46));
#line 489 "term_constr_data.m"
          }
#line 474 "term_constr_data.m"
      }
#line 456 "term_constr_data.m"
    else
#line 456 "term_constr_data.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_3)) == (MR_mktag((MR_Integer) 0))))
#line 456 "term_constr_data.m"
        {
#line 456 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
#line 456 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Disjuncts0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 0)));
#line 456 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Locals_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 2)));
#line 456 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__NonLocals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 3)));
#line 456 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Disjuncts_9;
#line 456 "term_constr_data.m"
          MR_Integer transform_hlds__term_constr_data___Size0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 1)));

#line 458 "term_constr_data.m"
          {
#line 458 "term_constr_data.m"
            mercury__list__map_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_49_49, transform_hlds__term_constr_data__TypeCtorInfo_49_49, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[6], transform_hlds__term_constr_data__Disjuncts0_5, &transform_hlds__term_constr_data__Disjuncts_9);
          }
#line 462 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__Disjuncts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "term_constr_data.m"
            {
#line 460 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_42_42;

#line 461 "term_constr_data.m"
              {
#line 461 "term_constr_data.m"
                transform_hlds__term_constr_data__V_42_42 = libs__polyhedron__universe_0_f_0();
              }
#line 461 "term_constr_data.m"
              {
#line 461 "term_constr_data.m"
                MR_Word base;
#line 461 "term_constr_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 461 "term_constr_data.m"
                *transform_hlds__term_constr_data__Goal_4 = base;
#line 461 "term_constr_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_42_42));
#line 461 "term_constr_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "term_constr_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "term_constr_data.m"
              }
#line 460 "term_constr_data.m"
            }
#line 462 "term_constr_data.m"
          else
#line 462 "term_constr_data.m"
            {
#line 462 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Disjuncts_9, (MR_Integer) 1)));
#line 462 "term_constr_data.m"
              MR_Word transform_hlds__term_constr_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Disjuncts_9, (MR_Integer) 0)));

#line 462 "term_constr_data.m"
              if ((transform_hlds__term_constr_data__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "term_constr_data.m"
                {
#line 467 "term_constr_data.m"
                  *transform_hlds__term_constr_data__Goal_4 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_data__V_60_60, transform_hlds__term_constr_data__Locals_7, transform_hlds__term_constr_data__NonLocals_8);
                }
#line 462 "term_constr_data.m"
              else
#line 469 "term_constr_data.m"
                {
#line 469 "term_constr_data.m"
                  MR_Integer transform_hlds__term_constr_data__Size_14;

#line 470 "term_constr_data.m"
                  {
#line 470 "term_constr_data.m"
                    transform_hlds__term_constr_data__Size_14 = mercury__list__length_1_f_0(transform_hlds__term_constr_data__TypeCtorInfo_49_49, transform_hlds__term_constr_data__Disjuncts_9);
                  }
#line 471 "term_constr_data.m"
                  {
#line 471 "term_constr_data.m"
                    MR_Word base;
#line 471 "term_constr_data.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 471 "term_constr_data.m"
                    *transform_hlds__term_constr_data__Goal_4 = base;
#line 471 "term_constr_data.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__Disjuncts_9));
#line 471 "term_constr_data.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_data__Size_14));
#line 471 "term_constr_data.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_data__Locals_7));
#line 471 "term_constr_data.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_8));
#line 471 "term_constr_data.m"
                  }
#line 469 "term_constr_data.m"
                }
#line 462 "term_constr_data.m"
            }
#line 456 "term_constr_data.m"
        }
#line 456 "term_constr_data.m"
      else
#line 494 "term_constr_data.m"
        *transform_hlds__term_constr_data__Goal_4 = transform_hlds__term_constr_data__Goal0_3;
#line 456 "term_constr_data.m"
  }
#line 452 "term_constr_data.m"
}

#line 685 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_4(
#line 685 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 685 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 685 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 685 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 685 "term_constr_data.m"
{
#line 685 "term_constr_data.m"
  {
#line 685 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 685 "term_constr_data.m"
    {
#line 685 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_var_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 685 "term_constr_data.m"
      return;
    }
#line 685 "term_constr_data.m"
  }
#line 685 "term_constr_data.m"
}

#line 701 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_3(
#line 701 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 701 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 701 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 701 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 701 "term_constr_data.m"
{
#line 701 "term_constr_data.m"
  {
#line 701 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 701 "term_constr_data.m"
    {
#line 701 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_var_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 701 "term_constr_data.m"
      return;
    }
#line 701 "term_constr_data.m"
  }
#line 701 "term_constr_data.m"
}

#line 697 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_2(
#line 697 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 697 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 697 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 697 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 697 "term_constr_data.m"
{
#line 697 "term_constr_data.m"
  {
#line 697 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 697 "term_constr_data.m"
    {
#line 697 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 697 "term_constr_data.m"
      return;
    }
#line 697 "term_constr_data.m"
  }
#line 697 "term_constr_data.m"
}

#line 716 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_1(
#line 716 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 716 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 716 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 716 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 716 "term_constr_data.m"
{
#line 716 "term_constr_data.m"
  {
#line 716 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 716 "term_constr_data.m"
    {
#line 716 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_var_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 716 "term_constr_data.m"
      return;
    }
#line 716 "term_constr_data.m"
  }
#line 716 "term_constr_data.m"
}

#line 376 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(
#line 376 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__ModuleInfo_7,
#line 376 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__VarSet_8,
#line 376 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__Indent_9,
#line 376 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__AbstractGoal_10)
#line 376 "term_constr_data.m"
{
#line 679 "term_constr_data.m"
  {
#line 679 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 679 "term_constr_data.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_data__AbstractGoal_10)) == (MR_mktag((MR_Integer) 2))))
#line 710 "term_constr_data.m"
      {
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__PPId0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__CallVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__CallPoly_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 6)));
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__PPId_23;
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_43_43;
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 3)));
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 4)));
#line 710 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 5)));

#line 711 "term_constr_data.m"
        {
#line 711 "term_constr_data.m"
          transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
        }
#line 712 "term_constr_data.m"
        {
#line 712 "term_constr_data.m"
          mercury__io__write_string_3_p_0((MR_String) "call: ");
        }
#line 713 "term_constr_data.m"
        transform_hlds__term_constr_data__PPId_23 = (MR_Word) transform_hlds__term_constr_data__PPId0_16;
#line 714 "term_constr_data.m"
        {
#line 714 "term_constr_data.m"
          hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_data__ModuleInfo_7, transform_hlds__term_constr_data__PPId_23);
        }
#line 715 "term_constr_data.m"
        {
#line 715 "term_constr_data.m"
          mercury__io__write_string_3_p_0((MR_String) " : [");
        }
#line 716 "term_constr_data.m"
        {
#line 716 "term_constr_data.m"
          transform_hlds__term_constr_data__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 716 "term_constr_data.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_4[0]));
#line 716 "term_constr_data.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_1));
#line 716 "term_constr_data.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 716 "term_constr_data.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 3) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
#line 716 "term_constr_data.m"
        }
#line 716 "term_constr_data.m"
        {
#line 716 "term_constr_data.m"
          mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], transform_hlds__term_constr_data__CallVars_18, (MR_String) ", ", transform_hlds__term_constr_data__V_43_43);
        }
#line 717 "term_constr_data.m"
        {
#line 717 "term_constr_data.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 718 "term_constr_data.m"
        {
#line 718 "term_constr_data.m"
          transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
        }
#line 719 "term_constr_data.m"
        {
#line 719 "term_constr_data.m"
          mercury__io__write_string_3_p_0((MR_String) "Other call constraints:[\n");
        }
#line 720 "term_constr_data.m"
        {
#line 720 "term_constr_data.m"
          libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_data__CallPoly_22, transform_hlds__term_constr_data__VarSet_8);
        }
#line 721 "term_constr_data.m"
        {
#line 721 "term_constr_data.m"
          transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
        }
#line 722 "term_constr_data.m"
        {
#line 722 "term_constr_data.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
#line 722 "term_constr_data.m"
          return;
        }
#line 710 "term_constr_data.m"
      }
#line 679 "term_constr_data.m"
    else
#line 679 "term_constr_data.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_data__AbstractGoal_10)) == (MR_mktag((MR_Integer) 1))))
#line 694 "term_constr_data.m"
        {
#line 694 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_120_120;
#line 694 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_57_57;
#line 694 "term_constr_data.m"
          MR_Integer transform_hlds__term_constr_data__V_59_59;
#line 694 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_65_65;
#line 694 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
#line 694 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Locals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
#line 694 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__NonLocals_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));
#line 697 "term_constr_data.m"
          MR_Box transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_58_58;

#line 695 "term_constr_data.m"
          {
#line 695 "term_constr_data.m"
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
#line 696 "term_constr_data.m"
          {
#line 696 "term_constr_data.m"
            mercury__io__write_string_3_p_0((MR_String) "conj(\n");
          }
#line 697 "term_constr_data.m"
          transform_hlds__term_constr_data__V_59_59 = (transform_hlds__term_constr_data__Indent_9 + (MR_Integer) 1);
#line 697 "term_constr_data.m"
          {
#line 697 "term_constr_data.m"
            transform_hlds__term_constr_data__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 697 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0]));
#line 697 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_2));
#line 697 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 697 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 3) = ((MR_Box) (transform_hlds__term_constr_data__ModuleInfo_7));
#line 697 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 4) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
#line 697 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 5) = ((MR_Box) (transform_hlds__term_constr_data__V_59_59));
#line 697 "term_constr_data.m"
          }
#line 697 "term_constr_data.m"
          {
#line 697 "term_constr_data.m"
            mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_data__V_57_57, transform_hlds__term_constr_data__Goals_102, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_58_58);
          }
#line 699 "term_constr_data.m"
          {
#line 699 "term_constr_data.m"
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
#line 700 "term_constr_data.m"
          {
#line 700 "term_constr_data.m"
            mercury__io__write_string_3_p_0((MR_String) " Locals: ");
          }
#line 701 "term_constr_data.m"
          {
#line 701 "term_constr_data.m"
            transform_hlds__term_constr_data__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 701 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_4[0]));
#line 701 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_3));
#line 701 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 701 "term_constr_data.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 3) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
#line 701 "term_constr_data.m"
          }
#line 7741 "transform_hlds.term_constr_data.c"
          transform_hlds__term_constr_data__TypeInfo_120_120 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 701 "term_constr_data.m"
          {
#line 701 "term_constr_data.m"
            mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_120_120, transform_hlds__term_constr_data__Locals_103, (MR_String) ", ", transform_hlds__term_constr_data__V_65_65);
          }
#line 702 "term_constr_data.m"
          {
#line 702 "term_constr_data.m"
            mercury__io__nl_2_p_0();
          }
#line 703 "term_constr_data.m"
          {
#line 703 "term_constr_data.m"
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
#line 704 "term_constr_data.m"
          {
#line 704 "term_constr_data.m"
            mercury__io__write_string_3_p_0((MR_String) " Non-Locals: ");
          }
#line 705 "term_constr_data.m"
          {
#line 705 "term_constr_data.m"
            mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_120_120, transform_hlds__term_constr_data__NonLocals_104, (MR_String) ", ", transform_hlds__term_constr_data__V_65_65);
          }
#line 706 "term_constr_data.m"
          {
#line 706 "term_constr_data.m"
            mercury__io__nl_2_p_0();
          }
#line 707 "term_constr_data.m"
          {
#line 707 "term_constr_data.m"
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
#line 708 "term_constr_data.m"
          {
#line 708 "term_constr_data.m"
            mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 708 "term_constr_data.m"
            return;
          }
#line 694 "term_constr_data.m"
        }
#line 679 "term_constr_data.m"
      else
#line 679 "term_constr_data.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_data__AbstractGoal_10)) == (MR_mktag((MR_Integer) 0))))
#line 679 "term_constr_data.m"
          {
#line 679 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__TypeInfo_108_108;
#line 679 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
#line 679 "term_constr_data.m"
            MR_Integer transform_hlds__term_constr_data__Size_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
#line 679 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Locals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));
#line 679 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 3)));
#line 679 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_89_89;
#line 679 "term_constr_data.m"
            MR_String transform_hlds__term_constr_data__V_131_131;

#line 680 "term_constr_data.m"
            {
#line 680 "term_constr_data.m"
              transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
            }
#line 681 "term_constr_data.m"
            {
#line 681 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) "disj[");
            }
#line 681 "term_constr_data.m"
            {
#line 681 "term_constr_data.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_6[0], transform_hlds__term_constr_data__Size_13, &transform_hlds__term_constr_data__V_131_131);
            }
#line 681 "term_constr_data.m"
            {
#line 681 "term_constr_data.m"
              mercury__io__write_string_3_p_0(transform_hlds__term_constr_data__V_131_131);
            }
#line 681 "term_constr_data.m"
            {
#line 681 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) "](\n");
            }
#line 682 "term_constr_data.m"
            {
#line 682 "term_constr_data.m"
              transform_hlds__term_constr_data__dump_abstract_disjuncts_6_p_0(transform_hlds__term_constr_data__ModuleInfo_7, transform_hlds__term_constr_data__VarSet_8, transform_hlds__term_constr_data__Indent_9, transform_hlds__term_constr_data__Goals_12);
            }
#line 683 "term_constr_data.m"
            {
#line 683 "term_constr_data.m"
              transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
            }
#line 684 "term_constr_data.m"
            {
#line 684 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) " Locals: ");
            }
#line 685 "term_constr_data.m"
            {
#line 685 "term_constr_data.m"
              transform_hlds__term_constr_data__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 685 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_4[0]));
#line 685 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_4));
#line 685 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 685 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 3) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
#line 685 "term_constr_data.m"
            }
#line 7862 "transform_hlds.term_constr_data.c"
            transform_hlds__term_constr_data__TypeInfo_108_108 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 685 "term_constr_data.m"
            {
#line 685 "term_constr_data.m"
              mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_108_108, transform_hlds__term_constr_data__Locals_14, (MR_String) ", ", transform_hlds__term_constr_data__V_89_89);
            }
#line 686 "term_constr_data.m"
            {
#line 686 "term_constr_data.m"
              mercury__io__nl_2_p_0();
            }
#line 687 "term_constr_data.m"
            {
#line 687 "term_constr_data.m"
              transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
            }
#line 688 "term_constr_data.m"
            {
#line 688 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) " Non-Locals: ");
            }
#line 689 "term_constr_data.m"
            {
#line 689 "term_constr_data.m"
              mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_108_108, transform_hlds__term_constr_data__NonLocals_15, (MR_String) ", ", transform_hlds__term_constr_data__V_89_89);
            }
#line 690 "term_constr_data.m"
            {
#line 690 "term_constr_data.m"
              mercury__io__nl_2_p_0();
            }
#line 691 "term_constr_data.m"
            {
#line 691 "term_constr_data.m"
              transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
            }
#line 692 "term_constr_data.m"
            {
#line 692 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 692 "term_constr_data.m"
              return;
            }
#line 679 "term_constr_data.m"
          }
#line 679 "term_constr_data.m"
        else
#line 724 "term_constr_data.m"
          {
#line 724 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Poly_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
#line 724 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
#line 724 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));

#line 725 "term_constr_data.m"
            {
#line 725 "term_constr_data.m"
              transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
            }
#line 726 "term_constr_data.m"
            {
#line 726 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) "[\n");
            }
#line 727 "term_constr_data.m"
            {
#line 727 "term_constr_data.m"
              libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_data__Poly_24, transform_hlds__term_constr_data__VarSet_8);
            }
#line 728 "term_constr_data.m"
            {
#line 728 "term_constr_data.m"
              transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
            }
#line 729 "term_constr_data.m"
            {
#line 729 "term_constr_data.m"
              mercury__io__write_string_3_p_0((MR_String) "]\n");
#line 729 "term_constr_data.m"
              return;
            }
#line 724 "term_constr_data.m"
          }
#line 679 "term_constr_data.m"
  }
#line 376 "term_constr_data.m"
}

#line 647 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_5_p_0_1(
#line 647 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 647 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 647 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 647 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 647 "term_constr_data.m"
{
#line 647 "term_constr_data.m"
  {
#line 647 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 647 "term_constr_data.m"
    {
#line 647 "term_constr_data.m"
      transform_hlds__term_constr_data__IntroducedFrom__pred__dump_abstract_proc__647__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 647 "term_constr_data.m"
      return;
    }
#line 647 "term_constr_data.m"
  }
#line 647 "term_constr_data.m"
}

#line 371 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_5_p_0(
#line 371 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__ModuleInfo_6,
#line 371 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__Indent_7,
#line 371 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Proc_8)
#line 371 "term_constr_data.m"
{
#line 638 "term_constr_data.m"
  {
#line 638 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 638 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__AbstractPPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 0)));
#line 638 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__HeadVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 3)));
#line 638 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 5)));
#line 638 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__SizeVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 7)));
#line 638 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__PPId_14;
#line 638 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__WriteHeadVars_15;
#line 638 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__V_40_40;
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 1)));
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 2)));
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 4)));
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 6)));
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 8)));
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 9)));
#line 639 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 10)));
#line 639 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 11)));

#line 643 "term_constr_data.m"
    {
#line 643 "term_constr_data.m"
      transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_7);
    }
#line 644 "term_constr_data.m"
    transform_hlds__term_constr_data__PPId_14 = (MR_Word) transform_hlds__term_constr_data__AbstractPPId_10;
#line 645 "term_constr_data.m"
    {
#line 645 "term_constr_data.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_data__ModuleInfo_6, transform_hlds__term_constr_data__PPId_14);
    }
#line 646 "term_constr_data.m"
    {
#line 646 "term_constr_data.m"
      mercury__io__write_string_3_p_0((MR_String) " : [");
    }
#line 647 "term_constr_data.m"
    {
#line 647 "term_constr_data.m"
      transform_hlds__term_constr_data__WriteHeadVars_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 647 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__WriteHeadVars_15, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_4[0]));
#line 647 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__WriteHeadVars_15, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_proc_5_p_0_1));
#line 647 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__WriteHeadVars_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 647 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__WriteHeadVars_15, 3) = ((MR_Box) (transform_hlds__term_constr_data__SizeVarSet_13));
#line 647 "term_constr_data.m"
    }
#line 651 "term_constr_data.m"
    {
#line 651 "term_constr_data.m"
      mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], transform_hlds__term_constr_data__HeadVars_11, (MR_String) ", ", transform_hlds__term_constr_data__WriteHeadVars_15);
    }
#line 652 "term_constr_data.m"
    {
#line 652 "term_constr_data.m"
      mercury__io__write_string_3_p_0((MR_String) " ] :- \n");
    }
#line 653 "term_constr_data.m"
    transform_hlds__term_constr_data__V_40_40 = (transform_hlds__term_constr_data__Indent_7 + (MR_Integer) 1);
#line 653 "term_constr_data.m"
    {
#line 653 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(transform_hlds__term_constr_data__ModuleInfo_6, transform_hlds__term_constr_data__SizeVarSet_13, transform_hlds__term_constr_data__V_40_40, transform_hlds__term_constr_data__Body_12);
#line 653 "term_constr_data.m"
      return;
    }
#line 638 "term_constr_data.m"
  }
#line 371 "term_constr_data.m"
}

#line 636 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1(
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 636 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 636 "term_constr_data.m"
{
#line 636 "term_constr_data.m"
  {
#line 636 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 636 "term_constr_data.m"
    {
#line 636 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_abstract_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 636 "term_constr_data.m"
      return;
    }
#line 636 "term_constr_data.m"
  }
#line 636 "term_constr_data.m"
}

#line 366 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0(
#line 366 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__ModuleInfo_6,
#line 366 "term_constr_data.m"
  MR_Integer transform_hlds__term_constr_data__Indent_7,
#line 366 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__SCC_8)
#line 366 "term_constr_data.m"
{
#line 635 "term_constr_data.m"
  {
#line 635 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 635 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_12_12;
#line 636 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_11;

#line 636 "term_constr_data.m"
    {
#line 636 "term_constr_data.m"
      transform_hlds__term_constr_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_3[0]));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_data__ModuleInfo_6));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 4) = ((MR_Box) (transform_hlds__term_constr_data__Indent_7));
#line 636 "term_constr_data.m"
    }
#line 636 "term_constr_data.m"
    {
#line 636 "term_constr_data.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_data__V_12_12, transform_hlds__term_constr_data__SCC_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_11);
    }
#line 635 "term_constr_data.m"
  }
#line 366 "term_constr_data.m"
}

#line 636 "term_constr_data.m"
static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_4_p_0_1(
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__closure_arg,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 636 "term_constr_data.m"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 636 "term_constr_data.m"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
#line 636 "term_constr_data.m"
{
#line 636 "term_constr_data.m"
  {
#line 636 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

#line 636 "term_constr_data.m"
    {
#line 636 "term_constr_data.m"
      transform_hlds__term_constr_data__dump_abstract_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
#line 636 "term_constr_data.m"
      return;
    }
#line 636 "term_constr_data.m"
  }
#line 636 "term_constr_data.m"
}

#line 361 "term_constr_data.m"
void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_4_p_0(
#line 361 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__ModuleInfo_5,
#line 361 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__SCC_6)
#line 361 "term_constr_data.m"
{
#line 632 "term_constr_data.m"
  {
#line 632 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 632 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_18_18;
#line 636 "term_constr_data.m"
    MR_Box transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_9;

#line 636 "term_constr_data.m"
    {
#line 636 "term_constr_data.m"
      transform_hlds__term_constr_data__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_3[0]));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_scc_4_p_0_1));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 3) = ((MR_Box) (transform_hlds__term_constr_data__ModuleInfo_5));
#line 636 "term_constr_data.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 4) = ((MR_Box) ((MR_Integer) 0));
#line 636 "term_constr_data.m"
    }
#line 636 "term_constr_data.m"
    {
#line 636 "term_constr_data.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_data__V_18_18, transform_hlds__term_constr_data__SCC_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_9);
    }
#line 632 "term_constr_data.m"
  }
#line 361 "term_constr_data.m"
}

#line 352 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(
#line 352 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Proc_2)
#line 352 "term_constr_data.m"
{
#line 438 "term_constr_data.m"
  {
#line 438 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 438 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 11)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 0)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 1)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 2)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 3)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 4)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 5)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 6)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 7)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 8)));
#line 439 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 9)));
#line 439 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 10)));

#line 439 "term_constr_data.m"
    {
#line 439 "term_constr_data.m"
      return transform_hlds__term_constr_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0, transform_hlds__term_constr_data__V_3_3);
    }
#line 438 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 438 "term_constr_data.m"
  }
#line 352 "term_constr_data.m"
}

#line 347 "term_constr_data.m"
MR_Word MR_CALL 
transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(
#line 347 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
#line 347 "term_constr_data.m"
{
#line 434 "term_constr_data.m"
  {
#line 434 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 434 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__HeadVar__2_2;

#line 434 "term_constr_data.m"
    if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "term_constr_data.m"
      {
#line 435 "term_constr_data.m"
        {
#line 435 "term_constr_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "function \140transform_hlds.term_constr_data.size_varset_from_abstract_scc\'/1", (MR_String) "empty SCC");
        }
#line 434 "term_constr_data.m"
      }
#line 434 "term_constr_data.m"
    else
#line 436 "term_constr_data.m"
      {
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Proc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 0)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 1)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 2)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 3)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 4)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 5)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 6)));
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_16_16;
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_17_17;
#line 436 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_18_18;
#line 436 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_19_19;

#line 436 "term_constr_data.m"
        transform_hlds__term_constr_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 7)));
#line 436 "term_constr_data.m"
        transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 8)));
#line 436 "term_constr_data.m"
        transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 9)));
#line 436 "term_constr_data.m"
        transform_hlds__term_constr_data__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 10)));
#line 436 "term_constr_data.m"
        transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 11)));
#line 436 "term_constr_data.m"
      }
#line 434 "term_constr_data.m"
    return transform_hlds__term_constr_data__HeadVar__2_2;
#line 434 "term_constr_data.m"
  }
#line 347 "term_constr_data.m"
}

#line 343 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data__proc_is_recursive_1_p_0(
#line 343 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Proc_2)
#line 343 "term_constr_data.m"
{
#line 432 "term_constr_data.m"
  {
#line 432 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 9)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 0)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 1)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 2)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 3)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 4)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 5)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 6)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 7)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 8)));
#line 432 "term_constr_data.m"
    MR_Integer transform_hlds__term_constr_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 10)));
#line 432 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 11)));

#line 432 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_3_3 == (MR_Integer) 0);
#line 432 "term_constr_data.m"
    transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 432 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 432 "term_constr_data.m"
  }
#line 343 "term_constr_data.m"
}

#line 338 "term_constr_data.m"
MR_bool MR_CALL 
transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(
#line 338 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
#line 338 "term_constr_data.m"
{
#line 426 "term_constr_data.m"
  {
#line 426 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 426 "term_constr_data.m"
    if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "term_constr_data.m"
      {
#line 427 "term_constr_data.m"
        {
#line 427 "term_constr_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "predicate \140transform_hlds.term_constr_data.scc_contains_recursion\'/1", (MR_String) "empty SCC");
        }
#line 426 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = MR_TRUE;
#line 426 "term_constr_data.m"
      }
#line 426 "term_constr_data.m"
    else
#line 428 "term_constr_data.m"
      {
#line 428 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 9)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 0)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 1)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 2)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 3)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 4)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 5)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 6)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 7)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 8)));
#line 429 "term_constr_data.m"
        MR_Integer transform_hlds__term_constr_data__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 10)));
#line 429 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 11)));

#line 429 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_7_7 == (MR_Integer) 0);
#line 429 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
#line 428 "term_constr_data.m"
      }
#line 426 "term_constr_data.m"
    return transform_hlds__term_constr_data__succeeded;
#line 426 "term_constr_data.m"
  }
#line 338 "term_constr_data.m"
}

#line 334 "term_constr_data.m"
MR_Word MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(
#line 334 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goals0_3)
#line 334 "term_constr_data.m"
{
#line 746 "term_constr_data.m"
  {
#line 746 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 746 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Goals_4;

#line 746 "term_constr_data.m"
    {
#line 746 "term_constr_data.m"
      transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(transform_hlds__term_constr_data__Goals0_3, &transform_hlds__term_constr_data__Goals_4);
    }
#line 746 "term_constr_data.m"
    return transform_hlds__term_constr_data__Goals_4;
#line 746 "term_constr_data.m"
  }
#line 334 "term_constr_data.m"
}

#line 333 "term_constr_data.m"
MR_Word MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(
#line 333 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goal0_3)
#line 333 "term_constr_data.m"
{
#line 450 "term_constr_data.m"
  {
#line 450 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 450 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Goal_4;

#line 450 "term_constr_data.m"
    {
#line 450 "term_constr_data.m"
      transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(transform_hlds__term_constr_data__Goal0_3, &transform_hlds__term_constr_data__Goal_4);
    }
#line 450 "term_constr_data.m"
    return transform_hlds__term_constr_data__Goal_4;
#line 450 "term_constr_data.m"
  }
#line 333 "term_constr_data.m"
}

#line 328 "term_constr_data.m"
MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitive_goals_2_f_0(
#line 328 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__GoalA_4,
#line 328 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__GoalB_5)
#line 328 "term_constr_data.m"
{
#line 622 "term_constr_data.m"
  {
#line 622 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalA_4)) == (MR_mktag((MR_Integer) 3)));
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Goal_6;
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__PolyA_7;
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__LocalsA_8;
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__NonLocalsA_9;
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__PolyB_10;
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__LocalsB_11;
#line 622 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__NonLocalsB_12;

#line 615 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 615 "term_constr_data.m"
      {
#line 615 "term_constr_data.m"
        transform_hlds__term_constr_data__PolyA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 0)));
#line 615 "term_constr_data.m"
        transform_hlds__term_constr_data__LocalsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 1)));
#line 615 "term_constr_data.m"
        transform_hlds__term_constr_data__NonLocalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 2)));
#line 616 "term_constr_data.m"
        transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalB_5)) == (MR_mktag((MR_Integer) 3)));
#line 616 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 616 "term_constr_data.m"
          {
#line 616 "term_constr_data.m"
            transform_hlds__term_constr_data__PolyB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 0)));
#line 616 "term_constr_data.m"
            transform_hlds__term_constr_data__LocalsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 1)));
#line 616 "term_constr_data.m"
            transform_hlds__term_constr_data__NonLocalsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 2)));
#line 616 "term_constr_data.m"
          }
#line 615 "term_constr_data.m"
      }
#line 622 "term_constr_data.m"
    if (transform_hlds__term_constr_data__succeeded)
#line 618 "term_constr_data.m"
      {
#line 618 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_19_19;
#line 618 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Poly_13;
#line 618 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Locals_14;
#line 618 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__NonLocals_15;

#line 618 "term_constr_data.m"
        {
#line 618 "term_constr_data.m"
          transform_hlds__term_constr_data__Poly_13 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_data__PolyA_7, transform_hlds__term_constr_data__PolyB_10);
        }
#line 8599 "transform_hlds.term_constr_data.c"
        transform_hlds__term_constr_data__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 619 "term_constr_data.m"
        {
#line 619 "term_constr_data.m"
          transform_hlds__term_constr_data__Locals_14 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__LocalsA_8, transform_hlds__term_constr_data__LocalsB_11);
        }
#line 620 "term_constr_data.m"
        {
#line 620 "term_constr_data.m"
          transform_hlds__term_constr_data__NonLocals_15 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__NonLocalsA_9, transform_hlds__term_constr_data__NonLocalsB_12);
        }
#line 621 "term_constr_data.m"
        {
#line 621 "term_constr_data.m"
          transform_hlds__term_constr_data__Goal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 621 "term_constr_data.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 0) = ((MR_Box) (transform_hlds__term_constr_data__Poly_13));
#line 621 "term_constr_data.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_14));
#line 621 "term_constr_data.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_15));
#line 621 "term_constr_data.m"
        }
#line 618 "term_constr_data.m"
      }
#line 622 "term_constr_data.m"
    else
#line 623 "term_constr_data.m"
      {
#line 623 "term_constr_data.m"
        {
#line 623 "term_constr_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "function \140transform_hlds.term_constr_data.combine_primitive_goals\'/2", (MR_String) "non-primitive goals");
        }
#line 623 "term_constr_data.m"
      }
#line 622 "term_constr_data.m"
    return transform_hlds__term_constr_data__Goal_6;
#line 622 "term_constr_data.m"
  }
#line 328 "term_constr_data.m"
}

#line 320 "term_constr_data.m"
MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_recursion_types_2_f_0(
#line 320 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
#line 320 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
#line 320 "term_constr_data.m"
{
#line 596 "term_constr_data.m"
  {
#line 596 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 596 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__HeadVar__3_3;

#line 596 "term_constr_data.m"
    if ((transform_hlds__term_constr_data__HeadVar__1_1 == (MR_Integer) 3))
#line 596 "term_constr_data.m"
      if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 3))
#line 611 "term_constr_data.m"
        transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
      else
#line 596 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 1))
#line 609 "term_constr_data.m"
          transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
        else
#line 596 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 2))
#line 610 "term_constr_data.m"
            transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
          else
#line 608 "term_constr_data.m"
            transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
    else
#line 596 "term_constr_data.m"
      if ((transform_hlds__term_constr_data__HeadVar__1_1 == (MR_Integer) 1))
#line 596 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 3))
#line 603 "term_constr_data.m"
          transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
        else
#line 596 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 1))
#line 601 "term_constr_data.m"
            transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 1;
#line 596 "term_constr_data.m"
          else
#line 596 "term_constr_data.m"
            if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 2))
#line 602 "term_constr_data.m"
              transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
            else
#line 600 "term_constr_data.m"
              transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 1;
#line 596 "term_constr_data.m"
      else
#line 596 "term_constr_data.m"
        if ((transform_hlds__term_constr_data__HeadVar__1_1 == (MR_Integer) 2))
#line 596 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 3))
#line 607 "term_constr_data.m"
            transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
          else
#line 596 "term_constr_data.m"
            if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 1))
#line 605 "term_constr_data.m"
              transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
            else
#line 596 "term_constr_data.m"
              if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 2))
#line 606 "term_constr_data.m"
                transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 2;
#line 596 "term_constr_data.m"
              else
#line 604 "term_constr_data.m"
                transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 2;
#line 596 "term_constr_data.m"
        else
#line 596 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 3))
#line 599 "term_constr_data.m"
            transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 3;
#line 596 "term_constr_data.m"
          else
#line 596 "term_constr_data.m"
            if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 1))
#line 597 "term_constr_data.m"
              transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 1;
#line 596 "term_constr_data.m"
            else
#line 596 "term_constr_data.m"
              if ((transform_hlds__term_constr_data__HeadVar__2_2 == (MR_Integer) 2))
#line 598 "term_constr_data.m"
                transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 2;
#line 596 "term_constr_data.m"
              else
#line 596 "term_constr_data.m"
                transform_hlds__term_constr_data__HeadVar__3_3 = (MR_Integer) 0;
#line 596 "term_constr_data.m"
    return transform_hlds__term_constr_data__HeadVar__3_3;
#line 596 "term_constr_data.m"
  }
#line 320 "term_constr_data.m"
}

#line 314 "term_constr_data.m"
MR_Word MR_CALL 
transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(
#line 314 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Goal0_5,
#line 314 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__Locals0_6,
#line 314 "term_constr_data.m"
  MR_Word transform_hlds__term_constr_data__NonLocals0_7)
#line 314 "term_constr_data.m"
{
#line 403 "term_constr_data.m"
  {
#line 403 "term_constr_data.m"
    MR_bool transform_hlds__term_constr_data__succeeded;
#line 403 "term_constr_data.m"
    MR_Word transform_hlds__term_constr_data__Goal_8;

#line 403 "term_constr_data.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_5)) == (MR_mktag((MR_Integer) 2))))
#line 414 "term_constr_data.m"
      {
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__TypeInfo_36_36 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__PPId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__CallVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Zeros_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 3)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Polyhedron_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 6)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Locals1_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 4)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__NonLocals1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 5)));
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__Locals_27;
#line 414 "term_constr_data.m"
        MR_Word transform_hlds__term_constr_data__NonLocals_28;

#line 415 "term_constr_data.m"
        {
#line 415 "term_constr_data.m"
          transform_hlds__term_constr_data__Locals_27 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_36_36, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_25);
        }
#line 416 "term_constr_data.m"
        {
#line 416 "term_constr_data.m"
          transform_hlds__term_constr_data__NonLocals_28 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_36_36, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_26);
        }
#line 417 "term_constr_data.m"
        {
#line 417 "term_constr_data.m"
          transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__PPId_15));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Context_16));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__CallVars_17));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 3) = ((MR_Box) (transform_hlds__term_constr_data__Zeros_18));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 4) = ((MR_Box) (transform_hlds__term_constr_data__Locals_27));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 5) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_28));
#line 417 "term_constr_data.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 6) = ((MR_Box) (transform_hlds__term_constr_data__Polyhedron_19));
#line 417 "term_constr_data.m"
        }
#line 414 "term_constr_data.m"
      }
#line 403 "term_constr_data.m"
    else
#line 403 "term_constr_data.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_5)) == (MR_mktag((MR_Integer) 1))))
#line 408 "term_constr_data.m"
        {
#line 408 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 408 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));
#line 408 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Locals1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
#line 408 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__NonLocals1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
#line 408 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__Locals_23;
#line 408 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__NonLocals_24;

#line 409 "term_constr_data.m"
          {
#line 409 "term_constr_data.m"
            transform_hlds__term_constr_data__Locals_23 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_35_35, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_21);
          }
#line 410 "term_constr_data.m"
          {
#line 410 "term_constr_data.m"
            transform_hlds__term_constr_data__NonLocals_24 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_35_35, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_22);
          }
#line 411 "term_constr_data.m"
          {
#line 411 "term_constr_data.m"
            transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 411 "term_constr_data.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__Goals_20));
#line 411 "term_constr_data.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_23));
#line 411 "term_constr_data.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_24));
#line 411 "term_constr_data.m"
          }
#line 408 "term_constr_data.m"
        }
#line 403 "term_constr_data.m"
      else
#line 403 "term_constr_data.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_5)) == (MR_mktag((MR_Integer) 0))))
#line 403 "term_constr_data.m"
          {
#line 403 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__TypeInfo_34_34 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 403 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));
#line 403 "term_constr_data.m"
            MR_Integer transform_hlds__term_constr_data__Size_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
#line 403 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Locals1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
#line 403 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__NonLocals1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 3)));
#line 403 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Locals_13;
#line 403 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__NonLocals_14;

#line 404 "term_constr_data.m"
            {
#line 404 "term_constr_data.m"
              transform_hlds__term_constr_data__Locals_13 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_34_34, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_11);
            }
#line 405 "term_constr_data.m"
            {
#line 405 "term_constr_data.m"
              transform_hlds__term_constr_data__NonLocals_14 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_34_34, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_12);
            }
#line 406 "term_constr_data.m"
            {
#line 406 "term_constr_data.m"
              transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__Goals_9));
#line 406 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Size_10));
#line 406 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__Locals_13));
#line 406 "term_constr_data.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 3) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_14));
#line 406 "term_constr_data.m"
            }
#line 403 "term_constr_data.m"
          }
#line 403 "term_constr_data.m"
        else
#line 420 "term_constr_data.m"
          {
#line 420 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__TypeInfo_37_37 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
#line 420 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Locals1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
#line 420 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__NonLocals1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
#line 420 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Locals_31;
#line 420 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__NonLocals_32;
#line 420 "term_constr_data.m"
            MR_Word transform_hlds__term_constr_data__Polyhedron_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));

#line 421 "term_constr_data.m"
            {
#line 421 "term_constr_data.m"
              transform_hlds__term_constr_data__Locals_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_37_37, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_29);
            }
#line 422 "term_constr_data.m"
            {
#line 422 "term_constr_data.m"
              transform_hlds__term_constr_data__NonLocals_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_37_37, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_30);
            }
#line 423 "term_constr_data.m"
            {
#line 423 "term_constr_data.m"
              transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 423 "term_constr_data.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__Polyhedron_33));
#line 423 "term_constr_data.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_31));
#line 423 "term_constr_data.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_32));
#line 423 "term_constr_data.m"
            }
#line 420 "term_constr_data.m"
          }
#line 403 "term_constr_data.m"
    return transform_hlds__term_constr_data__Goal_8;
#line 403 "term_constr_data.m"
  }
#line 314 "term_constr_data.m"
}

void mercury__transform_hlds__term_constr_data__init(void)
{
}

void mercury__transform_hlds__term_constr_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goals_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_scc_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_arg_size_result_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_call_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_head_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_local_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_nonlocal_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_term_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_terms_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_map_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_varset_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_zero_vars_0);
}

void mercury__transform_hlds__term_constr_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_data. */
