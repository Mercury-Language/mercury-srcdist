/*
** Automatically generated from `unused_args.m'
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


/* :- module transform_hlds.unused_args. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__unused_args__init
ENDINIT
*/

#include "transform_hlds.unused_args.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "term_conversion.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 914 "unused_args.m"
struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s {
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1;
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 917 "unused_args.m"
  MR_bool transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded;
#line 920 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20;
#line 920 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21;
#line 926 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0;
#line 926 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23;
#line 926 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24;
#line 926 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34;
#line 926 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34;
#line 934 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1;
#line 934 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35;
#line 934 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35;
#line 914 "unused_args.m"
};


#line 189 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0;

#line 192 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 195 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

#line 198 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 210 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 213 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;

#line 216 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 219 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 222 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 225 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 228 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2];

#line 231 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0;

#line 234 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1];

#line 237 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1];

#line 240 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1];

#line 243 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1];

#line 246 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

#line 249 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 252 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 255 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 258 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5];

#line 261 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5];

#line 264 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0;

#line 267 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1];

#line 270 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1];

#line 273 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1];

#line 276 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1];

#line 279 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4];

#line 282 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0;

#line 285 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1];

#line 288 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1];

#line 291 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1];

#line 294 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1];

#line 297 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1];

#line 300 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0;

#line 303 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0;

#line 306 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1];

#line 309 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1];

#line 312 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1];

#line 315 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1];

#line 318 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0;

#line 321 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2];

#line 324 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2];

#line 327 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0;

#line 330 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1];

#line 333 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1];

#line 336 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1];

#line 339 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1];

#line 342 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 345 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0;

#line 348 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2];

#line 351 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0;

#line 354 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1];

#line 357 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1];

#line 360 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1];

#line 363 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1];

#line 366 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 369 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4];

#line 372 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0;

#line 375 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1];

#line 378 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1];

#line 381 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1];

#line 384 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1];

#line 387 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 390 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 392 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 395 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 398 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 400 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 402 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 405 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 408 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 410 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 413 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 416 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 418 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 420 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 423 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 426 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 428 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 431 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 434 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 436 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 438 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 441 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 444 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 446 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 449 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 452 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 454 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 456 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 459 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 462 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 464 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 467 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 470 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 472 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 474 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 477 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 480 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 482 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 485 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 488 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 490 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 492 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 495 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 498 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 500 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 503 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 506 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 508 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 510 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 513 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 516 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 518 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 521 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 524 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 526 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 528 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 531 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 534 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 536 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 539 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 542 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 544 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 546 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 549 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 552 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 554 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 557 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 560 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 562 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 564 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 567 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 570 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 572 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 575 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 578 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 580 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 582 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 585 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 588 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 590 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 593 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 596 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 598 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 600 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 603 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 606 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 608 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 611 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 614 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 616 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 618 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 621 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 624 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 626 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 629 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 632 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 634 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 636 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 639 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 642 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 644 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 646 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 648 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 651 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 654 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 656 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 658 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 660 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 663 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 666 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 668 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 670 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 672 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 675 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 678 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 680 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 682 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 684 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 687 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 690 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 693 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 696 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 699 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 702 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 705 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 708 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 710 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 713 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 716 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 718 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 721 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 724 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 726 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 728 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 730 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 732 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6);

#line 209 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 205 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void);

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

#line 224 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 188 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 188 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 187 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 186 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 186 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 185 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 184 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 183 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1844 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1844 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1844 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7);

#line 1792 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_12,
#line 1792 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_14,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26,
#line 1792 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28,
#line 1792 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_29);

#line 1264 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1264 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1264 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1264 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1264 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15);

#line 1122 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredStatus_9,
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1122 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);

#line 867 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 867 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 867 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcIds_8,
#line 867 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 867 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13);

#line 1019 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1019__1_3_p_0(
#line 1019 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1019 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1019 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_56);

#line 1012 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1012__1_1_f_0(
#line 1012 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_54);

#line 688 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__688__1_2_p_0(
#line 688 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 688 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58);

#line 706 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__706__1_2_p_0(
#line 706 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 706 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144);

#line 665 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__665__1_2_p_0(
#line 665 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_116,
#line 665 "unused_args.m"
  MR_Word * transform_hlds__unused_args__LambdaHeadVar__2_117);

#line 432 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__432__1_3_p_0(
#line 432 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 432 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 432 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85);

#line 212 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 212 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3);

#line 209 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void);

#line 231 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 231 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 231 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 228 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 228 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 205 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 205 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7);

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 202 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4);

#line 224 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 188 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 188 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 187 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 187 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12);

#line 186 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 186 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 185 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 184 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 183 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 155 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 155 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 155 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 153 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 153 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 153 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 150 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 150 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 150 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 145 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 145 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 145 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 605 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 605 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 976 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 976 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 976 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 980 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 980 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 980 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1396 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 1396 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 136 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 136 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 136 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1983 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1983 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1983 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1983 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1983 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);

#line 1980 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1980 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1980 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1980 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1980 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1972 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1972 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1972 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1972 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1972 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1935 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1935 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1935 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);

#line 1931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1931 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1931 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1931 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1931 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1923 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1879 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1879 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1879 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5);

#line 1827 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
#line 1827 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumInserted_1,
#line 1827 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1827 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3);

#line 1711 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_3,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoPragma_4,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1711 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9,
#line 1711 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10);

#line 1658 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25,
#line 1658 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12);

#line 1615 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1615 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1615 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1615 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1615 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8);

#line 1597 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1597 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1597 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1597 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1597 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1597 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1597 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1582 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1582 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1582 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1582 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1582 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1582 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1582 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1559 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1559 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1559 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1559 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1559 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1559 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1559 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1527 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31);

#line 1515 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1513 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1423 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1423 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1423 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1423 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1423 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1423 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1407 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1407 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1407 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1407 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1407 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1407 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1333 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__OldPredProcId_7,
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_8,
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_9,
#line 1333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_10);

#line 1308 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_10,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18,
#line 1308 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19);

#line 1305 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
#line 1305 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1305 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1305 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1305 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1299 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcIds_9,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_10,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12,
#line 1299 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13);

#line 1286 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1286 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1286 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1286 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1286 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4);

#line 1229 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1229 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1229 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);

#line 1190 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1190 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1190 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1190 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);

#line 1096 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1096 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1096 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1096 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);

#line 1091 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1091 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1091 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1091 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1091 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1024 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1024 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1024 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1019 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1012 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1012 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1012 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 990 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 990 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 990 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49);

#line 954 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 954 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5);

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 914 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 914 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 914 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6);

#line 886 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 886 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 886 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 886 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 886 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 886 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5);

#line 852 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 852 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 852 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 852 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 852 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 846 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 846 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 846 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 831 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 831 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 831 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 831 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 831 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 781 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 781 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 781 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 781 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 781 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 781 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10);

#line 772 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 772 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);

#line 737 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_6,
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18,
#line 737 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_19);

#line 688 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 688 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 706 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 706 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 665 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 665 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 665 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 665 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 611 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 611 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 611 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 611 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 611 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);

#line 589 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 589 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 589 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 589 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 583 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 583 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 583 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 583 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 570 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 570 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 570 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 570 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 570 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);

#line 563 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 563 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 563 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4);

#line 550 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 550 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 550 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 550 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 550 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 544 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 544 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 544 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 544 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 544 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10);

#line 534 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 534 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 534 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 534 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6);

#line 532 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 532 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 532 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 532 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 532 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 531 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 531 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 531 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 531 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 516 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 516 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6);

#line 496 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 496 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 496 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 496 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3);

#line 432 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 432 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 432 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 432 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 396 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 396 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);

#line 380 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10);

#line 336 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9);

#line 176 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 176 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3);

#line 297 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 297 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 297 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5);

#line 288 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
#line 288 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 288 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 288 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 288 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 286 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
#line 286 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 286 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 286 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 286 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[24][2];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[6][5];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[5][6];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[2][8];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[1][7];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[2][9];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[1][13];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[3][1];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[1][11];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_11[1][10];




static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is unused."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are unused."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[15])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "arguments"))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__unused_args__setup_output_args_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[6][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[5][6] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "any"))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2561 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2569 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2578 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2587 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2595 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2603 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2611 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2619 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2628 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0
  }
};

#line 2637 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2645 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2654 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2663 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2672 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2678 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0 = {
  (MR_String) "arg_var_in_proc",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0,
  NULL,
  NULL,
  NULL
};

#line 2693 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2698 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0
  }
};

#line 2707 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2712 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1] = {
  (MR_Integer) 0
};

#line 2717 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "arg_var_in_proc",
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0
};

#line 2734 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2743 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2751 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2759 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2768 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2777 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5] = {
  (MR_String) "fixup_module_info",
  (MR_String) "fixup_proc_call_info",
  (MR_String) "fixup_unused_vars",
  (MR_String) "fixup_varset",
  (MR_String) "fixup_vartypes"
};

#line 2786 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0 = {
  (MR_String) "fixup_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0,
  NULL,
  NULL
};

#line 2801 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2806 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0
  }
};

#line 2815 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2820 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1] = {
  (MR_Integer) 0
};

#line 2825 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____fixup_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____fixup_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "fixup_info",
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0
};

#line 2842 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2850 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0 = {
  (MR_String) "call_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2865 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2870 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0
  }
};

#line 2879 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2884 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2889 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____new_proc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____new_proc_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "new_proc_info",
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0
};

#line 2906 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_proc_call_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____proc_call_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____proc_call_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "proc_call_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2923 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1] = {
  (MR_Integer) 0
};

#line 2928 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 = {
  (MR_String) "unused_args",
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_String) "args"
};

#line 2935 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_answer",
  {     &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 },
  {     &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0
};

#line 2952 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 = {
  (MR_String) "unused_args_call",
  (MR_Integer) 0
};

#line 2958 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2963 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2968 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1] = {
  (MR_Integer) 0
};

#line 2973 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_call_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_call_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_call",
  {     transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0
};

#line 2990 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1] = {
  (MR_Integer) 0
};

#line 2995 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3002 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_func_info",
  {     &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 },
  {     &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0
};

#line 3019 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3025 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2] = {
  (MR_String) "unarg_module_info",
  (MR_String) "unarg_vartypes"
};

#line 3031 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 = {
  (MR_String) "unused_args_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0,
  NULL,
  NULL
};

#line 3046 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3051 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0
  }
};

#line 3060 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3065 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = {
  (MR_Integer) 0
};

#line 3070 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_info",
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0
};

#line 3087 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3095 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
  }
};

#line 3103 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
};

#line 3109 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0 = {
  (MR_String) "unused",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 3124 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3129 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0
  }
};

#line 3138 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3143 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1] = {
  (MR_Integer) 0
};

#line 3148 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____usage_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____usage_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "usage_info",
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0
};

#line 3165 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_dep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____var_dep_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____var_dep_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "var_dep",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3182 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 3191 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_usage_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____var_usage_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____var_usage_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "var_usage",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3208 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3216 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0 = {
  (MR_String) "warning_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 3231 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3236 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0
  }
};

#line 3245 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3250 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1] = {
  (MR_Integer) 0
};

#line 3255 "transform_hlds.unused_args.c"
const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_warning_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____warning_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____warning_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "warning_info",
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0 },
  {     transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0
};

#line 3272 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3283 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3294 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3305 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3316 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3325 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3334 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[11] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

#line 3349 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 3352 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3354 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3356 "transform_hlds.unused_args.c"
{
#line 3358 "transform_hlds.unused_args.c"
  {
#line 3360 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3363 "transform_hlds.unused_args.c"
    {
#line 3365 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3368 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3370 "transform_hlds.unused_args.c"
  }
#line 3372 "transform_hlds.unused_args.c"
}

#line 3375 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 3378 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3380 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3382 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3384 "transform_hlds.unused_args.c"
{
#line 3386 "transform_hlds.unused_args.c"
  {
#line 3388 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3391 "transform_hlds.unused_args.c"
    {
#line 3393 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3396 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3398 "transform_hlds.unused_args.c"
  }
#line 3400 "transform_hlds.unused_args.c"
}

#line 3403 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 3406 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3408 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3410 "transform_hlds.unused_args.c"
{
#line 3412 "transform_hlds.unused_args.c"
  {
#line 3414 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3417 "transform_hlds.unused_args.c"
    {
#line 3419 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____fixup_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3422 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3424 "transform_hlds.unused_args.c"
  }
#line 3426 "transform_hlds.unused_args.c"
}

#line 3429 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 3432 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3434 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3436 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3438 "transform_hlds.unused_args.c"
{
#line 3440 "transform_hlds.unused_args.c"
  {
#line 3442 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3445 "transform_hlds.unused_args.c"
    {
#line 3447 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____fixup_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3450 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3452 "transform_hlds.unused_args.c"
  }
#line 3454 "transform_hlds.unused_args.c"
}

#line 3457 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 3460 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3462 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3464 "transform_hlds.unused_args.c"
{
#line 3466 "transform_hlds.unused_args.c"
  {
#line 3468 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3471 "transform_hlds.unused_args.c"
    {
#line 3473 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____new_proc_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3476 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3478 "transform_hlds.unused_args.c"
  }
#line 3480 "transform_hlds.unused_args.c"
}

#line 3483 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 3486 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3488 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3490 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3492 "transform_hlds.unused_args.c"
{
#line 3494 "transform_hlds.unused_args.c"
  {
#line 3496 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3499 "transform_hlds.unused_args.c"
    {
#line 3501 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____new_proc_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3504 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3506 "transform_hlds.unused_args.c"
  }
#line 3508 "transform_hlds.unused_args.c"
}

#line 3511 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 3514 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3516 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3518 "transform_hlds.unused_args.c"
{
#line 3520 "transform_hlds.unused_args.c"
  {
#line 3522 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3525 "transform_hlds.unused_args.c"
    {
#line 3527 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____proc_call_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3530 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3532 "transform_hlds.unused_args.c"
  }
#line 3534 "transform_hlds.unused_args.c"
}

#line 3537 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 3540 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3542 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3544 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3546 "transform_hlds.unused_args.c"
{
#line 3548 "transform_hlds.unused_args.c"
  {
#line 3550 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3553 "transform_hlds.unused_args.c"
    {
#line 3555 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____proc_call_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3558 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3560 "transform_hlds.unused_args.c"
  }
#line 3562 "transform_hlds.unused_args.c"
}

#line 3565 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 3568 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3570 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3572 "transform_hlds.unused_args.c"
{
#line 3574 "transform_hlds.unused_args.c"
  {
#line 3576 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3579 "transform_hlds.unused_args.c"
    {
#line 3581 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3584 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3586 "transform_hlds.unused_args.c"
  }
#line 3588 "transform_hlds.unused_args.c"
}

#line 3591 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 3594 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3596 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3598 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3600 "transform_hlds.unused_args.c"
{
#line 3602 "transform_hlds.unused_args.c"
  {
#line 3604 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3607 "transform_hlds.unused_args.c"
    {
#line 3609 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_answer_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3612 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3614 "transform_hlds.unused_args.c"
  }
#line 3616 "transform_hlds.unused_args.c"
}

#line 3619 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 3622 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3624 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3626 "transform_hlds.unused_args.c"
{
#line 3628 "transform_hlds.unused_args.c"
  {
#line 3630 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3633 "transform_hlds.unused_args.c"
    {
#line 3635 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_call_0_0();
    }
#line 3638 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3640 "transform_hlds.unused_args.c"
  }
#line 3642 "transform_hlds.unused_args.c"
}

#line 3645 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 3648 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3650 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3652 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3654 "transform_hlds.unused_args.c"
{
#line 3656 "transform_hlds.unused_args.c"
  {
#line 3658 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3661 "transform_hlds.unused_args.c"
    {
#line 3663 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_call_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1);
    }
#line 3666 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3668 "transform_hlds.unused_args.c"
  }
#line 3670 "transform_hlds.unused_args.c"
}

#line 3673 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 3676 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3678 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3680 "transform_hlds.unused_args.c"
{
#line 3682 "transform_hlds.unused_args.c"
  {
#line 3684 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3687 "transform_hlds.unused_args.c"
    {
#line 3689 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_func_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3692 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3694 "transform_hlds.unused_args.c"
  }
#line 3696 "transform_hlds.unused_args.c"
}

#line 3699 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 3702 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3704 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3706 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3708 "transform_hlds.unused_args.c"
{
#line 3710 "transform_hlds.unused_args.c"
  {
#line 3712 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3715 "transform_hlds.unused_args.c"
    {
#line 3717 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_func_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3720 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3722 "transform_hlds.unused_args.c"
  }
#line 3724 "transform_hlds.unused_args.c"
}

#line 3727 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 3730 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3732 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3734 "transform_hlds.unused_args.c"
{
#line 3736 "transform_hlds.unused_args.c"
  {
#line 3738 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3741 "transform_hlds.unused_args.c"
    {
#line 3743 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3746 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3748 "transform_hlds.unused_args.c"
  }
#line 3750 "transform_hlds.unused_args.c"
}

#line 3753 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 3756 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3758 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3760 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3762 "transform_hlds.unused_args.c"
{
#line 3764 "transform_hlds.unused_args.c"
  {
#line 3766 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3769 "transform_hlds.unused_args.c"
    {
#line 3771 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3774 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3776 "transform_hlds.unused_args.c"
  }
#line 3778 "transform_hlds.unused_args.c"
}

#line 3781 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 3784 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3786 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3788 "transform_hlds.unused_args.c"
{
#line 3790 "transform_hlds.unused_args.c"
  {
#line 3792 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3795 "transform_hlds.unused_args.c"
    {
#line 3797 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____usage_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3800 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3802 "transform_hlds.unused_args.c"
  }
#line 3804 "transform_hlds.unused_args.c"
}

#line 3807 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 3810 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3812 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3814 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3816 "transform_hlds.unused_args.c"
{
#line 3818 "transform_hlds.unused_args.c"
  {
#line 3820 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3823 "transform_hlds.unused_args.c"
    {
#line 3825 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____usage_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3828 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3830 "transform_hlds.unused_args.c"
  }
#line 3832 "transform_hlds.unused_args.c"
}

#line 3835 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 3838 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3840 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3842 "transform_hlds.unused_args.c"
{
#line 3844 "transform_hlds.unused_args.c"
  {
#line 3846 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3849 "transform_hlds.unused_args.c"
    {
#line 3851 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_dep_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3854 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3856 "transform_hlds.unused_args.c"
  }
#line 3858 "transform_hlds.unused_args.c"
}

#line 3861 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 3864 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3866 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3868 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3870 "transform_hlds.unused_args.c"
{
#line 3872 "transform_hlds.unused_args.c"
  {
#line 3874 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3877 "transform_hlds.unused_args.c"
    {
#line 3879 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_dep_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3882 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3884 "transform_hlds.unused_args.c"
  }
#line 3886 "transform_hlds.unused_args.c"
}

#line 3889 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 3892 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3894 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3896 "transform_hlds.unused_args.c"
{
#line 3898 "transform_hlds.unused_args.c"
  {
#line 3900 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3903 "transform_hlds.unused_args.c"
    {
#line 3905 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_usage_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3908 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3910 "transform_hlds.unused_args.c"
  }
#line 3912 "transform_hlds.unused_args.c"
}

#line 3915 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 3918 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3920 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3922 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3924 "transform_hlds.unused_args.c"
{
#line 3926 "transform_hlds.unused_args.c"
  {
#line 3928 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3931 "transform_hlds.unused_args.c"
    {
#line 3933 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_usage_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3936 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3938 "transform_hlds.unused_args.c"
  }
#line 3940 "transform_hlds.unused_args.c"
}

#line 3943 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 3946 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3948 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3950 "transform_hlds.unused_args.c"
{
#line 3952 "transform_hlds.unused_args.c"
  {
#line 3954 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3957 "transform_hlds.unused_args.c"
    {
#line 3959 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____warning_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3962 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3964 "transform_hlds.unused_args.c"
  }
#line 3966 "transform_hlds.unused_args.c"
}

#line 3969 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 3972 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3974 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3976 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3978 "transform_hlds.unused_args.c"
{
#line 3980 "transform_hlds.unused_args.c"
  {
#line 3982 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3985 "transform_hlds.unused_args.c"
    {
#line 3987 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____warning_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3990 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3992 "transform_hlds.unused_args.c"
  }
#line 3994 "transform_hlds.unused_args.c"
}

#line 3997 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 4000 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4002 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4004 "transform_hlds.unused_args.c"
{
#line 4006 "transform_hlds.unused_args.c"
  {
#line 4008 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4010 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4012 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_4;

#line 4015 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4017 "transform_hlds.unused_args.c"
    {
#line 4019 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_4 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4022 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_4));
#line 4024 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4026 "transform_hlds.unused_args.c"
  }
#line 4028 "transform_hlds.unused_args.c"
}

#line 4031 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 4034 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4036 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4038 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4040 "transform_hlds.unused_args.c"
{
#line 4042 "transform_hlds.unused_args.c"
  {
#line 4044 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4046 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4048 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__2_2;

#line 4051 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4053 "transform_hlds.unused_args.c"
    {
#line 4055 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__2_2);
    }
#line 4058 "transform_hlds.unused_args.c"
    if (transform_hlds__unused_args__succeeded)
#line 4060 "transform_hlds.unused_args.c"
      {
#line 4062 "transform_hlds.unused_args.c"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__2_2));
#line 4064 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 4066 "transform_hlds.unused_args.c"
      }
#line 4068 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4070 "transform_hlds.unused_args.c"
  }
#line 4072 "transform_hlds.unused_args.c"
}

#line 4075 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4078 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4080 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4082 "transform_hlds.unused_args.c"
{
#line 4084 "transform_hlds.unused_args.c"
  {
#line 4086 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4088 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4090 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_3;

#line 4093 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4095 "transform_hlds.unused_args.c"
    {
#line 4097 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_3 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4100 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_3));
#line 4102 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4104 "transform_hlds.unused_args.c"
  }
#line 4106 "transform_hlds.unused_args.c"
}

#line 4109 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4112 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4114 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4116 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4118 "transform_hlds.unused_args.c"
{
#line 4120 "transform_hlds.unused_args.c"
  {
#line 4122 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4124 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4127 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4129 "transform_hlds.unused_args.c"
    {
#line 4131 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4134 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4136 "transform_hlds.unused_args.c"
  }
#line 4138 "transform_hlds.unused_args.c"
}

#line 4141 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4144 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4146 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4148 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4150 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4152 "transform_hlds.unused_args.c"
{
#line 4154 "transform_hlds.unused_args.c"
  {
#line 4156 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4158 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4161 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4163 "transform_hlds.unused_args.c"
    {
#line 4165 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4168 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4170 "transform_hlds.unused_args.c"
  }
#line 4172 "transform_hlds.unused_args.c"
}

#line 4175 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4178 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4180 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4182 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4184 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4186 "transform_hlds.unused_args.c"
{
#line 4188 "transform_hlds.unused_args.c"
  {
#line 4190 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4192 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4195 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4197 "transform_hlds.unused_args.c"
    {
#line 4199 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4202 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4204 "transform_hlds.unused_args.c"
  }
#line 4206 "transform_hlds.unused_args.c"
}

#line 4209 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4212 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4214 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4216 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4218 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4220 "transform_hlds.unused_args.c"
{
#line 4222 "transform_hlds.unused_args.c"
  {
#line 4224 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4226 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4229 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4231 "transform_hlds.unused_args.c"
    {
#line 4233 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4236 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4238 "transform_hlds.unused_args.c"
  }
#line 4240 "transform_hlds.unused_args.c"
}

#line 4243 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4246 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4248 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4250 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4252 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4254 "transform_hlds.unused_args.c"
{
#line 4256 "transform_hlds.unused_args.c"
  {
#line 4258 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4260 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4263 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4265 "transform_hlds.unused_args.c"
    {
#line 4267 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4270 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4272 "transform_hlds.unused_args.c"
  }
#line 4274 "transform_hlds.unused_args.c"
}

#line 4277 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 4280 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4282 "transform_hlds.unused_args.c"
{
#line 4284 "transform_hlds.unused_args.c"
  {
#line 4286 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4288 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4290 "transform_hlds.unused_args.c"
    MR_String transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4293 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4295 "transform_hlds.unused_args.c"
    {
#line 4297 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 4300 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4302 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4304 "transform_hlds.unused_args.c"
  }
#line 4306 "transform_hlds.unused_args.c"
}

#line 4309 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 4312 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4314 "transform_hlds.unused_args.c"
{
#line 4316 "transform_hlds.unused_args.c"
  {
#line 4318 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4320 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4322 "transform_hlds.unused_args.c"
    MR_Integer transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4325 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4327 "transform_hlds.unused_args.c"
    {
#line 4329 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 4332 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4334 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4336 "transform_hlds.unused_args.c"
  }
#line 4338 "transform_hlds.unused_args.c"
}

#line 4341 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 4344 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4346 "transform_hlds.unused_args.c"
{
#line 4348 "transform_hlds.unused_args.c"
  {
#line 4350 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4352 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4354 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4357 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4359 "transform_hlds.unused_args.c"
    {
#line 4361 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 4364 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4366 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4368 "transform_hlds.unused_args.c"
  }
#line 4370 "transform_hlds.unused_args.c"
}

#line 4373 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 4376 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4378 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4380 "transform_hlds.unused_args.c"
{
#line 4382 "transform_hlds.unused_args.c"
  {
#line 4384 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4386 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4388 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4391 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4393 "transform_hlds.unused_args.c"
    {
#line 4395 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4398 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4400 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4402 "transform_hlds.unused_args.c"
  }
#line 4404 "transform_hlds.unused_args.c"
}

#line 4407 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 4410 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4412 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4414 "transform_hlds.unused_args.c"
{
#line 4416 "transform_hlds.unused_args.c"
  {
#line 4418 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4420 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4422 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4425 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4427 "transform_hlds.unused_args.c"
    {
#line 4429 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4432 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4434 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4436 "transform_hlds.unused_args.c"
  }
#line 4438 "transform_hlds.unused_args.c"
}

#line 4441 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 4444 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4446 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4448 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4450 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 4452 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6)
#line 4454 "transform_hlds.unused_args.c"
{
#line 4456 "transform_hlds.unused_args.c"
  {
#line 4458 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4460 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_FuncInfo_22;

#line 4463 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4465 "transform_hlds.unused_args.c"
    {
#line 4467 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv0_FuncInfo_22);
    }
#line 4470 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv0_FuncInfo_22));
#line 4472 "transform_hlds.unused_args.c"
  }
#line 4474 "transform_hlds.unused_args.c"
}

#line 209 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 209 "unused_args.m"
{
#line 209 "unused_args.m"
  {
#line 209 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 209 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;
#line 209 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_8_8;

#line 210 "unused_args.m"
    {
#line 210 "unused_args.m"
      transform_hlds__unused_args__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 210 "unused_args.m"
    {
#line 210 "unused_args.m"
      transform_hlds__unused_args__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 210 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[2]));
#line 210 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 2) = ((MR_Box) (transform_hlds__unused_args__V_8_8));
#line 210 "unused_args.m"
    }
#line 209 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 209 "unused_args.m"
  }
#line 209 "unused_args.m"
}

#line 205 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void)
#line 205 "unused_args.m"
{
#line 205 "unused_args.m"
  {
#line 205 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);

#line 205 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 205 "unused_args.m"
  }
#line 205 "unused_args.m"
}

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 202 "unused_args.m"
{
#line 203 "unused_args.m"
  {
#line 203 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 203 "unused_args.m"
    {
#line 203 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 203 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 203 "unused_args.m"
  }
#line 202 "unused_args.m"
}

#line 224 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 224 "unused_args.m"
{
#line 224 "unused_args.m"
  {
#line 224 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 224 "unused_args.m"
    {
#line 224 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__Args_3, transform_hlds__unused_args__Args_10);
    }
#line 224 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 224 "unused_args.m"
  }
#line 224 "unused_args.m"
}

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 219 "unused_args.m"
{
#line 219 "unused_args.m"
  {
#line 219 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 219 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 219 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args1_7 = (MR_Word) transform_hlds__unused_args__Answer1_5;
#line 219 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args2_8 = (MR_Word) transform_hlds__unused_args__Answer2_6;
#line 219 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_11_11;
#line 219 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_12_12;

#line 222 "unused_args.m"
    {
#line 222 "unused_args.m"
      transform_hlds__unused_args__V_11_11 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args2_8);
    }
#line 222 "unused_args.m"
    {
#line 222 "unused_args.m"
      transform_hlds__unused_args__V_12_12 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args1_7);
    }
#line 222 "unused_args.m"
    {
#line 222 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__set__subset_2_p_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__V_11_11, transform_hlds__unused_args__V_12_12);
    }
#line 219 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 219 "unused_args.m"
  }
#line 219 "unused_args.m"
}

#line 188 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 188 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 188 "unused_args.m"
{
#line 188 "unused_args.m"
  {
#line 188 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 188 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_13;
#line 188 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_23;
#line 188 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_25;
#line 188 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 189 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_24_24;

#line 189 "unused_args.m"
    {
#line 189 "unused_args.m"
      transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, &transform_hlds__unused_args__V_26_26);
    }
#line 189 "unused_args.m"
    transform_hlds__unused_args__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 189 "unused_args.m"
    transform_hlds__unused_args__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 190 "unused_args.m"
    {
#line 190 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__PredId_23, &transform_hlds__unused_args__PredInfo_25);
    }
#line 191 "unused_args.m"
    {
#line 191 "unused_args.m"
      transform_hlds__unused_args__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_25);
    }
#line 192 "unused_args.m"
    *transform_hlds__unused_args__FuncInfo_22 = (MR_Word) transform_hlds__unused_args__Arity_13;
#line 188 "unused_args.m"
  }
#line 188 "unused_args.m"
}

#line 187 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 187 "unused_args.m"
{
#line 187 "unused_args.m"
  {
#line 187 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 187 "unused_args.m"
    return (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "unused_args.m"
  }
#line 187 "unused_args.m"
}

#line 186 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 186 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 186 "unused_args.m"
{
#line 186 "unused_args.m"
  {
#line 186 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 186 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;
#line 186 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 186 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;

#line 186 "unused_args.m"
    {
#line 186 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, transform_hlds__unused_args__Arity_10);
    }
#line 186 "unused_args.m"
    transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) transform_hlds__unused_args__V_23_23;
#line 186 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 186 "unused_args.m"
  }
#line 186 "unused_args.m"
}

#line 185 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 185 "unused_args.m"
{
#line 185 "unused_args.m"
  {
#line 185 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 185 "unused_args.m"
    return (MR_Integer) 0;
#line 185 "unused_args.m"
  }
#line 185 "unused_args.m"
}

#line 184 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 184 "unused_args.m"
{
#line 184 "unused_args.m"
  {
#line 184 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 184 "unused_args.m"
    return (MR_Integer) 3;
#line 184 "unused_args.m"
  }
#line 184 "unused_args.m"
}

#line 183 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 183 "unused_args.m"
{
#line 198 "unused_args.m"
  {
#line 198 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 198 "unused_args.m"
    return (MR_String) "unused_args";
#line 198 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 167 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 167 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 167 "unused_args.m"
{
#line 167 "unused_args.m"
  {
#line 167 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 167 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "unused_args.m"
  }
#line 167 "unused_args.m"
}

#line 167 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 167 "unused_args.m"
{
#line 167 "unused_args.m"
  {
#line 167 "unused_args.m"
    return MR_TRUE;
#line 167 "unused_args.m"
  }
#line 167 "unused_args.m"
}

#line 1844 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1844 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1844 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7)
#line 1844 "unused_args.m"
{
#line 1846 "unused_args.m"
  {
#line 1846 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__Spec_8;
#line 1846 "unused_args.m"
    MR_Integer transform_hlds__unused_args__NumArgs_9;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_10;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_11;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__ModuleName_12;
#line 1846 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_13;
#line 1846 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_14;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces1_15;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces2_16;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__Msg_17;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_20_20;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_21_21;
#line 1846 "unused_args.m"
    MR_String transform_hlds__unused_args__V_22_22;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_24_24;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_25_25;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_56_56;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_58_58;
#line 1846 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;

#line 1847 "unused_args.m"
    {
#line 1847 "unused_args.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__UnusedArgs_7, &transform_hlds__unused_args__NumArgs_9);
    }
#line 1848 "unused_args.m"
    {
#line 1848 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__PredInfo_6, &transform_hlds__unused_args__Context_10);
    }
#line 1849 "unused_args.m"
    {
#line 1849 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1850 "unused_args.m"
    {
#line 1850 "unused_args.m"
      transform_hlds__unused_args__ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1851 "unused_args.m"
    {
#line 1851 "unused_args.m"
      transform_hlds__unused_args__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1852 "unused_args.m"
    {
#line 1852 "unused_args.m"
      transform_hlds__unused_args__Arity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1853 "unused_args.m"
    {
#line 1853 "unused_args.m"
      transform_hlds__unused_args__V_22_22 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(transform_hlds__unused_args__PredOrFunc_11);
    }
#line 1853 "unused_args.m"
    {
#line 1853 "unused_args.m"
      transform_hlds__unused_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_21_21, 0) = ((MR_Box) (transform_hlds__unused_args__V_22_22));
#line 1853 "unused_args.m"
    }
#line 1854 "unused_args.m"
    {
#line 1854 "unused_args.m"
      transform_hlds__unused_args__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_12));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_13));
#line 1854 "unused_args.m"
    }
#line 1854 "unused_args.m"
    {
#line 1854 "unused_args.m"
      transform_hlds__unused_args__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 0) = ((MR_Box) (transform_hlds__unused_args__V_26_26));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 1) = ((MR_Box) (transform_hlds__unused_args__Arity_14));
#line 1854 "unused_args.m"
    }
#line 1854 "unused_args.m"
    {
#line 1854 "unused_args.m"
      transform_hlds__unused_args__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 1) = ((MR_Box) (transform_hlds__unused_args__V_25_25));
#line 1854 "unused_args.m"
    }
#line 1854 "unused_args.m"
    {
#line 1854 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__V_24_24));
#line 1854 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[14])));
#line 1854 "unused_args.m"
    }
#line 1853 "unused_args.m"
    {
#line 1853 "unused_args.m"
      transform_hlds__unused_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 0) = ((MR_Box) (transform_hlds__unused_args__V_21_21));
#line 1853 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 1) = ((MR_Box) (transform_hlds__unused_args__V_23_23));
#line 1853 "unused_args.m"
    }
#line 1853 "unused_args.m"
    {
#line 1853 "unused_args.m"
      transform_hlds__unused_args__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[21])));
#line 1853 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 1) = ((MR_Box) (transform_hlds__unused_args__V_20_20));
#line 1853 "unused_args.m"
    }
#line 1856 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__NumArgs_9 == (MR_Integer) 1);
#line 1856 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1857 "unused_args.m"
      {
#line 1857 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36;
#line 1857 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_39_39;

#line 1868 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1868 "unused_args.m"
          {
#line 1868 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_V_39_39;

#line 1868 "unused_args.m"
            {
#line 1868 "unused_args.m"
              transform_hlds__unused_args__conv0_V_39_39 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1868 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) transform_hlds__unused_args__conv0_V_39_39);
#line 1868 "unused_args.m"
          }
#line 1868 "unused_args.m"
        else
#line 1869 "unused_args.m"
          {
#line 1869 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1869 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1869 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_74;

#line 1870 "unused_args.m"
            {
#line 1870 "unused_args.m"
              transform_hlds__unused_args__ArgStr_74 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_71);
            }
#line 1874 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1872 "unused_args.m"
              {
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_79_79;

#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_79_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_79_79, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1873 "unused_args.m"
                }
#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_79_79));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1873 "unused_args.m"
                }
#line 1872 "unused_args.m"
              }
#line 1874 "unused_args.m"
            else
#line 1875 "unused_args.m"
              {
#line 1875 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 0)));
#line 1875 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 1)));
#line 1875 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_77_77;
#line 1875 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_78_78;

#line 1876 "unused_args.m"
                {
#line 1876 "unused_args.m"
                  transform_hlds__unused_args__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_77_77, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1876 "unused_args.m"
                }
#line 1876 "unused_args.m"
                {
#line 1876 "unused_args.m"
                  transform_hlds__unused_args__V_78_78 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_75, transform_hlds__unused_args__Tail_76);
                }
#line 1876 "unused_args.m"
                {
#line 1876 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_77_77));
#line 1876 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1876 "unused_args.m"
                }
#line 1875 "unused_args.m"
              }
#line 1869 "unused_args.m"
          }
#line 1857 "unused_args.m"
        {
#line 1857 "unused_args.m"
          transform_hlds__unused_args__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[22])));
#line 1857 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 1) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1857 "unused_args.m"
        }
#line 1857 "unused_args.m"
        {
#line 1857 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[17]));
        }
#line 1857 "unused_args.m"
      }
#line 1856 "unused_args.m"
    else
#line 1860 "unused_args.m"
      {
#line 1860 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1860 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_49_49;

#line 1868 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1868 "unused_args.m"
          {
#line 1868 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv1_V_49_49;

#line 1868 "unused_args.m"
            {
#line 1868 "unused_args.m"
              transform_hlds__unused_args__conv1_V_49_49 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1868 "unused_args.m"
            transform_hlds__unused_args__V_49_49 = ((MR_Word) transform_hlds__unused_args__conv1_V_49_49);
#line 1868 "unused_args.m"
          }
#line 1868 "unused_args.m"
        else
#line 1869 "unused_args.m"
          {
#line 1869 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1869 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1869 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_88;

#line 1870 "unused_args.m"
            {
#line 1870 "unused_args.m"
              transform_hlds__unused_args__ArgStr_88 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_85);
            }
#line 1874 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1872 "unused_args.m"
              {
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_93_93;

#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1873 "unused_args.m"
                }
#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_93_93));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1873 "unused_args.m"
                }
#line 1872 "unused_args.m"
              }
#line 1874 "unused_args.m"
            else
#line 1875 "unused_args.m"
              {
#line 1875 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 0)));
#line 1875 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 1)));
#line 1875 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_91_91;
#line 1875 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_92_92;

#line 1876 "unused_args.m"
                {
#line 1876 "unused_args.m"
                  transform_hlds__unused_args__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_91_91, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1876 "unused_args.m"
                }
#line 1876 "unused_args.m"
                {
#line 1876 "unused_args.m"
                  transform_hlds__unused_args__V_92_92 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_89, transform_hlds__unused_args__Tail_90);
                }
#line 1876 "unused_args.m"
                {
#line 1876 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_91_91));
#line 1876 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_92_92));
#line 1876 "unused_args.m"
                }
#line 1875 "unused_args.m"
              }
#line 1869 "unused_args.m"
          }
#line 1860 "unused_args.m"
        {
#line 1860 "unused_args.m"
          transform_hlds__unused_args__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1860 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[23])));
#line 1860 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 1) = ((MR_Box) (transform_hlds__unused_args__V_49_49));
#line 1860 "unused_args.m"
        }
#line 1860 "unused_args.m"
        {
#line 1860 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[19]));
        }
#line 1860 "unused_args.m"
      }
#line 1863 "unused_args.m"
    {
#line 1863 "unused_args.m"
      transform_hlds__unused_args__V_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__Pieces1_15, transform_hlds__unused_args__Pieces2_16);
    }
#line 1863 "unused_args.m"
    {
#line 1863 "unused_args.m"
      transform_hlds__unused_args__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1863 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_57_57, 0) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1863 "unused_args.m"
    }
#line 1863 "unused_args.m"
    {
#line 1863 "unused_args.m"
      transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) (transform_hlds__unused_args__V_57_57));
#line 1863 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1863 "unused_args.m"
    }
#line 1863 "unused_args.m"
    {
#line 1863 "unused_args.m"
      transform_hlds__unused_args__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1863 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 0) = ((MR_Box) (transform_hlds__unused_args__Context_10));
#line 1863 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1863 "unused_args.m"
    }
#line 1864 "unused_args.m"
    {
#line 1864 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (transform_hlds__unused_args__Msg_17));
#line 1864 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1864 "unused_args.m"
    }
#line 1864 "unused_args.m"
    {
#line 1864 "unused_args.m"
      transform_hlds__unused_args__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1864 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1864 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 1864 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 2) = ((MR_Box) (transform_hlds__unused_args__V_62_62));
#line 1864 "unused_args.m"
    }
#line 1846 "unused_args.m"
    return transform_hlds__unused_args__Spec_8;
#line 1846 "unused_args.m"
  }
#line 1844 "unused_args.m"
}

#line 1792 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_12,
#line 1792 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_14,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26,
#line 1792 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27,
#line 1792 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28,
#line 1792 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_29)
#line 1792 "unused_args.m"
{
#line 1799 "unused_args.m"
  {
#line 1799 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1799 "unused_args.m"
    {
#line 1799 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26);
    }
#line 1799 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1800 "unused_args.m"
      {
#line 1800 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28;
#line 1800 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26;
#line 1800 "unused_args.m"
      }
#line 1799 "unused_args.m"
    else
#line 1802 "unused_args.m"
      {
#line 1802 "unused_args.m"
        MR_Word transform_hlds__unused_args__Procs_17;
#line 1802 "unused_args.m"
        MR_Word transform_hlds__unused_args__Proc_18;
#line 1802 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_19;
#line 1802 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NumHeadVars_20;
#line 1802 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NumToDrop_21;
#line 1802 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 1802 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_31_31;
#line 1804 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_Proc_18;

#line 1802 "unused_args.m"
        {
#line 1802 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27);
        }
#line 1803 "unused_args.m"
        {
#line 1803 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo_11, &transform_hlds__unused_args__Procs_17);
        }
#line 1804 "unused_args.m"
        {
#line 1804 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__Procs_17, transform_hlds__unused_args__ProcId_13, &transform_hlds__unused_args__conv0_Proc_18);
        }
#line 1804 "unused_args.m"
        transform_hlds__unused_args__Proc_18 = ((MR_Word) transform_hlds__unused_args__conv0_Proc_18);
#line 1805 "unused_args.m"
        {
#line 1805 "unused_args.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__Proc_18, &transform_hlds__unused_args__HeadVars_19);
        }
#line 1806 "unused_args.m"
        {
#line 1806 "unused_args.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_19, &transform_hlds__unused_args__NumHeadVars_20);
        }
#line 1810 "unused_args.m"
        {
#line 1810 "unused_args.m"
          transform_hlds__unused_args__V_31_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1810 "unused_args.m"
        transform_hlds__unused_args__NumToDrop_21 = (transform_hlds__unused_args__NumHeadVars_20 - transform_hlds__unused_args__V_31_31);
#line 1811 "unused_args.m"
        {
#line 1811 "unused_args.m"
          transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(transform_hlds__unused_args__NumToDrop_21, transform_hlds__unused_args__UnusedArgs0_14, &transform_hlds__unused_args__UnusedArgs_22);
        }
#line 1816 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1817 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28;
#line 1816 "unused_args.m"
        else
#line 1813 "unused_args.m"
          {
#line 1813 "unused_args.m"
            MR_Word transform_hlds__unused_args__Spec_25;

#line 1814 "unused_args.m"
            {
#line 1814 "unused_args.m"
              transform_hlds__unused_args__Spec_25 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__UnusedArgs_22);
            }
#line 1815 "unused_args.m"
            {
#line 1815 "unused_args.m"
              MR_Word base;
#line 1815 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = base;
#line 1815 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Spec_25));
#line 1815 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28));
#line 1815 "unused_args.m"
            }
#line 1813 "unused_args.m"
          }
#line 1802 "unused_args.m"
      }
#line 1799 "unused_args.m"
  }
#line 1792 "unused_args.m"
}

#line 1264 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1264 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1264 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1264 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1264 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15)
#line 1264 "unused_args.m"
{
#line 1270 "unused_args.m"
  {
#line 1270 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1270 "unused_args.m"
    if ((transform_hlds__unused_args__ElemsToRemove_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1269 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1270 "unused_args.m"
    else
#line 1281 "unused_args.m"
    if ((transform_hlds__unused_args__STATE_VARIABLE_List_0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1282 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1281 "unused_args.m"
    else
#line 1273 "unused_args.m"
      {
#line 1273 "unused_args.m"
        MR_Box transform_hlds__unused_args__Head_10 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 0));
#line 1273 "unused_args.m"
        MR_Word transform_hlds__unused_args__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 1)));
#line 1273 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_5 + (MR_Integer) 1);
#line 1273 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewTail_13;

#line 1281 "unused_args.m"
        if ((transform_hlds__unused_args__Tail_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1282 "unused_args.m"
          transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__Tail_11;
#line 1281 "unused_args.m"
        else
#line 1273 "unused_args.m"
          {
#line 1273 "unused_args.m"
            MR_Box transform_hlds__unused_args__Head_28 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 0));
#line 1273 "unused_args.m"
            MR_Word transform_hlds__unused_args__Tail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 1)));
#line 1273 "unused_args.m"
            MR_Integer transform_hlds__unused_args__NextArg_30 = (transform_hlds__unused_args__NextArg_12 + (MR_Integer) 1);
#line 1273 "unused_args.m"
            MR_Word transform_hlds__unused_args__NewTail_31;

#line 1275 "unused_args.m"
            {
#line 1275 "unused_args.m"
              transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__unused_args__NextArg_30, transform_hlds__unused_args__ElemsToRemove_6, transform_hlds__unused_args__Tail_29, &transform_hlds__unused_args__NewTail_31);
            }
#line 1276 "unused_args.m"
            {
#line 1276 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__NextArg_12)), transform_hlds__unused_args__ElemsToRemove_6);
            }
#line 1276 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1277 "unused_args.m"
              transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__NewTail_31;
#line 1276 "unused_args.m"
            else
#line 1279 "unused_args.m"
              {
#line 1279 "unused_args.m"
                transform_hlds__unused_args__NewTail_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 0) = transform_hlds__unused_args__Head_28;
#line 1279 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_31));
#line 1279 "unused_args.m"
              }
#line 1273 "unused_args.m"
          }
#line 1276 "unused_args.m"
        {
#line 1276 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__ArgNo_5)), transform_hlds__unused_args__ElemsToRemove_6);
        }
#line 1276 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1277 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__NewTail_13;
#line 1276 "unused_args.m"
        else
#line 1279 "unused_args.m"
          {
#line 1279 "unused_args.m"
            MR_Word base;
#line 1279 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_List_15 = base;
#line 1279 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = transform_hlds__unused_args__Head_10;
#line 1279 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_13));
#line 1279 "unused_args.m"
          }
#line 1273 "unused_args.m"
      }
