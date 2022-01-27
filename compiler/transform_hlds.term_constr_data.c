/*
** Automatically generated from `term_constr_data.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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




#line 138 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 141 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 144 "transform_hlds.term_constr_data.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

#line 147 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

#line 150 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0;

#line 153 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 156 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4];

#line 159 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4];

#line 162 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0;

#line 165 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3];

#line 168 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3];

#line 171 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1;

#line 174 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 177 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7];

#line 180 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2[7];

#line 183 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2;

#line 186 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3];

#line 189 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3];

#line 192 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3;

#line 195 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1];

#line 198 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1];

#line 201 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1];

#line 204 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1];

#line 207 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0[4];

#line 210 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0[4];

#line 213 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0[4];

#line 216 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1];

#line 219 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0;

#line 222 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1];

#line 225 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0;

#line 228 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0;

#line 231 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 234 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 237 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 240 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

#line 243 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0[12];

#line 246 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0[12];

#line 249 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0;

#line 252 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1];

#line 255 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1];

#line 258 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1];

#line 261 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1];

#line 264 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 267 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0;

#line 270 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 273 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 276 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1];

#line 279 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1;

#line 282 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1];

#line 285 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1];

#line 288 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0[2];

#line 291 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0[2];

#line 294 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0[2];

#line 297 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0;

#line 300 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1;

#line 303 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2;

#line 306 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3;

#line 309 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0[4];

#line 312 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4];

#line 315 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4];

#line 318 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 321 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 324 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1];

#line 327 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0;

#line 330 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
#line 333 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 335 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 338 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
#line 341 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 343 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 345 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 348 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001(
#line 351 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 353 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 356 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001(
#line 359 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 361 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 363 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 366 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
#line 369 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 371 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 374 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
#line 377 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 379 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 381 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 384 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
#line 387 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 389 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 392 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
#line 395 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 397 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 399 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 402 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
#line 405 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 407 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 410 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
#line 413 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 415 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 417 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 420 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
#line 423 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 425 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 428 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
#line 431 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 433 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 435 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 438 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
#line 441 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 443 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 446 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
#line 449 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 451 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 453 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 456 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
#line 459 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 461 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 464 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
#line 467 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 469 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 471 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 474 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
#line 477 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 479 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 482 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
#line 485 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 487 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 489 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 492 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
#line 495 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 497 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 500 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
#line 503 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 505 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 507 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 510 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
#line 513 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 515 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 518 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
#line 521 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 523 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 525 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 528 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
#line 531 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 533 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 536 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
#line 539 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 541 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 543 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 546 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
#line 549 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 551 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 554 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
#line 557 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 559 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 561 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 564 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
#line 567 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 569 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 572 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
#line 575 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 577 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 579 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 582 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
#line 585 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 587 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 590 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
#line 593 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 595 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 597 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 600 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
#line 603 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 605 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 608 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
#line 611 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 613 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 615 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 618 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
#line 621 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 623 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 626 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
#line 629 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 631 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 633 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 636 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
#line 639 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 641 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 644 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
#line 647 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 649 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 651 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 654 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
#line 657 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 659 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 662 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
#line 665 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 667 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 669 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

#line 672 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
#line 675 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 677 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

#line 680 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
#line 683 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 685 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 687 "transform_hlds.term_constr_data.c"
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



#line 1204 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1212 "transform_hlds.term_constr_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1220 "transform_hlds.term_constr_data.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  }
};

#line 1229 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  }
};

#line 1237 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1245 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1253 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1261 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4] = {
  (MR_String) "disj_goals",
  (MR_String) "disj_size",
  (MR_String) "disj_locals",
  (MR_String) "disj_nonlocals"
};

#line 1269 "transform_hlds.term_constr_data.c"
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

#line 1284 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1291 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3] = {
  (MR_String) "conj_goals",
  (MR_String) "conj_locals",
  (MR_String) "conj_nonlocals"
};

#line 1298 "transform_hlds.term_constr_data.c"
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

#line 1313 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1321 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

#line 1332 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2[7] = {
  (MR_String) "call_ppid",
  (MR_String) "call_context",
  (MR_String) "call_vars",
  (MR_String) "call_zeros",
  (MR_String) "call_locals",
  (MR_String) "call_nonlocals",
  (MR_String) "call_constrs"
};

#line 1343 "transform_hlds.term_constr_data.c"
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

#line 1358 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1365 "transform_hlds.term_constr_data.c"
static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3] = {
  (MR_String) "prim_constrs",
  (MR_String) "prim_locals",
  (MR_String) "prim_nonlocals"
};

#line 1372 "transform_hlds.term_constr_data.c"
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

#line 1387 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0
};

#line 1392 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1
};

#line 1397 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2
};

#line 1402 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3
};

#line 1407 "transform_hlds.term_constr_data.c"
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

#line 1431 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3
};

#line 1439 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1447 "transform_hlds.term_constr_data.c"
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

#line 1468 "transform_hlds.term_constr_data.c"
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

#line 1489 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1] = {
  (MR_Integer) 0
};

#line 1494 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 = {
  (MR_String) "ho_call",
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  NULL
};

#line 1501 "transform_hlds.term_constr_data.c"
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

#line 1522 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1] = {
  (MR_Integer) 0
};

#line 1527 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 = {
  (MR_String) "real",
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  NULL
};

#line 1534 "transform_hlds.term_constr_data.c"
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

#line 1555 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1563 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1571 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1580 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1588 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
  }
};

#line 1596 "transform_hlds.term_constr_data.c"
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

#line 1612 "transform_hlds.term_constr_data.c"
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

#line 1628 "transform_hlds.term_constr_data.c"
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

#line 1643 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0
};

#line 1648 "transform_hlds.term_constr_data.c"
static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0
  }
};

#line 1657 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0
};

#line 1662 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1] = {
  (MR_Integer) 0
};

#line 1667 "transform_hlds.term_constr_data.c"
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

#line 1688 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1696 "transform_hlds.term_constr_data.c"
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

#line 1717 "transform_hlds.term_constr_data.c"
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

#line 1732 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1741 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1749 "transform_hlds.term_constr_data.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
};

#line 1754 "transform_hlds.term_constr_data.c"
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

#line 1769 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0
};

#line 1774 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1
};

#line 1779 "transform_hlds.term_constr_data.c"
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

#line 1793 "transform_hlds.term_constr_data.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0
};

#line 1799 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1805 "transform_hlds.term_constr_data.c"
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

#line 1826 "transform_hlds.term_constr_data.c"
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

#line 1847 "transform_hlds.term_constr_data.c"
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

#line 1868 "transform_hlds.term_constr_data.c"
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

#line 1889 "transform_hlds.term_constr_data.c"
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

#line 1910 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 1916 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1 = {
  (MR_String) "direct_only",
  (MR_Integer) 1
};

#line 1922 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2 = {
  (MR_String) "mutual_only",
  (MR_Integer) 2
};

#line 1928 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3 = {
  (MR_String) "both",
  (MR_Integer) 3
};

#line 1934 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3
};

#line 1942 "transform_hlds.term_constr_data.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0
};

#line 1950 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1958 "transform_hlds.term_constr_data.c"
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

#line 1979 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1988 "transform_hlds.term_constr_data.c"
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

#line 2009 "transform_hlds.term_constr_data.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 2017 "transform_hlds.term_constr_data.c"
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

#line 2038 "transform_hlds.term_constr_data.c"
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

#line 2059 "transform_hlds.term_constr_data.c"
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

#line 2080 "transform_hlds.term_constr_data.c"
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

#line 2101 "transform_hlds.term_constr_data.c"
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

#line 2122 "transform_hlds.term_constr_data.c"
static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1] = {
  (MR_Integer) 0
};

#line 2127 "transform_hlds.term_constr_data.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 = {
  (MR_String) "after_fixed_cutoff",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2134 "transform_hlds.term_constr_data.c"
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

#line 2155 "transform_hlds.term_constr_data.c"
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

#line 2176 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
#line 2179 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2181 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2183 "transform_hlds.term_constr_data.c"
{
#line 2185 "transform_hlds.term_constr_data.c"
  {
#line 2187 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2190 "transform_hlds.term_constr_data.c"
    {
#line 2192 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2195 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2197 "transform_hlds.term_constr_data.c"
  }
#line 2199 "transform_hlds.term_constr_data.c"
}

#line 2202 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
#line 2205 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2207 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2209 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2211 "transform_hlds.term_constr_data.c"
{
#line 2213 "transform_hlds.term_constr_data.c"
  {
#line 2215 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2218 "transform_hlds.term_constr_data.c"
    {
#line 2220 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2223 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2225 "transform_hlds.term_constr_data.c"
  }
#line 2227 "transform_hlds.term_constr_data.c"
}

#line 2230 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001(
#line 2233 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2235 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2237 "transform_hlds.term_constr_data.c"
{
#line 2239 "transform_hlds.term_constr_data.c"
  {
#line 2241 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2244 "transform_hlds.term_constr_data.c"
    {
#line 2246 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goals_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2249 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2251 "transform_hlds.term_constr_data.c"
  }
#line 2253 "transform_hlds.term_constr_data.c"
}

#line 2256 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001(
#line 2259 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2261 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2263 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2265 "transform_hlds.term_constr_data.c"
{
#line 2267 "transform_hlds.term_constr_data.c"
  {
#line 2269 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2272 "transform_hlds.term_constr_data.c"
    {
#line 2274 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_goals_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2277 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2279 "transform_hlds.term_constr_data.c"
  }
#line 2281 "transform_hlds.term_constr_data.c"
}

#line 2284 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
#line 2287 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2289 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2291 "transform_hlds.term_constr_data.c"
{
#line 2293 "transform_hlds.term_constr_data.c"
  {
#line 2295 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2298 "transform_hlds.term_constr_data.c"
    {
#line 2300 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2303 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2305 "transform_hlds.term_constr_data.c"
  }
#line 2307 "transform_hlds.term_constr_data.c"
}

#line 2310 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
#line 2313 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2315 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2317 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2319 "transform_hlds.term_constr_data.c"
{
#line 2321 "transform_hlds.term_constr_data.c"
  {
#line 2323 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2326 "transform_hlds.term_constr_data.c"
    {
#line 2328 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2331 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2333 "transform_hlds.term_constr_data.c"
  }
#line 2335 "transform_hlds.term_constr_data.c"
}

#line 2338 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
#line 2341 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2343 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2345 "transform_hlds.term_constr_data.c"
{
#line 2347 "transform_hlds.term_constr_data.c"
  {
#line 2349 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2352 "transform_hlds.term_constr_data.c"
    {
#line 2354 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2357 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2359 "transform_hlds.term_constr_data.c"
  }
#line 2361 "transform_hlds.term_constr_data.c"
}

#line 2364 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
#line 2367 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2369 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2371 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2373 "transform_hlds.term_constr_data.c"
{
#line 2375 "transform_hlds.term_constr_data.c"
  {
#line 2377 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2380 "transform_hlds.term_constr_data.c"
    {
#line 2382 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2385 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2387 "transform_hlds.term_constr_data.c"
  }
#line 2389 "transform_hlds.term_constr_data.c"
}

#line 2392 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
#line 2395 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2397 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2399 "transform_hlds.term_constr_data.c"
{
#line 2401 "transform_hlds.term_constr_data.c"
  {
#line 2403 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2406 "transform_hlds.term_constr_data.c"
    {
#line 2408 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2411 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2413 "transform_hlds.term_constr_data.c"
  }
#line 2415 "transform_hlds.term_constr_data.c"
}

#line 2418 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
#line 2421 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2423 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2425 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2427 "transform_hlds.term_constr_data.c"
{
#line 2429 "transform_hlds.term_constr_data.c"
  {
#line 2431 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2434 "transform_hlds.term_constr_data.c"
    {
#line 2436 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2439 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2441 "transform_hlds.term_constr_data.c"
  }
#line 2443 "transform_hlds.term_constr_data.c"
}

#line 2446 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
#line 2449 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2451 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2453 "transform_hlds.term_constr_data.c"
{
#line 2455 "transform_hlds.term_constr_data.c"
  {
#line 2457 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2460 "transform_hlds.term_constr_data.c"
    {
#line 2462 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_scc_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2465 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2467 "transform_hlds.term_constr_data.c"
  }
#line 2469 "transform_hlds.term_constr_data.c"
}

#line 2472 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
#line 2475 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2477 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2479 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2481 "transform_hlds.term_constr_data.c"
{
#line 2483 "transform_hlds.term_constr_data.c"
  {
#line 2485 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2488 "transform_hlds.term_constr_data.c"
    {
#line 2490 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____abstract_scc_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2493 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2495 "transform_hlds.term_constr_data.c"
  }
#line 2497 "transform_hlds.term_constr_data.c"
}

#line 2500 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
#line 2503 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2505 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2507 "transform_hlds.term_constr_data.c"
{
#line 2509 "transform_hlds.term_constr_data.c"
  {
#line 2511 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2514 "transform_hlds.term_constr_data.c"
    {
#line 2516 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2519 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2521 "transform_hlds.term_constr_data.c"
  }
#line 2523 "transform_hlds.term_constr_data.c"
}

#line 2526 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
#line 2529 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2531 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2533 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2535 "transform_hlds.term_constr_data.c"
{
#line 2537 "transform_hlds.term_constr_data.c"
  {
#line 2539 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2542 "transform_hlds.term_constr_data.c"
    {
#line 2544 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____arg_size_result_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2547 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2549 "transform_hlds.term_constr_data.c"
  }
#line 2551 "transform_hlds.term_constr_data.c"
}

#line 2554 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
#line 2557 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2559 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2561 "transform_hlds.term_constr_data.c"
{
#line 2563 "transform_hlds.term_constr_data.c"
  {
#line 2565 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2568 "transform_hlds.term_constr_data.c"
    {
#line 2570 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____call_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2573 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2575 "transform_hlds.term_constr_data.c"
  }
#line 2577 "transform_hlds.term_constr_data.c"
}

#line 2580 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
#line 2583 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2585 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2587 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2589 "transform_hlds.term_constr_data.c"
{
#line 2591 "transform_hlds.term_constr_data.c"
  {
#line 2593 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2596 "transform_hlds.term_constr_data.c"
    {
#line 2598 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____call_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2601 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2603 "transform_hlds.term_constr_data.c"
  }
#line 2605 "transform_hlds.term_constr_data.c"
}

#line 2608 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
#line 2611 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2613 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2615 "transform_hlds.term_constr_data.c"
{
#line 2617 "transform_hlds.term_constr_data.c"
  {
#line 2619 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2622 "transform_hlds.term_constr_data.c"
    {
#line 2624 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____head_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2627 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2629 "transform_hlds.term_constr_data.c"
  }
#line 2631 "transform_hlds.term_constr_data.c"
}

#line 2634 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
#line 2637 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2639 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2641 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2643 "transform_hlds.term_constr_data.c"
{
#line 2645 "transform_hlds.term_constr_data.c"
  {
#line 2647 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2650 "transform_hlds.term_constr_data.c"
    {
#line 2652 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____head_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2655 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2657 "transform_hlds.term_constr_data.c"
  }
#line 2659 "transform_hlds.term_constr_data.c"
}

#line 2662 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
#line 2665 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2667 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2669 "transform_hlds.term_constr_data.c"
{
#line 2671 "transform_hlds.term_constr_data.c"
  {
#line 2673 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2676 "transform_hlds.term_constr_data.c"
    {
#line 2678 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____local_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2681 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2683 "transform_hlds.term_constr_data.c"
  }
#line 2685 "transform_hlds.term_constr_data.c"
}

#line 2688 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
#line 2691 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2693 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2695 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2697 "transform_hlds.term_constr_data.c"
{
#line 2699 "transform_hlds.term_constr_data.c"
  {
#line 2701 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2704 "transform_hlds.term_constr_data.c"
    {
#line 2706 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____local_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2709 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2711 "transform_hlds.term_constr_data.c"
  }
#line 2713 "transform_hlds.term_constr_data.c"
}

#line 2716 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
#line 2719 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2721 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2723 "transform_hlds.term_constr_data.c"
{
#line 2725 "transform_hlds.term_constr_data.c"
  {
#line 2727 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2730 "transform_hlds.term_constr_data.c"
    {
#line 2732 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2735 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2737 "transform_hlds.term_constr_data.c"
  }
#line 2739 "transform_hlds.term_constr_data.c"
}

#line 2742 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
#line 2745 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2747 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2749 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2751 "transform_hlds.term_constr_data.c"
{
#line 2753 "transform_hlds.term_constr_data.c"
  {
#line 2755 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2758 "transform_hlds.term_constr_data.c"
    {
#line 2760 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2763 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2765 "transform_hlds.term_constr_data.c"
  }
#line 2767 "transform_hlds.term_constr_data.c"
}

#line 2770 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
#line 2773 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2775 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2777 "transform_hlds.term_constr_data.c"
{
#line 2779 "transform_hlds.term_constr_data.c"
  {
#line 2781 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2784 "transform_hlds.term_constr_data.c"
    {
#line 2786 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____recursion_type_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2789 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2791 "transform_hlds.term_constr_data.c"
  }
#line 2793 "transform_hlds.term_constr_data.c"
}

#line 2796 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
#line 2799 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2801 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2803 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2805 "transform_hlds.term_constr_data.c"
{
#line 2807 "transform_hlds.term_constr_data.c"
  {
#line 2809 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2812 "transform_hlds.term_constr_data.c"
    {
#line 2814 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____recursion_type_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2817 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2819 "transform_hlds.term_constr_data.c"
  }
#line 2821 "transform_hlds.term_constr_data.c"
}

#line 2824 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
#line 2827 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2829 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2831 "transform_hlds.term_constr_data.c"
{
#line 2833 "transform_hlds.term_constr_data.c"
  {
#line 2835 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2838 "transform_hlds.term_constr_data.c"
    {
#line 2840 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_term_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2843 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2845 "transform_hlds.term_constr_data.c"
  }
#line 2847 "transform_hlds.term_constr_data.c"
}

#line 2850 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
#line 2853 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2855 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2857 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2859 "transform_hlds.term_constr_data.c"
{
#line 2861 "transform_hlds.term_constr_data.c"
  {
#line 2863 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2866 "transform_hlds.term_constr_data.c"
    {
#line 2868 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_term_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2871 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2873 "transform_hlds.term_constr_data.c"
  }
#line 2875 "transform_hlds.term_constr_data.c"
}

#line 2878 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
#line 2881 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2883 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2885 "transform_hlds.term_constr_data.c"
{
#line 2887 "transform_hlds.term_constr_data.c"
  {
#line 2889 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2892 "transform_hlds.term_constr_data.c"
    {
#line 2894 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_terms_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2897 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2899 "transform_hlds.term_constr_data.c"
  }
#line 2901 "transform_hlds.term_constr_data.c"
}

#line 2904 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
#line 2907 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2909 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2911 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2913 "transform_hlds.term_constr_data.c"
{
#line 2915 "transform_hlds.term_constr_data.c"
  {
#line 2917 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2920 "transform_hlds.term_constr_data.c"
    {
#line 2922 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_terms_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2925 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2927 "transform_hlds.term_constr_data.c"
  }
#line 2929 "transform_hlds.term_constr_data.c"
}

#line 2932 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
#line 2935 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2937 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2939 "transform_hlds.term_constr_data.c"
{
#line 2941 "transform_hlds.term_constr_data.c"
  {
#line 2943 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 2946 "transform_hlds.term_constr_data.c"
    {
#line 2948 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_var_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 2951 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 2953 "transform_hlds.term_constr_data.c"
  }
#line 2955 "transform_hlds.term_constr_data.c"
}

#line 2958 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
#line 2961 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 2963 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 2965 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 2967 "transform_hlds.term_constr_data.c"
{
#line 2969 "transform_hlds.term_constr_data.c"
  {
#line 2971 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 2974 "transform_hlds.term_constr_data.c"
    {
#line 2976 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_var_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 2979 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 2981 "transform_hlds.term_constr_data.c"
  }
#line 2983 "transform_hlds.term_constr_data.c"
}

#line 2986 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
#line 2989 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 2991 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 2993 "transform_hlds.term_constr_data.c"
{
#line 2995 "transform_hlds.term_constr_data.c"
  {
#line 2997 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3000 "transform_hlds.term_constr_data.c"
    {
#line 3002 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_var_map_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3005 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3007 "transform_hlds.term_constr_data.c"
  }
#line 3009 "transform_hlds.term_constr_data.c"
}

#line 3012 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
#line 3015 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3017 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3019 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3021 "transform_hlds.term_constr_data.c"
{
#line 3023 "transform_hlds.term_constr_data.c"
  {
#line 3025 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3028 "transform_hlds.term_constr_data.c"
    {
#line 3030 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_var_map_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3033 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3035 "transform_hlds.term_constr_data.c"
  }
#line 3037 "transform_hlds.term_constr_data.c"
}

#line 3040 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
#line 3043 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3045 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3047 "transform_hlds.term_constr_data.c"
{
#line 3049 "transform_hlds.term_constr_data.c"
  {
#line 3051 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3054 "transform_hlds.term_constr_data.c"
    {
#line 3056 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3059 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3061 "transform_hlds.term_constr_data.c"
  }
#line 3063 "transform_hlds.term_constr_data.c"
}

#line 3066 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
#line 3069 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3071 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3073 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3075 "transform_hlds.term_constr_data.c"
{
#line 3077 "transform_hlds.term_constr_data.c"
  {
#line 3079 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3082 "transform_hlds.term_constr_data.c"
    {
#line 3084 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3087 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3089 "transform_hlds.term_constr_data.c"
  }
#line 3091 "transform_hlds.term_constr_data.c"
}

#line 3094 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
#line 3097 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3099 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3101 "transform_hlds.term_constr_data.c"
{
#line 3103 "transform_hlds.term_constr_data.c"
  {
#line 3105 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3108 "transform_hlds.term_constr_data.c"
    {
#line 3110 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_varset_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3113 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3115 "transform_hlds.term_constr_data.c"
  }
#line 3117 "transform_hlds.term_constr_data.c"
}

#line 3120 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
#line 3123 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3125 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3127 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3129 "transform_hlds.term_constr_data.c"
{
#line 3131 "transform_hlds.term_constr_data.c"
  {
#line 3133 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3136 "transform_hlds.term_constr_data.c"
    {
#line 3138 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____size_varset_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3141 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3143 "transform_hlds.term_constr_data.c"
  }
#line 3145 "transform_hlds.term_constr_data.c"
}

#line 3148 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
#line 3151 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3153 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3155 "transform_hlds.term_constr_data.c"
{
#line 3157 "transform_hlds.term_constr_data.c"
  {
#line 3159 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3162 "transform_hlds.term_constr_data.c"
    {
#line 3164 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____widening_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3167 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3169 "transform_hlds.term_constr_data.c"
  }
#line 3171 "transform_hlds.term_constr_data.c"
}

#line 3174 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
#line 3177 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3179 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3181 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3183 "transform_hlds.term_constr_data.c"
{
#line 3185 "transform_hlds.term_constr_data.c"
  {
#line 3187 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3190 "transform_hlds.term_constr_data.c"
    {
#line 3192 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____widening_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3195 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3197 "transform_hlds.term_constr_data.c"
  }
#line 3199 "transform_hlds.term_constr_data.c"
}

#line 3202 "transform_hlds.term_constr_data.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
#line 3205 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
#line 3207 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
#line 3209 "transform_hlds.term_constr_data.c"
{
#line 3211 "transform_hlds.term_constr_data.c"
  {
#line 3213 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded;

#line 3216 "transform_hlds.term_constr_data.c"
    {
#line 3218 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____zero_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
#line 3221 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3223 "transform_hlds.term_constr_data.c"
  }
#line 3225 "transform_hlds.term_constr_data.c"
}

#line 3228 "transform_hlds.term_constr_data.c"
static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
#line 3231 "transform_hlds.term_constr_data.c"
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
#line 3233 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
#line 3235 "transform_hlds.term_constr_data.c"
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
#line 3237 "transform_hlds.term_constr_data.c"
{
#line 3239 "transform_hlds.term_constr_data.c"
  {
#line 3241 "transform_hlds.term_constr_data.c"
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

#line 3244 "transform_hlds.term_constr_data.c"
    {
#line 3246 "transform_hlds.term_constr_data.c"
      transform_hlds__term_constr_data____Compare____zero_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
#line 3249 "transform_hlds.term_constr_data.c"
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
#line 3251 "transform_hlds.term_constr_data.c"
  }
#line 3253 "transform_hlds.term_constr_data.c"
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
      transform_hlds__term_constr_data__V_34_34 = mercury__term__var_id_1_f_0(transform_hlds__term_constr_data__TypeCtorInfo_90_90, transform_hlds__term_constr_data__HeadVar__2_26);
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
#line 3465 "transform_hlds.term_constr_data.c"
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

#line 3523 "transform_hlds.term_constr_data.c"
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
#line 3947 "transform_hlds.term_constr_data.c"
  {
#line 3949 "transform_hlds.term_constr_data.c"
    MR_bool transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__HeadVar__2_1 == transform_hlds__term_constr_data__HeadVar__2_2);

#line 3952 "transform_hlds.term_constr_data.c"
    return transform_hlds__term_constr_data__succeeded;
#line 3954 "transform_hlds.term_constr_data.c"
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
#line 4231 "transform_hlds.term_constr_data.c"
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
#line 4243 "transform_hlds.term_constr_data.c"
          *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "term_constr_data.m"
      else
#line 159 "term_constr_data.m"
        {
#line 159 "term_constr_data.m"
          MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

#line 159 "term_constr_data.m"
          if ((transform_hlds__term_constr_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4254 "transform_hlds.term_constr_data.c"
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
#line 4337 "transform_hlds.term_constr_data.c"
              transform_hlds__term_constr_data__TypeInfo_9_9 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[9];
#line 4339 "transform_hlds.term_constr_data.c"
              {
#line 4341 "transform_hlds.term_constr_data.c"
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
#line 4441 "transform_hlds.term_constr_data.c"
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
#line 4503 "transform_hlds.term_constr_data.c"
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
#line 4527 "transform_hlds.term_constr_data.c"
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
#line 4547 "transform_hlds.term_constr_data.c"
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
#line 4567 "transform_hlds.term_constr_data.c"
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
#line 4587 "transform_hlds.term_constr_data.c"
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
#line 4607 "transform_hlds.term_constr_data.c"
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
#line 4627 "transform_hlds.term_constr_data.c"
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
#line 4647 "transform_hlds.term_constr_data.c"
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
#line 4667 "transform_hlds.term_constr_data.c"
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
#line 4691 "transform_hlds.term_constr_data.c"
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
#line 4711 "transform_hlds.term_constr_data.c"
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

#line 4848 "transform_hlds.term_constr_data.c"
        {
#line 4850 "transform_hlds.term_constr_data.c"
          transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_15_15);
        }
#line 190 "term_constr_data.m"
        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
          {
#line 4857 "transform_hlds.term_constr_data.c"
            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == transform_hlds__term_constr_data__V_16_16);
#line 190 "term_constr_data.m"
            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
              {
#line 4863 "transform_hlds.term_constr_data.c"
                {
#line 4865 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_5_5, transform_hlds__term_constr_data__V_17_17);
                }
#line 190 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                  {
#line 4872 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 4874 "transform_hlds.term_constr_data.c"
                    {
#line 4876 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_data__V_6_6)), ((MR_Box) (transform_hlds__term_constr_data__V_18_18)));
                    }
#line 190 "term_constr_data.m"
                    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                      {
#line 4883 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[4];
#line 4885 "transform_hlds.term_constr_data.c"
                        {
#line 4887 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_data__V_7_7)), ((MR_Box) (transform_hlds__term_constr_data__V_19_19)));
                        }
#line 190 "term_constr_data.m"
                        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                          {
#line 4894 "transform_hlds.term_constr_data.c"
                            {
#line 4896 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(transform_hlds__term_constr_data__V_8_8, transform_hlds__term_constr_data__V_20_20);
                            }
#line 190 "term_constr_data.m"
                            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                              {
#line 4903 "transform_hlds.term_constr_data.c"
                                transform_hlds__term_constr_data__TypeInfo_32_32 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0];
#line 4905 "transform_hlds.term_constr_data.c"
                                {
#line 4907 "transform_hlds.term_constr_data.c"
                                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_32_32, ((MR_Box) (transform_hlds__term_constr_data__V_9_9)), ((MR_Box) (transform_hlds__term_constr_data__V_21_21)));
                                }
#line 190 "term_constr_data.m"
                                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                  {
#line 4914 "transform_hlds.term_constr_data.c"
                                    transform_hlds__term_constr_data__TypeInfo_33_33 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6];
#line 4916 "transform_hlds.term_constr_data.c"
                                    {
#line 4918 "transform_hlds.term_constr_data.c"
                                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_33_33, ((MR_Box) (transform_hlds__term_constr_data__V_10_10)), ((MR_Box) (transform_hlds__term_constr_data__V_22_22)));
                                    }
#line 190 "term_constr_data.m"
                                    if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                      {
#line 4925 "transform_hlds.term_constr_data.c"
                                        transform_hlds__term_constr_data__TypeInfo_34_34 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2];
#line 4927 "transform_hlds.term_constr_data.c"
                                        {
#line 4929 "transform_hlds.term_constr_data.c"
                                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_34_34, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_23_23)));
                                        }
#line 190 "term_constr_data.m"
                                        if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                          {
#line 4936 "transform_hlds.term_constr_data.c"
                                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_12_12 == transform_hlds__term_constr_data__V_24_24);
#line 190 "term_constr_data.m"
                                            if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                              {
#line 4942 "transform_hlds.term_constr_data.c"
                                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_13_13 == transform_hlds__term_constr_data__V_25_25);
#line 190 "term_constr_data.m"
                                                if (transform_hlds__term_constr_data__succeeded)
#line 190 "term_constr_data.m"
                                                  {
#line 4948 "transform_hlds.term_constr_data.c"
                                                    transform_hlds__term_constr_data__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[7];
#line 4950 "transform_hlds.term_constr_data.c"
                                                    {
#line 4952 "transform_hlds.term_constr_data.c"
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
#line 5010 "transform_hlds.term_constr_data.c"
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

#line 5068 "transform_hlds.term_constr_data.c"
        {
#line 5070 "transform_hlds.term_constr_data.c"
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
#line 5106 "transform_hlds.term_constr_data.c"
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

#line 5164 "transform_hlds.term_constr_data.c"
        {
#line 5166 "transform_hlds.term_constr_data.c"
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
#line 5264 "transform_hlds.term_constr_data.c"
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
#line 5313 "transform_hlds.term_constr_data.c"
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
#line 5333 "transform_hlds.term_constr_data.c"
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
#line 5353 "transform_hlds.term_constr_data.c"
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
#line 5373 "transform_hlds.term_constr_data.c"
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
#line 5393 "transform_hlds.term_constr_data.c"
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
#line 5413 "transform_hlds.term_constr_data.c"
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
#line 5446 "transform_hlds.term_constr_data.c"
              *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
            else
#line 260 "term_constr_data.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5452 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
              else
#line 5456 "transform_hlds.term_constr_data.c"
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
#line 5475 "transform_hlds.term_constr_data.c"
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
#line 5497 "transform_hlds.term_constr_data.c"
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
#line 5517 "transform_hlds.term_constr_data.c"
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
#line 5546 "transform_hlds.term_constr_data.c"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
                else
#line 5550 "transform_hlds.term_constr_data.c"
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
#line 5571 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "term_constr_data.m"
              else
#line 260 "term_constr_data.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5577 "transform_hlds.term_constr_data.c"
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
#line 5601 "transform_hlds.term_constr_data.c"
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
#line 5621 "transform_hlds.term_constr_data.c"
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
#line 5641 "transform_hlds.term_constr_data.c"
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
#line 5670 "transform_hlds.term_constr_data.c"
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
#line 5687 "transform_hlds.term_constr_data.c"
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
              else
#line 260 "term_constr_data.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5693 "transform_hlds.term_constr_data.c"
                  *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "term_constr_data.m"
                else
#line 260 "term_constr_data.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5699 "transform_hlds.term_constr_data.c"
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
#line 5719 "transform_hlds.term_constr_data.c"
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
#line 5739 "transform_hlds.term_constr_data.c"
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
#line 5858 "transform_hlds.term_constr_data.c"
              {
#line 5860 "transform_hlds.term_constr_data.c"
                transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_data__V_17_17, transform_hlds__term_constr_data__V_24_24);
              }
#line 260 "term_constr_data.m"
              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                {
#line 5867 "transform_hlds.term_constr_data.c"
                  {
#line 5869 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_18_18, transform_hlds__term_constr_data__V_25_25);
                  }
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    {
#line 5876 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__TypeInfo_40_40 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5878 "transform_hlds.term_constr_data.c"
                      {
#line 5880 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_40_40, ((MR_Box) (transform_hlds__term_constr_data__V_19_19)), ((MR_Box) (transform_hlds__term_constr_data__V_26_26)));
                      }
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        {
#line 5887 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__TypeInfo_41_41 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2];
#line 5889 "transform_hlds.term_constr_data.c"
                          {
#line 5891 "transform_hlds.term_constr_data.c"
                            transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_41_41, ((MR_Box) (transform_hlds__term_constr_data__V_20_20)), ((MR_Box) (transform_hlds__term_constr_data__V_27_27)));
                          }
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            {
#line 5898 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__TypeInfo_42_42 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5900 "transform_hlds.term_constr_data.c"
                              {
#line 5902 "transform_hlds.term_constr_data.c"
                                transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_42_42, ((MR_Box) (transform_hlds__term_constr_data__V_21_21)), ((MR_Box) (transform_hlds__term_constr_data__V_28_28)));
                              }
#line 260 "term_constr_data.m"
                              if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                                {
#line 5909 "transform_hlds.term_constr_data.c"
                                  transform_hlds__term_constr_data__TypeInfo_43_43 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5911 "transform_hlds.term_constr_data.c"
                                  {
#line 5913 "transform_hlds.term_constr_data.c"
                                    transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_43_43, ((MR_Box) (transform_hlds__term_constr_data__V_22_22)), ((MR_Box) (transform_hlds__term_constr_data__V_29_29)));
                                  }
#line 260 "term_constr_data.m"
                                  if (transform_hlds__term_constr_data__succeeded)
#line 5918 "transform_hlds.term_constr_data.c"
                                    {
#line 5920 "transform_hlds.term_constr_data.c"
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
#line 5974 "transform_hlds.term_constr_data.c"
                transform_hlds__term_constr_data__TypeInfo_45_45 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3];
#line 5976 "transform_hlds.term_constr_data.c"
                {
#line 5978 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_45_45, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_14_14)));
                }
#line 260 "term_constr_data.m"
                if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                  {
#line 5985 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__TypeInfo_46_46 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5987 "transform_hlds.term_constr_data.c"
                    {
#line 5989 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_46_46, ((MR_Box) (transform_hlds__term_constr_data__V_12_12)), ((MR_Box) (transform_hlds__term_constr_data__V_15_15)));
                    }
#line 260 "term_constr_data.m"
                    if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                      {
#line 5996 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__TypeInfo_47_47 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 5998 "transform_hlds.term_constr_data.c"
                        {
#line 6000 "transform_hlds.term_constr_data.c"
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
#line 6054 "transform_hlds.term_constr_data.c"
                  transform_hlds__term_constr_data__TypeInfo_48_48 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3];
#line 6056 "transform_hlds.term_constr_data.c"
                  {
#line 6058 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_48_48, ((MR_Box) (transform_hlds__term_constr_data__V_3_3)), ((MR_Box) (transform_hlds__term_constr_data__V_7_7)));
                  }
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    {
#line 6065 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == transform_hlds__term_constr_data__V_8_8);
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        {
#line 6071 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__TypeInfo_49_49 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6073 "transform_hlds.term_constr_data.c"
                          {
#line 6075 "transform_hlds.term_constr_data.c"
                            transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_49_49, ((MR_Box) (transform_hlds__term_constr_data__V_5_5)), ((MR_Box) (transform_hlds__term_constr_data__V_9_9)));
                          }
#line 260 "term_constr_data.m"
                          if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                            {
#line 6082 "transform_hlds.term_constr_data.c"
                              transform_hlds__term_constr_data__TypeInfo_50_50 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6084 "transform_hlds.term_constr_data.c"
                              {
#line 6086 "transform_hlds.term_constr_data.c"
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
#line 6132 "transform_hlds.term_constr_data.c"
                  {
#line 6134 "transform_hlds.term_constr_data.c"
                    transform_hlds__term_constr_data__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_data__V_31_31, transform_hlds__term_constr_data__V_34_34);
                  }
#line 260 "term_constr_data.m"
                  if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                    {
#line 6141 "transform_hlds.term_constr_data.c"
                      transform_hlds__term_constr_data__TypeInfo_52_52 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6143 "transform_hlds.term_constr_data.c"
                      {
#line 6145 "transform_hlds.term_constr_data.c"
                        transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_52_52, ((MR_Box) (transform_hlds__term_constr_data__V_32_32)), ((MR_Box) (transform_hlds__term_constr_data__V_35_35)));
                      }
#line 260 "term_constr_data.m"
                      if (transform_hlds__term_constr_data__succeeded)
#line 260 "term_constr_data.m"
                        {
#line 6152 "transform_hlds.term_constr_data.c"
                          transform_hlds__term_constr_data__TypeInfo_53_53 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
#line 6154 "transform_hlds.term_constr_data.c"
                          {
#line 6156 "transform_hlds.term_constr_data.c"
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
#line 787 "term_constr_data.m"
          {
#line 787 "term_constr_data.m"
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
#line 6360 "transform_hlds.term_constr_data.c"
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
#line 6704 "transform_hlds.term_constr_data.c"
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
#line 7738 "transform_hlds.term_constr_data.c"
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
#line 7859 "transform_hlds.term_constr_data.c"
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
#line 8596 "transform_hlds.term_constr_data.c"
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