#line 1270 "unused_args.m"
  }
#line 1264 "unused_args.m"
}

#line 1122 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredStatus_9,
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1122 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1122 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45)
#line 1122 "unused_args.m"
{
#line 1126 "unused_args.m"
  {
#line 1126 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_70_70;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 0)));
#line 1126 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 1)));
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_13;
#line 1126 "unused_args.m"
    MR_String transform_hlds__unused_args__Name0_14;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_15;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Tvars_16;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExistQVars_17;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes0_18;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigOrigin_19;
#line 1126 "unused_args.m"
    MR_String transform_hlds__unused_args__Name1_27;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name2_28;
#line 1126 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcInt_29;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name_30;
#line 1126 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_31;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeVars_32;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes_33;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_34;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClausesInfo_35;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Markers_36;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalType_37;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClassContext_38;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarNameRemap_39;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyProofs_40;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyConstraintMap_41;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Transform_42;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__Origin_43;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_61_61;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;
#line 1126 "unused_args.m"
    MR_String transform_hlds__unused_args__V_63_63;
#line 1126 "unused_args.m"
    MR_String transform_hlds__unused_args__V_65_65;
#line 1126 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67;
#line 1135 "unused_args.m"
    MR_String transform_hlds__unused_args__V_47_47;

#line 1127 "unused_args.m"
    {
#line 1127 "unused_args.m"
      transform_hlds__unused_args__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1128 "unused_args.m"
    {
#line 1128 "unused_args.m"
      transform_hlds__unused_args__Name0_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1129 "unused_args.m"
    {
#line 1129 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1130 "unused_args.m"
    {
#line 1130 "unused_args.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Tvars_16, &transform_hlds__unused_args__ExistQVars_17, &transform_hlds__unused_args__ArgTypes0_18);
    }
#line 1131 "unused_args.m"
    {
#line 1131 "unused_args.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__OrigOrigin_19);
    }
#line 1134 "unused_args.m"
    {
#line 1134 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, (MR_String) "__");
    }
#line 1134 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1134 "unused_args.m"
      {
#line 1135 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = (MR_String) "__LambdaGoal__";
#line 1135 "unused_args.m"
        {
#line 1135 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, transform_hlds__unused_args__V_47_47);
        }
#line 1135 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1134 "unused_args.m"
      }
#line 1133 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1137 "unused_args.m"
      {
#line 1137 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeCtor_21;
#line 1139 "unused_args.m"
        MR_Word transform_hlds__unused_args___SpecialId_20;

#line 1139 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__OrigOrigin_19)) == (MR_mktag((MR_Integer) 0)));
#line 1139 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1139 "unused_args.m"
          {
#line 1139 "unused_args.m"
            transform_hlds__unused_args___SpecialId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 0)));
#line 1139 "unused_args.m"
            transform_hlds__unused_args__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 1)));
#line 1142 "unused_args.m"
            {
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeModule_22;
#line 1142 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeName_23;
#line 1142 "unused_args.m"
              MR_Integer transform_hlds__unused_args__TypeArity_24;
#line 1142 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeArityStr_25;
#line 1142 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeModuleString_26;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_50_50;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_52_52;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_55_55;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_56_56;
#line 1142 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_58_58;

#line 1141 "unused_args.m"
              {
#line 1141 "unused_args.m"
                check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__unused_args__TypeCtor_21, &transform_hlds__unused_args__TypeModule_22, &transform_hlds__unused_args__TypeName_23, &transform_hlds__unused_args__TypeArity_24);
              }
#line 1143 "unused_args.m"
              {
#line 1143 "unused_args.m"
                mercury__string__int_to_string_2_p_0(transform_hlds__unused_args__TypeArity_24, &transform_hlds__unused_args__TypeArityStr_25);
              }
#line 1144 "unused_args.m"
              {
#line 1144 "unused_args.m"
                transform_hlds__unused_args__TypeModuleString_26 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(transform_hlds__unused_args__TypeModule_22, (MR_String) "__");
              }
#line 1146 "unused_args.m"
              {
#line 1146 "unused_args.m"
                transform_hlds__unused_args__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_58_58, 0) = ((MR_Box) (transform_hlds__unused_args__TypeArityStr_25));
#line 1146 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "unused_args.m"
              }
#line 1146 "unused_args.m"
              {
#line 1146 "unused_args.m"
                transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) ((MR_String) "_"));
#line 1146 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1146 "unused_args.m"
              }
#line 1145 "unused_args.m"
              {
#line 1145 "unused_args.m"
                transform_hlds__unused_args__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_55_55, 0) = ((MR_Box) (transform_hlds__unused_args__TypeName_23));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_55_55, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1145 "unused_args.m"
              }
#line 1145 "unused_args.m"
              {
#line 1145 "unused_args.m"
                transform_hlds__unused_args__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 0) = ((MR_Box) ((MR_String) "__"));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 1) = ((MR_Box) (transform_hlds__unused_args__V_55_55));
#line 1145 "unused_args.m"
              }
#line 1145 "unused_args.m"
              {
#line 1145 "unused_args.m"
                transform_hlds__unused_args__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_52_52, 0) = ((MR_Box) (transform_hlds__unused_args__TypeModuleString_26));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_52_52, 1) = ((MR_Box) (transform_hlds__unused_args__V_53_53));
#line 1145 "unused_args.m"
              }
#line 1145 "unused_args.m"
              {
#line 1145 "unused_args.m"
                transform_hlds__unused_args__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 0) = ((MR_Box) ((MR_String) "_"));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 1) = ((MR_Box) (transform_hlds__unused_args__V_52_52));
#line 1145 "unused_args.m"
              }
#line 1145 "unused_args.m"
              {
#line 1145 "unused_args.m"
                transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__Name0_14));
#line 1145 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_50_50));
#line 1145 "unused_args.m"
              }
#line 1145 "unused_args.m"
              {
#line 1145 "unused_args.m"
                mercury__string__append_list_2_p_0(transform_hlds__unused_args__V_49_49, &transform_hlds__unused_args__Name1_27);
              }
#line 1142 "unused_args.m"
            }
#line 1139 "unused_args.m"
          }
#line 1139 "unused_args.m"
        else
#line 1149 "unused_args.m"
          transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1137 "unused_args.m"
      }
#line 1133 "unused_args.m"
    else
#line 1152 "unused_args.m"
      transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1154 "unused_args.m"
    {
#line 1154 "unused_args.m"
      transform_hlds__unused_args__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_15));
#line 1154 "unused_args.m"
    }
#line 1155 "unused_args.m"
    {
#line 1155 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1155 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1155 "unused_args.m"
    }
#line 1154 "unused_args.m"
    {
#line 1154 "unused_args.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__unused_args__PredModule_13, (MR_String) "UnusedArgs", transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__Name1_27, transform_hlds__unused_args__V_62_62, &transform_hlds__unused_args__Name2_28);
    }
#line 1162 "unused_args.m"
    {
#line 1162 "unused_args.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_11, &transform_hlds__unused_args__ProcInt_29);
    }
#line 1163 "unused_args.m"
    {
#line 1163 "unused_args.m"
      transform_hlds__unused_args__V_65_65 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__ProcInt_29);
    }
#line 1163 "unused_args.m"
    {
#line 1163 "unused_args.m"
      transform_hlds__unused_args__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__unused_args__V_65_65);
    }
#line 1163 "unused_args.m"
    {
#line 1163 "unused_args.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__unused_args__Name2_28, transform_hlds__unused_args__V_63_63, &transform_hlds__unused_args__Name_30);
    }
#line 1164 "unused_args.m"
    {
#line 1164 "unused_args.m"
      transform_hlds__unused_args__Arity_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1165 "unused_args.m"
    {
#line 1165 "unused_args.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__TypeVars_32);
    }
#line 1166 "unused_args.m"
    {
#line 1166 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgTypes0_18, &transform_hlds__unused_args__ArgTypes_33);
    }
#line 1167 "unused_args.m"
    {
#line 1167 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Context_34);
    }
#line 1168 "unused_args.m"
    {
#line 1168 "unused_args.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClausesInfo_35);
    }
#line 1169 "unused_args.m"
    {
#line 1169 "unused_args.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Markers_36);
    }
#line 1170 "unused_args.m"
    {
#line 1170 "unused_args.m"
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__GoalType_37);
    }
#line 1171 "unused_args.m"
    {
#line 1171 "unused_args.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClassContext_38);
    }
#line 1172 "unused_args.m"
    {
#line 1172 "unused_args.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__VarNameRemap_39);
    }
#line 5913 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1177 "unused_args.m"
    {
#line 1177 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_70_70, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &transform_hlds__unused_args__EmptyProofs_40);
    }
#line 1178 "unused_args.m"
    {
#line 1178 "unused_args.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, transform_hlds__unused_args__TypeCtorInfo_70_70, &transform_hlds__unused_args__EmptyConstraintMap_41);
    }
#line 1179 "unused_args.m"
    {
#line 1179 "unused_args.m"
      transform_hlds__unused_args__Transform_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1179 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1179 "unused_args.m"
    }
#line 1180 "unused_args.m"
    {
#line 1180 "unused_args.m"
      transform_hlds__unused_args__Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 0) = ((MR_Box) (transform_hlds__unused_args__Transform_42));
#line 1180 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 1) = ((MR_Box) (transform_hlds__unused_args__OrigOrigin_19));
#line 1180 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1180 "unused_args.m"
    }
#line 1181 "unused_args.m"
    {
#line 1181 "unused_args.m"
      hlds__hlds_pred__pred_info_init_18_p_0(transform_hlds__unused_args__PredModule_13, transform_hlds__unused_args__Name_30, transform_hlds__unused_args__Arity_31, transform_hlds__unused_args__PredOrFunc_15, transform_hlds__unused_args__Context_34, transform_hlds__unused_args__Origin_43, transform_hlds__unused_args__PredStatus_9, transform_hlds__unused_args__GoalType_37, transform_hlds__unused_args__Markers_36, transform_hlds__unused_args__ArgTypes_33, transform_hlds__unused_args__Tvars_16, transform_hlds__unused_args__ExistQVars_17, transform_hlds__unused_args__ClassContext_38, transform_hlds__unused_args__EmptyProofs_40, transform_hlds__unused_args__EmptyConstraintMap_41, transform_hlds__unused_args__ClausesInfo_35, transform_hlds__unused_args__VarNameRemap_39, &transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67);
    }
#line 1185 "unused_args.m"
    {
#line 1185 "unused_args.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__unused_args__TypeVars_32, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);
    }
#line 1126 "unused_args.m"
  }
#line 1122 "unused_args.m"
}

#line 867 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 867 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 867 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcIds_8,
#line 867 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 867 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13)
#line 867 "unused_args.m"
{
#line 870 "unused_args.m"
  while (MR_TRUE)
#line 870 "unused_args.m"
    {
#line 870 "unused_args.m"
      /* tailcall optimized into a loop */
#line 870 "unused_args.m"
      {
#line 870 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 870 "unused_args.m"
        MR_Word transform_hlds__unused_args__Changed_10;
#line 870 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 871 "unused_args.m"
        {
#line 871 "unused_args.m"
          transform_hlds__unused_args__unused_args_single_pass_5_p_0(transform_hlds__unused_args__LocalPredProcIds_8, (MR_Integer) 0, &transform_hlds__unused_args__Changed_10, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15);
        }
#line 880 "unused_args.m"
#line 880 "unused_args.m"
        switch (transform_hlds__unused_args__Changed_10) {
#line 880 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 880 "unused_args.m"
          case (MR_Integer) 0:
#line 881 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;
#line 880 "unused_args.m"
            break;
#line 880 "unused_args.m"
          case (MR_Integer) 1:
#line 873 "unused_args.m"
            {
#line 873 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_23_23 = (transform_hlds__unused_args__PassNum_6 + (MR_Integer) 1);

#line 879 "unused_args.m"
              /* direct tailcall eliminated */
#line 879 "unused_args.m"
              {
#line 879 "unused_args.m"
                MR_Integer transform_hlds__unused_args__PassNum__tmp_copy_6 = transform_hlds__unused_args__V_23_23;
#line 879 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 879 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12;
#line 879 "unused_args.m"
                transform_hlds__unused_args__PassNum_6 = transform_hlds__unused_args__PassNum__tmp_copy_6;
#line 879 "unused_args.m"
              }
#line 879 "unused_args.m"
              continue;
#line 873 "unused_args.m"
            }
#line 880 "unused_args.m"
            break;
#line 880 "unused_args.m"
        }
#line 870 "unused_args.m"
      }
#line 870 "unused_args.m"
      break;
#line 870 "unused_args.m"
    }
#line 867 "unused_args.m"
}

#line 1019 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1019__1_3_p_0(
#line 1019 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1019 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1019 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_56)
#line 1019 "unused_args.m"
{
#line 1019 "unused_args.m"
  {
#line 1019 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1019 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeClassInfo_for_partial_order_81;
#line 1021 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 94 "analysis.int"
    MR_bool MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1020 "unused_args.m"
    {
#line 1020 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__LambdaHeadVar__1_56, transform_hlds__unused_args__Answer_26);
    }
#line 1020 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1019 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1019 "unused_args.m"
      {
#line 1021 "unused_args.m"
        transform_hlds__unused_args__V_57_57 = (MR_Word) transform_hlds__unused_args__LambdaHeadVar__1_56;
#line 1021 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1019 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1019 "unused_args.m"
          {
#line 6088 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeClassInfo_for_partial_order_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[3];
#line 94 "analysis.int"
            transform_hlds__unused_args__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_partial_order_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 94 "analysis.int"
            {
#line 94 "analysis.int"
              transform_hlds__unused_args__succeeded = transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_partial_order_81), ((MR_Box) (transform_hlds__unused_args__FuncInfo_25)), ((MR_Box) (transform_hlds__unused_args__Answer_26)), ((MR_Box) (transform_hlds__unused_args__LambdaHeadVar__1_56)));
            }
#line 1019 "unused_args.m"
          }
#line 1019 "unused_args.m"
      }
#line 1019 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1019 "unused_args.m"
  }
#line 1019 "unused_args.m"
}

#line 1012 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1012__1_1_f_0(
#line 1012 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_54)
#line 1012 "unused_args.m"
{
#line 1012 "unused_args.m"
  {
#line 1012 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1012 "unused_args.m"
    MR_Word transform_hlds__unused_args__LambdaHeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_54, (MR_Integer) 1)));
#line 1012 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_54, (MR_Integer) 2)));

#line 1012 "unused_args.m"
    return transform_hlds__unused_args__LambdaHeadVar__2_55;
#line 1012 "unused_args.m"
  }
#line 1012 "unused_args.m"
}

#line 688 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__688__1_2_p_0(
#line 688 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 688 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58)
#line 688 "unused_args.m"
{
#line 688 "unused_args.m"
  {
#line 688 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 688 "unused_args.m"
    {
#line 688 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_58)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 688 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 688 "unused_args.m"
  }
#line 688 "unused_args.m"
}

#line 706 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__706__1_2_p_0(
#line 706 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 706 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144)
#line 706 "unused_args.m"
{
#line 706 "unused_args.m"
  {
#line 706 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 706 "unused_args.m"
    {
#line 706 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_144)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 706 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 706 "unused_args.m"
  }
#line 706 "unused_args.m"
}

#line 665 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__665__1_2_p_0(
#line 665 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_116,
#line 665 "unused_args.m"
  MR_Word * transform_hlds__unused_args__LambdaHeadVar__2_117)
#line 665 "unused_args.m"
{
#line 665 "unused_args.m"
  {
#line 665 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 665 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeNameAndMode_44;
#line 666 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_45_45;
#line 666 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_46_46;
#line 667 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_47_47;

#line 666 "unused_args.m"
    *transform_hlds__unused_args__LambdaHeadVar__2_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 0)));
#line 666 "unused_args.m"
    transform_hlds__unused_args__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 1)));
#line 666 "unused_args.m"
    transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 2)));
#line 666 "unused_args.m"
    transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 3)));
#line 667 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 667 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 667 "unused_args.m"
      transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 665 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 665 "unused_args.m"
  }
#line 665 "unused_args.m"
}

#line 432 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__432__1_3_p_0(
#line 432 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 432 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 432 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85)
#line 432 "unused_args.m"
{
#line 432 "unused_args.m"
  {
#line 432 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 432 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 432 "unused_args.m"
    {
#line 432 "unused_args.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_35, transform_hlds__unused_args__HeadVar__2_84, &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 432 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__3_85 = ((MR_Word) transform_hlds__unused_args__conv0_HeadVar__3_85);
#line 432 "unused_args.m"
  }
#line 432 "unused_args.m"
}

#line 212 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 212 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3)
#line 212 "unused_args.m"
{
#line 212 "unused_args.m"
  {
#line 212 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 212 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_5_5;
#line 212 "unused_args.m"
    MR_String transform_hlds__unused_args__V_6_6;
#line 212 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_7_7;
#line 213 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_4_4;

#line 212 "unused_args.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 213 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 213 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 213 "unused_args.m"
      {
#line 213 "unused_args.m"
        transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 0)));
#line 213 "unused_args.m"
        transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 1)));
#line 213 "unused_args.m"
        transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 2)));
#line 213 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 212 "unused_args.m"
          {
#line 213 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 213 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 213 "unused_args.m"
              {
#line 213 "unused_args.m"
                transform_hlds__unused_args__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_5_5, (MR_Integer) 0)));
#line 213 "unused_args.m"
                transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_6_6, (MR_String) "any") == 0);
#line 213 "unused_args.m"
              }
#line 212 "unused_args.m"
          }
#line 213 "unused_args.m"
      }
#line 212 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 212 "unused_args.m"
  }
#line 212 "unused_args.m"
}

#line 209 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void)
#line 209 "unused_args.m"
{
#line 209 "unused_args.m"
  {
#line 209 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 209 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;

#line 209 "unused_args.m"
    {
#line 209 "unused_args.m"
      transform_hlds__unused_args__Term_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 209 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 209 "unused_args.m"
  }
#line 209 "unused_args.m"
}

#line 231 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 231 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 231 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 231 "unused_args.m"
{
#line 231 "unused_args.m"
  {
#line 231 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 231 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3;
#line 232 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_Args_3;

#line 232 "unused_args.m"
    {
#line 232 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__Term_4, &transform_hlds__unused_args__conv0_Args_3);
    }
#line 232 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 232 "unused_args.m"
      {
#line 232 "unused_args.m"
        transform_hlds__unused_args__Args_3 = ((MR_Word) transform_hlds__unused_args__conv0_Args_3);
#line 232 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 232 "unused_args.m"
      }
#line 231 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 231 "unused_args.m"
      {
#line 231 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__Args_3;
#line 231 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 231 "unused_args.m"
      }
#line 231 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 231 "unused_args.m"
  }
#line 231 "unused_args.m"
}

#line 228 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 228 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 228 "unused_args.m"
{
#line 228 "unused_args.m"
  {
#line 228 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 228 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_4;
#line 228 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;

#line 229 "unused_args.m"
    {
#line 229 "unused_args.m"
      mercury__term_conversion__type_to_term_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], (MR_Word) &mercury__term__term__type_ctor_info_generic_0, ((MR_Box) (transform_hlds__unused_args__Args_3)), &transform_hlds__unused_args__Term_4);
    }
#line 228 "unused_args.m"
    return transform_hlds__unused_args__Term_4;
#line 228 "unused_args.m"
  }
#line 228 "unused_args.m"
}

#line 205 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 205 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7)
#line 205 "unused_args.m"
{
#line 205 "unused_args.m"
  {
#line 205 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 205 "unused_args.m"
    {
#line 205 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0();
    }
#line 205 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 205 "unused_args.m"
  }
#line 205 "unused_args.m"
}

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 202 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4)
#line 202 "unused_args.m"
{
#line 203 "unused_args.m"
  {
#line 203 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 203 "unused_args.m"
    {
#line 203 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 203 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 203 "unused_args.m"
  }
#line 202 "unused_args.m"
}

#line 224 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 224 "unused_args.m"
{
#line 224 "unused_args.m"
  {
#line 224 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 224 "unused_args.m"
    {
#line 224 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Args_10, transform_hlds__unused_args__Args_3);
    }
#line 224 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 224 "unused_args.m"
  }
#line 224 "unused_args.m"
}

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 219 "unused_args.m"
{
#line 219 "unused_args.m"
  {
#line 219 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 219 "unused_args.m"
    {
#line 219 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Answer1_5, transform_hlds__unused_args__Answer2_6);
    }
#line 219 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 219 "unused_args.m"
  }
#line 219 "unused_args.m"
}

#line 188 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 188 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 188 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 188 "unused_args.m"
{
#line 188 "unused_args.m"
  {
#line 188 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 188 "unused_args.m"
    {
#line 188 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, transform_hlds__unused_args__FuncInfo_22);
    }
#line 188 "unused_args.m"
  }
#line 188 "unused_args.m"
}

#line 187 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 187 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12)
#line 187 "unused_args.m"
{
#line 187 "unused_args.m"
  {
#line 187 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 187 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 187 "unused_args.m"
    {
#line 187 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 187 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 187 "unused_args.m"
  }
#line 187 "unused_args.m"
}

#line 186 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 186 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 186 "unused_args.m"
{
#line 186 "unused_args.m"
  {
#line 186 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 186 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 186 "unused_args.m"
    {
#line 186 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(transform_hlds__unused_args__HeadVar__1_1);
    }
#line 186 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 186 "unused_args.m"
  }
#line 186 "unused_args.m"
}

#line 185 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
#line 185 "unused_args.m"
{
#line 185 "unused_args.m"
  {
#line 185 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 185 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 185 "unused_args.m"
    {
#line 185 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 185 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 185 "unused_args.m"
  }
#line 185 "unused_args.m"
}

#line 184 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 184 "unused_args.m"
{
#line 184 "unused_args.m"
  {
#line 184 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 184 "unused_args.m"
    MR_Integer transform_hlds__unused_args__HeadVar__3_3;

#line 184 "unused_args.m"
    {
#line 184 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 184 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 184 "unused_args.m"
  }
#line 184 "unused_args.m"
}

#line 183 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 183 "unused_args.m"
{
#line 198 "unused_args.m"
  {
#line 198 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 198 "unused_args.m"
    MR_String transform_hlds__unused_args__HeadVar__3_3;

#line 198 "unused_args.m"
    {
#line 198 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 198 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 198 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 155 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 155 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 155 "unused_args.m"
{
#line 155 "unused_args.m"
  {
#line 155 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 155 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 155 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 155 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 155 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 6701 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 155 "unused_args.m"
    else
#line 155 "unused_args.m"
      {
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 155 "unused_args.m"
        MR_String transform_hlds__unused_args__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 155 "unused_args.m"
        MR_String transform_hlds__unused_args__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 155 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 155 "unused_args.m"
        {
#line 155 "unused_args.m"
          mercury__term____Compare____context_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 6731 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 155 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 155 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 155 "unused_args.m"
        else
#line 155 "unused_args.m"
          {
#line 155 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 155 "unused_args.m"
            {
#line 155 "unused_args.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 6751 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 155 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 155 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 155 "unused_args.m"
            else
#line 155 "unused_args.m"
              {
#line 155 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 155 "unused_args.m"
                {
#line 155 "unused_args.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 6771 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 155 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 155 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 155 "unused_args.m"
                else
#line 155 "unused_args.m"
                  {
#line 155 "unused_args.m"
                    {
#line 155 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 155 "unused_args.m"
                  }
#line 155 "unused_args.m"
              }
#line 155 "unused_args.m"
          }
#line 155 "unused_args.m"
      }
#line 155 "unused_args.m"
  }
#line 155 "unused_args.m"
}

#line 155 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 155 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 155 "unused_args.m"
{
#line 155 "unused_args.m"
  {
#line 155 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 155 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 155 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 155 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 155 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 155 "unused_args.m"
    else
#line 155 "unused_args.m"
      {
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_14_14;
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "unused_args.m"
        MR_String transform_hlds__unused_args__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 155 "unused_args.m"
        MR_String transform_hlds__unused_args__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 155 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 6848 "transform_hlds.unused_args.c"
        {
#line 6850 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__term____Unify____context_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 155 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
          {
#line 6857 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8) == 0);
#line 155 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
              {
#line 6863 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_5_5 == transform_hlds__unused_args__V_9_9);
#line 155 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 155 "unused_args.m"
                  {
#line 6869 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_14_14 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 6871 "transform_hlds.unused_args.c"
                    {
#line 6873 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_14_14, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 155 "unused_args.m"
                  }
#line 155 "unused_args.m"
              }
#line 155 "unused_args.m"
          }
#line 155 "unused_args.m"
      }
#line 155 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 155 "unused_args.m"
  }
#line 155 "unused_args.m"
}

#line 153 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 153 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 153 "unused_args.m"
{
#line 153 "unused_args.m"
  {
#line 153 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 153 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 153 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 153 "unused_args.m"
    {
#line 153 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
    }
#line 153 "unused_args.m"
  }
#line 153 "unused_args.m"
}

#line 153 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 153 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 153 "unused_args.m"
{
#line 153 "unused_args.m"
  {
#line 153 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 153 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 153 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 153 "unused_args.m"
    {
#line 153 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 153 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 153 "unused_args.m"
  }
#line 153 "unused_args.m"
}

#line 150 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 150 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 150 "unused_args.m"
{
#line 150 "unused_args.m"
  {
#line 150 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 150 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 150 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 150 "unused_args.m"
    {
#line 150 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
    }
#line 150 "unused_args.m"
  }
#line 150 "unused_args.m"
}

#line 150 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 150 "unused_args.m"
{
#line 150 "unused_args.m"
  {
#line 150 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 150 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 150 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 150 "unused_args.m"
    {
#line 150 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 150 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 150 "unused_args.m"
  }
#line 150 "unused_args.m"
}

#line 145 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 145 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 145 "unused_args.m"
{
#line 145 "unused_args.m"
  {
#line 145 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 145 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 145 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 145 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 145 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7035 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 145 "unused_args.m"
    else
#line 145 "unused_args.m"
      {
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 145 "unused_args.m"
        {
#line 145 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], &transform_hlds__unused_args__V_8_8, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
        }
#line 7057 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 145 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 145 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 145 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 145 "unused_args.m"
        else
#line 145 "unused_args.m"
          {
#line 145 "unused_args.m"
            {
#line 145 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[9], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
            }
#line 145 "unused_args.m"
          }
#line 145 "unused_args.m"
      }
#line 145 "unused_args.m"
  }
#line 145 "unused_args.m"
}

#line 145 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 145 "unused_args.m"
{
#line 145 "unused_args.m"
  {
#line 145 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 145 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 145 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 145 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 145 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 145 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 145 "unused_args.m"
    else
#line 145 "unused_args.m"
      {
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7122 "transform_hlds.unused_args.c"
        {
#line 7124 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
        }
#line 145 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 145 "unused_args.m"
          {
#line 7131 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[9];
#line 7133 "transform_hlds.unused_args.c"
            {
#line 7135 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 145 "unused_args.m"
          }
#line 145 "unused_args.m"
      }
#line 145 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 145 "unused_args.m"
  }
#line 145 "unused_args.m"
}

#line 605 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 605 "unused_args.m"
{
#line 605 "unused_args.m"
  {
#line 605 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 605 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 605 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 605 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 605 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7173 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 605 "unused_args.m"
    else
#line 605 "unused_args.m"
      {
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 605 "unused_args.m"
        {
#line 605 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 7195 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 605 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 605 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 605 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 605 "unused_args.m"
        else
#line 605 "unused_args.m"
          {
#line 605 "unused_args.m"
            {
#line 605 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
            }
#line 605 "unused_args.m"
          }
#line 605 "unused_args.m"
      }
#line 605 "unused_args.m"
  }
#line 605 "unused_args.m"
}

#line 605 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 605 "unused_args.m"
{
#line 605 "unused_args.m"
  {
#line 605 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 605 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 605 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 605 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 605 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 605 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 605 "unused_args.m"
    else
#line 605 "unused_args.m"
      {
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 605 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7260 "transform_hlds.unused_args.c"
        {
#line 7262 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 605 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 605 "unused_args.m"
          {
#line 7269 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 7271 "transform_hlds.unused_args.c"
            {
#line 7273 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 605 "unused_args.m"
          }
#line 605 "unused_args.m"
      }
#line 605 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 605 "unused_args.m"
  }
#line 605 "unused_args.m"
}

#line 164 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0(
#line 164 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 164 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 164 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 164 "unused_args.m"
{
#line 164 "unused_args.m"
  {
#line 164 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 164 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 164 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 164 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 164 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7311 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "unused_args.m"
    else
#line 164 "unused_args.m"
      {
#line 164 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 164 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 164 "unused_args.m"
        {
#line 164 "unused_args.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unused_args__HeadVar__1_1, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_5_5);
        }
#line 164 "unused_args.m"
      }
#line 164 "unused_args.m"
  }
#line 164 "unused_args.m"
}

#line 164 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0(
#line 164 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 164 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 164 "unused_args.m"
{
#line 164 "unused_args.m"
  {
#line 164 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 164 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 164 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 164 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 164 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 164 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 164 "unused_args.m"
    else
#line 164 "unused_args.m"
      {
#line 164 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_3_3 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 164 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 7367 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_3_3 == transform_hlds__unused_args__V_4_4);
#line 164 "unused_args.m"
      }
#line 164 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 164 "unused_args.m"
  }
#line 164 "unused_args.m"
}

#line 167 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0(
#line 167 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 167 "unused_args.m"
{
#line 167 "unused_args.m"
  {
#line 167 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 167 "unused_args.m"
    {
#line 167 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__unused_args__HeadVar__1_1);
    }
#line 167 "unused_args.m"
  }
#line 167 "unused_args.m"
}

#line 167 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0(void)
#line 167 "unused_args.m"
{
#line 167 "unused_args.m"
  {
#line 167 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 167 "unused_args.m"
    {
#line 167 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 167 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 167 "unused_args.m"
  }
#line 167 "unused_args.m"
}

#line 170 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0(
#line 170 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 170 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 170 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 170 "unused_args.m"
{
#line 170 "unused_args.m"
  {
#line 170 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 170 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 170 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 170 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 170 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7446 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "unused_args.m"
    else
#line 170 "unused_args.m"
      {
#line 170 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;
#line 170 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = (MR_Word) transform_hlds__unused_args__HeadVar__3_3;

#line 170 "unused_args.m"
        {
#line 170 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
        }
#line 170 "unused_args.m"
      }
#line 170 "unused_args.m"
  }
#line 170 "unused_args.m"
}

#line 170 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0(
#line 170 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 170 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 170 "unused_args.m"
{
#line 170 "unused_args.m"
  {
#line 170 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 170 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 170 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 170 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 170 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 170 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 170 "unused_args.m"
    else
#line 170 "unused_args.m"
      {
#line 170 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;
#line 170 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;

#line 7502 "transform_hlds.unused_args.c"
        {
#line 7504 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_4_4)));
        }
#line 170 "unused_args.m"
      }
#line 170 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 170 "unused_args.m"
  }
#line 170 "unused_args.m"
}

#line 976 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 976 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 976 "unused_args.m"
{
#line 976 "unused_args.m"
  {
#line 976 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 976 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 976 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 976 "unused_args.m"
    {
#line 976 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
    }
#line 976 "unused_args.m"
  }
#line 976 "unused_args.m"
}

#line 976 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 976 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 976 "unused_args.m"
{
#line 976 "unused_args.m"
  {
#line 976 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 976 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 976 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 976 "unused_args.m"
    {
#line 976 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 976 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 976 "unused_args.m"
  }
#line 976 "unused_args.m"
}

#line 980 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 980 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 980 "unused_args.m"
{
#line 980 "unused_args.m"
  {
#line 980 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 980 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 980 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 980 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 980 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7600 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 980 "unused_args.m"
    else
#line 980 "unused_args.m"
      {
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 980 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 980 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 980 "unused_args.m"
        {
#line 980 "unused_args.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 7630 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 980 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 980 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 980 "unused_args.m"
        else
#line 980 "unused_args.m"
          {
#line 980 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 980 "unused_args.m"
            {
#line 980 "unused_args.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 7650 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 980 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 980 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 980 "unused_args.m"
            else
#line 980 "unused_args.m"
              {
#line 980 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 980 "unused_args.m"
                {
#line 980 "unused_args.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 7670 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 980 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 980 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 980 "unused_args.m"
                else
#line 980 "unused_args.m"
                  {
#line 980 "unused_args.m"
                    {
#line 980 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 980 "unused_args.m"
                  }
#line 980 "unused_args.m"
              }
#line 980 "unused_args.m"
          }
#line 980 "unused_args.m"
      }
#line 980 "unused_args.m"
  }
#line 980 "unused_args.m"
}

#line 980 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 980 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 980 "unused_args.m"
{
#line 980 "unused_args.m"
  {
#line 980 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 980 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 980 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 980 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 980 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 980 "unused_args.m"
    else
#line 980 "unused_args.m"
      {
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_15_15;
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 980 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 980 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 980 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 7747 "transform_hlds.unused_args.c"
        {
#line 7749 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 980 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
          {
#line 7756 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_4_4 == transform_hlds__unused_args__V_8_8);
#line 980 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
              {
#line 7762 "transform_hlds.unused_args.c"
                {
#line 7764 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
                }
#line 980 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 980 "unused_args.m"
                  {
#line 7771 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_15_15 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 7773 "transform_hlds.unused_args.c"
                    {
#line 7775 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_15_15, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 980 "unused_args.m"
                  }
#line 980 "unused_args.m"
              }
#line 980 "unused_args.m"
          }
#line 980 "unused_args.m"
      }
#line 980 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 980 "unused_args.m"
  }
#line 980 "unused_args.m"
}

#line 1396 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 1396 "unused_args.m"
{
#line 1396 "unused_args.m"
  {
#line 1396 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1396 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_18 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 1396 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_19 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 1396 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_18 == transform_hlds__unused_args__CastY_19);
#line 1396 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7817 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 1396 "unused_args.m"
    else
#line 1396 "unused_args.m"
      {
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 4)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1396 "unused_args.m"
        {
#line 1396 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_9_9);
        }
#line 7851 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 1396 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1396 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 1396 "unused_args.m"
        else
#line 1396 "unused_args.m"
          {
#line 1396 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_15_15;

#line 1396 "unused_args.m"
            {
#line 1396 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], &transform_hlds__unused_args__V_15_15, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
            }
#line 7871 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_15_15 == (MR_Integer) 0);
#line 1396 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1396 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_15_15;
#line 1396 "unused_args.m"
            else
#line 1396 "unused_args.m"
              {
#line 1396 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_16_16;

#line 1396 "unused_args.m"
                {
#line 1396 "unused_args.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[6], &transform_hlds__unused_args__V_16_16, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                }
#line 7891 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_16_16 == (MR_Integer) 0);
#line 1396 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1396 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_16_16;
#line 1396 "unused_args.m"
                else
#line 1396 "unused_args.m"
                  {
#line 1396 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_17_17;

#line 1396 "unused_args.m"
                    {
#line 1396 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[7], &transform_hlds__unused_args__V_17_17, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                    }
#line 7911 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_17_17 == (MR_Integer) 0);
#line 1396 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1396 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
                      *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_17_17;
#line 1396 "unused_args.m"
                    else
#line 1396 "unused_args.m"
                      {
#line 1396 "unused_args.m"
                        {
#line 1396 "unused_args.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_8_8)), ((MR_Box) (transform_hlds__unused_args__V_13_13)));
                        }
#line 1396 "unused_args.m"
                      }
#line 1396 "unused_args.m"
                  }
#line 1396 "unused_args.m"
              }
#line 1396 "unused_args.m"
          }
#line 1396 "unused_args.m"
      }
#line 1396 "unused_args.m"
  }
#line 1396 "unused_args.m"
}

#line 1396 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1396 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 1396 "unused_args.m"
{
#line 1396 "unused_args.m"
  {
#line 1396 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1396 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_13 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 1396 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_14 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 1396 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_13 == transform_hlds__unused_args__CastY_14);
#line 1396 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1396 "unused_args.m"
    else
#line 1396 "unused_args.m"
      {
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_16_16;
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17;
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_18_18;
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_19_19;
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 4)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1396 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));

#line 8000 "transform_hlds.unused_args.c"
        {
#line 8002 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_8_8);
        }
#line 1396 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
          {
#line 8009 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_16_16 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[0];
#line 8011 "transform_hlds.unused_args.c"
            {
#line 8013 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_16_16, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_9_9)));
            }
#line 1396 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
              {
#line 8020 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[6];
#line 8022 "transform_hlds.unused_args.c"
                {
#line 8024 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_17_17, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                }
#line 1396 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
                  {
#line 8031 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_18_18 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[7];
#line 8033 "transform_hlds.unused_args.c"
                    {
#line 8035 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_18_18, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 1396 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1396 "unused_args.m"
                      {
#line 8042 "transform_hlds.unused_args.c"
                        transform_hlds__unused_args__TypeInfo_19_19 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 8044 "transform_hlds.unused_args.c"
                        {
#line 8046 "transform_hlds.unused_args.c"
                          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_19_19, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                        }
#line 1396 "unused_args.m"
                      }
#line 1396 "unused_args.m"
                  }
#line 1396 "unused_args.m"
              }
#line 1396 "unused_args.m"
          }
#line 1396 "unused_args.m"
      }
#line 1396 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1396 "unused_args.m"
  }
#line 1396 "unused_args.m"
}

#line 136 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 136 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 136 "unused_args.m"
{
#line 136 "unused_args.m"
  {
#line 136 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 136 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 136 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 136 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 136 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 8090 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 136 "unused_args.m"
    else
#line 136 "unused_args.m"
      {
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 136 "unused_args.m"
        {
#line 136 "unused_args.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 8112 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 136 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 136 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 136 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 136 "unused_args.m"
        else
#line 136 "unused_args.m"
          {
#line 136 "unused_args.m"
            {
#line 136 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
            }
#line 136 "unused_args.m"
          }
#line 136 "unused_args.m"
      }
#line 136 "unused_args.m"
  }
#line 136 "unused_args.m"
}

#line 136 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 136 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 136 "unused_args.m"
{
#line 136 "unused_args.m"
  {
#line 136 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 136 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 136 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 136 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 136 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 136 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 136 "unused_args.m"
    else
#line 136 "unused_args.m"
      {
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 8177 "transform_hlds.unused_args.c"
        {
#line 8179 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 136 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 136 "unused_args.m"
          {
#line 8186 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 8188 "transform_hlds.unused_args.c"
            {
#line 8190 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 136 "unused_args.m"
          }
#line 136 "unused_args.m"
      }
#line 136 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 136 "unused_args.m"
  }
#line 136 "unused_args.m"
}

#line 1983 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1983 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1983 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1983 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1983 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18)
#line 1983 "unused_args.m"
{
#line 1986 "unused_args.m"
  {
#line 1986 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1986 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 0)));
#line 1986 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredInfo_10;
#line 1987 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 1)));

#line 1988 "unused_args.m"
    {
#line 1988 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredId_8, &transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1990 "unused_args.m"
    {
#line 1990 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1990 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1990 "unused_args.m"
      {
#line 1991 "unused_args.m"
        {
#line 1991 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
        }
#line 1991 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1990 "unused_args.m"
      }
#line 1989 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1994 "unused_args.m"
      {
#line 1994 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeClassInfo_for_analysis_20;
#line 1994 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeModule_11;
#line 1994 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeFuncId_12;
#line 1994 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_14;
#line 1994 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_16;
#line 76 "analysis.int"
        void MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 76 "analysis.int"
        MR_Box transform_hlds__unused_args__conv1_FuncInfo_16;

#line 1993 "unused_args.m"
        {
#line 1993 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredProcId_6, &transform_hlds__unused_args__CalleeModule_11, &transform_hlds__unused_args__CalleeFuncId_12);
        }
#line 1995 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 8277 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeClassInfo_for_analysis_20 = (MR_Word) &transform_hlds__unused_args_scalar_common_4[0];
#line 76 "analysis.int"
        transform_hlds__unused_args__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_analysis_20, (MR_Integer) 0)), (MR_Integer) 10)));
#line 76 "analysis.int"
        {
#line 76 "analysis.int"
          transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_analysis_20), ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5)), ((MR_Box) (transform_hlds__unused_args__CalleeModule_11)), ((MR_Box) (transform_hlds__unused_args__CalleeFuncId_12)), &transform_hlds__unused_args__conv1_FuncInfo_16);
        }
#line 76 "analysis.int"
        transform_hlds__unused_args__FuncInfo_16 = ((MR_Word) transform_hlds__unused_args__conv1_FuncInfo_16);
#line 1999 "unused_args.m"
        {
#line 1999 "unused_args.m"
          analysis__record_dependency_7_p_0(transform_hlds__unused_args__TypeClassInfo_for_analysis_20, transform_hlds__unused_args__CalleeModule_11, transform_hlds__unused_args__CalleeFuncId_12, ((MR_Box) (transform_hlds__unused_args__FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);
        }
#line 1994 "unused_args.m"
      }
#line 1989 "unused_args.m"
    else
#line 1989 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17;
#line 1986 "unused_args.m"
  }
#line 1983 "unused_args.m"
}

#line 1980 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1980 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1980 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1980 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1980 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1980 "unused_args.m"
{
#line 1980 "unused_args.m"
  {
#line 1980 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1980 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18;

#line 1980 "unused_args.m"
    {
#line 1980 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18);
    }
#line 1980 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18));
#line 1980 "unused_args.m"
  }
#line 1980 "unused_args.m"
}

#line 1972 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1972 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1972 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1972 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1972 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1972 "unused_args.m"
{
#line 1975 "unused_args.m"
  {
#line 1975 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1975 "unused_args.m"
    MR_Word transform_hlds__unused_args__CallerProcInfo_9;
#line 1975 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_10;
#line 1975 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredProcIds_11;
#line 1975 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1976 "unused_args.m"
    MR_Word transform_hlds__unused_args___CallerPredInfo_8;
#line 1980 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1976 "unused_args.m"
    {
#line 1976 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CallerPredProcId_6, &transform_hlds__unused_args___CallerPredInfo_8, &transform_hlds__unused_args__CallerProcInfo_9);
    }
#line 1978 "unused_args.m"
    {
#line 1978 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__CallerProcInfo_9, &transform_hlds__unused_args__Goal_10);
    }
#line 1979 "unused_args.m"
    {
#line 1979 "unused_args.m"
      hlds__goal_util__pred_proc_ids_from_goal_2_p_0(transform_hlds__unused_args__Goal_10, &transform_hlds__unused_args__CalleePredProcIds_11);
    }
#line 1980 "unused_args.m"
    {
#line 1980 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1980 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 1980 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1));
#line 1980 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1980 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5));
#line 1980 "unused_args.m"
    }
#line 1980 "unused_args.m"
    {
#line 1980 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__CalleePredProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1980 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1975 "unused_args.m"
  }
#line 1972 "unused_args.m"
}

#line 1935 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1935 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1935 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1935 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20)
#line 1935 "unused_args.m"
{
#line 1941 "unused_args.m"
  {
#line 1941 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1942 "unused_args.m"
    {
#line 1942 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__ProcId_12);
    }
#line 1942 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1942 "unused_args.m"
      {
#line 1943 "unused_args.m"
        {
#line 1943 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1943 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1942 "unused_args.m"
      }
#line 1941 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1945 "unused_args.m"
      {
#line 1945 "unused_args.m"
        MR_Word transform_hlds__unused_args__PPId_14;
#line 1945 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_16;
#line 1945 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleName_17;
#line 1945 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_18;
#line 1946 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1946 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_UnusedArgs_15;

#line 1945 "unused_args.m"
        {
#line 1945 "unused_args.m"
          transform_hlds__unused_args__PPId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1945 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1945 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1945 "unused_args.m"
        }
#line 1946 "unused_args.m"
        {
#line 1946 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_9, ((MR_Box) (transform_hlds__unused_args__PPId_14)), &transform_hlds__unused_args__conv0_UnusedArgs_15);
        }
#line 1946 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1946 "unused_args.m"
          {
#line 1946 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_15);
#line 1946 "unused_args.m"
            transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1946 "unused_args.m"
          }
#line 1946 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1947 "unused_args.m"
          transform_hlds__unused_args__Answer_16 = (MR_Word) transform_hlds__unused_args__UnusedArgs_15;
#line 1946 "unused_args.m"
        else
#line 1949 "unused_args.m"
          {
#line 1949 "unused_args.m"
            transform_hlds__unused_args__Answer_16 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1949 "unused_args.m"
          }
#line 1951 "unused_args.m"
        {
#line 1951 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PPId_14, &transform_hlds__unused_args__ModuleName_17, &transform_hlds__unused_args__FuncId_18);
        }
#line 1952 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1952 "unused_args.m"
        {
#line 1952 "unused_args.m"
          analysis__record_result_7_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__ModuleName_17, transform_hlds__unused_args__FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__unused_args__Answer_16)), (MR_Integer) 2, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);
        }
#line 1945 "unused_args.m"
      }
#line 1941 "unused_args.m"
    else
#line 1941 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19;
#line 1941 "unused_args.m"
  }
#line 1935 "unused_args.m"
}

#line 1931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1931 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1931 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1931 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1931 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1931 "unused_args.m"
{
#line 1931 "unused_args.m"
  {
#line 1931 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1931 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20;

#line 1931 "unused_args.m"
    {
#line 1931 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20);
    }
#line 1931 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20));
#line 1931 "unused_args.m"
  }
#line 1931 "unused_args.m"
}

#line 1923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1923 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1923 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1923 "unused_args.m"
{
#line 1927 "unused_args.m"
  {
#line 1927 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1927 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_10;
#line 1927 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcIds_11;
#line 1927 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1930 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1928 "unused_args.m"
    {
#line 1928 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_6, transform_hlds__unused_args__PredId_8, &transform_hlds__unused_args__PredInfo_10);
    }
#line 1929 "unused_args.m"
    {
#line 1929 "unused_args.m"
      transform_hlds__unused_args__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_10);
    }
#line 1931 "unused_args.m"
    {
#line 1931 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0]));
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1));
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_6));
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_7));
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1931 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 6) = ((MR_Box) (transform_hlds__unused_args__PredInfo_10));
#line 1931 "unused_args.m"
    }
#line 1930 "unused_args.m"
    {
#line 1930 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__ProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1930 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1927 "unused_args.m"
  }
#line 1923 "unused_args.m"
}

#line 1879 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1879 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1879 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5)
#line 1879 "unused_args.m"
{
#line 1881 "unused_args.m"
  {
#line 1881 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1881 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces_6;
#line 1881 "unused_args.m"
    MR_String transform_hlds__unused_args__FirstStr_7;

#line 1882 "unused_args.m"
    {
#line 1882 "unused_args.m"
      transform_hlds__unused_args__FirstStr_7 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__First_4);
    }
#line 1887 "unused_args.m"
    if ((transform_hlds__unused_args__List_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1888 "unused_args.m"
      {
#line 1888 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;
#line 1888 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13;

#line 1889 "unused_args.m"
        {
#line 1889 "unused_args.m"
          transform_hlds__unused_args__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_13_13, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1889 "unused_args.m"
        }
#line 1889 "unused_args.m"
        {
#line 1889 "unused_args.m"
          transform_hlds__unused_args__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 0) = ((MR_Box) (transform_hlds__unused_args__V_13_13));
#line 1889 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1889 "unused_args.m"
        }
#line 1889 "unused_args.m"
        {
#line 1889 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[1])));
#line 1889 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_12_12));
#line 1889 "unused_args.m"
        }
#line 1888 "unused_args.m"
      }
#line 1887 "unused_args.m"
    else
#line 1884 "unused_args.m"
      {
#line 1884 "unused_args.m"
        MR_Integer transform_hlds__unused_args__Second_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 0)));
#line 1884 "unused_args.m"
        MR_Word transform_hlds__unused_args__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 1)));
#line 1884 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_17_17;
#line 1884 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_18_18;
#line 1884 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_19_19;

#line 1885 "unused_args.m"
        {
#line 1885 "unused_args.m"
          transform_hlds__unused_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_18_18, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1885 "unused_args.m"
        }
#line 1886 "unused_args.m"
        {
#line 1886 "unused_args.m"
          transform_hlds__unused_args__V_19_19 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Second_8, transform_hlds__unused_args__Rest_9);
        }
#line 1885 "unused_args.m"
        {
#line 1885 "unused_args.m"
          transform_hlds__unused_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 0) = ((MR_Box) (transform_hlds__unused_args__V_18_18));
#line 1885 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_19_19));
#line 1885 "unused_args.m"
        }
#line 1885 "unused_args.m"
        {
#line 1885 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[20])));
#line 1885 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_17_17));
#line 1885 "unused_args.m"
        }
#line 1884 "unused_args.m"
      }
#line 1881 "unused_args.m"
    return transform_hlds__unused_args__Pieces_6;
#line 1881 "unused_args.m"
  }
#line 1879 "unused_args.m"
}

#line 1827 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
#line 1827 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumInserted_1,
#line 1827 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1827 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3)
#line 1827 "unused_args.m"
{
#line 1829 "unused_args.m"
  {
#line 1829 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1829 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1829 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1829 "unused_args.m"
    else
#line 1831 "unused_args.m"
      {
#line 1831 "unused_args.m"
        MR_Integer transform_hlds__unused_args__HeadArgWith_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1831 "unused_args.m"
        MR_Word transform_hlds__unused_args__TailArgsWith_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1831 "unused_args.m"
        MR_Word transform_hlds__unused_args__TailArgsWithout_9;
#line 1831 "unused_args.m"
        MR_Integer transform_hlds__unused_args__HeadArgWithout_10;

#line 1832 "unused_args.m"
        {
#line 1832 "unused_args.m"
          transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(transform_hlds__unused_args__NumInserted_1, transform_hlds__unused_args__TailArgsWith_7, &transform_hlds__unused_args__TailArgsWithout_9);
        }
#line 1833 "unused_args.m"
        transform_hlds__unused_args__HeadArgWithout_10 = (transform_hlds__unused_args__HeadArgWith_6 - transform_hlds__unused_args__NumInserted_1);
#line 1834 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__HeadArgWithout_10 < (MR_Integer) 1);
#line 1834 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1835 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__TailArgsWithout_9;
#line 1834 "unused_args.m"
        else
#line 1837 "unused_args.m"
          {
#line 1837 "unused_args.m"
            MR_Word base;
#line 1837 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__3_3 = base;
#line 1837 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__HeadArgWithout_10));
#line 1837 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__TailArgsWithout_9));
#line 1837 "unused_args.m"
          }
#line 1831 "unused_args.m"
      }
#line 1829 "unused_args.m"
  }
#line 1827 "unused_args.m"
}

#line 1711 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_3,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoPragma_4,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1711 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8,
#line 1711 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9,
#line 1711 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10)
#line 1711 "unused_args.m"
{
#line 1717 "unused_args.m"
  while (MR_TRUE)
#line 1717 "unused_args.m"
    {
#line 1717 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1717 "unused_args.m"
      {
#line 1717 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1717 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1717 "unused_args.m"
          {
#line 1718 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1718 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Specs_8 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1717 "unused_args.m"
          }
#line 1717 "unused_args.m"
        else
#line 1721 "unused_args.m"
          {
#line 1721 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 0)));
#line 1721 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 1)));
#line 1721 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67;
#line 1721 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1721 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1722 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_31;
#line 1722 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_UnusedArgs_31;

#line 1722 "unused_args.m"
            {
#line 1722 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_2, ((MR_Box) (transform_hlds__unused_args__PredProcId_26)), &transform_hlds__unused_args__conv0_UnusedArgs_31);
            }
#line 1722 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1722 "unused_args.m"
              {
#line 1722 "unused_args.m"
                transform_hlds__unused_args__UnusedArgs_31 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_31);
#line 1722 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1722 "unused_args.m"
              }
#line 1722 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
              {
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_26, (MR_Integer) 0)));
#line 1723 "unused_args.m"
                MR_Integer transform_hlds__unused_args__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_26, (MR_Integer) 1)));
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredInfo_34;
#line 1726 "unused_args.m"
                MR_String transform_hlds__unused_args__Name_35;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredStatus_36;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_37;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecInfo_44;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecForcePreds_46;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__Origin_49;
#line 1729 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_58_58;
#line 1738 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_59_59;
#line 1743 "unused_args.m"
                MR_String transform_hlds__unused_args__V_60_60;
#line 1743 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_38_38;
#line 1747 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Position_39;
#line 1747 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Length_40;
#line 1747 "unused_args.m"
                MR_Integer transform_hlds__unused_args__IdLen_41;
#line 1747 "unused_args.m"
                MR_String transform_hlds__unused_args__Id_42;
#line 1747 "unused_args.m"
                MR_String transform_hlds__unused_args__V_61_61;
#line 1747 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_62_62;
#line 1747 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_63_63;
#line 1751 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_43_43;
#line 1754 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_45_45;
#line 1754 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_47_47;
#line 1754 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_48_48;
#line 1755 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeCtorInfo_74_74;
#line 1760 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_64_64;
#line 1760 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_51_51;
#line 1760 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_52_52;
#line 1760 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_50_50;
#line 1766 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_65_65;
#line 1767 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_66_66;

#line 1724 "unused_args.m"
                {
#line 1724 "unused_args.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_32, &transform_hlds__unused_args__PredInfo_34);
                }
#line 1726 "unused_args.m"
                {
#line 1726 "unused_args.m"
                  transform_hlds__unused_args__Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_34);
                }
#line 1727 "unused_args.m"
                {
#line 1727 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                }
#line 1727 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                  {
#line 1728 "unused_args.m"
                    {
#line 1728 "unused_args.m"
                      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__PredStatus_36);
                    }
#line 1729 "unused_args.m"
                    transform_hlds__unused_args__V_58_58 = (MR_Word) transform_hlds__unused_args__PredStatus_36;
#line 1729 "unused_args.m"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1729 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                      {
#line 1732 "unused_args.m"
                        {
#line 1732 "unused_args.m"
                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_34);
                        }
#line 1732 "unused_args.m"
                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                        if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                          {
#line 1733 "unused_args.m"
                            {
#line 1733 "unused_args.m"
                              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_34);
                            }
#line 1733 "unused_args.m"
                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                            if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                              {
#line 1737 "unused_args.m"
                                {
#line 1737 "unused_args.m"
                                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__Markers_37);
                                }
#line 1738 "unused_args.m"
                                transform_hlds__unused_args__V_59_59 = (MR_Integer) 0;
#line 1738 "unused_args.m"
                                {
#line 1738 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_59_59);
                                }
#line 1738 "unused_args.m"
                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                  {
#line 1743 "unused_args.m"
                                    transform_hlds__unused_args__V_60_60 = (MR_String) "__LambdaGoal__";
#line 1743 "unused_args.m"
                                    {
#line 1743 "unused_args.m"
                                      transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__V_60_60, &transform_hlds__unused_args__V_38_38);
                                    }
#line 1743 "unused_args.m"
                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                    if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                      {
#line 1747 "unused_args.m"
                                        transform_hlds__unused_args__V_61_61 = (MR_String) "__ho";
#line 1747 "unused_args.m"
                                        {
#line 1747 "unused_args.m"
                                          transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__V_61_61, &transform_hlds__unused_args__Position_39);
                                        }
#line 1747 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1747 "unused_args.m"
                                          {
#line 1748 "unused_args.m"
                                            {
#line 1748 "unused_args.m"
                                              mercury__string__length_2_p_0(transform_hlds__unused_args__Name_35, &transform_hlds__unused_args__Length_40);
                                            }
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__V_62_62 = (transform_hlds__unused_args__Length_40 - transform_hlds__unused_args__Position_39);
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__V_63_63 = (MR_Integer) 4;
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__IdLen_41 = (transform_hlds__unused_args__V_62_62 - transform_hlds__unused_args__V_63_63);
#line 1750 "unused_args.m"
                                            {
#line 1750 "unused_args.m"
                                              mercury__string__right_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__IdLen_41, &transform_hlds__unused_args__Id_42);
                                            }
#line 1751 "unused_args.m"
                                            {
#line 1751 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__string__to_int_2_p_0(transform_hlds__unused_args__Id_42, &transform_hlds__unused_args__V_43_43);
                                            }
#line 1747 "unused_args.m"
                                          }
#line 1746 "unused_args.m"
                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                          {
#line 1753 "unused_args.m"
                                            {
#line 1753 "unused_args.m"
                                              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__unused_args__ModuleInfo_1, &transform_hlds__unused_args__TypeSpecInfo_44);
                                            }
#line 1754 "unused_args.m"
                                            transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 0)));
#line 1754 "unused_args.m"
                                            transform_hlds__unused_args__TypeSpecForcePreds_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 1)));
#line 1754 "unused_args.m"
                                            transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 2)));
#line 1754 "unused_args.m"
                                            transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 3)));
#line 9105 "transform_hlds.unused_args.c"
                                            transform_hlds__unused_args__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1755 "unused_args.m"
                                            {
#line 1755 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0(transform_hlds__unused_args__TypeCtorInfo_74_74, ((MR_Box) (transform_hlds__unused_args__PredId_32)), transform_hlds__unused_args__TypeSpecForcePreds_46);
                                            }
#line 1755 "unused_args.m"
                                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                            if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                              {
#line 1758 "unused_args.m"
                                                {
#line 1758 "unused_args.m"
                                                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__Origin_49);
                                                }
#line 1760 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Origin_49)) == (MR_mktag((MR_Integer) 2)));
#line 1760 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1760 "unused_args.m"
                                                  {
#line 1760 "unused_args.m"
                                                    transform_hlds__unused_args__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 0)));
#line 1760 "unused_args.m"
                                                    transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 1)));
#line 1760 "unused_args.m"
                                                    transform_hlds__unused_args__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 2)));
#line 1760 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__V_64_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1760 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1760 "unused_args.m"
                                                      transform_hlds__unused_args__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 1)));
#line 1760 "unused_args.m"
                                                  }
#line 1759 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                                  {
#line 1766 "unused_args.m"
                                                    transform_hlds__unused_args__V_65_65 = (MR_Integer) 10;
#line 1766 "unused_args.m"
                                                    {
#line 1766 "unused_args.m"
                                                      transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_65_65);
                                                    }
#line 1766 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                                      {
#line 1767 "unused_args.m"
                                                        transform_hlds__unused_args__V_66_66 = (MR_Integer) 11;
#line 1767 "unused_args.m"
                                                        {
#line 1767 "unused_args.m"
                                                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_66_66);
                                                        }
#line 1767 "unused_args.m"
                                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                                      }
#line 1726 "unused_args.m"
                                                  }
#line 1726 "unused_args.m"
                                              }
#line 1726 "unused_args.m"
                                          }
#line 1726 "unused_args.m"
                                      }
#line 1726 "unused_args.m"
                                  }
#line 1726 "unused_args.m"
                              }
#line 1726 "unused_args.m"
                          }
#line 1726 "unused_args.m"
                      }
#line 1726 "unused_args.m"
                  }
#line 1725 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1775 "unused_args.m"
                  {
#line 1771 "unused_args.m"
#line 1771 "unused_args.m"
                    switch (transform_hlds__unused_args__DoPragma_4) {
#line 1771 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1771 "unused_args.m"
                      case (MR_Integer) 0:
#line 1770 "unused_args.m"
                        transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1771 "unused_args.m"
                        break;
#line 1771 "unused_args.m"
                      case (MR_Integer) 1:
#line 1899 "unused_args.m"
                        {
#line 1904 "unused_args.m"
                          MR_Integer transform_hlds__unused_args__V_81_81;
#line 1904 "unused_args.m"
                          MR_Word transform_hlds__unused_args__V_82_82;

#line 1900 "unused_args.m"
                          {
#line 1900 "unused_args.m"
                            transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                          }
#line 1901 "unused_args.m"
                          if (!(transform_hlds__unused_args__succeeded))
#line 1901 "unused_args.m"
                            {
#line 1901 "unused_args.m"
                              {
#line 1901 "unused_args.m"
                                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1901 "unused_args.m"
                              if (!(transform_hlds__unused_args__succeeded))
#line 1902 "unused_args.m"
                                {
#line 1902 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__unused_args__PredInfo_34);
                                }
#line 1901 "unused_args.m"
                            }
#line 1903 "unused_args.m"
                          if (transform_hlds__unused_args__succeeded)
#line 1903 "unused_args.m"
                            {
#line 1904 "unused_args.m"
                              transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__UnusedArgs_31)) == (MR_mktag((MR_Integer) 1)));
#line 1904 "unused_args.m"
                              if (transform_hlds__unused_args__succeeded)
#line 1904 "unused_args.m"
                                {
#line 1904 "unused_args.m"
                                  transform_hlds__unused_args__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_31, (MR_Integer) 0)));
#line 1904 "unused_args.m"
                                  transform_hlds__unused_args__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_31, (MR_Integer) 1)));
#line 1904 "unused_args.m"
                                }
#line 1903 "unused_args.m"
                            }
#line 1899 "unused_args.m"
                          if (transform_hlds__unused_args__succeeded)
#line 1906 "unused_args.m"
                            {
#line 1906 "unused_args.m"
                              MR_Word transform_hlds__unused_args__ModuleName_83;
#line 1906 "unused_args.m"
                              MR_String transform_hlds__unused_args__PredName_84;
#line 1906 "unused_args.m"
                              MR_Integer transform_hlds__unused_args__PredArity_85;
#line 1906 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredOrFunc_86;
#line 1906 "unused_args.m"
                              MR_Integer transform_hlds__unused_args__ModeNum_87;
#line 1906 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredSymName_88;
#line 1906 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredNameArityPFMn_89;
#line 1906 "unused_args.m"
                              MR_Word transform_hlds__unused_args__UnusedArgInfo_90;

#line 1906 "unused_args.m"
                              {
#line 1906 "unused_args.m"
                                transform_hlds__unused_args__ModuleName_83 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1907 "unused_args.m"
                              {
#line 1907 "unused_args.m"
                                transform_hlds__unused_args__PredName_84 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1908 "unused_args.m"
                              {
#line 1908 "unused_args.m"
                                transform_hlds__unused_args__PredArity_85 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1909 "unused_args.m"
                              {
#line 1909 "unused_args.m"
                                transform_hlds__unused_args__PredOrFunc_86 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1910 "unused_args.m"
                              {
#line 1910 "unused_args.m"
                                hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_33, &transform_hlds__unused_args__ModeNum_87);
                              }
#line 1911 "unused_args.m"
                              {
#line 1911 "unused_args.m"
                                transform_hlds__unused_args__PredSymName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "unused_args.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_88, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_83));
#line 1911 "unused_args.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_88, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_84));
#line 1911 "unused_args.m"
                              }
#line 1912 "unused_args.m"
                              {
#line 1912 "unused_args.m"
                                transform_hlds__unused_args__PredNameArityPFMn_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1912 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 0) = ((MR_Box) (transform_hlds__unused_args__PredSymName_88));
#line 1912 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 1) = ((MR_Box) (transform_hlds__unused_args__PredArity_85));
#line 1912 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 2) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_86));
#line 1912 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 3) = ((MR_Box) (transform_hlds__unused_args__ModeNum_87));
#line 1912 "unused_args.m"
                              }
#line 1914 "unused_args.m"
                              {
#line 1914 "unused_args.m"
                                transform_hlds__unused_args__UnusedArgInfo_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1914 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgInfo_90, 0) = ((MR_Box) (transform_hlds__unused_args__PredNameArityPFMn_89));
#line 1914 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgInfo_90, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_31));
#line 1914 "unused_args.m"
                              }
#line 1916 "unused_args.m"
                              {
#line 1916 "unused_args.m"
                                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_90)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67);
                              }
#line 1906 "unused_args.m"
                            }
#line 1899 "unused_args.m"
                          else
#line 1899 "unused_args.m"
                            transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1899 "unused_args.m"
                        }
#line 1771 "unused_args.m"
                        break;
#line 1771 "unused_args.m"
                    }
#line 1778 "unused_args.m"
#line 1778 "unused_args.m"
                    switch (transform_hlds__unused_args__DoWarn_3) {
#line 1778 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1778 "unused_args.m"
                      case (MR_Integer) 0:
#line 1777 "unused_args.m"
                        {
#line 1777 "unused_args.m"
                          transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1777 "unused_args.m"
                          transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1777 "unused_args.m"
                        }
#line 1778 "unused_args.m"
                        break;
#line 1778 "unused_args.m"
                      case (MR_Integer) 1:
#line 1780 "unused_args.m"
                        {
#line 1780 "unused_args.m"
                          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(transform_hlds__unused_args__PredInfo_34, transform_hlds__unused_args__PredId_32, transform_hlds__unused_args__ProcId_33, transform_hlds__unused_args__UnusedArgs_31, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6, &transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69);
                        }
#line 1778 "unused_args.m"
                        break;
#line 1778 "unused_args.m"
                    }
#line 1775 "unused_args.m"
                  }
#line 1725 "unused_args.m"
                else
#line 1784 "unused_args.m"
                  {
#line 1784 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1784 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1784 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1784 "unused_args.m"
                  }
#line 1723 "unused_args.m"
              }
#line 1722 "unused_args.m"
            else
#line 1787 "unused_args.m"
              {
#line 1787 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1787 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1787 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1787 "unused_args.m"
              }
#line 1789 "unused_args.m"
            /* direct tailcall eliminated */
#line 1789 "unused_args.m"
            {
#line 1789 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__5__tmp_copy_5 = transform_hlds__unused_args__PredProcIds_27;
#line 1789 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1789 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1789 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67;

#line 1789 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0__tmp_copy_9;
#line 1789 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 1789 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6;
#line 1789 "unused_args.m"
              transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__5__tmp_copy_5;
#line 1789 "unused_args.m"
            }
#line 1789 "unused_args.m"
            continue;
#line 1721 "unused_args.m"
          }
#line 1717 "unused_args.m"
      }
#line 1717 "unused_args.m"
      break;
#line 1717 "unused_args.m"
    }
#line 1711 "unused_args.m"
}

#line 1658 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1658 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25,
#line 1658 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12)
#line 1658 "unused_args.m"
{
#line 1664 "unused_args.m"
  while (MR_TRUE)
#line 1664 "unused_args.m"
    {
#line 1664 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1664 "unused_args.m"
      {
#line 1664 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1664 "unused_args.m"
        if ((transform_hlds__unused_args__Args_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1664 "unused_args.m"
          if ((transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1664 "unused_args.m"
            {
#line 1666 "unused_args.m"
              transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25 == (MR_Integer) 1);
#line 1664 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1664 "unused_args.m"
                {
#line 1667 "unused_args.m"
                  *transform_hlds__unused_args__Changed_12 = (MR_Integer) 0;
#line 1667 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1664 "unused_args.m"
                }
#line 1664 "unused_args.m"
            }
#line 1664 "unused_args.m"
          else
#line 1669 "unused_args.m"
            {
#line 1671 "unused_args.m"
              {
#line 1671 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
              }
#line 1669 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1669 "unused_args.m"
            }
#line 1664 "unused_args.m"
        else
#line 1664 "unused_args.m"
          {
#line 1664 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 1)));
#line 1664 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 0)));

#line 1664 "unused_args.m"
            if ((transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1673 "unused_args.m"
              {
#line 1675 "unused_args.m"
                {
#line 1675 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
                }
#line 1673 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1673 "unused_args.m"
              }
#line 1664 "unused_args.m"
            else
#line 1677 "unused_args.m"
              {
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 0)));
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 1)));
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_44_44;
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__Inst1_21;
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__Inst2_22;
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_19, (MR_Integer) 0)));
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_27_27;
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_19, (MR_Integer) 1)));

#line 1680 "unused_args.m"
                transform_hlds__unused_args__Inst1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 1680 "unused_args.m"
                transform_hlds__unused_args__Inst2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 1681 "unused_args.m"
                {
#line 1681 "unused_args.m"
                  transform_hlds__unused_args__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1681 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, 0) = ((MR_Box) (transform_hlds__unused_args__Inst1_21));
#line 1681 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, 1) = ((MR_Box) (transform_hlds__unused_args__Inst2_22));
#line 1681 "unused_args.m"
                }
#line 1681 "unused_args.m"
                {
#line 1681 "unused_args.m"
                  transform_hlds__unused_args__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__V_27_27);
                }
#line 1680 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1680 "unused_args.m"
                  {
#line 9572 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_44_44 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1682 "unused_args.m"
                    {
#line 1682 "unused_args.m"
                      transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0(transform_hlds__unused_args__TypeInfo_44_44, ((MR_Box) (transform_hlds__unused_args__V_46_46)), transform_hlds__unused_args__UnusedVars_8);
                    }
#line 1680 "unused_args.m"
                  }
#line 1679 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1685 "unused_args.m"
                  {
#line 1684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_24_24;

#line 1684 "unused_args.m"
                    {
#line 1684 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__UnusedVars_8, transform_hlds__unused_args__V_45_45, transform_hlds__unused_args__ArgModes_20, transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25, &transform_hlds__unused_args__V_24_24);
                    }
#line 1685 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1685 "unused_args.m"
                      {
#line 1686 "unused_args.m"
                        *transform_hlds__unused_args__Changed_12 = (MR_Integer) 1;
#line 1686 "unused_args.m"
                        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1685 "unused_args.m"
                      }
#line 1685 "unused_args.m"
                  }
#line 1679 "unused_args.m"
                else
#line 1688 "unused_args.m"
                  {
#line 1689 "unused_args.m"
                    /* direct tailcall eliminated */
#line 1689 "unused_args.m"
                    {
#line 1689 "unused_args.m"
                      MR_Word transform_hlds__unused_args__Args__tmp_copy_9 = transform_hlds__unused_args__V_45_45;
#line 1689 "unused_args.m"
                      MR_Word transform_hlds__unused_args__Modes__tmp_copy_10 = transform_hlds__unused_args__ArgModes_20;

#line 1689 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25 = (MR_Integer) 1;
#line 1689 "unused_args.m"
                      transform_hlds__unused_args__Modes_10 = transform_hlds__unused_args__Modes__tmp_copy_10;
#line 1689 "unused_args.m"
                      transform_hlds__unused_args__Args_9 = transform_hlds__unused_args__Args__tmp_copy_9;
#line 1689 "unused_args.m"
                    }
#line 1689 "unused_args.m"
                    continue;
#line 1688 "unused_args.m"
                  }
#line 1677 "unused_args.m"
              }
#line 1664 "unused_args.m"
          }
#line 1664 "unused_args.m"
        return transform_hlds__unused_args__succeeded;
#line 1664 "unused_args.m"
      }
#line 1664 "unused_args.m"
      break;
#line 1664 "unused_args.m"
    }
#line 1658 "unused_args.m"
}

#line 1615 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1615 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1615 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1615 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1615 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8)
#line 1615 "unused_args.m"
{
#line 1620 "unused_args.m"
  {
#line 1620 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1620 "unused_args.m"
#line 1620 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_7)) {
#line 1620 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1620 "unused_args.m"
      case (MR_Integer) 0:
#line 1631 "unused_args.m"
        {
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));
#line 1631 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 6)));

#line 1632 "unused_args.m"
          {
#line 1632 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_13)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1632 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1631 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1631 "unused_args.m"
            {
#line 1633 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1633 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1631 "unused_args.m"
            }
#line 1631 "unused_args.m"
        }
#line 1620 "unused_args.m"
        break;
#line 1620 "unused_args.m"
      case (MR_Integer) 1:
#line 1635 "unused_args.m"
        {
#line 1635 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1635 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1635 "unused_args.m"
          MR_Word transform_hlds__unused_args__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1635 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1635 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1635 "unused_args.m"
          MR_Word transform_hlds__unused_args___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));

#line 1636 "unused_args.m"
          {
#line 1636 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_32)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1636 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1635 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1643 "unused_args.m"
#line 1643 "unused_args.m"
            switch (transform_hlds__unused_args__CanFail_23) {
#line 1643 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1643 "unused_args.m"
              case (MR_Integer) 0:
#line 1645 "unused_args.m"
                {
#line 1645 "unused_args.m"
                  *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1645 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1645 "unused_args.m"
                }
#line 1643 "unused_args.m"
                break;
#line 1643 "unused_args.m"
              case (MR_Integer) 1:
#line 1640 "unused_args.m"
                {
#line 1641 "unused_args.m"
                  {
#line 1641 "unused_args.m"
                    transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__UnusedVars_6, transform_hlds__unused_args__ArgVars_21, transform_hlds__unused_args__ArgModes_22, (MR_Integer) 0, transform_hlds__unused_args__Changed_8);
                  }
#line 1640 "unused_args.m"
                }
#line 1643 "unused_args.m"
                break;
#line 1643 "unused_args.m"
            }
#line 1635 "unused_args.m"
        }
#line 1620 "unused_args.m"
        break;
#line 1620 "unused_args.m"
      case (MR_Integer) 2:
#line 1626 "unused_args.m"
        {
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args___Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));

#line 1627 "unused_args.m"
          {
#line 1627 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__Target_11)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1627 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1626 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1626 "unused_args.m"
            {
#line 1628 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1628 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1626 "unused_args.m"
            }
#line 1626 "unused_args.m"
        }
#line 1620 "unused_args.m"
        break;
#line 1620 "unused_args.m"
      case (MR_Integer) 3:
#line 1620 "unused_args.m"
#line 1620 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)))) {
#line 1620 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1620 "unused_args.m"
          case (MR_Integer) 0:
#line 1622 "unused_args.m"
            {
#line 1622 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1622 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1622 "unused_args.m"
            }
#line 1620 "unused_args.m"
            break;
#line 1620 "unused_args.m"
          case (MR_Integer) 1:
#line 1649 "unused_args.m"
            {
#line 1650 "unused_args.m"
              {
#line 1650 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.need_unify\'/4", (MR_String) "complicated unify");
              }
#line 1649 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1649 "unused_args.m"
            }
#line 1620 "unused_args.m"
            break;
#line 1620 "unused_args.m"
        }
#line 1620 "unused_args.m"
        break;
#line 1620 "unused_args.m"
    }
#line 1620 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1620 "unused_args.m"
  }
#line 1615 "unused_args.m"
}

#line 1597 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1597 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1597 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1597 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1597 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1597 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1597 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1597 "unused_args.m"
{
#line 1600 "unused_args.m"
  {
#line 1600 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1600 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "unused_args.m"
      {
#line 1600 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1600 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1600 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1600 "unused_args.m"
      }
#line 1600 "unused_args.m"
    else
#line 1601 "unused_args.m"
      {
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case_15;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_16;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 0)));
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 1)));
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 2)));
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_22;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_23;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_28_28;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_38;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_39;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_40;
#line 1601 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_42;

#line 1411 "unused_args.m"
        {
#line 1411 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_21, &transform_hlds__unused_args__Goal1_38, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, &transform_hlds__unused_args__LocalChanged_23);
        }
#line 1412 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 0)));
#line 1412 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 1)));
#line 9925 "transform_hlds.unused_args.c"
#line 9926 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_23) {
#line 9928 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9930 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 9932 "transform_hlds.unused_args.c"
            {
#line 1419 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_42 = transform_hlds__unused_args__GoalInfo1_40;
#line 1609 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 9938 "transform_hlds.unused_args.c"
            }
#line 9940 "transform_hlds.unused_args.c"
            break;
#line 9942 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 9944 "transform_hlds.unused_args.c"
            {
#line 9946 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 9948 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_52;
#line 9950 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_53;
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 1)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));

#line 1701 "unused_args.m"
              {
#line 1701 "unused_args.m"
                transform_hlds__unused_args__InstMap0_52 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_40);
              }
#line 1702 "unused_args.m"
              {
#line 1702 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_41, transform_hlds__unused_args__InstMap0_52, &transform_hlds__unused_args__InstMap_53);
              }
#line 1703 "unused_args.m"
              {
#line 1703 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_53, transform_hlds__unused_args__GoalInfo1_40, &transform_hlds__unused_args__GoalInfo_42);
              }
#line 1607 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = (MR_Integer) 1;
#line 9978 "transform_hlds.unused_args.c"
            }
#line 9980 "transform_hlds.unused_args.c"
            break;
#line 9982 "transform_hlds.unused_args.c"
        }
#line 1421 "unused_args.m"
        {
#line 1421 "unused_args.m"
          transform_hlds__unused_args__Goal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_39));
#line 1421 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_42));
#line 1421 "unused_args.m"
        }
#line 1604 "unused_args.m"
        {
#line 1604 "unused_args.m"
          transform_hlds__unused_args__Case_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1604 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 0) = ((MR_Box) (transform_hlds__unused_args__MainConsId_19));
#line 1604 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 1) = ((MR_Box) (transform_hlds__unused_args__OtherConsIds_20));
#line 1604 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goal_22));
#line 1604 "unused_args.m"
        }
#line 1611 "unused_args.m"
        {
#line 1611 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_14, &transform_hlds__unused_args__Cases_16, transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1601 "unused_args.m"
        {
#line 1601 "unused_args.m"
          MR_Word base;
#line 1601 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1601 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1601 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Case_15));
#line 1601 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Cases_16));
#line 1601 "unused_args.m"
        }
#line 1601 "unused_args.m"
      }
#line 1600 "unused_args.m"
  }
#line 1597 "unused_args.m"
}

#line 1582 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1582 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1582 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1582 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1582 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1582 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1582 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1582 "unused_args.m"
{
#line 1585 "unused_args.m"
  {
#line 1585 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1585 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "unused_args.m"
      {
#line 1585 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1585 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1585 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1585 "unused_args.m"
      }
#line 1585 "unused_args.m"
    else
#line 1587 "unused_args.m"
      {
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_15;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_16;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_24_24;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_34;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_35;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_36;
#line 1587 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_38;

#line 1411 "unused_args.m"
        {
#line 1411 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_34, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1412 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 0)));
#line 1412 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 1)));
#line 10102 "transform_hlds.unused_args.c"
#line 10103 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10105 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10107 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10109 "transform_hlds.unused_args.c"
            {
#line 1419 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_38 = transform_hlds__unused_args__GoalInfo1_36;
#line 1593 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10115 "transform_hlds.unused_args.c"
            }
#line 10117 "transform_hlds.unused_args.c"
            break;
#line 10119 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10121 "transform_hlds.unused_args.c"
            {
#line 10123 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 10125 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_48;
#line 10127 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_49;
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 1)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));

#line 1701 "unused_args.m"
              {
#line 1701 "unused_args.m"
                transform_hlds__unused_args__InstMap0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_36);
              }
#line 1702 "unused_args.m"
              {
#line 1702 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_37, transform_hlds__unused_args__InstMap0_48, &transform_hlds__unused_args__InstMap_49);
              }
#line 1703 "unused_args.m"
              {
#line 1703 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_49, transform_hlds__unused_args__GoalInfo1_36, &transform_hlds__unused_args__GoalInfo_38);
              }
#line 1591 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = (MR_Integer) 1;
#line 10155 "transform_hlds.unused_args.c"
            }
#line 10157 "transform_hlds.unused_args.c"
            break;
#line 10159 "transform_hlds.unused_args.c"
        }
#line 1421 "unused_args.m"
        {
#line 1421 "unused_args.m"
          transform_hlds__unused_args__Goal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_35));
#line 1421 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_38));
#line 1421 "unused_args.m"
        }
#line 1595 "unused_args.m"
        {
#line 1595 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals_16, transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1586 "unused_args.m"
        {
#line 1586 "unused_args.m"
          MR_Word base;
#line 1586 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1586 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_15));
#line 1586 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_16));
#line 1586 "unused_args.m"
        }
#line 1587 "unused_args.m"
      }
#line 1585 "unused_args.m"
  }
#line 1582 "unused_args.m"
}

#line 1559 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1559 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1559 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1559 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1559 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1559 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1559 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1559 "unused_args.m"
{
#line 1562 "unused_args.m"
  {
#line 1562 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1562 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "unused_args.m"
      {
#line 1562 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1562 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1562 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1562 "unused_args.m"
      }
#line 1562 "unused_args.m"
    else
#line 1563 "unused_args.m"
      {
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_18;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals1_21;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_26_26;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_40;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_41;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_42;
#line 1563 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_44;
#line 1572 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_28_28;
#line 1572 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_32_32;
#line 1572 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_20_20;

#line 1411 "unused_args.m"
        {
#line 1411 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_40, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1412 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 0)));
#line 1412 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 1)));
#line 10273 "transform_hlds.unused_args.c"
#line 10274 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10276 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10278 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10280 "transform_hlds.unused_args.c"
            {
#line 1419 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_44 = transform_hlds__unused_args__GoalInfo1_42;
#line 1569 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10286 "transform_hlds.unused_args.c"
            }
#line 10288 "transform_hlds.unused_args.c"
            break;
#line 10290 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10292 "transform_hlds.unused_args.c"
            {
#line 10294 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
#line 10296 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_54;
#line 10298 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_55;
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
#line 1415 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));

#line 1701 "unused_args.m"
              {
#line 1701 "unused_args.m"
                transform_hlds__unused_args__InstMap0_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_42);
              }
#line 1702 "unused_args.m"
              {
#line 1702 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_43, transform_hlds__unused_args__InstMap0_54, &transform_hlds__unused_args__InstMap_55);
              }
#line 1703 "unused_args.m"
              {
#line 1703 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_55, transform_hlds__unused_args__GoalInfo1_42, &transform_hlds__unused_args__GoalInfo_44);
              }
#line 1567 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = (MR_Integer) 1;
#line 10326 "transform_hlds.unused_args.c"
            }
#line 10328 "transform_hlds.unused_args.c"
            break;
#line 10330 "transform_hlds.unused_args.c"
        }
#line 1421 "unused_args.m"
        {
#line 1421 "unused_args.m"
          transform_hlds__unused_args__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_41));
#line 1421 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_44));
#line 1421 "unused_args.m"
        }
#line 1577 "unused_args.m"
        {
#line 1577 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals1_21, transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1572 "unused_args.m"
        transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 0)));
#line 1572 "unused_args.m"
        transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 1)));
#line 1572 "unused_args.m"
        {
#line 1572 "unused_args.m"
          transform_hlds__unused_args__V_32_32 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 1572 "unused_args.m"
        {
#line 1572 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_32_32);
        }
#line 1572 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1573 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__Goals1_21;
#line 1572 "unused_args.m"
        else
#line 1575 "unused_args.m"
          {
#line 1575 "unused_args.m"
            MR_Word base;
#line 1575 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1575 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_18));
#line 1575 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals1_21));
#line 1575 "unused_args.m"
          }
#line 1563 "unused_args.m"
      }
#line 1562 "unused_args.m"
  }
#line 1559 "unused_args.m"
}

#line 1527 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31)
#line 1527 "unused_args.m"
{
#line 1531 "unused_args.m"
  {
#line 1531 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1531 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 0)));
#line 1531 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 1)));
#line 1531 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 2)));
#line 1531 "unused_args.m"
    MR_Word transform_hlds__unused_args__BoxPolicy_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 3)));

#line 1536 "unused_args.m"
    if ((transform_hlds__unused_args__MaybeName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1537 "unused_args.m"
      {
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_57_57;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewVar_22;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet_23;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__Type_24;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes_25;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_44_44;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_45_45;
#line 1537 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1538 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1538 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1538 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1540 "unused_args.m"
        MR_String transform_hlds__unused_args__Name_21;
#line 1547 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_47_47;
#line 1547 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_48_48;

#line 1540 "unused_args.m"
        {
#line 1540 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__VarSet0_19, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Name_21);
        }
#line 1540 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1541 "unused_args.m"
          {
#line 1541 "unused_args.m"
            {
#line 1541 "unused_args.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__Name_21, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1541 "unused_args.m"
          }
#line 1540 "unused_args.m"
        else
#line 1543 "unused_args.m"
          {
#line 1543 "unused_args.m"
            {
#line 1543 "unused_args.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1543 "unused_args.m"
          }
#line 1545 "unused_args.m"
        {
#line 1545 "unused_args.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Type_24);
        }
#line 1546 "unused_args.m"
        {
#line 1546 "unused_args.m"
          hlds__vartypes__add_var_type_4_p_0(transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__Type_24, transform_hlds__unused_args__VarTypes0_20, &transform_hlds__unused_args__VarTypes_25);
        }
#line 1547 "unused_args.m"
        transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1547 "unused_args.m"
        transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1547 "unused_args.m"
        transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1547 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1547 "unused_args.m"
        transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1548 "unused_args.m"
        {
#line 1548 "unused_args.m"
          MR_Word base;
#line 1548 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = base;
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_44_44));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__V_45_45));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__V_46_46));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet_23));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes_25));
#line 1548 "unused_args.m"
        }
#line 10526 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeInfo_57_57 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1552 "unused_args.m"
        {
#line 1552 "unused_args.m"
          mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_57_57, transform_hlds__unused_args__TypeInfo_57_57, ((MR_Box) (transform_hlds__unused_args__OldVar_14)), ((MR_Box) (transform_hlds__unused_args__NewVar_22)), transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26, transform_hlds__unused_args__STATE_VARIABLE_Subst_27);
        }
#line 1553 "unused_args.m"
        {
#line 1553 "unused_args.m"
          MR_Word base;
#line 1553 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1553 "unused_args.m"
          *transform_hlds__unused_args__Arg_10 = base;
#line 1553 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__NewVar_22));
#line 1553 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__MaybeName_15));
#line 1553 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__OrigType_16));
#line 1553 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__BoxPolicy_17));
#line 1553 "unused_args.m"
        }
#line 1554 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = (MR_Integer) 1;
#line 1537 "unused_args.m"
      }
#line 1536 "unused_args.m"
    else
#line 1534 "unused_args.m"
      {
#line 1535 "unused_args.m"
        *transform_hlds__unused_args__Arg_10 = transform_hlds__unused_args__Arg0_9;
#line 1534 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Subst_27 = transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26;
#line 1534 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_28;
#line 1534 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30;
#line 1534 "unused_args.m"
      }
#line 1531 "unused_args.m"
  }
#line 1527 "unused_args.m"
}

#line 1515 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1515 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1515 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1515 "unused_args.m"
{
#line 1515 "unused_args.m"
  {
#line 1515 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1515 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv10_Arg_10;
#line 1515 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27;
#line 1515 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29;
#line 1515 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31;

#line 1515 "unused_args.m"
    {
#line 1515 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv10_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31);
    }
#line 1515 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv10_Arg_10));
#line 1515 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27));
#line 1515 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29));
#line 1515 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31));
#line 1515 "unused_args.m"
  }
#line 1515 "unused_args.m"
}

#line 1513 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1513 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1513 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1513 "unused_args.m"
{
#line 1513 "unused_args.m"
  {
#line 1513 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1513 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_Arg_10;
#line 1513 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27;
#line 1513 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29;
#line 1513 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31;

#line 1513 "unused_args.m"
    {
#line 1513 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv3_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31);
    }
#line 1513 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv3_Arg_10));
#line 1513 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27));
#line 1513 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29));
#line 1513 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31));
#line 1513 "unused_args.m"
  }
#line 1513 "unused_args.m"
}

#line 1423 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1423 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1423 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1423 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1423 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1423 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1423 "unused_args.m"
{
#line 1426 "unused_args.m"
  {
#line 1426 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1426 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 0)));
#line 1426 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 1)));

#line 1433 "unused_args.m"
#line 1433 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr0_10)) {
#line 1433 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "unused_args.m"
      case (MR_Integer) 0:
#line 1439 "unused_args.m"
        {
#line 1439 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal0_16 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr0_10), (MR_Integer) 0);
#line 1439 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal_17;
#line 1439 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_107;

#line 1440 "unused_args.m"
          {
#line 1440 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__NegGoal0_16, &transform_hlds__unused_args__NegGoal_17, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
          }
#line 1441 "unused_args.m"
          transform_hlds__unused_args__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unused_args__NegGoal_17);
#line 1442 "unused_args.m"
          {
#line 1442 "unused_args.m"
            MR_Word base;
#line 1442 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1442 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_107));
#line 1442 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1442 "unused_args.m"
          }
#line 1439 "unused_args.m"
        }
#line 1433 "unused_args.m"
        break;
#line 1433 "unused_args.m"
      case (MR_Integer) 1:
#line 1491 "unused_args.m"
        {
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args__Unify_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_116;
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args___Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args___RHS_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args___Mode_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1491 "unused_args.m"
          MR_Word transform_hlds__unused_args___Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1492 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1492 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1492 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1494 "unused_args.m"
          MR_Word transform_hlds__unused_args__ChangedPrime_56;

#line 1494 "unused_args.m"
          {
#line 1494 "unused_args.m"
            transform_hlds__unused_args__succeeded = transform_hlds__unused_args__need_unify_4_p_0(transform_hlds__unused_args__ModuleInfo_55, transform_hlds__unused_args__UnusedVars_117, transform_hlds__unused_args__Unify_53, &transform_hlds__unused_args__ChangedPrime_56);
          }
#line 1494 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1495 "unused_args.m"
            {
#line 1495 "unused_args.m"
              transform_hlds__unused_args__GoalExpr_116 = transform_hlds__unused_args__GoalExpr0_10;
#line 1496 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = transform_hlds__unused_args__ChangedPrime_56;
#line 1495 "unused_args.m"
            }
#line 1494 "unused_args.m"
          else
#line 1498 "unused_args.m"
            {
#line 1498 "unused_args.m"
              {
#line 1498 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_116 = hlds__make_goal__true_goal_expr_0_f_0();
              }
#line 1499 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1498 "unused_args.m"
            }
#line 1501 "unused_args.m"
          {
#line 1501 "unused_args.m"
            MR_Word base;
#line 1501 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1501 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1501 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_116));
#line 1501 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1501 "unused_args.m"
          }
#line 1491 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1491 "unused_args.m"
        }
#line 1433 "unused_args.m"
        break;
#line 1433 "unused_args.m"
      case (MR_Integer) 2:
#line 1477 "unused_args.m"
        {
#line 1477 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1477 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1477 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1477 "unused_args.m"
          MR_Word transform_hlds__unused_args__Builtin_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1477 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnifyC_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1477 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1476 "unused_args.m"
          MR_Word transform_hlds__unused_args___Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1478 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1478 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1478 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1478 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1479 "unused_args.m"
          MR_Word transform_hlds__unused_args__CallInfo_44;
#line 1479 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_86_86;
#line 1479 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv14_CallInfo_44;

#line 1479 "unused_args.m"
          {
#line 1479 "unused_args.m"
            transform_hlds__unused_args__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_37));
#line 1479 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_38));
#line 1479 "unused_args.m"
          }
#line 1479 "unused_args.m"
          {
#line 1479 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_43, ((MR_Box) (transform_hlds__unused_args__V_86_86)), &transform_hlds__unused_args__conv14_CallInfo_44);
          }
#line 1479 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1479 "unused_args.m"
            {
#line 1479 "unused_args.m"
              transform_hlds__unused_args__CallInfo_44 = ((MR_Word) transform_hlds__unused_args__conv14_CallInfo_44);
#line 1479 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1479 "unused_args.m"
            }
#line 1479 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1480 "unused_args.m"
            {
#line 1480 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 0)));
#line 1480 "unused_args.m"
              MR_Integer transform_hlds__unused_args__NewProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 1)));
#line 1480 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 2)));
#line 1480 "unused_args.m"
              MR_Word transform_hlds__unused_args__UnusedArgs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 3)));
#line 1480 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgVars_49;
#line 1480 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_113;

#line 1481 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1482 "unused_args.m"
              {
#line 1482 "unused_args.m"
                transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_48, transform_hlds__unused_args__ArgVars0_39, &transform_hlds__unused_args__ArgVars_49);
              }
#line 1483 "unused_args.m"
              {
#line 1483 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_45));
#line 1483 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_46));
#line 1483 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 2) = ((MR_Box) (transform_hlds__unused_args__ArgVars_49));
#line 1483 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 3) = ((MR_Box) (transform_hlds__unused_args__Builtin_40));
#line 1483 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 4) = ((MR_Box) (transform_hlds__unused_args__UnifyC_41));
#line 1483 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 5) = ((MR_Box) (transform_hlds__unused_args__NewName_47));
#line 1483 "unused_args.m"
              }
#line 1485 "unused_args.m"
              {
#line 1485 "unused_args.m"
                MR_Word base;
#line 1485 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1485 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_113));
#line 1485 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1485 "unused_args.m"
              }
#line 1480 "unused_args.m"
            }
#line 1479 "unused_args.m"
          else
#line 1487 "unused_args.m"
            {
#line 1487 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1488 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1487 "unused_args.m"
            }
#line 1477 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1477 "unused_args.m"
        }
#line 1433 "unused_args.m"
        break;
#line 1433 "unused_args.m"
      case (MR_Integer) 3:
#line 1433 "unused_args.m"
#line 1433 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)))) {
#line 1433 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "unused_args.m"
          case (MR_Integer) 0:
#line 1503 "unused_args.m"
            {
#line 1504 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1505 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1503 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1503 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 1:
#line 1508 "unused_args.m"
            {
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_141_141 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_150_150;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_151_151;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_152_152;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_153_153;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Attributes_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__MaybeTraceRuntimeCond_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 6)));
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Impl_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 7)));
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst0_68;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_69;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst1_70;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgsChanged_71;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs_72;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst_73;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalInfo_74;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_82_82;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_118;
#line 1508 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1508 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1513 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv6_Subst1_70;
#line 1513 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82;
#line 1513 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv4_ArgsChanged_71;
#line 1515 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv13_Subst_73;
#line 1515 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77;
#line 1515 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv11_Changed_9;

#line 1512 "unused_args.m"
              {
#line 1512 "unused_args.m"
                mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_141_141, transform_hlds__unused_args__TypeInfo_141_141, &transform_hlds__unused_args__Subst0_68);
              }
#line 11041 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_150_150 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 11043 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeInfo_151_151 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[5];
#line 11045 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_152_152 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0;
#line 11047 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_153_153 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 1513 "unused_args.m"
              {
#line 1513 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[12], transform_hlds__unused_args__Args0_63, &transform_hlds__unused_args__Args_69, ((MR_Box) (transform_hlds__unused_args__Subst0_68)), &transform_hlds__unused_args__conv6_Subst1_70, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_0_76)), &transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__conv4_ArgsChanged_71);
              }
#line 1513 "unused_args.m"
              transform_hlds__unused_args__Subst1_70 = ((MR_Word) transform_hlds__unused_args__conv6_Subst1_70);
#line 1513 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Info_82_82 = ((MR_Word) transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82);
#line 1513 "unused_args.m"
              transform_hlds__unused_args__ArgsChanged_71 = ((MR_Word) transform_hlds__unused_args__conv4_ArgsChanged_71);
#line 1515 "unused_args.m"
              {
#line 1515 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[13], transform_hlds__unused_args__ExtraArgs0_64, &transform_hlds__unused_args__ExtraArgs_72, ((MR_Box) (transform_hlds__unused_args__Subst1_70)), &transform_hlds__unused_args__conv13_Subst_73, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_82_82)), &transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77, ((MR_Box) (transform_hlds__unused_args__ArgsChanged_71)), &transform_hlds__unused_args__conv11_Changed_9);
              }
#line 1515 "unused_args.m"
              transform_hlds__unused_args__Subst_73 = ((MR_Word) transform_hlds__unused_args__conv13_Subst_73);
#line 1515 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = ((MR_Word) transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77);
#line 1515 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = ((MR_Word) transform_hlds__unused_args__conv11_Changed_9);
#line 1517 "unused_args.m"
              {
#line 1517 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__unused_args__Attributes_62));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_119));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 3) = ((MR_Box) (transform_hlds__unused_args__ProcId_120));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 4) = ((MR_Box) (transform_hlds__unused_args__Args_69));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 5) = ((MR_Box) (transform_hlds__unused_args__ExtraArgs_72));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 6) = ((MR_Box) (transform_hlds__unused_args__MaybeTraceRuntimeCond_65));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 7) = ((MR_Box) (transform_hlds__unused_args__Impl_66));
#line 1517 "unused_args.m"
              }
#line 1519 "unused_args.m"
              {
#line 1519 "unused_args.m"
                hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, transform_hlds__unused_args__Subst_73, transform_hlds__unused_args__GoalInfo0_11, &transform_hlds__unused_args__GoalInfo_74);
              }
#line 1520 "unused_args.m"
              {
#line 1520 "unused_args.m"
                MR_Word base;
#line 1520 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1520 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1520 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_118));
#line 1520 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_74));
#line 1520 "unused_args.m"
              }
#line 1508 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 2:
#line 1429 "unused_args.m"
            {
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_14;
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_15;

#line 1430 "unused_args.m"
              {
#line 1430 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_13, &transform_hlds__unused_args__Goals_14, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1431 "unused_args.m"
              {
#line 1431 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1431 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__unused_args__ConjType_12));
#line 1431 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goals_14));
#line 1431 "unused_args.m"
              }
#line 1432 "unused_args.m"
              {
#line 1432 "unused_args.m"
                MR_Word base;
#line 1432 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1432 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_15));
#line 1432 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1432 "unused_args.m"
              }
#line 1429 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 3:
#line 1434 "unused_args.m"
            {
#line 1434 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1434 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_105;
#line 1434 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_106;

#line 1435 "unused_args.m"
              {
#line 1435 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_104, &transform_hlds__unused_args__Goals_105, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1436 "unused_args.m"
              {
#line 1436 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1436 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_105));
#line 1436 "unused_args.m"
              }
#line 1437 "unused_args.m"
              {
#line 1437 "unused_args.m"
                MR_Word base;
#line 1437 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1437 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_106));
#line 1437 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1437 "unused_args.m"
              }
#line 1434 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 4:
#line 1444 "unused_args.m"
            {
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases_21;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_108;

#line 1445 "unused_args.m"
              {
#line 1445 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_20, &transform_hlds__unused_args__Cases_21, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1446 "unused_args.m"
              {
#line 1446 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1446 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 1) = ((MR_Box) (transform_hlds__unused_args__Var_18));
#line 1446 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 2) = ((MR_Box) (transform_hlds__unused_args__CanFail_19));
#line 1446 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 3) = ((MR_Box) (transform_hlds__unused_args__Cases_21));
#line 1446 "unused_args.m"
              }
#line 1447 "unused_args.m"
              {
#line 1447 "unused_args.m"
                MR_Word base;
#line 1447 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1447 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_108));
#line 1447 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1447 "unused_args.m"
              }
#line 1444 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 5:
#line 1457 "unused_args.m"
            {
#line 1457 "unused_args.m"
              MR_Word transform_hlds__unused_args__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1457 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1458 "unused_args.m"
              MR_Word transform_hlds__unused_args__TermVar_34;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_88_88;

#line 1459 "unused_args.m"
              transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1459 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1459 "unused_args.m"
                {
#line 1459 "unused_args.m"
                  transform_hlds__unused_args__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 1)));
#line 1459 "unused_args.m"
                  transform_hlds__unused_args__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 2)));
#line 1459 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_88_88 == (MR_Integer) 1);
#line 1459 "unused_args.m"
                }
#line 1458 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1461 "unused_args.m"
                {
#line 1461 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UnusedVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1461 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1461 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1461 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1461 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));

#line 1462 "unused_args.m"
                  {
#line 1462 "unused_args.m"
                    transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__TermVar_34)), transform_hlds__unused_args__UnusedVars_35);
                  }
#line 1462 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 1463 "unused_args.m"
                    {
#line 1463 "unused_args.m"
                      {
#line 1463 "unused_args.m"
                        *transform_hlds__unused_args__Goal_7 = hlds__make_goal__true_goal_0_f_0();
                      }
#line 1465 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1463 "unused_args.m"
                    }
#line 1462 "unused_args.m"
                  else
#line 1467 "unused_args.m"
                    {
#line 1467 "unused_args.m"
                      *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1468 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1467 "unused_args.m"
                    }
#line 1461 "unused_args.m"
                  *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1461 "unused_args.m"
                }
#line 1458 "unused_args.m"
              else
#line 1471 "unused_args.m"
                {
#line 1471 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_36;
#line 1471 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GoalExpr_110;

#line 1471 "unused_args.m"
                  {
#line 1471 "unused_args.m"
                    transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__SubGoal0_33, &transform_hlds__unused_args__SubGoal_36, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
                  }
#line 1472 "unused_args.m"
                  {
#line 1472 "unused_args.m"
                    transform_hlds__unused_args__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1472 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 1) = ((MR_Box) (transform_hlds__unused_args__Reason_32));
#line 1472 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 2) = ((MR_Box) (transform_hlds__unused_args__SubGoal_36));
#line 1472 "unused_args.m"
                  }
#line 1473 "unused_args.m"
                  {
#line 1473 "unused_args.m"
                    MR_Word base;
#line 1473 "unused_args.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "unused_args.m"
                    *transform_hlds__unused_args__Goal_7 = base;
#line 1473 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_110));
#line 1473 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1473 "unused_args.m"
                  }
#line 1471 "unused_args.m"
                }
#line 1457 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 6:
#line 1449 "unused_args.m"
            {
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond_26;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed1_27;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then_28;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed2_29;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else_30;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed3_31;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_90_90;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_91_91;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_93_93;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_94_94;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_95_95;
#line 1449 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_109;

#line 1450 "unused_args.m"
              {
#line 1450 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Cond0_23, &transform_hlds__unused_args__Cond_26, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, &transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__Changed1_27);
              }
#line 1451 "unused_args.m"
              {
#line 1451 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Then0_24, &transform_hlds__unused_args__Then_28, transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, &transform_hlds__unused_args__Changed2_29);
              }
#line 1452 "unused_args.m"
              {
#line 1452 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Else0_25, &transform_hlds__unused_args__Else_30, transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, transform_hlds__unused_args__STATE_VARIABLE_Info_77, &transform_hlds__unused_args__Changed3_31);
              }
#line 1453 "unused_args.m"
              {
#line 1453 "unused_args.m"
                transform_hlds__unused_args__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 0) = ((MR_Box) (transform_hlds__unused_args__Changed3_31));
#line 1453 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "unused_args.m"
              }
#line 1453 "unused_args.m"
              {
#line 1453 "unused_args.m"
                transform_hlds__unused_args__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 0) = ((MR_Box) (transform_hlds__unused_args__Changed2_29));
#line 1453 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 1) = ((MR_Box) (transform_hlds__unused_args__V_95_95));
#line 1453 "unused_args.m"
              }
#line 1453 "unused_args.m"
              {
#line 1453 "unused_args.m"
                transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__Changed1_27));
#line 1453 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 1) = ((MR_Box) (transform_hlds__unused_args__V_94_94));
#line 1453 "unused_args.m"
              }
#line 1453 "unused_args.m"
              {
#line 1453 "unused_args.m"
                mercury__bool__or_list_2_p_0(transform_hlds__unused_args__V_93_93, transform_hlds__unused_args__Changed_9);
              }
#line 1454 "unused_args.m"
              {
#line 1454 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1454 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 1) = ((MR_Box) (transform_hlds__unused_args__Vars_22));
#line 1454 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 2) = ((MR_Box) (transform_hlds__unused_args__Cond_26));
#line 1454 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 3) = ((MR_Box) (transform_hlds__unused_args__Then_28));
#line 1454 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 4) = ((MR_Box) (transform_hlds__unused_args__Else_30));
#line 1454 "unused_args.m"
              }
#line 1455 "unused_args.m"
              {
#line 1455 "unused_args.m"
                MR_Word base;
#line 1455 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1455 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_109));
#line 1455 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1455 "unused_args.m"
              }
#line 1449 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
          case (MR_Integer) 7:
#line 1522 "unused_args.m"
            {
#line 1524 "unused_args.m"
              {
#line 1524 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_fixup_goal_expr\'/5", (MR_String) "shorthand");
#line 1524 "unused_args.m"
                return;
              }
#line 1522 "unused_args.m"
            }
#line 1433 "unused_args.m"
            break;
#line 1433 "unused_args.m"
        }
#line 1433 "unused_args.m"
        break;
#line 1433 "unused_args.m"
    }
#line 1426 "unused_args.m"
  }
#line 1423 "unused_args.m"
}

#line 1407 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1407 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1407 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1407 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1407 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1407 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1407 "unused_args.m"
{
#line 1410 "unused_args.m"
  {
#line 1410 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1410 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_10;
#line 1410 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr1_11;
#line 1410 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_12;
#line 1410 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo_14;

#line 1411 "unused_args.m"
    {
#line 1411 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_6, &transform_hlds__unused_args__Goal1_10, transform_hlds__unused_args__STATE_VARIABLE_Info_0_15, transform_hlds__unused_args__STATE_VARIABLE_Info_16, transform_hlds__unused_args__Changed_9);
    }
#line 1412 "unused_args.m"
    transform_hlds__unused_args__GoalExpr1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 0)));
#line 1412 "unused_args.m"
    transform_hlds__unused_args__GoalInfo1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 1)));
#line 1417 "unused_args.m"
#line 1417 "unused_args.m"
    switch (*transform_hlds__unused_args__Changed_9) {
#line 1417 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1417 "unused_args.m"
      case (MR_Integer) 0:
#line 1419 "unused_args.m"
        transform_hlds__unused_args__GoalInfo_14 = transform_hlds__unused_args__GoalInfo1_12;
#line 1417 "unused_args.m"
        break;
#line 1417 "unused_args.m"
      case (MR_Integer) 1:
#line 1414 "unused_args.m"
        {
#line 1414 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 2)));
#line 1414 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap0_26;
#line 1414 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap_27;
#line 1415 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 0)));
#line 1415 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 1)));
#line 1415 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 3)));
#line 1415 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 4)));

#line 1701 "unused_args.m"
          {
#line 1701 "unused_args.m"
            transform_hlds__unused_args__InstMap0_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_12);
          }
#line 1702 "unused_args.m"
          {
#line 1702 "unused_args.m"
            hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_13, transform_hlds__unused_args__InstMap0_26, &transform_hlds__unused_args__InstMap_27);
          }
#line 1703 "unused_args.m"
          {
#line 1703 "unused_args.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_27, transform_hlds__unused_args__GoalInfo1_12, &transform_hlds__unused_args__GoalInfo_14);
          }
#line 1414 "unused_args.m"
        }
#line 1417 "unused_args.m"
        break;
#line 1417 "unused_args.m"
    }
#line 1421 "unused_args.m"
    {
#line 1421 "unused_args.m"
      MR_Word base;
#line 1421 "unused_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "unused_args.m"
      *transform_hlds__unused_args__Goal_7 = base;
#line 1421 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_11));
#line 1421 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_14));
#line 1421 "unused_args.m"
    }
#line 1410 "unused_args.m"
  }
#line 1407 "unused_args.m"
}

#line 1333 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__OldPredProcId_7,
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_8,
#line 1333 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_9,
#line 1333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_10)
#line 1333 "unused_args.m"
{
#line 1337 "unused_args.m"
  {
#line 1337 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_12;
#line 1337 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_13;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__UsageInfos_16;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedVars_17;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_18;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds0_21;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs0_22;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_24;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_25;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_27;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_28;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_29;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo0_31;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo_32;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__Changed_33;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet1_37;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_38;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs_45;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_46;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds_47;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53;
#line 1337 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54;
#line 1339 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldProcCallInfo_11;
#line 1339 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_OldProcCallInfo_11;
#line 1345 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_UsageInfos_16;
#line 1372 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_34_34;
#line 1372 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_35_35;
#line 1372 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_36_36;

#line 1339 "unused_args.m"
    {
#line 1339 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_8, ((MR_Box) (transform_hlds__unused_args__OldPredProcId_7)), &transform_hlds__unused_args__conv0_OldProcCallInfo_11);
    }
#line 1339 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1339 "unused_args.m"
      {
#line 1339 "unused_args.m"
        transform_hlds__unused_args__OldProcCallInfo_11 = ((MR_Word) transform_hlds__unused_args__conv0_OldProcCallInfo_11);
#line 1339 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1339 "unused_args.m"
      }
#line 1339 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1340 "unused_args.m"
      {
#line 1340 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1340 "unused_args.m"
        transform_hlds__unused_args__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 0)));
#line 1340 "unused_args.m"
        transform_hlds__unused_args__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 1)));
#line 1340 "unused_args.m"
        transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 2)));
#line 1340 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 3)));
#line 1340 "unused_args.m"
      }
#line 1339 "unused_args.m"
    else
#line 1342 "unused_args.m"
      {
#line 1342 "unused_args.m"
        transform_hlds__unused_args__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldPredProcId_7, (MR_Integer) 0)));
#line 1342 "unused_args.m"
        transform_hlds__unused_args__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldPredProcId_7, (MR_Integer) 1)));
#line 1343 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1342 "unused_args.m"
      }
#line 1345 "unused_args.m"
    {
#line 1345 "unused_args.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_6, ((MR_Box) (transform_hlds__unused_args__OldPredProcId_7)), &transform_hlds__unused_args__conv1_UsageInfos_16);
    }
#line 1345 "unused_args.m"
    transform_hlds__unused_args__UsageInfos_16 = ((MR_Word) transform_hlds__unused_args__conv1_UsageInfos_16);
#line 1346 "unused_args.m"
    {
#line 1346 "unused_args.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__UsageInfos_16, &transform_hlds__unused_args__UnusedVars_17);
    }
#line 1347 "unused_args.m"
    {
#line 1347 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo0_9, transform_hlds__unused_args__PredId_12, transform_hlds__unused_args__ProcId_13, &transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 1349 "unused_args.m"
    {
#line 1349 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1350 "unused_args.m"
    {
#line 1350 "unused_args.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__unused_args__ModuleInfo0_9, &transform_hlds__unused_args__Preds0_21);
    }
#line 1351 "unused_args.m"
    {
#line 1351 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__Procs0_22);
    }
#line 1353 "unused_args.m"
    {
#line 1353 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1354 "unused_args.m"
    {
#line 1354 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__ArgModes0_24);
    }
#line 1355 "unused_args.m"
    {
#line 1355 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__VarSet0_25);
    }
#line 1356 "unused_args.m"
    {
#line 1356 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51);
    }
#line 1357 "unused_args.m"
    {
#line 1357 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_15, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__HeadVars_27);
    }
#line 1358 "unused_args.m"
    {
#line 1358 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_15, transform_hlds__unused_args__ArgModes0_24, &transform_hlds__unused_args__ArgModes_28);
    }
#line 1364 "unused_args.m"
    {
#line 1364 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_27, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 1365 "unused_args.m"
    {
#line 1365 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_28, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 1369 "unused_args.m"
    {
#line 1369 "unused_args.m"
      transform_hlds__unused_args__FixupInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1369 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo0_9));
#line 1369 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 1) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_8));
#line 1369 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 2) = ((MR_Box) (transform_hlds__unused_args__UnusedVars_17));
#line 1369 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet0_25));
#line 1369 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes0_20));
#line 1369 "unused_args.m"
    }
#line 1371 "unused_args.m"
    {
#line 1371 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51, &transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54, transform_hlds__unused_args__FixupInfo0_31, &transform_hlds__unused_args__FixupInfo_32, &transform_hlds__unused_args__Changed_33);
    }
#line 1372 "unused_args.m"
    transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 0)));
#line 1372 "unused_args.m"
    transform_hlds__unused_args__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 1)));
#line 1372 "unused_args.m"
    transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 2)));
#line 1372 "unused_args.m"
    transform_hlds__unused_args__VarSet1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 3)));
#line 1372 "unused_args.m"
    transform_hlds__unused_args__VarTypes1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 4)));
#line 1385 "unused_args.m"
#line 1385 "unused_args.m"
    switch (transform_hlds__unused_args__Changed_33) {
#line 1385 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1385 "unused_args.m"
      case (MR_Integer) 0:
#line 1386 "unused_args.m"
        transform_hlds__unused_args__ProcInfo_29 = transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53;
#line 1385 "unused_args.m"
        break;
#line 1385 "unused_args.m"
      case (MR_Integer) 1:
#line 1374 "unused_args.m"
        {
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__NonLocals_39;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps0_40;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarSet_42;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarTypes_43;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58;
#line 1374 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59;
#line 1378 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_41_41;

#line 1376 "unused_args.m"
          {
#line 1376 "unused_args.m"
            transform_hlds__unused_args__NonLocals_39 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__HeadVars_27);
          }
#line 1377 "unused_args.m"
          {
#line 1377 "unused_args.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__unused_args__RttiVarMaps0_40);
          }
#line 1378 "unused_args.m"
          {
#line 1378 "unused_args.m"
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__NonLocals_39, &transform_hlds__unused_args__V_41_41, transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54, &transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56, transform_hlds__unused_args__VarSet1_37, &transform_hlds__unused_args__VarSet_42, transform_hlds__unused_args__VarTypes1_38, &transform_hlds__unused_args__VarTypes_43, transform_hlds__unused_args__RttiVarMaps0_40, &transform_hlds__unused_args__RttiVarMaps_44);
          }
#line 1381 "unused_args.m"
          {
#line 1381 "unused_args.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57);
          }
#line 1382 "unused_args.m"
          {
#line 1382 "unused_args.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_42, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58);
          }
#line 1383 "unused_args.m"
          {
#line 1383 "unused_args.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_43, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59);
          }
#line 1384 "unused_args.m"
          {
#line 1384 "unused_args.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__unused_args__ProcInfo_29);
          }
#line 1374 "unused_args.m"
        }
#line 1385 "unused_args.m"
        break;
#line 1385 "unused_args.m"
    }
#line 1391 "unused_args.m"
    {
#line 1391 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ProcInfo_29)), transform_hlds__unused_args__Procs0_22, &transform_hlds__unused_args__Procs_45);
    }
#line 1392 "unused_args.m"
    {
#line 1392 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__Procs_45, transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__PredInfo_46);
    }
#line 1393 "unused_args.m"
    {
#line 1393 "unused_args.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), ((MR_Box) (transform_hlds__unused_args__PredInfo_46)), transform_hlds__unused_args__Preds0_21, &transform_hlds__unused_args__Preds_47);
    }
#line 1394 "unused_args.m"
    {
#line 1394 "unused_args.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__unused_args__Preds_47, transform_hlds__unused_args__ModuleInfo0_9, transform_hlds__unused_args__ModuleInfo_10);
    }
#line 1337 "unused_args.m"
  }
#line 1333 "unused_args.m"
}

#line 1308 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_10,
#line 1308 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18,
#line 1308 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19)
#line 1308 "unused_args.m"
{
#line 1312 "unused_args.m"
  {
#line 1312 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1328 "unused_args.m"
#line 1328 "unused_args.m"
    switch (transform_hlds__unused_args__VeryVerbose_7) {
#line 1328 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1328 "unused_args.m"
      case (MR_Integer) 0:
#line 1329 "unused_args.m"
        {
#line 1329 "unused_args.m"
        }
#line 1328 "unused_args.m"
        break;
#line 1328 "unused_args.m"
      case (MR_Integer) 1:
#line 1315 "unused_args.m"
        {
#line 1315 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_10, (MR_Integer) 0)));
#line 1315 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_10, (MR_Integer) 1)));
#line 1315 "unused_args.m"
          MR_String transform_hlds__unused_args__Name_15;
#line 1315 "unused_args.m"
          MR_Integer transform_hlds__unused_args__Arity_16;
#line 1315 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcInt_17;

#line 1317 "unused_args.m"
          {
#line 1317 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "% Fixing up \140");
          }
#line 1318 "unused_args.m"
          {
#line 1318 "unused_args.m"
            transform_hlds__unused_args__Name_15 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__PredId_13);
          }
#line 1319 "unused_args.m"
          {
#line 1319 "unused_args.m"
            transform_hlds__unused_args__Arity_16 = hlds__hlds_module__predicate_arity_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__PredId_13);
          }
#line 1320 "unused_args.m"
          {
#line 1320 "unused_args.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_14, &transform_hlds__unused_args__ProcInt_17);
          }
#line 1321 "unused_args.m"
          {
#line 1321 "unused_args.m"
            mercury__io__write_string_3_p_0(transform_hlds__unused_args__Name_15);
          }
#line 1322 "unused_args.m"
          {
#line 1322 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 1323 "unused_args.m"
          {
#line 1323 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__Arity_16);
          }
#line 1324 "unused_args.m"
          {
#line 1324 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "\' in mode ");
          }
#line 1325 "unused_args.m"
          {
#line 1325 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__ProcInt_17);
          }
#line 1326 "unused_args.m"
          {
#line 1326 "unused_args.m"
            mercury__io__write_char_3_p_0((MR_Char) 10);
          }
#line 1315 "unused_args.m"
        }
#line 1328 "unused_args.m"
        break;
#line 1328 "unused_args.m"
    }
#line 1331 "unused_args.m"
    {
#line 1331 "unused_args.m"
      transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(transform_hlds__unused_args__VarUsage_8, transform_hlds__unused_args__PredProcId_10, transform_hlds__unused_args__ProcCallInfo_9, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19);
    }
#line 1312 "unused_args.m"
  }
#line 1308 "unused_args.m"
}

#line 1305 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
#line 1305 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1305 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1305 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1305 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1305 "unused_args.m"
{
#line 1305 "unused_args.m"
  {
#line 1305 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1305 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 1305 "unused_args.m"
    {
#line 1305 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 1305 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 1305 "unused_args.m"
  }
#line 1305 "unused_args.m"
}

#line 1299 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcIds_9,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_10,
#line 1299 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12,
#line 1299 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13)
#line 1299 "unused_args.m"
{
#line 1304 "unused_args.m"
  {
#line 1304 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1304 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1305 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13;

#line 1305 "unused_args.m"
    {
#line 1305 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[1]));
#line 1305 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1));
#line 1305 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1305 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__VeryVerbose_7));
#line 1305 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__VarUsage_8));
#line 1305 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_10));
#line 1305 "unused_args.m"
    }
#line 1305 "unused_args.m"
    {
#line 1305 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__PredProcIds_9, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13);
    }
#line 1305 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13);
#line 1304 "unused_args.m"
  }
#line 1299 "unused_args.m"
}

#line 1286 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1286 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1286 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1286 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1286 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4)
#line 1286 "unused_args.m"
{
#line 1289 "unused_args.m"
  {
#line 1289 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1289 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1289 "unused_args.m"
    else
#line 1290 "unused_args.m"
      {
#line 1290 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1290 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1290 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_3 + (MR_Integer) 1);
#line 1290 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgsTail_13;

#line 1291 "unused_args.m"
        {
#line 1291 "unused_args.m"
          transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVars_1, transform_hlds__unused_args__HeadVars_9, transform_hlds__unused_args__NextArg_12, &transform_hlds__unused_args__UnusedArgsTail_13);
        }
#line 1293 "unused_args.m"
        {
#line 1293 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalVars_1, ((MR_Box) (transform_hlds__unused_args__HeadVar_8)));
        }
#line 1293 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1294 "unused_args.m"
          {
#line 1294 "unused_args.m"
            MR_Word base;
#line 1294 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__4_4 = base;
#line 1294 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__ArgNo_3));
#line 1294 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgsTail_13));
#line 1294 "unused_args.m"
          }
#line 1293 "unused_args.m"
        else
#line 1296 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__UnusedArgsTail_13;
#line 1290 "unused_args.m"
      }
#line 1289 "unused_args.m"
  }
#line 1286 "unused_args.m"
}

#line 1229 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1229 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1229 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1229 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34)
#line 1229 "unused_args.m"
{
#line 1234 "unused_args.m"
  {
#line 1234 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 0)));
#line 1234 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 1)));
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_13;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo0_14;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo0_15;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs0_16;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_17;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_18;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo1_19;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_20;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_21;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs_23;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo_24;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_25;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredId_26;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable1_27;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_28;
#line 1234 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_29;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredSymName_30;
#line 1234 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_42_42;

#line 1236 "unused_args.m"
    {
#line 1236 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__ProcInfo0_14);
    }
#line 1238 "unused_args.m"
    {
#line 1238 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_8, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[0]))), transform_hlds__unused_args__OptProc_7, transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__NewPredInfo0_15);
    }
#line 1241 "unused_args.m"
    {
#line 1241 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewProcs0_16);
    }
#line 1244 "unused_args.m"
    {
#line 1244 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__HeadVars0_17);
    }
#line 1245 "unused_args.m"
    {
#line 1245 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars0_17, &transform_hlds__unused_args__HeadVars_18);
    }
#line 1246 "unused_args.m"
    {
#line 1246 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_18, transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__ProcInfo1_19);
    }
#line 1247 "unused_args.m"
    {
#line 1247 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ArgModes0_20);
    }
#line 1248 "unused_args.m"
    {
#line 1248 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgModes0_20, &transform_hlds__unused_args__ArgModes_21);
    }
#line 1249 "unused_args.m"
    {
#line 1249 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_21, transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ProcInfo_22);
    }
#line 1250 "unused_args.m"
    {
#line 1250 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_12, ((MR_Box) (transform_hlds__unused_args__ProcInfo_22)), transform_hlds__unused_args__NewProcs0_16, &transform_hlds__unused_args__NewProcs_23);
    }
#line 1251 "unused_args.m"
    {
#line 1251 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_23, transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1254 "unused_args.m"
    {
#line 1254 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__unused_args__PredTable0_25);
    }
#line 1255 "unused_args.m"
    {
#line 1255 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_24, &transform_hlds__unused_args__NewPredId_26, transform_hlds__unused_args__PredTable0_25, &transform_hlds__unused_args__PredTable1_27);
    }
#line 1256 "unused_args.m"
    {
#line 1256 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable1_27, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);
    }
#line 1257 "unused_args.m"
    {
#line 1257 "unused_args.m"
      transform_hlds__unused_args__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1258 "unused_args.m"
    {
#line 1258 "unused_args.m"
      transform_hlds__unused_args__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1259 "unused_args.m"
    {
#line 1259 "unused_args.m"
      transform_hlds__unused_args__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_28));
#line 1259 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_29));
#line 1259 "unused_args.m"
    }
#line 1262 "unused_args.m"
    {
#line 1262 "unused_args.m"
      transform_hlds__unused_args__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_26));
#line 1262 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1262 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_30));
#line 1262 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1262 "unused_args.m"
    }
#line 1261 "unused_args.m"
    {
#line 1261 "unused_args.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__OptProc_7)), ((MR_Box) (transform_hlds__unused_args__V_42_42)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32);
    }
#line 1234 "unused_args.m"
  }
#line 1229 "unused_args.m"
}

#line 1190 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1190 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1190 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1190 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1190 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35)
#line 1190 "unused_args.m"
{
#line 1194 "unused_args.m"
  {
#line 1194 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_14;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_15;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_17;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_18;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_19;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_21;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_22;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_23;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_24;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_25;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_26;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_27;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_28;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_30;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_31;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_32;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_33;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_39_39;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_41_41;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44;
#line 1197 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_16;
#line 1218 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_29_29;

#line 1195 "unused_args.m"
    {
#line 1195 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__HeadVars_14);
    }
#line 1196 "unused_args.m"
    {
#line 1196 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Goal0_15);
    }
#line 1197 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 0)));
#line 1197 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 1)));
#line 1203 "unused_args.m"
    {
#line 1203 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Determinism_18);
    }
#line 1204 "unused_args.m"
    {
#line 1204 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_18, transform_hlds__unused_args__GoalInfo0_17, &transform_hlds__unused_args__GoalInfo1_19);
    }
#line 1206 "unused_args.m"
    {
#line 1206 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1207 "unused_args.m"
    {
#line 1207 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NonLocals_21);
    }
#line 1208 "unused_args.m"
    {
#line 1208 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__VarTypeList_22);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_14, transform_hlds__unused_args__VarTypeList_22, &transform_hlds__unused_args__VarTypes1_23);
    }
#line 1212 "unused_args.m"
    {
#line 1212 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarSet0_24);
    }
#line 1213 "unused_args.m"
    {
#line 1213 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__RttiVarMaps0_25);
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NewHeadVars_26);
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_11));
#line 1216 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_12));
#line 1216 "unused_args.m"
    }
#line 1215 "unused_args.m"
    {
#line 1215 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_9));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_10));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_26));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1215 "unused_args.m"
    }
#line 1217 "unused_args.m"
    {
#line 1217 "unused_args.m"
      transform_hlds__unused_args__Goal1_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_27));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_19));
#line 1217 "unused_args.m"
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      transform_hlds__unused_args__V_41_41 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_21);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__V_29_29, transform_hlds__unused_args__Goal1_28, &transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__VarSet0_24, &transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__VarTypes1_23, &transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__RttiVarMaps0_25, &transform_hlds__unused_args__RttiVarMaps_33);
    }
#line 1221 "unused_args.m"
    {
#line 1221 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42);
    }
#line 1222 "unused_args.m"
    {
#line 1222 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43);
    }
#line 1223 "unused_args.m"
    {
#line 1223 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44);
    }
#line 1224 "unused_args.m"
    {
#line 1224 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_33, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44, transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);
    }
#line 1194 "unused_args.m"
  }
#line 1190 "unused_args.m"
}

#line 1096 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1096 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1096 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1096 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1096 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36)
#line 1096 "unused_args.m"
{
#line 1101 "unused_args.m"
  {
#line 1101 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo0_20;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_21;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc0_22;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodHeadVars_24;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc1_25;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_26;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodArgModes_27;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc_28;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs0_29;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs_30;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo_31;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_32;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable_34;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_38_38;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_55;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_56;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_58;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_59;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_60;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_61;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_62;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_63;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_64;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_65;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_66;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_67;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_68;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_69;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_71;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_72;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_73;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_74;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_78_78;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_80_80;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82;
#line 1101 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83;
#line 1197 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_57;
#line 1218 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_70_70;
#line 1119 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_33_33;

#line 1105 "unused_args.m"
    {
#line 1105 "unused_args.m"
      transform_hlds__unused_args__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 1105 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1105 "unused_args.m"
    }
#line 1104 "unused_args.m"
    {
#line 1104 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs2_18, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))), transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__OrigPredInfo_15, &transform_hlds__unused_args__ExtraPredInfo0_20);
    }
#line 1106 "unused_args.m"
    {
#line 1106 "unused_args.m"
      transform_hlds__unused_args__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_15);
    }
#line 1195 "unused_args.m"
    {
#line 1195 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars_55);
    }
#line 1196 "unused_args.m"
    {
#line 1196 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Goal0_56);
    }
#line 1197 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_56, (MR_Integer) 0)));
#line 1197 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_56, (MR_Integer) 1)));
#line 1203 "unused_args.m"
    {
#line 1203 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Determinism_59);
    }
#line 1204 "unused_args.m"
    {
#line 1204 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_59, transform_hlds__unused_args__GoalInfo0_58, &transform_hlds__unused_args__GoalInfo1_60);
    }
#line 1206 "unused_args.m"
    {
#line 1206 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarTypes0_61);
    }
#line 1207 "unused_args.m"
    {
#line 1207 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__NonLocals_62);
    }
#line 1208 "unused_args.m"
    {
#line 1208 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_61, transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__VarTypeList_63);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_55, transform_hlds__unused_args__VarTypeList_63, &transform_hlds__unused_args__VarTypes1_64);
    }
#line 1212 "unused_args.m"
    {
#line 1212 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarSet0_65);
    }
#line 1213 "unused_args.m"
    {
#line 1213 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__RttiVarMaps0_66);
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_17, transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__NewHeadVars_67);
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      transform_hlds__unused_args__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_78_78, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_21));
#line 1216 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_78_78, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_14));
#line 1216 "unused_args.m"
    }
#line 1215 "unused_args.m"
    {
#line 1215 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_12));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_67));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 5) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1215 "unused_args.m"
    }
#line 1217 "unused_args.m"
    {
#line 1217 "unused_args.m"
      transform_hlds__unused_args__Goal1_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_69, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_68));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_69, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_60));
#line 1217 "unused_args.m"
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      transform_hlds__unused_args__V_80_80 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_62);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_80_80, &transform_hlds__unused_args__V_70_70, transform_hlds__unused_args__Goal1_69, &transform_hlds__unused_args__Goal_71, transform_hlds__unused_args__VarSet0_65, &transform_hlds__unused_args__VarSet_72, transform_hlds__unused_args__VarTypes1_64, &transform_hlds__unused_args__VarTypes_73, transform_hlds__unused_args__RttiVarMaps0_66, &transform_hlds__unused_args__RttiVarMaps_74);
    }
#line 1221 "unused_args.m"
    {
#line 1221 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_71, transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81);
    }
#line 1222 "unused_args.m"
    {
#line 1222 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_72, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82);
    }
#line 1223 "unused_args.m"
    {
#line 1223 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_73, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83);
    }
#line 1224 "unused_args.m"
    {
#line 1224 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_74, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83, &transform_hlds__unused_args__ExtraProc0_22);
    }
#line 1109 "unused_args.m"
    {
#line 1109 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1110 "unused_args.m"
    {
#line 1110 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__IntermodHeadVars_24);
    }
#line 1111 "unused_args.m"
    {
#line 1111 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__IntermodHeadVars_24, transform_hlds__unused_args__ExtraProc0_22, &transform_hlds__unused_args__ExtraProc1_25);
    }
#line 1112 "unused_args.m"
    {
#line 1112 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__ArgModes0_26);
    }
#line 1113 "unused_args.m"
    {
#line 1113 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__ArgModes0_26, &transform_hlds__unused_args__IntermodArgModes_27);
    }
#line 1114 "unused_args.m"
    {
#line 1114 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__IntermodArgModes_27, transform_hlds__unused_args__ExtraProc1_25, &transform_hlds__unused_args__ExtraProc_28);
    }
#line 1115 "unused_args.m"
    {
#line 1115 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraProcs0_29);
    }
#line 1116 "unused_args.m"
    {
#line 1116 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ExtraProc_28)), transform_hlds__unused_args__ExtraProcs0_29, &transform_hlds__unused_args__ExtraProcs_30);
    }
#line 1117 "unused_args.m"
    {
#line 1117 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__ExtraProcs_30, transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraPredInfo_31);
    }
#line 1118 "unused_args.m"
    {
#line 1118 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__unused_args__PredTable0_32);
    }
#line 1119 "unused_args.m"
    {
#line 1119 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__ExtraPredInfo_31, &transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__PredTable0_32, &transform_hlds__unused_args__PredTable_34);
    }
#line 1120 "unused_args.m"
    {
#line 1120 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_34, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);
    }
#line 1101 "unused_args.m"
  }
#line 1096 "unused_args.m"
}

#line 1091 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1091 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1091 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1091 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1091 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1091 "unused_args.m"
{
#line 1091 "unused_args.m"
  {
#line 1091 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1091 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36;

#line 1091 "unused_args.m"
    {
#line 1091 "unused_args.m"
      transform_hlds__unused_args__make_intermod_proc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36);
    }
#line 1091 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36));
#line 1091 "unused_args.m"
  }
#line 1091 "unused_args.m"
}

#line 1024 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1024 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1024 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1024 "unused_args.m"
{
#line 1024 "unused_args.m"
  {
#line 1024 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1024 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1024 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_HeadVar__2_2;

#line 1024 "unused_args.m"
    {
#line 1024 "unused_args.m"
      transform_hlds__unused_args__conv2_HeadVar__2_2 = transform_hlds__unused_args__get_unused_args_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1024 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv2_HeadVar__2_2));
#line 1024 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1024 "unused_args.m"
  }
#line 1024 "unused_args.m"
}

#line 1019 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1019 "unused_args.m"
{
#line 1019 "unused_args.m"
  {
#line 1019 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1019 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 1019 "unused_args.m"
    {
#line 1019 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1019__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1019 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1019 "unused_args.m"
  }
#line 1019 "unused_args.m"
}

#line 1012 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1012 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1012 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1012 "unused_args.m"
{
#line 1012 "unused_args.m"
  {
#line 1012 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1012 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1012 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_LambdaHeadVar__2_55;

#line 1012 "unused_args.m"
    {
#line 1012 "unused_args.m"
      transform_hlds__unused_args__conv1_LambdaHeadVar__2_55 = transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1012__1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1012 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv1_LambdaHeadVar__2_55));
#line 1012 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1012 "unused_args.m"
  }
#line 1012 "unused_args.m"
}

#line 990 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 990 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 990 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 990 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49)
#line 990 "unused_args.m"
{
#line 995 "unused_args.m"
  {
#line 995 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_77_77 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 995 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_12;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigPredInfo_13;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigProcInfo_14;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_15;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_16;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_17;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodResultsTriples_21;
#line 995 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodOldArgLists_29;
#line 996 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_UnusedArgs_12;

#line 996 "unused_args.m"
    {
#line 996 "unused_args.m"
      mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_76_76, transform_hlds__unused_args__TypeInfo_77_77, transform_hlds__unused_args__UnusedArgInfo_7, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), &transform_hlds__unused_args__conv0_UnusedArgs_12);
    }
#line 996 "unused_args.m"
    transform_hlds__unused_args__UnusedArgs_12 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_12);
#line 997 "unused_args.m"
    {
#line 997 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__OrigProcInfo_14);
    }
#line 999 "unused_args.m"
    {
#line 999 "unused_args.m"
      transform_hlds__unused_args__PredModule_15 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
    }
#line 1001 "unused_args.m"
    {
#line 1001 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__Globals_16);
    }
#line 1002 "unused_args.m"
    {
#line 1002 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_16, (MR_Integer) 326, &transform_hlds__unused_args__Intermod_17);
    }
#line 1026 "unused_args.m"
#line 1026 "unused_args.m"
    switch (transform_hlds__unused_args__Intermod_17) {
#line 1026 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "unused_args.m"
      case (MR_Integer) 0:
#line 1027 "unused_args.m"
        {
#line 1028 "unused_args.m"
          transform_hlds__unused_args__IntermodResultsTriples_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1029 "unused_args.m"
          transform_hlds__unused_args__IntermodOldArgLists_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1027 "unused_args.m"
        }
#line 1026 "unused_args.m"
        break;
#line 1026 "unused_args.m"
      case (MR_Integer) 1:
#line 1004 "unused_args.m"
        {
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_80_80;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_18;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleId_19;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncId_20;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__IntermodOldAnswers_22;
#line 1004 "unused_args.m"
          MR_Integer transform_hlds__unused_args__PredArity_24;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncInfo_25;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__Answer_26;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__FilterUnused_27;
#line 1004 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_59_59;

#line 1005 "unused_args.m"
          {
#line 1005 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__AnalysisInfo0_18);
          }
#line 1007 "unused_args.m"
          {
#line 1007 "unused_args.m"
            transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__ModuleId_19, &transform_hlds__unused_args__FuncId_20);
          }
#line 1009 "unused_args.m"
          {
#line 1009 "unused_args.m"
            analysis__lookup_results_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_18, transform_hlds__unused_args__ModuleId_19, transform_hlds__unused_args__FuncId_20, &transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 13211 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_80_80 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;
#line 1012 "unused_args.m"
          {
#line 1012 "unused_args.m"
            transform_hlds__unused_args__IntermodOldAnswers_22 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[4], transform_hlds__unused_args__TypeCtorInfo_80_80, (MR_Word) &transform_hlds__unused_args_scalar_common_2[10], transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 1015 "unused_args.m"
          {
#line 1015 "unused_args.m"
            transform_hlds__unused_args__PredArity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
          }
#line 1016 "unused_args.m"
          transform_hlds__unused_args__FuncInfo_25 = (MR_Word) transform_hlds__unused_args__PredArity_24;
#line 1017 "unused_args.m"
          transform_hlds__unused_args__Answer_26 = (MR_Word) transform_hlds__unused_args__UnusedArgs_12;
#line 1019 "unused_args.m"
          {
#line 1019 "unused_args.m"
            transform_hlds__unused_args__FilterUnused_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[4]));
#line 1019 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2));
#line 1019 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1019 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 3) = ((MR_Box) (transform_hlds__unused_args__FuncInfo_25));
#line 1019 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 4) = ((MR_Box) (transform_hlds__unused_args__Answer_26));
#line 1019 "unused_args.m"
          }
#line 1025 "unused_args.m"
          {
#line 1025 "unused_args.m"
            transform_hlds__unused_args__V_59_59 = mercury__list__filter_2_f_0(transform_hlds__unused_args__TypeCtorInfo_80_80, transform_hlds__unused_args__FilterUnused_27, transform_hlds__unused_args__IntermodOldAnswers_22);
          }
#line 1024 "unused_args.m"
          {
#line 1024 "unused_args.m"
            transform_hlds__unused_args__IntermodOldArgLists_29 = mercury__list__map_2_f_0(transform_hlds__unused_args__TypeCtorInfo_80_80, transform_hlds__unused_args__TypeInfo_77_77, (MR_Word) &transform_hlds__unused_args_scalar_common_2[11], transform_hlds__unused_args__V_59_59);
          }
#line 1004 "unused_args.m"
        }
#line 1026 "unused_args.m"
        break;
#line 1026 "unused_args.m"
    }
#line 1034 "unused_args.m"
    if ((transform_hlds__unused_args__UnusedArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1033 "unused_args.m"
      {
#line 1033 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47 = transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46;
#line 1033 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48;
#line 1033 "unused_args.m"
      }
#line 1034 "unused_args.m"
    else
#line 1035 "unused_args.m"
      {
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredStatus0_32;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredStatus_35;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo0_36;
#line 1035 "unused_args.m"
        MR_String transform_hlds__unused_args__NewPredName_37;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs0_38;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs_39;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo_40;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable0_41;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredId_42;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable_43;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredSymName_44;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__ForwardingProcInfo_45;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_67_67;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_70_70;
#line 1038 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_60_60;
#line 1039 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_33_33;
#line 1039 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_34_34;
#line 1090 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 1036 "unused_args.m"
        {
#line 1036 "unused_args.m"
          hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__PredStatus0_32);
        }
#line 1039 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__IntermodResultsTriples_21)) == (MR_mktag((MR_Integer) 1)));
#line 1039 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1039 "unused_args.m"
          {
#line 1039 "unused_args.m"
            transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 0)));
#line 1039 "unused_args.m"
            transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 1)));
#line 1040 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodOldArgLists_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1038 "unused_args.m"
              {
#line 1038 "unused_args.m"
                transform_hlds__unused_args__V_60_60 = (MR_Word) transform_hlds__unused_args__PredStatus0_32;
#line 1038 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "unused_args.m"
              }
#line 1039 "unused_args.m"
          }
#line 1037 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1046 "unused_args.m"
          transform_hlds__unused_args__PredStatus_35 = transform_hlds__unused_args__PredStatus0_32;
#line 1037 "unused_args.m"
        else
#line 1047 "unused_args.m"
          {
#line 1048 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_62_62;

#line 1048 "unused_args.m"
            {
#line 1048 "unused_args.m"
              transform_hlds__unused_args__V_62_62 = hlds__status__pred_status_is_exported_1_f_0(transform_hlds__unused_args__PredStatus0_32);
            }
#line 1048 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_62_62 == (MR_Integer) 1);
#line 1047 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1052 "unused_args.m"
              transform_hlds__unused_args__PredStatus_35 = transform_hlds__unused_args__PredStatus0_32;
#line 1047 "unused_args.m"
            else
#line 1054 "unused_args.m"
              {
#line 1054 "unused_args.m"
                transform_hlds__unused_args__PredStatus_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1054 "unused_args.m"
              }
#line 1047 "unused_args.m"
          }
#line 1056 "unused_args.m"
        {
#line 1056 "unused_args.m"
          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__PredStatus_35, transform_hlds__unused_args__HeadVar__2_2, transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1058 "unused_args.m"
        {
#line 1058 "unused_args.m"
          transform_hlds__unused_args__NewPredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1059 "unused_args.m"
        {
#line 1059 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewProcs0_38);
        }
#line 1063 "unused_args.m"
        {
#line 1063 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_9, ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14)), transform_hlds__unused_args__NewProcs0_38, &transform_hlds__unused_args__NewProcs_39);
        }
#line 1064 "unused_args.m"
        {
#line 1064 "unused_args.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_39, transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewPredInfo_40);
        }
#line 1067 "unused_args.m"
        {
#line 1067 "unused_args.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__PredTable0_41);
        }
#line 1068 "unused_args.m"
        {
#line 1068 "unused_args.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_40, &transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__PredTable0_41, &transform_hlds__unused_args__PredTable_43);
        }
#line 1069 "unused_args.m"
        {
#line 1069 "unused_args.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_43, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
        }
#line 1072 "unused_args.m"
        {
#line 1072 "unused_args.m"
          transform_hlds__unused_args__PredSymName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_15));
#line 1072 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1072 "unused_args.m"
        }
#line 1074 "unused_args.m"
        {
#line 1074 "unused_args.m"
          transform_hlds__unused_args__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1074 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1074 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_44));
#line 1074 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1074 "unused_args.m"
        }
#line 1073 "unused_args.m"
        {
#line 1073 "unused_args.m"
          mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_76_76, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), ((MR_Box) (transform_hlds__unused_args__V_67_67)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47);
        }
#line 1078 "unused_args.m"
        {
#line 1078 "unused_args.m"
          transform_hlds__unused_args__create_call_goal_7_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__PredModule_15, transform_hlds__unused_args__NewPredName_37, transform_hlds__unused_args__OrigProcInfo_14, &transform_hlds__unused_args__ForwardingProcInfo_45);
        }
#line 1080 "unused_args.m"
        {
#line 1080 "unused_args.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ForwardingProcInfo_45, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69);
        }
#line 1091 "unused_args.m"
        {
#line 1091 "unused_args.m"
          transform_hlds__unused_args__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 3) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 4) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 5) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 6) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 7) = ((MR_Box) (transform_hlds__unused_args__OrigPredInfo_13));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 8) = ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14));
#line 1091 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 9) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1091 "unused_args.m"
        }
#line 1090 "unused_args.m"
        {
#line 1090 "unused_args.m"
          mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_77_77, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_70_70, transform_hlds__unused_args__IntermodOldArgLists_29, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69)), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
        }
#line 1090 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = ((MR_Word) transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
#line 1035 "unused_args.m"
      }
#line 995 "unused_args.m"
  }
#line 990 "unused_args.m"
}

#line 954 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 954 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 954 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5)
#line 954 "unused_args.m"
{
#line 957 "unused_args.m"
  while (MR_TRUE)
#line 957 "unused_args.m"
    {
#line 957 "unused_args.m"
      /* tailcall optimized into a loop */
#line 957 "unused_args.m"
      {
#line 957 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 957 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4;
#line 957 "unused_args.m"
        else
#line 959 "unused_args.m"
          {
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_12, (MR_Integer) 0)));
#line 959 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_12, (MR_Integer) 1)));
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalVarUsage_18;
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcInfo_20;
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__HeadVars_21;
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;
#line 961 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalVarUsage_18;
#line 962 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_19_19;

#line 961 "unused_args.m"
            {
#line 961 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_3, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), &transform_hlds__unused_args__conv0_LocalVarUsage_18);
            }
#line 961 "unused_args.m"
            transform_hlds__unused_args__LocalVarUsage_18 = ((MR_Word) transform_hlds__unused_args__conv0_LocalVarUsage_18);
#line 962 "unused_args.m"
            {
#line 962 "unused_args.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_16, transform_hlds__unused_args__ProcId_17, &transform_hlds__unused_args__V_19_19, &transform_hlds__unused_args__ProcInfo_20);
            }
#line 963 "unused_args.m"
            {
#line 963 "unused_args.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_20, &transform_hlds__unused_args__HeadVars_21);
            }
#line 964 "unused_args.m"
            {
#line 964 "unused_args.m"
              transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVarUsage_18, transform_hlds__unused_args__HeadVars_21, (MR_Integer) 1, &transform_hlds__unused_args__UnusedArgs_22);
            }
#line 965 "unused_args.m"
            {
#line 965 "unused_args.m"
              mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), ((MR_Box) (transform_hlds__unused_args__UnusedArgs_22)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26);
            }
#line 966 "unused_args.m"
            /* direct tailcall eliminated */
#line 966 "unused_args.m"
            {
#line 966 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__PredProcIds_13;
#line 966 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;

#line 966 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4;
#line 966 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 966 "unused_args.m"
            }
#line 966 "unused_args.m"
            continue;
#line 959 "unused_args.m"
          }
#line 957 "unused_args.m"
      }
#line 957 "unused_args.m"
      break;
#line 957 "unused_args.m"
    }
#line 954 "unused_args.m"
}

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 926 "unused_args.m"
{
#line 926 "unused_args.m"
  {
#line 926 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 926 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0, 1);
#line 926 "unused_args.m"
  }
#line 926 "unused_args.m"
}

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 926 "unused_args.m"
{
#line 926 "unused_args.m"
  {
#line 926 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 926 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34);
#line 926 "unused_args.m"
    {
#line 926 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(transform_hlds__unused_args__env_ptr);
    }
#line 926 "unused_args.m"
  }
#line 926 "unused_args.m"
}

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 926 "unused_args.m"
{
#line 926 "unused_args.m"
  {
#line 926 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 926 "unused_args.m"
    {
#line 559 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeInfo_10_49;
#line 559 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeCtorInfo_11_50;
#line 559 "unused_args.m"
      MR_Word transform_hlds__unused_args__UsageInfos_46;
#line 559 "unused_args.m"
      MR_Box transform_hlds__unused_args__conv2_UsageInfos_46;

#line 927 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 0)));
#line 927 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 1)));
#line 559 "unused_args.m"
      {
#line 559 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23)), &transform_hlds__unused_args__conv2_UsageInfos_46);
      }
#line 559 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 559 "unused_args.m"
        {
#line 559 "unused_args.m"
          transform_hlds__unused_args__UsageInfos_46 = ((MR_Word) transform_hlds__unused_args__conv2_UsageInfos_46);
#line 559 "unused_args.m"
          (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 559 "unused_args.m"
        }
#line 559 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 559 "unused_args.m"
        {
#line 13697 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeInfo_10_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 13699 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_11_50 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0;
#line 560 "unused_args.m"
          {
#line 560 "unused_args.m"
            (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0(transform_hlds__unused_args__TypeInfo_10_49, transform_hlds__unused_args__TypeCtorInfo_11_50, transform_hlds__unused_args__UsageInfos_46, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24)));
          }
#line 559 "unused_args.m"
        }
#line 558 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 558 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 558 "unused_args.m"
        {
#line 558 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(transform_hlds__unused_args__env_ptr);
        }
#line 926 "unused_args.m"
    }
#line 926 "unused_args.m"
  }
#line 926 "unused_args.m"
}

#line 926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 926 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 926 "unused_args.m"
{
#line 926 "unused_args.m"
  {
#line 926 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 926 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0) == 0)
#line 926 "unused_args.m"
      {
#line 926 "unused_args.m"
        {
#line 926 "unused_args.m"
          {
#line 926 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3, transform_hlds__unused_args__env_ptr);
          }
#line 926 "unused_args.m"
        }
#line 926 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 926 "unused_args.m"
      }
#line 926 "unused_args.m"
    else
#line 926 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 926 "unused_args.m"
  }
#line 926 "unused_args.m"
}

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 934 "unused_args.m"
{
#line 934 "unused_args.m"
  {
#line 934 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 934 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1, 1);
#line 934 "unused_args.m"
  }
#line 934 "unused_args.m"
}

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 934 "unused_args.m"
{
#line 934 "unused_args.m"
  {
#line 934 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 934 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35);
#line 934 "unused_args.m"
    {
#line 934 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(transform_hlds__unused_args__env_ptr);
    }
#line 934 "unused_args.m"
  }
#line 934 "unused_args.m"
}

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 934 "unused_args.m"
{
#line 934 "unused_args.m"
  {
#line 934 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 934 "unused_args.m"
    {
#line 566 "unused_args.m"
      {
#line 566 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35)));
      }
#line 566 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 566 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 566 "unused_args.m"
        {
#line 566 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(transform_hlds__unused_args__env_ptr);
        }
#line 934 "unused_args.m"
    }
#line 934 "unused_args.m"
  }
#line 934 "unused_args.m"
}

#line 934 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 934 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 934 "unused_args.m"
{
#line 934 "unused_args.m"
  {
#line 934 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 934 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1) == 0)
#line 934 "unused_args.m"
      {
#line 934 "unused_args.m"
        {
#line 934 "unused_args.m"
          {
#line 934 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7, transform_hlds__unused_args__env_ptr);
          }
#line 934 "unused_args.m"
        }
#line 934 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 934 "unused_args.m"
      }
#line 934 "unused_args.m"
    else
#line 934 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 934 "unused_args.m"
  }
#line 934 "unused_args.m"
}

#line 914 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 914 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 914 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 914 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6)
#line 914 "unused_args.m"
{
#line 914 "unused_args.m"
  {
#line 914 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s transform_hlds__unused_args__env;

#line 914 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1 = transform_hlds__unused_args__VarUsage_1;
#line 914 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5;
#line 917 "unused_args.m"
    while (MR_TRUE)
#line 917 "unused_args.m"
      {
#line 917 "unused_args.m"
        /* tailcall optimized into a loop */
#line 917 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "unused_args.m"
          {
#line 917 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 917 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_4 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 917 "unused_args.m"
          }
#line 917 "unused_args.m"
        else
#line 918 "unused_args.m"
          {
#line 918 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 918 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 918 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;
#line 918 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 919 "unused_args.m"
            MR_Word transform_hlds__unused_args__Usage_19;
#line 598 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_Usage_19;

#line 598 "unused_args.m"
            {
#line 598 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) (transform_hlds__unused_args__Var_15)), &transform_hlds__unused_args__conv0_Usage_19);
            }
#line 598 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 598 "unused_args.m"
              {
#line 598 "unused_args.m"
                transform_hlds__unused_args__Usage_19 = ((MR_Word) transform_hlds__unused_args__conv0_Usage_19);
#line 598 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 598 "unused_args.m"
              }
#line 919 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 920 "unused_args.m"
              {
#line 920 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 0)));
#line 920 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 1)));
#line 926 "unused_args.m"
                {
#line 926 "unused_args.m"
                  transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(&transform_hlds__unused_args__env);
                }
#line 930 "unused_args.m"
                if (!((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded))
#line 934 "unused_args.m"
                  {
#line 934 "unused_args.m"
                    {
#line 934 "unused_args.m"
                      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(&transform_hlds__unused_args__env);
                    }
#line 934 "unused_args.m"
                  }
#line 921 "unused_args.m"
                if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 944 "unused_args.m"
                  {
#line 592 "unused_args.m"
                    {
#line 592 "unused_args.m"
                      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_15)), (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, &transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30);
                    }
#line 945 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = (MR_Integer) 1;
#line 944 "unused_args.m"
                  }
#line 921 "unused_args.m"
                else
#line 947 "unused_args.m"
                  {
#line 947 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 947 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 947 "unused_args.m"
                  }
#line 920 "unused_args.m"
              }
#line 919 "unused_args.m"
            else
#line 950 "unused_args.m"
              {
#line 950 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 950 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 950 "unused_args.m"
              }
#line 952 "unused_args.m"
            /* direct tailcall eliminated */
#line 952 "unused_args.m"
            {
#line 952 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_16;
#line 952 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 952 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;

#line 952 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5;
#line 952 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3;
#line 952 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 952 "unused_args.m"
            }
#line 952 "unused_args.m"
            continue;
#line 918 "unused_args.m"
          }
#line 917 "unused_args.m"
        break;
#line 917 "unused_args.m"
      }
#line 914 "unused_args.m"
  }
#line 914 "unused_args.m"
}

#line 886 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 886 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 886 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 886 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 886 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 886 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5)
#line 886 "unused_args.m"
{
#line 889 "unused_args.m"
  while (MR_TRUE)
#line 889 "unused_args.m"
    {
#line 889 "unused_args.m"
      /* tailcall optimized into a loop */
#line 889 "unused_args.m"
      {
#line 889 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 889 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "unused_args.m"
          {
#line 889 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 889 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 889 "unused_args.m"
          }
#line 889 "unused_args.m"
        else
#line 890 "unused_args.m"
          {
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_20_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_21_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[1];
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages0_31;
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_32;
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalChanged_33;
#line 890 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages_34;
#line 900 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalUsages0_31;

#line 900 "unused_args.m"
            {
#line 900 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), &transform_hlds__unused_args__conv0_LocalUsages0_31);
            }
#line 900 "unused_args.m"
            transform_hlds__unused_args__LocalUsages0_31 = ((MR_Word) transform_hlds__unused_args__conv0_LocalUsages0_31);
#line 901 "unused_args.m"
            {
#line 901 "unused_args.m"
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__Vars_32);
            }
#line 902 "unused_args.m"
            {
#line 902 "unused_args.m"
              transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, transform_hlds__unused_args__Vars_32, (MR_Integer) 0, &transform_hlds__unused_args__LocalChanged_33, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__LocalUsages_34);
            }
#line 908 "unused_args.m"
#line 908 "unused_args.m"
            switch (transform_hlds__unused_args__LocalChanged_33) {
#line 908 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 908 "unused_args.m"
              case (MR_Integer) 0:
#line 909 "unused_args.m"
                {
#line 909 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 909 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 909 "unused_args.m"
                }
#line 908 "unused_args.m"
                break;
#line 908 "unused_args.m"
              case (MR_Integer) 1:
#line 905 "unused_args.m"
                {
#line 906 "unused_args.m"
                  {
#line 906 "unused_args.m"
                    mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), ((MR_Box) (transform_hlds__unused_args__LocalUsages_34)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21);
                  }
#line 907 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = (MR_Integer) 1;
#line 905 "unused_args.m"
                }
#line 908 "unused_args.m"
                break;
#line 908 "unused_args.m"
            }
#line 892 "unused_args.m"
            /* direct tailcall eliminated */
#line 892 "unused_args.m"
            {
#line 892 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredProcIds_13;
#line 892 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 892 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;

#line 892 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4;
#line 892 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2;
#line 892 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 892 "unused_args.m"
            }
#line 892 "unused_args.m"
            continue;
#line 890 "unused_args.m"
          }
#line 889 "unused_args.m"
      }
#line 889 "unused_args.m"
      break;
#line 889 "unused_args.m"
    }
#line 886 "unused_args.m"
}

#line 852 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 852 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 852 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 852 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 852 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 852 "unused_args.m"
{
#line 855 "unused_args.m"
  while (MR_TRUE)
#line 855 "unused_args.m"
    {
#line 855 "unused_args.m"
      /* tailcall optimized into a loop */
#line 855 "unused_args.m"
      {
#line 855 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 855 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 855 "unused_args.m"
        else
#line 856 "unused_args.m"
          {
#line 856 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 856 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 856 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 857 "unused_args.m"
            {
#line 857 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_1, transform_hlds__unused_args__Goal_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 858 "unused_args.m"
            /* direct tailcall eliminated */
#line 858 "unused_args.m"
            {
#line 858 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Goals_11;
#line 858 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 858 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 858 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 858 "unused_args.m"
            }
#line 858 "unused_args.m"
            continue;
#line 856 "unused_args.m"
          }
#line 855 "unused_args.m"
      }
#line 855 "unused_args.m"
      break;
#line 855 "unused_args.m"
    }
#line 852 "unused_args.m"
}

#line 846 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 846 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 846 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 846 "unused_args.m"
{
#line 848 "unused_args.m"
  {
#line 848 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 848 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 848 "unused_args.m"
    else
#line 849 "unused_args.m"
      {
#line 849 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_5;
#line 849 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 849 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_7;
#line 849 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 849 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 0)));
#line 849 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 1)));

#line 849 "unused_args.m"
        transform_hlds__unused_args__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 2)));
#line 850 "unused_args.m"
        {
#line 850 "unused_args.m"
          transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_6, &transform_hlds__unused_args__Goals_7);
        }
#line 849 "unused_args.m"
        {
#line 849 "unused_args.m"
          MR_Word base;
#line 849 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 849 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_5));
#line 849 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_7));
#line 849 "unused_args.m"
        }
#line 849 "unused_args.m"
      }
#line 848 "unused_args.m"
  }
#line 846 "unused_args.m"
}

#line 831 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 831 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 831 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 831 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 831 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 831 "unused_args.m"
{
#line 834 "unused_args.m"
  while (MR_TRUE)
#line 834 "unused_args.m"
    {
#line 834 "unused_args.m"
      /* tailcall optimized into a loop */
#line 834 "unused_args.m"
      {
#line 834 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 834 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 834 "unused_args.m"
        else
#line 835 "unused_args.m"
          {
#line 835 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 835 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;
#line 836 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarInfo0_13;
#line 598 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_VarInfo0_13;

#line 598 "unused_args.m"
            {
#line 598 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, ((MR_Box) (transform_hlds__unused_args__Var_10)), &transform_hlds__unused_args__conv0_VarInfo0_13);
            }
#line 598 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 598 "unused_args.m"
              {
#line 598 "unused_args.m"
                transform_hlds__unused_args__VarInfo0_13 = ((MR_Word) transform_hlds__unused_args__conv0_VarInfo0_13);
#line 598 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 598 "unused_args.m"
              }
#line 836 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 837 "unused_args.m"
              {
#line 837 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_21_21 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 837 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_12;
#line 837 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 0)));
#line 837 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgDep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 1)));
#line 837 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarInfo_16;

#line 838 "unused_args.m"
                {
#line 838 "unused_args.m"
                  mercury__set__insert_3_p_0(transform_hlds__unused_args__TypeInfo_21_21, ((MR_Box) (transform_hlds__unused_args__Alias_1)), transform_hlds__unused_args__VarDep0_14, &transform_hlds__unused_args__VarDep_12);
                }
#line 839 "unused_args.m"
                {
#line 839 "unused_args.m"
                  transform_hlds__unused_args__VarInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_12));
#line 839 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_15));
#line 839 "unused_args.m"
                }
#line 840 "unused_args.m"
                {
#line 840 "unused_args.m"
                  mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_21_21, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_10)), ((MR_Box) (transform_hlds__unused_args__VarInfo_16)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19);
                }
#line 837 "unused_args.m"
              }
#line 836 "unused_args.m"
            else
#line 836 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 844 "unused_args.m"
            /* direct tailcall eliminated */
#line 844 "unused_args.m"
            {
#line 844 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_11;
#line 844 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;

#line 844 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 844 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 844 "unused_args.m"
            }
#line 844 "unused_args.m"
            continue;
#line 835 "unused_args.m"
          }
#line 834 "unused_args.m"
      }
#line 834 "unused_args.m"
      break;
#line 834 "unused_args.m"
    }
#line 831 "unused_args.m"
}

#line 781 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 781 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 781 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 781 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 781 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 781 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10)
#line 781 "unused_args.m"
{
#line 786 "unused_args.m"
  {
#line 786 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 786 "unused_args.m"
    if ((transform_hlds__unused_args__ArgVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "unused_args.m"
      if ((transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "unused_args.m"
        {
#line 788 "unused_args.m"
          *transform_hlds__unused_args__InputVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 789 "unused_args.m"
          *transform_hlds__unused_args__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "unused_args.m"
        }
#line 786 "unused_args.m"
      else
#line 791 "unused_args.m"
        {
#line 793 "unused_args.m"
          {
#line 793 "unused_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 793 "unused_args.m"
            return;
          }
#line 791 "unused_args.m"
        }
#line 786 "unused_args.m"
    else
#line 786 "unused_args.m"
      {
#line 786 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 1)));
#line 786 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 0)));

#line 786 "unused_args.m"
        if ((transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "unused_args.m"
          {
#line 797 "unused_args.m"
            {
#line 797 "unused_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 797 "unused_args.m"
              return;
            }
#line 795 "unused_args.m"
          }
#line 786 "unused_args.m"
        else
#line 799 "unused_args.m"
          {
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__Mode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 0)));
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 1)));
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__InputVars1_19;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__OutputVars1_20;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__InitialInst1_21;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__InitialInst2_22;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__FinalInst1_23;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__FinalInst2_24;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_25;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_26_26;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_27_27;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_28_28;
#line 804 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_37_37;
#line 809 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29;
#line 809 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_38_38;
#line 820 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_30_30;
#line 820 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_39_39;

#line 801 "unused_args.m"
            {
#line 801 "unused_args.m"
              transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_6, transform_hlds__unused_args__V_40_40, transform_hlds__unused_args__Modes_18, &transform_hlds__unused_args__InputVars1_19, &transform_hlds__unused_args__OutputVars1_20);
            }
#line 802 "unused_args.m"
            transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_17, (MR_Integer) 0)));
#line 802 "unused_args.m"
            transform_hlds__unused_args__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_17, (MR_Integer) 1)));
#line 802 "unused_args.m"
            transform_hlds__unused_args__InitialInst1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 802 "unused_args.m"
            transform_hlds__unused_args__InitialInst2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 802 "unused_args.m"
            transform_hlds__unused_args__FinalInst1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, (MR_Integer) 0)));
#line 802 "unused_args.m"
            transform_hlds__unused_args__FinalInst2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, (MR_Integer) 1)));
#line 804 "unused_args.m"
            transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 804 "unused_args.m"
            transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 804 "unused_args.m"
            {
#line 804 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__Type_25);
            }
#line 809 "unused_args.m"
            transform_hlds__unused_args__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 809 "unused_args.m"
            transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 809 "unused_args.m"
            {
#line 809 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst1_21, transform_hlds__unused_args__FinalInst1_23, transform_hlds__unused_args__Type_25, transform_hlds__unused_args__V_29_29);
            }
#line 808 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 812 "unused_args.m"
              *transform_hlds__unused_args__InputVars_9 = transform_hlds__unused_args__InputVars1_19;
#line 808 "unused_args.m"
            else
#line 814 "unused_args.m"
              {
#line 814 "unused_args.m"
                MR_Word base;
#line 814 "unused_args.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "unused_args.m"
                *transform_hlds__unused_args__InputVars_9 = base;
#line 814 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_41_41));
#line 814 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__InputVars1_19));
#line 814 "unused_args.m"
              }
#line 820 "unused_args.m"
            transform_hlds__unused_args__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 820 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 820 "unused_args.m"
            {
#line 820 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst2_22, transform_hlds__unused_args__FinalInst2_24, transform_hlds__unused_args__Type_25, transform_hlds__unused_args__V_30_30);
            }
#line 819 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 823 "unused_args.m"
              *transform_hlds__unused_args__OutputVars_10 = transform_hlds__unused_args__OutputVars1_20;
#line 819 "unused_args.m"
            else
#line 825 "unused_args.m"
              {
#line 825 "unused_args.m"
                MR_Word base;
#line 825 "unused_args.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unused_args.m"
                *transform_hlds__unused_args__OutputVars_10 = base;
#line 825 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_41_41));
#line 825 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__OutputVars1_20));
#line 825 "unused_args.m"
              }
#line 799 "unused_args.m"
          }
#line 786 "unused_args.m"
      }
#line 786 "unused_args.m"
  }
#line 781 "unused_args.m"
}

#line 772 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 772 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 772 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11)
#line 772 "unused_args.m"
{
#line 763 "unused_args.m"
  {
#line 763 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 763 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_19;
#line 598 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarUsage0_19;

#line 598 "unused_args.m"
    {
#line 598 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, ((MR_Box) (transform_hlds__unused_args__Arg_8)), &transform_hlds__unused_args__conv0_VarUsage0_19);
    }
#line 598 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 598 "unused_args.m"
      {
#line 598 "unused_args.m"
        transform_hlds__unused_args__VarUsage0_19 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_19);
#line 598 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 598 "unused_args.m"
      }
#line 763 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 764 "unused_args.m"
      {
#line 764 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 0)));
#line 764 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 1)));
#line 764 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_21;
#line 764 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarUsage_22;
#line 764 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_23_23;

#line 765 "unused_args.m"
        {
#line 765 "unused_args.m"
          transform_hlds__unused_args__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_7));
#line 765 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (transform_hlds__unused_args__Var_6));
#line 765 "unused_args.m"
        }
#line 765 "unused_args.m"
        {
#line 765 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_23_23)), transform_hlds__unused_args__ArgDep0_20, &transform_hlds__unused_args__ArgDep_21);
        }
#line 766 "unused_args.m"
        {
#line 766 "unused_args.m"
          transform_hlds__unused_args__VarUsage_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_18));
#line 766 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_21));
#line 766 "unused_args.m"
        }
#line 767 "unused_args.m"
        {
#line 767 "unused_args.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Arg_8)), ((MR_Box) (transform_hlds__unused_args__VarUsage_22)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);
        }
#line 764 "unused_args.m"
      }
#line 763 "unused_args.m"
    else
#line 763 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_11 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10;
#line 763 "unused_args.m"
  }
#line 772 "unused_args.m"
}

#line 737 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_6,
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 737 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18,
#line 737 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_19)
#line 737 "unused_args.m"
{
#line 742 "unused_args.m"
  while (MR_TRUE)
#line 742 "unused_args.m"
    {
#line 742 "unused_args.m"
      /* tailcall optimized into a loop */
#line 742 "unused_args.m"
      {
#line 742 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 742 "unused_args.m"
        if ((transform_hlds__unused_args__LocalArguments_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "unused_args.m"
          if ((transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarDep_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18;
#line 742 "unused_args.m"
          else
#line 745 "unused_args.m"
            {
#line 747 "unused_args.m"
              {
#line 747 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 747 "unused_args.m"
                return;
              }
#line 745 "unused_args.m"
            }
#line 742 "unused_args.m"
        else
#line 742 "unused_args.m"
          {
#line 742 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 1)));
#line 742 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 0)));

#line 742 "unused_args.m"
            if ((transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "unused_args.m"
              {
#line 751 "unused_args.m"
                {
#line 751 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 751 "unused_args.m"
                  return;
                }
#line 749 "unused_args.m"
              }
#line 742 "unused_args.m"
            else
#line 753 "unused_args.m"
              {
#line 753 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 0)));
#line 753 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 1)));
#line 753 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20;
#line 763 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarUsage0_36;
#line 598 "unused_args.m"
                MR_Box transform_hlds__unused_args__conv0_VarUsage0_36;

#line 598 "unused_args.m"
                {
#line 598 "unused_args.m"
                  transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18, ((MR_Box) (transform_hlds__unused_args__V_29_29)), &transform_hlds__unused_args__conv0_VarUsage0_36);
                }
#line 598 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 598 "unused_args.m"
                  {
#line 598 "unused_args.m"
                    transform_hlds__unused_args__VarUsage0_36 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_36);
#line 598 "unused_args.m"
                    transform_hlds__unused_args__succeeded = MR_TRUE;
#line 598 "unused_args.m"
                  }
#line 763 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 764 "unused_args.m"
                  {
#line 764 "unused_args.m"
                    MR_Word transform_hlds__unused_args__VarDep_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_36, (MR_Integer) 0)));
#line 764 "unused_args.m"
                    MR_Word transform_hlds__unused_args__ArgDep0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_36, (MR_Integer) 1)));
#line 764 "unused_args.m"
                    MR_Word transform_hlds__unused_args__ArgDep_38;
#line 764 "unused_args.m"
                    MR_Word transform_hlds__unused_args__VarUsage_39;
#line 764 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_40_40;

#line 765 "unused_args.m"
                    {
#line 765 "unused_args.m"
                      transform_hlds__unused_args__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_6));
#line 765 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 1) = ((MR_Box) (transform_hlds__unused_args__HeadVar_16));
#line 765 "unused_args.m"
                    }
#line 765 "unused_args.m"
                    {
#line 765 "unused_args.m"
                      mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_40_40)), transform_hlds__unused_args__ArgDep0_37, &transform_hlds__unused_args__ArgDep_38);
                    }
#line 766 "unused_args.m"
                    {
#line 766 "unused_args.m"
                      transform_hlds__unused_args__VarUsage_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_39, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_35));
#line 766 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_39, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_38));
#line 766 "unused_args.m"
                    }
#line 767 "unused_args.m"
                    {
#line 767 "unused_args.m"
                      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__V_29_29)), ((MR_Box) (transform_hlds__unused_args__VarUsage_39)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20);
                    }
#line 764 "unused_args.m"
                  }
#line 763 "unused_args.m"
                else
#line 763 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18;
#line 756 "unused_args.m"
                /* direct tailcall eliminated */
#line 756 "unused_args.m"
                {
#line 756 "unused_args.m"
                  MR_Word transform_hlds__unused_args__LocalArguments__tmp_copy_7 = transform_hlds__unused_args__V_28_28;
#line 756 "unused_args.m"
                  MR_Word transform_hlds__unused_args__HeadVarIds__tmp_copy_8 = transform_hlds__unused_args__HeadVars_17;
#line 756 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_18 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20;

#line 756 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_18;
#line 756 "unused_args.m"
                  transform_hlds__unused_args__HeadVarIds_8 = transform_hlds__unused_args__HeadVarIds__tmp_copy_8;
#line 756 "unused_args.m"
                  transform_hlds__unused_args__LocalArguments_7 = transform_hlds__unused_args__LocalArguments__tmp_copy_7;
#line 756 "unused_args.m"
                }
#line 756 "unused_args.m"
                continue;
#line 753 "unused_args.m"
              }
#line 742 "unused_args.m"
          }
#line 742 "unused_args.m"
      }
#line 742 "unused_args.m"
      break;
#line 742 "unused_args.m"
    }
#line 737 "unused_args.m"
}

#line 688 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 688 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 688 "unused_args.m"
{
#line 688 "unused_args.m"
  {
#line 688 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 688 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 688 "unused_args.m"
    {
#line 688 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__688__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 688 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 688 "unused_args.m"
  }
#line 688 "unused_args.m"
}

#line 706 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 706 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 706 "unused_args.m"
{
#line 706 "unused_args.m"
  {
#line 706 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 706 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 706 "unused_args.m"
    {
#line 706 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__706__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 706 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 706 "unused_args.m"
  }
#line 706 "unused_args.m"
}

#line 665 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 665 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 665 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 665 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 665 "unused_args.m"
{
#line 665 "unused_args.m"
  {
#line 665 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 665 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 665 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_LambdaHeadVar__2_117;

#line 665 "unused_args.m"
    {
#line 665 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__665__1_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_LambdaHeadVar__2_117);
    }
#line 665 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 665 "unused_args.m"
      {
#line 665 "unused_args.m"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_LambdaHeadVar__2_117));
#line 665 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 665 "unused_args.m"
      }
#line 665 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 665 "unused_args.m"
  }
#line 665 "unused_args.m"
}

#line 611 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 611 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 611 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 611 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 611 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88)
#line 611 "unused_args.m"
{
#line 614 "unused_args.m"
  while (MR_TRUE)
#line 614 "unused_args.m"
    {
#line 614 "unused_args.m"
      /* tailcall optimized into a loop */
#line 614 "unused_args.m"
      {
#line 614 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 614 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 0)));
#line 615 "unused_args.m"
        MR_Word transform_hlds__unused_args___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 1)));

#line 619 "unused_args.m"
#line 619 "unused_args.m"
        switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr_8)) {
#line 619 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 619 "unused_args.m"
          case (MR_Integer) 0:
#line 639 "unused_args.m"
            {
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal_28 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr_8), (MR_Integer) 0);

#line 640 "unused_args.m"
              /* direct tailcall eliminated */
#line 640 "unused_args.m"
              {
#line 640 "unused_args.m"
                MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_28;

#line 640 "unused_args.m"
                transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 640 "unused_args.m"
              }
#line 640 "unused_args.m"
              continue;
#line 639 "unused_args.m"
            }
#line 619 "unused_args.m"
            break;
#line 619 "unused_args.m"
          case (MR_Integer) 1:
#line 672 "unused_args.m"
            {
#line 672 "unused_args.m"
              MR_Word transform_hlds__unused_args__LHS_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 672 "unused_args.m"
              MR_Word transform_hlds__unused_args__RHS_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 672 "unused_args.m"
              MR_Word transform_hlds__unused_args__Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 672 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 672 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));

#line 677 "unused_args.m"
#line 677 "unused_args.m"
              switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_52)) {
#line 677 "unused_args.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 677 "unused_args.m"
                case (MR_Integer) 0:
#line 705 "unused_args.m"
                  {
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_97_97;
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));
#line 705 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 6)));

#line 706 "unused_args.m"
                    {
#line 706 "unused_args.m"
                      transform_hlds__unused_args__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 706 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 706 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2));
#line 706 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 706 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 706 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_144));
#line 706 "unused_args.m"
                    }
#line 706 "unused_args.m"
                    {
#line 706 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_97_97, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 707 "unused_args.m"
                    {
#line 707 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__CellVar_144);
                    }
#line 707 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 708 "unused_args.m"
                      {
#line 708 "unused_args.m"
                        transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                      }
#line 707 "unused_args.m"
                    else
#line 710 "unused_args.m"
                      {
#line 710 "unused_args.m"
                        transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_144, transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                      }
#line 705 "unused_args.m"
                  }
#line 677 "unused_args.m"
                  break;
#line 677 "unused_args.m"
                case (MR_Integer) 1:
#line 687 "unused_args.m"
                  {
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Modes_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CanFail_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__InputVars_63;
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__OutputVars_64;
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_103_103;
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107;
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));

#line 688 "unused_args.m"
                    {
#line 688 "unused_args.m"
                      transform_hlds__unused_args__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 688 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 688 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3));
#line 688 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 688 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 688 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_58));
#line 688 "unused_args.m"
                    }
#line 688 "unused_args.m"
                    {
#line 688 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_103_103, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 689 "unused_args.m"
                    {
#line 689 "unused_args.m"
                      transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Args_142, transform_hlds__unused_args__Modes_60, &transform_hlds__unused_args__InputVars_63, &transform_hlds__unused_args__OutputVars_64);
                    }
#line 693 "unused_args.m"
                    {
#line 693 "unused_args.m"
                      transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__OutputVars_64, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107);
                    }
#line 696 "unused_args.m"
                    {
#line 696 "unused_args.m"
                      transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__InputVars_63, transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108);
                    }
#line 701 "unused_args.m"
#line 701 "unused_args.m"
                    switch (transform_hlds__unused_args__CanFail_61) {
#line 701 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 701 "unused_args.m"
                      case (MR_Integer) 0:
#line 700 "unused_args.m"
                        {
#line 700 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                        }
#line 701 "unused_args.m"
                        break;
#line 701 "unused_args.m"
                      case (MR_Integer) 1:
#line 702 "unused_args.m"
                        *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 701 "unused_args.m"
                        break;
#line 701 "unused_args.m"
                    }
#line 687 "unused_args.m"
                  }
#line 677 "unused_args.m"
                  break;
#line 677 "unused_args.m"
                case (MR_Integer) 2:
#line 678 "unused_args.m"
                  {
#line 678 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Target_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 678 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Source_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));

#line 679 "unused_args.m"
                    {
#line 679 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__Target_56);
                    }
#line 679 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 682 "unused_args.m"
                      {
#line 682 "unused_args.m"
                        transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                      }
#line 679 "unused_args.m"
                    else
#line 684 "unused_args.m"
                      {
#line 684 "unused_args.m"
                        MR_Word transform_hlds__unused_args__V_111_111;

#line 684 "unused_args.m"
                        {
#line 684 "unused_args.m"
                          transform_hlds__unused_args__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 0) = ((MR_Box) (transform_hlds__unused_args__Target_56));
#line 684 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "unused_args.m"
                        }
#line 684 "unused_args.m"
                        {
#line 684 "unused_args.m"
                          transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__V_111_111, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                        }
#line 684 "unused_args.m"
                      }
#line 678 "unused_args.m"
                  }
#line 677 "unused_args.m"
                  break;
#line 677 "unused_args.m"
                case (MR_Integer) 3:
#line 677 "unused_args.m"
#line 677 "unused_args.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)))) {
#line 677 "unused_args.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 677 "unused_args.m"
                    case (MR_Integer) 0:
#line 674 "unused_args.m"
                      {
#line 674 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 674 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var2_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 674 "unused_args.m"
                        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114;

#line 675 "unused_args.m"
                        {
#line 675 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var1_54, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114);
                        }
#line 676 "unused_args.m"
                        {
#line 676 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var2_55, transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                        }
#line 674 "unused_args.m"
                      }
#line 677 "unused_args.m"
                      break;
#line 677 "unused_args.m"
                    case (MR_Integer) 1:
#line 721 "unused_args.m"
#line 721 "unused_args.m"
                      switch (MR_tag((MR_Word) transform_hlds__unused_args__RHS_50)) {
#line 721 "unused_args.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 721 "unused_args.m"
                        case (MR_Integer) 0:
#line 718 "unused_args.m"
                          {
#line 718 "unused_args.m"
                            MR_Word transform_hlds__unused_args__RHSVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__RHS_50, (MR_Integer) 0)));
#line 718 "unused_args.m"
                            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95;

#line 719 "unused_args.m"
                            {
#line 719 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__RHSVar_73, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95);
                            }
#line 720 "unused_args.m"
                            {
#line 720 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__LHS_49, transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                            }
#line 718 "unused_args.m"
                          }
#line 721 "unused_args.m"
                          break;
#line 721 "unused_args.m"
                        case (MR_Integer) 1:
#line 721 "unused_args.m"
                        case (MR_Integer) 2:
#line 724 "unused_args.m"
                          {
#line 725 "unused_args.m"
                            {
#line 725 "unused_args.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "complicated unifications should only be var-var");
#line 725 "unused_args.m"
                              return;
                            }
#line 724 "unused_args.m"
                          }
#line 721 "unused_args.m"
                          break;
#line 721 "unused_args.m"
                      }
#line 677 "unused_args.m"
                      break;
#line 677 "unused_args.m"
                  }
#line 677 "unused_args.m"
                  break;
#line 677 "unused_args.m"
              }
#line 672 "unused_args.m"
            }
#line 619 "unused_args.m"
            break;
#line 619 "unused_args.m"
          case (MR_Integer) 2:
#line 628 "unused_args.m"
            {
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 628 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVars_23;
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 0)));
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_129_129;
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 628 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 629 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 1)));
#line 629 "unused_args.m"
              MR_Word transform_hlds__unused_args___PredInfo_21;

#line 629 "unused_args.m"
              {
#line 629 "unused_args.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__V_128_128, transform_hlds__unused_args__PredId_15, transform_hlds__unused_args__ProcId_16, &transform_hlds__unused_args___PredInfo_21, &transform_hlds__unused_args__ProcInfo_22);
              }
#line 631 "unused_args.m"
              {
#line 631 "unused_args.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_22, &transform_hlds__unused_args__HeadVars_23);
              }
#line 632 "unused_args.m"
              {
#line 632 "unused_args.m"
                transform_hlds__unused_args__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_15));
#line 632 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_16));
#line 632 "unused_args.m"
              }
#line 632 "unused_args.m"
              {
#line 632 "unused_args.m"
                transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(transform_hlds__unused_args__V_129_129, transform_hlds__unused_args__Args_17, transform_hlds__unused_args__HeadVars_23, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
              }
#line 628 "unused_args.m"
            }
#line 619 "unused_args.m"
            break;
#line 619 "unused_args.m"
          case (MR_Integer) 3:
#line 619 "unused_args.m"
#line 619 "unused_args.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)))) {
#line 619 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 619 "unused_args.m"
              case (MR_Integer) 0:
#line 655 "unused_args.m"
                {
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__CallArgs_35;
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120;
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));

#line 656 "unused_args.m"
                  {
#line 656 "unused_args.m"
                    hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__unused_args__GenericCall_31, &transform_hlds__unused_args__CallArgs_35);
                  }
#line 657 "unused_args.m"
                  {
#line 657 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__CallArgs_35, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120);
                  }
#line 658 "unused_args.m"
                  {
#line 658 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_138, transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 655 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 1:
#line 660 "unused_args.m"
                {
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__TypeCtorInfo_148_148 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UsedVars_48;
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_118_118;
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 660 "unused_args.m"
                  MR_Integer transform_hlds__unused_args__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 6)));
#line 660 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 7)));

#line 669 "unused_args.m"
                  {
#line 669 "unused_args.m"
                    transform_hlds__unused_args__V_118_118 = mercury__list__f_43_43_2_f_0(transform_hlds__unused_args__TypeCtorInfo_148_148, transform_hlds__unused_args__Args_141, transform_hlds__unused_args__ExtraArgs_39);
                  }
#line 669 "unused_args.m"
                  {
#line 669 "unused_args.m"
                    mercury__list__filter_map_3_p_0(transform_hlds__unused_args__TypeCtorInfo_148_148, (MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[9], transform_hlds__unused_args__V_118_118, &transform_hlds__unused_args__UsedVars_48);
                  }
#line 670 "unused_args.m"
                  {
#line 670 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__UsedVars_48, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 660 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 2:
#line 617 "unused_args.m"
                {
#line 617 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 617 "unused_args.m"
                  MR_Word transform_hlds__unused_args___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 618 "unused_args.m"
                  {
#line 618 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_11, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 617 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 3:
#line 620 "unused_args.m"
                {
#line 620 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 621 "unused_args.m"
                  {
#line 621 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_135, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 620 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 4:
#line 623 "unused_args.m"
                {
#line 623 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 623 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 623 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131;
#line 623 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_136;
#line 623 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));

#line 624 "unused_args.m"
                  {
#line 624 "unused_args.m"
                    transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131);
                  }
#line 625 "unused_args.m"
                  {
#line 625 "unused_args.m"
                    transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_14, &transform_hlds__unused_args__Goals_136);
                  }
#line 626 "unused_args.m"
                  {
#line 626 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_136, transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 623 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 5:
#line 642 "unused_args.m"
                {
#line 642 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 642 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 644 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122;
#line 644 "unused_args.m"
                  MR_Word transform_hlds__unused_args___TermVar_30;

#line 644 "unused_args.m"
                  transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 644 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 644 "unused_args.m"
                    {
#line 644 "unused_args.m"
                      transform_hlds__unused_args___TermVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 1)));
#line 644 "unused_args.m"
                      transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 2)));
#line 644 "unused_args.m"
                      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_122_122 == (MR_Integer) 1);
#line 644 "unused_args.m"
                    }
#line 643 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 643 "unused_args.m"
                    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87;
#line 643 "unused_args.m"
                  else
#line 652 "unused_args.m"
                    {
#line 652 "unused_args.m"
                      /* direct tailcall eliminated */
#line 652 "unused_args.m"
                      {
#line 652 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_137;

#line 652 "unused_args.m"
                        transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 652 "unused_args.m"
                      }
#line 652 "unused_args.m"
                      continue;
#line 652 "unused_args.m"
                    }
#line 642 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 6:
#line 634 "unused_args.m"
                {
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125;
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 635 "unused_args.m"
                  {
#line 635 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Cond_25, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125);
                  }
#line 636 "unused_args.m"
                  {
#line 636 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Then_26, transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126);
                  }
#line 637 "unused_args.m"
                  /* direct tailcall eliminated */
#line 637 "unused_args.m"
                  {
#line 637 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__Else_27;
#line 637 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;

#line 637 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87;
#line 637 "unused_args.m"
                    transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 637 "unused_args.m"
                  }
#line 637 "unused_args.m"
                  continue;
#line 634 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
              case (MR_Integer) 7:
#line 730 "unused_args.m"
                {
#line 732 "unused_args.m"
                  {
#line 732 "unused_args.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "shorthand");
#line 732 "unused_args.m"
                    return;
                  }
#line 730 "unused_args.m"
                }
#line 619 "unused_args.m"
                break;
#line 619 "unused_args.m"
            }
#line 619 "unused_args.m"
            break;
#line 619 "unused_args.m"
        }
#line 614 "unused_args.m"
      }
#line 614 "unused_args.m"
      break;
#line 614 "unused_args.m"
    }
#line 611 "unused_args.m"
}

#line 589 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 589 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 589 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 589 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 589 "unused_args.m"
{
#line 592 "unused_args.m"
  {
#line 592 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 592 "unused_args.m"
    {
#line 592 "unused_args.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_4)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
    }
#line 592 "unused_args.m"
  }
#line 589 "unused_args.m"
}

#line 583 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 583 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 583 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 583 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 583 "unused_args.m"
{
#line 587 "unused_args.m"
  {
#line 587 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 587 "unused_args.m"
    {
#line 587 "unused_args.m"
      mercury__map__delete_list_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__Vars_4, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
    }
#line 587 "unused_args.m"
  }
#line 583 "unused_args.m"
}

#line 570 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 570 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 570 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 570 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 570 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13)
#line 570 "unused_args.m"
{
#line 574 "unused_args.m"
  {
#line 574 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 574 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarInf0_8;
#line 574 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarInf0_8;

#line 574 "unused_args.m"
    {
#line 574 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, ((MR_Box) (transform_hlds__unused_args__Var_5)), &transform_hlds__unused_args__conv0_VarInf0_8);
    }
#line 574 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 574 "unused_args.m"
      {
#line 574 "unused_args.m"
        transform_hlds__unused_args__VarInf0_8 = ((MR_Word) transform_hlds__unused_args__conv0_VarInf0_8);
#line 574 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 574 "unused_args.m"
      }
#line 574 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 575 "unused_args.m"
      {
#line 575 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 575 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_7;
#line 575 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 0)));
#line 575 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 1)));
#line 575 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarInf_11;

#line 576 "unused_args.m"
        {
#line 576 "unused_args.m"
          mercury__set__insert_list_3_p_0(transform_hlds__unused_args__TypeInfo_17_17, transform_hlds__unused_args__Aliases_6, transform_hlds__unused_args__VarDep0_9, &transform_hlds__unused_args__VarDep_7);
        }
#line 577 "unused_args.m"
        {
#line 577 "unused_args.m"
          transform_hlds__unused_args__VarInf_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_7));
#line 577 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_10));
#line 577 "unused_args.m"
        }
#line 578 "unused_args.m"
        {
#line 578 "unused_args.m"
          mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_5)), ((MR_Box) (transform_hlds__unused_args__VarInf_11)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);
        }
#line 575 "unused_args.m"
      }
#line 574 "unused_args.m"
    else
#line 574 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_13 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12;
#line 574 "unused_args.m"
  }
#line 570 "unused_args.m"
}

#line 563 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 563 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 563 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4)
#line 563 "unused_args.m"
{
#line 566 "unused_args.m"
  {
#line 566 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 566 "unused_args.m"
    {
#line 566 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__VarDep_3, ((MR_Box) (transform_hlds__unused_args__Var_4)));
    }
#line 566 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 566 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 566 "unused_args.m"
  }
#line 563 "unused_args.m"
}

#line 550 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 550 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 550 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 550 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 550 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 550 "unused_args.m"
{
#line 550 "unused_args.m"
  {
#line 550 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 550 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7;

#line 550 "unused_args.m"
    {
#line 550 "unused_args.m"
      transform_hlds__unused_args__set_var_used_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7);
    }
#line 550 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7));
#line 550 "unused_args.m"
  }
#line 550 "unused_args.m"
}

#line 544 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 544 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 544 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 544 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 544 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10)
#line 544 "unused_args.m"
{
#line 547 "unused_args.m"
  {
#line 547 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 547 "unused_args.m"
    MR_Word transform_hlds__unused_args__ChangedInstHeadVars_8;
#line 550 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10;

#line 548 "unused_args.m"
    {
#line 548 "unused_args.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__ProcInfo_6, &transform_hlds__unused_args__ChangedInstHeadVars_8);
    }
#line 550 "unused_args.m"
    {
#line 550 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[8], transform_hlds__unused_args__ChangedInstHeadVars_8, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
    }
#line 550 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_10 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
#line 547 "unused_args.m"
  }
#line 544 "unused_args.m"
}

#line 534 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 534 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 534 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 534 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6)
#line 534 "unused_args.m"
{
#line 537 "unused_args.m"
  {
#line 537 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 537 "unused_args.m"
    MR_Word transform_hlds__unused_args__Locn_7;

#line 538 "unused_args.m"
    {
#line 538 "unused_args.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__unused_args__RttiVarMaps_4, transform_hlds__unused_args__TVar_5, &transform_hlds__unused_args__Locn_7);
    }
#line 539 "unused_args.m"
    {
#line 539 "unused_args.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(transform_hlds__unused_args__Locn_7, transform_hlds__unused_args__TypeInfoVar_6);
    }
#line 537 "unused_args.m"
  }
#line 534 "unused_args.m"
}

#line 532 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 532 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 532 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 532 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 532 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 532 "unused_args.m"
{
#line 532 "unused_args.m"
  {
#line 532 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 532 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11;

#line 532 "unused_args.m"
    {
#line 532 "unused_args.m"
      transform_hlds__unused_args__add_rev_arg_dep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11);
    }
#line 532 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11));
#line 532 "unused_args.m"
  }
#line 532 "unused_args.m"
}

#line 531 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 531 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 531 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 531 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 531 "unused_args.m"
{
#line 531 "unused_args.m"
  {
#line 531 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 531 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_TypeInfoVar_6;

#line 531 "unused_args.m"
    {
#line 531 "unused_args.m"
      transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_TypeInfoVar_6);
    }
#line 531 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_TypeInfoVar_6));
#line 531 "unused_args.m"
  }
#line 531 "unused_args.m"
}

#line 516 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 516 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 516 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6)
#line 516 "unused_args.m"
{
#line 519 "unused_args.m"
  while (MR_TRUE)
#line 519 "unused_args.m"
    {
#line 519 "unused_args.m"
      /* tailcall optimized into a loop */
#line 519 "unused_args.m"
      {
#line 519 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 519 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_6 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5;
#line 519 "unused_args.m"
        else
#line 521 "unused_args.m"
          {
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_23_39;
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_30;
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__TVars_31;
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoVars_32;
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_33_33;
#line 521 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_34_34;
#line 532 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21;

#line 529 "unused_args.m"
            {
#line 529 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypeMap_2, transform_hlds__unused_args__Var_13, &transform_hlds__unused_args__Type_30);
            }
#line 530 "unused_args.m"
            {
#line 530 "unused_args.m"
              parse_tree__prog_type__type_vars_2_p_0(transform_hlds__unused_args__Type_30, &transform_hlds__unused_args__TVars_31);
            }
#line 531 "unused_args.m"
            {
#line 531 "unused_args.m"
              transform_hlds__unused_args__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2]));
#line 531 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1));
#line 531 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 531 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 3) = ((MR_Box) (transform_hlds__unused_args__RttiVarMaps_4));
#line 531 "unused_args.m"
            }
#line 16151 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_23_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 531 "unused_args.m"
            {
#line 531 "unused_args.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[4], transform_hlds__unused_args__TypeInfo_23_39, transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__TVars_31, &transform_hlds__unused_args__TypeInfoVars_32);
            }
#line 532 "unused_args.m"
            {
#line 532 "unused_args.m"
              transform_hlds__unused_args__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 532 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[1]));
#line 532 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2));
#line 532 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 532 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 3) = ((MR_Box) (transform_hlds__unused_args__Var_13));
#line 532 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 4) = ((MR_Box) (transform_hlds__unused_args__PredProcId_3));
#line 532 "unused_args.m"
            }
#line 532 "unused_args.m"
            {
#line 532 "unused_args.m"
              mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_23_39, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__V_34_34, transform_hlds__unused_args__TypeInfoVars_32, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5)), &transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
            }
#line 532 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21 = ((MR_Word) transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
#line 523 "unused_args.m"
            /* direct tailcall eliminated */
#line 523 "unused_args.m"
            {
#line 523 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_14;
#line 523 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;

#line 523 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5;
#line 523 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 523 "unused_args.m"
            }
#line 523 "unused_args.m"
            continue;
#line 521 "unused_args.m"
          }
#line 519 "unused_args.m"
      }
#line 519 "unused_args.m"
      break;
#line 519 "unused_args.m"
    }
#line 516 "unused_args.m"
}

#line 496 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 496 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 496 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 496 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3)
#line 496 "unused_args.m"
{
#line 499 "unused_args.m"
  while (MR_TRUE)
#line 499 "unused_args.m"
    {
#line 499 "unused_args.m"
      /* tailcall optimized into a loop */
#line 499 "unused_args.m"
      {
#line 499 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 499 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2;
#line 499 "unused_args.m"
        else
#line 500 "unused_args.m"
          {
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__VDep_10;
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__Args_11;
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_14_14;
#line 500 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 501 "unused_args.m"
            {
#line 501 "unused_args.m"
              mercury__set__init_1_p_0(transform_hlds__unused_args__TypeInfo_17_17, &transform_hlds__unused_args__VDep_10);
            }
#line 502 "unused_args.m"
            {
#line 502 "unused_args.m"
              mercury__set__init_1_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &transform_hlds__unused_args__Args_11);
            }
#line 503 "unused_args.m"
            {
#line 503 "unused_args.m"
              transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (transform_hlds__unused_args__VDep_10));
#line 503 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__Args_11));
#line 503 "unused_args.m"
            }
#line 503 "unused_args.m"
            {
#line 503 "unused_args.m"
              mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_7)), ((MR_Box) (transform_hlds__unused_args__V_14_14)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 504 "unused_args.m"
            /* direct tailcall eliminated */
#line 504 "unused_args.m"
            {
#line 504 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_8;
#line 504 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 504 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2;
#line 504 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 504 "unused_args.m"
            }
#line 504 "unused_args.m"
            continue;
#line 500 "unused_args.m"
          }
#line 499 "unused_args.m"
      }
#line 499 "unused_args.m"
      break;
#line 499 "unused_args.m"
    }
#line 496 "unused_args.m"
}

#line 432 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 432 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 432 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 432 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 432 "unused_args.m"
{
#line 432 "unused_args.m"
  {
#line 432 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 432 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 432 "unused_args.m"
    {
#line 432 "unused_args.m"
      transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__432__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 432 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_85));
#line 432 "unused_args.m"
  }
#line 432 "unused_args.m"
}

#line 396 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 396 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 396 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 396 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54)
#line 396 "unused_args.m"
{
#line 403 "unused_args.m"
  {
#line 403 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 403 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_81_81;
#line 403 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_17;
#line 403 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_18;
#line 403 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_19;
#line 403 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_21;
#line 403 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55;

#line 404 "unused_args.m"
    {
#line 404 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo_17, &transform_hlds__unused_args__ProcInfo_18);
    }
#line 406 "unused_args.m"
    {
#line 406 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__Globals_19);
    }
#line 16389 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_81_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 408 "unused_args.m"
    {
#line 408 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_81_81, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55);
    }
#line 409 "unused_args.m"
    {
#line 409 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 326, &transform_hlds__unused_args__Intermod_21);
    }
#line 414 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Intermod_21 == (MR_Integer) 1);
#line 414 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 414 "unused_args.m"
      {
#line 415 "unused_args.m"
        {
#line 415 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 414 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 414 "unused_args.m"
          {
#line 416 "unused_args.m"
            {
#line 416 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_17);
            }
#line 416 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 414 "unused_args.m"
          }
#line 414 "unused_args.m"
      }
#line 410 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 418 "unused_args.m"
      {
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredModule_22;
#line 418 "unused_args.m"
        MR_Integer transform_hlds__unused_args__PredArity_23;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_24;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo0_25;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleId_26;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_27;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__MaybeBestResult_28;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo_39;
#line 418 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;

#line 418 "unused_args.m"
        {
#line 418 "unused_args.m"
          transform_hlds__unused_args__PredModule_22 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 419 "unused_args.m"
        {
#line 419 "unused_args.m"
          transform_hlds__unused_args__PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 420 "unused_args.m"
        transform_hlds__unused_args__FuncInfo_24 = (MR_Word) transform_hlds__unused_args__PredArity_23;
#line 421 "unused_args.m"
        {
#line 421 "unused_args.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__AnalysisInfo0_25);
        }
#line 422 "unused_args.m"
        {
#line 422 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__ModuleId_26, &transform_hlds__unused_args__FuncId_27);
        }
#line 425 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 424 "unused_args.m"
        {
#line 424 "unused_args.m"
          analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_25, transform_hlds__unused_args__ModuleId_26, transform_hlds__unused_args__FuncId_27, ((MR_Box) (transform_hlds__unused_args__FuncInfo_24)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__MaybeBestResult_28);
        }
#line 450 "unused_args.m"
        if ((transform_hlds__unused_args__MaybeBestResult_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "unused_args.m"
          {
#line 453 "unused_args.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 452 "unused_args.m"
            {
#line 452 "unused_args.m"
              analysis__record_request_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_3[0], (MR_String) "unused_args", transform_hlds__unused_args__PredModule_22, transform_hlds__unused_args__FuncId_27, ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__AnalysisInfo0_25, &transform_hlds__unused_args__AnalysisInfo_39);
            }
#line 451 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 451 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 451 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 451 "unused_args.m"
          }
#line 450 "unused_args.m"
        else
#line 427 "unused_args.m"
          {
#line 427 "unused_args.m"
            MR_Word transform_hlds__unused_args__BestAnswer_30;
#line 427 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_32;
#line 427 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeBestResult_28, (MR_Integer) 0)));
#line 427 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_31_31;

#line 427 "unused_args.m"
            transform_hlds__unused_args__BestAnswer_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 1)));
#line 427 "unused_args.m"
            transform_hlds__unused_args__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 2)));
#line 428 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_32 = (MR_Word) transform_hlds__unused_args__BestAnswer_30;
#line 446 "unused_args.m"
            if ((transform_hlds__unused_args__UnusedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "unused_args.m"
              {
#line 447 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 447 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 447 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 447 "unused_args.m"
              }
#line 446 "unused_args.m"
            else
#line 430 "unused_args.m"
              {
#line 430 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_20;
#line 430 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_35;
#line 430 "unused_args.m"
                MR_Word transform_hlds__unused_args__UnusedVars_36;
#line 430 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredProcId_37;
#line 430 "unused_args.m"
                MR_Word transform_hlds__unused_args__OptimizeUnusedArgs_38;
#line 430 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_61_61;

#line 431 "unused_args.m"
                {
#line 431 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__HeadVars_35);
                }
#line 432 "unused_args.m"
                {
#line 432 "unused_args.m"
                  transform_hlds__unused_args__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
#line 432 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 1) = ((MR_Box) (transform_hlds__unused_args__setup_proc_args_10_p_0_1));
#line 432 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 432 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 3) = ((MR_Box) (transform_hlds__unused_args__HeadVars_35));
#line 432 "unused_args.m"
                }
#line 432 "unused_args.m"
                {
#line 432 "unused_args.m"
                  mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__TypeInfo_81_81, transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__UnusedArgs_32, &transform_hlds__unused_args__UnusedVars_36);
                }
#line 434 "unused_args.m"
                {
#line 434 "unused_args.m"
                  transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__UnusedVars_36, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__VarDep_20);
                }
#line 435 "unused_args.m"
                {
#line 435 "unused_args.m"
                  transform_hlds__unused_args__PredProcId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 435 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 435 "unused_args.m"
                }
#line 436 "unused_args.m"
                {
#line 436 "unused_args.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__PredProcId_37)), ((MR_Box) (transform_hlds__unused_args__VarDep_20)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
                }
#line 437 "unused_args.m"
                {
#line 437 "unused_args.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 345, &transform_hlds__unused_args__OptimizeUnusedArgs_38);
                }
#line 443 "unused_args.m"
#line 443 "unused_args.m"
                switch (transform_hlds__unused_args__OptimizeUnusedArgs_38) {
#line 443 "unused_args.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 443 "unused_args.m"
                  case (MR_Integer) 0:
#line 444 "unused_args.m"
                    {
#line 444 "unused_args.m"
                      *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 444 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 444 "unused_args.m"
                    }
#line 443 "unused_args.m"
                    break;
#line 443 "unused_args.m"
                  case (MR_Integer) 1:
#line 441 "unused_args.m"
                    {
#line 441 "unused_args.m"
                      transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(transform_hlds__unused_args__PredProcId_37, transform_hlds__unused_args__UnusedArgs_32, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
                    }
#line 443 "unused_args.m"
                    break;
#line 443 "unused_args.m"
                }
#line 430 "unused_args.m"
              }
#line 449 "unused_args.m"
            transform_hlds__unused_args__AnalysisInfo_39 = transform_hlds__unused_args__AnalysisInfo0_25;
#line 427 "unused_args.m"
          }
#line 455 "unused_args.m"
        {
#line 455 "unused_args.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_39, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);
        }
#line 418 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49;
#line 418 "unused_args.m"
      }
#line 410 "unused_args.m"
    else
#line 456 "unused_args.m"
      {
#line 458 "unused_args.m"
        {
#line 458 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 459 "unused_args.m"
        if (!(transform_hlds__unused_args__succeeded))
#line 459 "unused_args.m"
          {
#line 460 "unused_args.m"
            {
#line 460 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_93_93;

#line 460 "unused_args.m"
              {
#line 460 "unused_args.m"
                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
              }
#line 460 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 460 "unused_args.m"
                {
#line 461 "unused_args.m"
                  {
#line 461 "unused_args.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__unused_args__V_93_93);
                  }
#line 461 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__ProcId_12 == transform_hlds__unused_args__V_93_93);
#line 460 "unused_args.m"
                }
#line 460 "unused_args.m"
            }
#line 459 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 465 "unused_args.m"
              {
#line 465 "unused_args.m"
                MR_Word transform_hlds__unused_args__EvalMethod_40;

#line 465 "unused_args.m"
                {
#line 465 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__EvalMethod_40);
                }
#line 466 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__EvalMethod_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 465 "unused_args.m"
              }
#line 459 "unused_args.m"
          }
#line 456 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 469 "unused_args.m"
          {
#line 469 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49;
#line 469 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 469 "unused_args.m"
          }
#line 456 "unused_args.m"
        else
#line 471 "unused_args.m"
          {
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarTypes_41;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_42;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoLiveness_43;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_45;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__Info_46;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_72_72;
#line 471 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78;

#line 471 "unused_args.m"
            {
#line 471 "unused_args.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__VarTypes_41);
            }
#line 472 "unused_args.m"
            {
#line 472 "unused_args.m"
              hlds__vartypes__vartypes_vars_2_p_0(transform_hlds__unused_args__VarTypes_41, &transform_hlds__unused_args__Vars_42);
            }
#line 473 "unused_args.m"
            {
#line 473 "unused_args.m"
              transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67);
            }
#line 474 "unused_args.m"
            {
#line 474 "unused_args.m"
              transform_hlds__unused_args__setup_output_args_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__ProcInfo_18, transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68);
            }
#line 476 "unused_args.m"
            {
#line 476 "unused_args.m"
              hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, transform_hlds__unused_args__Globals_19, &transform_hlds__unused_args__TypeInfoLiveness_43);
            }
#line 483 "unused_args.m"
#line 483 "unused_args.m"
            switch (transform_hlds__unused_args__TypeInfoLiveness_43) {
#line 483 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 483 "unused_args.m"
              case (MR_Integer) 0:
#line 484 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 483 "unused_args.m"
                break;
#line 483 "unused_args.m"
              case (MR_Integer) 1:
#line 479 "unused_args.m"
                {
#line 479 "unused_args.m"
                  MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 479 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_69_69;

#line 480 "unused_args.m"
                  {
#line 480 "unused_args.m"
                    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__RttiVarMaps_44);
                  }
#line 481 "unused_args.m"
                  {
#line 481 "unused_args.m"
                    transform_hlds__unused_args__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 481 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 481 "unused_args.m"
                  }
#line 481 "unused_args.m"
                  {
#line 481 "unused_args.m"
                    transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__VarTypes_41, transform_hlds__unused_args__V_69_69, transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70);
                  }
#line 479 "unused_args.m"
                }
#line 483 "unused_args.m"
                break;
#line 483 "unused_args.m"
            }
#line 487 "unused_args.m"
            {
#line 487 "unused_args.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__Goal_45);
            }
#line 488 "unused_args.m"
            {
#line 488 "unused_args.m"
              transform_hlds__unused_args__Info_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 0) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53));
#line 488 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 1) = ((MR_Box) (transform_hlds__unused_args__VarTypes_41));
#line 488 "unused_args.m"
            }
#line 489 "unused_args.m"
            {
#line 489 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_46, transform_hlds__unused_args__Goal_45, transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78);
            }
#line 490 "unused_args.m"
            {
#line 490 "unused_args.m"
              transform_hlds__unused_args__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 490 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 490 "unused_args.m"
            }
#line 490 "unused_args.m"
            {
#line 490 "unused_args.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__V_72_72)), ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
            }
#line 492 "unused_args.m"
            {
#line 492 "unused_args.m"
              MR_Word base;
#line 492 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = base;
#line 492 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_72_72));
#line 492 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49));
#line 492 "unused_args.m"
            }
#line 471 "unused_args.m"
          }
#line 456 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 456 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 456 "unused_args.m"
      }
#line 403 "unused_args.m"
  }
#line 396 "unused_args.m"
}

#line 380 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 380 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 380 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10)
#line 380 "unused_args.m"
{
#line 386 "unused_args.m"
  while (MR_TRUE)
#line 386 "unused_args.m"
    {
#line 386 "unused_args.m"
      /* tailcall optimized into a loop */
#line 386 "unused_args.m"
      {
#line 386 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 386 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "unused_args.m"
          {
#line 386 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9;
#line 386 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7;
#line 386 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5;
#line 386 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3;
#line 386 "unused_args.m"
          }
#line 386 "unused_args.m"
        else
#line 388 "unused_args.m"
          {
#line 388 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 388 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 388 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40;
#line 388 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 388 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 389 "unused_args.m"
            {
#line 389 "unused_args.m"
              transform_hlds__unused_args__setup_proc_args_10_p_0(transform_hlds__unused_args__PredId_1, transform_hlds__unused_args__ProcId_25, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39, transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5, &transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 391 "unused_args.m"
            /* direct tailcall eliminated */
#line 391 "unused_args.m"
            {
#line 391 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__ProcIds_26;
#line 391 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 391 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40;
#line 391 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 391 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 391 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 391 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7;
#line 391 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0__tmp_copy_5;
#line 391 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3;
#line 391 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 391 "unused_args.m"
            }
#line 391 "unused_args.m"
            continue;
#line 388 "unused_args.m"
          }
#line 386 "unused_args.m"
      }
#line 386 "unused_args.m"
      break;
#line 386 "unused_args.m"
    }
#line 380 "unused_args.m"
}

#line 336 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 336 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 336 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9)
#line 336 "unused_args.m"
{
#line 342 "unused_args.m"
  while (MR_TRUE)
#line 342 "unused_args.m"
    {
#line 342 "unused_args.m"
      /* tailcall optimized into a loop */
#line 342 "unused_args.m"
      {
#line 342 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 342 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "unused_args.m"
          {
#line 342 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 342 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 342 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__4_4;
#line 342 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 342 "unused_args.m"
          }
#line 342 "unused_args.m"
        else
#line 344 "unused_args.m"
          {
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;
#line 344 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredInfo_57;

#line 359 "unused_args.m"
            {
#line 359 "unused_args.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__unused_args__PredId_22, &transform_hlds__unused_args__PredInfo_57);
            }
#line 365 "unused_args.m"
            {
#line 365 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_57);
            }
#line 366 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 367 "unused_args.m"
              {
#line 367 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_58;

#line 367 "unused_args.m"
                {
#line 367 "unused_args.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_57, &transform_hlds__unused_args__Markers_58);
                }
#line 368 "unused_args.m"
                {
#line 368 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_58, (MR_Integer) 0);
                }
#line 367 "unused_args.m"
              }
#line 360 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 371 "unused_args.m"
              {
#line 371 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 371 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 371 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37 = transform_hlds__unused_args__HeadVar__4_4;
#line 371 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 371 "unused_args.m"
              }
#line 360 "unused_args.m"
            else
#line 373 "unused_args.m"
              {
#line 373 "unused_args.m"
                MR_Word transform_hlds__unused_args__ProcIds_59;

#line 373 "unused_args.m"
                {
#line 373 "unused_args.m"
                  transform_hlds__unused_args__ProcIds_59 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_57);
                }
#line 374 "unused_args.m"
                {
#line 374 "unused_args.m"
                  transform_hlds__unused_args__setup_pred_args_10_p_0(transform_hlds__unused_args__PredId_22, transform_hlds__unused_args__ProcIds_59, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36, transform_hlds__unused_args__HeadVar__4_4, &transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39);
                }
#line 373 "unused_args.m"
              }
#line 347 "unused_args.m"
            /* direct tailcall eliminated */
#line 347 "unused_args.m"
            {
#line 347 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredIds_23;
#line 347 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 347 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__4__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 347 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 347 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;

#line 347 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 347 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6;
#line 347 "unused_args.m"
              transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__HeadVar__4__tmp_copy_4;
#line 347 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2;
#line 347 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 347 "unused_args.m"
            }
#line 347 "unused_args.m"
            continue;
#line 344 "unused_args.m"
          }
#line 342 "unused_args.m"
      }
#line 342 "unused_args.m"
      break;
#line 342 "unused_args.m"
    }
#line 336 "unused_args.m"
}

#line 176 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 176 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3)
#line 176 "unused_args.m"
{
#line 178 "unused_args.m"
  {
#line 178 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 178 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__UnusedArgs_3;

#line 178 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__2_2;
#line 178 "unused_args.m"
  }
#line 176 "unused_args.m"
}

#line 297 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 297 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 297 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 297 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5)
#line 297 "unused_args.m"
{
#line 297 "unused_args.m"
  {
#line 297 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 297 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47;
#line 297 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 297 "unused_args.m"
    {
#line 297 "unused_args.m"
      transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47, ((MR_Word) transform_hlds__unused_args__wrapper_arg_4), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
    }
#line 297 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47));
#line 297 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_5 = ((MR_Box) (transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49));
#line 297 "unused_args.m"
  }
#line 297 "unused_args.m"
}

#line 288 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
#line 288 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 288 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 288 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 288 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 288 "unused_args.m"
{
#line 288 "unused_args.m"
  {
#line 288 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 288 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13;

#line 288 "unused_args.m"
    {
#line 288 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 288 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13));
#line 288 "unused_args.m"
  }
#line 288 "unused_args.m"
}

#line 286 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
#line 286 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 286 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 286 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 286 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 286 "unused_args.m"
{
#line 286 "unused_args.m"
  {
#line 286 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 286 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13;

#line 286 "unused_args.m"
    {
#line 286 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 286 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13));
#line 286 "unused_args.m"
  }
#line 286 "unused_args.m"
}

#line 62 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0(
#line 62 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29,
#line 62 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30,
#line 62 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Specs_6,
#line 62 "unused_args.m"
  MR_Word * transform_hlds__unused_args__UnusedArgInfos_7)
#line 62 "unused_args.m"
{
#line 238 "unused_args.m"
  {
#line 238 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_48_48;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_49_49;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_17_80;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_8;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__VeryVerbose_9;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_10;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcIds_11;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_12;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage_13;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo0_14;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo_15;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcIdsToFix_16;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeOpt_17;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodAnalysis_18;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoGather_19;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoWarn_20;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeAnalysisRegistry_22;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoFixup_27;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_75;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_76;
#line 238 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredIds_77;

#line 239 "unused_args.m"
    {
#line 239 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__Globals_8);
    }
#line 240 "unused_args.m"
    {
#line 240 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 47, &transform_hlds__unused_args__VeryVerbose_9);
    }
#line 17344 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_17_80 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 328 "unused_args.m"
    {
#line 328 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_80, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, &transform_hlds__unused_args__ProcCallInfo0_75);
    }
#line 329 "unused_args.m"
    {
#line 329 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_80, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], &transform_hlds__unused_args__VarUsage0_76);
    }
#line 330 "unused_args.m"
    {
#line 330 "unused_args.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__PredIds_77);
    }
#line 331 "unused_args.m"
    {
#line 331 "unused_args.m"
      transform_hlds__unused_args__setup_local_var_usage_9_p_0(transform_hlds__unused_args__PredIds_77, transform_hlds__unused_args__VarUsage0_76, &transform_hlds__unused_args__VarUsage0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__ProcCallInfo0_75, &transform_hlds__unused_args__ProcCallInfo0_12, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 244 "unused_args.m"
    {
#line 244 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__VarUsage0_10, &transform_hlds__unused_args__VarUsage_13);
    }
#line 17371 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 17373 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_49_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 247 "unused_args.m"
    {
#line 247 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeInfo_49_49, &transform_hlds__unused_args__UnusedArgInfo0_14);
    }
#line 248 "unused_args.m"
    {
#line 248 "unused_args.m"
      transform_hlds__unused_args__get_unused_arg_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__VarUsage_13, transform_hlds__unused_args__UnusedArgInfo0_14, &transform_hlds__unused_args__UnusedArgInfo_15);
    }
#line 251 "unused_args.m"
    {
#line 251 "unused_args.m"
      mercury__map__keys_2_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeInfo_49_49, transform_hlds__unused_args__UnusedArgInfo_15, &transform_hlds__unused_args__PredProcIdsToFix_16);
    }
#line 252 "unused_args.m"
    {
#line 252 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 87, &transform_hlds__unused_args__MakeOpt_17);
    }
#line 253 "unused_args.m"
    {
#line 253 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 326, &transform_hlds__unused_args__IntermodAnalysis_18);
    }
#line 258 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_17 == (MR_Integer) 1);
#line 258 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 259 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodAnalysis_18 == (MR_Integer) 0);
#line 257 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 261 "unused_args.m"
      transform_hlds__unused_args__DoGather_19 = (MR_Integer) 1;
#line 257 "unused_args.m"
    else
#line 263 "unused_args.m"
      transform_hlds__unused_args__DoGather_19 = (MR_Integer) 0;
#line 265 "unused_args.m"
    {
#line 265 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 10, &transform_hlds__unused_args__DoWarn_20);
    }
#line 267 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__DoWarn_20 == (MR_Integer) 1);
#line 268 "unused_args.m"
    if (!(transform_hlds__unused_args__succeeded))
#line 268 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_17 == (MR_Integer) 1);
#line 266 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 271 "unused_args.m"
      {
#line 271 "unused_args.m"
        MR_Word transform_hlds__unused_args__WarnedPredIds0_21;
#line 271 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38;

#line 271 "unused_args.m"
        {
#line 271 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__unused_args__WarnedPredIds0_21);
        }
#line 274 "unused_args.m"
        {
#line 274 "unused_args.m"
          transform_hlds__unused_args__V_38_38 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0);
        }
#line 272 "unused_args.m"
        {
#line 272 "unused_args.m"
          transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__unused_args__UnusedArgInfo_15, transform_hlds__unused_args__DoWarn_20, transform_hlds__unused_args__DoGather_19, transform_hlds__unused_args__PredProcIdsToFix_16, transform_hlds__unused_args__WarnedPredIds0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unused_args__Specs_6, transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__UnusedArgInfos_7);
        }
#line 271 "unused_args.m"
      }
#line 266 "unused_args.m"
    else
#line 276 "unused_args.m"
      {
#line 276 "unused_args.m"
        *transform_hlds__unused_args__Specs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 277 "unused_args.m"
        {
#line 277 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, transform_hlds__unused_args__UnusedArgInfos_7);
        }
#line 276 "unused_args.m"
      }
#line 279 "unused_args.m"
    {
#line 279 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 89, &transform_hlds__unused_args__MakeAnalysisRegistry_22);
    }
#line 291 "unused_args.m"
#line 291 "unused_args.m"
    switch (transform_hlds__unused_args__MakeAnalysisRegistry_22) {
#line 291 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 291 "unused_args.m"
      case (MR_Integer) 0:
#line 292 "unused_args.m"
        transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32;
#line 291 "unused_args.m"
        break;
#line 291 "unused_args.m"
      case (MR_Integer) 1:
#line 282 "unused_args.m"
        {
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_57_57;
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_23;
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredIds_24;
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo1_25;
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo_26;
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_40_40;
#line 282 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_41_41;
#line 285 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv1_AnalysisInfo1_25;
#line 288 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv3_AnalysisInfo_26;

#line 283 "unused_args.m"
          {
#line 283 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__AnalysisInfo0_23);
          }
#line 284 "unused_args.m"
          {
#line 284 "unused_args.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__PredIds_24);
          }
#line 286 "unused_args.m"
          {
#line 286 "unused_args.m"
            transform_hlds__unused_args__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 286 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[0]));
#line 286 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_1));
#line 286 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 286 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32));
#line 286 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_15));
#line 286 "unused_args.m"
          }
#line 17529 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0;
#line 285 "unused_args.m"
          {
#line 285 "unused_args.m"
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__unused_args__TypeCtorInfo_57_57, transform_hlds__unused_args__V_40_40, transform_hlds__unused_args__PredIds_24, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo0_23)), &transform_hlds__unused_args__conv1_AnalysisInfo1_25);
          }
#line 285 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo1_25 = ((MR_Word) transform_hlds__unused_args__conv1_AnalysisInfo1_25);
#line 288 "unused_args.m"
          {
#line 288 "unused_args.m"
            transform_hlds__unused_args__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 288 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_2));
#line 288 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32));
#line 288 "unused_args.m"
          }
#line 288 "unused_args.m"
          {
#line 288 "unused_args.m"
            mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeCtorInfo_57_57, transform_hlds__unused_args__V_41_41, transform_hlds__unused_args__PredProcIds_11, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo1_25)), &transform_hlds__unused_args__conv3_AnalysisInfo_26);
          }
#line 288 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo_26 = ((MR_Word) transform_hlds__unused_args__conv3_AnalysisInfo_26);
#line 290 "unused_args.m"
          {
#line 290 "unused_args.m"
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_26, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
          }
#line 282 "unused_args.m"
        }
#line 291 "unused_args.m"
        break;
#line 291 "unused_args.m"
    }
#line 294 "unused_args.m"
    {
#line 294 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 345, &transform_hlds__unused_args__DoFixup_27);
    }
#line 311 "unused_args.m"
#line 311 "unused_args.m"
    switch (transform_hlds__unused_args__DoFixup_27) {
#line 311 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 311 "unused_args.m"
      case (MR_Integer) 0:
#line 312 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;
#line 311 "unused_args.m"
        break;
#line 311 "unused_args.m"
      case (MR_Integer) 1:
#line 296 "unused_args.m"
        {
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_28;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_44_44;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46;
#line 297 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv7_ProcCallInfo_28;
#line 297 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45;

#line 297 "unused_args.m"
          {
#line 297 "unused_args.m"
            transform_hlds__unused_args__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 297 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[0]));
#line 297 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_3));
#line 297 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 297 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_15));
#line 297 "unused_args.m"
          }
#line 297 "unused_args.m"
          {
#line 297 "unused_args.m"
            mercury__list__foldl2_6_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, (MR_Word) &transform_hlds__unused_args_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_44_44, transform_hlds__unused_args__PredProcIdsToFix_16, ((MR_Box) (transform_hlds__unused_args__ProcCallInfo0_12)), &transform_hlds__unused_args__conv7_ProcCallInfo_28, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42)), &transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45);
          }
#line 297 "unused_args.m"
          transform_hlds__unused_args__ProcCallInfo_28 = ((MR_Word) transform_hlds__unused_args__conv7_ProcCallInfo_28);
#line 297 "unused_args.m"
          transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45 = ((MR_Word) transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45);
#line 301 "unused_args.m"
          {
#line 301 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_module_6_p_0(transform_hlds__unused_args__VeryVerbose_9, transform_hlds__unused_args__VarUsage_13, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__ProcCallInfo_28, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46);
          }
#line 304 "unused_args.m"
          {
#line 304 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_28);
          }
#line 304 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 304 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46;
#line 304 "unused_args.m"
          else
#line 309 "unused_args.m"
            {
#line 309 "unused_args.m"
              hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30);
            }
#line 296 "unused_args.m"
        }
#line 311 "unused_args.m"
        break;
#line 311 "unused_args.m"
    }
#line 238 "unused_args.m"
  }
#line 62 "unused_args.m"
}

void mercury__transform_hlds__unused_args__init(void)
{
}

void mercury__transform_hlds__unused_args__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_proc_call_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_dep_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_usage_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_warning_info_0);
}

void mercury__transform_hlds__unused_args__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.unused_args. */
